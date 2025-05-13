/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

  if (flag_checking)
    {
      memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
      memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
    }

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 5625:  /* atomic_bit_test_and_complementsi_1 */
    case 5624:  /* atomic_bit_test_and_complementhi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 2);
      recog_data.dup_num[2] = 1;
      break;

    case 5627:  /* atomic_bit_test_and_resetsi_1 */
    case 5626:  /* atomic_bit_test_and_resethi_1 */
    case 5623:  /* atomic_bit_test_and_setsi_1 */
    case 5622:  /* atomic_bit_test_and_sethi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 5621:  /* atomic_xorsi */
    case 5620:  /* atomic_orsi */
    case 5619:  /* atomic_andsi */
    case 5618:  /* atomic_xorhi */
    case 5617:  /* atomic_orhi */
    case 5616:  /* atomic_andhi */
    case 5615:  /* atomic_xorqi */
    case 5614:  /* atomic_orqi */
    case 5613:  /* atomic_andqi */
    case 5612:  /* atomic_subsi */
    case 5611:  /* atomic_subhi */
    case 5610:  /* atomic_subqi */
    case 5609:  /* atomic_addsi */
    case 5608:  /* atomic_addhi */
    case 5607:  /* atomic_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 5606:  /* atomic_exchangesi */
    case 5605:  /* atomic_exchangehi */
    case 5604:  /* atomic_exchangeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 5603:  /* *atomic_fetch_add_cmpsi */
    case 5602:  /* *atomic_fetch_add_cmphi */
    case 5601:  /* *atomic_fetch_add_cmpqi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 5600:  /* atomic_fetch_addsi */
    case 5599:  /* atomic_fetch_addhi */
    case 5598:  /* atomic_fetch_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 5597:  /* atomic_compare_and_swapsi_1 */
    case 5596:  /* atomic_compare_and_swaphi_1 */
    case 5595:  /* atomic_compare_and_swapqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 5594:  /* atomic_compare_and_swapdi_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 5584:  /* mfence_nosse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 5580:  /* *aesencwide256klu8 */
    case 5579:  /* *aesencwide128klu8 */
    case 5578:  /* *aesdecwide256klu8 */
    case 5577:  /* *aesdecwide128klu8 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[1] = *(ro_loc[1] = &PATTERN (insn));
      break;

    case 5576:  /* aesenc256klu8 */
    case 5575:  /* aesenc128klu8 */
    case 5574:  /* aesdec256klu8 */
    case 5573:  /* aesdec128klu8 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 5572:  /* *encodekey256u32 */
    case 5571:  /* *encodekey128u32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &PATTERN (insn));
      break;

    case 5570:  /* loadiwkey */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 3));
      break;

    case 5232:  /* avx512dq_vmfpclassv2df_mask */
    case 5230:  /* avx512dq_vmfpclassv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 5174:  /* compressstorev8hi_mask */
    case 5173:  /* compressstorev16hi_mask */
    case 5172:  /* compressstorev32hi_mask */
    case 5171:  /* compressstorev32qi_mask */
    case 5170:  /* compressstorev16qi_mask */
    case 5169:  /* compressstorev64qi_mask */
    case 5168:  /* avx512vl_compressstorev2df_mask */
    case 5167:  /* avx512vl_compressstorev2di_mask */
    case 5166:  /* avx512vl_compressstorev4sf_mask */
    case 5165:  /* avx512vl_compressstorev4si_mask */
    case 5164:  /* avx512vl_compressstorev4df_mask */
    case 5163:  /* avx512vl_compressstorev4di_mask */
    case 5162:  /* avx512vl_compressstorev8sf_mask */
    case 5161:  /* avx512vl_compressstorev8si_mask */
    case 5160:  /* avx512f_compressstorev8df_mask */
    case 5159:  /* avx512f_compressstorev8di_mask */
    case 5158:  /* avx512f_compressstorev16sf_mask */
    case 5157:  /* avx512f_compressstorev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1);
      recog_data.dup_num[0] = 0;
      break;

    case 5138:  /* *avx512f_scatterdiv2df */
    case 5137:  /* *avx512f_scatterdiv2df */
    case 5136:  /* *avx512f_scatterdiv2di */
    case 5135:  /* *avx512f_scatterdiv2di */
    case 5134:  /* *avx512f_scatterdiv4sf */
    case 5133:  /* *avx512f_scatterdiv4sf */
    case 5132:  /* *avx512f_scatterdiv4si */
    case 5131:  /* *avx512f_scatterdiv4si */
    case 5130:  /* *avx512f_scatterdiv4df */
    case 5129:  /* *avx512f_scatterdiv4df */
    case 5128:  /* *avx512f_scatterdiv4di */
    case 5127:  /* *avx512f_scatterdiv4di */
    case 5126:  /* *avx512f_scatterdiv8sf */
    case 5125:  /* *avx512f_scatterdiv8sf */
    case 5124:  /* *avx512f_scatterdiv8si */
    case 5123:  /* *avx512f_scatterdiv8si */
    case 5122:  /* *avx512f_scatterdiv8df */
    case 5121:  /* *avx512f_scatterdiv8df */
    case 5120:  /* *avx512f_scatterdiv8di */
    case 5119:  /* *avx512f_scatterdiv8di */
    case 5118:  /* *avx512f_scatterdiv16sf */
    case 5117:  /* *avx512f_scatterdiv16sf */
    case 5116:  /* *avx512f_scatterdiv16si */
    case 5115:  /* *avx512f_scatterdiv16si */
    case 5114:  /* *avx512f_scattersiv2df */
    case 5113:  /* *avx512f_scattersiv2df */
    case 5112:  /* *avx512f_scattersiv2di */
    case 5111:  /* *avx512f_scattersiv2di */
    case 5110:  /* *avx512f_scattersiv4sf */
    case 5109:  /* *avx512f_scattersiv4sf */
    case 5108:  /* *avx512f_scattersiv4si */
    case 5107:  /* *avx512f_scattersiv4si */
    case 5106:  /* *avx512f_scattersiv4df */
    case 5105:  /* *avx512f_scattersiv4df */
    case 5104:  /* *avx512f_scattersiv4di */
    case 5103:  /* *avx512f_scattersiv4di */
    case 5102:  /* *avx512f_scattersiv8sf */
    case 5101:  /* *avx512f_scattersiv8sf */
    case 5100:  /* *avx512f_scattersiv8si */
    case 5099:  /* *avx512f_scattersiv8si */
    case 5098:  /* *avx512f_scattersiv8df */
    case 5097:  /* *avx512f_scattersiv8df */
    case 5096:  /* *avx512f_scattersiv8di */
    case 5095:  /* *avx512f_scattersiv8di */
    case 5094:  /* *avx512f_scattersiv16sf */
    case 5093:  /* *avx512f_scattersiv16sf */
    case 5092:  /* *avx512f_scattersiv16si */
    case 5091:  /* *avx512f_scattersiv16si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 3));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 6;
      break;

    case 5090:  /* *avx512f_gatherdiv2df_2 */
    case 5089:  /* *avx512f_gatherdiv2df_2 */
    case 5088:  /* *avx512f_gatherdiv2di_2 */
    case 5087:  /* *avx512f_gatherdiv2di_2 */
    case 5086:  /* *avx512f_gatherdiv4sf_2 */
    case 5085:  /* *avx512f_gatherdiv4sf_2 */
    case 5084:  /* *avx512f_gatherdiv4si_2 */
    case 5083:  /* *avx512f_gatherdiv4si_2 */
    case 5082:  /* *avx512f_gatherdiv4df_2 */
    case 5081:  /* *avx512f_gatherdiv4df_2 */
    case 5080:  /* *avx512f_gatherdiv4di_2 */
    case 5079:  /* *avx512f_gatherdiv4di_2 */
    case 5078:  /* *avx512f_gatherdiv8sf_2 */
    case 5077:  /* *avx512f_gatherdiv8sf_2 */
    case 5076:  /* *avx512f_gatherdiv8si_2 */
    case 5075:  /* *avx512f_gatherdiv8si_2 */
    case 5074:  /* *avx512f_gatherdiv8df_2 */
    case 5073:  /* *avx512f_gatherdiv8df_2 */
    case 5072:  /* *avx512f_gatherdiv8di_2 */
    case 5071:  /* *avx512f_gatherdiv8di_2 */
    case 5070:  /* *avx512f_gatherdiv16sf_2 */
    case 5069:  /* *avx512f_gatherdiv16sf_2 */
    case 5068:  /* *avx512f_gatherdiv16si_2 */
    case 5067:  /* *avx512f_gatherdiv16si_2 */
    case 5042:  /* *avx512f_gathersiv2df_2 */
    case 5041:  /* *avx512f_gathersiv2df_2 */
    case 5040:  /* *avx512f_gathersiv2di_2 */
    case 5039:  /* *avx512f_gathersiv2di_2 */
    case 5038:  /* *avx512f_gathersiv4sf_2 */
    case 5037:  /* *avx512f_gathersiv4sf_2 */
    case 5036:  /* *avx512f_gathersiv4si_2 */
    case 5035:  /* *avx512f_gathersiv4si_2 */
    case 5034:  /* *avx512f_gathersiv4df_2 */
    case 5033:  /* *avx512f_gathersiv4df_2 */
    case 5032:  /* *avx512f_gathersiv4di_2 */
    case 5031:  /* *avx512f_gathersiv4di_2 */
    case 5030:  /* *avx512f_gathersiv8sf_2 */
    case 5029:  /* *avx512f_gathersiv8sf_2 */
    case 5028:  /* *avx512f_gathersiv8si_2 */
    case 5027:  /* *avx512f_gathersiv8si_2 */
    case 5026:  /* *avx512f_gathersiv8df_2 */
    case 5025:  /* *avx512f_gathersiv8df_2 */
    case 5024:  /* *avx512f_gathersiv8di_2 */
    case 5023:  /* *avx512f_gathersiv8di_2 */
    case 5022:  /* *avx512f_gathersiv16sf_2 */
    case 5021:  /* *avx512f_gathersiv16sf_2 */
    case 5020:  /* *avx512f_gathersiv16si_2 */
    case 5019:  /* *avx512f_gathersiv16si_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 5066:  /* *avx512f_gatherdiv2df */
    case 5065:  /* *avx512f_gatherdiv2df */
    case 5064:  /* *avx512f_gatherdiv2di */
    case 5063:  /* *avx512f_gatherdiv2di */
    case 5062:  /* *avx512f_gatherdiv4sf */
    case 5061:  /* *avx512f_gatherdiv4sf */
    case 5060:  /* *avx512f_gatherdiv4si */
    case 5059:  /* *avx512f_gatherdiv4si */
    case 5058:  /* *avx512f_gatherdiv4df */
    case 5057:  /* *avx512f_gatherdiv4df */
    case 5056:  /* *avx512f_gatherdiv4di */
    case 5055:  /* *avx512f_gatherdiv4di */
    case 5054:  /* *avx512f_gatherdiv8sf */
    case 5053:  /* *avx512f_gatherdiv8sf */
    case 5052:  /* *avx512f_gatherdiv8si */
    case 5051:  /* *avx512f_gatherdiv8si */
    case 5050:  /* *avx512f_gatherdiv8df */
    case 5049:  /* *avx512f_gatherdiv8df */
    case 5048:  /* *avx512f_gatherdiv8di */
    case 5047:  /* *avx512f_gatherdiv8di */
    case 5046:  /* *avx512f_gatherdiv16sf */
    case 5045:  /* *avx512f_gatherdiv16sf */
    case 5044:  /* *avx512f_gatherdiv16si */
    case 5043:  /* *avx512f_gatherdiv16si */
    case 5018:  /* *avx512f_gathersiv2df */
    case 5017:  /* *avx512f_gathersiv2df */
    case 5016:  /* *avx512f_gathersiv2di */
    case 5015:  /* *avx512f_gathersiv2di */
    case 5014:  /* *avx512f_gathersiv4sf */
    case 5013:  /* *avx512f_gathersiv4sf */
    case 5012:  /* *avx512f_gathersiv4si */
    case 5011:  /* *avx512f_gathersiv4si */
    case 5010:  /* *avx512f_gathersiv4df */
    case 5009:  /* *avx512f_gathersiv4df */
    case 5008:  /* *avx512f_gathersiv4di */
    case 5007:  /* *avx512f_gathersiv4di */
    case 5006:  /* *avx512f_gathersiv8sf */
    case 5005:  /* *avx512f_gathersiv8sf */
    case 5004:  /* *avx512f_gathersiv8si */
    case 5003:  /* *avx512f_gathersiv8si */
    case 5002:  /* *avx512f_gathersiv8df */
    case 5001:  /* *avx512f_gathersiv8df */
    case 5000:  /* *avx512f_gathersiv8di */
    case 4999:  /* *avx512f_gathersiv8di */
    case 4998:  /* *avx512f_gathersiv16sf */
    case 4997:  /* *avx512f_gathersiv16sf */
    case 4996:  /* *avx512f_gathersiv16si */
    case 4995:  /* *avx512f_gathersiv16si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4994:  /* *avx2_gatherdiv8sf_4 */
    case 4993:  /* *avx2_gatherdiv8sf_4 */
    case 4992:  /* *avx2_gatherdiv8si_4 */
    case 4991:  /* *avx2_gatherdiv8si_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 4990:  /* *avx2_gatherdiv8sf_3 */
    case 4989:  /* *avx2_gatherdiv8sf_3 */
    case 4988:  /* *avx2_gatherdiv8si_3 */
    case 4987:  /* *avx2_gatherdiv8si_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 4986:  /* *avx2_gatherdiv8sf_2 */
    case 4985:  /* *avx2_gatherdiv8sf_2 */
    case 4984:  /* *avx2_gatherdiv8si_2 */
    case 4983:  /* *avx2_gatherdiv8si_2 */
    case 4982:  /* *avx2_gatherdiv4sf_2 */
    case 4981:  /* *avx2_gatherdiv4sf_2 */
    case 4980:  /* *avx2_gatherdiv4si_2 */
    case 4979:  /* *avx2_gatherdiv4si_2 */
    case 4978:  /* *avx2_gatherdiv4df_2 */
    case 4977:  /* *avx2_gatherdiv4df_2 */
    case 4976:  /* *avx2_gatherdiv4di_2 */
    case 4975:  /* *avx2_gatherdiv4di_2 */
    case 4974:  /* *avx2_gatherdiv2df_2 */
    case 4973:  /* *avx2_gatherdiv2df_2 */
    case 4972:  /* *avx2_gatherdiv2di_2 */
    case 4971:  /* *avx2_gatherdiv2di_2 */
    case 4954:  /* *avx2_gathersiv8sf_2 */
    case 4953:  /* *avx2_gathersiv8sf_2 */
    case 4952:  /* *avx2_gathersiv8si_2 */
    case 4951:  /* *avx2_gathersiv8si_2 */
    case 4950:  /* *avx2_gathersiv4sf_2 */
    case 4949:  /* *avx2_gathersiv4sf_2 */
    case 4948:  /* *avx2_gathersiv4si_2 */
    case 4947:  /* *avx2_gathersiv4si_2 */
    case 4946:  /* *avx2_gathersiv4df_2 */
    case 4945:  /* *avx2_gathersiv4df_2 */
    case 4944:  /* *avx2_gathersiv4di_2 */
    case 4943:  /* *avx2_gathersiv4di_2 */
    case 4942:  /* *avx2_gathersiv2df_2 */
    case 4941:  /* *avx2_gathersiv2df_2 */
    case 4940:  /* *avx2_gathersiv2di_2 */
    case 4939:  /* *avx2_gathersiv2di_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4970:  /* *avx2_gatherdiv8sf */
    case 4969:  /* *avx2_gatherdiv8sf */
    case 4968:  /* *avx2_gatherdiv8si */
    case 4967:  /* *avx2_gatherdiv8si */
    case 4966:  /* *avx2_gatherdiv4sf */
    case 4965:  /* *avx2_gatherdiv4sf */
    case 4964:  /* *avx2_gatherdiv4si */
    case 4963:  /* *avx2_gatherdiv4si */
    case 4962:  /* *avx2_gatherdiv4df */
    case 4961:  /* *avx2_gatherdiv4df */
    case 4960:  /* *avx2_gatherdiv4di */
    case 4959:  /* *avx2_gatherdiv4di */
    case 4958:  /* *avx2_gatherdiv2df */
    case 4957:  /* *avx2_gatherdiv2df */
    case 4956:  /* *avx2_gatherdiv2di */
    case 4955:  /* *avx2_gatherdiv2di */
    case 4938:  /* *avx2_gathersiv8sf */
    case 4937:  /* *avx2_gathersiv8sf */
    case 4936:  /* *avx2_gathersiv8si */
    case 4935:  /* *avx2_gathersiv8si */
    case 4934:  /* *avx2_gathersiv4sf */
    case 4933:  /* *avx2_gathersiv4sf */
    case 4932:  /* *avx2_gathersiv4si */
    case 4931:  /* *avx2_gathersiv4si */
    case 4930:  /* *avx2_gathersiv4df */
    case 4929:  /* *avx2_gathersiv4df */
    case 4928:  /* *avx2_gathersiv4di */
    case 4927:  /* *avx2_gathersiv4di */
    case 4926:  /* *avx2_gathersiv2df */
    case 4925:  /* *avx2_gathersiv2df */
    case 4924:  /* *avx2_gathersiv2di */
    case 4923:  /* *avx2_gathersiv2di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4922:  /* *avx512f_vcvtps2ph512_merge_mask */
    case 4918:  /* *vcvtps2ph256_merge_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 4913:  /* *vcvtps2ph_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4903:  /* vcvtph2ps_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4832:  /* avx2_maskstoreq256 */
    case 4831:  /* avx2_maskstored256 */
    case 4830:  /* avx2_maskstoreq */
    case 4829:  /* avx2_maskstored */
    case 4828:  /* avx_maskstorepd256 */
    case 4827:  /* avx_maskstoreps256 */
    case 4826:  /* avx_maskstorepd */
    case 4825:  /* avx_maskstoreps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 4824:  /* avx2_maskloadq256 */
    case 4823:  /* avx2_maskloadd256 */
    case 4822:  /* avx2_maskloadq */
    case 4821:  /* avx2_maskloadd */
    case 4820:  /* avx_maskloadpd256 */
    case 4819:  /* avx_maskloadps256 */
    case 4818:  /* avx_maskloadpd */
    case 4817:  /* avx_maskloadps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 4784:  /* avx512vl_vpermt2varv16qi3_mask */
    case 4783:  /* avx512vl_vpermt2varv32qi3_mask */
    case 4782:  /* avx512bw_vpermt2varv64qi3_mask */
    case 4781:  /* avx512vl_vpermt2varv8hi3_mask */
    case 4780:  /* avx512vl_vpermt2varv16hi3_mask */
    case 4779:  /* avx512bw_vpermt2varv32hi3_mask */
    case 4778:  /* avx512vl_vpermt2varv2df3_mask */
    case 4777:  /* avx512vl_vpermt2varv2di3_mask */
    case 4776:  /* avx512vl_vpermt2varv4sf3_mask */
    case 4775:  /* avx512vl_vpermt2varv4si3_mask */
    case 4774:  /* avx512vl_vpermt2varv4df3_mask */
    case 4773:  /* avx512vl_vpermt2varv4di3_mask */
    case 4772:  /* avx512vl_vpermt2varv8sf3_mask */
    case 4771:  /* avx512vl_vpermt2varv8si3_mask */
    case 4770:  /* avx512f_vpermt2varv8df3_mask */
    case 4769:  /* avx512f_vpermt2varv8di3_mask */
    case 4768:  /* avx512f_vpermt2varv16sf3_mask */
    case 4767:  /* avx512f_vpermt2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 4730:  /* *avx512vl_vpermi2varv2df3_mask */
    case 4729:  /* *avx512vl_vpermi2varv4df3_mask */
    case 4728:  /* *avx512f_vpermi2varv8df3_mask */
    case 4727:  /* *avx512vl_vpermi2varv4sf3_mask */
    case 4726:  /* *avx512vl_vpermi2varv8sf3_mask */
    case 4725:  /* *avx512f_vpermi2varv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 4724:  /* *avx512vl_vpermi2varv16qi3_mask */
    case 4723:  /* *avx512vl_vpermi2varv32qi3_mask */
    case 4722:  /* *avx512bw_vpermi2varv64qi3_mask */
    case 4721:  /* *avx512vl_vpermi2varv8hi3_mask */
    case 4720:  /* *avx512vl_vpermi2varv16hi3_mask */
    case 4719:  /* *avx512bw_vpermi2varv32hi3_mask */
    case 4718:  /* *avx512vl_vpermi2varv2di3_mask */
    case 4717:  /* *avx512vl_vpermi2varv4di3_mask */
    case 4716:  /* *avx512vl_vpermi2varv4si3_mask */
    case 4715:  /* *avx512vl_vpermi2varv8si3_mask */
    case 4714:  /* *avx512f_vpermi2varv8di3_mask */
    case 4713:  /* *avx512f_vpermi2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 4668:  /* avx_vbroadcastf128_v4df */
    case 4667:  /* avx_vbroadcastf128_v8sf */
    case 4666:  /* avx_vbroadcastf128_v4di */
    case 4665:  /* avx_vbroadcastf128_v8si */
    case 4664:  /* avx_vbroadcastf128_v16hi */
    case 4663:  /* avx_vbroadcastf128_v32qi */
    case 4652:  /* avx2_vbroadcasti128_v4di */
    case 4651:  /* avx2_vbroadcasti128_v8si */
    case 4650:  /* avx2_vbroadcasti128_v16hi */
    case 4649:  /* avx2_vbroadcasti128_v32qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4551:  /* *avx_vpermilpv2df_mask */
    case 4549:  /* *avx_vpermilpv4df_mask */
    case 4547:  /* *avx512f_vpermilpv8df_mask */
    case 4545:  /* *avx_vpermilpv4sf_mask */
    case 4543:  /* *avx_vpermilpv8sf_mask */
    case 4541:  /* *avx512f_vpermilpv16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4796:  /* *ssse3_palignrv2df_perm */
    case 4795:  /* *ssse3_palignrv4sf_perm */
    case 4794:  /* *ssse3_palignrv2di_perm */
    case 4793:  /* *ssse3_palignrv4si_perm */
    case 4792:  /* *ssse3_palignrv8hi_perm */
    case 4791:  /* *ssse3_palignrv16qi_perm */
    case 4550:  /* *avx_vpermilpv2df */
    case 4548:  /* *avx_vpermilpv4df */
    case 4546:  /* *avx512f_vpermilpv8df */
    case 4544:  /* *avx_vpermilpv4sf */
    case 4542:  /* *avx_vpermilpv8sf */
    case 4540:  /* *avx512f_vpermilpv16sf */
    case 4539:  /* *avx_vperm_broadcast_v4df */
    case 4538:  /* *avx_vperm_broadcast_v8sf */
    case 4537:  /* *avx_vperm_broadcast_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 4492:  /* *avx_vzeroupper_1 */
    case 4491:  /* *avx_vzeroupper */
    case 4490:  /* *avx_vzeroall */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      break;

    case 4474:  /* xop_maskcmp_uns2v2di3 */
    case 4473:  /* xop_maskcmp_uns2v4si3 */
    case 4472:  /* xop_maskcmp_uns2v8hi3 */
    case 4471:  /* xop_maskcmp_uns2v16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 4470:  /* xop_maskcmp_unsv2di3 */
    case 4469:  /* xop_maskcmp_unsv4si3 */
    case 4468:  /* xop_maskcmp_unsv8hi3 */
    case 4467:  /* xop_maskcmp_unsv16qi3 */
    case 4466:  /* xop_maskcmpv2di3 */
    case 4465:  /* xop_maskcmpv4si3 */
    case 4464:  /* xop_maskcmpv8hi3 */
    case 4463:  /* xop_maskcmpv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4454:  /* xop_shlv2di3 */
    case 4453:  /* xop_shlv4si3 */
    case 4452:  /* xop_shlv8hi3 */
    case 4451:  /* xop_shlv16qi3 */
    case 4450:  /* xop_shav2di3 */
    case 4449:  /* xop_shav4si3 */
    case 4448:  /* xop_shav8hi3 */
    case 4447:  /* xop_shav16qi3 */
    case 4446:  /* xop_vrotlv2di3 */
    case 4445:  /* xop_vrotlv4si3 */
    case 4444:  /* xop_vrotlv8hi3 */
    case 4443:  /* xop_vrotlv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 4434:  /* xop_pperm_pack_v8hi_v16qi */
    case 4433:  /* xop_pperm_pack_v4si_v8hi */
    case 4432:  /* xop_pperm_pack_v2di_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 4421:  /* xop_phaddubq */
    case 4420:  /* xop_phaddbq */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[6] = 1;
      break;

    case 4425:  /* xop_phadduwq */
    case 4424:  /* xop_phaddwq */
    case 4419:  /* xop_phaddubd */
    case 4418:  /* xop_phaddbd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 4430:  /* xop_phsubdq */
    case 4429:  /* xop_phsubwd */
    case 4428:  /* xop_phsubbw */
    case 4427:  /* xop_phaddudq */
    case 4426:  /* xop_phadddq */
    case 4423:  /* xop_phadduwd */
    case 4422:  /* xop_phaddwd */
    case 4417:  /* xop_phaddubw */
    case 4416:  /* xop_phaddbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4415:  /* xop_pcmov_v2df */
    case 4414:  /* xop_pcmov_v4df256 */
    case 4413:  /* xop_pcmov_v4sf */
    case 4412:  /* xop_pcmov_v8sf256 */
    case 4411:  /* xop_pcmov_v2di */
    case 4410:  /* xop_pcmov_v4di256 */
    case 4409:  /* xop_pcmov_v4si */
    case 4408:  /* xop_pcmov_v8si256 */
    case 4407:  /* xop_pcmov_v8hi */
    case 4406:  /* xop_pcmov_v16hi256 */
    case 4405:  /* xop_pcmov_v16qi */
    case 4404:  /* xop_pcmov_v32qi256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 4403:  /* xop_pmadcsswd */
    case 4402:  /* xop_pmadcswd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 4401:  /* xop_pmacsswd */
    case 4400:  /* xop_pmacswd */
    case 4399:  /* xop_pmacssdqh */
    case 4398:  /* xop_pmacsdqh */
    case 4397:  /* xop_pmacssdql */
    case 4396:  /* xop_pmacsdql */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4391:  /* avx512er_vmrsqrt28v2df_mask_round */
    case 4387:  /* avx512er_vmrsqrt28v4sf_mask_round */
    case 4375:  /* avx512er_vmrcp28v2df_mask_round */
    case 4371:  /* avx512er_vmrcp28v4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4390:  /* avx512er_vmrsqrt28v2df_mask */
    case 4386:  /* avx512er_vmrsqrt28v4sf_mask */
    case 4374:  /* avx512er_vmrcp28v2df_mask */
    case 4370:  /* avx512er_vmrcp28v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4389:  /* avx512er_vmrsqrt28v2df_round */
    case 4385:  /* avx512er_vmrsqrt28v4sf_round */
    case 4373:  /* avx512er_vmrcp28v2df_round */
    case 4369:  /* avx512er_vmrcp28v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4351:  /* *avx512pf_scatterpfv8didf_mask */
    case 4350:  /* *avx512pf_scatterpfv8didf_mask */
    case 4349:  /* *avx512pf_scatterpfv8sidf_mask */
    case 4348:  /* *avx512pf_scatterpfv8sidf_mask */
    case 4347:  /* *avx512pf_scatterpfv8disf_mask */
    case 4346:  /* *avx512pf_scatterpfv8disf_mask */
    case 4345:  /* *avx512pf_scatterpfv16sisf_mask */
    case 4344:  /* *avx512pf_scatterpfv16sisf_mask */
    case 4343:  /* *avx512pf_gatherpfv8didf_mask */
    case 4342:  /* *avx512pf_gatherpfv8didf_mask */
    case 4341:  /* *avx512pf_gatherpfv8sidf_mask */
    case 4340:  /* *avx512pf_gatherpfv8sidf_mask */
    case 4339:  /* *avx512pf_gatherpfv8disf_mask */
    case 4338:  /* *avx512pf_gatherpfv8disf_mask */
    case 4337:  /* *avx512pf_gatherpfv16sisf_mask */
    case 4336:  /* *avx512pf_gatherpfv16sisf_mask */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (pat, 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (pat, 0, 1));
      break;

    case 4335:  /* sse4_2_pcmpistr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 4334:  /* sse4_2_pcmpistrm */
    case 4333:  /* sse4_2_pcmpistri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 4332:  /* sse4_2_pcmpistr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 4331:  /* sse4_2_pcmpestr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      break;

    case 4330:  /* sse4_2_pcmpestrm */
    case 4329:  /* sse4_2_pcmpestri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 4328:  /* sse4_2_pcmpestr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 4279:  /* *sse4_1_zero_extendv2hiv2di2_mask_2 */
    case 4277:  /* *sse4_1_sign_extendv2hiv2di2_mask_2 */
    case 4247:  /* *avx2_zero_extendv4qiv4di2_mask_2 */
    case 4245:  /* *avx2_sign_extendv4qiv4di2_mask_2 */
    case 4200:  /* *sse4_1_zero_extendv4qiv4si2_mask_2 */
    case 4198:  /* *sse4_1_sign_extendv4qiv4si2_mask_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4278:  /* *sse4_1_zero_extendv2hiv2di2_2 */
    case 4276:  /* *sse4_1_sign_extendv2hiv2di2_2 */
    case 4246:  /* *avx2_zero_extendv4qiv4di2_2 */
    case 4244:  /* *avx2_sign_extendv4qiv4di2_2 */
    case 4199:  /* *sse4_1_zero_extendv4qiv4si2_2 */
    case 4197:  /* *sse4_1_sign_extendv4qiv4si2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      break;

    case 4301:  /* *sse4_1_zero_extendv2siv2di2_mask_2 */
    case 4299:  /* *sse4_1_sign_extendv2siv2di2_mask_2 */
    case 4267:  /* *avx2_zero_extendv4hiv4di2_mask_2 */
    case 4265:  /* *avx2_sign_extendv4hiv4di2_mask_2 */
    case 4235:  /* *avx512f_zero_extendv8qiv8di2_mask_2 */
    case 4233:  /* *avx512f_sign_extendv8qiv8di2_mask_2 */
    case 4222:  /* *sse4_1_zero_extendv4hiv4si2_mask_2 */
    case 4220:  /* *sse4_1_sign_extendv4hiv4si2_mask_2 */
    case 4188:  /* *avx2_zero_extendv8qiv8si2_mask_2 */
    case 4186:  /* *avx2_sign_extendv8qiv8si2_mask_2 */
    case 4171:  /* *sse4_1_zero_extendv8qiv8hi2_mask_2 */
    case 4169:  /* *sse4_1_sign_extendv8qiv8hi2_mask_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4300:  /* *sse4_1_zero_extendv2siv2di2_2 */
    case 4298:  /* *sse4_1_sign_extendv2siv2di2_2 */
    case 4266:  /* *avx2_zero_extendv4hiv4di2_2 */
    case 4264:  /* *avx2_sign_extendv4hiv4di2_2 */
    case 4234:  /* *avx512f_zero_extendv8qiv8di2_2 */
    case 4232:  /* *avx512f_sign_extendv8qiv8di2_2 */
    case 4221:  /* *sse4_1_zero_extendv4hiv4si2_2 */
    case 4219:  /* *sse4_1_sign_extendv4hiv4si2_2 */
    case 4187:  /* *avx2_zero_extendv8qiv8si2_2 */
    case 4185:  /* *avx2_sign_extendv8qiv8si2_2 */
    case 4170:  /* *sse4_1_zero_extendv8qiv8hi2_2 */
    case 4168:  /* *sse4_1_sign_extendv8qiv8hi2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      break;

    case 4790:  /* *avx_vperm2f128v4df_nozero */
    case 4789:  /* *avx_vperm2f128v8sf_nozero */
    case 4788:  /* *avx_vperm2f128v8si_nozero */
    case 4302:  /* *sse4_1_zero_extendv2siv2di2_3 */
    case 4289:  /* *avx2_zero_extendv4siv4di2_1 */
    case 4284:  /* *avx512f_zero_extendv8siv8di2_1 */
    case 4223:  /* *sse4_1_zero_extendv4hiv4si2_3 */
    case 4210:  /* avx2_zero_extendv8hiv8si2_1 */
    case 4205:  /* avx512f_zero_extendv16hiv16si2_1 */
    case 4172:  /* *sse4_1_zero_extendv8qiv8hi2_3 */
    case 4159:  /* *avx512bw_zero_extendv32qiv32hi2_1 */
    case 4154:  /* *avx2_zero_extendv16qiv16hi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 4125:  /* *avx_blendvpd256_ltint */
    case 4124:  /* *avx_blendvps256_ltint */
    case 4123:  /* *sse4_1_blendvpd_ltint */
    case 4122:  /* *sse4_1_blendvps_ltint */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 1));
      break;

    case 4144:  /* *sse4_1_pblendvb_lt */
    case 4143:  /* *avx2_pblendvb_lt */
    case 4121:  /* *sse4_1_blendvpd_lt */
    case 4120:  /* *avx_blendvpd256_lt */
    case 4119:  /* *sse4_1_blendvps_lt */
    case 4118:  /* *avx_blendvps256_lt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      break;

    case 4056:  /* *ssse3_pshufbv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 4048:  /* *ssse3_pmulhrswv8hi3_mask */
    case 4046:  /* *avx2_pmulhrswv16hi3_mask */
    case 4044:  /* *avx512bw_pmulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4049:  /* *ssse3_pmulhrswv4hi3 */
    case 4047:  /* *ssse3_pmulhrswv8hi3 */
    case 4045:  /* *avx2_pmulhrswv16hi3 */
    case 4043:  /* *avx512bw_pmulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 4040:  /* avx512bw_umulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4039:  /* avx512bw_umulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      break;

    case 4031:  /* ssse3_phsubdv2si3 */
    case 4030:  /* ssse3_phadddv2si3 */
    case 4029:  /* ssse3_phsubdv4si3 */
    case 4028:  /* ssse3_phadddv4si3 */
    case 4027:  /* avx2_phsubdv8si3 */
    case 4026:  /* avx2_phadddv8si3 */
    case 4025:  /* ssse3_phsubswv4hi3 */
    case 4024:  /* ssse3_phsubwv4hi3 */
    case 4023:  /* ssse3_phaddswv4hi3 */
    case 4022:  /* ssse3_phaddwv4hi3 */
    case 4021:  /* ssse3_phsubswv8hi3 */
    case 4020:  /* ssse3_phsubwv8hi3 */
    case 4019:  /* ssse3_phaddswv8hi3 */
    case 4018:  /* ssse3_phaddwv8hi3 */
    case 4017:  /* avx2_phsubswv16hi3 */
    case 4016:  /* avx2_phsubwv16hi3 */
    case 4015:  /* avx2_phaddswv16hi3 */
    case 4014:  /* avx2_phaddwv16hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 4003:  /* *sse2_pmovskb_zexthisi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      break;

    case 4000:  /* *sse2_movmskpd_shift */
    case 3999:  /* *avx_movmskpd256_shift */
    case 3998:  /* *sse_movmskps_shift */
    case 3997:  /* *avx_movmskps256_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      break;

    case 3985:  /* *sse2_uavgv8hi3_mask */
    case 3983:  /* *avx2_uavgv16hi3_mask */
    case 3981:  /* *avx512bw_uavgv32hi3_mask */
    case 3979:  /* *sse2_uavgv16qi3_mask */
    case 3977:  /* *avx2_uavgv32qi3_mask */
    case 3975:  /* *avx512bw_uavgv64qi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 3984:  /* *sse2_uavgv8hi3 */
    case 3982:  /* *avx2_uavgv16hi3 */
    case 3980:  /* *avx512bw_uavgv32hi3 */
    case 3978:  /* *sse2_uavgv16qi3 */
    case 3976:  /* *avx2_uavgv32qi3 */
    case 3974:  /* *avx512bw_uavgv64qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 3949:  /* sse2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3948:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 3947:  /* avx2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3946:  /* avx2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 3941:  /* avx2_pshuflw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3940:  /* avx2_pshuflw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      break;

    case 4559:  /* avx512f_permv8di_1_mask */
    case 4557:  /* avx512f_permv8df_1_mask */
    case 3935:  /* avx2_pshufd_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4558:  /* avx512f_permv8di_1 */
    case 4556:  /* avx512f_permv8df_1 */
    case 3934:  /* avx2_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 3933:  /* avx512f_pshufd_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[18] = *(ro_loc[18] = &XEXP (XEXP (pat, 1), 1));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3932:  /* avx512f_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 4808:  /* vec_set_lo_v8sf_mask */
    case 4806:  /* vec_set_lo_v8si_mask */
    case 4800:  /* vec_set_lo_v4df_mask */
    case 4798:  /* vec_set_lo_v4di_mask */
    case 3911:  /* vec_set_lo_v8di_mask */
    case 3909:  /* vec_set_lo_v8df_mask */
    case 3903:  /* vec_set_lo_v16si_mask */
    case 3901:  /* vec_set_lo_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3899:  /* avx512f_vinserti32x4_1_mask */
    case 3897:  /* avx512f_vinsertf32x4_1_mask */
    case 3895:  /* avx512dq_vinserti64x2_1_mask */
    case 3893:  /* avx512dq_vinsertf64x2_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3898:  /* *avx512f_vinserti32x4_1 */
    case 3896:  /* *avx512f_vinsertf32x4_1 */
    case 3894:  /* *avx512dq_vinserti64x2_1 */
    case 3892:  /* *avx512dq_vinsertf64x2_1 */
    case 3891:  /* *avx512f_vinserti32x4_0 */
    case 3890:  /* *avx512f_vinsertf32x4_0 */
    case 3889:  /* *avx512dq_vinserti64x2_0 */
    case 3888:  /* *avx512dq_vinsertf64x2_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4140:  /* sse4_1_packusdw_mask */
    case 4138:  /* avx2_packusdw_mask */
    case 4136:  /* avx512bw_packusdw_mask */
    case 3847:  /* sse2_packuswb_mask */
    case 3845:  /* avx2_packuswb_mask */
    case 3843:  /* avx512bw_packuswb_mask */
    case 3841:  /* sse2_packssdw_mask */
    case 3839:  /* avx2_packssdw_mask */
    case 3837:  /* avx512bw_packssdw_mask */
    case 3835:  /* sse2_packsswb_mask */
    case 3833:  /* avx2_packsswb_mask */
    case 3831:  /* avx512bw_packsswb_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3829:  /* *avx512vl_testnmv2di3_zext_mask */
    case 3828:  /* *avx512vl_testnmv2di3_zext_mask */
    case 3827:  /* *avx512vl_testnmv2di3_zext_mask */
    case 3826:  /* *avx512vl_testnmv4di3_zext_mask */
    case 3825:  /* *avx512vl_testnmv4di3_zext_mask */
    case 3824:  /* *avx512vl_testnmv4di3_zext_mask */
    case 3823:  /* *avx512f_testnmv8di3_zext_mask */
    case 3822:  /* *avx512f_testnmv8di3_zext_mask */
    case 3821:  /* *avx512f_testnmv8di3_zext_mask */
    case 3820:  /* *avx512vl_testnmv4si3_zext_mask */
    case 3819:  /* *avx512vl_testnmv4si3_zext_mask */
    case 3818:  /* *avx512vl_testnmv4si3_zext_mask */
    case 3817:  /* *avx512vl_testnmv8si3_zext_mask */
    case 3816:  /* *avx512vl_testnmv8si3_zext_mask */
    case 3815:  /* *avx512vl_testnmv8si3_zext_mask */
    case 3814:  /* *avx512f_testnmv16si3_zext_mask */
    case 3813:  /* *avx512f_testnmv16si3_zext_mask */
    case 3812:  /* *avx512f_testnmv16si3_zext_mask */
    case 3811:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 3810:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 3809:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 3808:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 3807:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 3806:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 3805:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 3804:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 3803:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 3802:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 3801:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 3800:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 3799:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 3798:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 3797:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 3796:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 3795:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 3794:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 3757:  /* *avx512vl_testmv2di3_zext_mask */
    case 3756:  /* *avx512vl_testmv2di3_zext_mask */
    case 3755:  /* *avx512vl_testmv2di3_zext_mask */
    case 3754:  /* *avx512vl_testmv4di3_zext_mask */
    case 3753:  /* *avx512vl_testmv4di3_zext_mask */
    case 3752:  /* *avx512vl_testmv4di3_zext_mask */
    case 3751:  /* *avx512f_testmv8di3_zext_mask */
    case 3750:  /* *avx512f_testmv8di3_zext_mask */
    case 3749:  /* *avx512f_testmv8di3_zext_mask */
    case 3748:  /* *avx512vl_testmv4si3_zext_mask */
    case 3747:  /* *avx512vl_testmv4si3_zext_mask */
    case 3746:  /* *avx512vl_testmv4si3_zext_mask */
    case 3745:  /* *avx512vl_testmv8si3_zext_mask */
    case 3744:  /* *avx512vl_testmv8si3_zext_mask */
    case 3743:  /* *avx512vl_testmv8si3_zext_mask */
    case 3742:  /* *avx512f_testmv16si3_zext_mask */
    case 3741:  /* *avx512f_testmv16si3_zext_mask */
    case 3740:  /* *avx512f_testmv16si3_zext_mask */
    case 3739:  /* *avx512vl_testmv8hi3_zext_mask */
    case 3738:  /* *avx512vl_testmv8hi3_zext_mask */
    case 3737:  /* *avx512vl_testmv8hi3_zext_mask */
    case 3736:  /* *avx512vl_testmv16hi3_zext_mask */
    case 3735:  /* *avx512vl_testmv16hi3_zext_mask */
    case 3734:  /* *avx512vl_testmv16hi3_zext_mask */
    case 3733:  /* *avx512bw_testmv32hi3_zext_mask */
    case 3732:  /* *avx512bw_testmv32hi3_zext_mask */
    case 3731:  /* *avx512bw_testmv32hi3_zext_mask */
    case 3730:  /* *avx512vl_testmv16qi3_zext_mask */
    case 3729:  /* *avx512vl_testmv16qi3_zext_mask */
    case 3728:  /* *avx512vl_testmv16qi3_zext_mask */
    case 3727:  /* *avx512vl_testmv32qi3_zext_mask */
    case 3726:  /* *avx512vl_testmv32qi3_zext_mask */
    case 3725:  /* *avx512vl_testmv32qi3_zext_mask */
    case 3724:  /* *avx512bw_testmv64qi3_zext_mask */
    case 3723:  /* *avx512bw_testmv64qi3_zext_mask */
    case 3722:  /* *avx512bw_testmv64qi3_zext_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 5231:  /* avx512dq_vmfpclassv2df */
    case 5229:  /* avx512dq_vmfpclassv4sf */
    case 3793:  /* *avx512vl_testnmv2di3_zext */
    case 3792:  /* *avx512vl_testnmv2di3_zext */
    case 3791:  /* *avx512vl_testnmv2di3_zext */
    case 3790:  /* *avx512vl_testnmv4di3_zext */
    case 3789:  /* *avx512vl_testnmv4di3_zext */
    case 3788:  /* *avx512vl_testnmv4di3_zext */
    case 3787:  /* *avx512f_testnmv8di3_zext */
    case 3786:  /* *avx512f_testnmv8di3_zext */
    case 3785:  /* *avx512f_testnmv8di3_zext */
    case 3784:  /* *avx512vl_testnmv4si3_zext */
    case 3783:  /* *avx512vl_testnmv4si3_zext */
    case 3782:  /* *avx512vl_testnmv4si3_zext */
    case 3781:  /* *avx512vl_testnmv8si3_zext */
    case 3780:  /* *avx512vl_testnmv8si3_zext */
    case 3779:  /* *avx512vl_testnmv8si3_zext */
    case 3778:  /* *avx512f_testnmv16si3_zext */
    case 3777:  /* *avx512f_testnmv16si3_zext */
    case 3776:  /* *avx512f_testnmv16si3_zext */
    case 3775:  /* *avx512vl_testnmv8hi3_zext */
    case 3774:  /* *avx512vl_testnmv8hi3_zext */
    case 3773:  /* *avx512vl_testnmv8hi3_zext */
    case 3772:  /* *avx512vl_testnmv16hi3_zext */
    case 3771:  /* *avx512vl_testnmv16hi3_zext */
    case 3770:  /* *avx512vl_testnmv16hi3_zext */
    case 3769:  /* *avx512bw_testnmv32hi3_zext */
    case 3768:  /* *avx512bw_testnmv32hi3_zext */
    case 3767:  /* *avx512bw_testnmv32hi3_zext */
    case 3766:  /* *avx512vl_testnmv16qi3_zext */
    case 3765:  /* *avx512vl_testnmv16qi3_zext */
    case 3764:  /* *avx512vl_testnmv16qi3_zext */
    case 3763:  /* *avx512vl_testnmv32qi3_zext */
    case 3762:  /* *avx512vl_testnmv32qi3_zext */
    case 3761:  /* *avx512vl_testnmv32qi3_zext */
    case 3760:  /* *avx512bw_testnmv64qi3_zext */
    case 3759:  /* *avx512bw_testnmv64qi3_zext */
    case 3758:  /* *avx512bw_testnmv64qi3_zext */
    case 3721:  /* *avx512vl_testmv2di3_zext */
    case 3720:  /* *avx512vl_testmv2di3_zext */
    case 3719:  /* *avx512vl_testmv2di3_zext */
    case 3718:  /* *avx512vl_testmv4di3_zext */
    case 3717:  /* *avx512vl_testmv4di3_zext */
    case 3716:  /* *avx512vl_testmv4di3_zext */
    case 3715:  /* *avx512f_testmv8di3_zext */
    case 3714:  /* *avx512f_testmv8di3_zext */
    case 3713:  /* *avx512f_testmv8di3_zext */
    case 3712:  /* *avx512vl_testmv4si3_zext */
    case 3711:  /* *avx512vl_testmv4si3_zext */
    case 3710:  /* *avx512vl_testmv4si3_zext */
    case 3709:  /* *avx512vl_testmv8si3_zext */
    case 3708:  /* *avx512vl_testmv8si3_zext */
    case 3707:  /* *avx512vl_testmv8si3_zext */
    case 3706:  /* *avx512f_testmv16si3_zext */
    case 3705:  /* *avx512f_testmv16si3_zext */
    case 3704:  /* *avx512f_testmv16si3_zext */
    case 3703:  /* *avx512vl_testmv8hi3_zext */
    case 3702:  /* *avx512vl_testmv8hi3_zext */
    case 3701:  /* *avx512vl_testmv8hi3_zext */
    case 3700:  /* *avx512vl_testmv16hi3_zext */
    case 3699:  /* *avx512vl_testmv16hi3_zext */
    case 3698:  /* *avx512vl_testmv16hi3_zext */
    case 3697:  /* *avx512bw_testmv32hi3_zext */
    case 3696:  /* *avx512bw_testmv32hi3_zext */
    case 3695:  /* *avx512bw_testmv32hi3_zext */
    case 3694:  /* *avx512vl_testmv16qi3_zext */
    case 3693:  /* *avx512vl_testmv16qi3_zext */
    case 3692:  /* *avx512vl_testmv16qi3_zext */
    case 3691:  /* *avx512vl_testmv32qi3_zext */
    case 3690:  /* *avx512vl_testmv32qi3_zext */
    case 3689:  /* *avx512vl_testmv32qi3_zext */
    case 3688:  /* *avx512bw_testmv64qi3_zext */
    case 3687:  /* *avx512bw_testmv64qi3_zext */
    case 3686:  /* *avx512bw_testmv64qi3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 5540:  /* avx512vl_vpshufbitqmbv16qi_mask */
    case 5538:  /* avx512vl_vpshufbitqmbv32qi_mask */
    case 5536:  /* avx512vl_vpshufbitqmbv64qi_mask */
    case 5228:  /* avx512dq_fpclassv2df_mask */
    case 5226:  /* avx512dq_fpclassv4df_mask */
    case 5224:  /* avx512dq_fpclassv8df_mask */
    case 5222:  /* avx512dq_fpclassv4sf_mask */
    case 5220:  /* avx512dq_fpclassv8sf_mask */
    case 5218:  /* avx512dq_fpclassv16sf_mask */
    case 4912:  /* *vcvtps2ph */
    case 3685:  /* avx512vl_testnmv2di3_mask */
    case 3683:  /* avx512vl_testnmv4di3_mask */
    case 3681:  /* avx512f_testnmv8di3_mask */
    case 3679:  /* avx512vl_testnmv4si3_mask */
    case 3677:  /* avx512vl_testnmv8si3_mask */
    case 3675:  /* avx512f_testnmv16si3_mask */
    case 3673:  /* avx512vl_testnmv8hi3_mask */
    case 3671:  /* avx512vl_testnmv16hi3_mask */
    case 3669:  /* avx512bw_testnmv32hi3_mask */
    case 3667:  /* avx512vl_testnmv16qi3_mask */
    case 3665:  /* avx512vl_testnmv32qi3_mask */
    case 3663:  /* avx512bw_testnmv64qi3_mask */
    case 3661:  /* avx512vl_testmv2di3_mask */
    case 3659:  /* avx512vl_testmv4di3_mask */
    case 3657:  /* avx512f_testmv8di3_mask */
    case 3655:  /* avx512vl_testmv4si3_mask */
    case 3653:  /* avx512vl_testmv8si3_mask */
    case 3651:  /* avx512f_testmv16si3_mask */
    case 3649:  /* avx512vl_testmv8hi3_mask */
    case 3647:  /* avx512vl_testmv16hi3_mask */
    case 3645:  /* avx512bw_testmv32hi3_mask */
    case 3643:  /* avx512vl_testmv16qi3_mask */
    case 3641:  /* avx512vl_testmv32qi3_mask */
    case 3639:  /* avx512bw_testmv64qi3_mask */
    case 3535:  /* *avx512vl_eqv2di3_mask_1 */
    case 3533:  /* *avx512vl_eqv4di3_mask_1 */
    case 3531:  /* *avx512f_eqv8di3_mask_1 */
    case 3529:  /* *avx512vl_eqv4si3_mask_1 */
    case 3527:  /* *avx512vl_eqv8si3_mask_1 */
    case 3525:  /* *avx512f_eqv16si3_mask_1 */
    case 3523:  /* *avx512vl_eqv8hi3_mask_1 */
    case 3521:  /* *avx512vl_eqv16hi3_mask_1 */
    case 3519:  /* *avx512bw_eqv32hi3_mask_1 */
    case 3517:  /* *avx512vl_eqv32qi3_mask_1 */
    case 3515:  /* *avx512vl_eqv16qi3_mask_1 */
    case 3513:  /* *avx512bw_eqv64qi3_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3215:  /* *sse4_1_mulv2siv2di3_mask */
    case 3213:  /* *vec_widen_smult_even_v8si_mask */
    case 3211:  /* *vec_widen_smult_even_v16si_mask */
    case 3209:  /* *vec_widen_umult_even_v4si_mask */
    case 3207:  /* *vec_widen_umult_even_v8si_mask */
    case 3205:  /* *vec_widen_umult_even_v16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3203:  /* *umulv8hi3_highpart_mask */
    case 3201:  /* *smulv8hi3_highpart_mask */
    case 3199:  /* *umulv16hi3_highpart_mask */
    case 3197:  /* *smulv16hi3_highpart_mask */
    case 3195:  /* *umulv32hi3_highpart_mask */
    case 3193:  /* *smulv32hi3_highpart_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3089:  /* avx512f_us_truncatev8div16qi2_mask_store_2 */
    case 3088:  /* avx512f_truncatev8div16qi2_mask_store_2 */
    case 3087:  /* avx512f_ss_truncatev8div16qi2_mask_store_2 */
    case 3068:  /* avx512vl_us_truncatev2div2si2_mask_store_2 */
    case 3067:  /* avx512vl_truncatev2div2si2_mask_store_2 */
    case 3066:  /* avx512vl_ss_truncatev2div2si2_mask_store_2 */
    case 3047:  /* avx512vl_us_truncatev2div2hi2_mask_store_2 */
    case 3046:  /* avx512vl_truncatev2div2hi2_mask_store_2 */
    case 3045:  /* avx512vl_ss_truncatev2div2hi2_mask_store_2 */
    case 3029:  /* avx512vl_us_truncatev4div4hi2_mask_store_2 */
    case 3028:  /* avx512vl_truncatev4div4hi2_mask_store_2 */
    case 3027:  /* avx512vl_ss_truncatev4div4hi2_mask_store_2 */
    case 3026:  /* avx512vl_us_truncatev4siv4hi2_mask_store_2 */
    case 3025:  /* avx512vl_truncatev4siv4hi2_mask_store_2 */
    case 3024:  /* avx512vl_ss_truncatev4siv4hi2_mask_store_2 */
    case 2984:  /* avx512vl_us_truncatev8siv8qi2_mask_store_2 */
    case 2983:  /* avx512vl_truncatev8siv8qi2_mask_store_2 */
    case 2982:  /* avx512vl_ss_truncatev8siv8qi2_mask_store_2 */
    case 2981:  /* avx512vl_us_truncatev8hiv8qi2_mask_store_2 */
    case 2980:  /* avx512vl_truncatev8hiv8qi2_mask_store_2 */
    case 2979:  /* avx512vl_ss_truncatev8hiv8qi2_mask_store_2 */
    case 2948:  /* avx512vl_us_truncatev4div4qi2_mask_store_2 */
    case 2947:  /* avx512vl_truncatev4div4qi2_mask_store_2 */
    case 2946:  /* avx512vl_ss_truncatev4div4qi2_mask_store_2 */
    case 2945:  /* avx512vl_us_truncatev4siv4qi2_mask_store_2 */
    case 2944:  /* avx512vl_truncatev4siv4qi2_mask_store_2 */
    case 2943:  /* avx512vl_ss_truncatev4siv4qi2_mask_store_2 */
    case 2912:  /* avx512vl_us_truncatev2div2qi2_mask_store_2 */
    case 2911:  /* avx512vl_truncatev2div2qi2_mask_store_2 */
    case 2910:  /* avx512vl_ss_truncatev2div2qi2_mask_store_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 3086:  /* *avx512f_us_truncatev8div16qi2_mask_store_1 */
    case 3085:  /* *avx512f_truncatev8div16qi2_mask_store_1 */
    case 3084:  /* *avx512f_ss_truncatev8div16qi2_mask_store_1 */
    case 3065:  /* *avx512vl_us_truncatev2div2si2_mask_store_1 */
    case 3064:  /* *avx512vl_truncatev2div2si2_mask_store_1 */
    case 3063:  /* *avx512vl_ss_truncatev2div2si2_mask_store_1 */
    case 3044:  /* *avx512vl_us_truncatev2div2hi2_mask_store_1 */
    case 3043:  /* *avx512vl_truncatev2div2hi2_mask_store_1 */
    case 3042:  /* *avx512vl_ss_truncatev2div2hi2_mask_store_1 */
    case 3023:  /* *avx512vl_us_truncatev4div4hi2_mask_store_1 */
    case 3022:  /* *avx512vl_truncatev4div4hi2_mask_store_1 */
    case 3021:  /* *avx512vl_ss_truncatev4div4hi2_mask_store_1 */
    case 3020:  /* *avx512vl_us_truncatev4siv4hi2_mask_store_1 */
    case 3019:  /* *avx512vl_truncatev4siv4hi2_mask_store_1 */
    case 3018:  /* *avx512vl_ss_truncatev4siv4hi2_mask_store_1 */
    case 2978:  /* *avx512vl_us_truncatev8siv8qi2_mask_store_1 */
    case 2977:  /* *avx512vl_truncatev8siv8qi2_mask_store_1 */
    case 2976:  /* *avx512vl_ss_truncatev8siv8qi2_mask_store_1 */
    case 2975:  /* *avx512vl_us_truncatev8hiv8qi2_mask_store_1 */
    case 2974:  /* *avx512vl_truncatev8hiv8qi2_mask_store_1 */
    case 2973:  /* *avx512vl_ss_truncatev8hiv8qi2_mask_store_1 */
    case 2942:  /* *avx512vl_us_truncatev4div4qi2_mask_store_1 */
    case 2941:  /* *avx512vl_truncatev4div4qi2_mask_store_1 */
    case 2940:  /* *avx512vl_ss_truncatev4div4qi2_mask_store_1 */
    case 2939:  /* *avx512vl_us_truncatev4siv4qi2_mask_store_1 */
    case 2938:  /* *avx512vl_truncatev4siv4qi2_mask_store_1 */
    case 2937:  /* *avx512vl_ss_truncatev4siv4qi2_mask_store_1 */
    case 2909:  /* *avx512vl_us_truncatev2div2qi2_mask_store_1 */
    case 2908:  /* *avx512vl_truncatev2div2qi2_mask_store_1 */
    case 2907:  /* *avx512vl_ss_truncatev2div2qi2_mask_store_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 2819:  /* sse2_shufpd_v2df */
    case 2818:  /* sse2_shufpd_v2di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 2805:  /* sse2_shufpd_v2df_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3931:  /* avx512f_shuf_i32x4_1_mask */
    case 3929:  /* avx512f_shuf_f32x4_1_mask */
    case 2800:  /* avx512f_shufps512_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 1));
      ro[20] = *(ro_loc[20] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3930:  /* avx512f_shuf_i32x4_1 */
    case 3928:  /* avx512f_shuf_f32x4_1 */
    case 2799:  /* avx512f_shufps512_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 2798:  /* *avx512f_rndscalev2df_round */
    case 2796:  /* *avx512f_rndscalev4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4327:  /* *sse4_1_roundsd */
    case 4326:  /* *sse4_1_roundss */
    case 2797:  /* *avx512f_rndscalev2df */
    case 2795:  /* *avx512f_rndscalev4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 2794:  /* avx512f_rndscalev2df_mask_round */
    case 2790:  /* avx512f_rndscalev4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2793:  /* avx512f_rndscalev2df_round */
    case 2789:  /* avx512f_rndscalev4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2792:  /* avx512f_rndscalev2df_mask */
    case 2788:  /* avx512f_rndscalev4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 4325:  /* sse4_1_roundsd */
    case 4324:  /* sse4_1_roundss */
    case 2791:  /* avx512f_rndscalev2df */
    case 2787:  /* avx512f_rndscalev4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 2762:  /* avx512f_sfixupimmv2df_mask_round */
    case 2760:  /* avx512f_sfixupimmv4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2761:  /* avx512f_sfixupimmv2df_mask */
    case 2759:  /* avx512f_sfixupimmv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2758:  /* avx512f_sfixupimmv2df_maskz_1_round */
    case 2754:  /* avx512f_sfixupimmv4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2757:  /* avx512f_sfixupimmv2df_maskz_1 */
    case 2753:  /* avx512f_sfixupimmv4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2756:  /* avx512f_sfixupimmv2df_round */
    case 2752:  /* avx512f_sfixupimmv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2755:  /* avx512f_sfixupimmv2df */
    case 2751:  /* avx512f_sfixupimmv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2750:  /* avx512vl_fixupimmv2df_mask_round */
    case 2748:  /* avx512vl_fixupimmv4df_mask_round */
    case 2746:  /* avx512f_fixupimmv8df_mask_round */
    case 2744:  /* avx512vl_fixupimmv4sf_mask_round */
    case 2742:  /* avx512vl_fixupimmv8sf_mask_round */
    case 2740:  /* avx512f_fixupimmv16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2738:  /* avx512vl_fixupimmv2df_maskz_1_round */
    case 2734:  /* avx512vl_fixupimmv4df_maskz_1_round */
    case 2730:  /* avx512f_fixupimmv8df_maskz_1_round */
    case 2726:  /* avx512vl_fixupimmv4sf_maskz_1_round */
    case 2722:  /* avx512vl_fixupimmv8sf_maskz_1_round */
    case 2718:  /* avx512f_fixupimmv16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2736:  /* avx512vl_fixupimmv2df_round */
    case 2732:  /* avx512vl_fixupimmv4df_round */
    case 2728:  /* avx512f_fixupimmv8df_round */
    case 2724:  /* avx512vl_fixupimmv4sf_round */
    case 2720:  /* avx512vl_fixupimmv8sf_round */
    case 2716:  /* avx512f_fixupimmv16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2749:  /* avx512vl_fixupimmv2df_mask */
    case 2747:  /* avx512vl_fixupimmv4df_mask */
    case 2745:  /* avx512f_fixupimmv8df_mask */
    case 2743:  /* avx512vl_fixupimmv4sf_mask */
    case 2741:  /* avx512vl_fixupimmv8sf_mask */
    case 2739:  /* avx512f_fixupimmv16sf_mask */
    case 2670:  /* avx512vl_vternlogv2di_mask */
    case 2669:  /* avx512vl_vternlogv4di_mask */
    case 2668:  /* avx512f_vternlogv8di_mask */
    case 2667:  /* avx512vl_vternlogv4si_mask */
    case 2666:  /* avx512vl_vternlogv8si_mask */
    case 2665:  /* avx512f_vternlogv16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2737:  /* avx512vl_fixupimmv2df_maskz_1 */
    case 2733:  /* avx512vl_fixupimmv4df_maskz_1 */
    case 2729:  /* avx512f_fixupimmv8df_maskz_1 */
    case 2725:  /* avx512vl_fixupimmv4sf_maskz_1 */
    case 2721:  /* avx512vl_fixupimmv8sf_maskz_1 */
    case 2717:  /* avx512f_fixupimmv16sf_maskz_1 */
    case 2664:  /* avx512vl_vternlogv2di_maskz_1 */
    case 2662:  /* avx512vl_vternlogv4di_maskz_1 */
    case 2660:  /* avx512f_vternlogv8di_maskz_1 */
    case 2658:  /* avx512vl_vternlogv4si_maskz_1 */
    case 2656:  /* avx512vl_vternlogv8si_maskz_1 */
    case 2654:  /* avx512f_vternlogv16si_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4482:  /* xop_vpermil2v2df3 */
    case 4481:  /* xop_vpermil2v4df3 */
    case 4480:  /* xop_vpermil2v4sf3 */
    case 4479:  /* xop_vpermil2v8sf3 */
    case 4106:  /* sse4a_insertqi */
    case 2735:  /* avx512vl_fixupimmv2df */
    case 2731:  /* avx512vl_fixupimmv4df */
    case 2727:  /* avx512f_fixupimmv8df */
    case 2723:  /* avx512vl_fixupimmv4sf */
    case 2719:  /* avx512vl_fixupimmv8sf */
    case 2715:  /* avx512f_fixupimmv16sf */
    case 2663:  /* avx512vl_vternlogv2di */
    case 2661:  /* avx512vl_vternlogv4di */
    case 2659:  /* avx512f_vternlogv8di */
    case 2657:  /* avx512vl_vternlogv4si */
    case 2655:  /* avx512vl_vternlogv8si */
    case 2653:  /* avx512f_vternlogv16si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 2702:  /* avx512f_sgetexpv2df_mask_round */
    case 2698:  /* avx512f_sgetexpv4sf_mask_round */
    case 2628:  /* avx512f_vmscalefv2df_mask_round */
    case 2624:  /* avx512f_vmscalefv4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2700:  /* avx512f_sgetexpv2df_mask */
    case 2696:  /* avx512f_sgetexpv4sf_mask */
    case 2627:  /* avx512f_vmscalefv2df_mask */
    case 2623:  /* avx512f_vmscalefv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2701:  /* avx512f_sgetexpv2df_round */
    case 2697:  /* avx512f_sgetexpv4sf_round */
    case 2626:  /* avx512f_vmscalefv2df_round */
    case 2622:  /* avx512f_vmscalefv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2699:  /* avx512f_sgetexpv2df */
    case 2695:  /* avx512f_sgetexpv4sf */
    case 2625:  /* avx512f_vmscalefv2df */
    case 2621:  /* avx512f_vmscalefv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4555:  /* avx2_permv4df_1_mask */
    case 4553:  /* avx2_permv4di_1_mask */
    case 3943:  /* sse2_pshuflw_1_mask */
    case 3937:  /* sse2_pshufd_1_mask */
    case 2566:  /* avx512f_vextracti32x4_1_mask */
    case 2565:  /* avx512f_vextractf32x4_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2564:  /* *avx512dq_vextracti64x2_1 */
    case 2563:  /* *avx512dq_vextractf64x2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 2562:  /* avx512dq_vextracti64x2_1_mask */
    case 2561:  /* avx512dq_vextractf64x2_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2556:  /* sse4_1_insertps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 3973:  /* vec_setv4di_0 */
    case 3972:  /* vec_setv8di_0 */
    case 3950:  /* sse2_loadld */
    case 2831:  /* vec_setv4df_0 */
    case 2830:  /* vec_setv8df_0 */
    case 2557:  /* vec_setv2df_0 */
    case 2555:  /* vec_setv16sf_0 */
    case 2554:  /* vec_setv16si_0 */
    case 2553:  /* vec_setv8sf_0 */
    case 2552:  /* vec_setv8si_0 */
    case 2550:  /* vec_setv4sf_0 */
    case 2549:  /* vec_setv4si_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 2826:  /* sse2_movsd */
    case 2539:  /* sse_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 4815:  /* vec_set_lo_v32qi */
    case 4813:  /* vec_set_lo_v16hi */
    case 4807:  /* vec_set_lo_v8sf */
    case 4805:  /* vec_set_lo_v8si */
    case 4799:  /* vec_set_lo_v4df */
    case 4797:  /* vec_set_lo_v4di */
    case 3910:  /* vec_set_lo_v8di */
    case 3908:  /* vec_set_lo_v8df */
    case 3902:  /* vec_set_lo_v16si */
    case 3900:  /* vec_set_lo_v16sf */
    case 2825:  /* sse2_loadlpd */
    case 2538:  /* sse_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 3918:  /* *avx512dq_shuf_f64x2_1 */
    case 3916:  /* *avx512dq_shuf_i64x2_1 */
    case 2803:  /* avx_shufpd256_1 */
    case 2534:  /* sse_shufps_v4sf */
    case 2533:  /* sse_shufps_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 3919:  /* avx512dq_shuf_f64x2_1_mask */
    case 3917:  /* avx512dq_shuf_i64x2_1_mask */
    case 2804:  /* avx_shufpd256_1_mask */
    case 2532:  /* sse_shufps_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 1));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3927:  /* avx512vl_shuf_f32x4_1_mask */
    case 3925:  /* avx512vl_shuf_i32x4_1_mask */
    case 3923:  /* avx512f_shuf_i64x2_1_mask */
    case 3921:  /* avx512f_shuf_f64x2_1_mask */
    case 2802:  /* avx512f_shufpd512_1_mask */
    case 2531:  /* avx_shufps256_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 1));
      ro[12] = *(ro_loc[12] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3926:  /* avx512vl_shuf_f32x4_1 */
    case 3924:  /* avx512vl_shuf_i32x4_1 */
    case 3922:  /* avx512f_shuf_i64x2_1 */
    case 3920:  /* avx512f_shuf_f64x2_1 */
    case 2801:  /* avx512f_shufpd512_1 */
    case 2530:  /* avx_shufps256_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 2529:  /* avx512f_movsldup512_mask */
    case 2527:  /* sse3_movsldup_mask */
    case 2525:  /* avx_movsldup256_mask */
    case 2523:  /* avx512f_movshdup512_mask */
    case 2521:  /* sse3_movshdup_mask */
    case 2519:  /* avx_movshdup256_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2528:  /* *avx512f_movsldup512 */
    case 2526:  /* sse3_movsldup */
    case 2524:  /* avx_movsldup256 */
    case 2522:  /* *avx512f_movshdup512 */
    case 2520:  /* sse3_movshdup */
    case 2518:  /* avx_movshdup256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3883:  /* vec_interleave_lowv4si_mask */
    case 3881:  /* avx512f_interleave_lowv16si_mask */
    case 3879:  /* avx2_interleave_lowv8si_mask */
    case 3877:  /* vec_interleave_highv4si_mask */
    case 3875:  /* avx512f_interleave_highv16si_mask */
    case 3873:  /* avx2_interleave_highv8si_mask */
    case 3871:  /* vec_interleave_lowv8hi_mask */
    case 3869:  /* avx2_interleave_lowv16hi_mask */
    case 3867:  /* avx512bw_interleave_lowv32hi_mask */
    case 3865:  /* vec_interleave_highv8hi_mask */
    case 3863:  /* avx2_interleave_highv16hi_mask */
    case 3861:  /* avx512bw_interleave_highv32hi_mask */
    case 3859:  /* vec_interleave_lowv16qi_mask */
    case 3857:  /* avx2_interleave_lowv32qi_mask */
    case 3855:  /* avx512bw_interleave_lowv64qi_mask */
    case 3853:  /* vec_interleave_highv16qi_mask */
    case 3851:  /* avx2_interleave_highv32qi_mask */
    case 3849:  /* avx512bw_interleave_highv64qi_mask */
    case 2817:  /* vec_interleave_lowv2di_mask */
    case 2815:  /* avx512f_interleave_lowv8di_mask */
    case 2813:  /* avx2_interleave_lowv4di_mask */
    case 2811:  /* vec_interleave_highv2di_mask */
    case 2809:  /* avx512f_interleave_highv8di_mask */
    case 2807:  /* avx2_interleave_highv4di_mask */
    case 2619:  /* avx512vl_unpcklpd128_mask */
    case 2618:  /* *avx_unpcklpd256_mask */
    case 2616:  /* *avx512f_unpcklpd512_mask */
    case 2613:  /* avx512vl_unpckhpd128_mask */
    case 2612:  /* avx_unpckhpd256_mask */
    case 2610:  /* avx512f_unpckhpd512_mask */
    case 2516:  /* unpcklps128_mask */
    case 2515:  /* avx_unpcklps256_mask */
    case 2513:  /* avx512f_unpcklps512_mask */
    case 2511:  /* vec_interleave_highv4sf_mask */
    case 2509:  /* avx_unpckhps256_mask */
    case 2507:  /* avx512f_unpckhps512_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2501:  /* *avx512vl_cvtmask2qv2di */
    case 2500:  /* *avx512vl_cvtmask2qv4di */
    case 2499:  /* *avx512f_cvtmask2qv8di */
    case 2498:  /* *avx512vl_cvtmask2dv4si */
    case 2497:  /* *avx512vl_cvtmask2dv8si */
    case 2496:  /* *avx512f_cvtmask2dv16si */
    case 2495:  /* *avx512vl_cvtmask2wv8hi */
    case 2494:  /* *avx512vl_cvtmask2wv16hi */
    case 2493:  /* *avx512bw_cvtmask2wv32hi */
    case 2492:  /* *avx512vl_cvtmask2bv32qi */
    case 2491:  /* *avx512vl_cvtmask2bv16qi */
    case 2490:  /* *avx512bw_cvtmask2bv64qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2459:  /* sse2_cvtss2sd_mask_round */
    case 2454:  /* sse2_cvtsd2ss_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2458:  /* sse2_cvtss2sd_mask */
    case 2453:  /* sse2_cvtsd2ss_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3083:  /* *avx512f_us_truncatev8div16qi2_mask_1 */
    case 3082:  /* *avx512f_truncatev8div16qi2_mask_1 */
    case 3081:  /* *avx512f_ss_truncatev8div16qi2_mask_1 */
    case 3062:  /* *avx512vl_us_truncatev2div2si2_mask_1 */
    case 3061:  /* *avx512vl_truncatev2div2si2_mask_1 */
    case 3060:  /* *avx512vl_ss_truncatev2div2si2_mask_1 */
    case 3041:  /* *avx512vl_us_truncatev2div2hi2_mask_1 */
    case 3040:  /* *avx512vl_truncatev2div2hi2_mask_1 */
    case 3039:  /* *avx512vl_ss_truncatev2div2hi2_mask_1 */
    case 3017:  /* *avx512vl_us_truncatev4div4hi2_mask_1 */
    case 3016:  /* *avx512vl_truncatev4div4hi2_mask_1 */
    case 3015:  /* *avx512vl_ss_truncatev4div4hi2_mask_1 */
    case 3014:  /* *avx512vl_us_truncatev4siv4hi2_mask_1 */
    case 3013:  /* *avx512vl_truncatev4siv4hi2_mask_1 */
    case 3012:  /* *avx512vl_ss_truncatev4siv4hi2_mask_1 */
    case 2972:  /* *avx512vl_us_truncatev8siv8qi2_mask_1 */
    case 2971:  /* *avx512vl_truncatev8siv8qi2_mask_1 */
    case 2970:  /* *avx512vl_ss_truncatev8siv8qi2_mask_1 */
    case 2969:  /* *avx512vl_us_truncatev8hiv8qi2_mask_1 */
    case 2968:  /* *avx512vl_truncatev8hiv8qi2_mask_1 */
    case 2967:  /* *avx512vl_ss_truncatev8hiv8qi2_mask_1 */
    case 2936:  /* *avx512vl_us_truncatev4div4qi2_mask_1 */
    case 2935:  /* *avx512vl_truncatev4div4qi2_mask_1 */
    case 2934:  /* *avx512vl_ss_truncatev4div4qi2_mask_1 */
    case 2933:  /* *avx512vl_us_truncatev4siv4qi2_mask_1 */
    case 2932:  /* *avx512vl_truncatev4siv4qi2_mask_1 */
    case 2931:  /* *avx512vl_ss_truncatev4siv4qi2_mask_1 */
    case 2906:  /* *avx512vl_us_truncatev2div2qi2_mask_1 */
    case 2905:  /* *avx512vl_truncatev2div2qi2_mask_1 */
    case 2904:  /* *avx512vl_ss_truncatev2div2qi2_mask_1 */
    case 2450:  /* *sse2_cvttpd2dq_mask_1 */
    case 2391:  /* *ufix_truncv2dfv2si2_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 3080:  /* avx512f_us_truncatev8div16qi2_mask */
    case 3079:  /* avx512f_truncatev8div16qi2_mask */
    case 3078:  /* avx512f_ss_truncatev8div16qi2_mask */
    case 3059:  /* avx512vl_us_truncatev2div2si2_mask */
    case 3058:  /* avx512vl_truncatev2div2si2_mask */
    case 3057:  /* avx512vl_ss_truncatev2div2si2_mask */
    case 3038:  /* avx512vl_us_truncatev2div2hi2_mask */
    case 3037:  /* avx512vl_truncatev2div2hi2_mask */
    case 3036:  /* avx512vl_ss_truncatev2div2hi2_mask */
    case 3011:  /* avx512vl_us_truncatev4div4hi2_mask */
    case 3010:  /* avx512vl_truncatev4div4hi2_mask */
    case 3009:  /* avx512vl_ss_truncatev4div4hi2_mask */
    case 3008:  /* avx512vl_us_truncatev4siv4hi2_mask */
    case 3007:  /* avx512vl_truncatev4siv4hi2_mask */
    case 3006:  /* avx512vl_ss_truncatev4siv4hi2_mask */
    case 2966:  /* avx512vl_us_truncatev8siv8qi2_mask */
    case 2965:  /* avx512vl_truncatev8siv8qi2_mask */
    case 2964:  /* avx512vl_ss_truncatev8siv8qi2_mask */
    case 2963:  /* avx512vl_us_truncatev8hiv8qi2_mask */
    case 2962:  /* avx512vl_truncatev8hiv8qi2_mask */
    case 2961:  /* avx512vl_ss_truncatev8hiv8qi2_mask */
    case 2930:  /* avx512vl_us_truncatev4div4qi2_mask */
    case 2929:  /* avx512vl_truncatev4div4qi2_mask */
    case 2928:  /* avx512vl_ss_truncatev4div4qi2_mask */
    case 2927:  /* avx512vl_us_truncatev4siv4qi2_mask */
    case 2926:  /* avx512vl_truncatev4siv4qi2_mask */
    case 2925:  /* avx512vl_ss_truncatev4siv4qi2_mask */
    case 2903:  /* avx512vl_us_truncatev2div2qi2_mask */
    case 2902:  /* avx512vl_truncatev2div2qi2_mask */
    case 2901:  /* avx512vl_ss_truncatev2div2qi2_mask */
    case 2449:  /* sse2_cvttpd2dq_mask */
    case 2390:  /* ufix_truncv2dfv2si2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2380:  /* *ufix_notruncv2dfv2si2_mask_1 */
    case 2369:  /* *sse2_cvtpd2dq_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2379:  /* ufix_notruncv2dfv2si2_mask */
    case 2368:  /* sse2_cvtpd2dq_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 4678:  /* avx512dq_broadcastv8sf_mask */
    case 4676:  /* avx512dq_broadcastv16sf_mask */
    case 4674:  /* avx512dq_broadcastv4si_mask */
    case 4672:  /* avx512dq_broadcastv8si_mask */
    case 4670:  /* avx512dq_broadcastv16si_mask */
    case 4601:  /* avx512vl_vec_dupv8hi_mask */
    case 4599:  /* avx512vl_vec_dupv16hi_mask */
    case 4597:  /* avx512bw_vec_dupv32hi_mask */
    case 4595:  /* avx512vl_vec_dupv32qi_mask */
    case 4593:  /* avx512vl_vec_dupv16qi_mask */
    case 4591:  /* avx512bw_vec_dupv64qi_mask */
    case 4589:  /* avx512vl_vec_dupv2df_mask */
    case 4587:  /* avx512vl_vec_dupv4df_mask */
    case 4585:  /* avx512f_vec_dupv8df_mask */
    case 4583:  /* avx512vl_vec_dupv4sf_mask */
    case 4581:  /* avx512vl_vec_dupv8sf_mask */
    case 4579:  /* avx512f_vec_dupv16sf_mask */
    case 4577:  /* avx512vl_vec_dupv2di_mask */
    case 4575:  /* avx512vl_vec_dupv4di_mask */
    case 4573:  /* avx512f_vec_dupv8di_mask */
    case 4571:  /* avx512vl_vec_dupv4si_mask */
    case 4569:  /* avx512vl_vec_dupv8si_mask */
    case 4567:  /* avx512f_vec_dupv16si_mask */
    case 4293:  /* sse4_1_zero_extendv2siv2di2_mask */
    case 4291:  /* sse4_1_sign_extendv2siv2di2_mask */
    case 4271:  /* sse4_1_zero_extendv2hiv2di2_mask */
    case 4269:  /* sse4_1_sign_extendv2hiv2di2_mask */
    case 4259:  /* avx2_zero_extendv4hiv4di2_mask */
    case 4257:  /* avx2_sign_extendv4hiv4di2_mask */
    case 4251:  /* sse4_1_zero_extendv2qiv2di2_mask */
    case 4249:  /* sse4_1_sign_extendv2qiv2di2_mask */
    case 4239:  /* avx2_zero_extendv4qiv4di2_mask */
    case 4237:  /* avx2_sign_extendv4qiv4di2_mask */
    case 4227:  /* avx512f_zero_extendv8qiv8di2_mask */
    case 4225:  /* avx512f_sign_extendv8qiv8di2_mask */
    case 4214:  /* sse4_1_zero_extendv4hiv4si2_mask */
    case 4212:  /* sse4_1_sign_extendv4hiv4si2_mask */
    case 4192:  /* sse4_1_zero_extendv4qiv4si2_mask */
    case 4190:  /* sse4_1_sign_extendv4qiv4si2_mask */
    case 4180:  /* avx2_zero_extendv8qiv8si2_mask */
    case 4178:  /* avx2_sign_extendv8qiv8si2_mask */
    case 4163:  /* sse4_1_zero_extendv8qiv8hi2_mask */
    case 4161:  /* sse4_1_sign_extendv8qiv8hi2_mask */
    case 2503:  /* sse2_cvtps2pd_mask */
    case 2443:  /* avx512dq_fixuns_truncv2sfv2di2_mask */
    case 2441:  /* avx512dq_fix_truncv2sfv2di2_mask */
    case 2359:  /* sse2_cvtdq2pd_mask */
    case 2355:  /* ufloatv2siv2df2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2469:  /* *sse2_cvtpd2ps_mask_1 */
    case 2349:  /* *floatunsv2div2sf2_mask_1 */
    case 2348:  /* *floatv2div2sf2_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2468:  /* *sse2_cvtpd2ps_mask */
    case 2347:  /* *floatunsv2div2sf2_mask */
    case 2346:  /* *floatv2div2sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2274:  /* avx512dq_cvtps2uqqv2di_mask */
    case 2266:  /* avx512dq_cvtps2qqv2di_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4911:  /* avx512f_vcvtph2ps512_mask_round */
    case 4383:  /* avx512er_rsqrt28v8df_mask_round */
    case 4379:  /* avx512er_rsqrt28v16sf_mask_round */
    case 4367:  /* avx512er_rcp28v8df_mask_round */
    case 4363:  /* avx512er_rcp28v16sf_mask_round */
    case 4359:  /* avx512er_exp2v8df_mask_round */
    case 4355:  /* avx512er_exp2v16sf_mask_round */
    case 2694:  /* avx512vl_getexpv2df_mask_round */
    case 2690:  /* avx512vl_getexpv4df_mask_round */
    case 2686:  /* avx512f_getexpv8df_mask_round */
    case 2682:  /* avx512vl_getexpv4sf_mask_round */
    case 2678:  /* avx512vl_getexpv8sf_mask_round */
    case 2674:  /* avx512f_getexpv16sf_mask_round */
    case 2423:  /* ufix_notruncv8dfv8di2_mask_round */
    case 2415:  /* fix_notruncv8dfv8di2_mask_round */
    case 2377:  /* ufix_notruncv4dfv4si2_mask_round */
    case 2373:  /* ufix_notruncv8dfv8si2_mask_round */
    case 2363:  /* avx512f_cvtpd2dq512_mask_round */
    case 2270:  /* avx512dq_cvtps2uqqv8di_mask_round */
    case 2262:  /* avx512dq_cvtps2qqv8di_mask_round */
    case 2258:  /* avx512vl_ufix_notruncv4sfv4si_mask_round */
    case 2254:  /* avx512vl_ufix_notruncv8sfv8si_mask_round */
    case 2250:  /* avx512f_ufix_notruncv16sfv16si_mask_round */
    case 2246:  /* avx512f_fix_notruncv16sfv16si_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4909:  /* *avx512f_vcvtph2ps512_round */
    case 4381:  /* *avx512er_rsqrt28v8df_round */
    case 4377:  /* *avx512er_rsqrt28v16sf_round */
    case 4365:  /* *avx512er_rcp28v8df_round */
    case 4361:  /* *avx512er_rcp28v16sf_round */
    case 4357:  /* avx512er_exp2v8df_round */
    case 4353:  /* avx512er_exp2v16sf_round */
    case 2692:  /* avx512vl_getexpv2df_round */
    case 2688:  /* avx512vl_getexpv4df_round */
    case 2684:  /* avx512f_getexpv8df_round */
    case 2680:  /* avx512vl_getexpv4sf_round */
    case 2676:  /* avx512vl_getexpv8sf_round */
    case 2672:  /* avx512f_getexpv16sf_round */
    case 2421:  /* ufix_notruncv8dfv8di2_round */
    case 2413:  /* fix_notruncv8dfv8di2_round */
    case 2375:  /* ufix_notruncv4dfv4si2_round */
    case 2371:  /* ufix_notruncv8dfv8si2_round */
    case 2361:  /* avx512f_cvtpd2dq512_round */
    case 2268:  /* *avx512dq_cvtps2uqqv8di_round */
    case 2260:  /* *avx512dq_cvtps2qqv8di_round */
    case 2256:  /* *avx512vl_ufix_notruncv4sfv4si_round */
    case 2252:  /* *avx512vl_ufix_notruncv8sfv8si_round */
    case 2248:  /* *avx512f_ufix_notruncv16sfv16si_round */
    case 2244:  /* avx512f_fix_notruncv16sfv16si_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2303:  /* sse2_cvttsd2si_round */
    case 2298:  /* avx512f_vcvttsd2usi_round */
    case 2294:  /* avx512f_vcvttss2usi_round */
    case 2215:  /* sse_cvttss2si_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2300:  /* sse2_cvtsd2si_round */
    case 2296:  /* avx512f_vcvtsd2usi_round */
    case 2292:  /* avx512f_vcvtss2usi_round */
    case 2212:  /* sse_cvtss2si_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2457:  /* sse2_cvtss2sd_round */
    case 2452:  /* sse2_cvtsd2ss_round */
    case 2217:  /* cvtusi2ss32_round */
    case 2210:  /* sse_cvtsi2ss_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2460:  /* *sse2_vd_cvtss2sd */
    case 2456:  /* sse2_cvtss2sd */
    case 2455:  /* *sse2_vd_cvtsd2ss */
    case 2451:  /* sse2_cvtsd2ss */
    case 2290:  /* sse2_cvtsi2sd */
    case 2218:  /* cvtusi2sd32 */
    case 2216:  /* cvtusi2ss32 */
    case 2209:  /* sse_cvtsi2ss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 4902:  /* vcvtph2ps */
    case 2378:  /* ufix_notruncv2dfv2si2 */
    case 2367:  /* sse2_cvtpd2dq */
    case 2207:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 2206:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 2205:  /* *fma4i_vmfnmsub_v2df */
    case 2204:  /* *fma4i_vmfnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2201:  /* *fma4i_vmfmsub_v2df */
    case 2200:  /* *fma4i_vmfmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2199:  /* *fma4i_vmfmadd_v2df */
    case 2198:  /* *fma4i_vmfmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2197:  /* *avx512f_vmfnmsub_v2df_maskz_1_round */
    case 2195:  /* *avx512f_vmfnmsub_v4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2196:  /* *avx512f_vmfnmsub_v2df_maskz_1 */
    case 2194:  /* *avx512f_vmfnmsub_v4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2193:  /* *avx512f_vmfnmsub_v2df_mask3_round */
    case 2191:  /* *avx512f_vmfnmsub_v4sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2192:  /* *avx512f_vmfnmsub_v2df_mask3 */
    case 2190:  /* *avx512f_vmfnmsub_v4sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2189:  /* *avx512f_vmfnmsub_v2df_mask_round */
    case 2187:  /* *avx512f_vmfnmsub_v4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2188:  /* *avx512f_vmfnmsub_v2df_mask */
    case 2186:  /* *avx512f_vmfnmsub_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2185:  /* *avx512f_vmfnmadd_v2df_maskz_1_round */
    case 2183:  /* *avx512f_vmfnmadd_v4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2184:  /* *avx512f_vmfnmadd_v2df_maskz_1 */
    case 2182:  /* *avx512f_vmfnmadd_v4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2181:  /* *avx512f_vmfnmadd_v2df_mask3_round */
    case 2179:  /* *avx512f_vmfnmadd_v4sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2180:  /* *avx512f_vmfnmadd_v2df_mask3 */
    case 2178:  /* *avx512f_vmfnmadd_v4sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2177:  /* *avx512f_vmfnmadd_v2df_mask_round */
    case 2175:  /* *avx512f_vmfnmadd_v4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2176:  /* *avx512f_vmfnmadd_v2df_mask */
    case 2174:  /* *avx512f_vmfnmadd_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2173:  /* *avx512f_vmfmsub_v2df_maskz_1_round */
    case 2171:  /* *avx512f_vmfmsub_v4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2172:  /* *avx512f_vmfmsub_v2df_maskz_1 */
    case 2170:  /* *avx512f_vmfmsub_v4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2169:  /* avx512f_vmfmsub_v2df_mask3_round */
    case 2167:  /* avx512f_vmfmsub_v4sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2168:  /* avx512f_vmfmsub_v2df_mask3 */
    case 2166:  /* avx512f_vmfmsub_v4sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2165:  /* *avx512f_vmfmsub_v2df_mask_round */
    case 2163:  /* *avx512f_vmfmsub_v4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2164:  /* *avx512f_vmfmsub_v2df_mask */
    case 2162:  /* *avx512f_vmfmsub_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2161:  /* avx512f_vmfmadd_v2df_maskz_1_round */
    case 2159:  /* avx512f_vmfmadd_v4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2160:  /* avx512f_vmfmadd_v2df_maskz_1 */
    case 2158:  /* avx512f_vmfmadd_v4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2157:  /* avx512f_vmfmadd_v2df_mask3_round */
    case 2155:  /* avx512f_vmfmadd_v4sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2156:  /* avx512f_vmfmadd_v2df_mask3 */
    case 2154:  /* avx512f_vmfmadd_v4sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2153:  /* avx512f_vmfmadd_v2df_mask_round */
    case 2151:  /* avx512f_vmfmadd_v4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2152:  /* avx512f_vmfmadd_v2df_mask */
    case 2150:  /* avx512f_vmfmadd_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2149:  /* *fmai_fnmsub_v2df_round */
    case 2147:  /* *fmai_fnmsub_v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2148:  /* *fmai_fnmsub_v2df */
    case 2146:  /* *fmai_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2145:  /* *fmai_fnmadd_v2df_round */
    case 2143:  /* *fmai_fnmadd_v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2144:  /* *fmai_fnmadd_v2df */
    case 2142:  /* *fmai_fnmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2141:  /* *fmai_fmsub_v2df */
    case 2139:  /* *fmai_fmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2140:  /* *fmai_fmsub_v2df */
    case 2138:  /* *fmai_fmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2137:  /* *fmai_fmadd_v2df */
    case 2135:  /* *fmai_fmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2136:  /* *fmai_fmadd_v2df */
    case 2134:  /* *fmai_fmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2133:  /* avx512vl_fmsubadd_v2df_mask3_round */
    case 2131:  /* avx512vl_fmsubadd_v4df_mask3_round */
    case 2129:  /* avx512f_fmsubadd_v8df_mask3_round */
    case 2127:  /* avx512vl_fmsubadd_v4sf_mask3_round */
    case 2125:  /* avx512vl_fmsubadd_v8sf_mask3_round */
    case 2123:  /* avx512f_fmsubadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2132:  /* avx512vl_fmsubadd_v2df_mask3 */
    case 2130:  /* avx512vl_fmsubadd_v4df_mask3 */
    case 2128:  /* avx512f_fmsubadd_v8df_mask3 */
    case 2126:  /* avx512vl_fmsubadd_v4sf_mask3 */
    case 2124:  /* avx512vl_fmsubadd_v8sf_mask3 */
    case 2122:  /* avx512f_fmsubadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2121:  /* avx512vl_fmsubadd_v2df_mask_round */
    case 2119:  /* avx512vl_fmsubadd_v4df_mask_round */
    case 2117:  /* avx512f_fmsubadd_v8df_mask_round */
    case 2115:  /* avx512vl_fmsubadd_v4sf_mask_round */
    case 2113:  /* avx512vl_fmsubadd_v8sf_mask_round */
    case 2111:  /* avx512f_fmsubadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2120:  /* avx512vl_fmsubadd_v2df_mask */
    case 2118:  /* avx512vl_fmsubadd_v4df_mask */
    case 2116:  /* avx512f_fmsubadd_v8df_mask */
    case 2114:  /* avx512vl_fmsubadd_v4sf_mask */
    case 2112:  /* avx512vl_fmsubadd_v8sf_mask */
    case 2110:  /* avx512f_fmsubadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2105:  /* fma_fmsubadd_v8df_maskz_1_round */
    case 2096:  /* fma_fmsubadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2104:  /* *fma_fmsubadd_v8df_round */
    case 2095:  /* *fma_fmsubadd_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2109:  /* fma_fmsubadd_v2df_maskz_1 */
    case 2107:  /* fma_fmsubadd_v4df_maskz_1 */
    case 2103:  /* fma_fmsubadd_v8df_maskz_1 */
    case 2100:  /* fma_fmsubadd_v4sf_maskz_1 */
    case 2098:  /* fma_fmsubadd_v8sf_maskz_1 */
    case 2094:  /* fma_fmsubadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2108:  /* *fma_fmsubadd_v2df */
    case 2106:  /* *fma_fmsubadd_v4df */
    case 2102:  /* *fma_fmsubadd_v8df */
    case 2101:  /* *fma_fmsubadd_df */
    case 2099:  /* *fma_fmsubadd_v4sf */
    case 2097:  /* *fma_fmsubadd_v8sf */
    case 2093:  /* *fma_fmsubadd_v16sf */
    case 2092:  /* *fma_fmsubadd_sf */
    case 2091:  /* *fma_fmsubadd_v2df */
    case 2090:  /* *fma_fmsubadd_v4df */
    case 2089:  /* *fma_fmsubadd_v4sf */
    case 2088:  /* *fma_fmsubadd_v8sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      break;

    case 2087:  /* avx512vl_fmaddsub_v2df_mask3_round */
    case 2085:  /* avx512vl_fmaddsub_v4df_mask3_round */
    case 2083:  /* avx512f_fmaddsub_v8df_mask3_round */
    case 2081:  /* avx512vl_fmaddsub_v4sf_mask3_round */
    case 2079:  /* avx512vl_fmaddsub_v8sf_mask3_round */
    case 2077:  /* avx512f_fmaddsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2086:  /* avx512vl_fmaddsub_v2df_mask3 */
    case 2084:  /* avx512vl_fmaddsub_v4df_mask3 */
    case 2082:  /* avx512f_fmaddsub_v8df_mask3 */
    case 2080:  /* avx512vl_fmaddsub_v4sf_mask3 */
    case 2078:  /* avx512vl_fmaddsub_v8sf_mask3 */
    case 2076:  /* avx512f_fmaddsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2075:  /* avx512vl_fmaddsub_v2df_mask_round */
    case 2073:  /* avx512vl_fmaddsub_v4df_mask_round */
    case 2071:  /* avx512f_fmaddsub_v8df_mask_round */
    case 2069:  /* avx512vl_fmaddsub_v4sf_mask_round */
    case 2067:  /* avx512vl_fmaddsub_v8sf_mask_round */
    case 2065:  /* avx512f_fmaddsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5569:  /* avx512f_dpbf16ps_v4sf_mask */
    case 5568:  /* avx512f_dpbf16ps_v8sf_mask */
    case 5567:  /* avx512f_dpbf16ps_v16sf_mask */
    case 5516:  /* vpdpwssds_v4si_mask */
    case 5515:  /* vpdpwssds_v8si_mask */
    case 5514:  /* vpdpwssds_v16si_mask */
    case 5507:  /* vpdpwssd_v4si_mask */
    case 5506:  /* vpdpwssd_v8si_mask */
    case 5505:  /* vpdpwssd_v16si_mask */
    case 5498:  /* vpdpbusds_v4si_mask */
    case 5497:  /* vpdpbusds_v8si_mask */
    case 5496:  /* vpdpbusds_v16si_mask */
    case 5489:  /* vpdpbusd_v4si_mask */
    case 5488:  /* vpdpbusd_v8si_mask */
    case 5487:  /* vpdpbusd_v16si_mask */
    case 5474:  /* vpshldv_v2di_mask */
    case 5473:  /* vpshldv_v4si_mask */
    case 5472:  /* vpshldv_v8hi_mask */
    case 5471:  /* vpshldv_v4di_mask */
    case 5470:  /* vpshldv_v8si_mask */
    case 5469:  /* vpshldv_v16hi_mask */
    case 5468:  /* vpshldv_v8di_mask */
    case 5467:  /* vpshldv_v16si_mask */
    case 5466:  /* vpshldv_v32hi_mask */
    case 5447:  /* vpshrdv_v2di_mask */
    case 5446:  /* vpshrdv_v4si_mask */
    case 5445:  /* vpshrdv_v8hi_mask */
    case 5444:  /* vpshrdv_v4di_mask */
    case 5443:  /* vpshrdv_v8si_mask */
    case 5442:  /* vpshrdv_v16hi_mask */
    case 5441:  /* vpshrdv_v8di_mask */
    case 5440:  /* vpshrdv_v16si_mask */
    case 5439:  /* vpshrdv_v32hi_mask */
    case 5325:  /* vpamdd52huqv2di_mask */
    case 5324:  /* vpamdd52luqv2di_mask */
    case 5323:  /* vpamdd52huqv4di_mask */
    case 5322:  /* vpamdd52luqv4di_mask */
    case 5321:  /* vpamdd52huqv8di_mask */
    case 5320:  /* vpamdd52luqv8di_mask */
    case 2074:  /* avx512vl_fmaddsub_v2df_mask */
    case 2072:  /* avx512vl_fmaddsub_v4df_mask */
    case 2070:  /* avx512f_fmaddsub_v8df_mask */
    case 2068:  /* avx512vl_fmaddsub_v4sf_mask */
    case 2066:  /* avx512vl_fmaddsub_v8sf_mask */
    case 2064:  /* avx512f_fmaddsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5204:  /* avx512dq_rangepv8df_mask_round */
    case 5196:  /* avx512dq_rangepv16sf_mask_round */
    case 2059:  /* fma_fmaddsub_v8df_maskz_1_round */
    case 2050:  /* fma_fmaddsub_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5566:  /* avx512f_dpbf16ps_v4sf_maskz_1 */
    case 5564:  /* avx512f_dpbf16ps_v8sf_maskz_1 */
    case 5562:  /* avx512f_dpbf16ps_v16sf_maskz_1 */
    case 5519:  /* vpdpwssds_v4si_maskz_1 */
    case 5518:  /* vpdpwssds_v8si_maskz_1 */
    case 5517:  /* vpdpwssds_v16si_maskz_1 */
    case 5510:  /* vpdpwssd_v4si_maskz_1 */
    case 5509:  /* vpdpwssd_v8si_maskz_1 */
    case 5508:  /* vpdpwssd_v16si_maskz_1 */
    case 5501:  /* vpdpbusds_v4si_maskz_1 */
    case 5500:  /* vpdpbusds_v8si_maskz_1 */
    case 5499:  /* vpdpbusds_v16si_maskz_1 */
    case 5492:  /* vpdpbusd_v4si_maskz_1 */
    case 5491:  /* vpdpbusd_v8si_maskz_1 */
    case 5490:  /* vpdpbusd_v16si_maskz_1 */
    case 5483:  /* vpshldv_v2di_maskz_1 */
    case 5482:  /* vpshldv_v4si_maskz_1 */
    case 5481:  /* vpshldv_v8hi_maskz_1 */
    case 5480:  /* vpshldv_v4di_maskz_1 */
    case 5479:  /* vpshldv_v8si_maskz_1 */
    case 5478:  /* vpshldv_v16hi_maskz_1 */
    case 5477:  /* vpshldv_v8di_maskz_1 */
    case 5476:  /* vpshldv_v16si_maskz_1 */
    case 5475:  /* vpshldv_v32hi_maskz_1 */
    case 5456:  /* vpshrdv_v2di_maskz_1 */
    case 5455:  /* vpshrdv_v4si_maskz_1 */
    case 5454:  /* vpshrdv_v8hi_maskz_1 */
    case 5453:  /* vpshrdv_v4di_maskz_1 */
    case 5452:  /* vpshrdv_v8si_maskz_1 */
    case 5451:  /* vpshrdv_v16hi_maskz_1 */
    case 5450:  /* vpshrdv_v8di_maskz_1 */
    case 5449:  /* vpshrdv_v16si_maskz_1 */
    case 5448:  /* vpshrdv_v32hi_maskz_1 */
    case 5429:  /* vpshld_v2di_mask */
    case 5427:  /* vpshld_v4si_mask */
    case 5425:  /* vpshld_v8hi_mask */
    case 5423:  /* vpshld_v4di_mask */
    case 5421:  /* vpshld_v8si_mask */
    case 5419:  /* vpshld_v16hi_mask */
    case 5417:  /* vpshld_v8di_mask */
    case 5415:  /* vpshld_v16si_mask */
    case 5413:  /* vpshld_v32hi_mask */
    case 5411:  /* vpshrd_v2di_mask */
    case 5409:  /* vpshrd_v4si_mask */
    case 5407:  /* vpshrd_v8hi_mask */
    case 5405:  /* vpshrd_v4di_mask */
    case 5403:  /* vpshrd_v8si_mask */
    case 5401:  /* vpshrd_v16hi_mask */
    case 5399:  /* vpshrd_v8di_mask */
    case 5397:  /* vpshrd_v16si_mask */
    case 5395:  /* vpshrd_v32hi_mask */
    case 5387:  /* vgf2p8affineqb_v16qi_mask */
    case 5385:  /* vgf2p8affineqb_v32qi_mask */
    case 5383:  /* vgf2p8affineqb_v64qi_mask */
    case 5381:  /* vgf2p8affineinvqb_v16qi_mask */
    case 5379:  /* vgf2p8affineinvqb_v32qi_mask */
    case 5377:  /* vgf2p8affineinvqb_v64qi_mask */
    case 5351:  /* avx5124vnniw_vp4dpwssds_maskz */
    case 5348:  /* avx5124vnniw_vp4dpwssd_maskz */
    case 5345:  /* avx5124fmaddps_4fnmaddss_maskz */
    case 5342:  /* avx5124fmaddps_4fnmaddps_maskz */
    case 5339:  /* avx5124fmaddps_4fmaddss_maskz */
    case 5336:  /* avx5124fmaddps_4fmaddps_maskz */
    case 5319:  /* vpamdd52huqv2di_maskz_1 */
    case 5317:  /* vpamdd52luqv2di_maskz_1 */
    case 5315:  /* vpamdd52huqv4di_maskz_1 */
    case 5313:  /* vpamdd52luqv4di_maskz_1 */
    case 5311:  /* vpamdd52huqv8di_maskz_1 */
    case 5309:  /* vpamdd52luqv8di_maskz_1 */
    case 5270:  /* avx512bw_dbpsadbwv32hi_mask */
    case 5268:  /* avx512bw_dbpsadbwv16hi_mask */
    case 5266:  /* avx512bw_dbpsadbwv8hi_mask */
    case 5208:  /* avx512dq_rangepv2df_mask */
    case 5206:  /* avx512dq_rangepv4df_mask */
    case 5203:  /* avx512dq_rangepv8df_mask */
    case 5200:  /* avx512dq_rangepv4sf_mask */
    case 5198:  /* avx512dq_rangepv8sf_mask */
    case 5195:  /* avx512dq_rangepv16sf_mask */
    case 4766:  /* avx512vl_vpermt2varv16qi3_maskz_1 */
    case 4764:  /* avx512vl_vpermt2varv32qi3_maskz_1 */
    case 4762:  /* avx512bw_vpermt2varv64qi3_maskz_1 */
    case 4760:  /* avx512vl_vpermt2varv8hi3_maskz_1 */
    case 4758:  /* avx512vl_vpermt2varv16hi3_maskz_1 */
    case 4756:  /* avx512bw_vpermt2varv32hi3_maskz_1 */
    case 4754:  /* avx512vl_vpermt2varv2df3_maskz_1 */
    case 4752:  /* avx512vl_vpermt2varv2di3_maskz_1 */
    case 4750:  /* avx512vl_vpermt2varv4sf3_maskz_1 */
    case 4748:  /* avx512vl_vpermt2varv4si3_maskz_1 */
    case 4746:  /* avx512vl_vpermt2varv4df3_maskz_1 */
    case 4744:  /* avx512vl_vpermt2varv4di3_maskz_1 */
    case 4742:  /* avx512vl_vpermt2varv8sf3_maskz_1 */
    case 4740:  /* avx512vl_vpermt2varv8si3_maskz_1 */
    case 4738:  /* avx512f_vpermt2varv8df3_maskz_1 */
    case 4736:  /* avx512f_vpermt2varv8di3_maskz_1 */
    case 4734:  /* avx512f_vpermt2varv16sf3_maskz_1 */
    case 4732:  /* avx512f_vpermt2varv16si3_maskz_1 */
    case 4068:  /* ssse3_palignrv16qi_mask */
    case 4067:  /* avx2_palignrv32qi_mask */
    case 4066:  /* avx512bw_palignrv64qi_mask */
    case 2714:  /* avx512vl_alignv2di_mask */
    case 2712:  /* avx512vl_alignv4di_mask */
    case 2710:  /* avx512f_alignv8di_mask */
    case 2708:  /* avx512vl_alignv4si_mask */
    case 2706:  /* avx512vl_alignv8si_mask */
    case 2704:  /* avx512f_alignv16si_mask */
    case 2063:  /* fma_fmaddsub_v2df_maskz_1 */
    case 2061:  /* fma_fmaddsub_v4df_maskz_1 */
    case 2057:  /* fma_fmaddsub_v8df_maskz_1 */
    case 2054:  /* fma_fmaddsub_v4sf_maskz_1 */
    case 2052:  /* fma_fmaddsub_v8sf_maskz_1 */
    case 2048:  /* fma_fmaddsub_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2041:  /* avx512vl_fnmsub_v2df_mask3_round */
    case 2039:  /* avx512vl_fnmsub_v4df_mask3_round */
    case 2037:  /* avx512f_fnmsub_v8df_mask3_round */
    case 2035:  /* avx512vl_fnmsub_v4sf_mask3_round */
    case 2033:  /* avx512vl_fnmsub_v8sf_mask3_round */
    case 2031:  /* avx512f_fnmsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2040:  /* avx512vl_fnmsub_v2df_mask3 */
    case 2038:  /* avx512vl_fnmsub_v4df_mask3 */
    case 2036:  /* avx512f_fnmsub_v8df_mask3 */
    case 2034:  /* avx512vl_fnmsub_v4sf_mask3 */
    case 2032:  /* avx512vl_fnmsub_v8sf_mask3 */
    case 2030:  /* avx512f_fnmsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2027:  /* avx512f_fnmsub_v8df_mask_round */
    case 2023:  /* avx512f_fnmsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2029:  /* avx512vl_fnmsub_v2df_mask */
    case 2028:  /* avx512vl_fnmsub_v4df_mask */
    case 2026:  /* avx512f_fnmsub_v8df_mask */
    case 2025:  /* avx512vl_fnmsub_v4sf_mask */
    case 2024:  /* avx512vl_fnmsub_v8sf_mask */
    case 2022:  /* avx512f_fnmsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2017:  /* fma_fnmsub_v8df_maskz_1_round */
    case 2008:  /* fma_fnmsub_v16sf_maskz_1_round */
    case 2003:  /* *fma_fnmsub_v4df */
    case 1999:  /* *fma_fnmsub_v8sf */
    case 1995:  /* *fma_fnmsub_v2df */
    case 1991:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2021:  /* fma_fnmsub_v2df_maskz_1 */
    case 2019:  /* fma_fnmsub_v4df_maskz_1 */
    case 2015:  /* fma_fnmsub_v8df_maskz_1 */
    case 2012:  /* fma_fnmsub_v4sf_maskz_1 */
    case 2010:  /* fma_fnmsub_v8sf_maskz_1 */
    case 2006:  /* fma_fnmsub_v16sf_maskz_1 */
    case 2001:  /* *fma_fnmsub_v4df */
    case 1997:  /* *fma_fnmsub_v8sf */
    case 1993:  /* *fma_fnmsub_v2df */
    case 1989:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2016:  /* *fma_fnmsub_v8df_round */
    case 2007:  /* *fma_fnmsub_v16sf_round */
    case 2002:  /* *fma_fnmsub_v4df */
    case 1998:  /* *fma_fnmsub_v8sf */
    case 1994:  /* *fma_fnmsub_v2df */
    case 1990:  /* *fma_fnmsub_v4sf */
    case 1987:  /* *fma_fnmsub_df */
    case 1985:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2020:  /* *fma_fnmsub_v2df */
    case 2018:  /* *fma_fnmsub_v4df */
    case 2014:  /* *fma_fnmsub_v8df */
    case 2013:  /* *fma_fnmsub_df */
    case 2011:  /* *fma_fnmsub_v4sf */
    case 2009:  /* *fma_fnmsub_v8sf */
    case 2005:  /* *fma_fnmsub_v16sf */
    case 2004:  /* *fma_fnmsub_sf */
    case 2000:  /* *fma_fnmsub_v4df */
    case 1996:  /* *fma_fnmsub_v8sf */
    case 1992:  /* *fma_fnmsub_v2df */
    case 1988:  /* *fma_fnmsub_v4sf */
    case 1986:  /* *fma_fnmsub_df */
    case 1984:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1981:  /* avx512f_fnmadd_v8df_mask3_round */
    case 1977:  /* avx512f_fnmadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1983:  /* avx512vl_fnmadd_v2df_mask3 */
    case 1982:  /* avx512vl_fnmadd_v4df_mask3 */
    case 1980:  /* avx512f_fnmadd_v8df_mask3 */
    case 1979:  /* avx512vl_fnmadd_v4sf_mask3 */
    case 1978:  /* avx512vl_fnmadd_v8sf_mask3 */
    case 1976:  /* avx512f_fnmadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1973:  /* avx512f_fnmadd_v8df_mask_round */
    case 1969:  /* avx512f_fnmadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1975:  /* avx512vl_fnmadd_v2df_mask */
    case 1974:  /* avx512vl_fnmadd_v4df_mask */
    case 1972:  /* avx512f_fnmadd_v8df_mask */
    case 1971:  /* avx512vl_fnmadd_v4sf_mask */
    case 1970:  /* avx512vl_fnmadd_v8sf_mask */
    case 1968:  /* avx512f_fnmadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1963:  /* fma_fnmadd_v8df_maskz_1_round */
    case 1954:  /* fma_fnmadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1967:  /* fma_fnmadd_v2df_maskz_1 */
    case 1965:  /* fma_fnmadd_v4df_maskz_1 */
    case 1961:  /* fma_fnmadd_v8df_maskz_1 */
    case 1958:  /* fma_fnmadd_v4sf_maskz_1 */
    case 1956:  /* fma_fnmadd_v8sf_maskz_1 */
    case 1952:  /* fma_fnmadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1941:  /* avx512f_fmsub_v8df_mask3_round */
    case 1937:  /* avx512f_fmsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1943:  /* avx512vl_fmsub_v2df_mask3 */
    case 1942:  /* avx512vl_fmsub_v4df_mask3 */
    case 1940:  /* avx512f_fmsub_v8df_mask3 */
    case 1939:  /* avx512vl_fmsub_v4sf_mask3 */
    case 1938:  /* avx512vl_fmsub_v8sf_mask3 */
    case 1936:  /* avx512f_fmsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1935:  /* avx512vl_fmsub_v2df_mask_round */
    case 1933:  /* avx512vl_fmsub_v4df_mask_round */
    case 1931:  /* avx512f_fmsub_v8df_mask_round */
    case 1929:  /* avx512vl_fmsub_v4sf_mask_round */
    case 1927:  /* avx512vl_fmsub_v8sf_mask_round */
    case 1925:  /* avx512f_fmsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1934:  /* avx512vl_fmsub_v2df_mask */
    case 1932:  /* avx512vl_fmsub_v4df_mask */
    case 1930:  /* avx512f_fmsub_v8df_mask */
    case 1928:  /* avx512vl_fmsub_v4sf_mask */
    case 1926:  /* avx512vl_fmsub_v8sf_mask */
    case 1924:  /* avx512f_fmsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1919:  /* fma_fmsub_v8df_maskz_1_round */
    case 1910:  /* fma_fmsub_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1918:  /* *fma_fmsub_v8df_round */
    case 1909:  /* *fma_fmsub_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1923:  /* fma_fmsub_v2df_maskz_1 */
    case 1921:  /* fma_fmsub_v4df_maskz_1 */
    case 1917:  /* fma_fmsub_v8df_maskz_1 */
    case 1914:  /* fma_fmsub_v4sf_maskz_1 */
    case 1912:  /* fma_fmsub_v8sf_maskz_1 */
    case 1908:  /* fma_fmsub_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1922:  /* *fma_fmsub_v2df */
    case 1920:  /* *fma_fmsub_v4df */
    case 1916:  /* *fma_fmsub_v8df */
    case 1915:  /* *fma_fmsub_df */
    case 1913:  /* *fma_fmsub_v4sf */
    case 1911:  /* *fma_fmsub_v8sf */
    case 1907:  /* *fma_fmsub_v16sf */
    case 1906:  /* *fma_fmsub_sf */
    case 1905:  /* *fma_fmsub_v4df */
    case 1904:  /* *fma_fmsub_v8sf */
    case 1903:  /* *fma_fmsub_v2df */
    case 1902:  /* *fma_fmsub_v4sf */
    case 1901:  /* *fma_fmsub_df */
    case 1900:  /* *fma_fmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1899:  /* avx512vl_fmadd_v2df_mask3_round */
    case 1897:  /* avx512vl_fmadd_v4df_mask3_round */
    case 1895:  /* avx512f_fmadd_v8df_mask3_round */
    case 1893:  /* avx512vl_fmadd_v4sf_mask3_round */
    case 1891:  /* avx512vl_fmadd_v8sf_mask3_round */
    case 1889:  /* avx512f_fmadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1898:  /* avx512vl_fmadd_v2df_mask3 */
    case 1896:  /* avx512vl_fmadd_v4df_mask3 */
    case 1894:  /* avx512f_fmadd_v8df_mask3 */
    case 1892:  /* avx512vl_fmadd_v4sf_mask3 */
    case 1890:  /* avx512vl_fmadd_v8sf_mask3 */
    case 1888:  /* avx512f_fmadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1885:  /* avx512f_fmadd_v8df_mask_round */
    case 1881:  /* avx512f_fmadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1887:  /* avx512vl_fmadd_v2df_mask */
    case 1886:  /* avx512vl_fmadd_v4df_mask */
    case 1884:  /* avx512f_fmadd_v8df_mask */
    case 1883:  /* avx512vl_fmadd_v4sf_mask */
    case 1882:  /* avx512vl_fmadd_v8sf_mask */
    case 1880:  /* avx512f_fmadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1875:  /* fma_fmadd_v8df_maskz_1_round */
    case 1866:  /* fma_fmadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1874:  /* *fma_fmadd_v8df_round */
    case 1865:  /* *fma_fmadd_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1879:  /* fma_fmadd_v2df_maskz_1 */
    case 1877:  /* fma_fmadd_v4df_maskz_1 */
    case 1873:  /* fma_fmadd_v8df_maskz_1 */
    case 1870:  /* fma_fmadd_v4sf_maskz_1 */
    case 1868:  /* fma_fmadd_v8sf_maskz_1 */
    case 1864:  /* fma_fmadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4812:  /* vec_set_hi_v8sf_mask */
    case 4810:  /* vec_set_hi_v8si_mask */
    case 4804:  /* vec_set_hi_v4df_mask */
    case 4802:  /* vec_set_hi_v4di_mask */
    case 3915:  /* vec_set_hi_v8di_mask */
    case 3913:  /* vec_set_hi_v8df_mask */
    case 3907:  /* vec_set_hi_v16si_mask */
    case 3905:  /* vec_set_hi_v16sf_mask */
    case 3583:  /* *andnotv2di3_mask */
    case 3582:  /* *andnotv4di3_mask */
    case 3581:  /* *andnotv8di3_mask */
    case 3580:  /* *andnotv4si3_mask */
    case 3579:  /* *andnotv8si3_mask */
    case 3578:  /* *andnotv16si3_mask */
    case 1807:  /* avx512f_andnotv8df3_mask */
    case 1805:  /* avx512f_andnotv16sf3_mask */
    case 1803:  /* sse2_andnotv2df3_mask */
    case 1801:  /* avx_andnotv4df3_mask */
    case 1799:  /* sse_andnotv4sf3_mask */
    case 1797:  /* avx_andnotv8sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1795:  /* sse2_ucomi_round */
    case 1791:  /* sse_ucomi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1794:  /* sse2_ucomi */
    case 1790:  /* sse_ucomi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 1793:  /* sse2_comi_round */
    case 1789:  /* sse_comi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1792:  /* sse2_comi */
    case 1788:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1787:  /* avx512f_vmcmpv2df3_mask_round */
    case 1785:  /* avx512f_vmcmpv4sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1786:  /* avx512f_vmcmpv2df3_mask */
    case 1784:  /* avx512f_vmcmpv4sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1783:  /* avx512f_vmcmpv2df3_round */
    case 1781:  /* avx512f_vmcmpv4sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1779:  /* *avx512vl_ucmpv8hi3_1 */
    case 1778:  /* *avx512vl_ucmpv8hi3_1 */
    case 1777:  /* *avx512vl_ucmpv16hi3_1 */
    case 1776:  /* *avx512vl_ucmpv16hi3_1 */
    case 1775:  /* *avx512bw_ucmpv32hi3_1 */
    case 1774:  /* *avx512bw_ucmpv32hi3_1 */
    case 1773:  /* *avx512vl_ucmpv32qi3_1 */
    case 1772:  /* *avx512vl_ucmpv32qi3_1 */
    case 1771:  /* *avx512vl_ucmpv16qi3_1 */
    case 1770:  /* *avx512vl_ucmpv16qi3_1 */
    case 1769:  /* *avx512bw_ucmpv64qi3_1 */
    case 1768:  /* *avx512bw_ucmpv64qi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1782:  /* avx512f_vmcmpv2df3 */
    case 1780:  /* avx512f_vmcmpv4sf3 */
    case 1767:  /* *avx512vl_ucmpv2di3 */
    case 1766:  /* *avx512vl_ucmpv4di3 */
    case 1765:  /* *avx512f_ucmpv8di3 */
    case 1764:  /* *avx512vl_ucmpv4si3 */
    case 1763:  /* *avx512vl_ucmpv8si3 */
    case 1762:  /* *avx512f_ucmpv16si3 */
    case 1737:  /* *avx512vl_cmpv8hi3 */
    case 1736:  /* *avx512vl_cmpv8hi3 */
    case 1735:  /* *avx512vl_cmpv16hi3 */
    case 1734:  /* *avx512vl_cmpv16hi3 */
    case 1733:  /* *avx512bw_cmpv32hi3 */
    case 1732:  /* *avx512bw_cmpv32hi3 */
    case 1731:  /* *avx512vl_cmpv32qi3 */
    case 1730:  /* *avx512vl_cmpv32qi3 */
    case 1729:  /* *avx512vl_cmpv16qi3 */
    case 1728:  /* *avx512vl_cmpv16qi3 */
    case 1727:  /* *avx512bw_cmpv64qi3 */
    case 1726:  /* *avx512bw_cmpv64qi3 */
    case 1713:  /* *avx512vl_cmpv2df3 */
    case 1712:  /* *avx512vl_cmpv4df3 */
    case 1711:  /* *avx512f_cmpv8df3 */
    case 1710:  /* *avx512vl_cmpv4sf3 */
    case 1709:  /* *avx512vl_cmpv8sf3 */
    case 1708:  /* *avx512f_cmpv16sf3 */
    case 1707:  /* *avx512vl_cmpv2di3 */
    case 1706:  /* *avx512vl_cmpv4di3 */
    case 1705:  /* *avx512f_cmpv8di3 */
    case 1704:  /* *avx512vl_cmpv4si3 */
    case 1703:  /* *avx512vl_cmpv8si3 */
    case 1702:  /* *avx512f_cmpv16si3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      break;

    case 1697:  /* avx512f_cmpv8df3_mask_round */
    case 1689:  /* avx512f_cmpv16sf3_mask_round */
    case 1681:  /* avx512f_cmpv8di3_mask_round */
    case 1673:  /* avx512f_cmpv16si3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1761:  /* avx512vl_ucmpv2di3_mask */
    case 1759:  /* avx512vl_ucmpv4di3_mask */
    case 1757:  /* avx512f_ucmpv8di3_mask */
    case 1755:  /* avx512vl_ucmpv4si3_mask */
    case 1753:  /* avx512vl_ucmpv8si3_mask */
    case 1751:  /* avx512f_ucmpv16si3_mask */
    case 1749:  /* avx512vl_ucmpv8hi3_mask */
    case 1747:  /* avx512vl_ucmpv16hi3_mask */
    case 1745:  /* avx512bw_ucmpv32hi3_mask */
    case 1743:  /* avx512vl_ucmpv32qi3_mask */
    case 1741:  /* avx512vl_ucmpv16qi3_mask */
    case 1739:  /* avx512bw_ucmpv64qi3_mask */
    case 1725:  /* avx512vl_cmpv8hi3_mask */
    case 1723:  /* avx512vl_cmpv16hi3_mask */
    case 1721:  /* avx512bw_cmpv32hi3_mask */
    case 1719:  /* avx512vl_cmpv32qi3_mask */
    case 1717:  /* avx512vl_cmpv16qi3_mask */
    case 1715:  /* avx512bw_cmpv64qi3_mask */
    case 1701:  /* avx512vl_cmpv2df3_mask */
    case 1699:  /* avx512vl_cmpv4df3_mask */
    case 1696:  /* avx512f_cmpv8df3_mask */
    case 1693:  /* avx512vl_cmpv4sf3_mask */
    case 1691:  /* avx512vl_cmpv8sf3_mask */
    case 1688:  /* avx512f_cmpv16sf3_mask */
    case 1685:  /* avx512vl_cmpv2di3_mask */
    case 1683:  /* avx512vl_cmpv4di3_mask */
    case 1680:  /* avx512f_cmpv8di3_mask */
    case 1677:  /* avx512vl_cmpv4si3_mask */
    case 1675:  /* avx512vl_cmpv8si3_mask */
    case 1672:  /* avx512f_cmpv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 5202:  /* avx512dq_rangepv8df_round */
    case 5194:  /* avx512dq_rangepv16sf_round */
    case 2058:  /* *fma_fmaddsub_v8df_round */
    case 2049:  /* *fma_fmaddsub_v16sf_round */
    case 1695:  /* avx512f_cmpv8df3_round */
    case 1687:  /* avx512f_cmpv16sf3_round */
    case 1679:  /* avx512f_cmpv8di3_round */
    case 1671:  /* avx512f_cmpv16si3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1669:  /* sse2_vmmaskcmpv2df3 */
    case 1668:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3511:  /* *avx2_pcmpv4di3_2 */
    case 3510:  /* *avx2_pcmpv8si3_2 */
    case 3509:  /* *avx2_pcmpv16hi3_2 */
    case 3508:  /* *avx2_pcmpv32qi3_2 */
    case 3507:  /* *avx2_pcmpv2di3_2 */
    case 3506:  /* *avx2_pcmpv4si3_2 */
    case 3505:  /* *avx2_pcmpv8hi3_2 */
    case 3504:  /* *avx2_pcmpv16qi3_2 */
    case 1657:  /* *avx_cmpv2df3_4 */
    case 1656:  /* *avx_cmpv4df3_4 */
    case 1655:  /* *avx_cmpv4sf3_4 */
    case 1654:  /* *avx_cmpv8sf3_4 */
    case 1649:  /* *avx_cmpv2df3_2 */
    case 1648:  /* *avx_cmpv4df3_2 */
    case 1647:  /* *avx_cmpv4sf3_2 */
    case 1646:  /* *avx_cmpv8sf3_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0, 2));
      break;

    case 3503:  /* *avx2_pcmpv4di3_1 */
    case 3502:  /* *avx2_pcmpv8si3_1 */
    case 3501:  /* *avx2_pcmpv16hi3_1 */
    case 3500:  /* *avx2_pcmpv32qi3_1 */
    case 3499:  /* *avx2_pcmpv2di3_1 */
    case 3498:  /* *avx2_pcmpv4si3_1 */
    case 3497:  /* *avx2_pcmpv8hi3_1 */
    case 3496:  /* *avx2_pcmpv16qi3_1 */
    case 1653:  /* *avx_cmpv2df3_3 */
    case 1652:  /* *avx_cmpv4df3_3 */
    case 1651:  /* *avx_cmpv4sf3_3 */
    case 1650:  /* *avx_cmpv8sf3_3 */
    case 1645:  /* *avx_cmpv2df3_1 */
    case 1644:  /* *avx_cmpv4df3_1 */
    case 1643:  /* *avx_cmpv4sf3_1 */
    case 1642:  /* *avx_cmpv8sf3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 2));
      break;

    case 5264:  /* avx512f_vgetmantv2df_mask_round */
    case 5260:  /* avx512f_vgetmantv4sf_mask_round */
    case 5216:  /* avx512dq_rangesv2df_mask_round */
    case 5212:  /* avx512dq_rangesv4sf_mask_round */
    case 1637:  /* reducesv2df_mask_round */
    case 1633:  /* reducesv4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5263:  /* avx512f_vgetmantv2df_round */
    case 5259:  /* avx512f_vgetmantv4sf_round */
    case 5215:  /* avx512dq_rangesv2df_round */
    case 5211:  /* avx512dq_rangesv4sf_round */
    case 1636:  /* reducesv2df_round */
    case 1632:  /* reducesv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5262:  /* avx512f_vgetmantv2df_mask */
    case 5258:  /* avx512f_vgetmantv4sf_mask */
    case 5214:  /* avx512dq_rangesv2df_mask */
    case 5210:  /* avx512dq_rangesv4sf_mask */
    case 1635:  /* reducesv2df_mask */
    case 1631:  /* reducesv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5261:  /* avx512f_vgetmantv2df */
    case 5257:  /* avx512f_vgetmantv4sf */
    case 5213:  /* avx512dq_rangesv2df */
    case 5209:  /* avx512dq_rangesv4sf */
    case 1659:  /* avx_vmcmpv2df3 */
    case 1658:  /* avx_vmcmpv4sf3 */
    case 1634:  /* reducesv2df */
    case 1630:  /* reducesv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1605:  /* sse3_hsubv4sf3 */
    case 1604:  /* sse3_haddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1603:  /* avx_hsubv8sf3 */
    case 1602:  /* avx_haddv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 1601:  /* *sse3_hsubv2df3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1600:  /* *sse3_haddv2df3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1597:  /* avx_hsubv4df3 */
    case 1596:  /* avx_haddv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1595:  /* sse3_addsubv4sf3 */
    case 1594:  /* avx_addsubv8sf3 */
    case 1593:  /* sse3_addsubv2df3 */
    case 1592:  /* avx_addsubv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 1575:  /* *ieee_minv2df3 */
    case 1574:  /* *ieee_maxv2df3 */
    case 1573:  /* *ieee_minv4sf3 */
    case 1572:  /* *ieee_maxv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5256:  /* avx512vl_getmantv2df_mask_round */
    case 5252:  /* avx512vl_getmantv4df_mask_round */
    case 5248:  /* avx512f_getmantv8df_mask_round */
    case 5244:  /* avx512vl_getmantv4sf_mask_round */
    case 5240:  /* avx512vl_getmantv8sf_mask_round */
    case 5236:  /* avx512f_getmantv16sf_mask_round */
    case 2786:  /* avx512vl_rndscalev2df_mask_round */
    case 2782:  /* avx512vl_rndscalev4df_mask_round */
    case 2778:  /* avx512f_rndscalev8df_mask_round */
    case 2774:  /* avx512vl_rndscalev4sf_mask_round */
    case 2770:  /* avx512vl_rndscalev8sf_mask_round */
    case 2766:  /* avx512f_rndscalev16sf_mask_round */
    case 2652:  /* avx512vl_scalefv2df_mask_round */
    case 2648:  /* avx512vl_scalefv4df_mask_round */
    case 2644:  /* avx512f_scalefv8df_mask_round */
    case 2640:  /* avx512vl_scalefv4sf_mask_round */
    case 2636:  /* avx512vl_scalefv8sf_mask_round */
    case 2632:  /* avx512f_scalefv16sf_mask_round */
    case 1629:  /* reducepv2df_mask_round */
    case 1625:  /* reducepv4df_mask_round */
    case 1621:  /* reducepv8df_mask_round */
    case 1617:  /* reducepv4sf_mask_round */
    case 1613:  /* reducepv8sf_mask_round */
    case 1609:  /* reducepv16sf_mask_round */
    case 1563:  /* ieee_minv8df3_mask_round */
    case 1559:  /* ieee_maxv8df3_mask_round */
    case 1547:  /* ieee_minv16sf3_mask_round */
    case 1543:  /* ieee_maxv16sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5554:  /* avx512f_cvtne2ps2bf16_v8hi_mask */
    case 5552:  /* avx512f_cvtne2ps2bf16_v16hi_mask */
    case 5550:  /* avx512f_cvtne2ps2bf16_v32hi_mask */
    case 5393:  /* vgf2p8mulb_v16qi_mask */
    case 5391:  /* vgf2p8mulb_v32qi_mask */
    case 5389:  /* vgf2p8mulb_v64qi_mask */
    case 5350:  /* avx5124vnniw_vp4dpwssds_mask */
    case 5347:  /* avx5124vnniw_vp4dpwssd_mask */
    case 5344:  /* avx5124fmaddps_4fnmaddss_mask */
    case 5341:  /* avx5124fmaddps_4fnmaddps_mask */
    case 5338:  /* avx5124fmaddps_4fmaddss_mask */
    case 5335:  /* avx5124fmaddps_4fmaddps_mask */
    case 5331:  /* vpmultishiftqbv32qi_mask */
    case 5329:  /* vpmultishiftqbv16qi_mask */
    case 5327:  /* vpmultishiftqbv64qi_mask */
    case 5255:  /* avx512vl_getmantv2df_mask */
    case 5251:  /* avx512vl_getmantv4df_mask */
    case 5247:  /* avx512f_getmantv8df_mask */
    case 5243:  /* avx512vl_getmantv4sf_mask */
    case 5239:  /* avx512vl_getmantv8sf_mask */
    case 5235:  /* avx512f_getmantv16sf_mask */
    case 4920:  /* avx512f_vcvtps2ph512_mask */
    case 4916:  /* vcvtps2ph256_mask */
    case 4712:  /* avx_vpermilvarv2df3_mask */
    case 4710:  /* avx_vpermilvarv4df3_mask */
    case 4708:  /* avx512f_vpermilvarv8df3_mask */
    case 4706:  /* avx_vpermilvarv4sf3_mask */
    case 4704:  /* avx_vpermilvarv8sf3_mask */
    case 4702:  /* avx512f_vpermilvarv16sf3_mask */
    case 4536:  /* avx512bw_permvarv32hi_mask */
    case 4534:  /* avx512vl_permvarv16hi_mask */
    case 4532:  /* avx512vl_permvarv8hi_mask */
    case 4530:  /* avx512vl_permvarv32qi_mask */
    case 4528:  /* avx512vl_permvarv16qi_mask */
    case 4526:  /* avx512bw_permvarv64qi_mask */
    case 4524:  /* avx2_permvarv4df_mask */
    case 4522:  /* avx2_permvarv4di_mask */
    case 4520:  /* avx512f_permvarv8df_mask */
    case 4518:  /* avx512f_permvarv8di_mask */
    case 4516:  /* avx512f_permvarv16sf_mask */
    case 4514:  /* avx512f_permvarv16si_mask */
    case 4512:  /* avx2_permvarv8sf_mask */
    case 4510:  /* avx2_permvarv8si_mask */
    case 4055:  /* ssse3_pshufbv16qi3_mask */
    case 4053:  /* avx2_pshufbv32qi3_mask */
    case 4051:  /* avx512bw_pshufbv64qi3_mask */
    case 4038:  /* avx512bw_pmaddubsw512v32hi_mask */
    case 4036:  /* avx512bw_pmaddubsw512v16hi_mask */
    case 4034:  /* avx512bw_pmaddubsw512v8hi_mask */
    case 3945:  /* avx512bw_pshufhwv32hi_mask */
    case 3939:  /* avx512bw_pshuflwv32hi_mask */
    case 3221:  /* avx512bw_pmaddwd512v8hi_mask */
    case 3219:  /* avx512bw_pmaddwd512v16hi_mask */
    case 3217:  /* avx512bw_pmaddwd512v32hi_mask */
    case 2785:  /* avx512vl_rndscalev2df_mask */
    case 2781:  /* avx512vl_rndscalev4df_mask */
    case 2777:  /* avx512f_rndscalev8df_mask */
    case 2773:  /* avx512vl_rndscalev4sf_mask */
    case 2769:  /* avx512vl_rndscalev8sf_mask */
    case 2765:  /* avx512f_rndscalev16sf_mask */
    case 2651:  /* avx512vl_scalefv2df_mask */
    case 2647:  /* avx512vl_scalefv4df_mask */
    case 2643:  /* avx512f_scalefv8df_mask */
    case 2639:  /* avx512vl_scalefv4sf_mask */
    case 2635:  /* avx512vl_scalefv8sf_mask */
    case 2631:  /* avx512f_scalefv16sf_mask */
    case 1628:  /* reducepv2df_mask */
    case 1624:  /* reducepv4df_mask */
    case 1620:  /* reducepv8df_mask */
    case 1616:  /* reducepv4sf_mask */
    case 1612:  /* reducepv8sf_mask */
    case 1608:  /* reducepv16sf_mask */
    case 1571:  /* ieee_minv2df3_mask */
    case 1569:  /* ieee_maxv2df3_mask */
    case 1567:  /* ieee_minv4df3_mask */
    case 1565:  /* ieee_maxv4df3_mask */
    case 1562:  /* ieee_minv8df3_mask */
    case 1558:  /* ieee_maxv8df3_mask */
    case 1555:  /* ieee_minv4sf3_mask */
    case 1553:  /* ieee_maxv4sf3_mask */
    case 1551:  /* ieee_minv8sf3_mask */
    case 1549:  /* ieee_maxv8sf3_mask */
    case 1546:  /* ieee_minv16sf3_mask */
    case 1542:  /* ieee_maxv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 5254:  /* avx512vl_getmantv2df_round */
    case 5250:  /* avx512vl_getmantv4df_round */
    case 5246:  /* avx512f_getmantv8df_round */
    case 5242:  /* avx512vl_getmantv4sf_round */
    case 5238:  /* avx512vl_getmantv8sf_round */
    case 5234:  /* avx512f_getmantv16sf_round */
    case 2784:  /* avx512vl_rndscalev2df_round */
    case 2780:  /* avx512vl_rndscalev4df_round */
    case 2776:  /* avx512f_rndscalev8df_round */
    case 2772:  /* avx512vl_rndscalev4sf_round */
    case 2768:  /* avx512vl_rndscalev8sf_round */
    case 2764:  /* avx512f_rndscalev16sf_round */
    case 2650:  /* avx512vl_scalefv2df_round */
    case 2646:  /* avx512vl_scalefv4df_round */
    case 2642:  /* avx512f_scalefv8df_round */
    case 2638:  /* avx512vl_scalefv4sf_round */
    case 2634:  /* avx512vl_scalefv8sf_round */
    case 2630:  /* avx512f_scalefv16sf_round */
    case 1627:  /* *reducepv2df_round */
    case 1623:  /* *reducepv4df_round */
    case 1619:  /* *reducepv8df_round */
    case 1615:  /* *reducepv4sf_round */
    case 1611:  /* *reducepv8sf_round */
    case 1607:  /* *reducepv16sf_round */
    case 1561:  /* ieee_minv8df3_round */
    case 1557:  /* ieee_maxv8df3_round */
    case 1545:  /* ieee_minv16sf3_round */
    case 1541:  /* ieee_maxv16sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1487:  /* *sse2_vmsqrtv2df2_mask_round */
    case 1483:  /* *sse_vmsqrtv4sf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1486:  /* *sse2_vmsqrtv2df2_mask */
    case 1482:  /* *sse_vmsqrtv4sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 1485:  /* *sse2_vmsqrtv2df2_round */
    case 1481:  /* *sse_vmsqrtv4sf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1479:  /* sse2_vmsqrtv2df2_mask_round */
    case 1475:  /* sse_vmsqrtv4sf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1478:  /* sse2_vmsqrtv2df2_mask */
    case 1474:  /* sse_vmsqrtv4sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 1477:  /* sse2_vmsqrtv2df2_round */
    case 1473:  /* sse_vmsqrtv4sf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2473:  /* avx512f_cvtps2pd512_mask_round */
    case 2464:  /* avx512f_cvtpd2ps512_mask_round */
    case 2435:  /* fixuns_truncv8sfv8di2_mask_round */
    case 2431:  /* fix_truncv8sfv8di2_mask_round */
    case 2403:  /* fixuns_truncv8dfv8di2_mask_round */
    case 2399:  /* fix_truncv8dfv8di2_mask_round */
    case 2388:  /* fixuns_truncv8dfv8si2_mask_round */
    case 2384:  /* fix_truncv8dfv8si2_mask_round */
    case 2339:  /* floatunsv8div8sf2_mask_round */
    case 2335:  /* floatv8div8sf2_mask_round */
    case 2331:  /* floatunsv2div2df2_mask_round */
    case 2327:  /* floatv2div2df2_mask_round */
    case 2323:  /* floatunsv4div4df2_mask_round */
    case 2319:  /* floatv4div4df2_mask_round */
    case 2315:  /* floatunsv8div8df2_mask_round */
    case 2311:  /* floatv8div8df2_mask_round */
    case 2282:  /* ufix_truncv16sfv16si2_mask_round */
    case 2278:  /* fix_truncv16sfv16si2_mask_round */
    case 2238:  /* ufloatv4siv4sf2_mask_round */
    case 2234:  /* ufloatv8siv8sf2_mask_round */
    case 2230:  /* ufloatv16siv16sf2_mask_round */
    case 2222:  /* floatv16siv16sf2_mask_round */
    case 1962:  /* *fma_fnmadd_v8df_round */
    case 1953:  /* *fma_fnmadd_v16sf_round */
    case 1467:  /* avx512f_sqrtv8df2_mask_round */
    case 1459:  /* avx512f_sqrtv16sf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5375:  /* vpopcountv8hi_mask */
    case 5373:  /* vpopcountv16hi_mask */
    case 5371:  /* vpopcountv32hi_mask */
    case 5369:  /* vpopcountv32qi_mask */
    case 5367:  /* vpopcountv16qi_mask */
    case 5365:  /* vpopcountv64qi_mask */
    case 5363:  /* vpopcountv2di_mask */
    case 5361:  /* vpopcountv4di_mask */
    case 5359:  /* vpopcountv8di_mask */
    case 5357:  /* vpopcountv4si_mask */
    case 5355:  /* vpopcountv8si_mask */
    case 5353:  /* vpopcountv16si_mask */
    case 5282:  /* clzv2di2_mask */
    case 5280:  /* clzv4di2_mask */
    case 5278:  /* clzv8di2_mask */
    case 5276:  /* clzv4si2_mask */
    case 5274:  /* clzv8si2_mask */
    case 5272:  /* clzv16si2_mask */
    case 4694:  /* avx512dq_broadcastv4df_mask_1 */
    case 4692:  /* avx512dq_broadcastv4di_mask_1 */
    case 4690:  /* avx512dq_broadcastv8df_mask_1 */
    case 4688:  /* avx512dq_broadcastv8di_mask_1 */
    case 4686:  /* avx512dq_broadcastv16si_mask_1 */
    case 4684:  /* avx512dq_broadcastv16sf_mask_1 */
    case 4682:  /* avx512vl_broadcastv8sf_mask_1 */
    case 4680:  /* avx512vl_broadcastv8si_mask_1 */
    case 4645:  /* avx512vl_vec_dup_gprv2df_mask */
    case 4643:  /* avx512vl_vec_dup_gprv4df_mask */
    case 4641:  /* avx512f_vec_dup_gprv8df_mask */
    case 4639:  /* avx512vl_vec_dup_gprv4sf_mask */
    case 4637:  /* avx512vl_vec_dup_gprv8sf_mask */
    case 4635:  /* avx512f_vec_dup_gprv16sf_mask */
    case 4633:  /* avx512vl_vec_dup_gprv2di_mask */
    case 4631:  /* avx512vl_vec_dup_gprv4di_mask */
    case 4629:  /* avx512f_vec_dup_gprv8di_mask */
    case 4627:  /* avx512vl_vec_dup_gprv4si_mask */
    case 4625:  /* avx512vl_vec_dup_gprv8si_mask */
    case 4623:  /* avx512f_vec_dup_gprv16si_mask */
    case 4621:  /* avx512vl_vec_dup_gprv8hi_mask */
    case 4619:  /* avx512vl_vec_dup_gprv16hi_mask */
    case 4617:  /* avx512bw_vec_dup_gprv32hi_mask */
    case 4615:  /* avx512vl_vec_dup_gprv32qi_mask */
    case 4613:  /* avx512vl_vec_dup_gprv16qi_mask */
    case 4611:  /* avx512bw_vec_dup_gprv64qi_mask */
    case 4609:  /* avx512f_broadcastv8di_mask */
    case 4607:  /* avx512f_broadcastv8df_mask */
    case 4605:  /* avx512f_broadcastv16si_mask */
    case 4603:  /* avx512f_broadcastv16sf_mask */
    case 4297:  /* *sse4_1_zero_extendv2siv2di2_mask_1 */
    case 4295:  /* *sse4_1_sign_extendv2siv2di2_mask_1 */
    case 4288:  /* avx2_zero_extendv4siv4di2_mask */
    case 4286:  /* avx2_sign_extendv4siv4di2_mask */
    case 4283:  /* avx512f_zero_extendv8siv8di2_mask */
    case 4281:  /* avx512f_sign_extendv8siv8di2_mask */
    case 4275:  /* *sse4_1_zero_extendv2hiv2di2_mask_1 */
    case 4273:  /* *sse4_1_sign_extendv2hiv2di2_mask_1 */
    case 4263:  /* *avx2_zero_extendv4hiv4di2_mask_1 */
    case 4261:  /* *avx2_sign_extendv4hiv4di2_mask_1 */
    case 4255:  /* avx512f_zero_extendv8hiv8di2_mask */
    case 4253:  /* avx512f_sign_extendv8hiv8di2_mask */
    case 4243:  /* *avx2_zero_extendv4qiv4di2_mask_1 */
    case 4241:  /* *avx2_sign_extendv4qiv4di2_mask_1 */
    case 4231:  /* *avx512f_zero_extendv8qiv8di2_mask_1 */
    case 4229:  /* *avx512f_sign_extendv8qiv8di2_mask_1 */
    case 4218:  /* *sse4_1_zero_extendv4hiv4si2_mask_1 */
    case 4216:  /* *sse4_1_sign_extendv4hiv4si2_mask_1 */
    case 4209:  /* avx2_zero_extendv8hiv8si2_mask */
    case 4207:  /* avx2_sign_extendv8hiv8si2_mask */
    case 4204:  /* avx512f_zero_extendv16hiv16si2_mask */
    case 4202:  /* avx512f_sign_extendv16hiv16si2_mask */
    case 4196:  /* *sse4_1_zero_extendv4qiv4si2_mask_1 */
    case 4194:  /* *sse4_1_sign_extendv4qiv4si2_mask_1 */
    case 4184:  /* *avx2_zero_extendv8qiv8si2_mask_1 */
    case 4182:  /* *avx2_sign_extendv8qiv8si2_mask_1 */
    case 4176:  /* avx512f_zero_extendv16qiv16si2_mask */
    case 4174:  /* avx512f_sign_extendv16qiv16si2_mask */
    case 4167:  /* *sse4_1_zero_extendv8qiv8hi2_mask_1 */
    case 4165:  /* *sse4_1_sign_extendv8qiv8hi2_mask_1 */
    case 4158:  /* avx512bw_zero_extendv32qiv32hi2_mask */
    case 4156:  /* avx512bw_sign_extendv32qiv32hi2_mask */
    case 4153:  /* avx2_zero_extendv16qiv16hi2_mask */
    case 4151:  /* avx2_sign_extendv16qiv16hi2_mask */
    case 4096:  /* absv8hi2_mask */
    case 4095:  /* absv16hi2_mask */
    case 4094:  /* absv32hi2_mask */
    case 4093:  /* absv32qi2_mask */
    case 4092:  /* absv16qi2_mask */
    case 4091:  /* absv64qi2_mask */
    case 4090:  /* absv2di2_mask */
    case 4089:  /* absv4di2_mask */
    case 4088:  /* absv8di2_mask */
    case 4087:  /* absv4si2_mask */
    case 4086:  /* absv8si2_mask */
    case 4085:  /* absv16si2_mask */
    case 2879:  /* avx512vl_us_truncatev16hiv16qi2_mask */
    case 2878:  /* avx512vl_truncatev16hiv16qi2_mask */
    case 2877:  /* avx512vl_ss_truncatev16hiv16qi2_mask */
    case 2876:  /* avx512vl_us_truncatev8siv8hi2_mask */
    case 2875:  /* avx512vl_truncatev8siv8hi2_mask */
    case 2874:  /* avx512vl_ss_truncatev8siv8hi2_mask */
    case 2873:  /* avx512vl_us_truncatev4div4si2_mask */
    case 2872:  /* avx512vl_truncatev4div4si2_mask */
    case 2871:  /* avx512vl_ss_truncatev4div4si2_mask */
    case 2861:  /* avx512bw_us_truncatev32hiv32qi2_mask */
    case 2860:  /* avx512bw_truncatev32hiv32qi2_mask */
    case 2859:  /* avx512bw_ss_truncatev32hiv32qi2_mask */
    case 2855:  /* avx512f_us_truncatev8div8hi2_mask */
    case 2854:  /* avx512f_truncatev8div8hi2_mask */
    case 2853:  /* avx512f_ss_truncatev8div8hi2_mask */
    case 2852:  /* avx512f_us_truncatev8div8si2_mask */
    case 2851:  /* avx512f_truncatev8div8si2_mask */
    case 2850:  /* avx512f_ss_truncatev8div8si2_mask */
    case 2849:  /* avx512f_us_truncatev16siv16hi2_mask */
    case 2848:  /* avx512f_truncatev16siv16hi2_mask */
    case 2847:  /* avx512f_ss_truncatev16siv16hi2_mask */
    case 2846:  /* avx512f_us_truncatev16siv16qi2_mask */
    case 2845:  /* avx512f_truncatev16siv16qi2_mask */
    case 2844:  /* avx512f_ss_truncatev16siv16qi2_mask */
    case 2828:  /* vec_dupv2df_mask */
    case 2598:  /* vec_extract_hi_v8sf_mask */
    case 2597:  /* vec_extract_hi_v8si_mask */
    case 2594:  /* vec_extract_lo_v8sf_mask */
    case 2593:  /* vec_extract_lo_v8si_mask */
    case 2590:  /* vec_extract_hi_v4df_mask */
    case 2589:  /* vec_extract_hi_v4di_mask */
    case 2586:  /* vec_extract_lo_v4df_mask */
    case 2585:  /* vec_extract_lo_v4di_mask */
    case 2582:  /* vec_extract_lo_v16si_mask */
    case 2581:  /* vec_extract_lo_v16sf_mask */
    case 2578:  /* vec_extract_hi_v16si_mask */
    case 2577:  /* vec_extract_hi_v16sf_mask */
    case 2574:  /* vec_extract_hi_v8di_mask */
    case 2573:  /* vec_extract_hi_v8df_mask */
    case 2570:  /* vec_extract_lo_v8di_mask */
    case 2569:  /* vec_extract_lo_v8df_mask */
    case 2475:  /* avx_cvtps2pd256_mask */
    case 2472:  /* avx512f_cvtps2pd512_mask */
    case 2466:  /* avx_cvtpd2ps256_mask */
    case 2463:  /* avx512f_cvtpd2ps512_mask */
    case 2447:  /* ufix_truncv4sfv4si2_mask */
    case 2445:  /* ufix_truncv8sfv8si2_mask */
    case 2439:  /* fixuns_truncv4sfv4di2_mask */
    case 2437:  /* fix_truncv4sfv4di2_mask */
    case 2434:  /* fixuns_truncv8sfv8di2_mask */
    case 2430:  /* fix_truncv8sfv8di2_mask */
    case 2411:  /* fixuns_truncv2dfv2di2_mask */
    case 2409:  /* fix_truncv2dfv2di2_mask */
    case 2407:  /* fixuns_truncv4dfv4di2_mask */
    case 2405:  /* fix_truncv4dfv4di2_mask */
    case 2402:  /* fixuns_truncv8dfv8di2_mask */
    case 2398:  /* fix_truncv8dfv8di2_mask */
    case 2395:  /* ufix_truncv4dfv4si2_mask */
    case 2393:  /* fix_truncv4dfv4si2_mask */
    case 2387:  /* fixuns_truncv8dfv8si2_mask */
    case 2383:  /* fix_truncv8dfv8si2_mask */
    case 2353:  /* ufloatv4siv4df2_mask */
    case 2351:  /* ufloatv8siv8df2_mask */
    case 2343:  /* floatunsv4div4sf2_mask */
    case 2341:  /* floatv4div4sf2_mask */
    case 2338:  /* floatunsv8div8sf2_mask */
    case 2334:  /* floatv8div8sf2_mask */
    case 2330:  /* floatunsv2div2df2_mask */
    case 2326:  /* floatv2div2df2_mask */
    case 2322:  /* floatunsv4div4df2_mask */
    case 2318:  /* floatv4div4df2_mask */
    case 2314:  /* floatunsv8div8df2_mask */
    case 2310:  /* floatv8div8df2_mask */
    case 2307:  /* floatv4siv4df2_mask */
    case 2305:  /* floatv8siv8df2_mask */
    case 2286:  /* fix_truncv4sfv4si2_mask */
    case 2284:  /* fix_truncv8sfv8si2_mask */
    case 2281:  /* ufix_truncv16sfv16si2_mask */
    case 2277:  /* fix_truncv16sfv16si2_mask */
    case 2237:  /* ufloatv4siv4sf2_mask */
    case 2233:  /* ufloatv8siv8sf2_mask */
    case 2229:  /* ufloatv16siv16sf2_mask */
    case 2226:  /* floatv4siv4sf2_mask */
    case 2224:  /* floatv8siv8sf2_mask */
    case 2221:  /* floatv16siv16sf2_mask */
    case 1966:  /* *fma_fnmadd_v2df */
    case 1964:  /* *fma_fnmadd_v4df */
    case 1960:  /* *fma_fnmadd_v8df */
    case 1959:  /* *fma_fnmadd_df */
    case 1957:  /* *fma_fnmadd_v4sf */
    case 1955:  /* *fma_fnmadd_v8sf */
    case 1951:  /* *fma_fnmadd_v16sf */
    case 1950:  /* *fma_fnmadd_sf */
    case 1949:  /* *fma_fnmadd_v4df */
    case 1948:  /* *fma_fnmadd_v8sf */
    case 1947:  /* *fma_fnmadd_v2df */
    case 1946:  /* *fma_fnmadd_v4sf */
    case 1945:  /* *fma_fnmadd_df */
    case 1944:  /* *fma_fnmadd_sf */
    case 1471:  /* sse2_sqrtv2df2_mask */
    case 1469:  /* avx_sqrtv4df2_mask */
    case 1466:  /* avx512f_sqrtv8df2_mask */
    case 1463:  /* sse_sqrtv4sf2_mask */
    case 1461:  /* avx_sqrtv8sf2_mask */
    case 1458:  /* avx512f_sqrtv16sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2471:  /* avx512f_cvtps2pd512_round */
    case 2462:  /* *avx512f_cvtpd2ps512_round */
    case 2433:  /* fixuns_truncv8sfv8di2_round */
    case 2429:  /* fix_truncv8sfv8di2_round */
    case 2401:  /* fixuns_truncv8dfv8di2_round */
    case 2397:  /* fix_truncv8dfv8di2_round */
    case 2386:  /* fixuns_truncv8dfv8si2_round */
    case 2382:  /* fix_truncv8dfv8si2_round */
    case 2337:  /* floatunsv8div8sf2_round */
    case 2333:  /* floatv8div8sf2_round */
    case 2329:  /* floatunsv2div2df2_round */
    case 2325:  /* floatv2div2df2_round */
    case 2321:  /* floatunsv4div4df2_round */
    case 2317:  /* floatv4div4df2_round */
    case 2313:  /* floatunsv8div8df2_round */
    case 2309:  /* floatv8div8df2_round */
    case 2280:  /* ufix_truncv16sfv16si2_round */
    case 2276:  /* fix_truncv16sfv16si2_round */
    case 2236:  /* ufloatv4siv4sf2_round */
    case 2232:  /* ufloatv8siv8sf2_round */
    case 2228:  /* ufloatv16siv16sf2_round */
    case 2220:  /* floatv16siv16sf2_round */
    case 1465:  /* avx512f_sqrtv8df2_round */
    case 1457:  /* avx512f_sqrtv16sf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1505:  /* rsqrt14_v2df_mask */
    case 1504:  /* rsqrt14_v4sf_mask */
    case 1455:  /* srcp14v2df_mask */
    case 1454:  /* srcp14v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 1507:  /* *sse_vmrsqrtv4sf2 */
    case 1439:  /* *sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4462:  /* *xop_vmfrczv2df2 */
    case 4461:  /* *xop_vmfrczv4sf2 */
    case 4388:  /* avx512er_vmrsqrt28v2df */
    case 4384:  /* avx512er_vmrsqrt28v4sf */
    case 4372:  /* avx512er_vmrcp28v2df */
    case 4368:  /* avx512er_vmrcp28v4sf */
    case 2366:  /* *avx_cvtpd2dq256_2 */
    case 1506:  /* sse_vmrsqrtv4sf2 */
    case 1503:  /* rsqrt14v2df */
    case 1502:  /* rsqrt14v4sf */
    case 1453:  /* srcp14v2df */
    case 1452:  /* srcp14v4sf */
    case 1438:  /* sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1591:  /* sse2_vmsminv2df3_mask_round */
    case 1587:  /* sse2_vmsmaxv2df3_mask_round */
    case 1583:  /* sse_vmsminv4sf3_mask_round */
    case 1579:  /* sse_vmsmaxv4sf3_mask_round */
    case 1419:  /* sse2_vmdivv2df3_mask_round */
    case 1415:  /* sse2_vmmulv2df3_mask_round */
    case 1411:  /* sse_vmdivv4sf3_mask_round */
    case 1407:  /* sse_vmmulv4sf3_mask_round */
    case 1375:  /* sse2_vmsubv2df3_mask_round */
    case 1371:  /* sse2_vmaddv2df3_mask_round */
    case 1367:  /* sse_vmsubv4sf3_mask_round */
    case 1363:  /* sse_vmaddv4sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1589:  /* sse2_vmsminv2df3_mask */
    case 1585:  /* sse2_vmsmaxv2df3_mask */
    case 1581:  /* sse_vmsminv4sf3_mask */
    case 1577:  /* sse_vmsmaxv4sf3_mask */
    case 1418:  /* sse2_vmdivv2df3_mask */
    case 1414:  /* sse2_vmmulv2df3_mask */
    case 1410:  /* sse_vmdivv4sf3_mask */
    case 1406:  /* sse_vmmulv4sf3_mask */
    case 1374:  /* sse2_vmsubv2df3_mask */
    case 1370:  /* sse2_vmaddv2df3_mask */
    case 1366:  /* sse_vmsubv4sf3_mask */
    case 1362:  /* sse_vmaddv4sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1590:  /* sse2_vmsminv2df3_round */
    case 1586:  /* sse2_vmsmaxv2df3_round */
    case 1582:  /* sse_vmsminv4sf3_round */
    case 1578:  /* sse_vmsmaxv4sf3_round */
    case 1417:  /* sse2_vmdivv2df3_round */
    case 1413:  /* sse2_vmmulv2df3_round */
    case 1409:  /* sse_vmdivv4sf3_round */
    case 1405:  /* sse_vmmulv4sf3_round */
    case 1373:  /* sse2_vmsubv2df3_round */
    case 1369:  /* sse2_vmaddv2df3_round */
    case 1365:  /* sse_vmsubv4sf3_round */
    case 1361:  /* sse_vmaddv4sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1588:  /* sse2_vmsminv2df3 */
    case 1584:  /* sse2_vmsmaxv2df3 */
    case 1580:  /* sse_vmsminv4sf3 */
    case 1576:  /* sse_vmsmaxv4sf3 */
    case 1416:  /* sse2_vmdivv2df3 */
    case 1412:  /* sse2_vmmulv2df3 */
    case 1408:  /* sse_vmdivv4sf3 */
    case 1404:  /* sse_vmmulv4sf3 */
    case 1372:  /* sse2_vmsubv2df3 */
    case 1368:  /* sse2_vmaddv2df3 */
    case 1364:  /* sse_vmsubv4sf3 */
    case 1360:  /* sse_vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1403:  /* *sse2_vmdivv2df3 */
    case 1402:  /* *sse2_vmmulv2df3 */
    case 1401:  /* *sse_vmdivv4sf3 */
    case 1400:  /* *sse_vmmulv4sf3 */
    case 1359:  /* *sse2_vmsubv2df3 */
    case 1358:  /* *sse2_vmaddv2df3 */
    case 1357:  /* *sse_vmsubv4sf3 */
    case 1356:  /* *sse_vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1531:  /* *sminv8df3_mask_round */
    case 1527:  /* *smaxv8df3_mask_round */
    case 1515:  /* *sminv16sf3_mask_round */
    case 1511:  /* *smaxv16sf3_mask_round */
    case 1431:  /* avx512f_divv8df3_mask_round */
    case 1423:  /* avx512f_divv16sf3_mask_round */
    case 1399:  /* *mulv2df3_mask_round */
    case 1395:  /* *mulv4df3_mask_round */
    case 1391:  /* *mulv8df3_mask_round */
    case 1387:  /* *mulv4sf3_mask_round */
    case 1383:  /* *mulv8sf3_mask_round */
    case 1379:  /* *mulv16sf3_mask_round */
    case 1355:  /* *subv2df3_mask_round */
    case 1351:  /* *addv2df3_mask_round */
    case 1347:  /* *subv4df3_mask_round */
    case 1343:  /* *addv4df3_mask_round */
    case 1339:  /* *subv8df3_mask_round */
    case 1335:  /* *addv8df3_mask_round */
    case 1331:  /* *subv4sf3_mask_round */
    case 1327:  /* *addv4sf3_mask_round */
    case 1323:  /* *subv8sf3_mask_round */
    case 1319:  /* *addv8sf3_mask_round */
    case 1315:  /* *subv16sf3_mask_round */
    case 1311:  /* *addv16sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4889:  /* avx512bw_lshrvv32hi_mask */
    case 4887:  /* avx512bw_ashlvv32hi_mask */
    case 4885:  /* avx512vl_lshrvv16hi_mask */
    case 4883:  /* avx512vl_ashlvv16hi_mask */
    case 4881:  /* avx512vl_lshrvv8hi_mask */
    case 4879:  /* avx512vl_ashlvv8hi_mask */
    case 4877:  /* avx2_lshrvv2di_mask */
    case 4875:  /* avx2_ashlvv2di_mask */
    case 4873:  /* avx2_lshrvv4di_mask */
    case 4871:  /* avx2_ashlvv4di_mask */
    case 4869:  /* avx512f_lshrvv8di_mask */
    case 4867:  /* avx512f_ashlvv8di_mask */
    case 4865:  /* avx2_lshrvv4si_mask */
    case 4863:  /* avx2_ashlvv4si_mask */
    case 4861:  /* avx2_lshrvv8si_mask */
    case 4859:  /* avx2_ashlvv8si_mask */
    case 4857:  /* avx512f_lshrvv16si_mask */
    case 4855:  /* avx512f_ashlvv16si_mask */
    case 4853:  /* avx512bw_ashrvv32hi_mask */
    case 4851:  /* avx512vl_ashrvv16hi_mask */
    case 4849:  /* avx512vl_ashrvv8hi_mask */
    case 4847:  /* avx512f_ashrvv8di_mask */
    case 4845:  /* avx2_ashrvv4di_mask */
    case 4843:  /* avx2_ashrvv2di_mask */
    case 4841:  /* avx512f_ashrvv16si_mask */
    case 4839:  /* avx2_ashrvv8si_mask */
    case 4837:  /* avx2_ashrvv4si_mask */
    case 3619:  /* xorv2di3_mask */
    case 3617:  /* iorv2di3_mask */
    case 3615:  /* andv2di3_mask */
    case 3613:  /* xorv4di3_mask */
    case 3611:  /* iorv4di3_mask */
    case 3609:  /* andv4di3_mask */
    case 3607:  /* xorv8di3_mask */
    case 3605:  /* iorv8di3_mask */
    case 3603:  /* andv8di3_mask */
    case 3601:  /* xorv4si3_mask */
    case 3599:  /* iorv4si3_mask */
    case 3597:  /* andv4si3_mask */
    case 3595:  /* xorv8si3_mask */
    case 3593:  /* iorv8si3_mask */
    case 3591:  /* andv8si3_mask */
    case 3589:  /* xorv16si3_mask */
    case 3587:  /* iorv16si3_mask */
    case 3585:  /* andv16si3_mask */
    case 3565:  /* one_cmplv2di2_mask */
    case 3563:  /* one_cmplv4di2_mask */
    case 3561:  /* one_cmplv4si2_mask */
    case 3559:  /* one_cmplv8si2_mask */
    case 3551:  /* one_cmplv8di2_mask */
    case 3549:  /* one_cmplv16si2_mask */
    case 3489:  /* *sse4_1_uminv4si3_mask */
    case 3487:  /* *sse4_1_umaxv4si3_mask */
    case 3485:  /* *sse4_1_uminv8hi3_mask */
    case 3483:  /* *sse4_1_umaxv8hi3_mask */
    case 3479:  /* *sse4_1_sminv4si3_mask */
    case 3477:  /* *sse4_1_smaxv4si3_mask */
    case 3475:  /* *sse4_1_sminv16qi3_mask */
    case 3473:  /* *sse4_1_smaxv16qi3_mask */
    case 3471:  /* uminv8hi3_mask */
    case 3469:  /* umaxv8hi3_mask */
    case 3467:  /* sminv8hi3_mask */
    case 3465:  /* smaxv8hi3_mask */
    case 3463:  /* uminv16hi3_mask */
    case 3461:  /* umaxv16hi3_mask */
    case 3459:  /* sminv16hi3_mask */
    case 3457:  /* smaxv16hi3_mask */
    case 3455:  /* uminv32hi3_mask */
    case 3453:  /* umaxv32hi3_mask */
    case 3451:  /* sminv32hi3_mask */
    case 3449:  /* smaxv32hi3_mask */
    case 3447:  /* uminv32qi3_mask */
    case 3445:  /* umaxv32qi3_mask */
    case 3443:  /* sminv32qi3_mask */
    case 3441:  /* smaxv32qi3_mask */
    case 3439:  /* uminv16qi3_mask */
    case 3437:  /* umaxv16qi3_mask */
    case 3435:  /* sminv16qi3_mask */
    case 3433:  /* smaxv16qi3_mask */
    case 3431:  /* uminv64qi3_mask */
    case 3429:  /* umaxv64qi3_mask */
    case 3427:  /* sminv64qi3_mask */
    case 3425:  /* smaxv64qi3_mask */
    case 3423:  /* *avx512f_uminv2di3_mask */
    case 3421:  /* *avx512f_umaxv2di3_mask */
    case 3419:  /* *avx512f_sminv2di3_mask */
    case 3417:  /* *avx512f_smaxv2di3_mask */
    case 3415:  /* *avx512f_uminv4di3_mask */
    case 3413:  /* *avx512f_umaxv4di3_mask */
    case 3411:  /* *avx512f_sminv4di3_mask */
    case 3409:  /* *avx512f_smaxv4di3_mask */
    case 3407:  /* *avx512f_uminv8di3_mask */
    case 3405:  /* *avx512f_umaxv8di3_mask */
    case 3403:  /* *avx512f_sminv8di3_mask */
    case 3401:  /* *avx512f_smaxv8di3_mask */
    case 3399:  /* *avx512f_uminv4si3_mask */
    case 3397:  /* *avx512f_umaxv4si3_mask */
    case 3395:  /* *avx512f_sminv4si3_mask */
    case 3393:  /* *avx512f_smaxv4si3_mask */
    case 3391:  /* *avx512f_uminv8si3_mask */
    case 3389:  /* *avx512f_umaxv8si3_mask */
    case 3387:  /* *avx512f_sminv8si3_mask */
    case 3385:  /* *avx512f_smaxv8si3_mask */
    case 3383:  /* *avx512f_uminv16si3_mask */
    case 3381:  /* *avx512f_umaxv16si3_mask */
    case 3379:  /* *avx512f_sminv16si3_mask */
    case 3377:  /* *avx512f_smaxv16si3_mask */
    case 3363:  /* avx512vl_rorv2di_mask */
    case 3361:  /* avx512vl_rolv2di_mask */
    case 3359:  /* avx512vl_rorv4di_mask */
    case 3357:  /* avx512vl_rolv4di_mask */
    case 3355:  /* avx512f_rorv8di_mask */
    case 3353:  /* avx512f_rolv8di_mask */
    case 3351:  /* avx512vl_rorv4si_mask */
    case 3349:  /* avx512vl_rolv4si_mask */
    case 3347:  /* avx512vl_rorv8si_mask */
    case 3345:  /* avx512vl_rolv8si_mask */
    case 3343:  /* avx512f_rorv16si_mask */
    case 3341:  /* avx512f_rolv16si_mask */
    case 3339:  /* avx512vl_rorvv2di_mask */
    case 3337:  /* avx512vl_rolvv2di_mask */
    case 3335:  /* avx512vl_rorvv4di_mask */
    case 3333:  /* avx512vl_rolvv4di_mask */
    case 3331:  /* avx512f_rorvv8di_mask */
    case 3329:  /* avx512f_rolvv8di_mask */
    case 3327:  /* avx512vl_rorvv4si_mask */
    case 3325:  /* avx512vl_rolvv4si_mask */
    case 3323:  /* avx512vl_rorvv8si_mask */
    case 3321:  /* avx512vl_rolvv8si_mask */
    case 3319:  /* avx512f_rorvv16si_mask */
    case 3317:  /* avx512f_rolvv16si_mask */
    case 3305:  /* lshrv8di3_mask */
    case 3303:  /* ashlv8di3_mask */
    case 3301:  /* lshrv16si3_mask */
    case 3299:  /* ashlv16si3_mask */
    case 3297:  /* lshrv32hi3_mask */
    case 3295:  /* ashlv32hi3_mask */
    case 3281:  /* lshrv2di3_mask */
    case 3279:  /* ashlv2di3_mask */
    case 3277:  /* lshrv4di3_mask */
    case 3275:  /* ashlv4di3_mask */
    case 3273:  /* lshrv4si3_mask */
    case 3271:  /* ashlv4si3_mask */
    case 3269:  /* lshrv8si3_mask */
    case 3267:  /* ashlv8si3_mask */
    case 3265:  /* lshrv8hi3_mask */
    case 3263:  /* ashlv8hi3_mask */
    case 3261:  /* lshrv16hi3_mask */
    case 3259:  /* ashlv16hi3_mask */
    case 3257:  /* ashrv8di3_mask */
    case 3255:  /* ashrv16si3_mask */
    case 3253:  /* ashrv4di3_mask */
    case 3251:  /* ashrv32hi3_mask */
    case 3245:  /* ashrv2di3_mask */
    case 3243:  /* ashrv4si3_mask */
    case 3241:  /* ashrv8si3_mask */
    case 3239:  /* ashrv8hi3_mask */
    case 3237:  /* ashrv16hi3_mask */
    case 3235:  /* *sse4_1_mulv4si3_mask */
    case 3233:  /* *avx2_mulv8si3_mask */
    case 3231:  /* *avx512f_mulv16si3_mask */
    case 3229:  /* avx512dq_mulv2di3_mask */
    case 3227:  /* avx512dq_mulv4di3_mask */
    case 3225:  /* avx512dq_mulv8di3_mask */
    case 3191:  /* *mulv8hi3_mask */
    case 3189:  /* *mulv16hi3_mask */
    case 3187:  /* *mulv32hi3_mask */
    case 3185:  /* *sse2_ussubv8hi3_mask */
    case 3183:  /* *sse2_sssubv8hi3_mask */
    case 3181:  /* *sse2_usaddv8hi3_mask */
    case 3179:  /* *sse2_ssaddv8hi3_mask */
    case 3177:  /* *avx2_ussubv16hi3_mask */
    case 3175:  /* *avx2_sssubv16hi3_mask */
    case 3173:  /* *avx2_usaddv16hi3_mask */
    case 3171:  /* *avx2_ssaddv16hi3_mask */
    case 3169:  /* *avx512bw_ussubv32hi3_mask */
    case 3167:  /* *avx512bw_sssubv32hi3_mask */
    case 3165:  /* *avx512bw_usaddv32hi3_mask */
    case 3163:  /* *avx512bw_ssaddv32hi3_mask */
    case 3161:  /* *sse2_ussubv16qi3_mask */
    case 3159:  /* *sse2_sssubv16qi3_mask */
    case 3157:  /* *sse2_usaddv16qi3_mask */
    case 3155:  /* *sse2_ssaddv16qi3_mask */
    case 3153:  /* *avx2_ussubv32qi3_mask */
    case 3151:  /* *avx2_sssubv32qi3_mask */
    case 3149:  /* *avx2_usaddv32qi3_mask */
    case 3147:  /* *avx2_ssaddv32qi3_mask */
    case 3145:  /* *avx512bw_ussubv64qi3_mask */
    case 3143:  /* *avx512bw_sssubv64qi3_mask */
    case 3141:  /* *avx512bw_usaddv64qi3_mask */
    case 3139:  /* *avx512bw_ssaddv64qi3_mask */
    case 3137:  /* *subv8hi3_mask */
    case 3136:  /* *addv8hi3_mask */
    case 3135:  /* *subv16hi3_mask */
    case 3134:  /* *addv16hi3_mask */
    case 3133:  /* *subv32hi3_mask */
    case 3132:  /* *addv32hi3_mask */
    case 3131:  /* *subv32qi3_mask */
    case 3130:  /* *addv32qi3_mask */
    case 3129:  /* *subv16qi3_mask */
    case 3128:  /* *addv16qi3_mask */
    case 3127:  /* *subv64qi3_mask */
    case 3126:  /* *addv64qi3_mask */
    case 3125:  /* *subv2di3_mask */
    case 3124:  /* *addv2di3_mask */
    case 3123:  /* *subv4di3_mask */
    case 3122:  /* *addv4di3_mask */
    case 3121:  /* *subv8di3_mask */
    case 3120:  /* *addv8di3_mask */
    case 3119:  /* *subv4si3_mask */
    case 3118:  /* *addv4si3_mask */
    case 3117:  /* *subv8si3_mask */
    case 3116:  /* *addv8si3_mask */
    case 3115:  /* *subv16si3_mask */
    case 3114:  /* *addv16si3_mask */
    case 1843:  /* *xorv8df3_mask */
    case 1841:  /* *iorv8df3_mask */
    case 1839:  /* *andv8df3_mask */
    case 1837:  /* *xorv16sf3_mask */
    case 1835:  /* *iorv16sf3_mask */
    case 1833:  /* *andv16sf3_mask */
    case 1831:  /* *xorv2df3_mask */
    case 1829:  /* *iorv2df3_mask */
    case 1827:  /* *andv2df3_mask */
    case 1825:  /* *xorv4df3_mask */
    case 1823:  /* *iorv4df3_mask */
    case 1821:  /* *andv4df3_mask */
    case 1819:  /* *xorv4sf3_mask */
    case 1817:  /* *iorv4sf3_mask */
    case 1815:  /* *andv4sf3_mask */
    case 1813:  /* *xorv8sf3_mask */
    case 1811:  /* *iorv8sf3_mask */
    case 1809:  /* *andv8sf3_mask */
    case 1539:  /* *sminv2df3_mask */
    case 1537:  /* *smaxv2df3_mask */
    case 1535:  /* *sminv4df3_mask */
    case 1533:  /* *smaxv4df3_mask */
    case 1530:  /* *sminv8df3_mask */
    case 1526:  /* *smaxv8df3_mask */
    case 1523:  /* *sminv4sf3_mask */
    case 1521:  /* *smaxv4sf3_mask */
    case 1519:  /* *sminv8sf3_mask */
    case 1517:  /* *smaxv8sf3_mask */
    case 1514:  /* *sminv16sf3_mask */
    case 1510:  /* *smaxv16sf3_mask */
    case 1435:  /* sse2_divv2df3_mask */
    case 1433:  /* avx_divv4df3_mask */
    case 1430:  /* avx512f_divv8df3_mask */
    case 1427:  /* sse_divv4sf3_mask */
    case 1425:  /* avx_divv8sf3_mask */
    case 1422:  /* avx512f_divv16sf3_mask */
    case 1398:  /* *mulv2df3_mask */
    case 1394:  /* *mulv4df3_mask */
    case 1390:  /* *mulv8df3_mask */
    case 1386:  /* *mulv4sf3_mask */
    case 1382:  /* *mulv8sf3_mask */
    case 1378:  /* *mulv16sf3_mask */
    case 1354:  /* *subv2df3_mask */
    case 1350:  /* *addv2df3_mask */
    case 1346:  /* *subv4df3_mask */
    case 1342:  /* *addv4df3_mask */
    case 1338:  /* *subv8df3_mask */
    case 1334:  /* *addv8df3_mask */
    case 1330:  /* *subv4sf3_mask */
    case 1326:  /* *addv4sf3_mask */
    case 1322:  /* *subv8sf3_mask */
    case 1318:  /* *addv8sf3_mask */
    case 1314:  /* *subv16sf3_mask */
    case 1310:  /* *addv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1529:  /* *sminv8df3_round */
    case 1525:  /* *smaxv8df3_round */
    case 1513:  /* *sminv16sf3_round */
    case 1509:  /* *smaxv16sf3_round */
    case 1429:  /* avx512f_divv8df3_round */
    case 1421:  /* avx512f_divv16sf3_round */
    case 1397:  /* *mulv2df3_round */
    case 1393:  /* *mulv4df3_round */
    case 1389:  /* *mulv8df3_round */
    case 1385:  /* *mulv4sf3_round */
    case 1381:  /* *mulv8sf3_round */
    case 1377:  /* *mulv16sf3_round */
    case 1353:  /* *subv2df3_round */
    case 1349:  /* *addv2df3_round */
    case 1345:  /* *subv4df3_round */
    case 1341:  /* *addv4df3_round */
    case 1337:  /* *subv8df3_round */
    case 1333:  /* *addv8df3_round */
    case 1329:  /* *subv4sf3_round */
    case 1325:  /* *addv4sf3_round */
    case 1321:  /* *subv8sf3_round */
    case 1317:  /* *addv8sf3_round */
    case 1313:  /* *subv16sf3_round */
    case 1309:  /* *addv16sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1289:  /* kunpckdi */
    case 1288:  /* kunpcksi */
    case 1287:  /* kunpckhi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1261:  /* kxnordi */
    case 1260:  /* kxnorsi */
    case 1259:  /* kxnorhi */
    case 1258:  /* kxnorqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1227:  /* avx512vl_storev8hi_mask */
    case 1226:  /* avx512vl_storev16hi_mask */
    case 1225:  /* avx512bw_storev32hi_mask */
    case 1224:  /* avx512vl_storev32qi_mask */
    case 1223:  /* avx512vl_storev16qi_mask */
    case 1222:  /* avx512bw_storev64qi_mask */
    case 1221:  /* avx512vl_storev2df_mask */
    case 1220:  /* avx512vl_storev4df_mask */
    case 1219:  /* avx512f_storev8df_mask */
    case 1218:  /* avx512vl_storev4sf_mask */
    case 1217:  /* avx512vl_storev8sf_mask */
    case 1216:  /* avx512f_storev16sf_mask */
    case 1215:  /* avx512vl_storev2di_mask */
    case 1214:  /* avx512vl_storev4di_mask */
    case 1213:  /* avx512f_storev8di_mask */
    case 1212:  /* avx512vl_storev4si_mask */
    case 1211:  /* avx512vl_storev8si_mask */
    case 1210:  /* avx512f_storev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 4148:  /* avx2_pblenddv4si */
    case 4147:  /* avx2_pblenddv8si */
    case 4146:  /* *avx2_pblendw */
    case 4145:  /* sse4_1_pblendw */
    case 4111:  /* sse4_1_blendpd */
    case 4110:  /* avx_blendpd256 */
    case 4109:  /* sse4_1_blendps */
    case 4108:  /* avx_blendps256 */
    case 1209:  /* avx512vl_blendmv8hi */
    case 1208:  /* avx512vl_blendmv16hi */
    case 1207:  /* avx512bw_blendmv32hi */
    case 1206:  /* avx512vl_blendmv32qi */
    case 1205:  /* avx512vl_blendmv16qi */
    case 1204:  /* avx512bw_blendmv64qi */
    case 1203:  /* avx512vl_blendmv2df */
    case 1202:  /* avx512vl_blendmv4df */
    case 1201:  /* avx512f_blendmv8df */
    case 1200:  /* avx512vl_blendmv4sf */
    case 1199:  /* avx512vl_blendmv8sf */
    case 1198:  /* avx512f_blendmv16sf */
    case 1197:  /* avx512vl_blendmv2di */
    case 1196:  /* avx512vl_blendmv4di */
    case 1195:  /* avx512f_blendmv8di */
    case 1194:  /* avx512vl_blendmv4si */
    case 1193:  /* avx512vl_blendmv8si */
    case 1192:  /* avx512f_blendmv16si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1191:  /* avx512f_storedf_mask */
    case 1190:  /* avx512f_storesf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 2);
      recog_data.dup_num[0] = 0;
      break;

    case 2203:  /* *fma4i_vmfnmadd_v2df */
    case 2202:  /* *fma4i_vmfnmadd_v4sf */
    case 1189:  /* *avx512f_loaddf_mask */
    case 1188:  /* *avx512f_loadsf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1187:  /* avx512f_movdf_mask */
    case 1186:  /* avx512f_movsf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 5560:  /* avx512f_cvtneps2bf16_v4sf_mask */
    case 5558:  /* avx512f_cvtneps2bf16_v8sf_mask */
    case 5556:  /* avx512f_cvtneps2bf16_v16sf_mask */
    case 5294:  /* conflictv2di_mask */
    case 5292:  /* conflictv4di_mask */
    case 5290:  /* conflictv8di_mask */
    case 5288:  /* conflictv4si_mask */
    case 5286:  /* conflictv8si_mask */
    case 5284:  /* conflictv16si_mask */
    case 4910:  /* avx512f_vcvtph2ps512_mask */
    case 4907:  /* vcvtph2ps256_mask */
    case 4905:  /* *vcvtph2ps_load_mask */
    case 4382:  /* avx512er_rsqrt28v8df_mask */
    case 4378:  /* avx512er_rsqrt28v16sf_mask */
    case 4366:  /* avx512er_rcp28v8df_mask */
    case 4362:  /* avx512er_rcp28v16sf_mask */
    case 4358:  /* avx512er_exp2v8df_mask */
    case 4354:  /* avx512er_exp2v16sf_mask */
    case 2693:  /* avx512vl_getexpv2df_mask */
    case 2689:  /* avx512vl_getexpv4df_mask */
    case 2685:  /* avx512f_getexpv8df_mask */
    case 2681:  /* avx512vl_getexpv4sf_mask */
    case 2677:  /* avx512vl_getexpv8sf_mask */
    case 2673:  /* avx512f_getexpv16sf_mask */
    case 2427:  /* ufix_notruncv2dfv2di2_mask */
    case 2425:  /* ufix_notruncv4dfv4di2_mask */
    case 2422:  /* ufix_notruncv8dfv8di2_mask */
    case 2419:  /* fix_notruncv2dfv2di2_mask */
    case 2417:  /* fix_notruncv4dfv4di2_mask */
    case 2414:  /* fix_notruncv8dfv8di2_mask */
    case 2376:  /* ufix_notruncv4dfv4si2_mask */
    case 2372:  /* ufix_notruncv8dfv8si2_mask */
    case 2365:  /* avx_cvtpd2dq256_mask */
    case 2362:  /* avx512f_cvtpd2dq512_mask */
    case 2272:  /* avx512dq_cvtps2uqqv4di_mask */
    case 2269:  /* avx512dq_cvtps2uqqv8di_mask */
    case 2264:  /* avx512dq_cvtps2qqv4di_mask */
    case 2261:  /* avx512dq_cvtps2qqv8di_mask */
    case 2257:  /* avx512vl_ufix_notruncv4sfv4si_mask */
    case 2253:  /* avx512vl_ufix_notruncv8sfv8si_mask */
    case 2249:  /* avx512f_ufix_notruncv16sfv16si_mask */
    case 2245:  /* avx512f_fix_notruncv16sfv16si_mask */
    case 2242:  /* sse2_fix_notruncv4sfv4si_mask */
    case 2240:  /* avx_fix_notruncv8sfv8si_mask */
    case 1501:  /* rsqrt14v2df_mask */
    case 1499:  /* rsqrt14v4df_mask */
    case 1497:  /* rsqrt14v8df_mask */
    case 1495:  /* rsqrt14v4sf_mask */
    case 1493:  /* rsqrt14v8sf_mask */
    case 1491:  /* rsqrt14v16sf_mask */
    case 1451:  /* rcp14v2df_mask */
    case 1449:  /* rcp14v4df_mask */
    case 1447:  /* rcp14v8df_mask */
    case 1445:  /* rcp14v4sf_mask */
    case 1443:  /* rcp14v8sf_mask */
    case 1441:  /* rcp14v16sf_mask */
    case 1179:  /* *avx512vl_loadv8hi_mask */
    case 1178:  /* *avx512vl_loadv16hi_mask */
    case 1177:  /* *avx512bw_loadv32hi_mask */
    case 1176:  /* *avx512vl_loadv32qi_mask */
    case 1175:  /* *avx512vl_loadv16qi_mask */
    case 1174:  /* *avx512bw_loadv64qi_mask */
    case 1161:  /* *avx512vl_loadv2df_mask */
    case 1160:  /* *avx512vl_loadv4df_mask */
    case 1159:  /* *avx512f_loadv8df_mask */
    case 1158:  /* *avx512vl_loadv4sf_mask */
    case 1157:  /* *avx512vl_loadv8sf_mask */
    case 1156:  /* *avx512f_loadv16sf_mask */
    case 1155:  /* *avx512vl_loadv2di_mask */
    case 1154:  /* *avx512vl_loadv4di_mask */
    case 1153:  /* *avx512f_loadv8di_mask */
    case 1152:  /* *avx512vl_loadv4si_mask */
    case 1151:  /* *avx512vl_loadv8si_mask */
    case 1150:  /* *avx512f_loadv16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4007:  /* *sse2_maskmovdqu */
    case 4006:  /* *sse2_maskmovdqu */
    case 1126:  /* *mmx_maskmovq */
    case 1125:  /* *mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4554:  /* avx2_permv4df_1 */
    case 4552:  /* avx2_permv4di_1 */
    case 3942:  /* sse2_pshuflw_1 */
    case 3936:  /* sse2_pshufd_1 */
    case 2568:  /* *avx512f_vextracti32x4_1 */
    case 2567:  /* *avx512f_vextractf32x4_1 */
    case 1113:  /* mmx_pshufw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 3955:  /* *vec_extractv16qi_zext */
    case 3954:  /* *vec_extractv8hi_zext */
    case 3953:  /* *vec_extractv16qi_zext */
    case 1112:  /* *mmx_pextrw_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 3965:  /* *vec_extractv4ti */
    case 3964:  /* *vec_extractv2ti */
    case 3962:  /* *vec_extractv4si_mem */
    case 3961:  /* *vec_extractv4si */
    case 3957:  /* *vec_extractv8hi_mem */
    case 3956:  /* *vec_extractv16qi_mem */
    case 3952:  /* *vec_extractv8hi */
    case 3951:  /* *vec_extractv16qi */
    case 2560:  /* *vec_extractv4sf_mem */
    case 2559:  /* *sse4_1_extractps */
    case 1111:  /* *mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 3887:  /* sse4_1_pinsrq */
    case 3886:  /* sse4_1_pinsrd */
    case 3885:  /* sse2_pinsrw */
    case 3884:  /* sse4_1_pinsrb */
    case 2551:  /* *vec_setv4sf_sse4_1 */
    case 1110:  /* *mmx_pinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3882:  /* vec_interleave_lowv4si */
    case 3880:  /* *avx512f_interleave_lowv16si */
    case 3878:  /* avx2_interleave_lowv8si */
    case 3876:  /* vec_interleave_highv4si */
    case 3874:  /* *avx512f_interleave_highv16si */
    case 3872:  /* avx2_interleave_highv8si */
    case 3870:  /* vec_interleave_lowv8hi */
    case 3868:  /* avx2_interleave_lowv16hi */
    case 3866:  /* *avx512bw_interleave_lowv32hi */
    case 3864:  /* vec_interleave_highv8hi */
    case 3862:  /* avx2_interleave_highv16hi */
    case 3860:  /* avx512bw_interleave_highv32hi */
    case 3858:  /* vec_interleave_lowv16qi */
    case 3856:  /* avx2_interleave_lowv32qi */
    case 3854:  /* avx512bw_interleave_lowv64qi */
    case 3852:  /* vec_interleave_highv16qi */
    case 3850:  /* avx2_interleave_highv32qi */
    case 3848:  /* avx512bw_interleave_highv64qi */
    case 2816:  /* vec_interleave_lowv2di */
    case 2814:  /* *avx512f_interleave_lowv8di */
    case 2812:  /* avx2_interleave_lowv4di */
    case 2810:  /* vec_interleave_highv2di */
    case 2808:  /* *avx512f_interleave_highv8di */
    case 2806:  /* avx2_interleave_highv4di */
    case 2620:  /* *vec_interleave_lowv2df */
    case 2617:  /* *avx_unpcklpd256 */
    case 2615:  /* *avx512f_unpcklpd512 */
    case 2614:  /* *vec_interleave_highv2df */
    case 2611:  /* avx_unpckhpd256 */
    case 2609:  /* *avx512f_unpckhpd512 */
    case 2517:  /* vec_interleave_lowv4sf */
    case 2514:  /* avx_unpcklps256 */
    case 2512:  /* *avx512f_unpcklps512 */
    case 2510:  /* vec_interleave_highv4sf */
    case 2508:  /* avx_unpckhps256 */
    case 2506:  /* *avx512f_unpckhps512 */
    case 2505:  /* sse_movlhps */
    case 2504:  /* sse_movhlps */
    case 1109:  /* mmx_punpckldq */
    case 1108:  /* mmx_punpckhdq */
    case 1107:  /* mmx_punpcklwd */
    case 1106:  /* mmx_punpckhwd */
    case 1105:  /* mmx_punpcklbw */
    case 1104:  /* mmx_punpckhbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 4139:  /* sse4_1_packusdw */
    case 4137:  /* avx2_packusdw */
    case 4135:  /* avx512bw_packusdw */
    case 3846:  /* sse2_packuswb */
    case 3844:  /* avx2_packuswb */
    case 3842:  /* avx512bw_packuswb */
    case 3840:  /* sse2_packssdw */
    case 3838:  /* avx2_packssdw */
    case 3836:  /* avx512bw_packssdw */
    case 3834:  /* sse2_packsswb */
    case 3832:  /* avx2_packsswb */
    case 3830:  /* avx512bw_packsswb */
    case 1103:  /* mmx_packssdw */
    case 1102:  /* mmx_packuswb */
    case 1101:  /* mmx_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 3214:  /* *sse4_1_mulv2siv2di3 */
    case 3212:  /* *vec_widen_smult_even_v8si */
    case 3210:  /* *vec_widen_smult_even_v16si */
    case 3208:  /* *vec_widen_umult_even_v4si */
    case 3206:  /* *vec_widen_umult_even_v8si */
    case 3204:  /* *vec_widen_umult_even_v16si */
    case 1070:  /* *sse2_umulv1siv1di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 1122:  /* *mmx_uavgv4hi3 */
    case 1121:  /* *mmx_uavgv8qi3 */
    case 1069:  /* *mmx_pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 4042:  /* ssse3_pmaddubsw */
    case 4041:  /* ssse3_pmaddubsw128 */
    case 4032:  /* avx2_pmaddubsw256 */
    case 3223:  /* *sse2_pmaddwd */
    case 3222:  /* *avx2_pmaddwd */
    case 1068:  /* *mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 3202:  /* *umulv8hi3_highpart */
    case 3200:  /* *smulv8hi3_highpart */
    case 3198:  /* *umulv16hi3_highpart */
    case 3196:  /* *smulv16hi3_highpart */
    case 3194:  /* *umulv32hi3_highpart */
    case 3192:  /* *smulv32hi3_highpart */
    case 1067:  /* *mmx_umulv4hi3_highpart */
    case 1066:  /* *mmx_smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 1043:  /* mmx_pi2fw */
    case 1042:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1036:  /* *mmx_haddsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1599:  /* sse3_hsubv2df3 */
    case 1035:  /* mmx_hsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1598:  /* *sse3_haddv2df3 */
    case 1034:  /* *mmx_haddv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 4319:  /* ptesttf2 */
    case 4318:  /* avx_ptestv4df */
    case 4317:  /* avx_ptestv8sf */
    case 4316:  /* avx_ptestv4di */
    case 4315:  /* avx_ptestv8si */
    case 4314:  /* avx_ptestv16hi */
    case 4313:  /* avx_ptestv32qi */
    case 4312:  /* sse4_1_ptestv2df */
    case 4311:  /* sse4_1_ptestv4sf */
    case 4310:  /* sse4_1_ptestv2di */
    case 4309:  /* sse4_1_ptestv4si */
    case 4308:  /* sse4_1_ptestv8hi */
    case 4307:  /* sse4_1_ptestv16qi */
    case 4306:  /* avx_vtestpd */
    case 4305:  /* avx_vtestpd256 */
    case 4304:  /* avx_vtestps */
    case 4303:  /* avx_vtestps256 */
    case 1286:  /* kortestdi */
    case 1285:  /* kortestsi */
    case 1284:  /* kortesthi */
    case 1283:  /* kortestqi */
    case 1282:  /* ktestdi */
    case 1281:  /* ktestsi */
    case 1280:  /* ktesthi */
    case 1279:  /* ktestqi */
    case 1010:  /* tpause */
    case 1007:  /* umwait */
    case 1006:  /* enqcmds_di */
    case 1005:  /* enqcmd_di */
    case 1004:  /* enqcmds_si */
    case 1003:  /* enqcmd_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1000:  /* movdir64b_di */
    case 999:  /* movdir64b_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 993:  /* *rdpkru */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 982:  /* xbegin_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 966:  /* lwp_lwpinssi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 4013:  /* sse3_monitor_di */
    case 4012:  /* sse3_monitor_si */
    case 994:  /* *wrpkru */
    case 990:  /* monitorx_di */
    case 989:  /* monitorx_si */
    case 988:  /* mwaitx */
    case 965:  /* lwp_lwpvalsi */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 958:  /* fldenv */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      break;

    case 4011:  /* sse3_mwait */
    case 1014:  /* patchable_area */
    case 978:  /* wrusssi */
    case 977:  /* wrsssi */
    case 955:  /* xsetbv */
    case 954:  /* xrstors */
    case 953:  /* xrstor */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 946:  /* rdtscp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 938:  /* *stack_protect_set_2_di */
    case 937:  /* *stack_protect_set_2_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 932:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 927:  /* adjust_stack_and_probe_di */
    case 926:  /* adjust_stack_and_probe_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 1878:  /* *fma_fmadd_v2df */
    case 1876:  /* *fma_fmadd_v4df */
    case 1872:  /* *fma_fmadd_v8df */
    case 1871:  /* *fma_fmadd_df */
    case 1869:  /* *fma_fmadd_v4sf */
    case 1867:  /* *fma_fmadd_v8sf */
    case 1863:  /* *fma_fmadd_v16sf */
    case 1862:  /* *fma_fmadd_sf */
    case 1861:  /* *fma_fmadd_v4df */
    case 1860:  /* *fma_fmadd_v8sf */
    case 1859:  /* *fma_fmadd_v2df */
    case 1858:  /* *fma_fmadd_v4sf */
    case 1857:  /* *fma_fmadd_df */
    case 1856:  /* *fma_fmadd_sf */
    case 885:  /* *xop_pcmov_df */
    case 884:  /* *xop_pcmov_sf */
    case 883:  /* *movsfcc_1_387 */
    case 882:  /* *movdfcc_1 */
    case 881:  /* *movxfcc_1 */
    case 880:  /* *movqicc_noc */
    case 879:  /* *movsicc_noc */
    case 878:  /* *movhicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 872:  /* *strlenqi_1 */
    case 871:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 870:  /* *cmpstrnqi_1 */
    case 869:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 868:  /* *cmpstrnqi_nz_1 */
    case 867:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 866:  /* *rep_stosqi */
    case 865:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 864:  /* *rep_stossi */
    case 863:  /* *rep_stossi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 862:  /* *strsetqi_1 */
    case 861:  /* *strsetqi_1 */
    case 860:  /* *strsethi_1 */
    case 859:  /* *strsethi_1 */
    case 858:  /* *strsetsi_1 */
    case 857:  /* *strsetsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 856:  /* *rep_movqi */
    case 855:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 854:  /* *rep_movsi */
    case 853:  /* *rep_movsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 852:  /* *strmovqi_1 */
    case 851:  /* *strmovqi_1 */
    case 850:  /* *strmovhi_1 */
    case 849:  /* *strmovhi_1 */
    case 848:  /* *strmovsi_1 */
    case 847:  /* *strmovsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 837:  /* fistdi2_ceil */
    case 836:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 5589:  /* atomic_storedi_fpu */
    case 5585:  /* atomic_loaddi_fpu */
    case 841:  /* fistsi2_ceil */
    case 840:  /* fistsi2_floor */
    case 839:  /* fisthi2_ceil */
    case 838:  /* fisthi2_floor */
    case 829:  /* frndintxf2_trunc_i387 */
    case 828:  /* frndintxf2_ceil_i387 */
    case 827:  /* frndintxf2_floor_i387 */
    case 826:  /* frndintxf2_roundeven_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1229:  /* movdi_to_sse */
    case 936:  /* stack_protect_set_1_di */
    case 935:  /* stack_protect_set_1_si */
    case 819:  /* lrintxfdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 815:  /* fscalexf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 940:  /* stack_protect_test_1_di */
    case 939:  /* stack_protect_test_1_si */
    case 812:  /* fyl2xp1xf3_i387 */
    case 811:  /* fyl2xxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 810:  /* atan2xf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 809:  /* fptanxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 813:  /* fxtractxf3_i387 */
    case 808:  /* sincosxf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 805:  /* fprem1xf4_i387 */
    case 804:  /* fpremxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 796:  /* *fop_df_6_i387 */
    case 795:  /* *fop_xf_6_i387 */
    case 794:  /* *fop_xf_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 793:  /* *fop_df_5_i387 */
    case 792:  /* *fop_xf_5_i387 */
    case 791:  /* *fop_xf_5_i387 */
    case 787:  /* *fop_xf_3_i387 */
    case 786:  /* *fop_df_3_i387 */
    case 785:  /* *fop_sf_3_i387 */
    case 784:  /* *fop_xf_3_i387 */
    case 783:  /* *fop_df_3_i387 */
    case 782:  /* *fop_sf_3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 790:  /* *fop_df_4_i387 */
    case 789:  /* *fop_xf_4_i387 */
    case 788:  /* *fop_xf_4_i387 */
    case 781:  /* *fop_xf_2_i387 */
    case 780:  /* *fop_df_2_i387 */
    case 779:  /* *fop_sf_2_i387 */
    case 778:  /* *fop_xf_2_i387 */
    case 777:  /* *fop_df_2_i387 */
    case 776:  /* *fop_sf_2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 5593:  /* storedi_via_sse */
    case 5592:  /* loaddi_via_sse */
    case 5591:  /* storedi_via_fpu */
    case 5590:  /* loaddi_via_fpu */
    case 5559:  /* avx512f_cvtneps2bf16_v4sf */
    case 5557:  /* avx512f_cvtneps2bf16_v8sf */
    case 5555:  /* avx512f_cvtneps2bf16_v16sf */
    case 5293:  /* *conflictv2di */
    case 5291:  /* *conflictv4di */
    case 5289:  /* *conflictv8di */
    case 5287:  /* *conflictv4si */
    case 5285:  /* *conflictv8si */
    case 5283:  /* *conflictv16si */
    case 4908:  /* *avx512f_vcvtph2ps512 */
    case 4906:  /* vcvtph2ps256 */
    case 4904:  /* *vcvtph2ps_load */
    case 4487:  /* aesimc */
    case 4460:  /* xop_frczv4df2 */
    case 4459:  /* xop_frczv8sf2 */
    case 4458:  /* xop_frczv2df2 */
    case 4457:  /* xop_frczv4sf2 */
    case 4456:  /* xop_frczdf2 */
    case 4455:  /* xop_frczsf2 */
    case 4380:  /* *avx512er_rsqrt28v8df */
    case 4376:  /* *avx512er_rsqrt28v16sf */
    case 4364:  /* *avx512er_rcp28v8df */
    case 4360:  /* *avx512er_rcp28v16sf */
    case 4356:  /* avx512er_exp2v8df */
    case 4352:  /* avx512er_exp2v16sf */
    case 4149:  /* sse4_1_phminposuw */
    case 4132:  /* sse4_1_movntdqa */
    case 4131:  /* avx2_movntdqa */
    case 4130:  /* avx512f_movntdqa */
    case 4101:  /* sse4a_movntdf */
    case 4100:  /* sse4a_movntsf */
    case 4002:  /* sse2_pmovmskb */
    case 4001:  /* avx2_pmovmskb */
    case 3992:  /* sse2_movmskpd */
    case 3991:  /* avx_movmskpd256 */
    case 3990:  /* sse_movmskps */
    case 3989:  /* avx_movmskps256 */
    case 2691:  /* avx512vl_getexpv2df */
    case 2687:  /* avx512vl_getexpv4df */
    case 2683:  /* avx512f_getexpv8df */
    case 2679:  /* avx512vl_getexpv4sf */
    case 2675:  /* avx512vl_getexpv8sf */
    case 2671:  /* avx512f_getexpv16sf */
    case 2489:  /* avx512vl_cvtq2maskv2di */
    case 2488:  /* avx512vl_cvtq2maskv4di */
    case 2487:  /* avx512f_cvtq2maskv8di */
    case 2486:  /* avx512vl_cvtd2maskv4si */
    case 2485:  /* avx512vl_cvtd2maskv8si */
    case 2484:  /* avx512f_cvtd2maskv16si */
    case 2483:  /* avx512vl_cvtw2maskv8hi */
    case 2482:  /* avx512vl_cvtw2maskv16hi */
    case 2481:  /* avx512bw_cvtw2maskv32hi */
    case 2480:  /* avx512vl_cvtb2maskv32qi */
    case 2479:  /* avx512vl_cvtb2maskv16qi */
    case 2478:  /* avx512bw_cvtb2maskv64qi */
    case 2426:  /* ufix_notruncv2dfv2di2 */
    case 2424:  /* ufix_notruncv4dfv4di2 */
    case 2420:  /* ufix_notruncv8dfv8di2 */
    case 2418:  /* fix_notruncv2dfv2di2 */
    case 2416:  /* fix_notruncv4dfv4di2 */
    case 2412:  /* fix_notruncv8dfv8di2 */
    case 2374:  /* ufix_notruncv4dfv4si2 */
    case 2370:  /* ufix_notruncv8dfv8si2 */
    case 2364:  /* avx_cvtpd2dq256 */
    case 2360:  /* avx512f_cvtpd2dq512 */
    case 2301:  /* sse2_cvtsd2si_2 */
    case 2288:  /* sse2_cvtpd2pi */
    case 2271:  /* *avx512dq_cvtps2uqqv4di */
    case 2267:  /* *avx512dq_cvtps2uqqv8di */
    case 2263:  /* *avx512dq_cvtps2qqv4di */
    case 2259:  /* *avx512dq_cvtps2qqv8di */
    case 2255:  /* *avx512vl_ufix_notruncv4sfv4si */
    case 2251:  /* *avx512vl_ufix_notruncv8sfv8si */
    case 2247:  /* *avx512f_ufix_notruncv16sfv16si */
    case 2243:  /* avx512f_fix_notruncv16sfv16si */
    case 2241:  /* sse2_fix_notruncv4sfv4si */
    case 2239:  /* avx_fix_notruncv8sfv8si */
    case 2213:  /* sse_cvtss2si_2 */
    case 1500:  /* *rsqrt14v2df */
    case 1498:  /* *rsqrt14v4df */
    case 1496:  /* *rsqrt14v8df */
    case 1494:  /* *rsqrt14v4sf */
    case 1492:  /* *rsqrt14v8sf */
    case 1490:  /* *rsqrt14v16sf */
    case 1489:  /* sse_rsqrtv4sf2 */
    case 1488:  /* avx_rsqrtv8sf2 */
    case 1450:  /* *rcp14v2df */
    case 1448:  /* *rcp14v4df */
    case 1446:  /* *rcp14v8df */
    case 1444:  /* *rcp14v4sf */
    case 1442:  /* *rcp14v8sf */
    case 1440:  /* *rcp14v16sf */
    case 1437:  /* sse_rcpv4sf2 */
    case 1436:  /* avx_rcpv8sf2 */
    case 1241:  /* sse2_movntv2di */
    case 1240:  /* avx_movntv4di */
    case 1239:  /* avx512f_movntv8di */
    case 1238:  /* sse2_movntv2df */
    case 1237:  /* avx_movntv4df */
    case 1236:  /* avx512f_movntv8df */
    case 1235:  /* sse_movntv4sf */
    case 1234:  /* avx_movntv8sf */
    case 1233:  /* avx512f_movntv16sf */
    case 1232:  /* sse2_movntisi */
    case 1231:  /* sse3_lddqu */
    case 1230:  /* avx_lddqu256 */
    case 1185:  /* *avx512vl_loadv8hi */
    case 1184:  /* *avx512vl_loadv16hi */
    case 1183:  /* *avx512bw_loadv32hi */
    case 1182:  /* *avx512vl_loadv32qi */
    case 1181:  /* *avx512vl_loadv16qi */
    case 1180:  /* *avx512bw_loadv64qi */
    case 1173:  /* *avx512vl_loadv2df */
    case 1172:  /* *avx512vl_loadv4df */
    case 1171:  /* *avx512f_loadv8df */
    case 1170:  /* *avx512vl_loadv4sf */
    case 1169:  /* *avx512vl_loadv8sf */
    case 1168:  /* *avx512f_loadv16sf */
    case 1167:  /* *avx512vl_loadv2di */
    case 1166:  /* *avx512vl_loadv4di */
    case 1165:  /* *avx512f_loadv8di */
    case 1164:  /* *avx512vl_loadv4si */
    case 1163:  /* *avx512vl_loadv8si */
    case 1162:  /* *avx512f_loadv16si */
    case 1124:  /* mmx_pmovmskb */
    case 1032:  /* mmx_rsqrtv2sf2 */
    case 1029:  /* mmx_rcpv2sf2 */
    case 1021:  /* sse_movntq */
    case 998:  /* movdirisi */
    case 973:  /* rdsspsi */
    case 956:  /* xgetbv */
    case 952:  /* xsaves */
    case 951:  /* xsavec */
    case 950:  /* xsaveopt */
    case 949:  /* xsave */
    case 944:  /* rdpmc */
    case 845:  /* movmsk_df */
    case 844:  /* fxamxf2_i387 */
    case 843:  /* fxamdf2_i387 */
    case 842:  /* fxamsf2_i387 */
    case 821:  /* lrintxfsi2 */
    case 820:  /* lrintxfhi2 */
    case 818:  /* rintxf2 */
    case 814:  /* *f2xm1xf2_i387 */
    case 807:  /* cosxf2 */
    case 806:  /* sinxf2 */
    case 800:  /* *rsqrtsf2_sse */
    case 798:  /* truncxfdf2_i387_noop_unspec */
    case 797:  /* truncxfsf2_i387_noop_unspec */
    case 772:  /* *rcpsf2_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 768:  /* *tls_dynamic_gnu2_combine_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 767:  /* *tls_dynamic_gnu2_call_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 766:  /* *tls_dynamic_gnu2_lea_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 765:  /* *add_tp_x32_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 764:  /* *add_tp_di */
    case 763:  /* *add_tp_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 759:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 758:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 757:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 755:  /* parityhi2_cmp */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 754:  /* bswaphi_lowpart */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1266:  /* *knotsi_1_zext */
    case 749:  /* *popcounthi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 746:  /* *tbm_tzmsk_si */
    case 745:  /* *tbm_t1mskc_si */
    case 744:  /* *tbm_blsic_si */
    case 740:  /* *tbm_blcic_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 739:  /* *tbm_blci_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 737:  /* tbm_bextri_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 5588:  /* atomic_storesi_1 */
    case 5587:  /* atomic_storehi_1 */
    case 5586:  /* atomic_storeqi_1 */
    case 5553:  /* avx512f_cvtne2ps2bf16_v8hi */
    case 5551:  /* avx512f_cvtne2ps2bf16_v16hi */
    case 5549:  /* avx512f_cvtne2ps2bf16_v32hi */
    case 5548:  /* avx512vp2intersect_2intersectv16si */
    case 5547:  /* avx512vp2intersect_2intersectv4si */
    case 5546:  /* avx512vp2intersect_2intersectv8si */
    case 5545:  /* avx512vp2intersect_2intersectv2di */
    case 5544:  /* avx512vp2intersect_2intersectv4di */
    case 5543:  /* avx512vp2intersect_2intersectv8di */
    case 5539:  /* avx512vl_vpshufbitqmbv16qi */
    case 5537:  /* avx512vl_vpshufbitqmbv32qi */
    case 5535:  /* avx512vl_vpshufbitqmbv64qi */
    case 5531:  /* vaesenclast_v64qi */
    case 5530:  /* vaesenclast_v16qi */
    case 5529:  /* vaesenclast_v32qi */
    case 5528:  /* vaesenc_v64qi */
    case 5527:  /* vaesenc_v16qi */
    case 5526:  /* vaesenc_v32qi */
    case 5525:  /* vaesdeclast_v64qi */
    case 5524:  /* vaesdeclast_v16qi */
    case 5523:  /* vaesdeclast_v32qi */
    case 5522:  /* vaesdec_v64qi */
    case 5521:  /* vaesdec_v16qi */
    case 5520:  /* vaesdec_v32qi */
    case 5392:  /* vgf2p8mulb_v16qi */
    case 5390:  /* vgf2p8mulb_v32qi */
    case 5388:  /* vgf2p8mulb_v64qi */
    case 5330:  /* vpmultishiftqbv32qi */
    case 5328:  /* vpmultishiftqbv16qi */
    case 5326:  /* vpmultishiftqbv64qi */
    case 5300:  /* sha256msg2 */
    case 5299:  /* sha256msg1 */
    case 5297:  /* sha1nexte */
    case 5296:  /* sha1msg2 */
    case 5295:  /* sha1msg1 */
    case 5253:  /* avx512vl_getmantv2df */
    case 5249:  /* avx512vl_getmantv4df */
    case 5245:  /* avx512f_getmantv8df */
    case 5241:  /* avx512vl_getmantv4sf */
    case 5237:  /* avx512vl_getmantv8sf */
    case 5233:  /* avx512f_getmantv16sf */
    case 5227:  /* avx512dq_fpclassv2df */
    case 5225:  /* avx512dq_fpclassv4df */
    case 5223:  /* avx512dq_fpclassv8df */
    case 5221:  /* avx512dq_fpclassv4sf */
    case 5219:  /* avx512dq_fpclassv8sf */
    case 5217:  /* avx512dq_fpclassv16sf */
    case 4921:  /* *avx512f_vcvtps2ph512 */
    case 4919:  /* *avx512f_vcvtps2ph512 */
    case 4917:  /* *vcvtps2ph256 */
    case 4915:  /* vcvtps2ph256 */
    case 4914:  /* *vcvtps2ph_store */
    case 4711:  /* avx_vpermilvarv2df3 */
    case 4709:  /* avx_vpermilvarv4df3 */
    case 4707:  /* avx512f_vpermilvarv8df3 */
    case 4705:  /* avx_vpermilvarv4sf3 */
    case 4703:  /* avx_vpermilvarv8sf3 */
    case 4701:  /* avx512f_vpermilvarv16sf3 */
    case 4535:  /* avx512bw_permvarv32hi */
    case 4533:  /* avx512vl_permvarv16hi */
    case 4531:  /* avx512vl_permvarv8hi */
    case 4529:  /* avx512vl_permvarv32qi */
    case 4527:  /* avx512vl_permvarv16qi */
    case 4525:  /* avx512bw_permvarv64qi */
    case 4523:  /* avx2_permvarv4df */
    case 4521:  /* avx2_permvarv4di */
    case 4519:  /* avx512f_permvarv8df */
    case 4517:  /* avx512f_permvarv8di */
    case 4515:  /* avx512f_permvarv16sf */
    case 4513:  /* avx512f_permvarv16si */
    case 4511:  /* avx2_permvarv8sf */
    case 4509:  /* avx2_permvarv8si */
    case 4488:  /* aeskeygenassist */
    case 4486:  /* aesdeclast */
    case 4485:  /* aesdec */
    case 4484:  /* aesenclast */
    case 4483:  /* aesenc */
    case 4323:  /* sse4_1_roundpd */
    case 4322:  /* avx_roundpd256 */
    case 4321:  /* sse4_1_roundps */
    case 4320:  /* avx_roundps256 */
    case 4107:  /* sse4a_insertq */
    case 4105:  /* sse4a_extrq */
    case 4065:  /* ssse3_psignv2si3 */
    case 4064:  /* ssse3_psignv4hi3 */
    case 4063:  /* ssse3_psignv8qi3 */
    case 4062:  /* ssse3_psignv4si3 */
    case 4061:  /* avx2_psignv8si3 */
    case 4060:  /* ssse3_psignv8hi3 */
    case 4059:  /* avx2_psignv16hi3 */
    case 4058:  /* ssse3_psignv16qi3 */
    case 4057:  /* avx2_psignv32qi3 */
    case 4054:  /* ssse3_pshufbv16qi3 */
    case 4052:  /* avx2_pshufbv32qi3 */
    case 4050:  /* avx512bw_pshufbv64qi3 */
    case 4037:  /* avx512bw_pmaddubsw512v32hi */
    case 4035:  /* avx512bw_pmaddubsw512v16hi */
    case 4033:  /* avx512bw_pmaddubsw512v8hi */
    case 3988:  /* sse2_psadbw */
    case 3987:  /* avx2_psadbw */
    case 3986:  /* avx512f_psadbw */
    case 3944:  /* *avx512bw_pshufhwv32hi */
    case 3938:  /* *avx512bw_pshuflwv32hi */
    case 3684:  /* avx512vl_testnmv2di3 */
    case 3682:  /* avx512vl_testnmv4di3 */
    case 3680:  /* avx512f_testnmv8di3 */
    case 3678:  /* avx512vl_testnmv4si3 */
    case 3676:  /* avx512vl_testnmv8si3 */
    case 3674:  /* avx512f_testnmv16si3 */
    case 3672:  /* avx512vl_testnmv8hi3 */
    case 3670:  /* avx512vl_testnmv16hi3 */
    case 3668:  /* avx512bw_testnmv32hi3 */
    case 3666:  /* avx512vl_testnmv16qi3 */
    case 3664:  /* avx512vl_testnmv32qi3 */
    case 3662:  /* avx512bw_testnmv64qi3 */
    case 3660:  /* avx512vl_testmv2di3 */
    case 3658:  /* avx512vl_testmv4di3 */
    case 3656:  /* avx512f_testmv8di3 */
    case 3654:  /* avx512vl_testmv4si3 */
    case 3652:  /* avx512vl_testmv8si3 */
    case 3650:  /* avx512f_testmv16si3 */
    case 3648:  /* avx512vl_testmv8hi3 */
    case 3646:  /* avx512vl_testmv16hi3 */
    case 3644:  /* avx512bw_testmv32hi3 */
    case 3642:  /* avx512vl_testmv16qi3 */
    case 3640:  /* avx512vl_testmv32qi3 */
    case 3638:  /* avx512bw_testmv64qi3 */
    case 3534:  /* *avx512vl_eqv2di3_1 */
    case 3532:  /* *avx512vl_eqv4di3_1 */
    case 3530:  /* *avx512f_eqv8di3_1 */
    case 3528:  /* *avx512vl_eqv4si3_1 */
    case 3526:  /* *avx512vl_eqv8si3_1 */
    case 3524:  /* *avx512f_eqv16si3_1 */
    case 3522:  /* *avx512vl_eqv8hi3_1 */
    case 3520:  /* *avx512vl_eqv16hi3_1 */
    case 3518:  /* *avx512bw_eqv32hi3_1 */
    case 3516:  /* *avx512vl_eqv32qi3_1 */
    case 3514:  /* *avx512vl_eqv16qi3_1 */
    case 3512:  /* *avx512bw_eqv64qi3_1 */
    case 3220:  /* avx512bw_pmaddwd512v8hi */
    case 3218:  /* avx512bw_pmaddwd512v16hi */
    case 3216:  /* avx512bw_pmaddwd512v32hi */
    case 2783:  /* avx512vl_rndscalev2df */
    case 2779:  /* avx512vl_rndscalev4df */
    case 2775:  /* avx512f_rndscalev8df */
    case 2771:  /* avx512vl_rndscalev4sf */
    case 2767:  /* avx512vl_rndscalev8sf */
    case 2763:  /* avx512f_rndscalev16sf */
    case 2649:  /* avx512vl_scalefv2df */
    case 2645:  /* avx512vl_scalefv4df */
    case 2641:  /* avx512f_scalefv8df */
    case 2637:  /* avx512vl_scalefv4sf */
    case 2633:  /* avx512vl_scalefv8sf */
    case 2629:  /* avx512f_scalefv16sf */
    case 1626:  /* *reducepv2df */
    case 1622:  /* *reducepv4df */
    case 1618:  /* *reducepv8df */
    case 1614:  /* *reducepv4sf */
    case 1610:  /* *reducepv8sf */
    case 1606:  /* *reducepv16sf */
    case 1570:  /* ieee_minv2df3 */
    case 1568:  /* ieee_maxv2df3 */
    case 1566:  /* ieee_minv4df3 */
    case 1564:  /* ieee_maxv4df3 */
    case 1560:  /* ieee_minv8df3 */
    case 1556:  /* ieee_maxv8df3 */
    case 1554:  /* ieee_minv4sf3 */
    case 1552:  /* ieee_maxv4sf3 */
    case 1550:  /* ieee_minv8sf3 */
    case 1548:  /* ieee_maxv8sf3 */
    case 1544:  /* ieee_minv16sf3 */
    case 1540:  /* ieee_maxv16sf3 */
    case 1123:  /* mmx_psadbw */
    case 1033:  /* mmx_rsqit1v2sf3 */
    case 1031:  /* mmx_rcpit2v2sf3 */
    case 1030:  /* mmx_rcpit1v2sf3 */
    case 1028:  /* mmx_ieee_minv2sf3 */
    case 1027:  /* mmx_ieee_maxv2sf3 */
    case 943:  /* sse4_2_crc32si */
    case 942:  /* sse4_2_crc32hi */
    case 941:  /* sse4_2_crc32qi */
    case 893:  /* *ieee_smindf3 */
    case 892:  /* *ieee_smaxdf3 */
    case 891:  /* *ieee_sminsf3 */
    case 890:  /* *ieee_smaxsf3 */
    case 817:  /* sse4_1_rounddf2 */
    case 816:  /* sse4_1_roundsf2 */
    case 736:  /* bmi2_pext_si3 */
    case 735:  /* bmi2_pdep_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 732:  /* *bmi2_bzhi_si3_1_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 731:  /* *bmi2_bzhi_si3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 730:  /* *bmi2_bzhi_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 729:  /* *bmi_blsr_si_ccz */
    case 725:  /* *bmi_blsi_di_ccno */
    case 724:  /* *bmi_blsi_si_ccno */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 728:  /* *bmi_blsr_si_cmp */
    case 723:  /* *bmi_blsi_di_cmp */
    case 722:  /* *bmi_blsi_si_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 743:  /* *tbm_blsfill_si */
    case 742:  /* *tbm_blcs_si */
    case 741:  /* *tbm_blcmsk_si */
    case 738:  /* *tbm_blcfill_si */
    case 727:  /* *bmi_blsr_si */
    case 726:  /* *bmi_blsmsk_si */
    case 721:  /* *bmi_blsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 720:  /* *bmi_bextr_si_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 929:  /* probe_stack_range_di */
    case 928:  /* probe_stack_range_si */
    case 719:  /* bmi_bextr_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 716:  /* *lzcnt_si_falsedep */
    case 715:  /* *tzcnt_si_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 925:  /* probe_stack_1_di */
    case 924:  /* probe_stack_1_si */
    case 923:  /* allocate_stack_worker_probe_di */
    case 922:  /* allocate_stack_worker_probe_si */
    case 835:  /* *fistdi2_ceil_1 */
    case 834:  /* *fistdi2_floor_1 */
    case 833:  /* *fistsi2_ceil_1 */
    case 832:  /* *fistsi2_floor_1 */
    case 831:  /* *fisthi2_ceil_1 */
    case 830:  /* *fisthi2_floor_1 */
    case 825:  /* frndintxf2_trunc */
    case 824:  /* frndintxf2_ceil */
    case 823:  /* frndintxf2_floor */
    case 822:  /* frndintxf2_roundeven */
    case 718:  /* lzcnt_hi */
    case 717:  /* tzcnt_hi */
    case 714:  /* lzcnt_si */
    case 713:  /* tzcnt_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 712:  /* *clzsi2_lzcnt_zext_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 709:  /* bsr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 748:  /* *popcountsi2_falsedep */
    case 711:  /* *clzsi2_lzcnt_falsedep */
    case 708:  /* *ctzsi2_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 705:  /* *tzcntsi_1_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4103:  /* sse4a_vmmovntv2df */
    case 4102:  /* sse4a_vmmovntv4sf */
    case 2299:  /* sse2_cvtsd2si */
    case 2295:  /* avx512f_vcvtsd2usi */
    case 2291:  /* avx512f_vcvtss2usi */
    case 2273:  /* *avx512dq_cvtps2uqqv2di */
    case 2265:  /* *avx512dq_cvtps2qqv2di */
    case 2211:  /* sse_cvtss2si */
    case 699:  /* set_got_offset_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 698:  /* *set_got_labelled */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 971:  /* rdseedsi */
    case 970:  /* rdseedhi */
    case 969:  /* rdrandsi */
    case 968:  /* rdrandhi */
    case 957:  /* fnstenv */
    case 697:  /* *set_got */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 693:  /* *simple_return_indirect_internaldi */
    case 692:  /* *simple_return_indirect_internalsi */
    case 691:  /* simple_return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 4010:  /* sse2_clflush */
    case 4008:  /* sse_ldmxcsr */
    case 1015:  /* hreset */
    case 1011:  /* cldemote */
    case 1009:  /* umonitor_di */
    case 1008:  /* umonitor_si */
    case 992:  /* clzero_di */
    case 991:  /* clzero_si */
    case 987:  /* clflushopt */
    case 986:  /* clwb */
    case 984:  /* xabort */
    case 980:  /* clrssbsy */
    case 976:  /* rstorssp */
    case 974:  /* incsspsi */
    case 967:  /* ptwritesi */
    case 962:  /* lwp_llwpcbdi */
    case 961:  /* lwp_llwpcbsi */
    case 948:  /* fxrstor */
    case 702:  /* split_stack_return */
    case 696:  /* pad */
    case 695:  /* nops */
    case 687:  /* prologue_use */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 5583:  /* mfence_sse2 */
    case 5582:  /* *sse_sfence */
    case 5581:  /* *sse2_lfence */
    case 972:  /* *pause */
    case 686:  /* *memory_blockage */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 684:  /* *sibcall_value_pop_memory */
    case 683:  /* *sibcall_value_pop */
    case 682:  /* *call_value_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 677:  /* *sibcall_value_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1484:  /* *sse2_vmsqrtv2df2 */
    case 1480:  /* *sse_vmsqrtv4sf2 */
    case 676:  /* *call_value_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4816:  /* vec_set_hi_v32qi */
    case 4814:  /* vec_set_hi_v16hi */
    case 4811:  /* vec_set_hi_v8sf */
    case 4809:  /* vec_set_hi_v8si */
    case 4803:  /* vec_set_hi_v4df */
    case 4801:  /* vec_set_hi_v4di */
    case 3914:  /* vec_set_hi_v8di */
    case 3912:  /* vec_set_hi_v8df */
    case 3906:  /* vec_set_hi_v16si */
    case 3904:  /* vec_set_hi_v16sf */
    case 3577:  /* *andnotv2di3 */
    case 3576:  /* *andnotv4di3 */
    case 3575:  /* *andnotv4si3 */
    case 3574:  /* *andnotv8si3 */
    case 3573:  /* *andnotv8hi3 */
    case 3572:  /* *andnotv16hi3 */
    case 3571:  /* *andnotv32hi3 */
    case 3570:  /* *andnotv16qi3 */
    case 3569:  /* *andnotv32qi3 */
    case 3568:  /* *andnotv64qi3 */
    case 3567:  /* *andnotv8di3 */
    case 3566:  /* *andnotv16si3 */
    case 3050:  /* avx512vl_us_truncatev2div2si2 */
    case 3049:  /* avx512vl_truncatev2div2si2 */
    case 3048:  /* avx512vl_ss_truncatev2div2si2 */
    case 2993:  /* avx512vl_us_truncatev4siv4hi2 */
    case 2992:  /* avx512vl_truncatev4siv4hi2 */
    case 2991:  /* avx512vl_ss_truncatev4siv4hi2 */
    case 2990:  /* avx512vl_us_truncatev2div2hi2 */
    case 2989:  /* avx512vl_truncatev2div2hi2 */
    case 2988:  /* avx512vl_ss_truncatev2div2hi2 */
    case 2987:  /* avx512vl_us_truncatev4div4hi2 */
    case 2986:  /* avx512vl_truncatev4div4hi2 */
    case 2985:  /* avx512vl_ss_truncatev4div4hi2 */
    case 2894:  /* avx512vl_us_truncatev8hiv8qi2 */
    case 2893:  /* avx512vl_truncatev8hiv8qi2 */
    case 2892:  /* avx512vl_ss_truncatev8hiv8qi2 */
    case 2891:  /* avx512vl_us_truncatev4siv4qi2 */
    case 2890:  /* avx512vl_truncatev4siv4qi2 */
    case 2889:  /* avx512vl_ss_truncatev4siv4qi2 */
    case 2888:  /* avx512vl_us_truncatev8siv8qi2 */
    case 2887:  /* avx512vl_truncatev8siv8qi2 */
    case 2886:  /* avx512vl_ss_truncatev8siv8qi2 */
    case 2885:  /* avx512vl_us_truncatev2div2qi2 */
    case 2884:  /* avx512vl_truncatev2div2qi2 */
    case 2883:  /* avx512vl_ss_truncatev2div2qi2 */
    case 2882:  /* avx512vl_us_truncatev4div4qi2 */
    case 2881:  /* avx512vl_truncatev4div4qi2 */
    case 2880:  /* avx512vl_ss_truncatev4div4qi2 */
    case 2824:  /* sse2_loadhpd */
    case 2536:  /* sse_loadhps */
    case 2467:  /* *sse2_cvtpd2ps */
    case 2345:  /* *avx512dq_floatunsv2div2sf2 */
    case 2344:  /* *avx512dq_floatv2div2sf2 */
    case 1846:  /* *andnottf3 */
    case 1845:  /* *andnotdf3 */
    case 1844:  /* *andnotsf3 */
    case 1806:  /* avx512f_andnotv8df3 */
    case 1804:  /* avx512f_andnotv16sf3 */
    case 1802:  /* sse2_andnotv2df3 */
    case 1800:  /* avx_andnotv4df3 */
    case 1798:  /* sse_andnotv4sf3 */
    case 1796:  /* avx_andnotv8sf3 */
    case 1476:  /* sse2_vmsqrtv2df2 */
    case 1472:  /* sse_vmsqrtv4sf2 */
    case 1091:  /* mmx_andnotv2si3 */
    case 1090:  /* mmx_andnotv4hi3 */
    case 1089:  /* mmx_andnotv8qi3 */
    case 679:  /* *sibcall_value */
    case 678:  /* *sibcall_value */
    case 675:  /* *call_value */
    case 674:  /* *call_value */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 673:  /* *sibcall_pop_memory */
    case 672:  /* *sibcall_pop */
    case 671:  /* *call_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 666:  /* *sibcall_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      break;

    case 665:  /* *call_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 662:  /* *tablejump_1 */
    case 661:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 660:  /* *indirect_jump */
    case 659:  /* *indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 658:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 657:  /* *jcc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1667:  /* sse2_maskcmpv2df3 */
    case 1666:  /* avx_maskcmpv4df3 */
    case 1665:  /* sse_maskcmpv4sf3 */
    case 1664:  /* avx_maskcmpv8sf3 */
    case 1663:  /* *sse2_maskcmpv2df3_comm */
    case 1662:  /* *avx_maskcmpv4df3_comm */
    case 1661:  /* *sse_maskcmpv4sf3_comm */
    case 1660:  /* *avx_maskcmpv8sf3_comm */
    case 775:  /* *fop_df_1 */
    case 774:  /* *fop_sf_1 */
    case 773:  /* *fop_xf_1_i387 */
    case 771:  /* *fop_df_comm */
    case 770:  /* *fop_sf_comm */
    case 769:  /* *fop_xf_comm_i387 */
    case 656:  /* setcc_df_sse */
    case 655:  /* setcc_sf_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 648:  /* *jcc_btdi_mask */
    case 647:  /* *jcc_btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 646:  /* *jcc_btdi_1 */
    case 645:  /* *jcc_btsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 644:  /* *jcc_btdi */
    case 643:  /* *jcc_btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 642:  /* *btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 641:  /* *btrhi_2 */
    case 640:  /* *btrqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2), 0));
      break;

    case 734:  /* *bmi2_bzhi_si3_3 */
    case 733:  /* *bmi2_bzhi_si3_2 */
    case 639:  /* *btrhi_1 */
    case 638:  /* *btrqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 637:  /* *btrdi_mask_1 */
    case 636:  /* *btrsi_mask_1 */
    case 632:  /* *btcdi_mask_1 */
    case 631:  /* *btsdi_mask_1 */
    case 630:  /* *btcsi_mask_1 */
    case 629:  /* *btssi_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 635:  /* *btrdi_mask */
    case 634:  /* *btrsi_mask */
    case 628:  /* *btcdi_mask */
    case 627:  /* *btsdi_mask */
    case 626:  /* *btcsi_mask */
    case 625:  /* *btssi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 633:  /* *btrsi */
    case 624:  /* *btcsi */
    case 623:  /* *btssi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 609:  /* ix86_rotrdi3_doubleword */
    case 608:  /* ix86_rotldi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 4901:  /* avx_vec_concatv8df */
    case 4900:  /* avx_vec_concatv16sf */
    case 4899:  /* avx_vec_concatv8di */
    case 4898:  /* avx_vec_concatv16si */
    case 4897:  /* avx_vec_concatv32hi */
    case 4896:  /* avx_vec_concatv64qi */
    case 4895:  /* avx_vec_concatv4df */
    case 4894:  /* avx_vec_concatv8sf */
    case 4893:  /* avx_vec_concatv4di */
    case 4892:  /* avx_vec_concatv8si */
    case 4891:  /* avx_vec_concatv16hi */
    case 4890:  /* avx_vec_concatv32qi */
    case 4888:  /* avx512bw_lshrvv32hi */
    case 4886:  /* avx512bw_ashlvv32hi */
    case 4884:  /* avx512vl_lshrvv16hi */
    case 4882:  /* avx512vl_ashlvv16hi */
    case 4880:  /* avx512vl_lshrvv8hi */
    case 4878:  /* avx512vl_ashlvv8hi */
    case 4876:  /* avx2_lshrvv2di */
    case 4874:  /* avx2_ashlvv2di */
    case 4872:  /* avx2_lshrvv4di */
    case 4870:  /* avx2_ashlvv4di */
    case 4868:  /* avx512f_lshrvv8di */
    case 4866:  /* avx512f_ashlvv8di */
    case 4864:  /* avx2_lshrvv4si */
    case 4862:  /* avx2_ashlvv4si */
    case 4860:  /* avx2_lshrvv8si */
    case 4858:  /* avx2_ashlvv8si */
    case 4856:  /* avx512f_lshrvv16si */
    case 4854:  /* avx512f_ashlvv16si */
    case 4852:  /* avx512bw_ashrvv32hi */
    case 4850:  /* avx512vl_ashrvv16hi */
    case 4848:  /* avx512vl_ashrvv8hi */
    case 4846:  /* avx512f_ashrvv8di */
    case 4844:  /* avx2_ashrvv4di */
    case 4842:  /* avx2_ashrvv2di */
    case 4840:  /* avx512f_ashrvv16si */
    case 4838:  /* avx2_ashrvv8si */
    case 4836:  /* avx2_ashrvv4si */
    case 4442:  /* xop_rotrv2di3 */
    case 4441:  /* xop_rotrv4si3 */
    case 4440:  /* xop_rotrv8hi3 */
    case 4439:  /* xop_rotrv16qi3 */
    case 4438:  /* xop_rotlv2di3 */
    case 4437:  /* xop_rotlv4si3 */
    case 4436:  /* xop_rotlv8hi3 */
    case 4435:  /* xop_rotlv16qi3 */
    case 3971:  /* *vec_concatv2di_0 */
    case 3970:  /* vec_concatv2di */
    case 3969:  /* *vec_concatv4si_0 */
    case 3968:  /* *vec_concatv4si */
    case 3967:  /* *vec_concatv2si */
    case 3966:  /* *vec_concatv2si_sse4_1 */
    case 3637:  /* *xorv8hi3 */
    case 3636:  /* *iorv8hi3 */
    case 3635:  /* *andv8hi3 */
    case 3634:  /* *xorv16hi3 */
    case 3633:  /* *iorv16hi3 */
    case 3632:  /* *andv16hi3 */
    case 3631:  /* *xorv32hi3 */
    case 3630:  /* *iorv32hi3 */
    case 3629:  /* *andv32hi3 */
    case 3628:  /* *xorv16qi3 */
    case 3627:  /* *iorv16qi3 */
    case 3626:  /* *andv16qi3 */
    case 3625:  /* *xorv32qi3 */
    case 3624:  /* *iorv32qi3 */
    case 3623:  /* *andv32qi3 */
    case 3622:  /* *xorv64qi3 */
    case 3621:  /* *iorv64qi3 */
    case 3620:  /* *andv64qi3 */
    case 3618:  /* *xorv2di3 */
    case 3616:  /* *iorv2di3 */
    case 3614:  /* *andv2di3 */
    case 3612:  /* *xorv4di3 */
    case 3610:  /* *iorv4di3 */
    case 3608:  /* *andv4di3 */
    case 3606:  /* *xorv8di3 */
    case 3604:  /* *iorv8di3 */
    case 3602:  /* *andv8di3 */
    case 3600:  /* *xorv4si3 */
    case 3598:  /* *iorv4si3 */
    case 3596:  /* *andv4si3 */
    case 3594:  /* *xorv8si3 */
    case 3592:  /* *iorv8si3 */
    case 3590:  /* *andv8si3 */
    case 3588:  /* *xorv16si3 */
    case 3586:  /* *iorv16si3 */
    case 3584:  /* *andv16si3 */
    case 3564:  /* *one_cmplv2di2 */
    case 3562:  /* *one_cmplv4di2 */
    case 3560:  /* *one_cmplv4si2 */
    case 3558:  /* *one_cmplv8si2 */
    case 3557:  /* *one_cmplv8hi2 */
    case 3556:  /* *one_cmplv16hi2 */
    case 3555:  /* *one_cmplv32hi2 */
    case 3554:  /* *one_cmplv16qi2 */
    case 3553:  /* *one_cmplv32qi2 */
    case 3552:  /* *one_cmplv64qi2 */
    case 3550:  /* *one_cmplv8di2 */
    case 3548:  /* *one_cmplv16si2 */
    case 3547:  /* sse2_gtv4si3 */
    case 3546:  /* sse2_gtv8hi3 */
    case 3545:  /* sse2_gtv16qi3 */
    case 3544:  /* avx2_gtv4di3 */
    case 3543:  /* avx2_gtv8si3 */
    case 3542:  /* avx2_gtv16hi3 */
    case 3541:  /* avx2_gtv32qi3 */
    case 3540:  /* sse4_2_gtv2di3 */
    case 3539:  /* *sse2_eqv4si3 */
    case 3538:  /* *sse2_eqv8hi3 */
    case 3537:  /* *sse2_eqv16qi3 */
    case 3536:  /* *sse4_1_eqv2di3 */
    case 3495:  /* *avx2_eqv4di3 */
    case 3494:  /* *avx2_eqv8si3 */
    case 3493:  /* *avx2_eqv16hi3 */
    case 3492:  /* *avx2_eqv32qi3 */
    case 3491:  /* *uminv16qi3 */
    case 3490:  /* *umaxv16qi3 */
    case 3488:  /* *sse4_1_uminv4si3 */
    case 3486:  /* *sse4_1_umaxv4si3 */
    case 3484:  /* *sse4_1_uminv8hi3 */
    case 3482:  /* *sse4_1_umaxv8hi3 */
    case 3481:  /* *sminv8hi3 */
    case 3480:  /* *smaxv8hi3 */
    case 3478:  /* *sse4_1_sminv4si3 */
    case 3476:  /* *sse4_1_smaxv4si3 */
    case 3474:  /* *sse4_1_sminv16qi3 */
    case 3472:  /* *sse4_1_smaxv16qi3 */
    case 3470:  /* *uminv8hi3 */
    case 3468:  /* *umaxv8hi3 */
    case 3466:  /* *sminv8hi3 */
    case 3464:  /* *smaxv8hi3 */
    case 3462:  /* *uminv16hi3 */
    case 3460:  /* *umaxv16hi3 */
    case 3458:  /* *sminv16hi3 */
    case 3456:  /* *smaxv16hi3 */
    case 3454:  /* *uminv32hi3 */
    case 3452:  /* *umaxv32hi3 */
    case 3450:  /* *sminv32hi3 */
    case 3448:  /* *smaxv32hi3 */
    case 3446:  /* *uminv32qi3 */
    case 3444:  /* *umaxv32qi3 */
    case 3442:  /* *sminv32qi3 */
    case 3440:  /* *smaxv32qi3 */
    case 3438:  /* *uminv16qi3 */
    case 3436:  /* *umaxv16qi3 */
    case 3434:  /* *sminv16qi3 */
    case 3432:  /* *smaxv16qi3 */
    case 3430:  /* *uminv64qi3 */
    case 3428:  /* *umaxv64qi3 */
    case 3426:  /* *sminv64qi3 */
    case 3424:  /* *smaxv64qi3 */
    case 3422:  /* *avx512f_uminv2di3 */
    case 3420:  /* *avx512f_umaxv2di3 */
    case 3418:  /* *avx512f_sminv2di3 */
    case 3416:  /* *avx512f_smaxv2di3 */
    case 3414:  /* *avx512f_uminv4di3 */
    case 3412:  /* *avx512f_umaxv4di3 */
    case 3410:  /* *avx512f_sminv4di3 */
    case 3408:  /* *avx512f_smaxv4di3 */
    case 3406:  /* *avx512f_uminv8di3 */
    case 3404:  /* *avx512f_umaxv8di3 */
    case 3402:  /* *avx512f_sminv8di3 */
    case 3400:  /* *avx512f_smaxv8di3 */
    case 3398:  /* *avx512f_uminv4si3 */
    case 3396:  /* *avx512f_umaxv4si3 */
    case 3394:  /* *avx512f_sminv4si3 */
    case 3392:  /* *avx512f_smaxv4si3 */
    case 3390:  /* *avx512f_uminv8si3 */
    case 3388:  /* *avx512f_umaxv8si3 */
    case 3386:  /* *avx512f_sminv8si3 */
    case 3384:  /* *avx512f_smaxv8si3 */
    case 3382:  /* *avx512f_uminv16si3 */
    case 3380:  /* *avx512f_umaxv16si3 */
    case 3378:  /* *avx512f_sminv16si3 */
    case 3376:  /* *avx512f_smaxv16si3 */
    case 3375:  /* *avx2_uminv8si3 */
    case 3374:  /* *avx2_umaxv8si3 */
    case 3373:  /* *avx2_sminv8si3 */
    case 3372:  /* *avx2_smaxv8si3 */
    case 3371:  /* *avx2_uminv16hi3 */
    case 3370:  /* *avx2_umaxv16hi3 */
    case 3369:  /* *avx2_sminv16hi3 */
    case 3368:  /* *avx2_smaxv16hi3 */
    case 3367:  /* *avx2_uminv32qi3 */
    case 3366:  /* *avx2_umaxv32qi3 */
    case 3365:  /* *avx2_sminv32qi3 */
    case 3364:  /* *avx2_smaxv32qi3 */
    case 3362:  /* avx512vl_rorv2di */
    case 3360:  /* avx512vl_rolv2di */
    case 3358:  /* avx512vl_rorv4di */
    case 3356:  /* avx512vl_rolv4di */
    case 3354:  /* avx512f_rorv8di */
    case 3352:  /* avx512f_rolv8di */
    case 3350:  /* avx512vl_rorv4si */
    case 3348:  /* avx512vl_rolv4si */
    case 3346:  /* avx512vl_rorv8si */
    case 3344:  /* avx512vl_rolv8si */
    case 3342:  /* avx512f_rorv16si */
    case 3340:  /* avx512f_rolv16si */
    case 3338:  /* avx512vl_rorvv2di */
    case 3336:  /* avx512vl_rolvv2di */
    case 3334:  /* avx512vl_rorvv4di */
    case 3332:  /* avx512vl_rolvv4di */
    case 3330:  /* avx512f_rorvv8di */
    case 3328:  /* avx512f_rolvv8di */
    case 3326:  /* avx512vl_rorvv4si */
    case 3324:  /* avx512vl_rolvv4si */
    case 3322:  /* avx512vl_rorvv8si */
    case 3320:  /* avx512vl_rolvv8si */
    case 3318:  /* avx512f_rorvv16si */
    case 3316:  /* avx512f_rolvv16si */
    case 3315:  /* sse2_lshrv1ti3 */
    case 3314:  /* sse2_ashlv1ti3 */
    case 3313:  /* avx2_lshrv2ti3 */
    case 3312:  /* avx2_ashlv2ti3 */
    case 3311:  /* avx512bw_lshrv1ti3 */
    case 3310:  /* avx512bw_ashlv1ti3 */
    case 3309:  /* avx512bw_lshrv2ti3 */
    case 3308:  /* avx512bw_ashlv2ti3 */
    case 3307:  /* avx512bw_lshrv4ti3 */
    case 3306:  /* avx512bw_ashlv4ti3 */
    case 3304:  /* lshrv8di3 */
    case 3302:  /* ashlv8di3 */
    case 3300:  /* lshrv16si3 */
    case 3298:  /* ashlv16si3 */
    case 3296:  /* lshrv32hi3 */
    case 3294:  /* ashlv32hi3 */
    case 3293:  /* lshrv2di3 */
    case 3292:  /* ashlv2di3 */
    case 3291:  /* lshrv4di3 */
    case 3290:  /* ashlv4di3 */
    case 3289:  /* lshrv4si3 */
    case 3288:  /* ashlv4si3 */
    case 3287:  /* lshrv8si3 */
    case 3286:  /* ashlv8si3 */
    case 3285:  /* lshrv8hi3 */
    case 3284:  /* ashlv8hi3 */
    case 3283:  /* lshrv16hi3 */
    case 3282:  /* ashlv16hi3 */
    case 3280:  /* *lshrv2di3 */
    case 3278:  /* *ashlv2di3 */
    case 3276:  /* *lshrv4di3 */
    case 3274:  /* *ashlv4di3 */
    case 3272:  /* *lshrv4si3 */
    case 3270:  /* *ashlv4si3 */
    case 3268:  /* *lshrv8si3 */
    case 3266:  /* *ashlv8si3 */
    case 3264:  /* *lshrv8hi3 */
    case 3262:  /* *ashlv8hi3 */
    case 3260:  /* *lshrv16hi3 */
    case 3258:  /* *ashlv16hi3 */
    case 3256:  /* ashrv8di3 */
    case 3254:  /* ashrv16si3 */
    case 3252:  /* ashrv4di3 */
    case 3250:  /* ashrv32hi3 */
    case 3249:  /* ashrv4si3 */
    case 3248:  /* ashrv8si3 */
    case 3247:  /* ashrv8hi3 */
    case 3246:  /* ashrv16hi3 */
    case 3244:  /* *ashrv2di3 */
    case 3242:  /* *ashrv4si3 */
    case 3240:  /* *ashrv8si3 */
    case 3238:  /* *ashrv8hi3 */
    case 3236:  /* *ashrv16hi3 */
    case 3234:  /* *sse4_1_mulv4si3 */
    case 3232:  /* *avx2_mulv8si3 */
    case 3230:  /* *avx512f_mulv16si3 */
    case 3228:  /* avx512dq_mulv2di3 */
    case 3226:  /* avx512dq_mulv4di3 */
    case 3224:  /* avx512dq_mulv8di3 */
    case 3190:  /* *mulv8hi3 */
    case 3188:  /* *mulv16hi3 */
    case 3186:  /* *mulv32hi3 */
    case 3184:  /* *sse2_ussubv8hi3 */
    case 3182:  /* *sse2_sssubv8hi3 */
    case 3180:  /* *sse2_usaddv8hi3 */
    case 3178:  /* *sse2_ssaddv8hi3 */
    case 3176:  /* *avx2_ussubv16hi3 */
    case 3174:  /* *avx2_sssubv16hi3 */
    case 3172:  /* *avx2_usaddv16hi3 */
    case 3170:  /* *avx2_ssaddv16hi3 */
    case 3168:  /* *avx512bw_ussubv32hi3 */
    case 3166:  /* *avx512bw_sssubv32hi3 */
    case 3164:  /* *avx512bw_usaddv32hi3 */
    case 3162:  /* *avx512bw_ssaddv32hi3 */
    case 3160:  /* *sse2_ussubv16qi3 */
    case 3158:  /* *sse2_sssubv16qi3 */
    case 3156:  /* *sse2_usaddv16qi3 */
    case 3154:  /* *sse2_ssaddv16qi3 */
    case 3152:  /* *avx2_ussubv32qi3 */
    case 3150:  /* *avx2_sssubv32qi3 */
    case 3148:  /* *avx2_usaddv32qi3 */
    case 3146:  /* *avx2_ssaddv32qi3 */
    case 3144:  /* *avx512bw_ussubv64qi3 */
    case 3142:  /* *avx512bw_sssubv64qi3 */
    case 3140:  /* *avx512bw_usaddv64qi3 */
    case 3138:  /* *avx512bw_ssaddv64qi3 */
    case 3113:  /* *subv2di3 */
    case 3112:  /* *addv2di3 */
    case 3111:  /* *subv4di3 */
    case 3110:  /* *addv4di3 */
    case 3109:  /* *subv8di3 */
    case 3108:  /* *addv8di3 */
    case 3107:  /* *subv4si3 */
    case 3106:  /* *addv4si3 */
    case 3105:  /* *subv8si3 */
    case 3104:  /* *addv8si3 */
    case 3103:  /* *subv16si3 */
    case 3102:  /* *addv16si3 */
    case 3101:  /* *subv8hi3 */
    case 3100:  /* *addv8hi3 */
    case 3099:  /* *subv16hi3 */
    case 3098:  /* *addv16hi3 */
    case 3097:  /* *subv32hi3 */
    case 3096:  /* *addv32hi3 */
    case 3095:  /* *subv16qi3 */
    case 3094:  /* *addv16qi3 */
    case 3093:  /* *subv32qi3 */
    case 3092:  /* *addv32qi3 */
    case 3091:  /* *subv64qi3 */
    case 3090:  /* *addv64qi3 */
    case 2829:  /* vec_concatv2df */
    case 2548:  /* *vec_concatv4sf_0 */
    case 2547:  /* *vec_concatv4sf */
    case 2546:  /* *vec_concatv2sf_sse */
    case 2545:  /* *vec_concatv2sf_sse4_1 */
    case 1855:  /* *xortf3 */
    case 1854:  /* *iortf3 */
    case 1853:  /* *andtf3 */
    case 1852:  /* *xordf3 */
    case 1851:  /* *iordf3 */
    case 1850:  /* *anddf3 */
    case 1849:  /* *xorsf3 */
    case 1848:  /* *iorsf3 */
    case 1847:  /* *andsf3 */
    case 1842:  /* *xorv8df3 */
    case 1840:  /* *iorv8df3 */
    case 1838:  /* *andv8df3 */
    case 1836:  /* *xorv16sf3 */
    case 1834:  /* *iorv16sf3 */
    case 1832:  /* *andv16sf3 */
    case 1830:  /* *xorv2df3 */
    case 1828:  /* *iorv2df3 */
    case 1826:  /* *andv2df3 */
    case 1824:  /* *xorv4df3 */
    case 1822:  /* *iorv4df3 */
    case 1820:  /* *andv4df3 */
    case 1818:  /* *xorv4sf3 */
    case 1816:  /* *iorv4sf3 */
    case 1814:  /* *andv4sf3 */
    case 1812:  /* *xorv8sf3 */
    case 1810:  /* *iorv8sf3 */
    case 1808:  /* *andv8sf3 */
    case 1538:  /* *sminv2df3 */
    case 1536:  /* *smaxv2df3 */
    case 1534:  /* *sminv4df3 */
    case 1532:  /* *smaxv4df3 */
    case 1528:  /* *sminv8df3 */
    case 1524:  /* *smaxv8df3 */
    case 1522:  /* *sminv4sf3 */
    case 1520:  /* *smaxv4sf3 */
    case 1518:  /* *sminv8sf3 */
    case 1516:  /* *smaxv8sf3 */
    case 1512:  /* *sminv16sf3 */
    case 1508:  /* *smaxv16sf3 */
    case 1434:  /* sse2_divv2df3 */
    case 1432:  /* avx_divv4df3 */
    case 1428:  /* avx512f_divv8df3 */
    case 1426:  /* sse_divv4sf3 */
    case 1424:  /* avx_divv8sf3 */
    case 1420:  /* avx512f_divv16sf3 */
    case 1396:  /* *mulv2df3 */
    case 1392:  /* *mulv4df3 */
    case 1388:  /* *mulv8df3 */
    case 1384:  /* *mulv4sf3 */
    case 1380:  /* *mulv8sf3 */
    case 1376:  /* *mulv16sf3 */
    case 1352:  /* *subv2df3 */
    case 1348:  /* *addv2df3 */
    case 1344:  /* *subv4df3 */
    case 1340:  /* *addv4df3 */
    case 1336:  /* *subv8df3 */
    case 1332:  /* *addv8df3 */
    case 1328:  /* *subv4sf3 */
    case 1324:  /* *addv4sf3 */
    case 1320:  /* *subv8sf3 */
    case 1316:  /* *addv8sf3 */
    case 1312:  /* *subv16sf3 */
    case 1308:  /* *addv16sf3 */
    case 1117:  /* *mmx_concatv2si */
    case 1100:  /* *mmx_xorv2si3 */
    case 1099:  /* *mmx_iorv2si3 */
    case 1098:  /* *mmx_andv2si3 */
    case 1097:  /* *mmx_xorv4hi3 */
    case 1096:  /* *mmx_iorv4hi3 */
    case 1095:  /* *mmx_andv4hi3 */
    case 1094:  /* *mmx_xorv8qi3 */
    case 1093:  /* *mmx_iorv8qi3 */
    case 1092:  /* *mmx_andv8qi3 */
    case 1088:  /* mmx_gtv2si3 */
    case 1087:  /* mmx_gtv4hi3 */
    case 1086:  /* mmx_gtv8qi3 */
    case 1085:  /* *mmx_eqv2si3 */
    case 1084:  /* *mmx_eqv4hi3 */
    case 1083:  /* *mmx_eqv8qi3 */
    case 1082:  /* mmx_lshrv1di3 */
    case 1081:  /* mmx_ashlv1di3 */
    case 1080:  /* mmx_lshrv2si3 */
    case 1079:  /* mmx_ashlv2si3 */
    case 1078:  /* mmx_lshrv4hi3 */
    case 1077:  /* mmx_ashlv4hi3 */
    case 1076:  /* mmx_ashrv2si3 */
    case 1075:  /* mmx_ashrv4hi3 */
    case 1074:  /* *mmx_uminv8qi3 */
    case 1073:  /* *mmx_umaxv8qi3 */
    case 1072:  /* *mmx_sminv4hi3 */
    case 1071:  /* *mmx_smaxv4hi3 */
    case 1065:  /* *mmx_mulv4hi3 */
    case 1064:  /* *mmx_ussubv4hi3 */
    case 1063:  /* *mmx_sssubv4hi3 */
    case 1062:  /* *mmx_usaddv4hi3 */
    case 1061:  /* *mmx_ssaddv4hi3 */
    case 1060:  /* *mmx_ussubv8qi3 */
    case 1059:  /* *mmx_sssubv8qi3 */
    case 1058:  /* *mmx_usaddv8qi3 */
    case 1057:  /* *mmx_ssaddv8qi3 */
    case 1056:  /* *mmx_subv1di3 */
    case 1055:  /* *mmx_addv1di3 */
    case 1054:  /* *mmx_subv2si3 */
    case 1053:  /* *mmx_addv2si3 */
    case 1052:  /* *mmx_subv4hi3 */
    case 1051:  /* *mmx_addv4hi3 */
    case 1050:  /* *mmx_subv8qi3 */
    case 1049:  /* *mmx_addv8qi3 */
    case 1046:  /* *mmx_concatv2sf */
    case 1039:  /* mmx_gev2sf3 */
    case 1038:  /* mmx_gtv2sf3 */
    case 1037:  /* *mmx_eqv2sf3 */
    case 1026:  /* *mmx_sminv2sf3 */
    case 1025:  /* *mmx_smaxv2sf3 */
    case 1024:  /* *mmx_mulv2sf3 */
    case 1023:  /* *mmx_subv2sf3 */
    case 1022:  /* *mmx_addv2sf3 */
    case 889:  /* smindf3 */
    case 888:  /* smaxdf3 */
    case 887:  /* sminsf3 */
    case 886:  /* smaxsf3 */
    case 610:  /* *bmi2_rorxsi3_1 */
    case 571:  /* *bmi2_ashrsi3_1 */
    case 570:  /* *bmi2_lshrsi3_1 */
    case 534:  /* *bmi2_ashlsi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 567:  /* x86_shrd */
    case 529:  /* x86_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 607:  /* *rotrdi3_mask_1 */
    case 606:  /* *rotldi3_mask_1 */
    case 605:  /* *rotrsi3_mask_1 */
    case 604:  /* *rotlsi3_mask_1 */
    case 564:  /* *ashrti3_doubleword_mask_1 */
    case 563:  /* *lshrti3_doubleword_mask_1 */
    case 562:  /* *ashrdi3_doubleword_mask_1 */
    case 561:  /* *lshrdi3_doubleword_mask_1 */
    case 556:  /* *ashrdi3_mask_1 */
    case 555:  /* *lshrdi3_mask_1 */
    case 554:  /* *ashrsi3_mask_1 */
    case 553:  /* *lshrsi3_mask_1 */
    case 533:  /* *ashldi3_mask_1 */
    case 532:  /* *ashlsi3_mask_1 */
    case 527:  /* *ashlti3_doubleword_mask_1 */
    case 526:  /* *ashldi3_doubleword_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 603:  /* *rotrdi3_mask */
    case 602:  /* *rotldi3_mask */
    case 601:  /* *rotrsi3_mask */
    case 600:  /* *rotlsi3_mask */
    case 560:  /* *ashrti3_doubleword_mask */
    case 559:  /* *lshrti3_doubleword_mask */
    case 558:  /* *ashrdi3_doubleword_mask */
    case 557:  /* *lshrdi3_doubleword_mask */
    case 552:  /* *ashrdi3_mask */
    case 551:  /* *lshrdi3_mask */
    case 550:  /* *ashrsi3_mask */
    case 549:  /* *lshrsi3_mask */
    case 531:  /* *ashldi3_mask */
    case 530:  /* *ashlsi3_mask */
    case 525:  /* *ashlti3_doubleword_mask */
    case 524:  /* *ashldi3_doubleword_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      break;

    case 512:  /* copysigntf3_var */
    case 511:  /* copysigndf3_var */
    case 510:  /* copysignsf3_var */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      break;

    case 5565:  /* avx512f_dpbf16ps_v4sf */
    case 5563:  /* avx512f_dpbf16ps_v8sf */
    case 5561:  /* avx512f_dpbf16ps_v16sf */
    case 5534:  /* vpclmulqdq_v2di */
    case 5533:  /* vpclmulqdq_v4di */
    case 5532:  /* vpclmulqdq_v8di */
    case 5513:  /* vpdpwssds_v4si */
    case 5512:  /* vpdpwssds_v8si */
    case 5511:  /* vpdpwssds_v16si */
    case 5504:  /* vpdpwssd_v4si */
    case 5503:  /* vpdpwssd_v8si */
    case 5502:  /* vpdpwssd_v16si */
    case 5495:  /* vpdpbusds_v4si */
    case 5494:  /* vpdpbusds_v8si */
    case 5493:  /* vpdpbusds_v16si */
    case 5486:  /* vpdpbusd_v4si */
    case 5485:  /* vpdpbusd_v8si */
    case 5484:  /* vpdpbusd_v16si */
    case 5465:  /* vpshldv_v2di */
    case 5464:  /* vpshldv_v4si */
    case 5463:  /* vpshldv_v8hi */
    case 5462:  /* vpshldv_v4di */
    case 5461:  /* vpshldv_v8si */
    case 5460:  /* vpshldv_v16hi */
    case 5459:  /* vpshldv_v8di */
    case 5458:  /* vpshldv_v16si */
    case 5457:  /* vpshldv_v32hi */
    case 5438:  /* vpshrdv_v2di */
    case 5437:  /* vpshrdv_v4si */
    case 5436:  /* vpshrdv_v8hi */
    case 5435:  /* vpshrdv_v4di */
    case 5434:  /* vpshrdv_v8si */
    case 5433:  /* vpshrdv_v16hi */
    case 5432:  /* vpshrdv_v8di */
    case 5431:  /* vpshrdv_v16si */
    case 5430:  /* vpshrdv_v32hi */
    case 5428:  /* vpshld_v2di */
    case 5426:  /* vpshld_v4si */
    case 5424:  /* vpshld_v8hi */
    case 5422:  /* vpshld_v4di */
    case 5420:  /* vpshld_v8si */
    case 5418:  /* vpshld_v16hi */
    case 5416:  /* vpshld_v8di */
    case 5414:  /* vpshld_v16si */
    case 5412:  /* vpshld_v32hi */
    case 5410:  /* vpshrd_v2di */
    case 5408:  /* vpshrd_v4si */
    case 5406:  /* vpshrd_v8hi */
    case 5404:  /* vpshrd_v4di */
    case 5402:  /* vpshrd_v8si */
    case 5400:  /* vpshrd_v16hi */
    case 5398:  /* vpshrd_v8di */
    case 5396:  /* vpshrd_v16si */
    case 5394:  /* vpshrd_v32hi */
    case 5386:  /* vgf2p8affineqb_v16qi */
    case 5384:  /* vgf2p8affineqb_v32qi */
    case 5382:  /* vgf2p8affineqb_v64qi */
    case 5380:  /* vgf2p8affineinvqb_v16qi */
    case 5378:  /* vgf2p8affineinvqb_v32qi */
    case 5376:  /* vgf2p8affineinvqb_v64qi */
    case 5349:  /* avx5124vnniw_vp4dpwssds */
    case 5346:  /* avx5124vnniw_vp4dpwssd */
    case 5343:  /* avx5124fmaddps_4fnmaddss */
    case 5340:  /* avx5124fmaddps_4fnmaddps */
    case 5337:  /* avx5124fmaddps_4fmaddss */
    case 5334:  /* avx5124fmaddps_4fmaddps */
    case 5318:  /* vpamdd52huqv2di */
    case 5316:  /* vpamdd52luqv2di */
    case 5314:  /* vpamdd52huqv4di */
    case 5312:  /* vpamdd52luqv4di */
    case 5310:  /* vpamdd52huqv8di */
    case 5308:  /* vpamdd52luqv8di */
    case 5301:  /* sha256rnds2 */
    case 5298:  /* sha1rnds4 */
    case 5269:  /* *avx512bw_dbpsadbwv32hi */
    case 5267:  /* *avx512bw_dbpsadbwv16hi */
    case 5265:  /* *avx512bw_dbpsadbwv8hi */
    case 5207:  /* avx512dq_rangepv2df */
    case 5205:  /* avx512dq_rangepv4df */
    case 5201:  /* avx512dq_rangepv8df */
    case 5199:  /* avx512dq_rangepv4sf */
    case 5197:  /* avx512dq_rangepv8sf */
    case 5193:  /* avx512dq_rangepv16sf */
    case 5192:  /* expandv8hi_mask */
    case 5191:  /* expandv16hi_mask */
    case 5190:  /* expandv32hi_mask */
    case 5189:  /* expandv32qi_mask */
    case 5188:  /* expandv16qi_mask */
    case 5187:  /* expandv64qi_mask */
    case 5186:  /* avx512vl_expandv2df_mask */
    case 5185:  /* avx512vl_expandv2di_mask */
    case 5184:  /* avx512vl_expandv4sf_mask */
    case 5183:  /* avx512vl_expandv4si_mask */
    case 5182:  /* avx512vl_expandv4df_mask */
    case 5181:  /* avx512vl_expandv4di_mask */
    case 5180:  /* avx512vl_expandv8sf_mask */
    case 5179:  /* avx512vl_expandv8si_mask */
    case 5178:  /* avx512f_expandv8df_mask */
    case 5177:  /* avx512f_expandv8di_mask */
    case 5176:  /* avx512f_expandv16sf_mask */
    case 5175:  /* avx512f_expandv16si_mask */
    case 5156:  /* compressv8hi_mask */
    case 5155:  /* compressv16hi_mask */
    case 5154:  /* compressv32hi_mask */
    case 5153:  /* compressv32qi_mask */
    case 5152:  /* compressv16qi_mask */
    case 5151:  /* compressv64qi_mask */
    case 5150:  /* avx512vl_compressv2df_mask */
    case 5149:  /* avx512vl_compressv2di_mask */
    case 5148:  /* avx512vl_compressv4sf_mask */
    case 5147:  /* avx512vl_compressv4si_mask */
    case 5146:  /* avx512vl_compressv4df_mask */
    case 5145:  /* avx512vl_compressv4di_mask */
    case 5144:  /* avx512vl_compressv8sf_mask */
    case 5143:  /* avx512vl_compressv8si_mask */
    case 5142:  /* avx512f_compressv8df_mask */
    case 5141:  /* avx512f_compressv8di_mask */
    case 5140:  /* avx512f_compressv16sf_mask */
    case 5139:  /* avx512f_compressv16si_mask */
    case 4787:  /* *avx_vperm2f128v4df_full */
    case 4786:  /* *avx_vperm2f128v8sf_full */
    case 4785:  /* *avx_vperm2f128v8si_full */
    case 4765:  /* avx512vl_vpermt2varv16qi3 */
    case 4763:  /* avx512vl_vpermt2varv32qi3 */
    case 4761:  /* avx512bw_vpermt2varv64qi3 */
    case 4759:  /* avx512vl_vpermt2varv8hi3 */
    case 4757:  /* avx512vl_vpermt2varv16hi3 */
    case 4755:  /* avx512bw_vpermt2varv32hi3 */
    case 4753:  /* avx512vl_vpermt2varv2df3 */
    case 4751:  /* avx512vl_vpermt2varv2di3 */
    case 4749:  /* avx512vl_vpermt2varv4sf3 */
    case 4747:  /* avx512vl_vpermt2varv4si3 */
    case 4745:  /* avx512vl_vpermt2varv4df3 */
    case 4743:  /* avx512vl_vpermt2varv4di3 */
    case 4741:  /* avx512vl_vpermt2varv8sf3 */
    case 4739:  /* avx512vl_vpermt2varv8si3 */
    case 4737:  /* avx512f_vpermt2varv8df3 */
    case 4735:  /* avx512f_vpermt2varv8di3 */
    case 4733:  /* avx512f_vpermt2varv16sf3 */
    case 4731:  /* avx512f_vpermt2varv16si3 */
    case 4560:  /* avx2_permv2ti */
    case 4489:  /* pclmulqdq */
    case 4478:  /* xop_pcom_tfv2di3 */
    case 4477:  /* xop_pcom_tfv4si3 */
    case 4476:  /* xop_pcom_tfv8hi3 */
    case 4475:  /* xop_pcom_tfv16qi3 */
    case 4431:  /* xop_pperm */
    case 4142:  /* sse4_1_pblendvb */
    case 4141:  /* avx2_pblendvb */
    case 4134:  /* sse4_1_mpsadbw */
    case 4133:  /* avx2_mpsadbw */
    case 4129:  /* sse4_1_dppd */
    case 4128:  /* avx_dppd256 */
    case 4127:  /* sse4_1_dpps */
    case 4126:  /* avx_dpps256 */
    case 4117:  /* sse4_1_blendvsd */
    case 4116:  /* sse4_1_blendvss */
    case 4115:  /* sse4_1_blendvpd */
    case 4114:  /* avx_blendvpd256 */
    case 4113:  /* sse4_1_blendvps */
    case 4112:  /* avx_blendvps256 */
    case 4104:  /* sse4a_extrqi */
    case 4072:  /* ssse3_palignrdi */
    case 4071:  /* ssse3_palignrti */
    case 4070:  /* avx2_palignrv2ti */
    case 4069:  /* avx512bw_palignrv4ti */
    case 2713:  /* *avx512vl_alignv2di */
    case 2711:  /* *avx512vl_alignv4di */
    case 2709:  /* *avx512f_alignv8di */
    case 2707:  /* *avx512vl_alignv4si */
    case 2705:  /* *avx512vl_alignv8si */
    case 2703:  /* *avx512f_alignv16si */
    case 2062:  /* *fma_fmaddsub_v2df */
    case 2060:  /* *fma_fmaddsub_v4df */
    case 2056:  /* *fma_fmaddsub_v8df */
    case 2055:  /* *fma_fmaddsub_df */
    case 2053:  /* *fma_fmaddsub_v4sf */
    case 2051:  /* *fma_fmaddsub_v8sf */
    case 2047:  /* *fma_fmaddsub_v16sf */
    case 2046:  /* *fma_fmaddsub_sf */
    case 2045:  /* *fma_fmaddsub_v2df */
    case 2044:  /* *fma_fmaddsub_v4df */
    case 2043:  /* *fma_fmaddsub_v4sf */
    case 2042:  /* *fma_fmaddsub_v8sf */
    case 1760:  /* avx512vl_ucmpv2di3 */
    case 1758:  /* avx512vl_ucmpv4di3 */
    case 1756:  /* avx512f_ucmpv8di3 */
    case 1754:  /* avx512vl_ucmpv4si3 */
    case 1752:  /* avx512vl_ucmpv8si3 */
    case 1750:  /* avx512f_ucmpv16si3 */
    case 1748:  /* avx512vl_ucmpv8hi3 */
    case 1746:  /* avx512vl_ucmpv16hi3 */
    case 1744:  /* avx512bw_ucmpv32hi3 */
    case 1742:  /* avx512vl_ucmpv32qi3 */
    case 1740:  /* avx512vl_ucmpv16qi3 */
    case 1738:  /* avx512bw_ucmpv64qi3 */
    case 1724:  /* avx512vl_cmpv8hi3 */
    case 1722:  /* avx512vl_cmpv16hi3 */
    case 1720:  /* avx512bw_cmpv32hi3 */
    case 1718:  /* avx512vl_cmpv32qi3 */
    case 1716:  /* avx512vl_cmpv16qi3 */
    case 1714:  /* avx512bw_cmpv64qi3 */
    case 1700:  /* avx512vl_cmpv2df3 */
    case 1698:  /* avx512vl_cmpv4df3 */
    case 1694:  /* avx512f_cmpv8df3 */
    case 1692:  /* avx512vl_cmpv4sf3 */
    case 1690:  /* avx512vl_cmpv8sf3 */
    case 1686:  /* avx512f_cmpv16sf3 */
    case 1684:  /* avx512vl_cmpv2di3 */
    case 1682:  /* avx512vl_cmpv4di3 */
    case 1678:  /* avx512f_cmpv8di3 */
    case 1676:  /* avx512vl_cmpv4si3 */
    case 1674:  /* avx512vl_cmpv8si3 */
    case 1670:  /* avx512f_cmpv16si3 */
    case 1641:  /* avx_cmpv2df3 */
    case 1640:  /* avx_cmpv4df3 */
    case 1639:  /* avx_cmpv4sf3 */
    case 1638:  /* avx_cmpv8sf3 */
    case 514:  /* xorsigndf3_1 */
    case 513:  /* xorsignsf3_1 */
    case 509:  /* copysigntf3_const */
    case 508:  /* copysigndf3_const */
    case 507:  /* copysignsf3_const */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1307:  /* *nabsv2df2 */
    case 1306:  /* *nabsv4df2 */
    case 1305:  /* *nabsv8df2 */
    case 1304:  /* *nabsv4sf2 */
    case 1303:  /* *nabsv8sf2 */
    case 1302:  /* *nabsv16sf2 */
    case 500:  /* *nabsdf2_1 */
    case 499:  /* *nabssf2_1 */
    case 488:  /* *nabstf2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 479:  /* *negvdi3 */
    case 478:  /* *negvsi3 */
    case 477:  /* *negvhi3 */
    case 476:  /* *negvqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 475:  /* *negsi_ccc_2 */
    case 474:  /* *neghi_ccc_2 */
    case 473:  /* *negqi_ccc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 706:  /* *bsfsi_1 */
    case 704:  /* *tzcntsi_1 */
    case 472:  /* *negsi_ccc_1 */
    case 471:  /* *neghi_ccc_1 */
    case 470:  /* *negqi_ccc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 523:  /* *one_cmpldi2_2 */
    case 522:  /* *one_cmplsi2_2 */
    case 521:  /* *one_cmplhi2_2 */
    case 520:  /* *one_cmplqi2_2 */
    case 469:  /* *negdi_2 */
    case 468:  /* *negsi_2 */
    case 467:  /* *neghi_2 */
    case 466:  /* *negqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 414:  /* *andn_di_ccno */
    case 413:  /* *andn_si_ccno */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1257:  /* kandndi */
    case 1256:  /* kandnsi */
    case 1255:  /* kandnhi */
    case 1254:  /* kandnqi */
    case 681:  /* *sibcall_value_memory */
    case 680:  /* *sibcall_value_memory */
    case 412:  /* *andnhi_1 */
    case 411:  /* *andnqi_1 */
    case 410:  /* *andnsi_1 */
    case 409:  /* *andndi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 459:  /* *xorqi_extdi_1_cc */
    case 458:  /* *xorqi_extsi_1_cc */
    case 457:  /* *xorqi_exthi_1_cc */
    case 405:  /* *andqi_extdi_1_cc */
    case 404:  /* *andqi_extsi_1_cc */
    case 403:  /* *andqi_exthi_1_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 389:  /* *testqi_ext_3 */
    case 388:  /* *testqi_ext_3 */
    case 387:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 386:  /* *testqi_extdi_2 */
    case 385:  /* *testqi_extsi_2 */
    case 384:  /* *testqi_exthi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      break;

    case 383:  /* *testqi_extdi_1 */
    case 382:  /* *testqi_extsi_1 */
    case 381:  /* *testqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 376:  /* udivmodhiqi3 */
    case 375:  /* divmodhiqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 374:  /* *udivmodsi4_noext */
    case 373:  /* *divmodsi4_noext */
    case 372:  /* *udivmodhi4_noext */
    case 371:  /* *divmodhi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 370:  /* *udivmoddi4_pow2 */
    case 369:  /* *udivmodsi4_pow2 */
    case 368:  /* *udivmodsi4 */
    case 367:  /* *udivmodhi4 */
    case 366:  /* *divmodsi4 */
    case 365:  /* *divmodhi4 */
    case 364:  /* udivmodsi4_1 */
    case 363:  /* divmodsi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 362:  /* *umulsi3_highpart_1 */
    case 361:  /* *smulsi3_highpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 360:  /* *umulqihi3_1 */
    case 359:  /* *mulqihi3_1 */
    case 358:  /* *mulsidi3_1 */
    case 357:  /* *umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 356:  /* *bmi2_umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 353:  /* *umulvsi4 */
    case 352:  /* *umulvhi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 344:  /* *subdi3_ne_0 */
    case 343:  /* *subsi3_ne_0 */
    case 342:  /* *subhi3_ne_0 */
    case 341:  /* *subqi3_ne_0 */
    case 340:  /* *subdi3_eq_0 */
    case 339:  /* *subsi3_eq_0 */
    case 338:  /* *subhi3_eq_0 */
    case 337:  /* *subqi3_eq_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 336:  /* *subdi3_eq_1 */
    case 335:  /* *subsi3_eq_1 */
    case 334:  /* *subhi3_eq_1 */
    case 333:  /* *subqi3_eq_1 */
    case 332:  /* *subdi3_ne */
    case 331:  /* *subsi3_ne */
    case 330:  /* *subhi3_ne */
    case 329:  /* *subqi3_ne */
    case 328:  /* *subdi3_eq */
    case 327:  /* *subsi3_eq */
    case 326:  /* *subhi3_eq */
    case 325:  /* *subqi3_eq */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 324:  /* *adddi3_ne_0 */
    case 323:  /* *addsi3_ne_0 */
    case 322:  /* *addhi3_ne_0 */
    case 321:  /* *addqi3_ne_0 */
    case 320:  /* *adddi3_eq_0 */
    case 319:  /* *addsi3_eq_0 */
    case 318:  /* *addhi3_eq_0 */
    case 317:  /* *addqi3_eq_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 316:  /* *adddi3_ne */
    case 315:  /* *addsi3_ne */
    case 314:  /* *addhi3_ne */
    case 313:  /* *addqi3_ne */
    case 312:  /* *adddi3_eq */
    case 311:  /* *addsi3_eq */
    case 310:  /* *addhi3_eq */
    case 309:  /* *addqi3_eq */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 306:  /* *adddi3_cc_overflow_2 */
    case 305:  /* *addsi3_cc_overflow_2 */
    case 304:  /* *addhi3_cc_overflow_2 */
    case 303:  /* *addqi3_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 302:  /* *addsi3_cconly_overflow_2 */
    case 301:  /* *addhi3_cconly_overflow_2 */
    case 300:  /* *addqi3_cconly_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 308:  /* *addti3_doubleword_cc_overflow_1 */
    case 307:  /* *adddi3_doubleword_cc_overflow_1 */
    case 299:  /* *adddi3_cc_overflow_1 */
    case 298:  /* *addsi3_cc_overflow_1 */
    case 297:  /* *addhi3_cc_overflow_1 */
    case 296:  /* *addqi3_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 295:  /* *addsi3_cconly_overflow_1 */
    case 294:  /* *addhi3_cconly_overflow_1 */
    case 293:  /* *addqi3_cconly_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1128:  /* *mmx_femms */
    case 1127:  /* *mmx_emms */
    case 1013:  /* serialize */
    case 1012:  /* speculation_barrier */
    case 1002:  /* xresldtrk */
    case 1001:  /* xsusldtrk */
    case 997:  /* wbnoinvd */
    case 996:  /* wbinvd */
    case 985:  /* xtest_1 */
    case 983:  /* xend */
    case 981:  /* nop_endbr */
    case 979:  /* setssbsy */
    case 975:  /* saveprevssp */
    case 960:  /* fnclex */
    case 931:  /* ud2 */
    case 930:  /* trap */
    case 846:  /* cld */
    case 701:  /* *leave */
    case 700:  /* eh_return_internal */
    case 694:  /* nop */
    case 690:  /* simple_return_internal_long */
    case 689:  /* interrupt_return */
    case 688:  /* simple_return_internal */
    case 685:  /* blockage */
    case 292:  /* *setcc_qi_addqi3_cconly_overflow_1_ccc */
    case 291:  /* *setcc_qi_addqi3_cconly_overflow_1_cc */
      break;

    case 290:  /* subborrowdi */
    case 289:  /* subborrowsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 288:  /* subsi3_carry_ccgz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 287:  /* *subsi3_carry_ccc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 286:  /* subsi3_carry_ccc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      break;

    case 285:  /* *subdi3_carry_0 */
    case 284:  /* *subsi3_carry_0 */
    case 283:  /* *subhi3_carry_0 */
    case 282:  /* *subqi3_carry_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 281:  /* subdi3_carry */
    case 280:  /* subsi3_carry */
    case 279:  /* subhi3_carry */
    case 278:  /* subqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 277:  /* *addcarrydi_1 */
    case 276:  /* *addcarrysi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0);
      recog_data.dup_num[4] = 3;
      break;

    case 275:  /* addcarrydi */
    case 274:  /* addcarrysi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 273:  /* *adddi3_carry_0 */
    case 272:  /* *addsi3_carry_0 */
    case 271:  /* *addhi3_carry_0 */
    case 270:  /* *addqi3_carry_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 269:  /* adddi3_carry */
    case 268:  /* addsi3_carry */
    case 267:  /* addhi3_carry */
    case 266:  /* addqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 265:  /* *subdi_3 */
    case 264:  /* *subsi_3 */
    case 263:  /* *subhi_3 */
    case 262:  /* *subqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 261:  /* *subvdi4_overflow_2 */
    case 260:  /* *subvsi4_overflow_2 */
    case 259:  /* *subvhi4_overflow_2 */
    case 258:  /* *subvqi4_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 257:  /* *subvdi4_overflow_1 */
    case 256:  /* *subvsi4_overflow_1 */
    case 255:  /* *subvhi4_overflow_1 */
    case 254:  /* *subvqi4_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[5] = 3;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[6] = 2;
      break;

    case 223:  /* *leahi_general_3b */
    case 222:  /* *leaqi_general_3b */
    case 221:  /* *leahi_general_3 */
    case 220:  /* *leaqi_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4395:  /* xop_pmacssdd */
    case 4394:  /* xop_pmacsdd */
    case 4393:  /* xop_pmacssww */
    case 4392:  /* xop_pmacsww */
    case 229:  /* *leasi_general_4 */
    case 228:  /* *leasi_general_4 */
    case 227:  /* *leahi_general_4 */
    case 226:  /* *leahi_general_4 */
    case 225:  /* *leaqi_general_4 */
    case 224:  /* *leaqi_general_4 */
    case 219:  /* *leahi_general_2b */
    case 218:  /* *leaqi_general_2b */
    case 217:  /* *leahi_general_2 */
    case 216:  /* *leaqi_general_2 */
    case 215:  /* *leahi_general_1 */
    case 214:  /* *leaqi_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 213:  /* *addvdi4_overflow_2 */
    case 212:  /* *addvsi4_overflow_2 */
    case 211:  /* *addvhi4_overflow_2 */
    case 210:  /* *addvqi4_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[5] = 1;
      break;

    case 209:  /* *addvdi4_overflow_1 */
    case 208:  /* *addvsi4_overflow_1 */
    case 207:  /* *addvhi4_overflow_1 */
    case 206:  /* *addvqi4_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[6] = 2;
      break;

    case 351:  /* *mulvsi4_1 */
    case 350:  /* *mulvhi4_1 */
    case 253:  /* *subvti4_doubleword_1 */
    case 252:  /* *subvdi4_doubleword_1 */
    case 249:  /* subvdi4_1 */
    case 248:  /* subvsi4_1 */
    case 247:  /* subvhi4_1 */
    case 246:  /* subvqi4_1 */
    case 205:  /* *addvti4_doubleword_1 */
    case 204:  /* *addvdi4_doubleword_1 */
    case 201:  /* addvdi4_1 */
    case 200:  /* addvsi4_1 */
    case 199:  /* addvhi4_1 */
    case 198:  /* addvqi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 355:  /* *umulvqi4 */
    case 354:  /* *mulvqi4 */
    case 349:  /* *mulvhi4 */
    case 348:  /* *mulvsi4 */
    case 251:  /* *subvti4_doubleword */
    case 250:  /* *subvdi4_doubleword */
    case 245:  /* *subvdi4 */
    case 244:  /* *subvsi4 */
    case 243:  /* *subvhi4 */
    case 242:  /* *subvqi4 */
    case 203:  /* *addvti4_doubleword */
    case 202:  /* *addvdi4_doubleword */
    case 197:  /* *addvdi4 */
    case 196:  /* *addvsi4 */
    case 195:  /* *addvhi4 */
    case 194:  /* *addvqi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 456:  /* *xorqi_extdi_2 */
    case 455:  /* *iorqi_extdi_2 */
    case 454:  /* *xorqi_extsi_2 */
    case 453:  /* *iorqi_extsi_2 */
    case 452:  /* *xorqi_exthi_2 */
    case 451:  /* *iorqi_exthi_2 */
    case 408:  /* *andqi_extdi_2 */
    case 407:  /* *andqi_extsi_2 */
    case 406:  /* *andqi_exthi_2 */
    case 193:  /* *addqi_extdi_2 */
    case 192:  /* *addqi_extsi_2 */
    case 191:  /* *addqi_exthi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      break;

    case 450:  /* *xorqi_extdi_1 */
    case 449:  /* *iorqi_extdi_1 */
    case 448:  /* *xorqi_extsi_1 */
    case 447:  /* *iorqi_extsi_1 */
    case 446:  /* *xorqi_exthi_1 */
    case 445:  /* *iorqi_exthi_1 */
    case 402:  /* *andqi_extdi_1 */
    case 401:  /* *andqi_extsi_1 */
    case 400:  /* *andqi_exthi_1 */
    case 190:  /* *addqi_extdi_1 */
    case 189:  /* *addqi_extsi_1 */
    case 188:  /* *addqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 599:  /* *ashrdi3_cconly */
    case 598:  /* *lshrdi3_cconly */
    case 597:  /* *ashrsi3_cconly */
    case 596:  /* *lshrsi3_cconly */
    case 595:  /* *ashrhi3_cconly */
    case 594:  /* *lshrhi3_cconly */
    case 593:  /* *ashrqi3_cconly */
    case 592:  /* *lshrqi3_cconly */
    case 548:  /* *ashldi3_cconly */
    case 547:  /* *ashlsi3_cconly */
    case 546:  /* *ashlhi3_cconly */
    case 545:  /* *ashlqi3_cconly */
    case 444:  /* *xordi_3 */
    case 443:  /* *iordi_3 */
    case 442:  /* *xorsi_3 */
    case 441:  /* *iorsi_3 */
    case 440:  /* *xorhi_3 */
    case 439:  /* *iorhi_3 */
    case 438:  /* *xorqi_3 */
    case 437:  /* *iorqi_3 */
    case 187:  /* *adddi_5 */
    case 186:  /* *addsi_5 */
    case 185:  /* *addhi_5 */
    case 184:  /* *addqi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 183:  /* *addsi_4 */
    case 182:  /* *addhi_4 */
    case 181:  /* *addqi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 180:  /* *adddi_3 */
    case 179:  /* *addsi_3 */
    case 178:  /* *addhi_3 */
    case 177:  /* *addqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 591:  /* *ashrdi3_cmp */
    case 590:  /* *lshrdi3_cmp */
    case 589:  /* *ashrsi3_cmp */
    case 588:  /* *lshrsi3_cmp */
    case 587:  /* *ashrhi3_cmp */
    case 586:  /* *lshrhi3_cmp */
    case 585:  /* *ashrqi3_cmp */
    case 584:  /* *lshrqi3_cmp */
    case 544:  /* *ashldi3_cmp */
    case 543:  /* *ashlsi3_cmp */
    case 542:  /* *ashlhi3_cmp */
    case 541:  /* *ashlqi3_cmp */
    case 436:  /* *xordi_2 */
    case 435:  /* *iordi_2 */
    case 434:  /* *xorsi_2 */
    case 433:  /* *iorsi_2 */
    case 432:  /* *xorhi_2 */
    case 431:  /* *iorhi_2 */
    case 430:  /* *xorqi_2 */
    case 429:  /* *iorqi_2 */
    case 399:  /* *andsi_2 */
    case 398:  /* *andhi_2 */
    case 397:  /* *andqi_2 */
    case 396:  /* *andqi_2_maybe_si */
    case 241:  /* *subdi_2 */
    case 240:  /* *subsi_2 */
    case 239:  /* *subhi_2 */
    case 238:  /* *subqi_2 */
    case 176:  /* *adddi_2 */
    case 175:  /* *addsi_2 */
    case 174:  /* *addhi_2 */
    case 173:  /* *addqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 622:  /* *rotrhi3_1_slp */
    case 621:  /* *rotlhi3_1_slp */
    case 620:  /* *rotrqi3_1_slp */
    case 619:  /* *rotlqi3_1_slp */
    case 583:  /* *ashrhi3_1_slp */
    case 582:  /* *lshrhi3_1_slp */
    case 581:  /* *ashrqi3_1_slp */
    case 580:  /* *lshrqi3_1_slp */
    case 540:  /* *ashlhi3_1_slp */
    case 539:  /* *ashlqi3_1_slp */
    case 428:  /* *xorhi_1_slp */
    case 427:  /* *iorhi_1_slp */
    case 426:  /* *xorqi_1_slp */
    case 425:  /* *iorqi_1_slp */
    case 395:  /* *andhi_1_slp */
    case 394:  /* *andqi_1_slp */
    case 237:  /* *subhi_1_slp */
    case 236:  /* *subqi_1_slp */
    case 172:  /* *addhi_1_slp */
    case 171:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1278:  /* klshiftrtdi */
    case 1277:  /* kashiftdi */
    case 1276:  /* klshiftrtsi */
    case 1275:  /* kashiftsi */
    case 1274:  /* klshiftrthi */
    case 1273:  /* kashifthi */
    case 1272:  /* klshiftrtqi */
    case 1271:  /* kashiftqi */
    case 1270:  /* kadddi */
    case 1269:  /* kaddsi */
    case 1268:  /* kaddhi */
    case 1267:  /* kaddqi */
    case 1253:  /* kxordi */
    case 1252:  /* kiordi */
    case 1251:  /* kanddi */
    case 1250:  /* kxorsi */
    case 1249:  /* kiorsi */
    case 1248:  /* kandsi */
    case 1247:  /* kxorhi */
    case 1246:  /* kiorhi */
    case 1245:  /* kandhi */
    case 1244:  /* kxorqi */
    case 1243:  /* kiorqi */
    case 1242:  /* kandqi */
    case 921:  /* pro_epilogue_adjust_stack_sub_di */
    case 920:  /* pro_epilogue_adjust_stack_sub_si */
    case 919:  /* pro_epilogue_adjust_stack_add_di */
    case 918:  /* pro_epilogue_adjust_stack_add_si */
    case 917:  /* *umindi3_1 */
    case 916:  /* *umaxdi3_1 */
    case 915:  /* *smindi3_1 */
    case 914:  /* *smaxdi3_1 */
    case 913:  /* *uminsi3_1 */
    case 912:  /* *umaxsi3_1 */
    case 911:  /* *sminsi3_1 */
    case 910:  /* *smaxsi3_1 */
    case 909:  /* *uminhi3_1 */
    case 908:  /* *umaxhi3_1 */
    case 907:  /* *sminhi3_1 */
    case 906:  /* *smaxhi3_1 */
    case 905:  /* *uminqi3_1 */
    case 904:  /* *umaxqi3_1 */
    case 903:  /* *sminqi3_1 */
    case 902:  /* *smaxqi3_1 */
    case 901:  /* *uminti3_doubleword */
    case 900:  /* *umaxti3_doubleword */
    case 899:  /* *sminti3_doubleword */
    case 898:  /* *smaxti3_doubleword */
    case 897:  /* *umindi3_doubleword */
    case 896:  /* *umaxdi3_doubleword */
    case 895:  /* *smindi3_doubleword */
    case 894:  /* *smaxdi3_doubleword */
    case 618:  /* *rotrhi3_1 */
    case 617:  /* *rotlhi3_1 */
    case 616:  /* *rotrqi3_1 */
    case 615:  /* *rotlqi3_1 */
    case 614:  /* *rotrdi3_1 */
    case 613:  /* *rotldi3_1 */
    case 612:  /* *rotrsi3_1 */
    case 611:  /* *rotlsi3_1 */
    case 579:  /* *ashrhi3_1 */
    case 578:  /* *lshrhi3_1 */
    case 577:  /* *ashrqi3_1 */
    case 576:  /* *lshrqi3_1 */
    case 575:  /* *ashrdi3_1 */
    case 574:  /* *lshrdi3_1 */
    case 573:  /* *ashrsi3_1 */
    case 572:  /* *lshrsi3_1 */
    case 569:  /* ashrdi3_cvt */
    case 568:  /* ashrsi3_cvt */
    case 566:  /* *ashrdi3_doubleword */
    case 565:  /* *lshrdi3_doubleword */
    case 538:  /* *ashlqi3_1 */
    case 537:  /* *ashlhi3_1 */
    case 536:  /* *ashldi3_1 */
    case 535:  /* *ashlsi3_1 */
    case 528:  /* *ashldi3_doubleword */
    case 424:  /* *xorqi_1 */
    case 423:  /* *iorqi_1 */
    case 422:  /* *xordi_1 */
    case 421:  /* *iordi_1 */
    case 420:  /* *xorsi_1 */
    case 419:  /* *iorsi_1 */
    case 418:  /* *xorhi_1 */
    case 417:  /* *iorhi_1 */
    case 416:  /* *xordi3_doubleword */
    case 415:  /* *iordi3_doubleword */
    case 393:  /* *andqi_1 */
    case 392:  /* *andsi_1 */
    case 391:  /* *andhi_1 */
    case 390:  /* *anddi3_doubleword */
    case 347:  /* *mulqi3_1 */
    case 346:  /* *mulsi3_1 */
    case 345:  /* *mulhi3_1 */
    case 235:  /* *subdi_1 */
    case 234:  /* *subsi_1 */
    case 233:  /* *subhi_1 */
    case 232:  /* *subqi_1 */
    case 231:  /* *subti3_doubleword */
    case 230:  /* *subdi3_doubleword */
    case 170:  /* *addqi_1 */
    case 169:  /* *addhi_1 */
    case 168:  /* *adddi_1 */
    case 167:  /* *addsi_1 */
    case 166:  /* *addti3_doubleword */
    case 165:  /* *adddi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 4009:  /* sse_stmxcsr */
    case 995:  /* rdpid */
    case 964:  /* lwp_slwpcbdi */
    case 963:  /* lwp_slwpcbsi */
    case 959:  /* fnstsw */
    case 947:  /* fxsave */
    case 945:  /* rdtsc */
    case 934:  /* *prefetch_prefetchwt1 */
    case 803:  /* x86_fnstsw_1 */
    case 762:  /* *load_tp_x32_zext */
    case 761:  /* *load_tp_di */
    case 760:  /* *load_tp_si */
    case 145:  /* x86_fnstcw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 162:  /* floatunssixf2_i387_with_xmm */
    case 161:  /* floatunssidf2_i387_with_xmm */
    case 160:  /* floatunssisf2_i387_with_xmm */
    case 144:  /* fix_truncsi_i387 */
    case 143:  /* fix_trunchi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 157:  /* floatdixf2_i387_with_xmm */
    case 156:  /* floatdidf2_i387_with_xmm */
    case 155:  /* floatdisf2_i387_with_xmm */
    case 142:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 1301:  /* *negv2df2 */
    case 1300:  /* *absv2df2 */
    case 1299:  /* *negv4df2 */
    case 1298:  /* *absv4df2 */
    case 1297:  /* *negv8df2 */
    case 1296:  /* *absv8df2 */
    case 1295:  /* *negv4sf2 */
    case 1294:  /* *absv4sf2 */
    case 1293:  /* *negv8sf2 */
    case 1292:  /* *absv8sf2 */
    case 1291:  /* *negv16sf2 */
    case 1290:  /* *absv16sf2 */
    case 703:  /* ffssi2_no_cmove */
    case 498:  /* *negdf2_1 */
    case 497:  /* *absdf2_1 */
    case 496:  /* *negsf2_1 */
    case 495:  /* *abssf2_1 */
    case 487:  /* *negtf2_1 */
    case 486:  /* *abstf2_1 */
    case 138:  /* fix_truncdi_i387_fisttp */
    case 137:  /* fix_truncsi_i387_fisttp */
    case 136:  /* fix_trunchi_i387_fisttp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 133:  /* *fixuns_truncdf_1 */
    case 132:  /* *fixuns_truncsf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 120:  /* extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1265:  /* knotdi */
    case 1264:  /* knotsi */
    case 1263:  /* knothi */
    case 1262:  /* knotqi */
    case 877:  /* *x86_movsicc_0_m1_neg */
    case 876:  /* *x86_movhicc_0_m1_neg */
    case 875:  /* *x86_movqicc_0_m1_neg */
    case 874:  /* *x86_movsicc_0_m1_se */
    case 873:  /* *x86_movsicc_0_m1 */
    case 750:  /* popcounthi2 */
    case 747:  /* popcountsi2 */
    case 710:  /* clzsi2_lzcnt */
    case 707:  /* ctzsi2 */
    case 494:  /* *negxf2_i387_1 */
    case 493:  /* *absxf2_i387_1 */
    case 492:  /* *negdf2_i387_1 */
    case 491:  /* *absdf2_i387_1 */
    case 490:  /* *negsf2_i387_1 */
    case 489:  /* *abssf2_i387_1 */
    case 485:  /* *absdi2_1 */
    case 484:  /* *abssi2_1 */
    case 483:  /* *abshi2_1 */
    case 482:  /* *absqi2_1 */
    case 481:  /* *absti2_doubleword */
    case 480:  /* *absdi2_doubleword */
    case 465:  /* *negdi_1 */
    case 464:  /* *negsi_1 */
    case 463:  /* *neghi_1 */
    case 462:  /* *negqi_1 */
    case 461:  /* *negti2_doubleword */
    case 460:  /* *negdi2_doubleword */
    case 141:  /* *fix_truncdi_i387_1 */
    case 140:  /* *fix_truncsi_i387_1 */
    case 139:  /* *fix_trunchi_i387_1 */
    case 118:  /* zero_extendqihi2_and */
    case 115:  /* zero_extendhisi2_and */
    case 114:  /* zero_extendqisi2_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 103:  /* *insvqi_3 */
    case 102:  /* *insvqi_3 */
    case 101:  /* *insvqi_3 */
    case 100:  /* *insvqi_3 */
    case 99:  /* *insvqi_2 */
    case 98:  /* *insvqi_2 */
    case 97:  /* *insvqi_2 */
    case 96:  /* *insvqi_2 */
    case 95:  /* *insvqi_1 */
    case 94:  /* *insvqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 5304:  /* avx512f_pd512_pd */
    case 5303:  /* avx512f_ps512_ps */
    case 5302:  /* avx512f_si512_si */
    case 4700:  /* avx512cd_maskw_vec_dupv4si */
    case 4699:  /* avx512cd_maskw_vec_dupv8si */
    case 4698:  /* avx512cd_maskw_vec_dupv16si */
    case 4697:  /* avx512cd_maskb_vec_dupv2di */
    case 4696:  /* avx512cd_maskb_vec_dupv4di */
    case 4695:  /* avx512cd_maskb_vec_dupv8di */
    case 4677:  /* *avx512dq_broadcastv8sf */
    case 4675:  /* *avx512dq_broadcastv16sf */
    case 4673:  /* *avx512dq_broadcastv4si */
    case 4671:  /* *avx512dq_broadcastv8si */
    case 4669:  /* *avx512dq_broadcastv16si */
    case 4600:  /* avx512vl_vec_dupv8hi */
    case 4598:  /* avx512vl_vec_dupv16hi */
    case 4596:  /* avx512bw_vec_dupv32hi */
    case 4594:  /* avx512vl_vec_dupv32qi */
    case 4592:  /* avx512vl_vec_dupv16qi */
    case 4590:  /* avx512bw_vec_dupv64qi */
    case 4588:  /* avx512vl_vec_dupv2df */
    case 4586:  /* avx512vl_vec_dupv4df */
    case 4584:  /* avx512f_vec_dupv8df */
    case 4582:  /* avx512vl_vec_dupv4sf */
    case 4580:  /* avx512vl_vec_dupv8sf */
    case 4578:  /* avx512f_vec_dupv16sf */
    case 4576:  /* avx512vl_vec_dupv2di */
    case 4574:  /* avx512vl_vec_dupv4di */
    case 4572:  /* avx512f_vec_dupv8di */
    case 4570:  /* avx512vl_vec_dupv4si */
    case 4568:  /* avx512vl_vec_dupv8si */
    case 4566:  /* avx512f_vec_dupv16si */
    case 4565:  /* avx512bw_vec_dupv64qi_1 */
    case 4564:  /* avx512bw_vec_dupv32hi_1 */
    case 4563:  /* avx512f_vec_dupv8di_1 */
    case 4562:  /* avx512f_vec_dupv16si_1 */
    case 4561:  /* avx2_vec_dupv4df */
    case 4508:  /* avx2_pbroadcastv4di_1 */
    case 4507:  /* avx2_pbroadcastv8si_1 */
    case 4506:  /* avx2_pbroadcastv16hi_1 */
    case 4505:  /* avx2_pbroadcastv32qi_1 */
    case 4504:  /* avx2_pbroadcastv2di */
    case 4503:  /* avx2_pbroadcastv4di */
    case 4502:  /* avx2_pbroadcastv4si */
    case 4501:  /* avx2_pbroadcastv8si */
    case 4500:  /* avx2_pbroadcastv8hi */
    case 4499:  /* avx2_pbroadcastv16hi */
    case 4498:  /* avx2_pbroadcastv32hi */
    case 4497:  /* avx2_pbroadcastv16qi */
    case 4496:  /* avx2_pbroadcastv32qi */
    case 4495:  /* avx2_pbroadcastv64qi */
    case 4494:  /* avx2_pbroadcastv8di */
    case 4493:  /* avx2_pbroadcastv16si */
    case 4292:  /* sse4_1_zero_extendv2siv2di2 */
    case 4290:  /* sse4_1_sign_extendv2siv2di2 */
    case 4270:  /* sse4_1_zero_extendv2hiv2di2 */
    case 4268:  /* sse4_1_sign_extendv2hiv2di2 */
    case 4258:  /* avx2_zero_extendv4hiv4di2 */
    case 4256:  /* avx2_sign_extendv4hiv4di2 */
    case 4250:  /* sse4_1_zero_extendv2qiv2di2 */
    case 4248:  /* sse4_1_sign_extendv2qiv2di2 */
    case 4238:  /* avx2_zero_extendv4qiv4di2 */
    case 4236:  /* avx2_sign_extendv4qiv4di2 */
    case 4226:  /* avx512f_zero_extendv8qiv8di2 */
    case 4224:  /* avx512f_sign_extendv8qiv8di2 */
    case 4213:  /* sse4_1_zero_extendv4hiv4si2 */
    case 4211:  /* sse4_1_sign_extendv4hiv4si2 */
    case 4191:  /* sse4_1_zero_extendv4qiv4si2 */
    case 4189:  /* sse4_1_sign_extendv4qiv4si2 */
    case 4179:  /* avx2_zero_extendv8qiv8si2 */
    case 4177:  /* avx2_sign_extendv8qiv8si2 */
    case 4162:  /* sse4_1_zero_extendv8qiv8hi2 */
    case 4160:  /* sse4_1_sign_extendv8qiv8hi2 */
    case 3960:  /* *vec_extractv4si_0_zext_sse4 */
    case 3077:  /* *avx512f_us_truncatev8div16qi2_store_2 */
    case 3076:  /* *avx512f_truncatev8div16qi2_store_2 */
    case 3075:  /* *avx512f_ss_truncatev8div16qi2_store_2 */
    case 3071:  /* avx512f_us_truncatev8div16qi2 */
    case 3070:  /* avx512f_truncatev8div16qi2 */
    case 3069:  /* avx512f_ss_truncatev8div16qi2 */
    case 3056:  /* *avx512vl_us_truncatev2div2si2_store_2 */
    case 3055:  /* *avx512vl_truncatev2div2si2_store_2 */
    case 3054:  /* *avx512vl_ss_truncatev2div2si2_store_2 */
    case 3035:  /* *avx512vl_us_truncatev2div2hi2_store_2 */
    case 3034:  /* *avx512vl_truncatev2div2hi2_store_2 */
    case 3033:  /* *avx512vl_ss_truncatev2div2hi2_store_2 */
    case 3005:  /* *avx512vl_us_truncatev4div4hi2_store_2 */
    case 3004:  /* *avx512vl_truncatev4div4hi2_store_2 */
    case 3003:  /* *avx512vl_ss_truncatev4div4hi2_store_2 */
    case 3002:  /* *avx512vl_us_truncatev4siv4hi2_store_2 */
    case 3001:  /* *avx512vl_truncatev4siv4hi2_store_2 */
    case 3000:  /* *avx512vl_ss_truncatev4siv4hi2_store_2 */
    case 2960:  /* *avx512vl_us_truncatev8siv8qi2_store_2 */
    case 2959:  /* *avx512vl_truncatev8siv8qi2_store_2 */
    case 2958:  /* *avx512vl_ss_truncatev8siv8qi2_store_2 */
    case 2957:  /* *avx512vl_us_truncatev8hiv8qi2_store_2 */
    case 2956:  /* *avx512vl_truncatev8hiv8qi2_store_2 */
    case 2955:  /* *avx512vl_ss_truncatev8hiv8qi2_store_2 */
    case 2924:  /* *avx512vl_us_truncatev4div4qi2_store_2 */
    case 2923:  /* *avx512vl_truncatev4div4qi2_store_2 */
    case 2922:  /* *avx512vl_ss_truncatev4div4qi2_store_2 */
    case 2921:  /* *avx512vl_us_truncatev4siv4qi2_store_2 */
    case 2920:  /* *avx512vl_truncatev4siv4qi2_store_2 */
    case 2919:  /* *avx512vl_ss_truncatev4siv4qi2_store_2 */
    case 2900:  /* *avx512vl_us_truncatev2div2qi2_store_2 */
    case 2899:  /* *avx512vl_truncatev2div2qi2_store_2 */
    case 2898:  /* *avx512vl_ss_truncatev2div2qi2_store_2 */
    case 2544:  /* avx512f_vec_dupv8df_1 */
    case 2543:  /* avx512f_vec_dupv16sf_1 */
    case 2542:  /* avx2_vec_dupv8sf_1 */
    case 2541:  /* avx2_vec_dupv4sf */
    case 2540:  /* avx2_vec_dupv8sf */
    case 2502:  /* sse2_cvtps2pd */
    case 2477:  /* vec_unpacks_lo_v16sf */
    case 2476:  /* *avx_cvtps2pd256_2 */
    case 2448:  /* sse2_cvttpd2dq */
    case 2442:  /* avx512dq_fixuns_truncv2sfv2di2 */
    case 2440:  /* avx512dq_fix_truncv2sfv2di2 */
    case 2389:  /* ufix_truncv2dfv2si2 */
    case 2358:  /* sse2_cvtdq2pd */
    case 2357:  /* avx_cvtdq2pd256_2 */
    case 2356:  /* avx512f_cvtdq2pd512_2 */
    case 2354:  /* ufloatv2siv2df2 */
    case 2302:  /* sse2_cvttsd2si */
    case 2297:  /* avx512f_vcvttsd2usi */
    case 2293:  /* avx512f_vcvttss2usi */
    case 2214:  /* sse_cvttss2si */
    case 2208:  /* sse_cvttps2pi */
    case 1228:  /* sse2_movq128 */
    case 1119:  /* *vec_extractv2si_0_zext_sse4 */
    case 1115:  /* *vec_dupv4hi */
    case 91:  /* *extzvqi */
    case 90:  /* *extzvqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 670:  /* *sibcall_memory */
    case 669:  /* *sibcall_memory */
    case 85:  /* *movstricthi_xor */
    case 84:  /* *movstrictqi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 112:  /* *swapxf */
    case 81:  /* *swaphi */
    case 80:  /* *swapqi */
    case 79:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 5374:  /* vpopcountv8hi */
    case 5372:  /* vpopcountv16hi */
    case 5370:  /* vpopcountv32hi */
    case 5368:  /* vpopcountv32qi */
    case 5366:  /* vpopcountv16qi */
    case 5364:  /* vpopcountv64qi */
    case 5362:  /* vpopcountv2di */
    case 5360:  /* vpopcountv4di */
    case 5358:  /* vpopcountv8di */
    case 5356:  /* vpopcountv4si */
    case 5354:  /* vpopcountv8si */
    case 5352:  /* vpopcountv16si */
    case 5307:  /* avx512f_pd512_256pd */
    case 5306:  /* avx512f_ps512_256ps */
    case 5305:  /* avx512f_si512_256si */
    case 5281:  /* clzv2di2 */
    case 5279:  /* clzv4di2 */
    case 5277:  /* clzv8di2 */
    case 5275:  /* clzv4si2 */
    case 5273:  /* clzv8si2 */
    case 5271:  /* clzv16si2 */
    case 4835:  /* avx_pd256_pd */
    case 4834:  /* avx_ps256_ps */
    case 4833:  /* avx_si256_si */
    case 4693:  /* *avx512dq_broadcastv4df_1 */
    case 4691:  /* *avx512dq_broadcastv4di_1 */
    case 4689:  /* *avx512dq_broadcastv8df_1 */
    case 4687:  /* *avx512dq_broadcastv8di_1 */
    case 4685:  /* *avx512dq_broadcastv16si_1 */
    case 4683:  /* *avx512dq_broadcastv16sf_1 */
    case 4681:  /* *avx512vl_broadcastv8sf_1 */
    case 4679:  /* *avx512vl_broadcastv8si_1 */
    case 4662:  /* vec_dupv4df */
    case 4661:  /* vec_dupv4di */
    case 4660:  /* vec_dupv8sf */
    case 4659:  /* vec_dupv8si */
    case 4658:  /* *vec_dupv4si */
    case 4657:  /* *vec_dupv8si */
    case 4656:  /* *vec_dupv8hi */
    case 4655:  /* *vec_dupv16hi */
    case 4654:  /* *vec_dupv16qi */
    case 4653:  /* *vec_dupv32qi */
    case 4648:  /* *vec_dupv2di */
    case 4647:  /* *vec_dupv4si */
    case 4646:  /* vec_dupv4sf */
    case 4644:  /* *avx512vl_vec_dup_gprv2df */
    case 4642:  /* *avx512vl_vec_dup_gprv4df */
    case 4640:  /* *avx512f_vec_dup_gprv8df */
    case 4638:  /* *avx512vl_vec_dup_gprv4sf */
    case 4636:  /* *avx512vl_vec_dup_gprv8sf */
    case 4634:  /* *avx512f_vec_dup_gprv16sf */
    case 4632:  /* *avx512vl_vec_dup_gprv2di */
    case 4630:  /* *avx512vl_vec_dup_gprv4di */
    case 4628:  /* *avx512f_vec_dup_gprv8di */
    case 4626:  /* *avx512vl_vec_dup_gprv4si */
    case 4624:  /* *avx512vl_vec_dup_gprv8si */
    case 4622:  /* *avx512f_vec_dup_gprv16si */
    case 4620:  /* *avx512vl_vec_dup_gprv8hi */
    case 4618:  /* *avx512vl_vec_dup_gprv16hi */
    case 4616:  /* *avx512bw_vec_dup_gprv32hi */
    case 4614:  /* *avx512vl_vec_dup_gprv32qi */
    case 4612:  /* *avx512vl_vec_dup_gprv16qi */
    case 4610:  /* *avx512bw_vec_dup_gprv64qi */
    case 4608:  /* *avx512f_broadcastv8di */
    case 4606:  /* *avx512f_broadcastv8df */
    case 4604:  /* *avx512f_broadcastv16si */
    case 4602:  /* *avx512f_broadcastv16sf */
    case 4296:  /* *sse4_1_zero_extendv2siv2di2_1 */
    case 4294:  /* *sse4_1_sign_extendv2siv2di2_1 */
    case 4287:  /* avx2_zero_extendv4siv4di2 */
    case 4285:  /* avx2_sign_extendv4siv4di2 */
    case 4282:  /* avx512f_zero_extendv8siv8di2 */
    case 4280:  /* avx512f_sign_extendv8siv8di2 */
    case 4274:  /* *sse4_1_zero_extendv2hiv2di2_1 */
    case 4272:  /* *sse4_1_sign_extendv2hiv2di2_1 */
    case 4262:  /* *avx2_zero_extendv4hiv4di2_1 */
    case 4260:  /* *avx2_sign_extendv4hiv4di2_1 */
    case 4254:  /* avx512f_zero_extendv8hiv8di2 */
    case 4252:  /* avx512f_sign_extendv8hiv8di2 */
    case 4242:  /* *avx2_zero_extendv4qiv4di2_1 */
    case 4240:  /* *avx2_sign_extendv4qiv4di2_1 */
    case 4230:  /* *avx512f_zero_extendv8qiv8di2_1 */
    case 4228:  /* *avx512f_sign_extendv8qiv8di2_1 */
    case 4217:  /* *sse4_1_zero_extendv4hiv4si2_1 */
    case 4215:  /* *sse4_1_sign_extendv4hiv4si2_1 */
    case 4208:  /* avx2_zero_extendv8hiv8si2 */
    case 4206:  /* avx2_sign_extendv8hiv8si2 */
    case 4203:  /* avx512f_zero_extendv16hiv16si2 */
    case 4201:  /* avx512f_sign_extendv16hiv16si2 */
    case 4195:  /* *sse4_1_zero_extendv4qiv4si2_1 */
    case 4193:  /* *sse4_1_sign_extendv4qiv4si2_1 */
    case 4183:  /* *avx2_zero_extendv8qiv8si2_1 */
    case 4181:  /* *avx2_sign_extendv8qiv8si2_1 */
    case 4175:  /* *avx512f_zero_extendv16qiv16si2 */
    case 4173:  /* *avx512f_sign_extendv16qiv16si2 */
    case 4166:  /* *sse4_1_zero_extendv8qiv8hi2_1 */
    case 4164:  /* *sse4_1_sign_extendv8qiv8hi2_1 */
    case 4157:  /* avx512bw_zero_extendv32qiv32hi2 */
    case 4155:  /* avx512bw_sign_extendv32qiv32hi2 */
    case 4152:  /* avx2_zero_extendv16qiv16hi2 */
    case 4150:  /* avx2_sign_extendv16qiv16hi2 */
    case 4099:  /* ssse3_absv2si2 */
    case 4098:  /* ssse3_absv4hi2 */
    case 4097:  /* ssse3_absv8qi2 */
    case 4084:  /* *absv2di2 */
    case 4083:  /* *absv4di2 */
    case 4082:  /* *absv8di2 */
    case 4081:  /* *absv4si2 */
    case 4080:  /* *absv8si2 */
    case 4079:  /* *absv16si2 */
    case 4078:  /* *absv8hi2 */
    case 4077:  /* *absv16hi2 */
    case 4076:  /* *absv32hi2 */
    case 4075:  /* *absv16qi2 */
    case 4074:  /* *absv32qi2 */
    case 4073:  /* *absv64qi2 */
    case 3963:  /* *vec_extractv2di_1 */
    case 3959:  /* *vec_extractv2di_0_sse */
    case 3958:  /* *vec_extractv4si_0 */
    case 3074:  /* *avx512f_us_truncatev8div16qi2_store_1 */
    case 3073:  /* *avx512f_truncatev8div16qi2_store_1 */
    case 3072:  /* *avx512f_ss_truncatev8div16qi2_store_1 */
    case 3053:  /* *avx512vl_us_truncatev2div2si2_store_1 */
    case 3052:  /* *avx512vl_truncatev2div2si2_store_1 */
    case 3051:  /* *avx512vl_ss_truncatev2div2si2_store_1 */
    case 3032:  /* *avx512vl_us_truncatev2div2hi2_store_1 */
    case 3031:  /* *avx512vl_truncatev2div2hi2_store_1 */
    case 3030:  /* *avx512vl_ss_truncatev2div2hi2_store_1 */
    case 2999:  /* *avx512vl_us_truncatev4div4hi2_store_1 */
    case 2998:  /* *avx512vl_truncatev4div4hi2_store_1 */
    case 2997:  /* *avx512vl_ss_truncatev4div4hi2_store_1 */
    case 2996:  /* *avx512vl_us_truncatev4siv4hi2_store_1 */
    case 2995:  /* *avx512vl_truncatev4siv4hi2_store_1 */
    case 2994:  /* *avx512vl_ss_truncatev4siv4hi2_store_1 */
    case 2954:  /* *avx512vl_us_truncatev8siv8qi2_store_1 */
    case 2953:  /* *avx512vl_truncatev8siv8qi2_store_1 */
    case 2952:  /* *avx512vl_ss_truncatev8siv8qi2_store_1 */
    case 2951:  /* *avx512vl_us_truncatev8hiv8qi2_store_1 */
    case 2950:  /* *avx512vl_truncatev8hiv8qi2_store_1 */
    case 2949:  /* *avx512vl_ss_truncatev8hiv8qi2_store_1 */
    case 2918:  /* *avx512vl_us_truncatev4div4qi2_store_1 */
    case 2917:  /* *avx512vl_truncatev4div4qi2_store_1 */
    case 2916:  /* *avx512vl_ss_truncatev4div4qi2_store_1 */
    case 2915:  /* *avx512vl_us_truncatev4siv4qi2_store_1 */
    case 2914:  /* *avx512vl_truncatev4siv4qi2_store_1 */
    case 2913:  /* *avx512vl_ss_truncatev4siv4qi2_store_1 */
    case 2897:  /* *avx512vl_us_truncatev2div2qi2_store_1 */
    case 2896:  /* *avx512vl_truncatev2div2qi2_store_1 */
    case 2895:  /* *avx512vl_ss_truncatev2div2qi2_store_1 */
    case 2870:  /* *avx512vl_us_truncatev16hiv16qi2 */
    case 2869:  /* *avx512vl_truncatev16hiv16qi2 */
    case 2868:  /* *avx512vl_ss_truncatev16hiv16qi2 */
    case 2867:  /* *avx512vl_us_truncatev8siv8hi2 */
    case 2866:  /* *avx512vl_truncatev8siv8hi2 */
    case 2865:  /* *avx512vl_ss_truncatev8siv8hi2 */
    case 2864:  /* *avx512vl_us_truncatev4div4si2 */
    case 2863:  /* *avx512vl_truncatev4div4si2 */
    case 2862:  /* *avx512vl_ss_truncatev4div4si2 */
    case 2858:  /* avx512bw_us_truncatev32hiv32qi2 */
    case 2857:  /* avx512bw_truncatev32hiv32qi2 */
    case 2856:  /* avx512bw_ss_truncatev32hiv32qi2 */
    case 2843:  /* *avx512f_us_truncatev8div8hi2 */
    case 2842:  /* *avx512f_truncatev8div8hi2 */
    case 2841:  /* *avx512f_ss_truncatev8div8hi2 */
    case 2840:  /* *avx512f_us_truncatev8div8si2 */
    case 2839:  /* *avx512f_truncatev8div8si2 */
    case 2838:  /* *avx512f_ss_truncatev8div8si2 */
    case 2837:  /* *avx512f_us_truncatev16siv16hi2 */
    case 2836:  /* *avx512f_truncatev16siv16hi2 */
    case 2835:  /* *avx512f_ss_truncatev16siv16hi2 */
    case 2834:  /* *avx512f_us_truncatev16siv16qi2 */
    case 2833:  /* *avx512f_truncatev16siv16qi2 */
    case 2832:  /* *avx512f_ss_truncatev16siv16qi2 */
    case 2827:  /* vec_dupv2df */
    case 2823:  /* *vec_extractv2df_0_sse */
    case 2822:  /* sse2_storelpd */
    case 2821:  /* *vec_extractv2df_1_sse */
    case 2820:  /* sse2_storehpd */
    case 2608:  /* vec_extract_hi_v32qi */
    case 2607:  /* vec_extract_lo_v32qi */
    case 2606:  /* vec_extract_hi_v64qi */
    case 2605:  /* vec_extract_lo_v64qi */
    case 2604:  /* vec_extract_hi_v16hi */
    case 2603:  /* vec_extract_lo_v16hi */
    case 2602:  /* vec_extract_hi_v32hi */
    case 2601:  /* vec_extract_lo_v32hi */
    case 2600:  /* vec_extract_hi_v8sf */
    case 2599:  /* vec_extract_hi_v8si */
    case 2596:  /* vec_extract_lo_v8sf */
    case 2595:  /* vec_extract_lo_v8si */
    case 2592:  /* vec_extract_hi_v4df */
    case 2591:  /* vec_extract_hi_v4di */
    case 2588:  /* vec_extract_lo_v4df */
    case 2587:  /* vec_extract_lo_v4di */
    case 2584:  /* vec_extract_lo_v16si */
    case 2583:  /* vec_extract_lo_v16sf */
    case 2580:  /* vec_extract_hi_v16si */
    case 2579:  /* vec_extract_hi_v16sf */
    case 2576:  /* vec_extract_hi_v8di */
    case 2575:  /* vec_extract_hi_v8df */
    case 2572:  /* vec_extract_lo_v8di */
    case 2571:  /* vec_extract_lo_v8df */
    case 2558:  /* *vec_extractv4sf_0 */
    case 2537:  /* sse_storelps */
    case 2535:  /* sse_storehps */
    case 2474:  /* avx_cvtps2pd256 */
    case 2470:  /* avx512f_cvtps2pd512 */
    case 2465:  /* avx_cvtpd2ps256 */
    case 2461:  /* *avx512f_cvtpd2ps512 */
    case 2446:  /* ufix_truncv4sfv4si2 */
    case 2444:  /* ufix_truncv8sfv8si2 */
    case 2438:  /* fixuns_truncv4sfv4di2 */
    case 2436:  /* fix_truncv4sfv4di2 */
    case 2432:  /* fixuns_truncv8sfv8di2 */
    case 2428:  /* fix_truncv8sfv8di2 */
    case 2410:  /* fixuns_truncv2dfv2di2 */
    case 2408:  /* fix_truncv2dfv2di2 */
    case 2406:  /* fixuns_truncv4dfv4di2 */
    case 2404:  /* fix_truncv4dfv4di2 */
    case 2400:  /* fixuns_truncv8dfv8di2 */
    case 2396:  /* fix_truncv8dfv8di2 */
    case 2394:  /* ufix_truncv4dfv4si2 */
    case 2392:  /* fix_truncv4dfv4si2 */
    case 2385:  /* fixuns_truncv8dfv8si2 */
    case 2381:  /* fix_truncv8dfv8si2 */
    case 2352:  /* ufloatv4siv4df2 */
    case 2350:  /* ufloatv8siv8df2 */
    case 2342:  /* floatunsv4div4sf2 */
    case 2340:  /* floatv4div4sf2 */
    case 2336:  /* floatunsv8div8sf2 */
    case 2332:  /* floatv8div8sf2 */
    case 2328:  /* floatunsv2div2df2 */
    case 2324:  /* floatv2div2df2 */
    case 2320:  /* floatunsv4div4df2 */
    case 2316:  /* floatv4div4df2 */
    case 2312:  /* floatunsv8div8df2 */
    case 2308:  /* floatv8div8df2 */
    case 2306:  /* floatv4siv4df2 */
    case 2304:  /* floatv8siv8df2 */
    case 2289:  /* sse2_cvttpd2pi */
    case 2287:  /* sse2_cvtpi2pd */
    case 2285:  /* fix_truncv4sfv4si2 */
    case 2283:  /* fix_truncv8sfv8si2 */
    case 2279:  /* ufix_truncv16sfv16si2 */
    case 2275:  /* fix_truncv16sfv16si2 */
    case 2235:  /* ufloatv4siv4sf2 */
    case 2231:  /* ufloatv8siv8sf2 */
    case 2227:  /* ufloatv16siv16sf2 */
    case 2225:  /* floatv4siv4sf2 */
    case 2223:  /* floatv8siv8sf2 */
    case 2219:  /* floatv16siv16sf2 */
    case 1470:  /* sse2_sqrtv2df2 */
    case 1468:  /* avx_sqrtv4df2 */
    case 1464:  /* avx512f_sqrtv8df2 */
    case 1462:  /* sse_sqrtv4sf2 */
    case 1460:  /* avx_sqrtv8sf2 */
    case 1456:  /* avx512f_sqrtv16sf2 */
    case 1120:  /* *vec_extractv2si_1 */
    case 1118:  /* *vec_extractv2si_0 */
    case 1116:  /* *vec_dupv2si */
    case 1114:  /* mmx_pswapdv2si2 */
    case 1048:  /* *vec_extractv2sf_1 */
    case 1047:  /* *vec_extractv2sf_0 */
    case 1045:  /* *vec_dupv2sf */
    case 1044:  /* mmx_pswapdv2sf2 */
    case 1041:  /* mmx_floatv2siv2sf2 */
    case 1040:  /* mmx_fix_truncv2sfv2si2 */
    case 802:  /* *sqrtdf2_sse */
    case 801:  /* *sqrtsf2_sse */
    case 799:  /* sqrtxf2 */
    case 753:  /* *bswaphi2_movbe */
    case 752:  /* *bswapsi2 */
    case 751:  /* *bswapsi2_movbe */
    case 519:  /* *one_cmplqi2_1 */
    case 518:  /* *one_cmpldi2_1 */
    case 517:  /* *one_cmplsi2_1 */
    case 516:  /* *one_cmplhi2_1 */
    case 515:  /* *one_cmpldi2_doubleword */
    case 506:  /* *negxf2_i387 */
    case 505:  /* *absxf2_i387 */
    case 504:  /* *negdf2_i387 */
    case 503:  /* *absdf2_i387 */
    case 502:  /* *negsf2_i387 */
    case 501:  /* *abssf2_i387 */
    case 159:  /* *floatunssidf2_avx512 */
    case 158:  /* *floatunssisf2_avx512 */
    case 154:  /* *floatdidf2_i387 */
    case 153:  /* *floatdisf2_i387 */
    case 152:  /* *floatsidf2 */
    case 151:  /* *floatsisf2 */
    case 150:  /* floatdixf2 */
    case 149:  /* floatsixf2 */
    case 148:  /* floathixf2 */
    case 147:  /* floathidf2 */
    case 146:  /* floathisf2 */
    case 135:  /* fix_truncdfsi_sse */
    case 134:  /* fix_truncsfsi_sse */
    case 131:  /* fixuns_truncdfsi2_avx512f */
    case 130:  /* fixuns_truncsfsi2_avx512f */
    case 129:  /* truncxfdf2 */
    case 128:  /* truncxfsf2 */
    case 127:  /* truncdfsf2 */
    case 126:  /* *extenddfxf2_i387 */
    case 125:  /* *extendsfxf2_i387 */
    case 124:  /* *extendsfdf2 */
    case 123:  /* extendqihi2 */
    case 122:  /* extendqisi2 */
    case 121:  /* extendhisi2 */
    case 119:  /* *zero_extendqihi2 */
    case 117:  /* *zero_extendhisi2 */
    case 116:  /* *zero_extendqisi2 */
    case 113:  /* *zero_extendsidi2 */
    case 89:  /* *extzvsi */
    case 88:  /* *extzvhi */
    case 87:  /* *extvsi */
    case 86:  /* *extvhi */
    case 78:  /* *movabsdi_2 */
    case 77:  /* *movabssi_2 */
    case 76:  /* *movabshi_2 */
    case 75:  /* *movabsqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 668:  /* *sibcall */
    case 667:  /* *sibcall */
    case 664:  /* *call */
    case 663:  /* *call */
    case 654:  /* *setcc_qi_slp */
    case 93:  /* insvsi_1 */
    case 92:  /* insvhi_1 */
    case 83:  /* *movstricthi_1 */
    case 82:  /* *movstrictqi_1 */
    case 74:  /* *movabsdi_1 */
    case 73:  /* *movabssi_1 */
    case 72:  /* *movabshi_1 */
    case 71:  /* *movabsqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 650:  /* *setcc_si_1_and */
    case 649:  /* *setcc_hi_1_and */
    case 63:  /* *movsi_or */
    case 62:  /* *movsi_xor */
    case 57:  /* *popdi1_epilogue */
    case 56:  /* *popsi1_epilogue */
    case 53:  /* *pushdi2_prologue */
    case 52:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 5542:  /* *movp2hi_internal */
    case 5541:  /* *movp2qi_internal */
    case 5333:  /* *movv64si_internal */
    case 5332:  /* *movv64sf_internal */
    case 1149:  /* movv2df_internal */
    case 1148:  /* movv4df_internal */
    case 1147:  /* movv8df_internal */
    case 1146:  /* movv4sf_internal */
    case 1145:  /* movv8sf_internal */
    case 1144:  /* movv16sf_internal */
    case 1143:  /* movv1ti_internal */
    case 1142:  /* movv2ti_internal */
    case 1141:  /* movv4ti_internal */
    case 1140:  /* movv2di_internal */
    case 1139:  /* movv4di_internal */
    case 1138:  /* movv8di_internal */
    case 1137:  /* movv4si_internal */
    case 1136:  /* movv8si_internal */
    case 1135:  /* movv16si_internal */
    case 1134:  /* movv8hi_internal */
    case 1133:  /* movv16hi_internal */
    case 1132:  /* movv32hi_internal */
    case 1131:  /* movv16qi_internal */
    case 1130:  /* movv32qi_internal */
    case 1129:  /* movv64qi_internal */
    case 1020:  /* *movv2sf_internal */
    case 1019:  /* *movv1di_internal */
    case 1018:  /* *movv2si_internal */
    case 1017:  /* *movv4hi_internal */
    case 1016:  /* *movv8qi_internal */
    case 933:  /* *prefetch_3dnow */
    case 653:  /* *setcc_qi */
    case 652:  /* *setcc_si_1_movzbl */
    case 651:  /* *setcc_hi_1_movzbl */
    case 164:  /* *leadi */
    case 163:  /* *leasi */
    case 111:  /* *movsf_internal */
    case 110:  /* *movdf_internal */
    case 109:  /* *movxf_internal */
    case 108:  /* *movtf_internal */
    case 107:  /* *pushsf */
    case 106:  /* *pushdf */
    case 105:  /* *pushxf */
    case 104:  /* *pushtf */
    case 70:  /* *movqi_internal */
    case 69:  /* *movhi_internal */
    case 68:  /* *movsi_internal */
    case 67:  /* *movdi_internal */
    case 66:  /* *movti_internal */
    case 65:  /* *movoi_internal_avx */
    case 64:  /* *movxi_internal_avx512f */
    case 61:  /* *popfldi1 */
    case 60:  /* *popflsi1 */
    case 59:  /* *pushfldi2 */
    case 58:  /* *pushflsi2 */
    case 55:  /* *popdi1 */
    case 54:  /* *popsi1 */
    case 51:  /* *pushhi2 */
    case 50:  /* *pushqi2 */
    case 49:  /* *pushsi2 */
    case 48:  /* *pushdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 47:  /* *cmpiudf */
    case 45:  /* *cmpiusf */
    case 43:  /* *cmpiuxf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 756:  /* parityqi2_cmp */
    case 41:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 40:  /* *cmpuxf_i387 */
    case 39:  /* *cmpudf_i387 */
    case 38:  /* *cmpusf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 1));
      break;

    case 37:  /* *cmpxf_si_i387 */
    case 36:  /* *cmpdf_si_i387 */
    case 35:  /* *cmpsf_si_i387 */
    case 34:  /* *cmpxf_hi_i387 */
    case 33:  /* *cmpdf_hi_i387 */
    case 32:  /* *cmpsf_hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 4005:  /* *sse2_pmovmskb_lt */
    case 4004:  /* *avx2_pmovmskb_lt */
    case 3996:  /* *sse2_movmskpd_lt */
    case 3995:  /* *avx_movmskpd256_lt */
    case 3994:  /* *sse_movmskps_lt */
    case 3993:  /* *avx_movmskps256_lt */
    case 31:  /* *cmpdf_i387 */
    case 30:  /* *cmpsf_i387 */
    case 29:  /* *cmpxf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 28:  /* *cmpqi_extdi_4 */
    case 27:  /* *cmpqi_extsi_4 */
    case 26:  /* *cmpqi_exthi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 25:  /* *cmpqi_extdi_3 */
    case 24:  /* *cmpqi_extsi_3 */
    case 23:  /* *cmpqi_exthi_3 */
    case 22:  /* *cmpqi_extdi_2 */
    case 21:  /* *cmpqi_extsi_2 */
    case 20:  /* *cmpqi_exthi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 19:  /* *cmpqi_extdi_1 */
    case 18:  /* *cmpqi_extsi_1 */
    case 17:  /* *cmpqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 380:  /* *testsi_1 */
    case 379:  /* *testhi_1 */
    case 378:  /* *testqi_1 */
    case 377:  /* *testqi_1_maybe_si */
    case 16:  /* *cmpdi_minus_1 */
    case 15:  /* *cmpsi_minus_1 */
    case 14:  /* *cmphi_minus_1 */
    case 13:  /* *cmpqi_minus_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 46:  /* *cmpidf */
    case 44:  /* *cmpisf */
    case 42:  /* *cmpixf_i387 */
    case 12:  /* *cmpdi_1 */
    case 11:  /* *cmpsi_1 */
    case 10:  /* *cmphi_1 */
    case 9:  /* *cmpqi_1 */
    case 8:  /* *cmpdi_ccno_1 */
    case 7:  /* *cmpsi_ccno_1 */
    case 6:  /* *cmphi_ccno_1 */
    case 5:  /* *cmpqi_ccno_1 */
    case 4:  /* *cmpdi_ccz_1 */
    case 3:  /* *cmpsi_ccz_1 */
    case 2:  /* *cmphi_ccz_1 */
    case 1:  /* *cmpqi_ccz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}
