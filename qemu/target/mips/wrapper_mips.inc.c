uint64_t wrapper_helper_uc_tracecode(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_uc_tracecode((uint32_t)arg1, (uint32_t)arg2, (void*)arg3, (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)));
return 0;
}

uint64_t wrapper_helper_uc_traceopcode(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_uc_traceopcode((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6, (void*)arg7, (uint64_t)(0 | (((uint64_t)arg8) << 0) | (((uint64_t)arg9) << 32)));
return 0;
}

uint64_t wrapper_helper_raise_exception_err(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_raise_exception_err((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_raise_exception(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_raise_exception((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_raise_exception_debug(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_raise_exception_debug((void*)arg1);
return 0;
}

uint64_t wrapper_helper_swl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_swl((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_swr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_swr((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_ll(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_ll((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_muls(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_muls((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_mulsu(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mulsu((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_macc(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_macc((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_maccu(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_maccu((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_msac(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_msac((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_msacu(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_msacu((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_mulhi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mulhi((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_mulhiu(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mulhiu((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_mulshi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mulshi((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_mulshiu(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mulshiu((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_macchi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_macchi((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_macchiu(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_macchiu((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_msachi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_msachi((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_msachiu(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_msachiu((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_bitswap(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_bitswap((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_rotx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rotx((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_mfc0_mvpcontrol(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfc0_mvpcontrol((void*)arg1); return res;
}

uint64_t wrapper_helper_mfc0_mvpconf0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfc0_mvpconf0((void*)arg1); return res;
}

uint64_t wrapper_helper_mfc0_mvpconf1(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfc0_mvpconf1((void*)arg1); return res;
}

uint64_t wrapper_helper_mftc0_vpecontrol(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mftc0_vpecontrol((void*)arg1); return res;
}

uint64_t wrapper_helper_mftc0_vpeconf0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mftc0_vpeconf0((void*)arg1); return res;
}

uint64_t wrapper_helper_mfc0_random(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfc0_random((void*)arg1); return res;
}

uint64_t wrapper_helper_mfc0_tcstatus(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfc0_tcstatus((void*)arg1); return res;
}

uint64_t wrapper_helper_mftc0_tcstatus(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mftc0_tcstatus((void*)arg1); return res;
}

uint64_t wrapper_helper_mfc0_tcbind(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfc0_tcbind((void*)arg1); return res;
}

uint64_t wrapper_helper_mftc0_tcbind(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mftc0_tcbind((void*)arg1); return res;
}

uint64_t wrapper_helper_mfc0_tcrestart(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfc0_tcrestart((void*)arg1); return res;
}

uint64_t wrapper_helper_mftc0_tcrestart(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mftc0_tcrestart((void*)arg1); return res;
}

uint64_t wrapper_helper_mfc0_tchalt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfc0_tchalt((void*)arg1); return res;
}

uint64_t wrapper_helper_mftc0_tchalt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mftc0_tchalt((void*)arg1); return res;
}

uint64_t wrapper_helper_mfc0_tccontext(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfc0_tccontext((void*)arg1); return res;
}

uint64_t wrapper_helper_mftc0_tccontext(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mftc0_tccontext((void*)arg1); return res;
}

uint64_t wrapper_helper_mfc0_tcschedule(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfc0_tcschedule((void*)arg1); return res;
}

uint64_t wrapper_helper_mftc0_tcschedule(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mftc0_tcschedule((void*)arg1); return res;
}

uint64_t wrapper_helper_mfc0_tcschefback(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfc0_tcschefback((void*)arg1); return res;
}

uint64_t wrapper_helper_mftc0_tcschefback(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mftc0_tcschefback((void*)arg1); return res;
}

uint64_t wrapper_helper_mfc0_count(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfc0_count((void*)arg1); return res;
}

uint64_t wrapper_helper_mfc0_saar(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfc0_saar((void*)arg1); return res;
}

uint64_t wrapper_helper_mfhc0_saar(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfhc0_saar((void*)arg1); return res;
}

uint64_t wrapper_helper_mftc0_entryhi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mftc0_entryhi((void*)arg1); return res;
}

uint64_t wrapper_helper_mftc0_status(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mftc0_status((void*)arg1); return res;
}

uint64_t wrapper_helper_mftc0_cause(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mftc0_cause((void*)arg1); return res;
}

uint64_t wrapper_helper_mftc0_epc(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mftc0_epc((void*)arg1); return res;
}

uint64_t wrapper_helper_mftc0_ebase(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mftc0_ebase((void*)arg1); return res;
}

uint64_t wrapper_helper_mftc0_configx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mftc0_configx((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_mfc0_lladdr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfc0_lladdr((void*)arg1); return res;
}

uint64_t wrapper_helper_mfc0_maar(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfc0_maar((void*)arg1); return res;
}

uint64_t wrapper_helper_mfhc0_maar(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfhc0_maar((void*)arg1); return res;
}

uint64_t wrapper_helper_mfc0_watchlo(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfc0_watchlo((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_mfc0_watchhi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfc0_watchhi((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_mfhc0_watchhi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfhc0_watchhi((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_mfc0_debug(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfc0_debug((void*)arg1); return res;
}

uint64_t wrapper_helper_mftc0_debug(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mftc0_debug((void*)arg1); return res;
}

uint64_t wrapper_helper_mtc0_index(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_index((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_mvpcontrol(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_mvpcontrol((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_vpecontrol(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_vpecontrol((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mttc0_vpecontrol(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mttc0_vpecontrol((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_vpeconf0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_vpeconf0((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mttc0_vpeconf0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mttc0_vpeconf0((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_vpeconf1(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_vpeconf1((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_yqmask(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_yqmask((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_vpeopt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_vpeopt((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_entrylo0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_entrylo0((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_tcstatus(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_tcstatus((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mttc0_tcstatus(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mttc0_tcstatus((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_tcbind(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_tcbind((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mttc0_tcbind(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mttc0_tcbind((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_tcrestart(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_tcrestart((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mttc0_tcrestart(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mttc0_tcrestart((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_tchalt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_tchalt((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mttc0_tchalt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mttc0_tchalt((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_tccontext(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_tccontext((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mttc0_tccontext(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mttc0_tccontext((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_tcschedule(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_tcschedule((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mttc0_tcschedule(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mttc0_tcschedule((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_tcschefback(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_tcschefback((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mttc0_tcschefback(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mttc0_tcschefback((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_entrylo1(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_entrylo1((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_context(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_context((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_memorymapid(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_memorymapid((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_pagemask(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_pagemask((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_pagegrain(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_pagegrain((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_segctl0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_segctl0((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_segctl1(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_segctl1((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_segctl2(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_segctl2((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_pwfield(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_pwfield((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_pwsize(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_pwsize((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_wired(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_wired((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_srsconf0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_srsconf0((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_srsconf1(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_srsconf1((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_srsconf2(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_srsconf2((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_srsconf3(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_srsconf3((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_srsconf4(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_srsconf4((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_hwrena(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_hwrena((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_pwctl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_pwctl((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_count(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_count((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_saari(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_saari((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_saar(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_saar((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mthc0_saar(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mthc0_saar((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_entryhi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_entryhi((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mttc0_entryhi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mttc0_entryhi((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_compare(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_compare((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_status(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_status((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mttc0_status(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mttc0_status((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_intctl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_intctl((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_srsctl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_srsctl((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_cause(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_cause((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mttc0_cause(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mttc0_cause((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_ebase(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_ebase((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mttc0_ebase(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mttc0_ebase((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_config0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_config0((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_config2(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_config2((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_config3(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_config3((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_config4(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_config4((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_config5(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_config5((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_lladdr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_lladdr((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_maar(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_maar((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mthc0_maar(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mthc0_maar((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_maari(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_maari((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_watchlo(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_watchlo((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_mtc0_watchhi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_watchhi((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_mthc0_watchhi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mthc0_watchhi((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_mtc0_xcontext(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_xcontext((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_framemask(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_framemask((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_debug(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_debug((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mttc0_debug(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mttc0_debug((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_performance0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_performance0((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_errctl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_errctl((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_taglo(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_taglo((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_datalo(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_datalo((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_taghi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_taghi((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mtc0_datahi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtc0_datahi((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_mftgpr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mftgpr((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_mftlo(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mftlo((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_mfthi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mfthi((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_mftacx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mftacx((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_mftdsp(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mftdsp((void*)arg1); return res;
}

uint64_t wrapper_helper_mttgpr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mttgpr((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_mttlo(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mttlo((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_mtthi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mtthi((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_mttacx(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mttacx((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_mttdsp(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mttdsp((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_dmt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_dmt(); return res;
}

uint64_t wrapper_helper_emt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_emt(); return res;
}

uint64_t wrapper_helper_dvpe(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_dvpe((void*)arg1); return res;
}

uint64_t wrapper_helper_evpe(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_evpe((void*)arg1); return res;
}

uint64_t wrapper_helper_dvp(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_dvp((void*)arg1); return res;
}

uint64_t wrapper_helper_evp(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_evp((void*)arg1); return res;
}

uint64_t wrapper_helper_lwm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_lwm((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_swm(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_swm((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_fork(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_fork((uint32_t)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_yield(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_yield((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_cfc1(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_cfc1((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_ctc1(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_ctc1((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_float_cvtd_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_cvtd_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_cvtd_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_cvtd_w((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_cvtd_l(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_cvtd_l((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_cvtps_pw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_cvtps_pw((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_cvtpw_ps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_cvtpw_ps((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_cvts_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_cvts_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_cvts_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_cvts_w((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_cvts_l(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_cvts_l((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_cvts_pl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_cvts_pl((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_cvts_pu(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_cvts_pu((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_addr_ps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_addr_ps((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_float_mulr_ps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_mulr_ps((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_float_class_s_mips(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_class_s_mips((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_class_d_mips(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_class_d_mips((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_maddf_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_maddf_s((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_float_maddf_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_maddf_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint64_t)(0 | (((uint64_t)arg6) << 0) | (((uint64_t)arg7) << 32))); return res;
}

uint64_t wrapper_helper_float_msubf_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_msubf_s((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_float_msubf_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_msubf_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint64_t)(0 | (((uint64_t)arg6) << 0) | (((uint64_t)arg7) << 32))); return res;
}

uint64_t wrapper_helper_float_max_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_max_s((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_float_max_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_max_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_float_maxa_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_maxa_s((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_float_maxa_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_maxa_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_float_min_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_min_s((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_float_min_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_min_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_float_mina_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_mina_s((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_float_mina_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_mina_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_float_cvt_l_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_cvt_l_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_cvt_l_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_cvt_l_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_cvt_w_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_cvt_w_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_cvt_w_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_cvt_w_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_round_l_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_round_l_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_round_l_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_round_l_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_round_w_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_round_w_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_round_w_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_round_w_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_trunc_l_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_trunc_l_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_trunc_l_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_trunc_l_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_trunc_w_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_trunc_w_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_trunc_w_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_trunc_w_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_ceil_l_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_ceil_l_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_ceil_l_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_ceil_l_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_ceil_w_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_ceil_w_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_ceil_w_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_ceil_w_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_floor_l_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_floor_l_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_floor_l_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_floor_l_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_floor_w_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_floor_w_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_floor_w_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_floor_w_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_cvt_2008_l_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_cvt_2008_l_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_cvt_2008_l_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_cvt_2008_l_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_cvt_2008_w_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_cvt_2008_w_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_cvt_2008_w_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_cvt_2008_w_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_round_2008_l_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_round_2008_l_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_round_2008_l_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_round_2008_l_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_round_2008_w_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_round_2008_w_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_round_2008_w_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_round_2008_w_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_trunc_2008_l_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_trunc_2008_l_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_trunc_2008_l_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_trunc_2008_l_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_trunc_2008_w_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_trunc_2008_w_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_trunc_2008_w_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_trunc_2008_w_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_ceil_2008_l_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_ceil_2008_l_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_ceil_2008_l_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_ceil_2008_l_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_ceil_2008_w_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_ceil_2008_w_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_ceil_2008_w_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_ceil_2008_w_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_floor_2008_l_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_floor_2008_l_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_floor_2008_l_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_floor_2008_l_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_floor_2008_w_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_floor_2008_w_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_floor_2008_w_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_floor_2008_w_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_sqrt_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_sqrt_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_sqrt_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_sqrt_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_rsqrt_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_rsqrt_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_rsqrt_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_rsqrt_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_recip_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_recip_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_recip_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_recip_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_rint_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_rint_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_rint_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_rint_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_abs_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_abs_s((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_float_abs_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_abs_d((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_float_abs_ps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_abs_ps((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_float_chs_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_chs_s((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_float_chs_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_chs_d((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_float_chs_ps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_chs_ps((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_float_recip1_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_recip1_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_recip1_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_recip1_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_recip1_ps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_recip1_ps((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_rsqrt1_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_rsqrt1_s((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_float_rsqrt1_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_rsqrt1_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_rsqrt1_ps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_rsqrt1_ps((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32))); return res;
}

uint64_t wrapper_helper_float_add_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_add_s((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_float_add_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_add_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_float_add_ps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_add_ps((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_float_sub_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_sub_s((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_float_sub_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_sub_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_float_sub_ps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_sub_ps((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_float_mul_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_mul_s((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_float_mul_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_mul_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_float_mul_ps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_mul_ps((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_float_div_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_div_s((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_float_div_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_div_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_float_div_ps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_div_ps((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_float_recip2_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_recip2_s((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_float_recip2_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_recip2_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_float_recip2_ps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_recip2_ps((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_float_rsqrt2_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_rsqrt2_s((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_float_rsqrt2_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_rsqrt2_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_float_rsqrt2_ps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_rsqrt2_ps((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_float_madd_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_madd_s((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_float_madd_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_madd_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint64_t)(0 | (((uint64_t)arg6) << 0) | (((uint64_t)arg7) << 32))); return res;
}

uint64_t wrapper_helper_float_madd_ps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_madd_ps((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint64_t)(0 | (((uint64_t)arg6) << 0) | (((uint64_t)arg7) << 32))); return res;
}

uint64_t wrapper_helper_float_msub_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_msub_s((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_float_msub_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_msub_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint64_t)(0 | (((uint64_t)arg6) << 0) | (((uint64_t)arg7) << 32))); return res;
}

uint64_t wrapper_helper_float_msub_ps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_msub_ps((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint64_t)(0 | (((uint64_t)arg6) << 0) | (((uint64_t)arg7) << 32))); return res;
}

uint64_t wrapper_helper_float_nmadd_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_nmadd_s((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_float_nmadd_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_nmadd_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint64_t)(0 | (((uint64_t)arg6) << 0) | (((uint64_t)arg7) << 32))); return res;
}

uint64_t wrapper_helper_float_nmadd_ps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_nmadd_ps((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint64_t)(0 | (((uint64_t)arg6) << 0) | (((uint64_t)arg7) << 32))); return res;
}

uint64_t wrapper_helper_float_nmsub_s(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_nmsub_s((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4); return res;
}

uint64_t wrapper_helper_float_nmsub_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_nmsub_d((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint64_t)(0 | (((uint64_t)arg6) << 0) | (((uint64_t)arg7) << 32))); return res;
}

uint64_t wrapper_helper_float_nmsub_ps(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_float_nmsub_ps((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint64_t)(0 | (((uint64_t)arg6) << 0) | (((uint64_t)arg7) << 32))); return res;
}

uint64_t wrapper_helper_cmp_d_f(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_d_f((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_d_f(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_d_f((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_s_f(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_s_f((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmpabs_s_f(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_s_f((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmp_ps_f(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_ps_f((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_ps_f(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_ps_f((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_d_un(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_d_un((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_d_un(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_d_un((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_s_un(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_s_un((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmpabs_s_un(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_s_un((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmp_ps_un(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_ps_un((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_ps_un(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_ps_un((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_d_eq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_d_eq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_d_eq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_d_eq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_s_eq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_s_eq((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmpabs_s_eq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_s_eq((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmp_ps_eq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_ps_eq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_ps_eq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_ps_eq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_d_ueq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_d_ueq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_d_ueq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_d_ueq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_s_ueq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_s_ueq((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmpabs_s_ueq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_s_ueq((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmp_ps_ueq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_ps_ueq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_ps_ueq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_ps_ueq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_d_olt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_d_olt((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_d_olt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_d_olt((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_s_olt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_s_olt((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmpabs_s_olt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_s_olt((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmp_ps_olt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_ps_olt((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_ps_olt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_ps_olt((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_d_ult(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_d_ult((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_d_ult(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_d_ult((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_s_ult(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_s_ult((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmpabs_s_ult(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_s_ult((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmp_ps_ult(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_ps_ult((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_ps_ult(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_ps_ult((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_d_ole(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_d_ole((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_d_ole(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_d_ole((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_s_ole(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_s_ole((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmpabs_s_ole(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_s_ole((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmp_ps_ole(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_ps_ole((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_ps_ole(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_ps_ole((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_d_ule(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_d_ule((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_d_ule(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_d_ule((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_s_ule(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_s_ule((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmpabs_s_ule(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_s_ule((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmp_ps_ule(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_ps_ule((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_ps_ule(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_ps_ule((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_d_sf(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_d_sf((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_d_sf(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_d_sf((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_s_sf(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_s_sf((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmpabs_s_sf(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_s_sf((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmp_ps_sf(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_ps_sf((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_ps_sf(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_ps_sf((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_d_ngle(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_d_ngle((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_d_ngle(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_d_ngle((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_s_ngle(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_s_ngle((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmpabs_s_ngle(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_s_ngle((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmp_ps_ngle(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_ps_ngle((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_ps_ngle(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_ps_ngle((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_d_seq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_d_seq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_d_seq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_d_seq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_s_seq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_s_seq((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmpabs_s_seq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_s_seq((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmp_ps_seq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_ps_seq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_ps_seq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_ps_seq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_d_ngl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_d_ngl((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_d_ngl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_d_ngl((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_s_ngl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_s_ngl((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmpabs_s_ngl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_s_ngl((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmp_ps_ngl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_ps_ngl((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_ps_ngl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_ps_ngl((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_d_lt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_d_lt((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_d_lt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_d_lt((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_s_lt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_s_lt((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmpabs_s_lt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_s_lt((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmp_ps_lt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_ps_lt((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_ps_lt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_ps_lt((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_d_nge(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_d_nge((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_d_nge(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_d_nge((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_s_nge(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_s_nge((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmpabs_s_nge(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_s_nge((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmp_ps_nge(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_ps_nge((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_ps_nge(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_ps_nge((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_d_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_d_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_d_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_d_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_s_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_s_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmpabs_s_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_s_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmp_ps_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_ps_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_ps_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_ps_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_d_ngt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_d_ngt((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_d_ngt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_d_ngt((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmp_s_ngt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_s_ngt((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmpabs_s_ngt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_s_ngt((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_cmp_ps_ngt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_ps_ngt((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_cmpabs_ps_ngt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpabs_ps_ngt((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32)), (uint32_t)arg6);
return 0;
}

uint64_t wrapper_helper_r6_cmp_d_af(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_af((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_af(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_af((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_r6_cmp_d_un(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_un((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_un(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_un((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_r6_cmp_d_eq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_eq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_eq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_eq((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_r6_cmp_d_ueq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_ueq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_ueq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_ueq((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_r6_cmp_d_lt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_lt((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_lt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_lt((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_r6_cmp_d_ult(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_ult((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_ult(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_ult((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_r6_cmp_d_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_le((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_le(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_le((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_r6_cmp_d_ule(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_ule((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_ule(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_ule((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_r6_cmp_d_saf(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_saf((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_saf(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_saf((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_r6_cmp_d_sun(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_sun((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_sun(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_sun((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_r6_cmp_d_seq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_seq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_seq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_seq((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_r6_cmp_d_sueq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_sueq((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_sueq(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_sueq((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_r6_cmp_d_slt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_slt((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_slt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_slt((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_r6_cmp_d_sult(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_sult((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_sult(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_sult((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_r6_cmp_d_sle(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_sle((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_sle(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_sle((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_r6_cmp_d_sule(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_sule((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_sule(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_sule((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_r6_cmp_d_or(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_or((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_or(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_or((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_r6_cmp_d_une(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_une((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_une(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_une((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_r6_cmp_d_ne(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_ne((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_ne(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_ne((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_r6_cmp_d_sor(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_sor((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_sor(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_sor((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_r6_cmp_d_sune(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_sune((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_sune(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_sune((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_r6_cmp_d_sne(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_d_sne((void*)arg1, (uint64_t)(0 | (((uint64_t)arg2) << 0) | (((uint64_t)arg3) << 32)), (uint64_t)(0 | (((uint64_t)arg4) << 0) | (((uint64_t)arg5) << 32))); return res;
}

uint64_t wrapper_helper_r6_cmp_s_sne(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_r6_cmp_s_sne((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_tlbwi(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_tlbwi((void*)arg1);
return 0;
}

uint64_t wrapper_helper_tlbwr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_tlbwr((void*)arg1);
return 0;
}

uint64_t wrapper_helper_tlbp(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_tlbp((void*)arg1);
return 0;
}

uint64_t wrapper_helper_tlbr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_tlbr((void*)arg1);
return 0;
}

uint64_t wrapper_helper_tlbinv(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_tlbinv((void*)arg1);
return 0;
}

uint64_t wrapper_helper_tlbinvf(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_tlbinvf((void*)arg1);
return 0;
}

uint64_t wrapper_helper_di(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_di((void*)arg1); return res;
}

uint64_t wrapper_helper_ei(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_ei((void*)arg1); return res;
}

uint64_t wrapper_helper_eret(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_eret((void*)arg1);
return 0;
}

uint64_t wrapper_helper_eretnc(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_eretnc((void*)arg1);
return 0;
}

uint64_t wrapper_helper_deret(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_deret((void*)arg1);
return 0;
}

uint64_t wrapper_helper_ginvt(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_ginvt((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_rdhwr_cpunum(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rdhwr_cpunum((void*)arg1); return res;
}

uint64_t wrapper_helper_rdhwr_synci_step(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rdhwr_synci_step((void*)arg1); return res;
}

uint64_t wrapper_helper_rdhwr_cc(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rdhwr_cc((void*)arg1); return res;
}

uint64_t wrapper_helper_rdhwr_ccres(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rdhwr_ccres((void*)arg1); return res;
}

uint64_t wrapper_helper_rdhwr_performance(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rdhwr_performance((void*)arg1); return res;
}

uint64_t wrapper_helper_rdhwr_xnp(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rdhwr_xnp((void*)arg1); return res;
}

uint64_t wrapper_helper_pmon(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_pmon((void*)arg1, (uint32_t)arg2);
return 0;
}

uint64_t wrapper_helper_wait(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_wait((void*)arg1);
return 0;
}

uint64_t wrapper_helper_paddsh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_paddsh((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_paddush(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_paddush((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_paddh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_paddh((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_paddw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_paddw((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_paddsb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_paddsb((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_paddusb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_paddusb((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_paddb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_paddb((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_psubsh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_psubsh((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_psubush(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_psubush((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_psubh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_psubh((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_psubw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_psubw((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_psubsb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_psubsb((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_psubusb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_psubusb((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_psubb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_psubb((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_pshufh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pshufh((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_packsswh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_packsswh((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_packsshb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_packsshb((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_packushb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_packushb((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_punpcklhw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_punpcklhw((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_punpckhhw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_punpckhhw((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_punpcklbh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_punpcklbh((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_punpckhbh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_punpckhbh((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_punpcklwd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_punpcklwd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_punpckhwd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_punpckhwd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_pavgh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pavgh((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_pavgb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pavgb((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_pmaxsh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pmaxsh((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_pminsh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pminsh((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_pmaxub(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pmaxub((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_pminub(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pminub((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_pcmpeqw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pcmpeqw((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_pcmpgtw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pcmpgtw((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_pcmpeqh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pcmpeqh((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_pcmpgth(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pcmpgth((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_pcmpeqb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pcmpeqb((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_pcmpgtb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pcmpgtb((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_psllw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_psllw((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_psllh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_psllh((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_psrlw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_psrlw((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_psrlh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_psrlh((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_psraw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_psraw((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_psrah(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_psrah((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_pmullh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pmullh((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_pmulhh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pmulhh((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_pmulhuh(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pmulhuh((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_pmaddhw(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pmaddhw((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_pasubub(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pasubub((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32)), (uint64_t)(0 | (((uint64_t)arg3) << 0) | (((uint64_t)arg4) << 32))); return res;
}

uint64_t wrapper_helper_biadd(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_biadd((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_pmovmskb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pmovmskb((uint64_t)(0 | (((uint64_t)arg1) << 0) | (((uint64_t)arg2) << 32))); return res;
}

uint64_t wrapper_helper_addq_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_addq_ph((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_addq_s_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_addq_s_ph((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_addq_s_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_addq_s_w((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_addu_qb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_addu_qb((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_addu_s_qb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_addu_s_qb((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_adduh_qb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_adduh_qb((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_adduh_r_qb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_adduh_r_qb((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_addu_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_addu_ph((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_addu_s_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_addu_s_ph((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_addqh_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_addqh_ph((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_addqh_r_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_addqh_r_ph((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_addqh_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_addqh_w((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_addqh_r_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_addqh_r_w((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_subq_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_subq_ph((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_subq_s_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_subq_s_ph((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_subq_s_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_subq_s_w((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_subu_qb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_subu_qb((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_subu_s_qb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_subu_s_qb((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_subuh_qb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_subuh_qb((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_subuh_r_qb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_subuh_r_qb((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_subu_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_subu_ph((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_subu_s_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_subu_s_ph((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_subqh_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_subqh_ph((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_subqh_r_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_subqh_r_ph((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_subqh_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_subqh_w((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_subqh_r_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_subqh_r_w((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_addsc(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_addsc((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_addwc(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_addwc((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_modsub(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_modsub((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_raddu_w_qb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_raddu_w_qb((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_absq_s_qb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_absq_s_qb((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_absq_s_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_absq_s_ph((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_absq_s_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_absq_s_w((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_precr_qb_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_precr_qb_ph((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_precrq_qb_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_precrq_qb_ph((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_precr_sra_ph_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_precr_sra_ph_w((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_precr_sra_r_ph_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_precr_sra_r_ph_w((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_precrq_ph_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_precrq_ph_w((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_precrq_rs_ph_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_precrq_rs_ph_w((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_precrqu_s_qb_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_precrqu_s_qb_ph((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_precequ_ph_qbl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_precequ_ph_qbl((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_precequ_ph_qbr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_precequ_ph_qbr((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_precequ_ph_qbla(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_precequ_ph_qbla((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_precequ_ph_qbra(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_precequ_ph_qbra((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_preceu_ph_qbl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_preceu_ph_qbl((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_preceu_ph_qbr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_preceu_ph_qbr((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_preceu_ph_qbla(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_preceu_ph_qbla((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_preceu_ph_qbra(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_preceu_ph_qbra((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_shll_qb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_shll_qb((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_shll_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_shll_ph((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_shll_s_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_shll_s_ph((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_shll_s_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_shll_s_w((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_shrl_qb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_shrl_qb((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_shrl_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_shrl_ph((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_shra_qb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_shra_qb((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_shra_r_qb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_shra_r_qb((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_shra_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_shra_ph((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_shra_r_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_shra_r_ph((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_shra_r_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_shra_r_w((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_muleu_s_ph_qbl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_muleu_s_ph_qbl((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_muleu_s_ph_qbr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_muleu_s_ph_qbr((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_mulq_rs_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mulq_rs_ph((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_muleq_s_w_phl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_muleq_s_w_phl((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_muleq_s_w_phr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_muleq_s_w_phr((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_dpau_h_qbl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_dpau_h_qbl((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_dpau_h_qbr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_dpau_h_qbr((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_dpsu_h_qbl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_dpsu_h_qbl((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_dpsu_h_qbr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_dpsu_h_qbr((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_dpa_w_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_dpa_w_ph((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_dpax_w_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_dpax_w_ph((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_dpaq_s_w_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_dpaq_s_w_ph((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_dpaqx_s_w_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_dpaqx_s_w_ph((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_dpaqx_sa_w_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_dpaqx_sa_w_ph((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_dps_w_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_dps_w_ph((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_dpsx_w_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_dpsx_w_ph((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_dpsq_s_w_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_dpsq_s_w_ph((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_dpsqx_s_w_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_dpsqx_s_w_ph((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_dpsqx_sa_w_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_dpsqx_sa_w_ph((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_mulsaq_s_w_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mulsaq_s_w_ph((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_dpaq_sa_l_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_dpaq_sa_l_w((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_dpsq_sa_l_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_dpsq_sa_l_w((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_maq_s_w_phl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_maq_s_w_phl((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_maq_s_w_phr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_maq_s_w_phr((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_maq_sa_w_phl(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_maq_sa_w_phl((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_maq_sa_w_phr(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_maq_sa_w_phr((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_mul_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mul_ph((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_mul_s_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mul_s_ph((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_mulq_s_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mulq_s_ph((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_mulq_s_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mulq_s_w((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_mulq_rs_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_mulq_rs_w((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_mulsa_w_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mulsa_w_ph((uint32_t)arg1, (uint32_t)arg2, (uint32_t)arg3, (void*)arg4);
return 0;
}

uint64_t wrapper_helper_bitrev(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_bitrev((uint32_t)arg1); return res;
}

uint64_t wrapper_helper_insv(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_insv((void*)arg1, (uint32_t)arg2, (uint32_t)arg3); return res;
}

uint64_t wrapper_helper_cmpu_eq_qb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpu_eq_qb((uint32_t)arg1, (uint32_t)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpu_lt_qb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpu_lt_qb((uint32_t)arg1, (uint32_t)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpu_le_qb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmpu_le_qb((uint32_t)arg1, (uint32_t)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmpgu_eq_qb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_cmpgu_eq_qb((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_cmpgu_lt_qb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_cmpgu_lt_qb((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_cmpgu_le_qb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_cmpgu_le_qb((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_cmp_eq_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_eq_ph((uint32_t)arg1, (uint32_t)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmp_lt_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_lt_ph((uint32_t)arg1, (uint32_t)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_cmp_le_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cmp_le_ph((uint32_t)arg1, (uint32_t)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_pick_qb(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pick_qb((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_pick_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_pick_ph((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_packrl_ph(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_packrl_ph((uint32_t)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_extr_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_extr_w((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_extr_r_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_extr_r_w((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_extr_rs_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_extr_rs_w((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_extr_s_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_extr_s_h((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_extp(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_extp((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_extpdp(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_extpdp((uint32_t)arg1, (uint32_t)arg2, (void*)arg3); return res;
}

uint64_t wrapper_helper_shilo(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_shilo((uint32_t)arg1, (uint32_t)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_mthlip(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_mthlip((uint32_t)arg1, (uint32_t)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_wrdsp(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_wrdsp((uint32_t)arg1, (uint32_t)arg2, (void*)arg3);
return 0;
}

uint64_t wrapper_helper_rddsp(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_rddsp((uint32_t)arg1, (void*)arg2); return res;
}

uint64_t wrapper_helper_msa_nloc_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_nloc_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_msa_nloc_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_nloc_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_msa_nloc_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_nloc_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_msa_nloc_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_nloc_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_msa_nlzc_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_nlzc_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_msa_nlzc_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_nlzc_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_msa_nlzc_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_nlzc_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_msa_nlzc_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_nlzc_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_msa_pcnt_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_pcnt_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_msa_pcnt_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_pcnt_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_msa_pcnt_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_pcnt_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_msa_pcnt_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_pcnt_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_msa_binsl_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_binsl_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_binsl_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_binsl_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_binsl_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_binsl_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_binsl_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_binsl_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_binsr_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_binsr_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_binsr_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_binsr_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_binsr_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_binsr_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_binsr_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_binsr_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_bmnz_v(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_bmnz_v((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_bmz_v(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_bmz_v((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_bsel_v(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_bsel_v((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_bclr_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_bclr_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_bclr_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_bclr_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_bclr_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_bclr_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_bclr_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_bclr_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_bneg_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_bneg_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_bneg_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_bneg_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_bneg_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_bneg_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_bneg_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_bneg_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_bset_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_bset_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_bset_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_bset_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_bset_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_bset_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_bset_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_bset_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_add_a_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_add_a_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_add_a_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_add_a_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_add_a_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_add_a_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_add_a_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_add_a_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_adds_a_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_adds_a_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_adds_a_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_adds_a_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_adds_a_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_adds_a_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_adds_a_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_adds_a_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_adds_s_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_adds_s_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_adds_s_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_adds_s_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_adds_s_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_adds_s_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_adds_s_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_adds_s_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_adds_u_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_adds_u_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_adds_u_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_adds_u_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_adds_u_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_adds_u_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_adds_u_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_adds_u_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_addv_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_addv_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_addv_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_addv_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_addv_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_addv_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_addv_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_addv_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_hadd_s_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_hadd_s_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_hadd_s_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_hadd_s_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_hadd_s_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_hadd_s_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_hadd_u_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_hadd_u_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_hadd_u_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_hadd_u_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_hadd_u_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_hadd_u_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ave_s_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ave_s_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ave_s_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ave_s_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ave_s_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ave_s_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ave_s_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ave_s_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ave_u_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ave_u_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ave_u_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ave_u_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ave_u_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ave_u_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ave_u_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ave_u_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_aver_s_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_aver_s_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_aver_s_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_aver_s_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_aver_s_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_aver_s_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_aver_s_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_aver_s_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_aver_u_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_aver_u_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_aver_u_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_aver_u_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_aver_u_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_aver_u_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_aver_u_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_aver_u_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ceq_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ceq_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ceq_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ceq_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ceq_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ceq_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ceq_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ceq_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_cle_s_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_cle_s_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_cle_s_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_cle_s_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_cle_s_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_cle_s_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_cle_s_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_cle_s_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_cle_u_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_cle_u_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_cle_u_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_cle_u_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_cle_u_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_cle_u_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_cle_u_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_cle_u_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_clt_s_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_clt_s_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_clt_s_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_clt_s_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_clt_s_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_clt_s_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_clt_s_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_clt_s_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_clt_u_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_clt_u_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_clt_u_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_clt_u_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_clt_u_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_clt_u_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_clt_u_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_clt_u_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_div_s_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_div_s_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_div_s_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_div_s_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_div_s_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_div_s_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_div_s_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_div_s_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_div_u_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_div_u_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_div_u_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_div_u_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_div_u_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_div_u_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_div_u_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_div_u_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_max_a_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_max_a_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_max_a_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_max_a_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_max_a_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_max_a_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_max_a_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_max_a_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_max_s_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_max_s_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_max_s_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_max_s_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_max_s_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_max_s_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_max_s_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_max_s_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_max_u_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_max_u_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_max_u_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_max_u_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_max_u_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_max_u_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_max_u_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_max_u_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_min_a_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_min_a_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_min_a_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_min_a_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_min_a_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_min_a_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_min_a_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_min_a_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_min_s_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_min_s_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_min_s_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_min_s_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_min_s_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_min_s_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_min_s_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_min_s_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_min_u_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_min_u_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_min_u_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_min_u_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_min_u_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_min_u_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_min_u_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_min_u_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_mod_u_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_mod_u_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_mod_u_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_mod_u_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_mod_u_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_mod_u_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_mod_u_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_mod_u_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_mod_s_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_mod_s_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_mod_s_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_mod_s_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_mod_s_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_mod_s_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_mod_s_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_mod_s_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_asub_s_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_asub_s_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_asub_s_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_asub_s_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_asub_s_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_asub_s_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_asub_s_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_asub_s_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_asub_u_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_asub_u_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_asub_u_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_asub_u_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_asub_u_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_asub_u_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_asub_u_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_asub_u_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_hsub_s_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_hsub_s_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_hsub_s_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_hsub_s_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_hsub_s_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_hsub_s_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_hsub_u_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_hsub_u_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_hsub_u_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_hsub_u_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_hsub_u_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_hsub_u_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ilvev_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ilvev_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ilvev_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ilvev_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ilvev_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ilvev_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ilvev_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ilvev_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ilvod_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ilvod_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ilvod_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ilvod_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ilvod_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ilvod_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ilvod_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ilvod_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ilvl_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ilvl_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ilvl_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ilvl_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ilvl_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ilvl_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ilvl_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ilvl_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ilvr_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ilvr_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ilvr_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ilvr_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ilvr_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ilvr_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ilvr_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ilvr_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_and_v(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_and_v((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_nor_v(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_nor_v((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_or_v(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_or_v((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_xor_v(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_xor_v((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_pckev_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_pckev_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_pckev_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_pckev_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_pckev_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_pckev_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_pckev_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_pckev_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_pckod_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_pckod_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_pckod_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_pckod_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_pckod_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_pckod_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_pckod_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_pckod_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_sll_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_sll_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_sll_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_sll_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_sll_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_sll_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_sll_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_sll_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_sra_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_sra_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_sra_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_sra_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_sra_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_sra_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_sra_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_sra_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_srar_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_srar_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_srar_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_srar_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_srar_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_srar_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_srar_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_srar_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_srl_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_srl_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_srl_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_srl_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_srl_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_srl_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_srl_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_srl_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_srlr_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_srlr_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_srlr_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_srlr_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_srlr_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_srlr_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_srlr_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_srlr_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_move_v(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_move_v((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_msa_andi_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_andi_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ori_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ori_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_nori_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_nori_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_xori_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_xori_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_bmnzi_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_bmnzi_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_bmzi_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_bmzi_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_bseli_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_bseli_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_shf_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_shf_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_addvi_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_addvi_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_subvi_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_subvi_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_maxi_s_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_maxi_s_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_maxi_u_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_maxi_u_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_mini_s_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_mini_s_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_mini_u_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_mini_u_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_ceqi_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ceqi_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_clti_s_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_clti_s_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_clti_u_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_clti_u_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_clei_s_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_clei_s_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_clei_u_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_clei_u_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_ldi_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ldi_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_slli_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_slli_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_srai_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_srai_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_srli_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_srli_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_bclri_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_bclri_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_bseti_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_bseti_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_bnegi_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_bnegi_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_binsli_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_binsli_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_binsri_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_binsri_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_sat_s_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_sat_s_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_sat_u_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_sat_u_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_srari_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_srari_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_srlri_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_srlri_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_binsl_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_binsl_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_binsr_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_binsr_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_subv_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_subv_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_subs_s_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_subs_s_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_subs_u_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_subs_u_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_subsus_u_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_subsus_u_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_subsuu_s_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_subsuu_s_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_mulv_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_mulv_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_maddv_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_maddv_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_msubv_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_msubv_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_dotp_s_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_dotp_s_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_dotp_u_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_dotp_u_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_dpadd_s_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_dpadd_s_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_dpadd_u_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_dpadd_u_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_dpsub_s_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_dpsub_s_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_dpsub_u_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_dpsub_u_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_sld_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_sld_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_splat_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_splat_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_vshf_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_vshf_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_sldi_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_sldi_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_splati_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_splati_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_insve_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_insve_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_ctcmsa(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ctcmsa((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_msa_cfcmsa(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint64_t res = (uint64_t)helper_msa_cfcmsa((void*)arg1, (uint32_t)arg2); return res;
}

uint64_t wrapper_helper_msa_fcaf_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fcaf_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fcun_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fcun_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fceq_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fceq_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fcueq_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fcueq_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fclt_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fclt_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fcult_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fcult_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fcle_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fcle_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fcule_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fcule_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fsaf_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fsaf_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fsun_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fsun_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fseq_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fseq_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fsueq_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fsueq_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fslt_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fslt_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fsult_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fsult_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fsle_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fsle_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fsule_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fsule_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fadd_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fadd_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fsub_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fsub_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fmul_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fmul_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fdiv_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fdiv_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fmadd_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fmadd_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fmsub_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fmsub_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fexp2_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fexp2_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fexdo_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fexdo_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_ftq_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ftq_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fmin_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fmin_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fmin_a_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fmin_a_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fmax_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fmax_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fmax_a_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fmax_a_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fcor_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fcor_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fcune_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fcune_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fcne_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fcne_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_mul_q_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_mul_q_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_madd_q_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_madd_q_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_msub_q_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_msub_q_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fsor_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fsor_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fsune_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fsune_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fsne_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fsne_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_mulr_q_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_mulr_q_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_maddr_q_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_maddr_q_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_msubr_q_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_msubr_q_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4, (uint32_t)arg5);
return 0;
}

uint64_t wrapper_helper_msa_fill_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fill_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_copy_s_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_copy_s_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_copy_s_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_copy_s_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_copy_s_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_copy_s_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_copy_s_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_copy_s_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_copy_u_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_copy_u_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_copy_u_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_copy_u_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_copy_u_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_copy_u_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_insert_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_insert_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_insert_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_insert_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_insert_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_insert_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_insert_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_insert_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_fclass_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fclass_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ftrunc_s_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ftrunc_s_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ftrunc_u_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ftrunc_u_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_fsqrt_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fsqrt_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_frsqrt_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_frsqrt_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_frcp_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_frcp_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_frint_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_frint_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_flog2_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_flog2_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_fexupl_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fexupl_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_fexupr_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_fexupr_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ffql_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ffql_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ffqr_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ffqr_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ftint_s_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ftint_s_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ftint_u_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ftint_u_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ffint_s_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ffint_s_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ffint_u_df(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ffint_u_df((void*)arg1, (uint32_t)arg2, (uint32_t)arg3, (uint32_t)arg4);
return 0;
}

uint64_t wrapper_helper_msa_ld_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ld_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_msa_st_b(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_st_b((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_msa_ld_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ld_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_msa_st_h(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_st_h((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_msa_ld_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ld_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_msa_st_w(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_st_w((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_msa_ld_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_ld_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_msa_st_d(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_msa_st_d((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
return 0;
}

uint64_t wrapper_helper_cache(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_cache((void*)arg1, (uint32_t)arg2, (uint32_t)arg3);
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

uint64_t wrapper_helper_check_exit_request_mips(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
helper_check_exit_request_mips((void*)arg1, (uint32_t)arg2);
return 0;
}

