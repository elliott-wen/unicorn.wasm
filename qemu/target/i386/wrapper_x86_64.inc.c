uint64_t wrapper_helper_uc_tracecode(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_uc_tracecode((uint32_t)arg1, (uint32_t)arg2, (void*)arg3, (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)));
return 0;
}

uint64_t wrapper_helper_uc_traceopcode(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_uc_traceopcode((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6, (void*)arg7, (uint64_t)(0 | (((uint64_t)arg8) << 0) | (((uint64_t)arg9) << 32)));
return 0;
}

uint64_t wrapper_helper_cc_compute_all(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_cc_compute_all((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint64_t)(0 | (((uint64_t)arg5) << 0) | (((uint64_t)arg6) << 32)), (uint32_t)arg7); return res;
}

uint64_t wrapper_helper_cc_compute_c(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_cc_compute_c((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint64_t)(0 | (((uint64_t)arg5) << 0) | (((uint64_t)arg6) << 32)), (uint32_t)arg7); return res;
}

uint64_t wrapper_helper_write_eflags(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_write_eflags((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_read_eflags(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_read_eflags((void*)arg1); return res;
}

uint64_t wrapper_helper_divb_AL(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_divb_AL((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_idivb_AL(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_idivb_AL((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_divw_AX(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_divw_AX((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_idivw_AX(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_idivw_AX((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_divl_EAX(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_divl_EAX((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_idivl_EAX(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_idivl_EAX((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_divq_EAX(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_divq_EAX((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_idivq_EAX(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_idivq_EAX((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_cr4_testbit(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cr4_testbit((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_bndck(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_bndck((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_bndldx32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_bndldx32((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_bndldx64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_bndldx64((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_bndstx32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_bndstx32((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint64_t)(0 | (((uint64_t)arg6) << 0) | (((uint64_t)arg7) << 32)), (uint64_t)(0 | (((uint64_t)arg8) << 0) | (((uint64_t)arg9) << 32)));
return 0;
}

uint64_t wrapper_helper_bndstx64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_bndstx64((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint64_t)(0 | (((uint64_t)arg6) << 0) | (((uint64_t)arg7) << 32)), (uint64_t)(0 | (((uint64_t)arg8) << 0) | (((uint64_t)arg9) << 32)));
return 0;
}

uint64_t wrapper_helper_bnd_jmp(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_bnd_jmp((void*)arg1);
return 0;
}

uint64_t wrapper_helper_aam(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_aam((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_aad(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_aad((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_aaa(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_aaa((void*)arg1);
return 0;
}

uint64_t wrapper_helper_aas(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_aas((void*)arg1);
return 0;
}

uint64_t wrapper_helper_daa(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_daa((void*)arg1);
return 0;
}

uint64_t wrapper_helper_das(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_das((void*)arg1);
return 0;
}

uint64_t wrapper_helper_lsl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_lsl((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_lar(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_lar((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_verr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_verr((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_verw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_verw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_lldt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_lldt((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_ltr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_ltr((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_load_seg(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_load_seg((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_ljmp_protected(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_ljmp_protected((void*)arg1, (uint32_t)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint64_t)(0 | (((uint64_t)arg5) << 0) | (((uint64_t)arg6) << 32)));
return 0;
}

uint64_t wrapper_helper_lcall_real(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_lcall_real((void*)arg1, (uint32_t)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint32_t)arg5, (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_lcall_protected(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_lcall_protected((void*)arg1, (uint32_t)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)), (uint32_t)arg5, (uint64_t)(0 | (((uint64_t)arg6) << 0) | (((uint64_t)arg7) << 32)));
return 0;
}

uint64_t wrapper_helper_iret_real(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_iret_real((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_iret_protected(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_iret_protected((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_lret_protected(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_lret_protected((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_read_crN(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_read_crN((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_write_crN(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_write_crN((void*)arg1, (uint32_t)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)));
return 0;
}

uint64_t wrapper_helper_lmsw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_lmsw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_clts(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_clts((void*)arg1);
return 0;
}

uint64_t wrapper_helper_set_dr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_set_dr((void*)arg1, (uint32_t)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)));
return 0;
}

uint64_t wrapper_helper_get_dr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_get_dr((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_invlpg(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_invlpg((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_sysenter(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_sysenter((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_sysexit(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_sysexit((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_syscall(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_syscall((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_sysret(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_sysret((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_hlt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_hlt((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_monitor(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_monitor((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_mwait(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mwait((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_pause(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pause((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_debug(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_debug((void*)arg1);
return 0;
}

uint64_t wrapper_helper_reset_rf(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_reset_rf((void*)arg1);
return 0;
}

uint64_t wrapper_helper_raise_interrupt_x86_64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_raise_interrupt_x86_64((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_raise_exception_x86_64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_raise_exception_x86_64((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_cli(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cli((void*)arg1);
return 0;
}

uint64_t wrapper_helper_sti(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_sti((void*)arg1);
return 0;
}

uint64_t wrapper_helper_clac(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_clac((void*)arg1);
return 0;
}

uint64_t wrapper_helper_stac(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_stac((void*)arg1);
return 0;
}

uint64_t wrapper_helper_boundw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_boundw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_boundl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_boundl((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_rsm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_rsm((void*)arg1);
return 0;
}

uint64_t wrapper_helper_into(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_into((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_cmpxchg8b_unlocked(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpxchg8b_unlocked((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_cmpxchg8b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpxchg8b((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_cmpxchg16b_unlocked(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpxchg16b_unlocked((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_cmpxchg16b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpxchg16b((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_single_step(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_single_step((void*)arg1);
return 0;
}

uint64_t wrapper_helper_rechecking_single_step(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_rechecking_single_step((void*)arg1);
return 0;
}

uint64_t wrapper_helper_cpuid(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cpuid((void*)arg1);
return 0;
}

uint64_t wrapper_helper_rdtsc(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_rdtsc((void*)arg1);
return 0;
}

uint64_t wrapper_helper_rdtscp(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_rdtscp((void*)arg1);
return 0;
}

uint64_t wrapper_helper_rdpmc(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_rdpmc((void*)arg1);
return 0;
}

uint64_t wrapper_helper_rdmsr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_rdmsr((void*)arg1);
return 0;
}

uint64_t wrapper_helper_wrmsr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_wrmsr((void*)arg1);
return 0;
}

uint64_t wrapper_helper_check_iob(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_check_iob((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_check_iow(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_check_iow((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_check_iol(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_check_iol((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_outb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_outb((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_inb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_inb((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_outw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_outw((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_inw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_inw((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_outl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_outl((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_inl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_inl((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_bpt_io(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_bpt_io((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)));
return 0;
}

uint64_t wrapper_helper_svm_check_intercept_param(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_svm_check_intercept_param((void*)arg1, (uint32_t)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)));
return 0;
}

uint64_t wrapper_helper_svm_check_io(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_svm_check_io((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_vmrun(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_vmrun((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_vmmcall(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_vmmcall((void*)arg1);
return 0;
}

uint64_t wrapper_helper_vmload(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_vmload((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_vmsave(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_vmsave((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_stgi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_stgi((void*)arg1);
return 0;
}

uint64_t wrapper_helper_clgi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_clgi((void*)arg1);
return 0;
}

uint64_t wrapper_helper_skinit(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_skinit((void*)arg1);
return 0;
}

uint64_t wrapper_helper_invlpga(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_invlpga((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_flds_FT0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_flds_FT0((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_fldl_FT0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fldl_FT0((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_fildl_FT0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fildl_FT0((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_flds_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_flds_ST0((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_fldl_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fldl_ST0((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_fildl_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fildl_ST0((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_fildll_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fildll_ST0((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_fsts_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_fsts_ST0((void*)arg1); return res;
}

uint64_t wrapper_helper_fstl_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_fstl_ST0((void*)arg1); return res;
}

uint64_t wrapper_helper_fist_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_fist_ST0((void*)arg1); return res;
}

uint64_t wrapper_helper_fistl_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_fistl_ST0((void*)arg1); return res;
}

uint64_t wrapper_helper_fistll_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_fistll_ST0((void*)arg1); return res;
}

uint64_t wrapper_helper_fistt_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_fistt_ST0((void*)arg1); return res;
}

uint64_t wrapper_helper_fisttl_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_fisttl_ST0((void*)arg1); return res;
}

uint64_t wrapper_helper_fisttll_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_fisttll_ST0((void*)arg1); return res;
}

uint64_t wrapper_helper_fldt_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fldt_ST0((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_fstt_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fstt_ST0((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_fpush(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fpush((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fpop(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fpop((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fdecstp(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fdecstp((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fincstp(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fincstp((void*)arg1);
return 0;
}

uint64_t wrapper_helper_ffree_STN(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_ffree_STN((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_fmov_ST0_FT0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fmov_ST0_FT0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fmov_FT0_STN(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fmov_FT0_STN((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_fmov_ST0_STN(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fmov_ST0_STN((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_fmov_STN_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fmov_STN_ST0((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_fxchg_ST0_STN(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fxchg_ST0_STN((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_fcom_ST0_FT0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fcom_ST0_FT0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fucom_ST0_FT0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fucom_ST0_FT0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fcomi_ST0_FT0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fcomi_ST0_FT0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fucomi_ST0_FT0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fucomi_ST0_FT0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fadd_ST0_FT0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fadd_ST0_FT0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fmul_ST0_FT0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fmul_ST0_FT0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fsub_ST0_FT0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fsub_ST0_FT0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fsubr_ST0_FT0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fsubr_ST0_FT0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fdiv_ST0_FT0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fdiv_ST0_FT0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fdivr_ST0_FT0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fdivr_ST0_FT0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fadd_STN_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fadd_STN_ST0((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_fmul_STN_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fmul_STN_ST0((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_fsub_STN_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fsub_STN_ST0((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_fsubr_STN_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fsubr_STN_ST0((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_fdiv_STN_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fdiv_STN_ST0((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_fdivr_STN_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fdivr_STN_ST0((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_fchs_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fchs_ST0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fabs_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fabs_ST0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fxam_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fxam_ST0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fld1_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fld1_ST0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fldl2t_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fldl2t_ST0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fldl2e_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fldl2e_ST0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fldpi_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fldpi_ST0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fldlg2_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fldlg2_ST0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fldln2_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fldln2_ST0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fldz_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fldz_ST0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fldz_FT0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fldz_FT0((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fnstsw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_fnstsw((void*)arg1); return res;
}

uint64_t wrapper_helper_fnstcw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_fnstcw((void*)arg1); return res;
}

uint64_t wrapper_helper_fldcw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fldcw((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_fclex(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fclex((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fwait(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fwait((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fninit(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fninit((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fbld_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fbld_ST0((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_fbst_ST0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fbst_ST0((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_f2xm1(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_f2xm1((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fyl2x(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fyl2x((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fptan(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fptan((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fpatan(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fpatan((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fxtract(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fxtract((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fprem1(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fprem1((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fprem(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fprem((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fyl2xp1(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fyl2xp1((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fsqrt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fsqrt((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fsincos(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fsincos((void*)arg1);
return 0;
}

uint64_t wrapper_helper_frndint(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_frndint((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fscale(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fscale((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fsin(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fsin((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fcos(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fcos((void*)arg1);
return 0;
}

uint64_t wrapper_helper_fstenv(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fstenv((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_fldenv(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fldenv((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_fsave(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fsave((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_frstor(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_frstor((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_fxsave(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fxsave((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_fxrstor(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fxrstor((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_xsave(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_xsave((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)));
return 0;
}

uint64_t wrapper_helper_xsaveopt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_xsaveopt((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)));
return 0;
}

uint64_t wrapper_helper_xrstor(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_xrstor((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)));
return 0;
}

uint64_t wrapper_helper_xgetbv(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_xgetbv((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_xsetbv(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_xsetbv((void*)arg1, (uint32_t)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)));
return 0;
}

uint64_t wrapper_helper_rdpkru(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rdpkru((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_wrpkru(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_wrpkru((void*)arg1, (uint32_t)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)));
return 0;
}

uint64_t wrapper_helper_pdep(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pdep((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_pext(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pext((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_ldmxcsr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_ldmxcsr((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_enter_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_enter_mmx((void*)arg1);
return 0;
}

uint64_t wrapper_helper_emms(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_emms((void*)arg1);
return 0;
}

uint64_t wrapper_helper_movq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_movq((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psrlw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psrlw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psraw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psraw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psllw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psllw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psrld_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psrld_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psrad_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psrad_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pslld_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pslld_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psrlq_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psrlq_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psllq_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psllq_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_paddb_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_paddb_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_paddw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_paddw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_paddl_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_paddl_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_paddq_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_paddq_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psubb_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psubb_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psubw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psubw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psubl_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psubl_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psubq_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psubq_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_paddusb_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_paddusb_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_paddsb_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_paddsb_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psubusb_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psubusb_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psubsb_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psubsb_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_paddusw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_paddusw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_paddsw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_paddsw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psubusw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psubusw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psubsw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psubsw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pminub_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pminub_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmaxub_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmaxub_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pminsw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pminsw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmaxsw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmaxsw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pand_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pand_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pandn_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pandn_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_por_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_por_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pxor_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pxor_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pcmpgtb_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pcmpgtb_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pcmpgtw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pcmpgtw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pcmpgtl_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pcmpgtl_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pcmpeqb_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pcmpeqb_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pcmpeqw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pcmpeqw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pcmpeql_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pcmpeql_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmullw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmullw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmulhrw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmulhrw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmulhuw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmulhuw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmulhw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmulhw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pavgb_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pavgb_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pavgw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pavgw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmuludq_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmuludq_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmaddwd_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmaddwd_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psadbw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psadbw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_maskmov_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_maskmov_mmx((void*)arg1, (void*)arg2, (void*)arg3, (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)));
return 0;
}

uint64_t wrapper_helper_movl_mm_T0_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_movl_mm_T0_mmx((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_movq_mm_T0_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_movq_mm_T0_mmx((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_pshufw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pshufw_mmx((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_pmovmskb_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pmovmskb_mmx((void*)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_packsswb_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_packsswb_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_packuswb_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_packuswb_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_packssdw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_packssdw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_punpcklbw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_punpcklbw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_punpcklwd_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_punpcklwd_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_punpckldq_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_punpckldq_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_punpckhbw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_punpckhbw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_punpckhwd_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_punpckhwd_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_punpckhdq_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_punpckhdq_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pi2fd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pi2fd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pi2fw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pi2fw((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pf2id(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pf2id((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pf2iw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pf2iw((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pfacc(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pfacc((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pfadd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pfadd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pfcmpeq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pfcmpeq((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pfcmpge(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pfcmpge((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pfcmpgt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pfcmpgt((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pfmax(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pfmax((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pfmin(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pfmin((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pfmul(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pfmul((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pfnacc(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pfnacc((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pfpnacc(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pfpnacc((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pfrcp(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pfrcp((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pfrsqrt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pfrsqrt((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pfsub(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pfsub((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pfsubr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pfsubr((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pswapd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pswapd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_phaddw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_phaddw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_phaddd_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_phaddd_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_phaddsw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_phaddsw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_phsubw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_phsubw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_phsubd_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_phsubd_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_phsubsw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_phsubsw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pabsb_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pabsb_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pabsw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pabsw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pabsd_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pabsd_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmaddubsw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmaddubsw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmulhrsw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmulhrsw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pshufb_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pshufb_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psignb_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psignb_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psignw_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psignw_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psignd_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psignd_mmx((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_palignr_mmx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_palignr_mmx((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_psrlw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psrlw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psraw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psraw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psllw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psllw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psrld_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psrld_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psrad_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psrad_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pslld_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pslld_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psrlq_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psrlq_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psllq_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psllq_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psrldq_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psrldq_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pslldq_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pslldq_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_paddb_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_paddb_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_paddw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_paddw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_paddl_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_paddl_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_paddq_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_paddq_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psubb_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psubb_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psubw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psubw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psubl_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psubl_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psubq_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psubq_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_paddusb_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_paddusb_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_paddsb_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_paddsb_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psubusb_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psubusb_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psubsb_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psubsb_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_paddusw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_paddusw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_paddsw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_paddsw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psubusw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psubusw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psubsw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psubsw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pminub_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pminub_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmaxub_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmaxub_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pminsw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pminsw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmaxsw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmaxsw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pand_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pand_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pandn_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pandn_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_por_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_por_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pxor_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pxor_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pcmpgtb_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pcmpgtb_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pcmpgtw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pcmpgtw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pcmpgtl_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pcmpgtl_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pcmpeqb_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pcmpeqb_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pcmpeqw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pcmpeqw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pcmpeql_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pcmpeql_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmullw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmullw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmulhuw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmulhuw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmulhw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmulhw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pavgb_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pavgb_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pavgw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pavgw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmuludq_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmuludq_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmaddwd_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmaddwd_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psadbw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psadbw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_maskmov_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_maskmov_xmm((void*)arg1, (void*)arg2, (void*)arg3, (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)));
return 0;
}

uint64_t wrapper_helper_movl_mm_T0_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_movl_mm_T0_xmm((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_movq_mm_T0_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_movq_mm_T0_xmm((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)));
return 0;
}

uint64_t wrapper_helper_shufps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_shufps((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_shufpd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_shufpd((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_pshufd_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pshufd_xmm((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_pshuflw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pshuflw_xmm((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_pshufhw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pshufhw_xmm((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_addps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_addps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_addss(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_addss((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_addpd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_addpd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_addsd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_addsd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_subps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_subps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_subss(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_subss((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_subpd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_subpd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_subsd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_subsd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_mulps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mulps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_mulss(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mulss((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_mulpd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mulpd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_mulsd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mulsd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_divps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_divps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_divss(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_divss((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_divpd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_divpd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_divsd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_divsd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_minps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_minps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_minss(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_minss((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_minpd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_minpd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_minsd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_minsd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_maxps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_maxps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_maxss(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_maxss((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_maxpd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_maxpd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_maxsd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_maxsd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_sqrtps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_sqrtps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_sqrtss(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_sqrtss((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_sqrtpd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_sqrtpd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_sqrtsd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_sqrtsd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cvtps2pd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cvtps2pd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cvtpd2ps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cvtpd2ps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cvtss2sd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cvtss2sd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cvtsd2ss(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cvtsd2ss((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cvtdq2ps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cvtdq2ps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cvtdq2pd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cvtdq2pd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cvtpi2ps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cvtpi2ps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cvtpi2pd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cvtpi2pd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cvtsi2ss(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cvtsi2ss((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_cvtsi2sd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cvtsi2sd((void*)arg1, (void*)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_cvtsq2ss(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cvtsq2ss((void*)arg1, (void*)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)));
return 0;
}

uint64_t wrapper_helper_cvtsq2sd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cvtsq2sd((void*)arg1, (void*)arg2, (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32)));
return 0;
}

uint64_t wrapper_helper_cvtps2dq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cvtps2dq((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cvtpd2dq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cvtpd2dq((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cvtps2pi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cvtps2pi((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cvtpd2pi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cvtpd2pi((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cvtss2si(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_cvtss2si((void*)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_cvtsd2si(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_cvtsd2si((void*)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_cvtss2sq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_cvtss2sq((void*)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_cvtsd2sq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_cvtsd2sq((void*)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_cvttps2dq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cvttps2dq((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cvttpd2dq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cvttpd2dq((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cvttps2pi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cvttps2pi((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cvttpd2pi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cvttpd2pi((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cvttss2si(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_cvttss2si((void*)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_cvttsd2si(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_cvttsd2si((void*)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_cvttss2sq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_cvttss2sq((void*)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_cvttsd2sq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_cvttsd2sq((void*)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_rsqrtps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_rsqrtps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_rsqrtss(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_rsqrtss((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_rcpps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_rcpps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_rcpss(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_rcpss((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_extrq_r(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_extrq_r((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_extrq_i(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_extrq_i((void*)arg1, (void*)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_insertq_r(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_insertq_r((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_insertq_i(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_insertq_i((void*)arg1, (void*)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_haddps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_haddps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_haddpd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_haddpd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_hsubps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_hsubps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_hsubpd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_hsubpd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_addsubps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_addsubps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_addsubpd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_addsubpd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpeqps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpeqps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpeqss(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpeqss((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpeqpd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpeqpd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpeqsd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpeqsd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpltps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpltps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpltss(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpltss((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpltpd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpltpd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpltsd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpltsd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpleps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpleps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpless(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpless((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmplepd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmplepd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmplesd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmplesd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpunordps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpunordps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpunordss(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpunordss((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpunordpd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpunordpd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpunordsd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpunordsd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpneqps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpneqps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpneqss(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpneqss((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpneqpd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpneqpd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpneqsd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpneqsd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpnltps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpnltps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpnltss(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpnltss((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpnltpd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpnltpd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpnltsd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpnltsd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpnleps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpnleps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpnless(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpnless((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpnlepd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpnlepd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpnlesd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpnlesd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpordps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpordps((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpordss(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpordss((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpordpd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpordpd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpordsd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpordsd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_ucomiss(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_ucomiss((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_comiss(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_comiss((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_ucomisd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_ucomisd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_comisd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_comisd((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_movmskps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_movmskps((void*)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_movmskpd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_movmskpd((void*)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_pmovmskb_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pmovmskb_xmm((void*)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_packsswb_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_packsswb_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_packuswb_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_packuswb_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_packssdw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_packssdw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_punpcklbw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_punpcklbw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_punpcklwd_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_punpcklwd_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_punpckldq_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_punpckldq_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_punpckhbw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_punpckhbw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_punpckhwd_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_punpckhwd_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_punpckhdq_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_punpckhdq_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_punpcklqdq_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_punpcklqdq_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_punpckhqdq_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_punpckhqdq_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_phaddw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_phaddw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_phaddd_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_phaddd_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_phaddsw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_phaddsw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_phsubw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_phsubw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_phsubd_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_phsubd_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_phsubsw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_phsubsw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pabsb_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pabsb_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pabsw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pabsw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pabsd_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pabsd_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmaddubsw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmaddubsw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmulhrsw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmulhrsw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pshufb_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pshufb_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psignb_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psignb_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psignw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psignw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_psignd_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_psignd_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_palignr_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_palignr_xmm((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_pblendvb_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pblendvb_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_blendvps_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_blendvps_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_blendvpd_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_blendvpd_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_ptest_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_ptest_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmovsxbw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmovsxbw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmovsxbd_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmovsxbd_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmovsxbq_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmovsxbq_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmovsxwd_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmovsxwd_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmovsxwq_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmovsxwq_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmovsxdq_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmovsxdq_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmovzxbw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmovzxbw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmovzxbd_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmovzxbd_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmovzxbq_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmovzxbq_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmovzxwd_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmovzxwd_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmovzxwq_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmovzxwq_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmovzxdq_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmovzxdq_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmuldq_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmuldq_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pcmpeqq_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pcmpeqq_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_packusdw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_packusdw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pminsb_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pminsb_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pminsd_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pminsd_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pminuw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pminuw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pminud_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pminud_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmaxsb_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmaxsb_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmaxsd_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmaxsd_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmaxuw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmaxuw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmaxud_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmaxud_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pmulld_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmulld_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_phminposuw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_phminposuw_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_roundps_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_roundps_xmm((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_roundpd_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_roundpd_xmm((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_roundss_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_roundss_xmm((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_roundsd_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_roundsd_xmm((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_blendps_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_blendps_xmm((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_blendpd_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_blendpd_xmm((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_pblendw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pblendw_xmm((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_dpps_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_dpps_xmm((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_dppd_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_dppd_xmm((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_mpsadbw_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mpsadbw_xmm((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_pcmpgtq_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pcmpgtq_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pcmpestri_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pcmpestri_xmm((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_pcmpestrm_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pcmpestrm_xmm((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_pcmpistri_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pcmpistri_xmm((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_pcmpistrm_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pcmpistrm_xmm((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_crc32(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_crc32((uint32_t)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_aesdec_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_aesdec_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_aesdeclast_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_aesdeclast_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_aesenc_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_aesenc_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_aesenclast_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_aesenclast_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_aesimc_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_aesimc_xmm((void*)arg1, (void*)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_aeskeygenassist_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_aeskeygenassist_xmm((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_pclmulqdq_xmm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pclmulqdq_xmm((void*)arg1, (void*)arg2, (void*)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_rclb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rclb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_rclw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rclw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_rcll(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rcll((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_rcrb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rcrb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_rcrw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rcrw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_rcrl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rcrl((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_rclq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rclq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_rcrq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rcrq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_rdrand(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rdrand((void*)arg1); return res;
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
uint64_t res = (uint64_t)helper_atomic_cmpxchgb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5, (uint32_t)arg6); return res;
}

uint64_t wrapper_helper_atomic_cmpxchgw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_cmpxchgw_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5, (uint32_t)arg6); return res;
}

uint64_t wrapper_helper_atomic_cmpxchgw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_cmpxchgw_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5, (uint32_t)arg6); return res;
}

uint64_t wrapper_helper_atomic_cmpxchgl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_cmpxchgl_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5, (uint32_t)arg6); return res;
}

uint64_t wrapper_helper_atomic_cmpxchgl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_cmpxchgl_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5, (uint32_t)arg6); return res;
}

// uint64_t wrapper_helper_atomic_cmpxchgq_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_cmpxchgq_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint64_t)(0 | (((uint64_t)arg6) << 0) | (((uint64_t)arg7) << 32)), (uint32_t)arg8); return res;
// }

// uint64_t wrapper_helper_atomic_cmpxchgq_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_cmpxchgq_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint64_t)(0 | (((uint64_t)arg6) << 0) | (((uint64_t)arg7) << 32)), (uint32_t)arg8); return res;
// }

uint64_t wrapper_helper_atomic_fetch_addb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_addb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_addw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_addw_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_addw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_addw_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_addl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_addl_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_addl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_addl_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

// uint64_t wrapper_helper_atomic_fetch_addq_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_fetch_addq_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

// uint64_t wrapper_helper_atomic_fetch_addq_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_fetch_addq_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

uint64_t wrapper_helper_atomic_fetch_andb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_andb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_andw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_andw_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_andw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_andw_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_andl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_andl_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_andl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_andl_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

// uint64_t wrapper_helper_atomic_fetch_andq_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_fetch_andq_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

// uint64_t wrapper_helper_atomic_fetch_andq_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_fetch_andq_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

uint64_t wrapper_helper_atomic_fetch_orb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_orb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_orw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_orw_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_orw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_orw_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_orl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_orl_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_orl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_orl_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

// uint64_t wrapper_helper_atomic_fetch_orq_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_fetch_orq_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

// uint64_t wrapper_helper_atomic_fetch_orq_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_fetch_orq_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

uint64_t wrapper_helper_atomic_fetch_xorb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_xorb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_xorw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_xorw_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_xorw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_xorw_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_xorl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_xorl_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_xorl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_xorl_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

// uint64_t wrapper_helper_atomic_fetch_xorq_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_fetch_xorq_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

// uint64_t wrapper_helper_atomic_fetch_xorq_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_fetch_xorq_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

uint64_t wrapper_helper_atomic_fetch_sminb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_sminb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_sminw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_sminw_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_sminw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_sminw_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_sminl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_sminl_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_sminl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_sminl_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

// uint64_t wrapper_helper_atomic_fetch_sminq_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_fetch_sminq_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

// uint64_t wrapper_helper_atomic_fetch_sminq_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_fetch_sminq_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

uint64_t wrapper_helper_atomic_fetch_uminb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_uminb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_uminw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_uminw_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_uminw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_uminw_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_uminl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_uminl_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_uminl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_uminl_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

// uint64_t wrapper_helper_atomic_fetch_uminq_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_fetch_uminq_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

// uint64_t wrapper_helper_atomic_fetch_uminq_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_fetch_uminq_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

uint64_t wrapper_helper_atomic_fetch_smaxb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_smaxb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_smaxw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_smaxw_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_smaxw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_smaxw_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_smaxl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_smaxl_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_smaxl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_smaxl_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

// uint64_t wrapper_helper_atomic_fetch_smaxq_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_fetch_smaxq_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

// uint64_t wrapper_helper_atomic_fetch_smaxq_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_fetch_smaxq_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

uint64_t wrapper_helper_atomic_fetch_umaxb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_umaxb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_umaxw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_umaxw_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_umaxw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_umaxw_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_umaxl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_umaxl_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_fetch_umaxl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_fetch_umaxl_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

// uint64_t wrapper_helper_atomic_fetch_umaxq_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_fetch_umaxq_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

// uint64_t wrapper_helper_atomic_fetch_umaxq_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_fetch_umaxq_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

uint64_t wrapper_helper_atomic_add_fetchb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_add_fetchb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_add_fetchw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_add_fetchw_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_add_fetchw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_add_fetchw_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_add_fetchl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_add_fetchl_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_add_fetchl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_add_fetchl_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

// uint64_t wrapper_helper_atomic_add_fetchq_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_add_fetchq_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

// uint64_t wrapper_helper_atomic_add_fetchq_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_add_fetchq_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

uint64_t wrapper_helper_atomic_and_fetchb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_and_fetchb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_and_fetchw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_and_fetchw_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_and_fetchw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_and_fetchw_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_and_fetchl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_and_fetchl_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_and_fetchl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_and_fetchl_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

// uint64_t wrapper_helper_atomic_and_fetchq_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_and_fetchq_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

// uint64_t wrapper_helper_atomic_and_fetchq_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_and_fetchq_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

uint64_t wrapper_helper_atomic_or_fetchb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_or_fetchb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_or_fetchw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_or_fetchw_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_or_fetchw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_or_fetchw_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_or_fetchl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_or_fetchl_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_or_fetchl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_or_fetchl_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

// uint64_t wrapper_helper_atomic_or_fetchq_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_or_fetchq_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

// uint64_t wrapper_helper_atomic_or_fetchq_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_or_fetchq_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

uint64_t wrapper_helper_atomic_xor_fetchb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_xor_fetchb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_xor_fetchw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_xor_fetchw_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_xor_fetchw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_xor_fetchw_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_xor_fetchl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_xor_fetchl_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_xor_fetchl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_xor_fetchl_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

// uint64_t wrapper_helper_atomic_xor_fetchq_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_xor_fetchq_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

// uint64_t wrapper_helper_atomic_xor_fetchq_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_xor_fetchq_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

uint64_t wrapper_helper_atomic_smin_fetchb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_smin_fetchb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_smin_fetchw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_smin_fetchw_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_smin_fetchw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_smin_fetchw_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_smin_fetchl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_smin_fetchl_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_smin_fetchl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_smin_fetchl_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

// uint64_t wrapper_helper_atomic_smin_fetchq_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_smin_fetchq_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

// uint64_t wrapper_helper_atomic_smin_fetchq_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_smin_fetchq_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

uint64_t wrapper_helper_atomic_umin_fetchb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_umin_fetchb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_umin_fetchw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_umin_fetchw_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_umin_fetchw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_umin_fetchw_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_umin_fetchl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_umin_fetchl_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_umin_fetchl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_umin_fetchl_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

// uint64_t wrapper_helper_atomic_umin_fetchq_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_umin_fetchq_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

// uint64_t wrapper_helper_atomic_umin_fetchq_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_umin_fetchq_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

uint64_t wrapper_helper_atomic_smax_fetchb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_smax_fetchb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_smax_fetchw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_smax_fetchw_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_smax_fetchw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_smax_fetchw_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_smax_fetchl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_smax_fetchl_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_smax_fetchl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_smax_fetchl_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

// uint64_t wrapper_helper_atomic_smax_fetchq_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_smax_fetchq_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

// uint64_t wrapper_helper_atomic_smax_fetchq_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_smax_fetchq_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

uint64_t wrapper_helper_atomic_umax_fetchb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_umax_fetchb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_umax_fetchw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_umax_fetchw_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_umax_fetchw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_umax_fetchw_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_umax_fetchl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_umax_fetchl_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_umax_fetchl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_umax_fetchl_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

// uint64_t wrapper_helper_atomic_umax_fetchq_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_umax_fetchq_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

// uint64_t wrapper_helper_atomic_umax_fetchq_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_umax_fetchq_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

uint64_t wrapper_helper_atomic_xchgb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_xchgb((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_xchgw_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_xchgw_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_xchgw_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_xchgw_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_xchgl_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_xchgl_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

uint64_t wrapper_helper_atomic_xchgl_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_atomic_xchgl_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint32_t)arg4, (uint32_t)arg5); return res;
}

// uint64_t wrapper_helper_atomic_xchgq_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_xchgq_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

// uint64_t wrapper_helper_atomic_xchgq_be(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
// uint64_t res = (uint64_t)helper_atomic_xchgq_be((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6); return res;
// }

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

uint64_t wrapper_helper_check_exit_request_x86_64(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_check_exit_request_x86_64((void*)arg1, (uint32_t)arg2);
return 0;
}

