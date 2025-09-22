uint64_t wrapper_helper_uc_tracecode(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_uc_tracecode((uint32_t)arg1, (uint32_t)arg2, (void*)arg3, (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)));
return 0;
}

uint64_t wrapper_helper_uc_traceopcode(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_uc_traceopcode((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6, (void*)arg7, (uint64_t)(0 | (((uint64_t)arg8) << 0) | (((uint64_t)arg9) << 32)));
return 0;
}

uint64_t wrapper_helper_sxtb16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_sxtb16((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_uxtb16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_uxtb16((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_add_setq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_add_setq((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_add_saturate(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_add_saturate((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_sub_saturate(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_sub_saturate((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_add_usaturate(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_add_usaturate((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_sub_usaturate(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_sub_usaturate((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_sdiv(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_sdiv((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_udiv(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_udiv((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_rbit(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rbit((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_sadd8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_sadd8((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_ssub8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_ssub8((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_ssub16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_ssub16((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_sadd16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_sadd16((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_saddsubx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_saddsubx((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_ssubaddx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_ssubaddx((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_uadd8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_uadd8((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_usub8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_usub8((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_usub16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_usub16((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_uadd16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_uadd16((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_uaddsubx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_uaddsubx((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_usubaddx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_usubaddx((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_qadd8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_qadd8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_qsub8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_qsub8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_qsub16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_qsub16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_qadd16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_qadd16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_qaddsubx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_qaddsubx((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_qsubaddx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_qsubaddx((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_shadd8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_shadd8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_shsub8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_shsub8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_shsub16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_shsub16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_shadd16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_shadd16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_shaddsubx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_shaddsubx((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_shsubaddx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_shsubaddx((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_uqadd8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_uqadd8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_uqsub8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_uqsub8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_uqsub16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_uqsub16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_uqadd16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_uqadd16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_uqaddsubx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_uqaddsubx((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_uqsubaddx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_uqsubaddx((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_uhadd8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_uhadd8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_uhsub8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_uhsub8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_uhsub16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_uhsub16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_uhadd16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_uhadd16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_uhaddsubx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_uhaddsubx((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_uhsubaddx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_uhsubaddx((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_ssat(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_ssat((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_usat(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_usat((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_ssat16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_ssat16((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_usat16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_usat16((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_usad8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_usad8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_sel_flags(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_sel_flags((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_exception_internal(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_exception_internal((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_exception_with_syndrome(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_exception_with_syndrome((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_exception_bkpt_insn(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_exception_bkpt_insn((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_setend(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_setend((void*)arg1);
return 0;
}

uint64_t wrapper_helper_wfi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_wfi((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_wfe(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_wfe((void*)arg1);
return 0;
}

uint64_t wrapper_helper_yield(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_yield((void*)arg1);
return 0;
}

uint64_t wrapper_helper_pre_hvc(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pre_hvc((void*)arg1);
return 0;
}

uint64_t wrapper_helper_pre_smc(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pre_smc((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_check_breakpoints(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_check_breakpoints((void*)arg1);
return 0;
}

uint64_t wrapper_helper_cpsr_write_arm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cpsr_write_arm((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_cpsr_write_eret(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cpsr_write_eret((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_cpsr_read_arm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_cpsr_read_arm((void*)arg1); return res;
}

uint64_t wrapper_helper_v7m_msr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_v7m_msr((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_v7m_mrs(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_v7m_mrs((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_v7m_bxns(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_v7m_bxns((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_v7m_blxns(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_v7m_blxns((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_v7m_tt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_v7m_tt((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_v7m_preserve_fp_state(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_v7m_preserve_fp_state((void*)arg1);
return 0;
}

uint64_t wrapper_helper_v7m_vlstm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_v7m_vlstm((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_v7m_vlldm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_v7m_vlldm((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_v8m_stackcheck(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_v8m_stackcheck((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_access_check_cp_reg(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_access_check_cp_reg((void*)arg1, (void*)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_set_cp_reg(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_set_cp_reg((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_get_cp_reg(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_get_cp_reg((void*)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_set_cp_reg64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_set_cp_reg64((void*)arg1, (void*)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)));
return 0;
}

uint64_t wrapper_helper_get_cp_reg64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_get_cp_reg64((void*)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_uc_hooksys64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_uc_hooksys64((void*)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_get_r13_banked(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_get_r13_banked((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_set_r13_banked(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_set_r13_banked((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_mrs_banked(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mrs_banked((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_msr_banked(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msr_banked((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_get_user_reg(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_get_user_reg((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_set_user_reg(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_set_user_reg((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_rebuild_hflags_m32_newel(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_rebuild_hflags_m32_newel((void*)arg1);
return 0;
}

uint64_t wrapper_helper_rebuild_hflags_m32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_rebuild_hflags_m32((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_rebuild_hflags_a32_newel(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_rebuild_hflags_a32_newel((void*)arg1);
return 0;
}

uint64_t wrapper_helper_rebuild_hflags_a32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_rebuild_hflags_a32((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_rebuild_hflags_a64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_rebuild_hflags_a64((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_vfp_get_fpscr_arm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_get_fpscr_arm((void*)arg1); return res;
}

uint64_t wrapper_helper_vfp_set_fpscr_arm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_vfp_set_fpscr_arm((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_vfp_adds(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_adds((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_addd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_addd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (void*)arg5); return res;
}

uint64_t wrapper_helper_vfp_subs(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_subs((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_subd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_subd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (void*)arg5); return res;
}

uint64_t wrapper_helper_vfp_muls(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_muls((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_muld(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_muld((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (void*)arg5); return res;
}

uint64_t wrapper_helper_vfp_divs(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_divs((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_divd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_divd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (void*)arg5); return res;
}

uint64_t wrapper_helper_vfp_maxs(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_maxs((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_maxd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_maxd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (void*)arg5); return res;
}

uint64_t wrapper_helper_vfp_mins(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_mins((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_mind(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_mind((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (void*)arg5); return res;
}

uint64_t wrapper_helper_vfp_maxnums(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_maxnums((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_maxnumd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_maxnumd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (void*)arg5); return res;
}

uint64_t wrapper_helper_vfp_minnums(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_minnums((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_minnumd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_minnumd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (void*)arg5); return res;
}

uint64_t wrapper_helper_vfp_negs(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_negs((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_vfp_negd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_negd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_vfp_abss(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_abss((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_vfp_absd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_absd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_vfp_sqrts(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_sqrts((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_vfp_sqrtd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_sqrtd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_cmps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_vfp_cmps((uint32_t)arg1, (uint32_t)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_vfp_cmpd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_vfp_cmpd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (void*)arg5);
return 0;
}

uint64_t wrapper_helper_vfp_cmpes(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_vfp_cmpes((uint32_t)arg1, (uint32_t)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_vfp_cmped(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_vfp_cmped((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (void*)arg5);
return 0;
}

uint64_t wrapper_helper_vfp_fcvtds(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_fcvtds((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_vfp_fcvtsd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_fcvtsd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_uitoh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_uitoh((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_vfp_uitos(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_uitos((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_vfp_uitod(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_uitod((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_vfp_sitoh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_sitoh((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_vfp_sitos(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_sitos((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_vfp_sitod(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_sitod((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_vfp_touih(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_touih((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_vfp_touis(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_touis((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_vfp_touid(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_touid((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_touizh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_touizh((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_vfp_touizs(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_touizs((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_vfp_touizd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_touizd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_tosih(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_tosih((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_vfp_tosis(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_tosis((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_vfp_tosid(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_tosid((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_tosizh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_tosizh((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_vfp_tosizs(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_tosizs((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_vfp_tosizd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_tosizd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_toshs_round_to_zero(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_toshs_round_to_zero((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_tosls_round_to_zero(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_tosls_round_to_zero((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_touhs_round_to_zero(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_touhs_round_to_zero((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_touls_round_to_zero(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_touls_round_to_zero((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_toshd_round_to_zero(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_toshd_round_to_zero((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (void*)arg4); return res;
}

uint64_t wrapper_helper_vfp_tosld_round_to_zero(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_tosld_round_to_zero((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (void*)arg4); return res;
}

uint64_t wrapper_helper_vfp_touhd_round_to_zero(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_touhd_round_to_zero((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (void*)arg4); return res;
}

uint64_t wrapper_helper_vfp_tould_round_to_zero(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_tould_round_to_zero((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (void*)arg4); return res;
}

uint64_t wrapper_helper_vfp_touhh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_touhh((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_toshh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_toshh((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_toulh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_toulh((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_toslh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_toslh((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_touqh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_touqh((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_tosqh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_tosqh((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_toshs(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_toshs((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_tosls(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_tosls((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_tosqs(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_tosqs((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_touhs(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_touhs((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_touls(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_touls((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_touqs(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_touqs((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_toshd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_toshd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (void*)arg4); return res;
}

uint64_t wrapper_helper_vfp_tosld(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_tosld((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (void*)arg4); return res;
}

uint64_t wrapper_helper_vfp_tosqd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_tosqd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (void*)arg4); return res;
}

uint64_t wrapper_helper_vfp_touhd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_touhd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (void*)arg4); return res;
}

uint64_t wrapper_helper_vfp_tould(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_tould((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (void*)arg4); return res;
}

uint64_t wrapper_helper_vfp_touqd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_touqd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (void*)arg4); return res;
}

uint64_t wrapper_helper_vfp_shtos(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_shtos((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_sltos(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_sltos((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_sqtos(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_sqtos((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (void*)arg4); return res;
}

uint64_t wrapper_helper_vfp_uhtos(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_uhtos((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_ultos(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_ultos((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_uqtos(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_uqtos((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (void*)arg4); return res;
}

uint64_t wrapper_helper_vfp_shtod(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_shtod((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (void*)arg4); return res;
}

uint64_t wrapper_helper_vfp_sltod(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_sltod((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (void*)arg4); return res;
}

uint64_t wrapper_helper_vfp_sqtod(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_sqtod((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (void*)arg4); return res;
}

uint64_t wrapper_helper_vfp_uhtod(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_uhtod((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (void*)arg4); return res;
}

uint64_t wrapper_helper_vfp_ultod(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_ultod((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (void*)arg4); return res;
}

uint64_t wrapper_helper_vfp_uqtod(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_uqtod((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (void*)arg4); return res;
}

uint64_t wrapper_helper_vfp_sltoh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_sltoh((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_ultoh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_ultoh((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_vfp_sqtoh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_sqtoh((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (void*)arg4); return res;
}

uint64_t wrapper_helper_vfp_uqtoh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_uqtoh((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (void*)arg4); return res;
}

uint64_t wrapper_helper_set_rmode(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_set_rmode((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_set_neon_rmode(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_set_neon_rmode((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_vfp_fcvt_f16_to_f32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_fcvt_f16_to_f32((uint32_t)arg1, (void*)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_vfp_fcvt_f32_to_f16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_fcvt_f32_to_f16((uint32_t)arg1, (void*)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_vfp_fcvt_f16_to_f64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_fcvt_f16_to_f64((uint32_t)arg1, (void*)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_vfp_fcvt_f64_to_f16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_fcvt_f64_to_f16((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (void*)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_vfp_muladdd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_muladdd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint64_t)(0 | (((uint64_t)arg5) << 0) | (((uint64_t)arg6) << 32)), (void*)arg7); return res;
}

uint64_t wrapper_helper_vfp_muladds(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vfp_muladds((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4); return res;
}

uint64_t wrapper_helper_recps_f32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_recps_f32((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_rsqrts_f32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rsqrts_f32((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_recpe_f16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_recpe_f16((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_recpe_f32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_recpe_f32((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_recpe_f64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_recpe_f64((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (void*)arg3); return res;
}

uint64_t wrapper_helper_rsqrte_f16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rsqrte_f16((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_rsqrte_f32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rsqrte_f32((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_rsqrte_f64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rsqrte_f64((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (void*)arg3); return res;
}

uint64_t wrapper_helper_recpe_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_recpe_u32((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_rsqrte_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rsqrte_u32((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_neon_tbl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_tbl((uint32_t)arg1, (uint32_t)arg2, (void*)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_shl_cc(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_shl_cc((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_shr_cc(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_shr_cc((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_sar_cc(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_sar_cc((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_ror_cc(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_ror_cc((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_rints_exact(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rints_exact((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_rintd_exact(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rintd_exact((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (void*)arg3); return res;
}

uint64_t wrapper_helper_rints(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rints((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_rintd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rintd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (void*)arg3); return res;
}

uint64_t wrapper_helper_vjcvt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_vjcvt((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (void*)arg3); return res;
}

uint64_t wrapper_helper_fjcvtzs(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_fjcvtzs((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (void*)arg3); return res;
}

uint64_t wrapper_helper_check_hcr_el2_trap(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_check_hcr_el2_trap((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_neon_qadd_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qadd_u8((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qadd_s8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qadd_s8((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qadd_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qadd_u16((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qadd_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qadd_s16((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qadd_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qadd_u32((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qadd_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qadd_s32((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_uqadd_s8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_uqadd_s8((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_uqadd_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_uqadd_s16((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_uqadd_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_uqadd_s32((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_uqadd_s64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_uqadd_s64((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_neon_sqadd_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_sqadd_u8((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_sqadd_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_sqadd_u16((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_sqadd_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_sqadd_u32((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_sqadd_u64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_sqadd_u64((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_neon_qsub_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qsub_u8((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qsub_s8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qsub_s8((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qsub_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qsub_u16((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qsub_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qsub_s16((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qsub_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qsub_u32((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qsub_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qsub_s32((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qadd_u64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qadd_u64((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_neon_qadd_s64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qadd_s64((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_neon_qsub_u64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qsub_u64((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_neon_qsub_s64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qsub_s64((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_neon_hadd_s8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_hadd_s8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_hadd_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_hadd_u8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_hadd_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_hadd_s16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_hadd_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_hadd_u16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_hadd_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_hadd_s32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_hadd_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_hadd_u32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_rhadd_s8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_rhadd_s8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_rhadd_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_rhadd_u8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_rhadd_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_rhadd_s16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_rhadd_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_rhadd_u16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_rhadd_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_rhadd_s32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_rhadd_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_rhadd_u32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_hsub_s8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_hsub_s8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_hsub_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_hsub_u8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_hsub_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_hsub_s16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_hsub_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_hsub_u16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_hsub_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_hsub_s32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_hsub_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_hsub_u32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_cgt_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_cgt_u8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_cgt_s8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_cgt_s8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_cgt_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_cgt_u16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_cgt_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_cgt_s16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_cgt_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_cgt_u32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_cgt_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_cgt_s32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_cge_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_cge_u8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_cge_s8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_cge_s8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_cge_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_cge_u16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_cge_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_cge_s16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_cge_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_cge_u32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_cge_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_cge_s32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_pmin_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_pmin_u8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_pmin_s8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_pmin_s8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_pmin_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_pmin_u16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_pmin_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_pmin_s16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_pmax_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_pmax_u8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_pmax_s8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_pmax_s8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_pmax_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_pmax_u16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_pmax_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_pmax_s16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_abd_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_abd_u8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_abd_s8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_abd_s8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_abd_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_abd_u16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_abd_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_abd_s16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_abd_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_abd_u32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_abd_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_abd_s32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_shl_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_shl_u16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_shl_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_shl_s16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_rshl_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_rshl_u8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_rshl_s8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_rshl_s8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_rshl_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_rshl_u16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_rshl_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_rshl_s16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_rshl_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_rshl_u32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_rshl_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_rshl_s32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_rshl_u64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_rshl_u64((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_neon_rshl_s64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_rshl_s64((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_neon_qshl_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qshl_u8((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qshl_s8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qshl_s8((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qshl_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qshl_u16((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qshl_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qshl_s16((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qshl_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qshl_u32((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qshl_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qshl_s32((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qshl_u64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qshl_u64((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_neon_qshl_s64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qshl_s64((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_neon_qshlu_s8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qshlu_s8((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qshlu_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qshlu_s16((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qshlu_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qshlu_s32((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qshlu_s64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qshlu_s64((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_neon_qrshl_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qrshl_u8((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qrshl_s8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qrshl_s8((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qrshl_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qrshl_u16((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qrshl_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qrshl_s16((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qrshl_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qrshl_u32((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qrshl_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qrshl_s32((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qrshl_u64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qrshl_u64((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_neon_qrshl_s64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qrshl_s64((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_neon_add_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_add_u8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_add_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_add_u16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_padd_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_padd_u8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_padd_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_padd_u16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_sub_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_sub_u8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_sub_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_sub_u16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_mul_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_mul_u8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_mul_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_mul_u16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_tst_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_tst_u8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_tst_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_tst_u16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_tst_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_tst_u32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_ceq_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_ceq_u8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_ceq_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_ceq_u16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_ceq_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_ceq_u32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_clz_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_clz_u8((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_neon_clz_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_clz_u16((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_neon_cls_s8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_cls_s8((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_neon_cls_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_cls_s16((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_neon_cls_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_cls_s32((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_neon_cnt_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_cnt_u8((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_neon_rbit_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_rbit_u8((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_neon_qdmulh_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qdmulh_s16((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qrdmulh_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qrdmulh_s16((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qrdmlah_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qrdmlah_s16((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_neon_qrdmlsh_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qrdmlsh_s16((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_neon_qdmulh_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qdmulh_s32((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qrdmulh_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qrdmulh_s32((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_neon_qrdmlah_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qrdmlah_s32((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_neon_qrdmlsh_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qrdmlsh_s32((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_neon_narrow_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_narrow_u8((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_neon_narrow_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_narrow_u16((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_neon_unarrow_sat8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_unarrow_sat8((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_neon_narrow_sat_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_narrow_sat_u8((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_neon_narrow_sat_s8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_narrow_sat_s8((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_neon_unarrow_sat16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_unarrow_sat16((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_neon_narrow_sat_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_narrow_sat_u16((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_neon_narrow_sat_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_narrow_sat_s16((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_neon_unarrow_sat32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_unarrow_sat32((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_neon_narrow_sat_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_narrow_sat_u32((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_neon_narrow_sat_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_narrow_sat_s32((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_neon_narrow_high_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_narrow_high_u8((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_neon_narrow_high_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_narrow_high_u16((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_neon_narrow_round_high_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_narrow_round_high_u8((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_neon_narrow_round_high_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_narrow_round_high_u16((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_neon_widen_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_widen_u8((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_neon_widen_s8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_widen_s8((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_neon_widen_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_widen_u16((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_neon_widen_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_widen_s16((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_neon_addl_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_addl_u16((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_neon_addl_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_addl_u32((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_neon_paddl_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_paddl_u16((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_neon_paddl_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_paddl_u32((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_neon_subl_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_subl_u16((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_neon_subl_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_subl_u32((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_neon_addl_saturate_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_addl_saturate_s32((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_neon_addl_saturate_s64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_addl_saturate_s64((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_neon_abdl_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_abdl_u16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_abdl_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_abdl_s16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_abdl_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_abdl_u32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_abdl_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_abdl_s32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_abdl_u64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_abdl_u64((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_abdl_s64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_abdl_s64((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_mull_u8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_mull_u8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_mull_s8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_mull_s8((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_mull_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_mull_u16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_mull_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_mull_s16((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_negl_u16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_negl_u16((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_neon_negl_u32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_negl_u32((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_neon_qabs_s8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qabs_s8((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_qabs_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qabs_s16((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_qabs_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qabs_s32((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_qabs_s64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qabs_s64((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_neon_qneg_s8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qneg_s8((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_qneg_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qneg_s16((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_qneg_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qneg_s32((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_neon_qneg_s64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_qneg_s64((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_neon_abd_f32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_abd_f32((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_neon_ceq_f32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_ceq_f32((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_neon_cge_f32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_cge_f32((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_neon_cgt_f32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_cgt_f32((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_neon_acge_f32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_acge_f32((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_neon_acgt_f32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_acgt_f32((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_neon_acge_f64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_acge_f64((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (void*)arg5); return res;
}

uint64_t wrapper_helper_neon_acgt_f64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_neon_acgt_f64((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (void*)arg5); return res;
}

uint64_t wrapper_helper_iwmmxt_maddsq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_maddsq((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_madduq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_madduq((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_sadb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_sadb((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_sadw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_sadw((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_mulslw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_mulslw((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_mulshw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_mulshw((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_mululw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_mululw((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_muluhw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_muluhw((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_macsw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_macsw((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_macuw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_macuw((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_setpsr_nz(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_setpsr_nz((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_unpacklb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_unpacklb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_unpacklw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_unpacklw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_unpackll(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_unpackll((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_unpackhb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_unpackhb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_unpackhw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_unpackhw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_unpackhl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_unpackhl((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_unpacklub(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_unpacklub((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_unpackluw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_unpackluw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_unpacklul(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_unpacklul((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_unpackhub(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_unpackhub((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_unpackhuw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_unpackhuw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_unpackhul(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_unpackhul((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_unpacklsb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_unpacklsb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_unpacklsw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_unpacklsw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_unpacklsl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_unpacklsl((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_unpackhsb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_unpackhsb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_unpackhsw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_unpackhsw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_unpackhsl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_unpackhsl((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_cmpeqb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_cmpeqb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_cmpeqw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_cmpeqw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_cmpeql(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_cmpeql((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_cmpgtub(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_cmpgtub((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_cmpgtuw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_cmpgtuw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_cmpgtul(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_cmpgtul((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_cmpgtsb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_cmpgtsb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_cmpgtsw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_cmpgtsw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_cmpgtsl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_cmpgtsl((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_minsb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_minsb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_minsw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_minsw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_minsl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_minsl((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_minub(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_minub((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_minuw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_minuw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_minul(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_minul((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_maxsb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_maxsb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_maxsw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_maxsw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_maxsl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_maxsl((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_maxub(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_maxub((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_maxuw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_maxuw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_maxul(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_maxul((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_subnb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_subnb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_subnw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_subnw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_subnl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_subnl((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_addnb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_addnb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_addnw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_addnw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_addnl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_addnl((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_subub(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_subub((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_subuw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_subuw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_subul(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_subul((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_addub(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_addub((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_adduw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_adduw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_addul(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_addul((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_subsb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_subsb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_subsw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_subsw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_subsl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_subsl((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_addsb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_addsb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_addsw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_addsw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_addsl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_addsl((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_avgb0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_avgb0((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_avgb1(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_avgb1((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_avgw0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_avgw0((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_avgw1(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_avgw1((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_align(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_align((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_iwmmxt_insr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_insr((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_iwmmxt_bcstb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_bcstb((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_iwmmxt_bcstw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_bcstw((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_iwmmxt_bcstl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_bcstl((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_iwmmxt_addcb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_addcb((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_addcw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_addcw((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_addcl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_addcl((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_msbb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_msbb((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_msbw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_msbw((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_msbl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_msbl((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_srlw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_srlw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_iwmmxt_srll(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_srll((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_iwmmxt_srlq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_srlq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_iwmmxt_sllw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_sllw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_iwmmxt_slll(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_slll((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_iwmmxt_sllq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_sllq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_iwmmxt_sraw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_sraw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_iwmmxt_sral(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_sral((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_iwmmxt_sraq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_sraq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_iwmmxt_rorw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_rorw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_iwmmxt_rorl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_rorl((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_iwmmxt_rorq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_rorq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_iwmmxt_shufh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_shufh((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_iwmmxt_packuw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_packuw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_packul(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_packul((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_packuq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_packuq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_packsw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_packsw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_packsl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_packsl((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_packsq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_packsq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_iwmmxt_muladdsl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_muladdsl((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_iwmmxt_muladdsw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_muladdsw((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_iwmmxt_muladdswl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_iwmmxt_muladdswl((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_neon_unzip8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_neon_unzip8((void*)arg1, (void*)arg2);
return 0;
}

uint64_t wrapper_helper_neon_unzip16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_neon_unzip16((void*)arg1, (void*)arg2);
return 0;
}

uint64_t wrapper_helper_neon_qunzip8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_neon_qunzip8((void*)arg1, (void*)arg2);
return 0;
}

uint64_t wrapper_helper_neon_qunzip16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_neon_qunzip16((void*)arg1, (void*)arg2);
return 0;
}

uint64_t wrapper_helper_neon_qunzip32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_neon_qunzip32((void*)arg1, (void*)arg2);
return 0;
}

uint64_t wrapper_helper_neon_zip8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_neon_zip8((void*)arg1, (void*)arg2);
return 0;
}

uint64_t wrapper_helper_neon_zip16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_neon_zip16((void*)arg1, (void*)arg2);
return 0;
}

uint64_t wrapper_helper_neon_qzip8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_neon_qzip8((void*)arg1, (void*)arg2);
return 0;
}

uint64_t wrapper_helper_neon_qzip16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_neon_qzip16((void*)arg1, (void*)arg2);
return 0;
}

uint64_t wrapper_helper_neon_qzip32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_neon_qzip32((void*)arg1, (void*)arg2);
return 0;
}

uint64_t wrapper_helper_crypto_aese(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_crypto_aese((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_crypto_aesmc(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_crypto_aesmc((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_crypto_sha1_3reg(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_crypto_sha1_3reg((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_crypto_sha1h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_crypto_sha1h((void*)arg1, (void*)arg2);
return 0;
}

uint64_t wrapper_helper_crypto_sha1su1(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_crypto_sha1su1((void*)arg1, (void*)arg2);
return 0;
}

uint64_t wrapper_helper_crypto_sha256h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_crypto_sha256h((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_crypto_sha256h2(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_crypto_sha256h2((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_crypto_sha256su0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_crypto_sha256su0((void*)arg1, (void*)arg2);
return 0;
}

uint64_t wrapper_helper_crypto_sha256su1(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_crypto_sha256su1((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_crypto_sha512h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_crypto_sha512h((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_crypto_sha512h2(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_crypto_sha512h2((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_crypto_sha512su0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_crypto_sha512su0((void*)arg1, (void*)arg2);
return 0;
}

uint64_t wrapper_helper_crypto_sha512su1(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_crypto_sha512su1((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_crypto_sm3tt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_crypto_sm3tt((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_crypto_sm3partw1(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_crypto_sm3partw1((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_crypto_sm3partw2(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_crypto_sm3partw2((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_crypto_sm4e(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_crypto_sm4e((void*)arg1, (void*)arg2);
return 0;
}

uint64_t wrapper_helper_crypto_sm4ekey(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_crypto_sm4ekey((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_crc32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_crc32((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_crc32c(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_crc32c((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_gvec_qrdmlah_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_qrdmlah_s16((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_qrdmlsh_s16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_qrdmlsh_s16((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_qrdmlah_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_qrdmlah_s32((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_qrdmlsh_s32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_qrdmlsh_s32((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_sdot_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sdot_b((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_udot_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_udot_b((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_sdot_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sdot_h((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_udot_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_udot_h((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_sdot_idx_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sdot_idx_b((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_udot_idx_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_udot_idx_b((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_sdot_idx_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sdot_idx_h((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_udot_idx_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_udot_idx_h((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_fcaddh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fcaddh((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fcadds(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fcadds((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fcaddd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fcaddd((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fcmlah(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fcmlah((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fcmlah_idx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fcmlah_idx((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fcmlas(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fcmlas((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fcmlas_idx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fcmlas_idx((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fcmlad(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fcmlad((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_frecpe_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_frecpe_h((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_frecpe_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_frecpe_s((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_frecpe_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_frecpe_d((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_frsqrte_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_frsqrte_h((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_frsqrte_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_frsqrte_s((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_frsqrte_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_frsqrte_d((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_fadd_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fadd_h((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fadd_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fadd_s((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fadd_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fadd_d((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fsub_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fsub_h((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fsub_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fsub_s((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fsub_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fsub_d((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fmul_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fmul_h((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fmul_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fmul_s((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fmul_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fmul_d((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_ftsmul_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ftsmul_h((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_ftsmul_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ftsmul_s((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_ftsmul_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ftsmul_d((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fmul_idx_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fmul_idx_h((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fmul_idx_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fmul_idx_s((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fmul_idx_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fmul_idx_d((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fmla_idx_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fmla_idx_h((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (void*)arg5, (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_gvec_fmla_idx_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fmla_idx_s((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (void*)arg5, (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_gvec_fmla_idx_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fmla_idx_d((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (void*)arg5, (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_gvec_uqadd_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_uqadd_b((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_uqadd_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_uqadd_h((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_uqadd_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_uqadd_s((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_uqadd_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_uqadd_d((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_sqadd_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sqadd_b((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_sqadd_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sqadd_h((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_sqadd_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sqadd_s((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_sqadd_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sqadd_d((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_uqsub_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_uqsub_b((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_uqsub_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_uqsub_h((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_uqsub_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_uqsub_s((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_uqsub_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_uqsub_d((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_sqsub_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sqsub_b((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_sqsub_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sqsub_h((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_sqsub_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sqsub_s((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_sqsub_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sqsub_d((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fmlal_a32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fmlal_a32((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fmlal_a64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fmlal_a64((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fmlal_idx_a32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fmlal_idx_a32((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_fmlal_idx_a64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_fmlal_idx_a64((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_frint32_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_frint32_s((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_frint64_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_frint64_s((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_frint32_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_frint32_d((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (void*)arg3); return res;
}

uint64_t wrapper_helper_frint64_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_frint64_d((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (void*)arg3); return res;
}

uint64_t wrapper_helper_gvec_sshl_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sshl_b((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_sshl_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sshl_h((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_ushl_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ushl_b((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_ushl_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ushl_h((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_pmul_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_pmul_b((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_pmull_q(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_pmull_q((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_neon_pmull_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_neon_pmull_h((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_div_i32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_div_i32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_rem_i32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rem_i32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_divu_i32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_divu_i32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_remu_i32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_remu_i32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_div_i64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_div_i64((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_rem_i64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rem_i64((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_divu_i64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_divu_i64((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_remu_i64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_remu_i64((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_shl_i64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_shl_i64((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_shr_i64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_shr_i64((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_sar_i64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_sar_i64((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_mulsh_i64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mulsh_i64((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_muluh_i64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_muluh_i64((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_clz_i32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_clz_i32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_ctz_i32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_ctz_i32((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_clz_i64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_clz_i64((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_ctz_i64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_ctz_i64((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_clrsb_i32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_clrsb_i32((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_clrsb_i64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_clrsb_i64((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_ctpop_i32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_ctpop_i32((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_ctpop_i64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_ctpop_i64((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_lookup_tb_ptr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_lookup_tb_ptr((void*)arg1); return res;
}

uint64_t wrapper_helper_exit_atomic(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_exit_atomic((void*)arg1);
return 0;
}

uint64_t wrapper_helper_atomic_cmpxchgb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_cmpxchgb((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_cmpxchgw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_cmpxchgw_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_cmpxchgw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_cmpxchgw_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_cmpxchgl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_cmpxchgl_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_cmpxchgl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_cmpxchgl_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_addb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_addb((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_addw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_addw_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_addw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_addw_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_addl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_addl_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_addl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_addl_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_andb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_andb((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_andw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_andw_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_andw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_andw_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_andl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_andl_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_andl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_andl_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_orb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_orb((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_orw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_orw_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_orw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_orw_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_orl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_orl_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_orl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_orl_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_xorb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_xorb((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_xorw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_xorw_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_xorw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_xorw_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_xorl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_xorl_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_xorl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_xorl_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_sminb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_sminb((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_sminw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_sminw_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_sminw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_sminw_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_sminl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_sminl_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_sminl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_sminl_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_uminb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_uminb((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_uminw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_uminw_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_uminw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_uminw_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_uminl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_uminl_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_uminl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_uminl_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_smaxb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_smaxb((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_smaxw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_smaxw_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_smaxw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_smaxw_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_smaxl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_smaxl_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_smaxl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_smaxl_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_umaxb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_umaxb((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_umaxw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_umaxw_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_umaxw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_umaxw_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_umaxl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_umaxl_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_fetch_umaxl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_umaxl_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_add_fetchb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_add_fetchb((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_add_fetchw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_add_fetchw_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_add_fetchw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_add_fetchw_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_add_fetchl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_add_fetchl_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_add_fetchl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_add_fetchl_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_and_fetchb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_and_fetchb((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_and_fetchw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_and_fetchw_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_and_fetchw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_and_fetchw_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_and_fetchl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_and_fetchl_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_and_fetchl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_and_fetchl_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_or_fetchb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_or_fetchb((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_or_fetchw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_or_fetchw_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_or_fetchw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_or_fetchw_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_or_fetchl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_or_fetchl_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_or_fetchl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_or_fetchl_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_xor_fetchb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_xor_fetchb((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_xor_fetchw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_xor_fetchw_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_xor_fetchw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_xor_fetchw_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_xor_fetchl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_xor_fetchl_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_xor_fetchl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_xor_fetchl_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_smin_fetchb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_smin_fetchb((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_smin_fetchw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_smin_fetchw_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_smin_fetchw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_smin_fetchw_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_smin_fetchl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_smin_fetchl_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_smin_fetchl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_smin_fetchl_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_umin_fetchb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_umin_fetchb((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_umin_fetchw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_umin_fetchw_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_umin_fetchw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_umin_fetchw_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_umin_fetchl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_umin_fetchl_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_umin_fetchl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_umin_fetchl_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_smax_fetchb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_smax_fetchb((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_smax_fetchw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_smax_fetchw_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_smax_fetchw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_smax_fetchw_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_smax_fetchl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_smax_fetchl_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_smax_fetchl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_smax_fetchl_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_umax_fetchb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_umax_fetchb((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_umax_fetchw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_umax_fetchw_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_umax_fetchw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_umax_fetchw_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_umax_fetchl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_umax_fetchl_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_umax_fetchl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_umax_fetchl_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_xchgb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_xchgb((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_xchgw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_xchgw_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_xchgw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_xchgw_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_xchgl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_xchgl_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_atomic_xchgl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_xchgl_be((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_gvec_mov(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_mov((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_dup8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_dup8((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_dup16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_dup16((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_dup32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_dup32((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_dup64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_dup64((void*)arg1, (uint32_t)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)));
return 0;
}

uint64_t wrapper_helper_gvec_add8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_add8((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_add16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_add16((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_add32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_add32((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_add64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_add64((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_adds8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_adds8((void*)arg1, (void*)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_adds16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_adds16((void*)arg1, (void*)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_adds32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_adds32((void*)arg1, (void*)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_adds64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_adds64((void*)arg1, (void*)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_sub8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sub8((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_sub16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sub16((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_sub32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sub32((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_sub64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sub64((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_subs8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_subs8((void*)arg1, (void*)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_subs16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_subs16((void*)arg1, (void*)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_subs32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_subs32((void*)arg1, (void*)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_subs64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_subs64((void*)arg1, (void*)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_mul8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_mul8((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_mul16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_mul16((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_mul32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_mul32((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_mul64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_mul64((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_muls8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_muls8((void*)arg1, (void*)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_muls16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_muls16((void*)arg1, (void*)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_muls32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_muls32((void*)arg1, (void*)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_muls64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_muls64((void*)arg1, (void*)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_ssadd8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ssadd8((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_ssadd16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ssadd16((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_ssadd32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ssadd32((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_ssadd64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ssadd64((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_sssub8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sssub8((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_sssub16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sssub16((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_sssub32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sssub32((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_sssub64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sssub64((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_usadd8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_usadd8((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_usadd16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_usadd16((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_usadd32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_usadd32((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_usadd64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_usadd64((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_ussub8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ussub8((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_ussub16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ussub16((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_ussub32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ussub32((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_ussub64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ussub64((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_smin8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_smin8((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_smin16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_smin16((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_smin32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_smin32((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_smin64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_smin64((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_smax8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_smax8((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_smax16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_smax16((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_smax32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_smax32((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_smax64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_smax64((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_umin8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_umin8((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_umin16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_umin16((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_umin32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_umin32((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_umin64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_umin64((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_umax8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_umax8((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_umax16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_umax16((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_umax32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_umax32((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_umax64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_umax64((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_neg8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_neg8((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_neg16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_neg16((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_neg32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_neg32((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_neg64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_neg64((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_abs8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_abs8((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_abs16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_abs16((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_abs32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_abs32((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_abs64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_abs64((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_not(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_not((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_and(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_and((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_or(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_or((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_xor(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_xor((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_andc(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_andc((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_orc(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_orc((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_nand(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_nand((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_nor(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_nor((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_eqv(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_eqv((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_ands(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ands((void*)arg1, (void*)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_xors(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_xors((void*)arg1, (void*)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_ors(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ors((void*)arg1, (void*)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_gvec_shl8i(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_shl8i((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_shl16i(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_shl16i((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_shl32i(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_shl32i((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_shl64i(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_shl64i((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_shr8i(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_shr8i((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_shr16i(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_shr16i((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_shr32i(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_shr32i((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_shr64i(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_shr64i((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_sar8i(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sar8i((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_sar16i(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sar16i((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_sar32i(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sar32i((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_sar64i(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sar64i((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_gvec_shl8v(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_shl8v((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_shl16v(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_shl16v((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_shl32v(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_shl32v((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_shl64v(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_shl64v((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_shr8v(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_shr8v((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_shr16v(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_shr16v((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_shr32v(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_shr32v((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_shr64v(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_shr64v((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_sar8v(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sar8v((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_sar16v(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sar16v((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_sar32v(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sar32v((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_sar64v(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_sar64v((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_eq8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_eq8((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_eq16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_eq16((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_eq32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_eq32((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_eq64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_eq64((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_ne8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ne8((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_ne16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ne16((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_ne32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ne32((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_ne64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ne64((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_lt8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_lt8((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_lt16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_lt16((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_lt32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_lt32((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_lt64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_lt64((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_le8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_le8((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_le16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_le16((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_le32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_le32((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_le64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_le64((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_ltu8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ltu8((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_ltu16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ltu16((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_ltu32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ltu32((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_ltu64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_ltu64((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_leu8(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_leu8((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_leu16(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_leu16((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_leu32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_leu32((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_leu64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_leu64((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_gvec_bitsel(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_gvec_bitsel((void*)arg1, (void*)arg2, (void*)arg3, (void*)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_check_exit_request_arm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_check_exit_request_arm((void*)arg1, (uint32_t)arg2);
return 0;
}

