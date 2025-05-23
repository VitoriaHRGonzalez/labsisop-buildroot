#! /usr/bin/perl -w

# Copyright (C) 2006, 2008-2015, 2018-2021 Free Software Foundation,
# Inc.
#
# This file is part of Bison, the GNU Compiler Compiler.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.

=head1 NAME

bench.pl - bench marks for Bison parsers.

=head1 SYNOPSIS

  ./bench.pl [OPTIONS]... DIRECTIVES

=head1 DIRECTIVES

Specify the set of benches to run.  The following grammar defines the
I<directives>:

   directives ::=
       directives | directives  -- Alternation
     | directives & directives  -- Concatenation
     | [ directives> ]          -- Optional
     | ( directives> )          -- Parentheses
     | %b PATH                  -- Use bison at PATH for this bench
     | #d NAME[=VALUE]          -- %code { #define NAME [VALUE] }
     | %d NAME[=VALUE]          -- %define NAME [VALUE]
     | %s skeleton              -- %skeleton "skeleton"
     | directive

Parentheses only group to override precedence.  For instance:

  [ %debug ] & [ %d parse.error=verbose ] & [ %define variant ]

will generate eight different cases.

=head1 OPTIONS

=over 4

=item B<-b>, B<--bench>

Predefined benches, that is, combination between a grammar and a I<directives>
request.

=over 4

=item I<push>

Test the push parser vs. the pull interface.  Use the C parser.

=item I<variant>

Test the use of variants instead of union in the C++ parser.

=back

=item B<-c>, B<--cflags>=I<flags>

Flags to pass to the C or C++ compiler.  Defaults to -O2.

=item B<-d>, B<--directive>=I<directives>

Add a set of Bison directives to bench against each other.

=item B<-g>, B<--grammar>=I<grammar>

Select the base I<grammar> to use.  Defaults to I<calc>.

=over 4

=item I<calc>

Traditional calculator.

=item I<list>

C++ grammar that uses std::string and std::list.  Can be used with
or without %define variant.

=item I<triangular>

Artificial grammar with very long rules.

=back

=item B<-h>, B<--help>

Display this message and exit successfully.  The more verbose, the more
details.

=item B<-i>, B<--iterations>=I<integer>

Say how many times a single test of the bench must be run.  If
negative, specify the minimum number of CPU seconds to run.  Defaults
to -1.

=item B<-k>, B<--gbench>

Use Google Benchmark.

=item B<-q>, B<--quiet>

Decrease the verbosity level (defaults to 1).

=item B<-v>, B<--verbose>

Raise the verbosity level (defaults to 1).

=back

=cut

use strict;
use IO::File;

##################################################################

=head1 VARIABLES

=over 4

=item C<@bench>

The list of benches to run.

=item C<$bison>

The Bison program to use to compile the grammar.

=item C<$cc>

The C compiler.

=item C<$cxx>

The C++-11 compiler.

=item C<$cflags>

Compiler flags (C or C++).

=item C<@directive>

A list of directive sets to measure against each other.

=item C<$iterations>

The number of times the parser is run for a bench.

=item C<$verbose>

Verbosity level.

=back

=cut

my $bench;
my $bison = $ENV{'BISON'} || '/workspaces/labsisop-buildroot/output/build/host-bison-3.8.2/tests/bison';
my $cc = $ENV{'CC'} || 'gcc';
my $cxx = $ENV{'CXX'} || 'g++ -std=c++11';
my $cflags = '-O2';
my @directive = ();
my $gbench = 0;
my $grammar = 'calc';
my $iterations = -1;
my $verbose = 1;

=head1 FUNCTIONS

=over 4

=item C<verbose ($level, $message)>

Report the C<$message> is C<$level> E<lt>= C<$verbose>.

=cut

sub verbose ($$)
{
  my ($level, $message) = @_;
  print STDERR $message
    if $level <= $verbose;
}


######################################################################

=item C<directives ($bench, @directive)>

Format the list of directives for Bison for bench named C<$bench>.

=cut

sub directives ($@)
{
  my ($bench, @directive) = @_;
  my $res = "/* Directives for bench '$bench'. */\n";
  $res .= join ("\n", @directive) . "\n";
  $res .= "/* End of directives for bench '$bench'. */\n";
  return $res;
}

######################################################################

=item C<is_pure (@directive)>

Whether api.pure is set.

=cut

sub is_pure (@)
{
  my (@directive) = @_;
  for my $dir (@directive)
    {
      if ($dir =~ /\A%define api.pure/)
        {
          return 1;
        }
    }
  return 0;
}

######################################################################

=item C<generate_grammar_triangular ($base, $max, @directive)>

Create a large triangular grammar which looks like :

  input:
    exp        { if ($1 != 0) abort (); $$ = $1; }
  | input exp  { if ($2 != $1 + 1) abort (); $$ = $2; }
  ;

  exp:
    END                         { $$ = 0; }
  | "1"  END                    { $$ = 1; }
  | "1" "2"  END                { $$ = 2; }
  | "1" "2" "3"  END            { $$ = 3; }
  | "1" "2" "3" "4"  END        { $$ = 4; }
  | "1" "2" "3" "4" "5"  END    { $$ = 5; }
  ;

C<$base> is the base name for the file to create (F<$base.y>).
C<$max> is the number of such rules (here, 5).  You may pass
additional Bison C<@directive>.

The created parser is self contained: it includes its scanner, and
source of input.
=cut

sub generate_grammar_triangular ($$@)
{
  my ($base, $max, @directive) = @_;
  my $directives = directives ($base, @directive);

  my $out = new IO::File ">$base.y"
    or die;
  print $out <<EOF;
%{
#include <stdio.h>
#include <stdlib.h>

static int yylex (void);
static void yyerror (const char *msg);
%}
$directives
%union
{
  int val;
};

%token END "end"
%type <val> exp input
EOF

  for my $size (1 .. $max)
    {
      print $out "%token t$size $size \"$size\"\n";
    };

print $out <<EOF;
%%
input:
  exp        { if (\$1 != 0) abort (); \$\$ = \$1; }
| input exp  { if (\$2 != \$1 + 1) abort (); \$\$ = \$2; }
;

exp:
  END
    { \$\$ = 0; }
EOF

for my $size (1 .. $max)
  {
    use Text::Wrap;
    print $out wrap ("| ", "   ",
                     (map { "\"$_\"" } (1 .. $size)),
                     " END \n"),
               "    { \$\$ = $size; }\n";
  };
print $out ";\n";

print $out <<EOF;
%%
static int
yylex (void)
{
  static int inner = 1;
  static int outer = 0;
  if (outer > $max)
    return 0;
  else if (inner > outer)
    {
      inner = 1;
      ++outer;
      return END;
    }
  return inner++;
}

static void
yyerror (const char *msg)
{
  fprintf (stderr, "%s\\n", msg);
}

int
main (void)
{
#if YYDEBUG
  yydebug = !!getenv ("YYDEBUG");
#endif
  return yyparse ();
}
EOF
}

##################################################################

=item C<calc_input ($out)>

Emit in C<$out> input for the calc parser.  The input is composed of
two expressions.  The first one is using left recursion only and
consumes no stack.  The second one requires a deep stack.  These two
expressions are repeated C<$max> times in the output file.

=cut

sub calc_input ($)
{
  my ($out) = @_;
  print $out "0+1+2+3+4+5+6+7+8+9+10+11+12+13+14+15+16+17+18+19+20+21+22+23+24+25+26+27+28+29+30+31+32+33+34+35+36+37+38+39+40+41+42+43+44+45+46+47+48+49+50+51+52+53+54+55+56+57+58+59+60+61+62+63+64+65+66+67+68+69+70+71+72+73+74+75+76+77+78+79+80+81+82+83+84+85+86+87+88+89+90+91+92+93+94+95+96+97+98+99\\n\\\n";
  if (!$gbench)
    {
      print $out "1+1*(2+2*(3+3*(4+4*(5+5*(6+6*(7+7*(8+8*(9+9*(10+10*(11+11*(12+12*(13+13*(14+14*(15+15*(16+16*(17+17*(18+18*(19+19*(20+20*(21+21*(22+22*(23+23*(24+24*(25+25*(26+26*(27+27*(28+28*(29+29*(30+30*(31+31*(32+32*(33+33*(34+34*(35+35*(36+36*(37+37*(38+38*(39+39*(40+40*(41+41*(42+42*(43+43*(44+44*(45+45*(46+46*(47+47*(48+48*(49+49*(50+50*(51+51*(52+52*(53+53*(54+54*(55+55*(56+56*(57+57*(58+58*(59+59*(60+60*(61+61*(62+62*(63+63*(64+64*(65+65*(66+66*(67+67*(68+68*(69+69*(70+70*(71+71*(72+72*(73+73*(74+74*(75+75*(76+76*(77+77*(78+78*(79+79*(80+80*(81+81*(82+82*(83+83*(84+84*(85+85*(86+86*(87+87*(88+88*(89+89*(90+90*(91+91*(92+92*(93+93*(94+94*(95+95*(96+96*(97+97*(98+98*(99+99*(100+100*(101+101*(102+102*(103+103*(104+104*(105+105*(106+106*(107+107*(108+108*(109+109*(110+110*(111+111*(112+112*(113+113*(114+114*(115+115*(116+116*(117+117*(118+118*(119+119*(120+120*(121+121*(122+122*(123+123*(124+124*(125+125*(126+126*(127+127*(128+128*(129+129*(130+130*(131+131*(132+132*(133+133*(134+134*(135+135*(136+136*(137+137*(138+138*(139+139*(140+140*(141+141*(142+142*(143+143*(144+144*(145+145*(146+146*(147+147*(148+148*(149+149*(150+150*(151+151*(152+152*(153+153*(154+154*(155+155*(156+156*(157+157*(158+158*(159+159*(160+160*(161+161*(162+162*(163+163*(164+164*(165+165*(166+166*(167+167*(168+168*(169+169*(170+170*(171+171*(172+172*(173+173*(174+174*(175+175*(176+176*(177+177*(178+178*(179+179*(180+180*(181+181*(182+182*(183+183*(184+184*(185+185*(186+186*(187+187*(188+188*(189+189*(190+190*(191+191*(192+192*(193+193*(194+194*(195+195*(196+196*(197+197*(198+198*(199+199*(200+200*(201+201*(202+202*(203+203*(204+204*(205+205*(206+206*(207+207*(208+208*(209+209*(210+210*(211+211*(212+212*(213+213*(214+214*(215+215*(216+216*(217+217*(218+218*(219+219*(220+220*(221+221*(222+222*(223+223*(224+224*(225+225*(226+226*(227+227*(228+228*(229+229*(230+230*(231+231*(232+232*(233+233*(234+234*(235+235*(236+236*(237+237*(238+238*(239+239*(240+240*(241+241*(242+242*(243+243*(244+244*(245+245*(246+246*(247+247*(248+248*(249+249*(250+250*(251+251*(252+252*(253+253*(254+254*(255+255*(256+256*(257+257*(258+258*(259+259*(260+260*(261+261*(262+262*(263+263*(264+264*(265+265*(266+266*(267+267*(268+268*(269+269*(270+270*(271+271*(272+272*(273+273*(274+274*(275+275*(276+276*(277+277*(278+278*(279+279*(280+280*(281+281*(282+282*(283+283*(284+284*(285+285*(286+286*(287+287*(288+288*(289+289*(290+290*(291+291*(292+292*(293+293*(294+294*(295+295*(296+296*(297+297*(298+298*(299+299*(300+300*(301+301*(302+302*(303+303*(304+304*(305+305*(306+306*(307+307*(308+308*(309+309*(310+310*(311+311*(312+312*(313+313*(314+314*(315+315*(316+316*(317+317*(318+318*(319+319*(320+320*(321+321*(322+322*(323+323*(324+324*(325+325*(326+326*(327+327*(328+328*(329+329*(330+330*(331+331*(332+332*(333+333*(334+334*(335+335*(336+336*(337+337*(338+338*(339+339*(340+340*(341+341*(342+342*(343+343*(344+344*(345+345*(346+346*(347+347*(348+348*(349+349*(350+350*(351+351*(352+352*(353+353*(354+354*(355+355*(356+356*(357+357*(358+358*(359+359*(360+360*(361+361*(362+362*(363+363*(364+364*(365+365*(366+366*(367+367*(368+368*(369+369*(370+370*(371+371*(372+372*(373+373*(374+374*(375+375*(376+376*(377+377*(378+378*(379+379*(380+380*(381+381*(382+382*(383+383*(384+384*(385+385*(386+386*(387+387*(388+388*(389+389*(390+390*(391+391*(392+392*(393+393*(394+394*(395+395*(396+396*(397+397*(398+398*(399+399*(400+400*(401+401*(402+402*(403+403*(404+404*(405+405*(406+406*(407+407*(408+408*(409+409*(410+410*(411+411*(412+412*(413+413*(414+414*(415+415*(416+416*(417+417*(418+418*(419+419*(420+420*(421+421*(422+422*(423+423*(424+424*(425+425*(426+426*(427+427*(428+428*(429+429*(430+430*(431+431*(432+432*(433+433*(434+434*(435+435*(436+436*(437+437*(438+438*(439+439*(440+440*(441+441*(442+442*(443+443*(444+444*(445+445*(446+446*(447+447*(448+448*(449+449*(450+450*(451+451*(452+452*(453+453*(454+454*(455+455*(456+456*(457+457*(458+458*(459+459*(460+460*(461+461*(462+462*(463+463*(464+464*(465+465*(466+466*(467+467*(468+468*(469+469*(470+470*(471+471*(472+472*(473+473*(474+474*(475+475*(476+476*(477+477*(478+478*(479+479*(480+480*(481+481*(482+482*(483+483*(484+484*(485+485*(486+486*(487+487*(488+488*(489+489*(490+490*(491+491*(492+492*(493+493*(494+494*(495+495*(496+496*(497+497*(498+498*(499+499*(500+500*(501+501*(502+502*(503+503*(504+504*(505+505*(506+506*(507+507*(508+508*(509+509*(510+510*(511+511*(512+512*(513+513*(514+514*(515+515*(516+516*(517+517*(518+518*(519+519*(520+520*(521+521*(522+522*(523+523*(524+524*(525+525*(526+526*(527+527*(528+528*(529+529*(530+530*(531+531*(532+532*(533+533*(534+534*(535+535*(536+536*(537+537*(538+538*(539+539*(540+540*(541+541*(542+542*(543+543*(544+544*(545+545*(546+546*(547+547*(548+548*(549+549*(550+550*(551+551*(552+552*(553+553*(554+554*(555+555*(556+556*(557+557*(558+558*(559+559*(560+560*(561+561*(562+562*(563+563*(564+564*(565+565*(566+566*(567+567*(568+568*(569+569*(570+570*(571+571*(572+572*(573+573*(574+574*(575+575*(576+576*(577+577*(578+578*(579+579*(580+580*(581+581*(582+582*(583+583*(584+584*(585+585*(586+586*(587+587*(588+588*(589+589*(590+590*(591+591*(592+592*(593+593*(594+594*(595+595*(596+596*(597+597*(598+598*(599+599*(600+600*(601+601*(602+602*(603+603*(604+604*(605+605*(606+606*(607+607*(608+608*(609+609*(610+610*(611+611*(612+612*(613+613*(614+614*(615+615*(616+616*(617+617*(618+618*(619+619*(620+620*(621+621*(622+622*(623+623*(624+624*(625+625*(626+626*(627+627*(628+628*(629+629*(630+630*(631+631*(632+632*(633+633*(634+634*(635+635*(636+636*(637+637*(638+638*(639+639*(640+640*(641+641*(642+642*(643+643*(644+644*(645+645*(646+646*(647+647*(648+648*(649+649*(650+650*(651+651*(652+652*(653+653*(654+654*(655+655*(656+656*(657+657*(658+658*(659+659*(660+660*(661+661*(662+662*(663+663*(664+664*(665+665*(666+666*(667+667*(668+668*(669+669*(670+670*(671+671*(672+672*(673+673*(674+674*(675+675*(676+676*(677+677*(678+678*(679+679*(680+680*(681+681*(682+682*(683+683*(684+684*(685+685*(686+686*(687+687*(688+688*(689+689*(690+690*(691+691*(692+692*(693+693*(694+694*(695+695*(696+696*(697+697*(698+698*(699+699*(700+700*(701+701*(702+702*(703+703*(704+704*(705+705*(706+706*(707+707*(708+708*(709+709*(710+710*(711+711*(712+712*(713+713*(714+714*(715+715*(716+716*(717+717*(718+718*(719+719*(720+720*(721+721*(722+722*(723+723*(724+724*(725+725*(726+726*(727+727*(728+728*(729+729*(730+730*(731+731*(732+732*(733+733*(734+734*(735+735*(736+736*(737+737*(738+738*(739+739*(740+740*(741+741*(742+742*(743+743*(744+744*(745+745*(746+746*(747+747*(748+748*(749+749*(750+750*(751+751*(752+752*(753+753*(754+754*(755+755*(756+756*(757+757*(758+758*(759+759*(760+760*(761+761*(762+762*(763+763*(764+764*(765+765*(766+766*(767+767*(768+768*(769+769*(770+770*(771+771*(772+772*(773+773*(774+774*(775+775*(776+776*(777+777*(778+778*(779+779*(780+780*(781+781*(782+782*(783+783*(784+784*(785+785*(786+786*(787+787*(788+788*(789+789*(790+790*(791+791*(792+792*(793+793*(794+794*(795+795*(796+796*(797+797*(798+798*(799+799*(800+800*(801+801*(802+802*(803+803*(804+804*(805+805*(806+806*(807+807*(808+808*(809+809*(810+810*(811+811*(812+812*(813+813*(814+814*(815+815*(816+816*(817+817*(818+818*(819+819*(820+820*(821+821*(822+822*(823+823*(824+824*(825+825*(826+826*(827+827*(828+828*(829+829*(830+830*(831+831*(832+832*(833+833*(834+834*(835+835*(836+836*(837+837*(838+838*(839+839*(840+840*(841+841*(842+842*(843+843*(844+844*(845+845*(846+846*(847+847*(848+848*(849+849*(850+850*(851+851*(852+852*(853+853*(854+854*(855+855*(856+856*(857+857*(858+858*(859+859*(860+860*(861+861*(862+862*(863+863*(864+864*(865+865*(866+866*(867+867*(868+868*(869+869*(870+870*(871+871*(872+872*(873+873*(874+874*(875+875*(876+876*(877+877*(878+878*(879+879*(880+880*(881+881*(882+882*(883+883*(884+884*(885+885*(886+886*(887+887*(888+888*(889+889*(890+890*(891+891*(892+892*(893+893*(894+894*(895+895*(896+896*(897+897*(898+898*(899+899*(900+900*(901+901*(902+902*(903+903*(904+904*(905+905*(906+906*(907+907*(908+908*(909+909*(910+910*(911+911*(912+912*(913+913*(914+914*(915+915*(916+916*(917+917*(918+918*(919+919*(920+920*(921+921*(922+922*(923+923*(924+924*(925+925*(926+926*(927+927*(928+928*(929+929*(930+930*(931+931*(932+932*(933+933*(934+934*(935+935*(936+936*(937+937*(938+938*(939+939*(940+940*(941+941*(942+942*(943+943*(944+944*(945+945*(946+946*(947+947*(948+948*(949+949*(950+950*(951+951*(952+952*(953+953*(954+954*(955+955*(956+956*(957+957*(958+958*(959+959*(960+960*(961+961*(962+962*(963+963*(964+964*(965+965*(966+966*(967+967*(968+968*(969+969*(970+970*(971+971*(972+972*(973+973*(974+974*(975+975*(976+976*(977+977*(978+978*(979+979*(980+980*(981+981*(982+982*(983+983*(984+984*(985+985*(986+986*(987+987*(988+988*(989+989*(990+990*(991+991*(992+992*(993+993*(994+994*(995+995*(996+996*(997+997*(998+998*(999+999*(1000+1000*(1001))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))\\n\\\n";
    }
}

##################################################################

=item C<generate_grammar_calc ($base, $max, @directive)>

Generate a Bison file F<$base.y> for a calculator parser in C.  Pass
the additional Bison C<@directive>.  C<$max> is ignored, but left to
have the same interface as C<triangular_grammar>.

=cut

sub generate_grammar_calc ($$@)
{
  my ($base, $max, @directive) = @_;

  my $prefix = $base;
  push @directive, "%define api.prefix {$prefix}"
    if ($gbench);
  my $directives = directives ($base, @directive);

  my $out = new IO::File ">$base.y"
    or die;
  print $out <<EOF;
%{
#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

@{[$gbench ? "#include <benchmark/benchmark.h>" : ""]}

#define USE(Var)
%}

%define api.value.type union
$directives

%code provides {
static int power (int base, int exponent);
/* yyerror receives the location if:
   - %location & %pure & %glr
   - %location & %pure & %yacc & %parse-param. */
static void yyerror (const char *s);
static int yylex (@{[is_pure (@directive) ? "YYSTYPE *yylvalp" : "void"]});
}

/* Bison Declarations */
%token
    PLUS   "+"
    MINUS  "-"
    STAR   "*"
    SLASH  "/"
    CARET  "^"
    LPAREN "("
    RPAREN ")"
    EQUAL  "="
    BANG   "!"
    EOL    "end of line"
    CALC_EOF 0 "end of input"
  <int>
    NUM "number"
%type  <int> exp

%printer { fprintf (yyo, "%d", \$\$); } <int>

%nonassoc "=" /* comparison            */
%left "-" "+"
%left "*" "/"
%left NEG     /* negation--unary minus */
%right "^"    /* exponentiation        */

/* Grammar follows */
%%
input:
  line
| input line
;

line:
  EOL
| exp EOL            { USE (\$1); }
;

exp:
  NUM                { \$\$ = \$1;             }
| exp "=" exp
  {
    if (\$1 != \$3)
      fprintf (stderr, "calc: error: %d != %d\\n", \$1, \$3);
    \$\$ = \$1;
  }
| exp "+" exp        { \$\$ = \$1 + \$3;      }
| exp "-" exp        { \$\$ = \$1 - \$3;      }
| exp "*" exp        { \$\$ = \$1 * \$3;      }
| exp "/" exp        { \$\$ = \$1 / \$3;      }
| "-" exp  %prec NEG { \$\$ = -\$2;           }
| "(" exp ")"        { \$\$ = \$2;            }
| "(" error ")"      { \$\$ = 1111;           }
| "-" error          { \$\$ = 0; YYERROR;     }
;
%%
/* The input.  */
static const char *input;

static void
yyerror (const char *s)
{
  fprintf (stderr, "%s\\n", s);
}

static int
yylex (@{[is_pure (@directive) ? "YYSTYPE *yylvalp" : "void"]})
{
  int c;

  // Ignore white space, get first nonwhite character.
  do {
    c = *input++;
  } while (c == ' ' || c == '\t');

  switch (c)
    {
    case '+': return PLUS;
    case '-': return MINUS;
    case '*': return STAR;
    case '/': return SLASH;
    case '=': return EQUAL;
    case '(': return LPAREN;
    case ')': return RPAREN;

    case '\\n': return EOL;
    case 0: return CALC_EOF;

    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
      {
        int nchars = 0;
        int n = sscanf (input - 1, "%d%n", &@{[is_pure (@directive) ? "yylvalp->" : "yylval."]}NUM, &nchars);
        assert (n == 1);
        input += nchars - 1;
        return NUM;
      }

    default:
      yyerror ("error: invalid character");
      return yylex (@{[is_pure (@directive) ? "yylvalp" : ""]});
    }
}
EOF

  print $out "static const char *INPUT = \"\\n\\\n";
  calc_input ($out);
  print $out "\";\n";

  if ($gbench)
    {
      print $out <<EOF;
static void BM_${prefix} (benchmark::State& state)
{
#if YYDEBUG
  yydebug = !!getenv ("YYDEBUG");
#endif

  for (auto _ : state)
    {
      input = INPUT;
      yyparse ();
    }
}
BENCHMARK(BM_${prefix});
EOF
    }
  else
    {
      print $out <<EOF;
int
main (int argc, const char **argv)
{
#if YYDEBUG
  yydebug = !!getenv ("YYDEBUG");
#endif

  input = INPUT;
  yyparse ();
}
EOF
    }
}

##################################################################

=item C<generate_grammar_list ($base, $max, @directive)>

Generate a Bison file F<$base.y> for a C++ parser that uses C++
objects (std::string, std::list).  Tailored for using %define variant.

=cut

sub generate_grammar_list ($$@)
{
  my ($base, $max, @directive) = @_;
  my $directives = directives ($base, @directive);
  my $variant = grep { /%define "?variant"?/ } @directive;
  my $token_ctor = grep { /%define "?api.token.constructor"?/ } @directive;
  my $out = new IO::File ">$base.y"
    or die;
  print $out <<EOF;
%language "C++"
%header
%locations
$directives

%code requires // *.h
{
#include <string>
}

%code // *.c
{
#include <algorithm>
#include <iostream>
#include <sstream>

#define STAGE_MAX    ($max * 10) // max = $max

#define USE_TOKEN_CTOR $token_ctor
#define USE_VARIANTS $variant

  // Prototype of the yylex function providing subsequent tokens.
  static
#if USE_TOKEN_CTOR
  yy::parser::symbol_type yylex ();
#else
  yy::parser::token_type yylex (yy::parser::semantic_type *yylvalp,
                                yy::parser::location_type *yyllocp);
#endif

  // Conversion to string.
  template <typename T>
    inline
    std::string
    string_cast (const T& t)
  {
    std::ostringstream o;
    o << t;
    return o.str ();
  }
}

%token END_OF_FILE 0
EOF

  if ($variant)
    {
      print $out <<'EOF';
%token <std::string> TEXT
%token <int> NUMBER
%printer { yyo << "Number: " << $$; } <int>
%printer { yyo << "Text: " << $$; } <std::string>
%type <std::string> text result

%%
result:
  text                  { /* Throw away the result. */ }
;

text:
  /* nothing */         { /* This will generate an empty string */ }
| text TEXT             { std::swap ($$, $2); }
| text NUMBER           { $$ = string_cast($2); }
;
EOF
    }
  else
    {
      # Not using Bison variants.
      print $out <<'EOF';
%union {int ival; std::string* sval;}
%token <sval> TEXT
%token <ival> NUMBER
%printer { yyo << "Number: " << $$; } <ival>
%printer { yyo << "Text: " << *$$; } <sval>
%type <sval> text result

%%
result:
  text                  { delete $1; }
;

text:
  /* nothing */         { $$ = new std::string; }
| text TEXT             { delete $1; $$ = $2; }
| text NUMBER           { delete $1; $$ = new std::string (string_cast ($2)); }
;
EOF
    }

  print $out <<'EOF';
%%
#

static
#if USE_TOKEN_CTOR
yy::parser::symbol_type yylex ()
#else
yy::parser::token_type yylex (yy::parser::semantic_type *yylvalp,
                              yy::parser::location_type *yyllocp)
#endif
{
  typedef yy::parser::location_type location_type;
  typedef yy::parser::token token;
  static int stage = -1;
  ++stage;
  if (stage == STAGE_MAX)
    {
#if USE_TOKEN_CTOR
      return yy::parser::make_END_OF_FILE (location_type ());
#else
      *yyllocp = location_type ();
      return token::END_OF_FILE;
#endif
    }
  else if (stage % 2)
    {
#if USE_TOKEN_CTOR
      return yy::parser::make_NUMBER (stage, location_type ());
#else
# if defined ONE_STAGE_BUILD
      yylvalp->build(stage);
# elif USE_VARIANTS
      yylvalp->build<int>() = stage;
# else
      yylvalp->ival = stage;
# endif
      *yyllocp = location_type ();
      return token::NUMBER;
#endif
    }
  else
    {
#if USE_TOKEN_CTOR
      return yy::parser::make_TEXT ("A string.", location_type ());
#else
# if defined ONE_STAGE_BUILD
      yylvalp->build(std::string("A string."));
# elif USE_VARIANTS
      yylvalp->build<std::string>() = std::string("A string.");
# else
      yylvalp->sval = new std::string("A string.");
# endif
      *yyllocp = location_type ();
      return token::TEXT;
#endif
    }
  abort();
}

// Mandatory error function
void
yy::parser::error(const yy::parser::location_type& loc, const std::string& msg)
{
  std::cerr << loc << ": " << msg << '\n';
}

int main(int argc, char *argv[])
{
  yy::parser p;
#if YYDEBUG
  p.set_debug_level(!!getenv("YYDEBUG"));
#endif
  p.parse();
  return 0;
}
EOF
}

##################################################################

=item C<generate_grammar ($name, $base, @directive)>

Generate F<$base.y> by calling C<&generate_grammar_$name>.

=cut

sub generate_grammar ($$@)
{
  my ($name, $base, @directive) = @_;
  verbose 3, "Generating $base.y\n";
  my %generator =
    (
      "calc"       => \&generate_grammar_calc,
      "list"       => \&generate_grammar_list,
      "triangular" => \&generate_grammar_triangular,
    );
  &{$generator{$name}}($base, 200, @directive);
}

##################################################################

=item C<run ($command)>

Run, possibly verbosely, the shell C<$command>.

=cut

sub run ($)
{
  my ($command) = @_;
  verbose 3, "$command\n";
  system ("$command") == 0
    or die "$command failed";
}

##################################################################

=item C<language ($base)>

The language to use depending on the %language specification in
C<$base.y>: C<c> or C<c++>.

=cut

sub language ($)
{
  my ($base) = @_;
  if ($gbench)
    {
      "c++";
    }
  else
    {
      my $language = `sed -ne '/%language "\\(.*\\)"/{s//\\1/;p;q;}' $base.y`;
      chomp $language;
      $language eq 'C++' ? "c++" : "c";
    }
}

##################################################################

=item C<compiler ($base)>

The compiler to use depending on the %language specification in
C<$base.y>.

=cut

sub compiler ($)
{
  my ($base) = @_;
  my %compiler =
    (
      'c++' => $cxx,
      'c'   => $cc,
    );
  $compiler{language ($base)};
}

##################################################################

=item C<compile ($base)>

Compile C<$base.y> to an executable.

=cut

sub compile ($$)
{
  my ($makefile, $base) = @_;
  my $compiler = compiler ($base);

  my $my_bison = `sed -ne '/[/][/] %bison "\\(.*\\)"/{s//\\1/;p;q;}' $base.y`;
  chop $my_bison;
  my %ext =
    (
      'c++' => 'cc',
      'c'   => 'c',
    );
  my $ext = $ext{language ($base)};
  if ($gbench)
    {
      print $makefile <<EOF;
$base.$ext: $base.y
\t@{[length $my_bison ? $my_bison : $bison]} $base.y -o $base.$ext

$base.o: $base.$ext
\t$compiler -c -o $base.o $cflags $base.$ext
EOF
    }
  else
    {
      print $makefile <<EOF;
$base.$ext: $base.y
\t@{[length $my_bison ? $my_bison : $bison]} $base.y -o $base.$ext

$base: $base.$ext
\t$compiler -o $base $cflags $base.$ext
EOF
    }
}

######################################################################

=item C<bench_with_timethese ($grammar, @directive)>

With Perl's timethese, bench the C<$grammar> and the C<@directive>
directive list.

=cut

sub bench_with_timethese ($@)
{
  my ($grammar, @directive) = @_;
  use Benchmark qw (:all :hireswallclock);

  # Set up the benches as expected by timethese.
  my %bench;
  for my $i (0 .. $#directive)
    {
      my $base = "y$i";
      $bench{$base} = $directive[$i];
      printf " %2d. %s\n", $i, join (' ', split ("\n", $directive[$i]));
    };

  # For each bench, capture the size.
  my %size;

  my $makefile = new IO::File ">Makefile";
  while (my ($name, $directives) = each %bench)
    {
      generate_grammar ($grammar, $name, $directives);
      # Compile the executable.
      compile ($makefile, $name);
      run "make $name";
      $bench{$name} = "system ('./$name');";
      chop($size{$name} = `wc -c <$name`);
    }

  # Run the benches.
  #
  # STYLE can be any of 'all', 'none', 'noc', 'nop' or 'auto'.  'all'
  # shows each of the 5 times available ('wallclock' time, user time,
  # system time, user time of children, and system time of
  # children). 'noc' shows all except the two children times. 'nop'
  # shows only wallclock and the two children times.  'auto' (the
  # default) will act as 'all' unless the children times are both
  # zero, in which case it acts as 'noc'.  'none' prevents output.
  verbose 3, "Running the benches for $grammar\n";
  my $res = timethese ($iterations, \%bench, 'nop');

  # Output the speed result.
  cmpthese ($res, 'nop');

  # Display the sizes.
  print "Sizes (decreasing):\n";
  my $width = 10;
  for my $bench (keys %size)
    {
      $width = length $bench
        if $width < length $bench;
    }
  # Benches sorted by decreasing size.
  my @benches_per_size = sort {$size{$b} <=> $size{$a}} keys %size;
  for my $bench (@benches_per_size)
    {
      printf "%${width}s: %5.2fkB\n", $bench, $size{$bench} / 1024;
    }
}

######################################################################

=item C<bench_with_gbenchmark ($grammar, @directive)>

With Google Benchmark, bench the C<$grammar> and the C<@directive>
directive list.

=cut

sub bench_with_gbenchmark ($@)
{
  my ($grammar, @directive) = @_;
  my $compiler = compiler ("y0");

  my $readme = new IO::File ">README.md";
  print $readme <<EOF;
compiler: $compiler $cflags
EOF

  my $makefile = new IO::File ">Makefile";
  print $makefile <<EOF;
.PHONY: bench
bench: main
\t./main \$(BENCHFLAGS) | tee -a README.md

# Link the bench cases in a different order to run the bench case in a
# different order.
.PHONY: rand
rand:
\t-rm main
\tmake bench OBJECTS="\$\$(shuf -e \$(OBJECTS) | xargs)"
EOF

  my @obj = ();
  for my $i (0 .. $#directive)
    {
      my $base = "y$i";
      my $m = sprintf " %2d. %s\n", $i, join (' ', split ("\n", $directive[$i]));
      print $m;
      print $readme $m;
      generate_grammar ($grammar, $base, $directive[$i]);
      compile ($makefile, $base);
      push @obj, "$base.o";
    }

  my $out = new IO::File ">main.cc";
  print $out <<EOF;
#include <benchmark/benchmark.h>

BENCHMARK_MAIN();
EOF

  print $makefile <<EOF;
OBJECTS = @{obj}
main: \$(OBJECTS)
\t$compiler -o main $cflags main.cc \$(OBJECTS) -lbenchmark
EOF

  run "make";
}

######################################################################

=item C<bench ($grammar, @token)>

Generate benches for the C<$grammar> and the directive specification
given in the list of C<@token>.

=cut

sub bench ($@)
{
  my ($grammar, @token) = @_;
  my @directive = parse (@token);

  if ($gbench)
    {
      bench_with_gbenchmark ($grammar, @directive);
    }
  else
    {
      bench_with_timethese ($grammar, @directive);
    }
}

######################################################################

=item C<bench_push_parser ()>

Bench the C push parser against the pull parser, pure and impure
interfaces.

=cut

sub bench_push_parser ()
{
  bench ('calc',
         qw(
            [ %d api.pure ]
            &
            [ %d api.push-pull=both ]
         ));
}

######################################################################

=item C<bench_variant_parser ()>

Bench the C++ lalr1.cc parser using variants or %union.

=cut

sub bench_variant_parser ()
{
  bench ('list',
         qw(
            [
              %d variant
              &
              [ #d ONE_STAGE_BUILD | %d api.token.constructor ]
            ]
         )
    );
}

############################################################################

sub help ($)
{
  my ($verbose) = @_;
  use Pod::Usage;
  # See <URL:https://perldoc.perl.org/pod2man.html#NOTES>.
  pod2usage( { -message => "Bench Bison parsers",
               -exitval => 0,
               -verbose => $verbose,
               -output  => \*STDOUT });
}

######################################################################

# The end of the directives to parse.
my $eod = "end of directives";
# The list of tokens parsed by the following functions.
my @token;

# eat ($EXPECTED)
# ---------------
# Check that the current token is $EXPECTED, and move to the next.
sub eat ($)
{
  my ($expected) = @_;
  my $unexpected = $token[0];
  die "expected $expected, unexpected: $unexpected (@token)\n"
    unless $token[0] && $token[0] eq $expected;
  shift @token;
}

# Parse directive specifications:
#   expr: term (| term)*
#   term: fact (& fact)*
#   fact: ( expr ) | [ expr ] | dir
#   dir: %s SKELETON | #d NAME[=VALUE] | %d NAME[=VALUE] | directive
sub parse (@)
{
  @token = (@_, $eod);
  verbose 3, "Parsing: @token\n";
  my @res = parse_expr ();
  eat ($eod);
  return @res;
}

sub parse_expr ()
{
  my @res = parse_term ();
  while ($token[0] && $token[0] eq '|')
    {
      eat ('|');
      # Alternation.
      push @res, parse_term ();
    }
  return @res;
}

sub parse_term ()
{
  my @res = parse_fact ();
  while ($token[0] && $token[0] eq '&')
    {
      eat ('&');
      # Cartesian product.
      my @lhs = @res;
      @res = ();
      for my $rhs (parse_fact ())
        {
          for my $lhs (@lhs)
            {
              push @res, $lhs . ($lhs && $rhs ? "\n" : "") . $rhs;
            }
        }
    }
  return @res;
}

sub parse_fact ()
{
  my @res;
  die "unexpected end of expression"
    unless defined $token[0];

  if ($token[0] && $token[0] eq '(')
    {
      eat ('(');
      @res = parse_expr ();
      eat (')');
    }
  elsif ($token[0] && $token[0] eq '[')
    {
      eat ('[');
      @res = (parse_expr (), '');
      eat (']');
    }
  else
    {
      @res = parse_dir ();
    }
  return @res;
}

sub parse_dir ()
{
  my @res;
  die "unexpected end of expression"
    unless defined $token[0] && $token[0] ne $eod;

  if ($token[0] eq '#d')
    {
      eat ('#d');
      $token[0] =~ s/(.*?)=(.*)/$1 $2/;
      @res = ("%code {\n#define $token[0]\n}");
    }
  elsif ($token[0] eq '%d')
    {
      shift @token;
      $token[0] =~ s/(.*?)=(.*)/$1 $2/;
      @res = ("%define $token[0]");
    }
  elsif ($token[0] eq '%s')
    {
      shift @token;
      @res = ("%skeleton \"$token[0]\"");
    }
  elsif ($token[0] eq '%b')
    {
      shift @token;
      @res = ("// %bison \"$token[0]\"");
    }
  else
    {
      @res = $token[0];
    }
  shift @token;

  return @res;
}

######################################################################

sub getopt ()
{
  use Getopt::Long;
  my %option = (
    "b|bench=s"      => \$bench,
    "c|cflags=s"     => \$cflags,
    "d|directive=s"  => \@directive,
    "k|gbench"       => \$gbench,
    "g|grammar=s"    => \$grammar,
    "h|help"         => sub { help ($verbose) },
    "i|iterations=i" => \$iterations,
    "q|quiet"        => sub { --$verbose },
    "v|verbose"      => sub { ++$verbose },
    );
  Getopt::Long::Configure ("bundling", "pass_through");
  GetOptions (%option)
    or exit 1;
  my %grammars = map { $_ => 1 } qw[calc list triangular];
  die "invalid grammar: $grammar, valid: @{[keys %grammars]}\n"
    if !exists($grammars{$grammar});
}

######################################################################

getopt;

my $basedir = 'benches';

# Create the directory we work in.
mkdir $basedir or die "cannot create directory $basedir"
  unless -d $basedir;

my $count = 0;
my $dir;
while (!$dir || -d $dir)
{
  ++$count;
  $dir = sprintf "%s/%03d", $basedir, $count;
}
mkdir $dir
  or die "cannot create directory $dir";

unlink "$basedir/latest"
  or die "cannot unlink $basedir/latest"
  if -l "$basedir/latest";
symlink sprintf("%03d", $count), "$basedir/latest"
  or die "cannot create symlink";
chdir $dir
  or die "cannot chdir $dir";

# The following message is tailored to please Emacs' compilation-mode.
verbose 1, "Entering directory `$dir'\n";
verbose 1, "Using bison=$bison.\n";
verbose 2, "Using cc=$cc.\n";
verbose 2, "Using cxx=$cxx.\n";
verbose 2, "Using cflags=$cflags.\n";
verbose 2, "Grammar: $grammar\n";


# Support -b: predefined benches.
my %bench =
  (
   "push"     => \&bench_push_parser,
   "variant"  => \&bench_variant_parser,
  );

if (defined $bench)
{
  die "invalid argument for --bench: $bench"
    unless defined $bench{$bench};
  &{$bench{$bench}}();
  exit 0;
}
else
{
  # Launch the bench marking.
  bench ($grammar, @ARGV);
}

### Setup "GNU" style for perl-mode and cperl-mode.
## Local Variables:
## perl-indent-level: 2
## perl-continued-statement-offset: 2
## perl-continued-brace-offset: 0
## perl-brace-offset: 0
## perl-brace-imaginary-offset: 0
## perl-label-offset: -2
## cperl-indent-level: 2
## cperl-brace-offset: 0
## cperl-continued-brace-offset: 0
## cperl-label-offset: -2
## cperl-extra-newline-before-brace: t
## cperl-merge-trailing-else: nil
## cperl-continued-statement-offset: 2
## End:
