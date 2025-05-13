/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../../gcc/config/i386/i386.md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "df.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "regs.h"
#include "emit-rtl.h"
#include "tm-constrs.h"
#include "target.h"

int
any_fp_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 23 "../../gcc/config/i386/predicates.md"
(ANY_FP_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
fp_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 28 "../../gcc/config/i386/predicates.md"
(STACK_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
general_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 33 "../../gcc/config/i386/predicates.md"
(GENERAL_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
nonimmediate_gr_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == REG) ? ((
#line 38 "../../gcc/config/i386/predicates.md"
(GENERAL_REGNO_P (REGNO (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode))) : (nonimmediate_operand (op, mode));
}

int
general_gr_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == REG) ? ((
#line 44 "../../gcc/config/i386/predicates.md"
(GENERAL_REGNO_P (REGNO (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode))) : (general_operand (op, mode));
}

int
mmx_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 50 "../../gcc/config/i386/predicates.md"
(MMX_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
register_mmxmem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((!(
#line 56 "../../gcc/config/i386/predicates.md"
(TARGET_MMX_WITH_SSE))) && (memory_operand (op, mode)));
}

int
sse_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 62 "../../gcc/config/i386/predicates.md"
(SSE_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
any_QIreg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 67 "../../gcc/config/i386/predicates.md"
(ANY_QI_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
QIreg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 72 "../../gcc/config/i386/predicates.md"
(QI_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
ext_QIreg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((
#line 76 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) && ((GET_CODE (op) == REG) && (!(
#line 78 "../../gcc/config/i386/predicates.md"
(QI_REGNO_P (REGNO (op))))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
ax_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 83 "../../gcc/config/i386/predicates.md"
(REGNO (op) == AX_REG))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
flags_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 88 "../../gcc/config/i386/predicates.md"
(REGNO (op) == FLAGS_REG))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
mask_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 93 "../../gcc/config/i386/predicates.md"
(MASK_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
int_nonimmediate_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (nonimmediate_operand (op, mode)) && (((
#line 98 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) && (
#line 99 "../../gcc/config/i386/predicates.md"
(GET_MODE (op) == DImode))) || ((
#line 100 "../../gcc/config/i386/predicates.md"
(GET_MODE (op) == SImode)) || ((
#line 101 "../../gcc/config/i386/predicates.md"
(GET_MODE (op) == HImode)) || (
#line 102 "../../gcc/config/i386/predicates.md"
(GET_MODE (op) == QImode)))));
}

int
register_ssemem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 107 "../../gcc/config/i386/predicates.md"
(SSE_FLOAT_MODE_P (mode) && TARGET_SSE_MATH)) ? (nonimmediate_operand (op, mode)) : (register_operand (op, mode));
}

int
nonimm_ssenomem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((
#line 115 "../../gcc/config/i386/predicates.md"
(SSE_FLOAT_MODE_P (mode) && TARGET_SSE_MATH)) && (!(
#line 116 "../../gcc/config/i386/predicates.md"
(TARGET_MIX_SSE_I387)))) ? (register_operand (op, mode)) : (nonimmediate_operand (op, mode));
}

int
x87nonimm_ssenomem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((
#line 123 "../../gcc/config/i386/predicates.md"
(SSE_FLOAT_MODE_P (mode) && TARGET_SSE_MATH)) && (!(
#line 124 "../../gcc/config/i386/predicates.md"
(TARGET_MIX_SSE_I387 && X87_ENABLE_ARITH (mode))))) ? (register_operand (op, mode)) : (nonimmediate_operand (op, mode));
}

int
register_sse4nonimm_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 130 "../../gcc/config/i386/predicates.md"
(TARGET_SSE4_1)) ? (nonimmediate_operand (op, mode)) : (register_operand (op, mode));
}

int
symbol_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == SYMBOL_REF) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
ix86_endbr_immediate_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 141 "../../gcc/config/i386/predicates.md"
{
  if (flag_cf_protection & CF_BRANCH)
     {
       unsigned HOST_WIDE_INT imm = UINTVAL (op);
       unsigned HOST_WIDE_INT val = TARGET_64BIT ? 0xfa1e0ff3 : 0xfb1e0ff3;

       if (imm == val)
	 return 1;

       /* NB: Encoding is byte based.  */
       if (TARGET_64BIT)
	 for (; imm >= val; imm >>= 8)
	   if (imm == val)
	     return 1;
      }

  return 0;
}

int
ix86_endbr_immediate_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(ix86_endbr_immediate_operand_1 (op, mode)));
}

static inline int
x86_64_immediate_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 163 "../../gcc/config/i386/predicates.md"
{
  if (ix86_endbr_immediate_operand (op, VOIDmode))
    return false;

  if (!TARGET_64BIT)
    return immediate_operand (op, mode);

  switch (GET_CODE (op))
    {
    case CONST_INT:
      {
        HOST_WIDE_INT val = INTVAL (op);
        return trunc_int_for_mode (val, SImode) == val;
      }
    case SYMBOL_REF:
      /* TLS symbols are not constant.  */
      if (SYMBOL_REF_TLS_MODEL (op))
	return false;

      /* Load the external function address via the GOT slot.  */
      if (ix86_force_load_from_GOT_p (op))
	return false;

      /* For certain code models, the symbolic references are known to fit.
	 in CM_SMALL_PIC model we know it fits if it is local to the shared
	 library.  Don't count TLS SYMBOL_REFs here, since they should fit
	 only if inside of UNSPEC handled below.  */
      return (ix86_cmodel == CM_SMALL || ix86_cmodel == CM_KERNEL
	      || (ix86_cmodel == CM_MEDIUM && !SYMBOL_REF_FAR_ADDR_P (op)));

    case LABEL_REF:
      /* For certain code models, the code is near as well.  */
      return (ix86_cmodel == CM_SMALL || ix86_cmodel == CM_MEDIUM
	      || ix86_cmodel == CM_KERNEL);

    case CONST:
      /* We also may accept the offsetted memory references in certain
	 special cases.  */
      if (GET_CODE (XEXP (op, 0)) == UNSPEC)
	switch (XINT (XEXP (op, 0), 1))
	  {
	  case UNSPEC_GOTPCREL:
	  case UNSPEC_DTPOFF:
	  case UNSPEC_GOTNTPOFF:
	  case UNSPEC_NTPOFF:
	    return true;
	  default:
	    break;
	  }

      if (GET_CODE (XEXP (op, 0)) == PLUS)
	{
	  rtx op1 = XEXP (XEXP (op, 0), 0);
	  rtx op2 = XEXP (XEXP (op, 0), 1);

	  if (ix86_cmodel == CM_LARGE && GET_CODE (op1) != UNSPEC)
	    return false;
	  if (!CONST_INT_P (op2))
	    return false;

	  HOST_WIDE_INT offset = INTVAL (op2);
	  if (trunc_int_for_mode (offset, SImode) != offset)
	    return false;

	  switch (GET_CODE (op1))
	    {
	    case SYMBOL_REF:
	      /* TLS symbols are not constant.  */
	      if (SYMBOL_REF_TLS_MODEL (op1))
		return false;

	      /* Load the external function address via the GOT slot.  */
	      if (ix86_force_load_from_GOT_p (op1))
	        return false;

	      /* For CM_SMALL assume that latest object is 16MB before
		 end of 31bits boundary.  We may also accept pretty
		 large negative constants knowing that all objects are
		 in the positive half of address space.  */
	      if ((ix86_cmodel == CM_SMALL
		   || (ix86_cmodel == CM_MEDIUM
		       && !SYMBOL_REF_FAR_ADDR_P (op1)))
		  && offset < 16*1024*1024)
		return true;
	      /* For CM_KERNEL we know that all object resist in the
		 negative half of 32bits address space.  We may not
		 accept negative offsets, since they may be just off
		 and we may accept pretty large positive ones.  */
	      if (ix86_cmodel == CM_KERNEL
		  && offset > 0)
		return true;
	      break;

	    case LABEL_REF:
	      /* These conditions are similar to SYMBOL_REF ones, just the
		 constraints for code models differ.  */
	      if ((ix86_cmodel == CM_SMALL || ix86_cmodel == CM_MEDIUM)
		  && offset < 16*1024*1024)
		return true;
	      if (ix86_cmodel == CM_KERNEL
		  && offset > 0)
		return true;
	      break;

	    case UNSPEC:
	      switch (XINT (op1, 1))
		{
		case UNSPEC_DTPOFF:
		case UNSPEC_NTPOFF:
		  return true;
		}
	      break;

	    default:
	      break;
	    }
	}
      break;

      default:
	gcc_unreachable ();
    }

  return false;
}

int
x86_64_immediate_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case SYMBOL_REF:
    case LABEL_REF:
    case CONST:
      break;
    default:
      return false;
    }
  return (
(x86_64_immediate_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline int
x86_64_zext_immediate_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 292 "../../gcc/config/i386/predicates.md"
{
  if (ix86_endbr_immediate_operand (op, VOIDmode))
    return false;

  switch (GET_CODE (op))
    {
    case CONST_INT:
      return !(INTVAL (op) & ~(HOST_WIDE_INT) 0xffffffff);

    case SYMBOL_REF:
      /* TLS symbols are not constant.  */
      if (SYMBOL_REF_TLS_MODEL (op))
	return false;

      /* Load the external function address via the GOT slot.  */
      if (ix86_force_load_from_GOT_p (op))
	return false;

     /* For certain code models, the symbolic references are known to fit.  */
      return (ix86_cmodel == CM_SMALL
	      || (ix86_cmodel == CM_MEDIUM
		  && !SYMBOL_REF_FAR_ADDR_P (op)));

    case LABEL_REF:
      /* For certain code models, the code is near as well.  */
      return ix86_cmodel == CM_SMALL || ix86_cmodel == CM_MEDIUM;

    case CONST:
      /* We also may accept the offsetted memory references in certain
	 special cases.  */
      if (GET_CODE (XEXP (op, 0)) == PLUS)
	{
	  rtx op1 = XEXP (XEXP (op, 0), 0);
	  rtx op2 = XEXP (XEXP (op, 0), 1);

	  if (ix86_cmodel == CM_LARGE)
	    return false;
	  if (!CONST_INT_P (op2))
	    return false;

	  HOST_WIDE_INT offset = INTVAL (op2);
	  if (trunc_int_for_mode (offset, SImode) != offset)
	    return false;

	  switch (GET_CODE (op1))
	    {
	    case SYMBOL_REF:
	      /* TLS symbols are not constant.  */
	      if (SYMBOL_REF_TLS_MODEL (op1))
		return false;

	      /* Load the external function address via the GOT slot.  */
	      if (ix86_force_load_from_GOT_p (op1))
	        return false;

	      /* For small code model we may accept pretty large positive
		 offsets, since one bit is available for free.  Negative
		 offsets are limited by the size of NULL pointer area
		 specified by the ABI.  */
	      if ((ix86_cmodel == CM_SMALL
		   || (ix86_cmodel == CM_MEDIUM
		       && !SYMBOL_REF_FAR_ADDR_P (op1)))
		  && offset > -0x10000)
		return true;
	      /* ??? For the kernel, we may accept adjustment of
		 -0x10000000, since we know that it will just convert
		 negative address space to positive, but perhaps this
		 is not worthwhile.  */
	      break;

	    case LABEL_REF:
	      /* These conditions are similar to SYMBOL_REF ones, just the
		 constraints for code models differ.  */
	      if ((ix86_cmodel == CM_SMALL || ix86_cmodel == CM_MEDIUM)
		  && offset > -0x10000)
		return true;
	      break;

	    default:
	      return false;
	    }
	}
      break;

    default:
      gcc_unreachable ();
    }
  return false;
}

int
x86_64_zext_immediate_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case SYMBOL_REF:
    case LABEL_REF:
    case CONST:
      break;
    default:
      return false;
    }
  return (
(x86_64_zext_immediate_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline int
x86_64_hilo_int_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 386 "../../gcc/config/i386/predicates.md"
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
      return x86_64_immediate_operand (op, mode);

    case CONST_WIDE_INT:
      gcc_assert (CONST_WIDE_INT_NUNITS (op) == 2);
      return (x86_64_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (op, 0)),
					DImode)
	      && x86_64_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (op,
									1)),
					   DImode));

    default:
      gcc_unreachable ();
    }
}

int
x86_64_hilo_int_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_WIDE_INT:
      break;
    default:
      return false;
    }
  return 
(x86_64_hilo_int_operand_1 (op, mode));
}

static inline int
x86_64_dwzext_immediate_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 409 "../../gcc/config/i386/predicates.md"
{
  if (ix86_endbr_immediate_operand (op, VOIDmode))
    return false;

  switch (GET_CODE (op))
    {
    case CONST_INT:
      if (!TARGET_64BIT)
	return UINTVAL (op) <= HOST_WIDE_INT_UC (0xffffffff);
      return UINTVAL (op) <= HOST_WIDE_INT_UC (0x7fffffff);

    case CONST_WIDE_INT:
      if (!TARGET_64BIT)
	return false;
      return (CONST_WIDE_INT_NUNITS (op) == 2
	      && CONST_WIDE_INT_ELT (op, 1) == 0
	      && (trunc_int_for_mode (CONST_WIDE_INT_ELT (op, 0), SImode)
		  == (HOST_WIDE_INT) CONST_WIDE_INT_ELT (op, 0)));

    default:
      gcc_unreachable ();
    }
}

int
x86_64_dwzext_immediate_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_WIDE_INT:
      break;
    default:
      return false;
    }
  return 
(x86_64_dwzext_immediate_operand_1 (op, mode));
}

int
x86_64_immediate_size_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SYMBOL_REF) && ((!(
#line 437 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT))) || ((
#line 438 "../../gcc/config/i386/predicates.md"
(ix86_cmodel == CM_SMALL)) || (
#line 439 "../../gcc/config/i386/predicates.md"
(ix86_cmodel == CM_KERNEL))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
x86_64_general_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 443 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? ((nonimmediate_operand (op, mode)) || (x86_64_immediate_operand (op, mode))) : (general_operand (op, mode));
}

int
x86_64_hilo_general_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 451 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? ((nonimmediate_operand (op, mode)) || (x86_64_hilo_int_operand (op, mode))) : (general_operand (op, mode));
}

int
x86_64_sext_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 460 "../../gcc/config/i386/predicates.md"
(GET_MODE (op) != VOIDmode)) && (x86_64_general_operand (op, mode));
}

int
sext_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 467 "../../gcc/config/i386/predicates.md"
(GET_MODE (op) != VOIDmode)) && (general_operand (op, mode));
}

int
x86_64_zext_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 474 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? ((nonimmediate_operand (op, mode)) || ((x86_64_zext_immediate_operand (op, mode)) && (
#line 477 "../../gcc/config/i386/predicates.md"
(GET_MODE (op) != VOIDmode)))) : (nonimmediate_operand (op, mode));
}

int
x86_64_szext_general_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 483 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? ((nonimmediate_operand (op, mode)) || ((x86_64_immediate_operand (op, mode)) || (x86_64_zext_immediate_operand (op, mode)))) : (general_operand (op, mode));
}

int
x86_64_nonmemory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 491 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? ((register_operand (op, mode)) || (x86_64_immediate_operand (op, mode))) : (nonmemory_operand (op, mode));
}

int
x86_64_szext_nonmemory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 498 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? ((register_operand (op, mode)) || ((x86_64_immediate_operand (op, mode)) || (x86_64_zext_immediate_operand (op, mode)))) : (nonmemory_operand (op, mode));
}

static inline int
pic_32bit_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 508 "../../gcc/config/i386/predicates.md"
{
  if (!flag_pic)
    return false;

  /* Rule out relocations that translate into 64bit constants.  */
  if (TARGET_64BIT && GET_CODE (op) == CONST)
    {
      op = XEXP (op, 0);
      if (GET_CODE (op) == PLUS && CONST_INT_P (XEXP (op, 1)))
	op = XEXP (op, 0);
      if (GET_CODE (op) == UNSPEC
	  && (XINT (op, 1) == UNSPEC_GOTOFF
	      || XINT (op, 1) == UNSPEC_GOT))
	return false;
    }

  return symbolic_operand (op, mode);
}

int
pic_32bit_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(pic_32bit_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

int
x86_64_movabs_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (nonmemory_operand (op, mode)) && (!(pic_32bit_operand (op, mode)));
}

static inline int
symbolic_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 536 "../../gcc/config/i386/predicates.md"
{
  switch (GET_CODE (op))
    {
    case SYMBOL_REF:
    case LABEL_REF:
      return true;

    case CONST:
      op = XEXP (op, 0);
      if (GET_CODE (op) == SYMBOL_REF
	  || GET_CODE (op) == LABEL_REF
	  || (GET_CODE (op) == UNSPEC
	      && (XINT (op, 1) == UNSPEC_GOT
		  || XINT (op, 1) == UNSPEC_GOTOFF
		  || XINT (op, 1) == UNSPEC_PCREL
		  || XINT (op, 1) == UNSPEC_GOTPCREL)))
	return true;
      if (GET_CODE (op) != PLUS
	  || !CONST_INT_P (XEXP (op, 1)))
	return false;

      op = XEXP (op, 0);
      if (GET_CODE (op) == SYMBOL_REF
	  || GET_CODE (op) == LABEL_REF)
	return true;
      /* Only @GOTOFF gets offsets.  */
      if (GET_CODE (op) != UNSPEC
	  || XINT (op, 1) != UNSPEC_GOTOFF)
	return false;

      op = XVECEXP (op, 0, 0);
      if (GET_CODE (op) == SYMBOL_REF
	  || GET_CODE (op) == LABEL_REF)
	return true;
      return false;

    default:
      gcc_unreachable ();
    }
}

int
symbolic_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SYMBOL_REF:
    case LABEL_REF:
    case CONST:
      break;
    default:
      return false;
    }
  return (
(symbolic_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline int
local_symbolic_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 580 "../../gcc/config/i386/predicates.md"
{
  if (GET_CODE (op) == CONST
      && GET_CODE (XEXP (op, 0)) == PLUS
      && CONST_INT_P (XEXP (XEXP (op, 0), 1)))
    op = XEXP (XEXP (op, 0), 0);

  if (GET_CODE (op) == LABEL_REF)
    return true;

  if (GET_CODE (op) != SYMBOL_REF)
    return false;

  if (SYMBOL_REF_TLS_MODEL (op))
    return false;

  /* Dll-imported symbols are always external.  */
  if (TARGET_DLLIMPORT_DECL_ATTRIBUTES && SYMBOL_REF_DLLIMPORT_P (op))
    return false;
  if (SYMBOL_REF_LOCAL_P (op))
    return true;

  /* There is, however, a not insubstantial body of code in the rest of
     the compiler that assumes it can just stick the results of
     ASM_GENERATE_INTERNAL_LABEL in a symbol_ref and have done.  */
  /* ??? This is a hack.  Should update the body of the compiler to
     always create a DECL an invoke targetm.encode_section_info.  */
  if (strncmp (XSTR (op, 0), internal_label_prefix,
	       internal_label_prefix_len) == 0)
    return true;

  return false;
}

int
local_symbolic_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      break;
    default:
      return false;
    }
  return (
(local_symbolic_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

int
gotoff_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (!(
#line 622 "../../gcc/config/i386/predicates.md"
(TARGET_VXWORKS_RTP))) && (local_symbolic_operand (op, mode));
}

int
tls_symbolic_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == SYMBOL_REF) && (
#line 628 "../../gcc/config/i386/predicates.md"
(SYMBOL_REF_TLS_MODEL (op)));
}

int
tls_modbase_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == SYMBOL_REF) && (
#line 632 "../../gcc/config/i386/predicates.md"
(op == ix86_tls_module_base ()));
}

int
tls_address_pattern (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SET:
    case PARALLEL:
    case UNSPEC:
    case UNSPEC_VOLATILE:
      break;
    default:
      return false;
    }
  return (
#line 636 "../../gcc/config/i386/predicates.md"
(ix86_tls_address_pattern_p (op))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
constant_call_address_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 641 "../../gcc/config/i386/predicates.md"
{
  if (ix86_cmodel == CM_LARGE || ix86_cmodel == CM_LARGE_PIC
      || flag_force_indirect_call)
    return false;
  if (TARGET_DLLIMPORT_DECL_ATTRIBUTES && SYMBOL_REF_DLLIMPORT_P (op))
    return false;
  return true;
}

int
constant_call_address_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SYMBOL_REF) && (
(constant_call_address_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
call_register_no_elim_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 656 "../../gcc/config/i386/predicates.md"
{
  if (SUBREG_P (op))
    op = SUBREG_REG (op);

  if (!TARGET_64BIT && op == stack_pointer_rtx)
    return false;

  return register_no_elim_operand (op, mode);
}

int
call_register_no_elim_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(call_register_no_elim_operand_1 (op, mode)));
}

static inline int
register_no_elim_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 670 "../../gcc/config/i386/predicates.md"
{
  if (SUBREG_P (op))
    op = SUBREG_REG (op);
  return !(op == arg_pointer_rtx
	   || op == frame_pointer_rtx
	   || IN_RANGE (REGNO (op),
			FIRST_PSEUDO_REGISTER, LAST_VIRTUAL_REGISTER));
}

int
register_no_elim_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(register_no_elim_operand_1 (op, mode)));
}

static inline int
index_register_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 683 "../../gcc/config/i386/predicates.md"
{
  if (SUBREG_P (op))
    op = SUBREG_REG (op);
  if (reload_completed)
    return REG_OK_FOR_INDEX_STRICT_P (op);
  else
    return REG_OK_FOR_INDEX_NONSTRICT_P (op);
}

int
index_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(index_register_operand_1 (op, mode)));
}

int
general_no_elim_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == REG || GET_CODE (op) == SUBREG) ? (register_no_elim_operand (op, mode)) : (general_operand (op, mode));
}

int
nonmemory_no_elim_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_no_elim_operand (op, mode)) || (immediate_operand (op, mode));
}

int
indirect_branch_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((!(
#line 707 "../../gcc/config/i386/predicates.md"
(TARGET_INDIRECT_BRANCH_REGISTER))) && ((!(
#line 708 "../../gcc/config/i386/predicates.md"
(TARGET_X32))) && (memory_operand (op, mode))));
}

static inline int
sibcall_memory_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 718 "../../gcc/config/i386/predicates.md"
{
  op = XEXP (op, 0);
  if (CONSTANT_P (op))
    return true;
  if (GET_CODE (op) == PLUS && REG_P (XEXP (op, 0)))
    {
      int regno = REGNO (XEXP (op, 0));
      if (!HARD_REGISTER_NUM_P (regno) || call_used_or_fixed_reg_p (regno))
	{
	  op = XEXP (op, 1);
	  if (GOT32_symbol_operand (op, VOIDmode))
	    return true;
	}
    }
  return false;
}

int
sibcall_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (
(sibcall_memory_operand_1 (op, mode)));
}

static inline int
GOT_memory_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 738 "../../gcc/config/i386/predicates.md"
{
  op = XEXP (op, 0);
  return (GET_CODE (op) == CONST
	  && GET_CODE (XEXP (op, 0)) == UNSPEC
	  && XINT (XEXP (op, 0), 1) == UNSPEC_GOTPCREL);
}

int
GOT_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (
(GOT_memory_operand_1 (op, mode)));
}

int
call_insn_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 748 "../../gcc/config/i386/predicates.md"
(constant_call_address_operand
		     (op, mode == VOIDmode ? mode : Pmode))) || ((call_register_no_elim_operand (op, mode)) || ((!(
#line 751 "../../gcc/config/i386/predicates.md"
(TARGET_INDIRECT_BRANCH_REGISTER))) && (((!(
#line 752 "../../gcc/config/i386/predicates.md"
(TARGET_X32))) && (memory_operand (op, mode))) || ((
#line 754 "../../gcc/config/i386/predicates.md"
(TARGET_X32 && Pmode == DImode)) && (GOT_memory_operand (op, mode))))));
}

int
sibcall_insn_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 759 "../../gcc/config/i386/predicates.md"
(constant_call_address_operand
		     (op, mode == VOIDmode ? mode : Pmode))) || ((register_no_elim_operand (op, mode)) || ((!(
#line 762 "../../gcc/config/i386/predicates.md"
(TARGET_INDIRECT_BRANCH_REGISTER))) && (((!(
#line 763 "../../gcc/config/i386/predicates.md"
(TARGET_X32))) && (sibcall_memory_operand (op, mode))) || ((
#line 765 "../../gcc/config/i386/predicates.md"
(TARGET_X32 && Pmode == DImode)) && (GOT_memory_operand (op, mode))))));
}

int
GOT32_symbol_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 770 "../../gcc/config/i386/predicates.md"
(GET_CODE (op) == CONST
               && GET_CODE (XEXP (op, 0)) == UNSPEC
               && XINT (XEXP (op, 0), 1) == UNSPEC_GOT)) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline int
const0_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 777 "../../gcc/config/i386/predicates.md"
{
  if (mode == VOIDmode)
    mode = GET_MODE (op);
  return op == CONST0_RTX (mode);
}

int
const0_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
(const0_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline int
const1_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 786 "../../gcc/config/i386/predicates.md"
{
  if (mode == VOIDmode)
    mode = GET_MODE (op);
  return op == CONST1_RTX (mode);
}

int
const1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
(const1_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

int
constm1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 795 "../../gcc/config/i386/predicates.md"
(op == constm1_rtx));
}

int
const8_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 800 "../../gcc/config/i386/predicates.md"
(INTVAL (op) == 8));
}

int
const128_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 805 "../../gcc/config/i386/predicates.md"
(INTVAL (op) == 128));
}

int
const_32bit_mask (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 810 "../../gcc/config/i386/predicates.md"
(trunc_int_for_mode (INTVAL (op), DImode)
		    == (HOST_WIDE_INT) 0xffffffff));
}

static inline int
const248_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 816 "../../gcc/config/i386/predicates.md"
{
  HOST_WIDE_INT i = INTVAL (op);
  return i == 2 || i == 4 || i == 8;
}

int
const248_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const248_operand_1 (op, mode)));
}

static inline int
const123_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 824 "../../gcc/config/i386/predicates.md"
{
  HOST_WIDE_INT i = INTVAL (op);
  return i == 1 || i == 2 || i == 3;
}

int
const123_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const123_operand_1 (op, mode)));
}

static inline int
const2367_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 832 "../../gcc/config/i386/predicates.md"
{
  HOST_WIDE_INT i = INTVAL (op);
  return i == 2 || i == 3 || i == 6 || i == 7;
}

int
const2367_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const2367_operand_1 (op, mode)));
}

static inline int
const1248_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 840 "../../gcc/config/i386/predicates.md"
{
  HOST_WIDE_INT i = INTVAL (op);
  return i == 1 || i == 2 || i == 4 || i == 8;
}

int
const1248_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const1248_operand_1 (op, mode)));
}

static inline int
const359_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 848 "../../gcc/config/i386/predicates.md"
{
  HOST_WIDE_INT i = INTVAL (op);
  return i == 3 || i == 5 || i == 9;
}

int
const359_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const359_operand_1 (op, mode)));
}

static inline int
const_4_or_8_to_11_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 856 "../../gcc/config/i386/predicates.md"
{
  HOST_WIDE_INT i = INTVAL (op);
  return i == 4 || (i >= 8 && i <= 11);
}

int
const_4_or_8_to_11_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const_4_or_8_to_11_operand_1 (op, mode)));
}

static inline int
const48_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 864 "../../gcc/config/i386/predicates.md"
{
  HOST_WIDE_INT i = INTVAL (op);
  return i == 4 || i == 8;
}

int
const48_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const48_operand_1 (op, mode)));
}

int
const_0_to_1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((
#line 872 "../../gcc/config/i386/predicates.md"
(op == const0_rtx)) || (
#line 873 "../../gcc/config/i386/predicates.md"
(op == const1_rtx)));
}

int
const_0_to_3_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 878 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 3)));
}

int
const_0_to_4_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 883 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 4)));
}

int
const_0_to_5_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 888 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 5)));
}

int
const_0_to_7_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 893 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 7)));
}

int
const_0_to_15_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 898 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 15)));
}

int
const_0_to_31_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 903 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 31)));
}

int
const_0_to_63_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 908 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 63)));
}

int
const_0_to_255_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 913 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 255)));
}

static inline int
const_0_to_255_mul_8_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 918 "../../gcc/config/i386/predicates.md"
{
  unsigned HOST_WIDE_INT val = INTVAL (op);
  return val <= 255*8 && val % 8 == 0;
}

int
const_0_to_255_mul_8_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const_0_to_255_mul_8_operand_1 (op, mode)));
}

int
const_1_to_31_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 927 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 1, 31)));
}

int
const_1_to_63_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 933 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 1, 63)));
}

int
const_2_to_3_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 938 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 2, 3)));
}

int
const_4_to_5_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 943 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 4, 5)));
}

int
const_4_to_7_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 948 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 4, 7)));
}

int
const_6_to_7_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 953 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 6, 7)));
}

int
const_8_to_9_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 958 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 8, 9)));
}

int
const_8_to_11_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 963 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 8, 11)));
}

int
const_8_to_15_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 968 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 8, 15)));
}

int
const_10_to_11_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 973 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 10, 11)));
}

int
const_12_to_13_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 978 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 12, 13)));
}

int
const_12_to_15_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 983 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 12, 15)));
}

int
const_14_to_15_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 988 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 14, 15)));
}

int
const_16_to_19_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 993 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 16, 19)));
}

int
const_16_to_31_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 998 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 16, 31)));
}

int
const_20_to_23_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 1003 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 20, 23)));
}

int
const_24_to_27_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 1008 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 24, 27)));
}

int
const_28_to_31_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 1013 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 28, 31)));
}

static inline int
incdec_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1018 "../../gcc/config/i386/predicates.md"
{
  /* On Pentium4, the inc and dec operations causes extra dependency on flag
     registers, since carry flag is not set.  */
  if (!TARGET_USE_INCDEC && !optimize_insn_for_size_p ())
    return false;
  return op == const1_rtx || op == constm1_rtx;
}

int
incdec_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(incdec_operand_1 (op, mode)));
}

int
vec_setm_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((register_operand (op, mode)) && (
#line 1029 "../../gcc/config/i386/predicates.md"
(TARGET_AVX2))) || ((GET_CODE (op) == CONST_INT) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode)));
}

int
reg_or_pm1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (((GET_CODE (op) == CONST_INT) && ((
#line 1036 "../../gcc/config/i386/predicates.md"
(op == const1_rtx)) || (
#line 1037 "../../gcc/config/i386/predicates.md"
(op == constm1_rtx)))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode)));
}

int
shiftdi_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 1041 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? (nonimmediate_operand (op, mode)) : (register_operand (op, mode));
}

int
ashldi_input_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 1046 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? (nonimmediate_operand (op, mode)) : (reg_or_pm1_operand (op, mode));
}

static inline int
zero_extended_scalar_load_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1054 "../../gcc/config/i386/predicates.md"
{
  unsigned n_elts;
  op = avoid_constant_pool_reference (op);

  if (GET_CODE (op) != CONST_VECTOR)
    return false;

  n_elts = CONST_VECTOR_NUNITS (op);

  for (n_elts--; n_elts > 0; n_elts--)
    {
      rtx elt = CONST_VECTOR_ELT (op, n_elts);
      if (elt != CONST0_RTX (GET_MODE_INNER (GET_MODE (op))))
	return false;
    }
  return true;
}

int
zero_extended_scalar_load_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
(zero_extended_scalar_load_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
float_vector_all_ones_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1075 "../../gcc/config/i386/predicates.md"
{
  mode = GET_MODE (op);
  if (!FLOAT_MODE_P (mode)
      || (MEM_P (op)
	  && (!SYMBOL_REF_P (XEXP (op, 0))
	      || !CONSTANT_POOL_ADDRESS_P (XEXP (op, 0)))))
    return false;

  if (MEM_P (op))
    {
      op = get_pool_constant (XEXP (op, 0));
      if (GET_CODE (op) != CONST_VECTOR)
	return false;

      if (GET_MODE (op) != mode
	 && INTEGRAL_MODE_P (GET_MODE (op))
	 && op == CONSTM1_RTX (GET_MODE (op)))
	return true;
    }

  rtx first = XVECEXP (op, 0, 0);
  for (int i = 1; i != GET_MODE_NUNITS (GET_MODE (op)); i++)
    {
      rtx tmp = XVECEXP (op, 0, i);
      if (!rtx_equal_p (tmp, first))
	return false;
    }
  if (GET_MODE (first) == E_SFmode)
    {
      long l;
      REAL_VALUE_TO_TARGET_SINGLE (*CONST_DOUBLE_REAL_VALUE (first), l);
      return (l & 0xffffffff) == 0xffffffff;
    }
  else if (GET_MODE (first) == E_DFmode)
    {
      long l[2];
      REAL_VALUE_TO_TARGET_DOUBLE (*CONST_DOUBLE_REAL_VALUE (first), l);
      return ((l[0] & 0xffffffff) == 0xffffffff
	     && (l[1] & 0xffffffff) == 0xffffffff);
    }
  else
    return false;
}

int
float_vector_all_ones_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_VECTOR:
    case MEM:
      break;
    default:
      return false;
    }
  return (
(float_vector_all_ones_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
vector_all_ones_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && ((
#line 1122 "../../gcc/config/i386/predicates.md"
(INTEGRAL_MODE_P (GET_MODE (op)))) && (
#line 1123 "../../gcc/config/i386/predicates.md"
(op == CONSTM1_RTX (GET_MODE (op)))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
vector_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && ((
#line 1129 "../../gcc/config/i386/predicates.md"
(TARGET_AVX)) || (
#line 1130 "../../gcc/config/i386/predicates.md"
(MEM_ALIGN (op) >= GET_MODE_ALIGNMENT (mode))));
}

int
vector_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (vector_memory_operand (op, mode));
}

int
bcst_mem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == VEC_DUPLICATE) && (((
#line 1139 "../../gcc/config/i386/predicates.md"
(TARGET_AVX512F)) && ((
#line 1140 "../../gcc/config/i386/predicates.md"
(TARGET_AVX512VL)) || (
#line 1141 "../../gcc/config/i386/predicates.md"
(GET_MODE_SIZE (GET_MODE (op)) == 64)))) && ((
#line 1142 "../../gcc/config/i386/predicates.md"
(VALID_BCST_MODE_P (GET_MODE_INNER (GET_MODE (op))))) && ((
#line 1143 "../../gcc/config/i386/predicates.md"
(GET_MODE (XEXP (op, 0))
		    == GET_MODE_INNER (GET_MODE (op)))) && (
#line 1145 "../../gcc/config/i386/predicates.md"
(memory_operand (XEXP (op, 0), GET_MODE (XEXP (op, 0))))))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
bcst_vector_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (vector_operand (op, mode)) || (bcst_mem_operand (op, mode));
}

int
nonimmediate_or_const_vector_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (nonimmediate_operand (op, mode)) || ((GET_CODE (op) == CONST_VECTOR) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

int
reg_or_const_vector_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((GET_CODE (op) == CONST_VECTOR) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

int
nonimmediate_or_sse_const_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (nonimmediate_operand (op, mode)) || ((
#line 1167 "../../gcc/config/i386/predicates.md"
(standard_sse_constant_p (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode)));
}

int
reg_or_0_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (const0_operand (op, mode));
}

int
nonimm_or_0_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (nonimmediate_operand (op, mode)) || (const0_operand (op, mode));
}

int
norex_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (!(
#line 1181 "../../gcc/config/i386/predicates.md"
(x86_extended_reg_mentioned_p (op))));
}

int
SImode_address_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SUBREG:
    case ZERO_EXTEND:
    case AND:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

static inline int
address_no_seg_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1192 "../../gcc/config/i386/predicates.md"
{
  struct ix86_address parts;
  int ok;

  if (!CONST_INT_P (op)
      && mode != VOIDmode
      && GET_MODE (op) != mode)
    return false;

  ok = ix86_decompose_address (op, &parts);
  gcc_assert (ok);
  return parts.seg == ADDR_SPACE_GENERIC;
}

int
address_no_seg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 1191 "../../gcc/config/i386/predicates.md"
(address_operand (op, VOIDmode))) && (
(address_no_seg_operand_1 (op, mode)));
}

static inline int
vsib_address_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1210 "../../gcc/config/i386/predicates.md"
{
  struct ix86_address parts;
  int ok;
  rtx disp;

  ok = ix86_decompose_address (op, &parts);
  gcc_assert (ok);
  if (parts.index || parts.seg != ADDR_SPACE_GENERIC)
    return false;

  /* VSIB addressing doesn't support (%rip).  */
  if (parts.disp)
    {
      disp = parts.disp;
      if (GET_CODE (disp) == CONST)
	{
	  disp = XEXP (disp, 0);
	  if (GET_CODE (disp) == PLUS)
	    disp = XEXP (disp, 0);
	  if (GET_CODE (disp) == UNSPEC)
	    switch (XINT (disp, 1))
	      {
	      case UNSPEC_GOTPCREL:
	      case UNSPEC_PCREL:
	      case UNSPEC_GOTNTPOFF:
		return false;
	      }
	}
      if (TARGET_64BIT
	  && flag_pic
	  && (GET_CODE (disp) == SYMBOL_REF
	      || GET_CODE (disp) == LABEL_REF))
	return false;
    }

  return true;
}

int
vsib_address_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((
#line 1209 "../../gcc/config/i386/predicates.md"
(address_operand (op, VOIDmode))) && (
(vsib_address_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

int
vsib_mem_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == MEM) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
aligned_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1254 "../../gcc/config/i386/predicates.md"
{
  struct ix86_address parts;
  int ok;

  /* Registers and immediate operands are always "aligned".  */
  if (!MEM_P (op))
    return true;

  /* All patterns using aligned_operand on memory operands ends up
     in promoting memory operand to 64bit and thus causing memory mismatch.  */
  if (TARGET_MEMORY_MISMATCH_STALL && !optimize_insn_for_size_p ())
    return false;

  /* Don't even try to do any aligned optimizations with volatiles.  */
  if (MEM_VOLATILE_P (op))
    return false;

  if (MEM_ALIGN (op) >= 32)
    return true;

  op = XEXP (op, 0);

  /* Pushes and pops are only valid on the stack pointer.  */
  if (GET_CODE (op) == PRE_DEC
      || GET_CODE (op) == POST_INC)
    return true;

  /* Decode the address.  */
  ok = ix86_decompose_address (op, &parts);
  gcc_assert (ok);

  if (parts.base && SUBREG_P (parts.base))
    parts.base = SUBREG_REG (parts.base);
  if (parts.index && SUBREG_P (parts.index))
    parts.index = SUBREG_REG (parts.index);

  /* Look for some component that isn't known to be aligned.  */
  if (parts.index)
    {
      if (REGNO_POINTER_ALIGN (REGNO (parts.index)) * parts.scale < 32)
	return false;
    }
  if (parts.base)
    {
      if (REGNO_POINTER_ALIGN (REGNO (parts.base)) < 32)
	return false;
    }
  if (parts.disp)
    {
      if (!CONST_INT_P (parts.disp)
	  || (INTVAL (parts.disp) & 3))
	return false;
    }

  /* Didn't find one -- this must be an aligned address.  */
  return true;
}

int
aligned_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (general_operand (op, mode)) && (
(aligned_operand_1 (op, mode)));
}

static inline int
memory_displacement_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1315 "../../gcc/config/i386/predicates.md"
{
  struct ix86_address parts;
  int ok;

  ok = ix86_decompose_address (XEXP (op, 0), &parts);
  gcc_assert (ok);
  return parts.disp != NULL_RTX;
}

int
memory_displacement_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (
(memory_displacement_operand_1 (op, mode)));
}

static inline int
memory_displacement_only_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1327 "../../gcc/config/i386/predicates.md"
{
  struct ix86_address parts;
  int ok;

  if (TARGET_64BIT)
    return false;

  ok = ix86_decompose_address (XEXP (op, 0), &parts);
  gcc_assert (ok);

  if (parts.base || parts.index)
    return false;

  return parts.disp != NULL_RTX;
}

int
memory_displacement_only_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (
(memory_displacement_only_operand_1 (op, mode)));
}

int
long_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (
#line 1347 "../../gcc/config/i386/predicates.md"
(memory_address_length (op, false)));
}

static inline int
fcmov_comparison_operator_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1352 "../../gcc/config/i386/predicates.md"
{
  machine_mode inmode = GET_MODE (XEXP (op, 0));
  enum rtx_code code = GET_CODE (op);

  if (inmode == CCFPmode)
    {
      if (!ix86_trivial_fp_comparison_operator (op, mode))
	return false;
      code = ix86_fp_compare_code_to_integer (code);
    }
  /* i387 supports just limited amount of conditional codes.  */
  switch (code)
    {
    case LTU: case GTU: case LEU: case GEU:
      if (inmode == CCmode || inmode == CCFPmode || inmode == CCCmode)
	return true;
      return false;
    case ORDERED: case UNORDERED:
    case EQ: case NE:
      return true;
    default:
      return false;
    }
}

int
fcmov_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (comparison_operator (op, mode)) && (
(fcmov_comparison_operator_1 (op, mode)));
}

int
sse_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == EQ || GET_CODE (op) == NE || GET_CODE (op) == LT || GET_CODE (op) == LE || GET_CODE (op) == UNORDERED || GET_CODE (op) == UNGE || GET_CODE (op) == UNGT || GET_CODE (op) == ORDERED) || ((
#line 1383 "../../gcc/config/i386/predicates.md"
(TARGET_AVX)) && (GET_CODE (op) == GE || GET_CODE (op) == GT || GET_CODE (op) == UNEQ || GET_CODE (op) == UNLE || GET_CODE (op) == UNLT || GET_CODE (op) == LTGT))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
ix86_comparison_int_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
ix86_comparison_uns_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case NE:
    case EQ:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
bt_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case NE:
    case EQ:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
shr_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case GTU:
    case LEU:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
add_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case GEU:
    case LTU:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

static inline int
ix86_comparison_operator_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1404 "../../gcc/config/i386/predicates.md"
{
  machine_mode inmode = GET_MODE (XEXP (op, 0));
  enum rtx_code code = GET_CODE (op);

  if (inmode == CCFPmode)
    return ix86_trivial_fp_comparison_operator (op, mode);

  switch (code)
    {
    case EQ: case NE:
      if (inmode == CCGZmode)
	return false;
      return true;
    case GE: case LT:
      if (inmode == CCmode || inmode == CCGCmode
	  || inmode == CCGOCmode || inmode == CCNOmode || inmode == CCGZmode)
	return true;
      return false;
    case GEU: case LTU:
      if (inmode == CCGZmode)
	return true;
      /* FALLTHRU */
    case GTU: case LEU:
      if (inmode == CCmode || inmode == CCCmode || inmode == CCGZmode)
	return true;
      return false;
    case ORDERED: case UNORDERED:
      if (inmode == CCmode)
	return true;
      return false;
    case GT: case LE:
      if (inmode == CCmode || inmode == CCGCmode || inmode == CCNOmode)
	return true;
      return false;
    default:
      return false;
    }
}

int
ix86_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (comparison_operator (op, mode)) && (
(ix86_comparison_operator_1 (op, mode)));
}

static inline int
ix86_carry_flag_operator_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1447 "../../gcc/config/i386/predicates.md"
{
  machine_mode inmode = GET_MODE (XEXP (op, 0));
  enum rtx_code code = GET_CODE (op);

  if (inmode == CCFPmode)
    {
      if (!ix86_trivial_fp_comparison_operator (op, mode))
	return false;
      code = ix86_fp_compare_code_to_integer (code);
    }
  else if (inmode == CCCmode)
   return code == LTU || code == GTU;
  else if (inmode != CCmode)
    return false;

  return code == LTU;
}

int
ix86_carry_flag_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case LTU:
    case LT:
    case UNLT:
    case GTU:
    case GT:
    case UNGT:
    case LE:
    case UNLE:
    case GE:
    case UNGE:
    case LTGT:
    case UNEQ:
      break;
    default:
      return false;
    }
  return (
(ix86_carry_flag_operator_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
ix86_trivial_fp_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case GT:
    case GE:
    case UNLT:
    case UNLE:
    case UNEQ:
    case LTGT:
    case ORDERED:
    case UNORDERED:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
ix86_fp_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 1473 "../../gcc/config/i386/predicates.md"
(ix86_fp_comparison_strategy (GET_CODE (op))
                             == IX86_FPCMP_ARITH)) ? (comparison_operator (op, mode)) : (ix86_trivial_fp_comparison_operator (op, mode));
}

int
cmp_fp_expander_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_DOUBLE) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode))) || (general_operand (op, mode));
}

int
binary_fp_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
mult_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == MULT) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
div_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == DIV) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
logic_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case AND:
    case IOR:
    case XOR:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
plusminuslogic_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case PLUS:
    case MINUS:
    case AND:
    case IOR:
    case XOR:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
arith_or_logical_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case PLUS:
    case MULT:
    case AND:
    case IOR:
    case XOR:
    case SMIN:
    case SMAX:
    case UMIN:
    case UMAX:
    case COMPARE:
    case MINUS:
    case DIV:
    case MOD:
    case UDIV:
    case UMOD:
    case ASHIFT:
    case ROTATE:
    case ASHIFTRT:
    case LSHIFTRT:
    case ROTATERT:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
commutative_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case PLUS:
    case MULT:
    case AND:
    case IOR:
    case XOR:
    case SMIN:
    case SMAX:
    case UMIN:
    case UMAX:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
promotable_binary_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PLUS || GET_CODE (op) == MINUS || GET_CODE (op) == AND || GET_CODE (op) == IOR || GET_CODE (op) == XOR || GET_CODE (op) == ASHIFT) || ((GET_CODE (op) == MULT) && (
#line 1518 "../../gcc/config/i386/predicates.md"
(TARGET_TUNE_PROMOTE_HIMODE_IMUL)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
compare_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == COMPARE) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
misaligned_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 1527 "../../gcc/config/i386/predicates.md"
(MEM_ALIGN (op) < GET_MODE_BITSIZE (mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
vzeroall_operation_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1532 "../../gcc/config/i386/predicates.md"
{
  unsigned i, nregs = TARGET_64BIT ? 16 : 8;

  if ((unsigned) XVECLEN (op, 0) != 1 + nregs)
    return false;

  for (i = 0; i < nregs; i++)
    {
      rtx elt = XVECEXP (op, 0, i+1);

      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != V8SImode
	  || REGNO (SET_DEST (elt)) != GET_SSE_REGNO (i)
	  || SET_SRC (elt) != CONST0_RTX (V8SImode))
	return false;
    }
  return true;
}

int
vzeroall_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(vzeroall_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
vzeroall_pattern (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && ((GET_CODE (XVECEXP (op, 0, 0)) == UNSPEC_VOLATILE) && (
#line 1556 "../../gcc/config/i386/predicates.md"
(XINT (XVECEXP (op, 0, 0), 1) == UNSPECV_VZEROALL)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
vzeroupper_pattern (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && ((GET_CODE (XVECEXP (op, 0, 0)) == UNSPEC_VOLATILE) && (
#line 1562 "../../gcc/config/i386/predicates.md"
(XINT (XVECEXP (op, 0, 0), 1) == UNSPECV_VZEROUPPER)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
addsub_vm_operator_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1567 "../../gcc/config/i386/predicates.md"
{
  rtx op0, op1;
  int swapped;
  HOST_WIDE_INT mask;
  int nunits, elt;

  op0 = XEXP (op, 0);
  op1 = XEXP (op, 1);

  /* Sanity check.  */
  if (GET_CODE (op0) == MINUS && GET_CODE (op1) == PLUS)
    swapped = 0;
  else if (GET_CODE (op0) == PLUS && GET_CODE (op1) == MINUS)
    swapped = 1;
  else
    gcc_unreachable ();

  mask = INTVAL (XEXP (op, 2));
  nunits = GET_MODE_NUNITS (mode);

  for (elt = 0; elt < nunits; elt++)
    {
      /* bit clear: take from op0, set: take from op1  */
      int bit = !(mask & (HOST_WIDE_INT_1U << elt));

      if (bit != ((elt & 1) ^ swapped))
	return false;
    }

  return true;
}

int
addsub_vm_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == VEC_MERGE) && (
(addsub_vm_operator_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
addsub_vs_operator_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1603 "../../gcc/config/i386/predicates.md"
{
  rtx op0, op1;
  bool swapped;
  int nunits, elt;

  op0 = XEXP (XEXP (op, 0), 0);
  op1 = XEXP (XEXP (op, 0), 1);

  /* Sanity check.  */
  if (GET_CODE (op0) == MINUS && GET_CODE (op1) == PLUS)
    swapped = false;
  else if (GET_CODE (op0) == PLUS && GET_CODE (op1) == MINUS)
    swapped = true;
  else
    gcc_unreachable ();

  nunits = GET_MODE_NUNITS (mode);
  if (XVECLEN (XEXP (op, 1), 0) != nunits)
    return false;

  /* We already checked that permutation is suitable for addsub,
     so only look at the first element of the parallel.  */
  elt = INTVAL (XVECEXP (XEXP (op, 1), 0, 0));

  return elt == (swapped ? nunits : 0);
}

int
addsub_vs_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == VEC_SELECT) && (GET_CODE (XEXP (op, 0)) == VEC_CONCAT)) && (
(addsub_vs_operator_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
addsub_vs_parallel_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1634 "../../gcc/config/i386/predicates.md"
{
  int nelt = XVECLEN (op, 0);
  int elt, i;
  
  if (nelt < 2)
    return false;

  /* Check that the permutation is suitable for addsub.
     For example, { 0 9 2 11 4 13 6 15 } or { 8 1 10 3 12 5 14 7 }.  */
  elt = INTVAL (XVECEXP (op, 0, 0));
  if (elt == 0)
    {
      for (i = 1; i < nelt; ++i)
	if (INTVAL (XVECEXP (op, 0, i)) != (i + (i & 1) * nelt))
	  return false;
    }
  else if (elt == nelt)
    {
      for (i = 1; i < nelt; ++i)
	if (INTVAL (XVECEXP (op, 0, i)) != (elt + i - (i & 1) * nelt))
	  return false;
    }
  else
    return false;

  return true;
}

int
addsub_vs_parallel (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == PARALLEL) && (GET_CODE (XVECEXP (op, 0, 0)) == CONST_INT)) && (
(addsub_vs_parallel_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
pmovzx_parallel_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1667 "../../gcc/config/i386/predicates.md"
{
  int nelt = XVECLEN (op, 0);
  int elt, i;

  if (nelt < 2)
    return false;

  /* Check that the permutation is suitable for pmovz{bw,wd,dq}.
     For example { 0 16 1 17 2 18 3 19 4 20 5 21 6 22 7 23 }.  */
  elt = INTVAL (XVECEXP (op, 0, 0));
  if (elt == 0)
    {
      for (i = 1; i < nelt; ++i)
	if ((i & 1) != 0)
	  {
	    if (INTVAL (XVECEXP (op, 0, i)) < nelt)
	      return false;
	  }
	else if (INTVAL (XVECEXP (op, 0, i)) != i / 2)
	  return false;
    }
  else
    return false;

  return true;
}

int
pmovzx_parallel (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == PARALLEL) && (GET_CODE (XVECEXP (op, 0, 0)) == CONST_INT)) && (
(pmovzx_parallel_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
avx_vbroadcast_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1698 "../../gcc/config/i386/predicates.md"
{
  rtx elt = XVECEXP (op, 0, 0);
  int i, nelt = XVECLEN (op, 0);

  /* Don't bother checking there are the right number of operands,
     merely that they're all identical.  */
  for (i = 1; i < nelt; ++i)
    if (XVECEXP (op, 0, i) != elt)
      return false;
  return true;
}

int
avx_vbroadcast_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == PARALLEL) && (GET_CODE (XVECEXP (op, 0, 0)) == CONST_INT)) && (
(avx_vbroadcast_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
palignr_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1714 "../../gcc/config/i386/predicates.md"
{
  int elt = INTVAL (XVECEXP (op, 0, 0));
  int i, nelt = XVECLEN (op, 0);

  /* Check that an order in the permutation is suitable for palignr.
     For example, {5 6 7 0 1 2 3 4} is "palignr 5, xmm, xmm".  */
  for (i = 1; i < nelt; ++i)
    if (INTVAL (XVECEXP (op, 0, i)) != ((elt + i) % nelt))
      return false;
  return true;
}

int
palignr_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == PARALLEL) && (GET_CODE (XVECEXP (op, 0, 0)) == CONST_INT)) && (
(palignr_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
avx2_pblendw_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1729 "../../gcc/config/i386/predicates.md"
{
  HOST_WIDE_INT val = INTVAL (op);
  HOST_WIDE_INT low = val & 0xff;
  return val == ((low << 8) | low);
}

int
avx2_pblendw_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(avx2_pblendw_operand_1 (op, mode)));
}

int
general_vector_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (vector_operand (op, mode)) || ((GET_CODE (op) == CONST_VECTOR) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

int
register_or_constm1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (((GET_CODE (op) == CONST_INT) && (
#line 1744 "../../gcc/config/i386/predicates.md"
(op == constm1_rtx))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode)));
}

static inline int
save_multiple_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1750 "../../gcc/config/i386/predicates.md"
{
  const unsigned len = XVECLEN (op, 0);
  unsigned i;

  /* Starting from end of vector, count register saves.  */
  for (i = 0; i < len; ++i)
    {
      rtx src, dest, addr;
      rtx e = XVECEXP (op, 0, len - 1 - i);

      if (GET_CODE (e) != SET)
	break;

      src  = SET_SRC (e);
      dest = SET_DEST (e);

      if (!REG_P (src) || !MEM_P (dest))
	break;

      addr = XEXP (dest, 0);

      /* Good if dest address is in RAX.  */
      if (REG_P (addr) && REGNO (addr) == AX_REG)
	continue;

      /* Good if dest address is offset of RAX.  */
      if (GET_CODE (addr) == PLUS
	  && REG_P (XEXP (addr, 0))
	  && REGNO (XEXP (addr, 0)) == AX_REG)
	continue;

      break;
    }
  return (i >= 12 && i <= 18);
}

int
save_multiple (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(save_multiple_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
restore_multiple_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1791 "../../gcc/config/i386/predicates.md"
{
  const unsigned len = XVECLEN (op, 0);
  unsigned i;

  /* Starting from end of vector, count register restores.  */
  for (i = 0; i < len; ++i)
    {
      rtx src, dest, addr;
      rtx e = XVECEXP (op, 0, len - 1 - i);

      if (GET_CODE (e) != SET)
	break;

      src  = SET_SRC (e);
      dest = SET_DEST (e);

      if (!MEM_P (src) || !REG_P (dest))
	break;

      addr = XEXP (src, 0);

      /* Good if src address is in RSI.  */
      if (REG_P (addr) && REGNO (addr) == SI_REG)
	continue;

      /* Good if src address is offset of RSI.  */
      if (GET_CODE (addr) == PLUS
	  && REG_P (XEXP (addr, 0))
	  && REGNO (XEXP (addr, 0)) == SI_REG)
	continue;

      break;
    }
  return (i >= 12 && i <= 18);
}

int
restore_multiple (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(restore_multiple_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
encodekey128_operation_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1830 "../../gcc/config/i386/predicates.md"
{
  unsigned i;
  rtx elt;

  if (XVECLEN (op, 0) != 8)
    return false;

  for(i = 0; i < 3; i++)
    {
      elt = XVECEXP (op, 0, i + 1);
      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != V2DImode
	  || REGNO (SET_DEST (elt)) != GET_SSE_REGNO (i)
	  || GET_CODE (SET_SRC (elt)) != UNSPEC_VOLATILE
	  || GET_MODE (SET_SRC (elt)) != V2DImode
	  || XVECLEN(SET_SRC (elt), 0) != 1
	  || XVECEXP(SET_SRC (elt), 0, 0) != const0_rtx)
	return false;
    }

  for(i = 4; i < 7; i++)
    {
      elt = XVECEXP (op, 0, i);
      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != V2DImode
	  || REGNO (SET_DEST (elt)) != GET_SSE_REGNO (i)
	  || SET_SRC (elt) != CONST0_RTX (V2DImode))
	return false;
    }

  elt = XVECEXP (op, 0, 7);
  if (GET_CODE (elt) != CLOBBER
      || GET_MODE (elt) != VOIDmode
      || GET_CODE (XEXP (elt, 0)) != REG
      || GET_MODE (XEXP (elt, 0)) != CCmode
      || REGNO (XEXP (elt, 0)) != FLAGS_REG)
    return false;
  return true;
}

int
encodekey128_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(encodekey128_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
encodekey256_operation_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1874 "../../gcc/config/i386/predicates.md"
{
  unsigned i;
  rtx elt;

  if (XVECLEN (op, 0) != 9)
    return false;

  elt = SET_SRC (XVECEXP (op, 0, 0));
  elt = XVECEXP (elt, 0, 2);
  if (!REG_P (elt)
      || REGNO(elt) != GET_SSE_REGNO (1))
    return false;

  for(i = 0; i < 4; i++)
    {
      elt = XVECEXP (op, 0, i + 1);
      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != V2DImode
	  || REGNO (SET_DEST (elt)) != GET_SSE_REGNO (i)
	  || GET_CODE (SET_SRC (elt)) != UNSPEC_VOLATILE
	  || GET_MODE (SET_SRC (elt)) != V2DImode
	  || XVECLEN(SET_SRC (elt), 0) != 1
	  || XVECEXP(SET_SRC (elt), 0, 0) != const0_rtx)
	return false;
    }

  for(i = 4; i < 7; i++)
    {
      elt = XVECEXP (op, 0, i + 1);
      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != V2DImode
	  || REGNO (SET_DEST (elt)) != GET_SSE_REGNO (i)
	  || SET_SRC (elt) != CONST0_RTX (V2DImode))
	return false;
    }

  elt = XVECEXP (op, 0, 8);
  if (GET_CODE (elt) != CLOBBER
      || GET_MODE (elt) != VOIDmode
      || GET_CODE (XEXP (elt, 0)) != REG
      || GET_MODE (XEXP (elt, 0)) != CCmode
      || REGNO (XEXP (elt, 0)) != FLAGS_REG)
    return false;
  return true;
}

int
encodekey256_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(encodekey256_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
aeswidekl_operation_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1925 "../../gcc/config/i386/predicates.md"
{
  unsigned i;
  rtx elt;

  for (i = 0; i < 8; i++)
    {
      elt = XVECEXP (op, 0, i + 1);
      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != V2DImode
	  || REGNO (SET_DEST (elt)) != GET_SSE_REGNO (i)
	  || GET_CODE (SET_SRC (elt)) != UNSPEC_VOLATILE
	  || GET_MODE (SET_SRC (elt)) != V2DImode
	  || XVECLEN (SET_SRC (elt), 0) != 1
	  || REGNO (XVECEXP (SET_SRC (elt), 0, 0)) != GET_SSE_REGNO (i))
	return false;
    }
  return true;
}

int
aeswidekl_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(aeswidekl_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

enum constraint_num
lookup_constraint_1 (const char *str)
{
  switch (str[0])
    {
    case '<':
      return CONSTRAINT__l;
    case '>':
      return CONSTRAINT__g;
    case 'A':
      return CONSTRAINT_A;
    case 'B':
      if (!strncmp (str + 1, "g", 1))
        return CONSTRAINT_Bg;
      if (!strncmp (str + 1, "m", 1))
        return CONSTRAINT_Bm;
      if (!strncmp (str + 1, "c", 1))
        return CONSTRAINT_Bc;
      if (!strncmp (str + 1, "k", 1))
        return CONSTRAINT_Bk;
      if (!strncmp (str + 1, "n", 1))
        return CONSTRAINT_Bn;
      if (!strncmp (str + 1, "r", 1))
        return CONSTRAINT_Br;
      if (!strncmp (str + 1, "s", 1))
        return CONSTRAINT_Bs;
      if (!strncmp (str + 1, "w", 1))
        return CONSTRAINT_Bw;
      if (!strncmp (str + 1, "z", 1))
        return CONSTRAINT_Bz;
      if (!strncmp (str + 1, "C", 1))
        return CONSTRAINT_BC;
      if (!strncmp (str + 1, "f", 1))
        return CONSTRAINT_Bf;
      break;
    case 'C':
      return CONSTRAINT_C;
    case 'D':
      return CONSTRAINT_D;
    case 'E':
      return CONSTRAINT_E;
    case 'F':
      return CONSTRAINT_F;
    case 'G':
      return CONSTRAINT_G;
    case 'I':
      return CONSTRAINT_I;
    case 'J':
      return CONSTRAINT_J;
    case 'K':
      return CONSTRAINT_K;
    case 'L':
      return CONSTRAINT_L;
    case 'M':
      return CONSTRAINT_M;
    case 'N':
      return CONSTRAINT_N;
    case 'O':
      return CONSTRAINT_O;
    case 'Q':
      return CONSTRAINT_Q;
    case 'R':
      return CONSTRAINT_R;
    case 'S':
      return CONSTRAINT_S;
    case 'T':
      if (!strncmp (str + 1, "s", 1))
        return CONSTRAINT_Ts;
      if (!strncmp (str + 1, "v", 1))
        return CONSTRAINT_Tv;
      break;
    case 'U':
      return CONSTRAINT_U;
    case 'V':
      return CONSTRAINT_V;
    case 'W':
      if (!strncmp (str + 1, "z", 1))
        return CONSTRAINT_Wz;
      if (!strncmp (str + 1, "d", 1))
        return CONSTRAINT_Wd;
      if (!strncmp (str + 1, "f", 1))
        return CONSTRAINT_Wf;
      if (!strncmp (str + 1, "e", 1))
        return CONSTRAINT_We;
      break;
    case 'X':
      return CONSTRAINT_X;
    case 'Y':
      if (!strncmp (str + 1, "z", 1))
        return CONSTRAINT_Yz;
      if (!strncmp (str + 1, "d", 1))
        return CONSTRAINT_Yd;
      if (!strncmp (str + 1, "p", 1))
        return CONSTRAINT_Yp;
      if (!strncmp (str + 1, "a", 1))
        return CONSTRAINT_Ya;
      if (!strncmp (str + 1, "b", 1))
        return CONSTRAINT_Yb;
      if (!strncmp (str + 1, "f", 1))
        return CONSTRAINT_Yf;
      if (!strncmp (str + 1, "r", 1))
        return CONSTRAINT_Yr;
      if (!strncmp (str + 1, "v", 1))
        return CONSTRAINT_Yv;
      if (!strncmp (str + 1, "w", 1))
        return CONSTRAINT_Yw;
      if (!strncmp (str + 1, "W", 1))
        return CONSTRAINT_YW;
      if (!strncmp (str + 1, "k", 1))
        return CONSTRAINT_Yk;
      break;
    case 'Z':
      return CONSTRAINT_Z;
    case 'a':
      return CONSTRAINT_a;
    case 'b':
      return CONSTRAINT_b;
    case 'c':
      return CONSTRAINT_c;
    case 'd':
      return CONSTRAINT_d;
    case 'e':
      return CONSTRAINT_e;
    case 'f':
      return CONSTRAINT_f;
    case 'i':
      return CONSTRAINT_i;
    case 'k':
      return CONSTRAINT_k;
    case 'l':
      return CONSTRAINT_l;
    case 'm':
      return CONSTRAINT_m;
    case 'n':
      return CONSTRAINT_n;
    case 'o':
      return CONSTRAINT_o;
    case 'p':
      return CONSTRAINT_p;
    case 'q':
      return CONSTRAINT_q;
    case 'r':
      return CONSTRAINT_r;
    case 's':
      return CONSTRAINT_s;
    case 't':
      return CONSTRAINT_t;
    case 'u':
      return CONSTRAINT_u;
    case 'v':
      return CONSTRAINT_v;
    case 'x':
      return CONSTRAINT_x;
    case 'y':
      return CONSTRAINT_y;
    default: break;
    }
  return CONSTRAINT__UNKNOWN;
}

const unsigned char lookup_constraint_array[] = {
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT__l, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT__g, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_A, (int) UCHAR_MAX),
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_C, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_D, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_E, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_F, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_G, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_I, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_J, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_K, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_L, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_M, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_N, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_O, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_Q, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_R, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_S, (int) UCHAR_MAX),
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_U, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_V, (int) UCHAR_MAX),
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_X, (int) UCHAR_MAX),
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_Z, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_a, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_b, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_c, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_d, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_e, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_f, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_i, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_k, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_l, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_m, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_n, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_o, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_p, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_q, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_r, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_s, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_t, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_u, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_v, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_x, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_y, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN
};

enum reg_class
reg_class_for_constraint_1 (enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_r: return GENERAL_REGS;
    case CONSTRAINT_R: return LEGACY_REGS;
    case CONSTRAINT_q: return TARGET_64BIT ? GENERAL_REGS : Q_REGS;
    case CONSTRAINT_Q: return Q_REGS;
    case CONSTRAINT_l: return INDEX_REGS;
    case CONSTRAINT_a: return AREG;
    case CONSTRAINT_b: return BREG;
    case CONSTRAINT_c: return CREG;
    case CONSTRAINT_d: return DREG;
    case CONSTRAINT_S: return SIREG;
    case CONSTRAINT_D: return DIREG;
    case CONSTRAINT_A: return AD_REGS;
    case CONSTRAINT_U: return CLOBBERED_REGS;
    case CONSTRAINT_f: return TARGET_80387 || TARGET_FLOAT_RETURNS_IN_80387 ? FLOAT_REGS : NO_REGS;
    case CONSTRAINT_t: return TARGET_80387 || TARGET_FLOAT_RETURNS_IN_80387 ? FP_TOP_REG : NO_REGS;
    case CONSTRAINT_u: return TARGET_80387 || TARGET_FLOAT_RETURNS_IN_80387 ? FP_SECOND_REG : NO_REGS;
    case CONSTRAINT_Yk: return TARGET_AVX512F ? MASK_REGS : NO_REGS;
    case CONSTRAINT_k: return TARGET_AVX512F ? ALL_MASK_REGS : NO_REGS;
    case CONSTRAINT_y: return TARGET_MMX ? MMX_REGS : NO_REGS;
    case CONSTRAINT_x: return TARGET_SSE ? SSE_REGS : NO_REGS;
    case CONSTRAINT_v: return TARGET_SSE ? ALL_SSE_REGS : NO_REGS;
    case CONSTRAINT_Yz: return TARGET_SSE ? SSE_FIRST_REG : NO_REGS;
    case CONSTRAINT_Yd: return TARGET_AVX512DQ ? ALL_SSE_REGS : TARGET_SSE4_1 ? SSE_REGS : NO_REGS;
    case CONSTRAINT_Yp: return TARGET_PARTIAL_REG_STALL ? NO_REGS : GENERAL_REGS;
    case CONSTRAINT_Ya: return TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)
  ? NO_REGS : GENERAL_REGS;
    case CONSTRAINT_Yb: return (!flag_plt && HAVE_AS_IX86_TLS_GET_ADDR_GOT) ? TLS_GOTBASE_REGS : BREG;
    case CONSTRAINT_Yf: return (ix86_fpmath & FPMATH_387) ? FLOAT_REGS : NO_REGS;
    case CONSTRAINT_Yr: return TARGET_SSE ? (TARGET_AVOID_4BYTE_PREFIXES ? NO_REX_SSE_REGS : ALL_SSE_REGS) : NO_REGS;
    case CONSTRAINT_Yv: return TARGET_AVX512VL ? ALL_SSE_REGS : TARGET_SSE ? SSE_REGS : NO_REGS;
    case CONSTRAINT_Yw: return TARGET_AVX512BW && TARGET_AVX512VL ? ALL_SSE_REGS : TARGET_SSE ? SSE_REGS : NO_REGS;
    case CONSTRAINT_YW: return TARGET_AVX512BW ? ALL_SSE_REGS : TARGET_SSE ? SSE_REGS : NO_REGS;
    default: break;
    }
  return NO_REGS;
}

bool (*constraint_satisfied_p_array[]) (rtx) = {
  satisfies_constraint_I,
  satisfies_constraint_J,
  satisfies_constraint_K,
  satisfies_constraint_L,
  satisfies_constraint_M,
  satisfies_constraint_N,
  satisfies_constraint_O,
  satisfies_constraint_m,
  satisfies_constraint_o,
  satisfies_constraint_Bk,
  satisfies_constraint_Bm,
  satisfies_constraint_Bc,
  satisfies_constraint_Bn,
  satisfies_constraint_Br,
  satisfies_constraint_p,
  satisfies_constraint_Tv,
  satisfies_constraint_Ts,
  satisfies_constraint_Bz,
  satisfies_constraint_G,
  satisfies_constraint_e,
  satisfies_constraint_We,
  satisfies_constraint_Wz,
  satisfies_constraint_Wd,
  satisfies_constraint_Wf,
  satisfies_constraint_Z,
  satisfies_constraint_Bf,
  satisfies_constraint_V,
  satisfies_constraint__l,
  satisfies_constraint__g,
  satisfies_constraint_i,
  satisfies_constraint_s,
  satisfies_constraint_n,
  satisfies_constraint_E,
  satisfies_constraint_F,
  satisfies_constraint_X,
  satisfies_constraint_Bg,
  satisfies_constraint_Bs,
  satisfies_constraint_Bw,
  satisfies_constraint_BC,
  satisfies_constraint_C
};

bool
insn_const_int_ok_for_constraint (HOST_WIDE_INT ival, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_I:
      return 
#line 231 "../../gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 31));

    case CONSTRAINT_J:
      return 
#line 236 "../../gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 63));

    case CONSTRAINT_K:
      return 
#line 241 "../../gcc/config/i386/constraints.md"
(IN_RANGE (ival, -128, 127));

    case CONSTRAINT_L:
      return 
#line 247 "../../gcc/config/i386/constraints.md"
(ival == 0xff || ival == 0xffff
		    || ival == (HOST_WIDE_INT) 0xffffffff);

    case CONSTRAINT_M:
      return 
#line 253 "../../gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 3));

    case CONSTRAINT_N:
      return 
#line 259 "../../gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 255));

    case CONSTRAINT_O:
      return 
#line 264 "../../gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 127));

    default: break;
    }
  return false;
}

