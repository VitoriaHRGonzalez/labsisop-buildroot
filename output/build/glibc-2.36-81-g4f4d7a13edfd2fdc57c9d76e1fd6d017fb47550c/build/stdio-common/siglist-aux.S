	.file	"siglist-gen.c"
	.text
	.globl	__sys_sigabbrev
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"HUP"
.LC1:
	.string	"INT"
.LC2:
	.string	"QUIT"
.LC3:
	.string	"ILL"
.LC4:
	.string	"TRAP"
.LC5:
	.string	"ABRT"
.LC6:
	.string	"BUS"
.LC7:
	.string	"FPE"
.LC8:
	.string	"KILL"
.LC9:
	.string	"USR1"
.LC10:
	.string	"SEGV"
.LC11:
	.string	"USR2"
.LC12:
	.string	"PIPE"
.LC13:
	.string	"ALRM"
.LC14:
	.string	"TERM"
.LC15:
	.string	"STKFLT"
.LC16:
	.string	"CHLD"
.LC17:
	.string	"CONT"
.LC18:
	.string	"STOP"
.LC19:
	.string	"TSTP"
.LC20:
	.string	"TTIN"
.LC21:
	.string	"TTOU"
.LC22:
	.string	"URG"
.LC23:
	.string	"XCPU"
.LC24:
	.string	"XFSZ"
.LC25:
	.string	"VTALRM"
.LC26:
	.string	"PROF"
.LC27:
	.string	"WINCH"
.LC28:
	.string	"POLL"
.LC29:
	.string	"PWR"
.LC30:
	.string	"SYS"
	.section	.data.rel.ro.local,"aw"
	.align 32
	.type	__sys_sigabbrev, @object
	.size	__sys_sigabbrev, 260
__sys_sigabbrev:
	.zero	4
	.long	.LC0
	.long	.LC1
	.long	.LC2
	.long	.LC3
	.long	.LC4
	.long	.LC5
	.long	.LC6
	.long	.LC7
	.long	.LC8
	.long	.LC9
	.long	.LC10
	.long	.LC11
	.long	.LC12
	.long	.LC13
	.long	.LC14
	.long	.LC15
	.long	.LC16
	.long	.LC17
	.long	.LC18
	.long	.LC19
	.long	.LC20
	.long	.LC21
	.long	.LC22
	.long	.LC23
	.long	.LC24
	.long	.LC25
	.long	.LC26
	.long	.LC27
	.long	.LC28
	.long	.LC29
	.long	.LC30
	.zero	132
	.globl	__sys_siglist
	.section	.rodata.str1.1
.LC31:
	.string	"Hangup"
.LC32:
	.string	"Interrupt"
.LC33:
	.string	"Quit"
.LC34:
	.string	"Illegal instruction"
.LC35:
	.string	"Trace/breakpoint trap"
.LC36:
	.string	"Aborted"
.LC37:
	.string	"Bus error"
.LC38:
	.string	"Floating point exception"
.LC39:
	.string	"Killed"
.LC40:
	.string	"User defined signal 1"
.LC41:
	.string	"Segmentation fault"
.LC42:
	.string	"User defined signal 2"
.LC43:
	.string	"Broken pipe"
.LC44:
	.string	"Alarm clock"
.LC45:
	.string	"Terminated"
.LC46:
	.string	"Stack fault"
.LC47:
	.string	"Child exited"
.LC48:
	.string	"Continued"
.LC49:
	.string	"Stopped (signal)"
.LC50:
	.string	"Stopped"
.LC51:
	.string	"Stopped (tty input)"
.LC52:
	.string	"Stopped (tty output)"
.LC53:
	.string	"Urgent I/O condition"
.LC54:
	.string	"CPU time limit exceeded"
.LC55:
	.string	"File size limit exceeded"
.LC56:
	.string	"Virtual timer expired"
.LC57:
	.string	"Profiling timer expired"
.LC58:
	.string	"Window changed"
.LC59:
	.string	"I/O possible"
.LC60:
	.string	"Power failure"
.LC61:
	.string	"Bad system call"
	.section	.data.rel.ro.local
	.align 32
	.type	__sys_siglist, @object
	.size	__sys_siglist, 260
__sys_siglist:
	.zero	4
	.long	.LC31
	.long	.LC32
	.long	.LC33
	.long	.LC34
	.long	.LC35
	.long	.LC36
	.long	.LC37
	.long	.LC38
	.long	.LC39
	.long	.LC40
	.long	.LC41
	.long	.LC42
	.long	.LC43
	.long	.LC44
	.long	.LC45
	.long	.LC46
	.long	.LC47
	.long	.LC48
	.long	.LC49
	.long	.LC50
	.long	.LC51
	.long	.LC52
	.long	.LC53
	.long	.LC54
	.long	.LC55
	.long	.LC56
	.long	.LC57
	.long	.LC58
	.long	.LC59
	.long	.LC60
	.long	.LC61
	.zero	132
	.ident	"GCC: (Buildroot -g22acba568) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
