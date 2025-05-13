	.file	"errlist-data-gen.c"
	.text
#APP
	__divdi3 = __divdi3_internal
	__udivdi3 = __udivdi3_internal
	__moddi3 = __moddi3_internal
	__umoddi3 = __umoddi3_internal
	memmove = __GI_memmove
	memset = __GI_memset
	memcpy = __GI_memcpy
	.symver __GLIBC_2_0_sys_nerr,sys_nerr@GLIBC_2.0
	.symver __GLIBC_2_0__sys_nerr,_sys_nerr@GLIBC_2.0
	.symver __GLIBC_2_1_sys_nerr,sys_nerr@GLIBC_2.1
	.symver __GLIBC_2_1__sys_nerr,_sys_nerr@GLIBC_2.1
	.symver __GLIBC_2_3_sys_nerr,sys_nerr@GLIBC_2.3
	.symver __GLIBC_2_3__sys_nerr,_sys_nerr@GLIBC_2.3
	.symver __GLIBC_2_4_sys_nerr,sys_nerr@GLIBC_2.4
	.symver __GLIBC_2_4__sys_nerr,_sys_nerr@GLIBC_2.4
	.symver __GLIBC_2_12_sys_nerr,sys_nerr@GLIBC_2.12
	.symver __GLIBC_2_12__sys_nerr,_sys_nerr@GLIBC_2.12
#NO_APP
	.globl	__GLIBC_2_12_sys_nerr
	.section	.rodata.cst4,"aM",@progbits,4
	.align 4
	.type	__GLIBC_2_12_sys_nerr, @object
	.size	__GLIBC_2_12_sys_nerr, 4
__GLIBC_2_12_sys_nerr:
	.long	135
	.globl	__GLIBC_2_12__sys_nerr
	.set	__GLIBC_2_12__sys_nerr,__GLIBC_2_12_sys_nerr
	.globl	__GLIBC_2_4_sys_nerr
	.align 4
	.type	__GLIBC_2_4_sys_nerr, @object
	.size	__GLIBC_2_4_sys_nerr, 4
__GLIBC_2_4_sys_nerr:
	.long	132
	.globl	__GLIBC_2_4__sys_nerr
	.set	__GLIBC_2_4__sys_nerr,__GLIBC_2_4_sys_nerr
	.globl	__GLIBC_2_3_sys_nerr
	.align 4
	.type	__GLIBC_2_3_sys_nerr, @object
	.size	__GLIBC_2_3_sys_nerr, 4
__GLIBC_2_3_sys_nerr:
	.long	126
	.globl	__GLIBC_2_3__sys_nerr
	.set	__GLIBC_2_3__sys_nerr,__GLIBC_2_3_sys_nerr
	.globl	__GLIBC_2_1_sys_nerr
	.align 4
	.type	__GLIBC_2_1_sys_nerr, @object
	.size	__GLIBC_2_1_sys_nerr, 4
__GLIBC_2_1_sys_nerr:
	.long	125
	.globl	__GLIBC_2_1__sys_nerr
	.set	__GLIBC_2_1__sys_nerr,__GLIBC_2_1_sys_nerr
	.globl	__GLIBC_2_0_sys_nerr
	.align 4
	.type	__GLIBC_2_0_sys_nerr, @object
	.size	__GLIBC_2_0_sys_nerr, 4
__GLIBC_2_0_sys_nerr:
	.long	123
	.globl	__GLIBC_2_0__sys_nerr
	.set	__GLIBC_2_0__sys_nerr,__GLIBC_2_0_sys_nerr
	.hidden	_sys_errlist_internal_len
	.globl	_sys_errlist_internal_len
	.align 4
	.type	_sys_errlist_internal_len, @object
	.size	_sys_errlist_internal_len, 4
_sys_errlist_internal_len:
	.long	134
	.hidden	_sys_errlist_internal
	.globl	_sys_errlist_internal
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"Success"
.LC1:
	.string	"Operation not permitted"
.LC2:
	.string	"No such file or directory"
.LC3:
	.string	"No such process"
.LC4:
	.string	"Interrupted system call"
.LC5:
	.string	"Input/output error"
.LC6:
	.string	"No such device or address"
.LC7:
	.string	"Argument list too long"
.LC8:
	.string	"Exec format error"
.LC9:
	.string	"Bad file descriptor"
.LC10:
	.string	"No child processes"
.LC11:
	.string	"Resource temporarily unavailable"
.LC12:
	.string	"Cannot allocate memory"
.LC13:
	.string	"Permission denied"
.LC14:
	.string	"Bad address"
.LC15:
	.string	"Block device required"
.LC16:
	.string	"Device or resource busy"
.LC17:
	.string	"File exists"
.LC18:
	.string	"Invalid cross-device link"
.LC19:
	.string	"No such device"
.LC20:
	.string	"Not a directory"
.LC21:
	.string	"Is a directory"
.LC22:
	.string	"Invalid argument"
.LC23:
	.string	"Too many open files in system"
.LC24:
	.string	"Too many open files"
.LC25:
	.string	"Inappropriate ioctl for device"
.LC26:
	.string	"Text file busy"
.LC27:
	.string	"File too large"
.LC28:
	.string	"No space left on device"
.LC29:
	.string	"Illegal seek"
.LC30:
	.string	"Read-only file system"
.LC31:
	.string	"Too many links"
.LC32:
	.string	"Broken pipe"
.LC33:
	.string	"Numerical argument out of domain"
.LC34:
	.string	"Numerical result out of range"
.LC35:
	.string	"Resource deadlock avoided"
.LC36:
	.string	"File name too long"
.LC37:
	.string	"No locks available"
.LC38:
	.string	"Function not implemented"
.LC39:
	.string	"Directory not empty"
.LC40:
	.string	"Too many levels of symbolic links"
.LC41:
	.string	"No message of desired type"
.LC42:
	.string	"Identifier removed"
.LC43:
	.string	"Channel number out of range"
.LC44:
	.string	"Level 2 not synchronized"
.LC45:
	.string	"Level 3 halted"
.LC46:
	.string	"Level 3 reset"
.LC47:
	.string	"Link number out of range"
.LC48:
	.string	"Protocol driver not attached"
.LC49:
	.string	"No CSI structure available"
.LC50:
	.string	"Level 2 halted"
.LC51:
	.string	"Invalid exchange"
.LC52:
	.string	"Invalid request descriptor"
.LC53:
	.string	"Exchange full"
.LC54:
	.string	"No anode"
.LC55:
	.string	"Invalid request code"
.LC56:
	.string	"Invalid slot"
.LC57:
	.string	"Bad font file format"
.LC58:
	.string	"Device not a stream"
.LC59:
	.string	"No data available"
.LC60:
	.string	"Timer expired"
.LC61:
	.string	"Out of streams resources"
.LC62:
	.string	"Machine is not on the network"
.LC63:
	.string	"Package not installed"
.LC64:
	.string	"Object is remote"
.LC65:
	.string	"Link has been severed"
.LC66:
	.string	"Advertise error"
.LC67:
	.string	"Srmount error"
.LC68:
	.string	"Communication error on send"
.LC69:
	.string	"Protocol error"
.LC70:
	.string	"Multihop attempted"
.LC71:
	.string	"RFS specific error"
.LC72:
	.string	"Bad message"
.LC73:
	.string	"Value too large for defined data type"
.LC74:
	.string	"Name not unique on network"
.LC75:
	.string	"File descriptor in bad state"
.LC76:
	.string	"Remote address changed"
.LC77:
	.string	"Can not access a needed shared library"
.LC78:
	.string	"Accessing a corrupted shared library"
.LC79:
	.string	".lib section in a.out corrupted"
.LC80:
	.string	"Attempting to link in too many shared libraries"
.LC81:
	.string	"Cannot exec a shared library directly"
.LC82:
	.string	"Invalid or incomplete multibyte or wide character"
.LC83:
	.string	"Interrupted system call should be restarted"
.LC84:
	.string	"Streams pipe error"
.LC85:
	.string	"Too many users"
.LC86:
	.string	"Socket operation on non-socket"
.LC87:
	.string	"Destination address required"
.LC88:
	.string	"Message too long"
.LC89:
	.string	"Protocol wrong type for socket"
.LC90:
	.string	"Protocol not available"
.LC91:
	.string	"Protocol not supported"
.LC92:
	.string	"Socket type not supported"
.LC93:
	.string	"Operation not supported"
.LC94:
	.string	"Protocol family not supported"
.LC95:
	.string	"Address family not supported by protocol"
.LC96:
	.string	"Address already in use"
.LC97:
	.string	"Cannot assign requested address"
.LC98:
	.string	"Network is down"
.LC99:
	.string	"Network is unreachable"
.LC100:
	.string	"Network dropped connection on reset"
.LC101:
	.string	"Software caused connection abort"
.LC102:
	.string	"Connection reset by peer"
.LC103:
	.string	"No buffer space available"
.LC104:
	.string	"Transport endpoint is already connected"
.LC105:
	.string	"Transport endpoint is not connected"
.LC106:
	.string	"Cannot send after transport endpoint shutdown"
.LC107:
	.string	"Too many references: cannot splice"
.LC108:
	.string	"Connection timed out"
.LC109:
	.string	"Connection refused"
.LC110:
	.string	"Host is down"
.LC111:
	.string	"No route to host"
.LC112:
	.string	"Operation already in progress"
.LC113:
	.string	"Operation now in progress"
.LC114:
	.string	"Stale file handle"
.LC115:
	.string	"Structure needs cleaning"
.LC116:
	.string	"Not a XENIX named type file"
.LC117:
	.string	"No XENIX semaphores available"
.LC118:
	.string	"Is a named type file"
.LC119:
	.string	"Remote I/O error"
.LC120:
	.string	"Disk quota exceeded"
.LC121:
	.string	"No medium found"
.LC122:
	.string	"Wrong medium type"
.LC123:
	.string	"Operation canceled"
.LC124:
	.string	"Required key not available"
.LC125:
	.string	"Key has expired"
.LC126:
	.string	"Key has been revoked"
.LC127:
	.string	"Key was rejected by service"
.LC128:
	.string	"Owner died"
.LC129:
	.string	"State not recoverable"
.LC130:
	.string	"Operation not possible due to RF-kill"
.LC131:
	.string	"Memory page has hardware error"
	.section	.data.rel.ro.local,"aw"
	.align 32
	.type	_sys_errlist_internal, @object
	.size	_sys_errlist_internal, 536
_sys_errlist_internal:
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
	.zero	4
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
	.zero	4
	.long	.LC57
	.long	.LC58
	.long	.LC59
	.long	.LC60
	.long	.LC61
	.long	.LC62
	.long	.LC63
	.long	.LC64
	.long	.LC65
	.long	.LC66
	.long	.LC67
	.long	.LC68
	.long	.LC69
	.long	.LC70
	.long	.LC71
	.long	.LC72
	.long	.LC73
	.long	.LC74
	.long	.LC75
	.long	.LC76
	.long	.LC77
	.long	.LC78
	.long	.LC79
	.long	.LC80
	.long	.LC81
	.long	.LC82
	.long	.LC83
	.long	.LC84
	.long	.LC85
	.long	.LC86
	.long	.LC87
	.long	.LC88
	.long	.LC89
	.long	.LC90
	.long	.LC91
	.long	.LC92
	.long	.LC93
	.long	.LC94
	.long	.LC95
	.long	.LC96
	.long	.LC97
	.long	.LC98
	.long	.LC99
	.long	.LC100
	.long	.LC101
	.long	.LC102
	.long	.LC103
	.long	.LC104
	.long	.LC105
	.long	.LC106
	.long	.LC107
	.long	.LC108
	.long	.LC109
	.long	.LC110
	.long	.LC111
	.long	.LC112
	.long	.LC113
	.long	.LC114
	.long	.LC115
	.long	.LC116
	.long	.LC117
	.long	.LC118
	.long	.LC119
	.long	.LC120
	.long	.LC121
	.long	.LC122
	.long	.LC123
	.long	.LC124
	.long	.LC125
	.long	.LC126
	.long	.LC127
	.long	.LC128
	.long	.LC129
	.long	.LC130
	.long	.LC131
	.ident	"GCC: (Buildroot -g22acba568) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
