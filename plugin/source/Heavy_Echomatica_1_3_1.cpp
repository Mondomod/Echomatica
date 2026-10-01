/** Mondomatic */

#include "Heavy_Echomatica_1_3_1.hpp"

#include <new>

#define Context(_c) static_cast<Heavy_Echomatica_1_3_1 *>(_c)


/*
 * C Functions
 */

extern "C" {
  HV_EXPORT HeavyContextInterface *hv_Echomatica_1_3_1_new(double sampleRate) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_Echomatica_1_3_1));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_Echomatica_1_3_1(sampleRate);
    return Context(ptr);
  }

  HV_EXPORT HeavyContextInterface *hv_Echomatica_1_3_1_new_with_options(double sampleRate,
      int poolKb, int inQueueKb, int outQueueKb) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_Echomatica_1_3_1));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_Echomatica_1_3_1(sampleRate, poolKb, inQueueKb, outQueueKb);
    return Context(ptr);
  }

  HV_EXPORT void hv_Echomatica_1_3_1_free(HeavyContextInterface *instance) {
    // call destructor
    Context(instance)->~Heavy_Echomatica_1_3_1();
    // free memory
    hv_free(instance);
  }
} // extern "C"







/*
 * Class Functions
 */

Heavy_Echomatica_1_3_1::Heavy_Echomatica_1_3_1(double sampleRate, int poolKb, int inQueueKb, int outQueueKb)
    : HeavyContext(sampleRate, poolKb, inQueueKb, outQueueKb) {
  numBytes += sBiquad_k_init(&sBiquad_k_2MEhJfs7, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  numBytes += sRPole_init(&sRPole_Z3i60TBs);
  numBytes += sDel1_init(&sDel1_XOys3I72);
  numBytes += sRPole_init(&sRPole_Xy0ZHoIs);
  numBytes += sDel1_init(&sDel1_imSCIc5B);
  numBytes += sRPole_init(&sRPole_DIjSpNK0);
  numBytes += sDel1_init(&sDel1_yzuYsNZa);
  numBytes += sRPole_init(&sRPole_DyTBEliT);
  numBytes += sRPole_init(&sRPole_eYX1i5rd);
  numBytes += sRPole_init(&sRPole_nPtff6dN);
  numBytes += sRPole_init(&sRPole_WAD54lJH);
  numBytes += sDel1_init(&sDel1_R6NEev6T);
  numBytes += sRPole_init(&sRPole_TrBOmZnu);
  numBytes += sLine_init(&sLine_yOKjABDc);
  numBytes += sLine_init(&sLine_eYOqMAnK);
  numBytes += sEnv_init(&sEnv_9kN2aNIz, 256, 512);
  numBytes += sLine_init(&sLine_hu4SY6a2);
  numBytes += sLine_init(&sLine_lsf54WSc);
  numBytes += sRPole_init(&sRPole_UfMACkEI);
  numBytes += sTabwrite_init(&sTabwrite_lYqZnbOg, &hTable_ob8PQSvd);
  numBytes += sPhasor_k_init(&sPhasor_FYzcAaC8, 0.0f, sampleRate);
  numBytes += sPhasor_k_init(&sPhasor_gSDe9Aqa, 0.0f, sampleRate);
  numBytes += sLine_init(&sLine_UkJ2yJpr);
  numBytes += sTabhead_init(&sTabhead_Hi0KCZ3R, &hTable_ob8PQSvd);
  numBytes += sTabread_init(&sTabread_r19aq14H, &hTable_ob8PQSvd, false);
  numBytes += sTabread_init(&sTabread_WbvuLsM4, &hTable_ob8PQSvd, false);
  numBytes += sLine_init(&sLine_ncc8mYHw);
  numBytes += sLine_init(&sLine_1d96uCmI);
  numBytes += sTabhead_init(&sTabhead_gn22YINZ, &hTable_ob8PQSvd);
  numBytes += sTabread_init(&sTabread_LfLYDFff, &hTable_ob8PQSvd, false);
  numBytes += sTabread_init(&sTabread_SmIG8Mb2, &hTable_ob8PQSvd, false);
  numBytes += sLine_init(&sLine_YCAOSTuI);
  numBytes += sLine_init(&sLine_JRnl2POD);
  numBytes += sTabhead_init(&sTabhead_rv4To1cy, &hTable_ob8PQSvd);
  numBytes += sTabread_init(&sTabread_zs9ObMum, &hTable_ob8PQSvd, false);
  numBytes += sTabread_init(&sTabread_a0ioulSz, &hTable_ob8PQSvd, false);
  numBytes += sLine_init(&sLine_VgEkHRqA);
  numBytes += sLine_init(&sLine_yAPGJXkc);
  numBytes += sTabhead_init(&sTabhead_Y2k639tU, &hTable_ob8PQSvd);
  numBytes += sTabread_init(&sTabread_LBEuNycD, &hTable_ob8PQSvd, false);
  numBytes += sTabread_init(&sTabread_E3ySWvpc, &hTable_ob8PQSvd, false);
  numBytes += sLine_init(&sLine_gaHIZvAT);
  numBytes += sLine_init(&sLine_0gAywUUl);
  numBytes += sTabhead_init(&sTabhead_lDQCfk66, &hTable_ob8PQSvd);
  numBytes += sTabread_init(&sTabread_k9FLfYnH, &hTable_ob8PQSvd, false);
  numBytes += sTabread_init(&sTabread_M1mtecMi, &hTable_ob8PQSvd, false);
  numBytes += sLine_init(&sLine_4DuNBioi);
  numBytes += sLine_init(&sLine_Jm2TE1b2);
  numBytes += sTabhead_init(&sTabhead_A1W8lbJD, &hTable_ob8PQSvd);
  numBytes += sTabread_init(&sTabread_mpXcyO10, &hTable_ob8PQSvd, false);
  numBytes += sTabread_init(&sTabread_kPGsUfzj, &hTable_ob8PQSvd, false);
  numBytes += sLine_init(&sLine_Neod7gJa);
  numBytes += sEnv_init(&sEnv_IBsEIK8M, 256, 512);
  numBytes += sLine_init(&sLine_oVN7e5pg);
  numBytes += sRPole_init(&sRPole_rn7QXo5T);
  numBytes += sRPole_init(&sRPole_L8y8zIp3);
  numBytes += sDel1_init(&sDel1_evP6cPYc);
  numBytes += sEnv_init(&sEnv_ZlitHNSW, 256, 512);
  numBytes += sLine_init(&sLine_2lYXWxaQ);
  numBytes += sRPole_init(&sRPole_8ADCeAfQ);
  numBytes += sRPole_init(&sRPole_LrhjAlcb);
  numBytes += sDel1_init(&sDel1_pQHWN3u5);
  numBytes += sLine_init(&sLine_iOAGCDNI);
  numBytes += sLine_init(&sLine_36nvlRmD);
  numBytes += sLine_init(&sLine_AVTRLFwO);
  numBytes += sLine_init(&sLine_PaSJzYai);
  numBytes += sLine_init(&sLine_fGE7PF2Q);
  numBytes += sLine_init(&sLine_egTO6PDI);
  numBytes += sRPole_init(&sRPole_fWqetvay);
  numBytes += sDel1_init(&sDel1_TUTILxl1);
  numBytes += sLine_init(&sLine_NhDWBcIM);
  numBytes += sPhasor_k_init(&sPhasor_n83LIrbr, 0.3f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_ukkJxWto, &hTable_29d75dGt);
  numBytes += sTabread_init(&sTabread_BxpkvpJs, &hTable_29d75dGt, false);
  numBytes += sTabread_init(&sTabread_ajT9SLyz, &hTable_29d75dGt, false);
  numBytes += sRPole_init(&sRPole_7Nlcvejr);
  numBytes += sDel1_init(&sDel1_vOjnBuQ8);
  numBytes += sPhasor_k_init(&sPhasor_g6YeZeSF, 0.5f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_DghsG0R7, &hTable_0cQsOJd1);
  numBytes += sTabread_init(&sTabread_YHxlj448, &hTable_0cQsOJd1, false);
  numBytes += sTabread_init(&sTabread_Se8ds7NY, &hTable_0cQsOJd1, false);
  numBytes += sRPole_init(&sRPole_UnYHXdHe);
  numBytes += sDel1_init(&sDel1_5uWqQdvp);
  numBytes += sTabwrite_init(&sTabwrite_3mF5qyQV, &hTable_0cQsOJd1);
  numBytes += sTabwrite_init(&sTabwrite_2BBW26yA, &hTable_29d75dGt);
  numBytes += sRPole_init(&sRPole_GFjkJRo6);
  numBytes += sDel1_init(&sDel1_L9YnRI2m);
  numBytes += sRPole_init(&sRPole_TFlv01U8);
  numBytes += sDel1_init(&sDel1_8HWLmjo5);
  numBytes += cVar_init_s(&cVar_bkYIl2Fk, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_QVZkhf4f, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_QAokdLUk, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_QZsV0a0N, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_R6AZ29So, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_gQWe44Uh, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ocDfyrU0, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_StiGe7l0, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_MVXONMyA, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_mR9j5y5q, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_HtVMfOEy, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_anPUzbUd, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_ekfHhPXN, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_9K7oGpFq, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_gihkWbd7, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_d35nWb3c, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_R9m5ZzTi, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_X8U8KBGo, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Xn99z2Uk, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_m1VshnCd, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_Dyr6ZFL3, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_deYXT6vm, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_iUvNybFA, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_NDfvRXn5, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_2ItTX49E, 0.0f);
  numBytes += cVar_init_f(&cVar_dY5LqiiQ, 0.0f);
  numBytes += cVar_init_f(&cVar_EjZy7xzw, 0.0f);
  numBytes += cVar_init_f(&cVar_7rVWhU9r, 0.0f);
  numBytes += cVar_init_f(&cVar_jeO5UEyT, 0.0f);
  numBytes += cVar_init_f(&cVar_6a5YXyay, 0.0f);
  numBytes += cVar_init_f(&cVar_yoDYiFqr, 0.0f);
  numBytes += cVar_init_f(&cVar_sjyquPsE, 0.0f);
  numBytes += cVar_init_f(&cVar_ejzW8HGu, 0.0f);
  numBytes += cVar_init_f(&cVar_XhQXVNkr, 0.0f);
  numBytes += cVar_init_f(&cVar_t2OXRHEu, 0.0f);
  numBytes += cVar_init_f(&cVar_pevQ5KcR, 0.0f);
  numBytes += cDelay_init(this, &cDelay_MjwhmHcj, 0.0f);
  numBytes += cDelay_init(this, &cDelay_XZoBvB3J, 0.0f);
  numBytes += hTable_init(&hTable_ob8PQSvd, 256);
  numBytes += cPack_init(&cPack_L1TO5NaH, 2, 0.0f, 20.0f);
  numBytes += cPack_init(&cPack_A8pAIw1o, 2, 0.0f, 1800.0f);
  numBytes += cPack_init(&cPack_Z7jEZ2ic, 2, 0.0f, 1600.0f);
  numBytes += cPack_init(&cPack_BQyw2Al9, 2, 0.0f, 1300.0f);
  numBytes += cPack_init(&cPack_LLZFrpAp, 2, 0.0f, 1000.0f);
  numBytes += cPack_init(&cPack_omf4143H, 2, 0.0f, 800.0f);
  numBytes += cPack_init(&cPack_2GpLnE6v, 2, 0.0f, 600.0f);
  numBytes += cVar_init_f(&cVar_fFxQkaHz, 10000.0f);
  numBytes += cBinop_init(&cBinop_eGJyeqph, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_ZwrXsh3s, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_yztMCvl3, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_Fv87gkcU, 27, 1);
  numBytes += cSlice_init(&cSlice_pAhZqdIV, 26, 1);
  numBytes += cSlice_init(&cSlice_nytE1cDf, 25, 1);
  numBytes += cSlice_init(&cSlice_PFGUAmrw, 24, 1);
  numBytes += cSlice_init(&cSlice_EzfsN4PO, 23, 1);
  numBytes += cSlice_init(&cSlice_f6LABaw7, 22, 1);
  numBytes += cSlice_init(&cSlice_qJwtdsNc, 21, 1);
  numBytes += cSlice_init(&cSlice_6Zn9BSpa, 20, 1);
  numBytes += cSlice_init(&cSlice_j9mmBTBo, 19, 1);
  numBytes += cSlice_init(&cSlice_4g7kzxKk, 18, 1);
  numBytes += cSlice_init(&cSlice_HeDQiD7X, 17, 1);
  numBytes += cSlice_init(&cSlice_ELCcLq6J, 16, 1);
  numBytes += cSlice_init(&cSlice_0g51Nvdp, 15, 1);
  numBytes += cSlice_init(&cSlice_4DguF9Je, 14, 1);
  numBytes += cSlice_init(&cSlice_ebwWZuer, 13, 1);
  numBytes += cSlice_init(&cSlice_9LyXNsSP, 12, 1);
  numBytes += cSlice_init(&cSlice_ztks9yhy, 11, 1);
  numBytes += cSlice_init(&cSlice_rJH3x7Uy, 10, 1);
  numBytes += cSlice_init(&cSlice_0N5vk8Fb, 9, 1);
  numBytes += cSlice_init(&cSlice_DC2FBDeH, 8, 1);
  numBytes += cSlice_init(&cSlice_2yzmz43p, 7, 1);
  numBytes += cSlice_init(&cSlice_0uQ5P0TF, 6, 1);
  numBytes += cSlice_init(&cSlice_zGkJj24M, 5, 1);
  numBytes += cSlice_init(&cSlice_9x3G47eH, 4, 1);
  numBytes += cSlice_init(&cSlice_8Hcqm1VK, 3, 1);
  numBytes += cSlice_init(&cSlice_UqEJrUhE, 2, 1);
  numBytes += cSlice_init(&cSlice_jF2o9er8, 1, 1);
  numBytes += cSlice_init(&cSlice_3zqttV9R, 0, 1);
  numBytes += sVarf_init(&sVarf_JojMskYK, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_KcYPlb8f, 0.0f);
  numBytes += cBinop_init(&cBinop_ATDahEtA, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_PXr6wVtJ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_LI2LK6ey, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_MPzafuAU, 0.0f);
  numBytes += cBinop_init(&cBinop_AbTAU9Cw, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_XjCVMNLL, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_atBp9DsE, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_BVDF7U2x, 0.0f);
  numBytes += cBinop_init(&cBinop_Zlsxzvmv, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_wCRdP5Te, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_szn71jgb, 22050.0f);
  numBytes += cBinop_init(&cBinop_AFFuQDNr, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_CqUsNcvq, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_WT8mi0Q8, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_pWlVsMQN, 22050.0f);
  numBytes += cBinop_init(&cBinop_BcZbVNuN, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_yduYFTTK, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_BvCQmcPc, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_XNFvoPrV, 22050.0f);
  numBytes += cBinop_init(&cBinop_hSGIue6m, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_nhYo88d4, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_nS7ObhDA, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_PMdcW90m, 22050.0f);
  numBytes += cVar_init_f(&cVar_W2bcHkIx, 1.0f);
  numBytes += cBinop_init(&cBinop_fNVvyUJR, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_v60GGMXJ, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_NPli3Obq, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_A1Zebshg, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_X2P3sXzf, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_6HTGqsju, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_3wqLbyS2, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_a8JWRtjB, 0.0f);
  numBytes += cVar_init_f(&cVar_vecEllHP, 0.0f);
  numBytes += cVar_init_f(&cVar_AXGLidEf, 0.0f);
  numBytes += cVar_init_f(&cVar_DzwbvLx8, 0.0f);
  numBytes += cVar_init_f(&cVar_OQhx2cDg, 0.0f);
  numBytes += cVar_init_f(&cVar_Yvfq4X9x, 0.0f);
  numBytes += cSlice_init(&cSlice_XMFc5idn, 3, 1);
  numBytes += cSlice_init(&cSlice_4HA5GdHh, 2, 1);
  numBytes += cSlice_init(&cSlice_Fty59Dom, 1, 1);
  numBytes += cSlice_init(&cSlice_u8tg5rYC, 0, 1);
  numBytes += cPack_init(&cPack_03MT59SQ, 2, 0.0f, 50.0f);
  numBytes += cDelay_init(this, &cDelay_4qrN8tWp, 0.0f);
  numBytes += cDelay_init(this, &cDelay_EmM8z2zX, 0.0f);
  numBytes += hTable_init(&hTable_0cQsOJd1, 256);
  numBytes += cVar_init_f(&cVar_fN1ZdQmk, 0.0f);
  numBytes += cVar_init_s(&cVar_OPCsHc9c, "del-1001-delayD");
  numBytes += sVarf_init(&sVarf_mVIRZo52, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_KMNjFBtD, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_pq3SnxO2, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_VIB7pSNr, "del-1001-delayC");
  numBytes += sVarf_init(&sVarf_ZGxbknCf, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_lzsyeKO2, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_kVPV9ZSa, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_bb5t1w7A, 0.0f);
  numBytes += cDelay_init(this, &cDelay_agoTUWdU, 0.0f);
  numBytes += hTable_init(&hTable_29d75dGt, 256);
  numBytes += sVarf_init(&sVarf_7zXAKQYY, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_Pd62vqHs, 3.0f);
  numBytes += cBinop_init(&cBinop_GJu3ZHGT, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_vGD9WPZw, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_2wzl30oD, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_zy9PkJTR, 3.0f);
  numBytes += cBinop_init(&cBinop_betzn6Bb, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_5t5p2qV5, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_PREtbBZ1, 1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_LISRTAJf, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_WdhXvJMD, 0.0f);
  numBytes += cVar_init_f(&cVar_nzAqMVRm, 0.0f);
  numBytes += cVar_init_f(&cVar_MlLuKASg, 0.0f);
  numBytes += cPack_init(&cPack_VQy9MoXh, 2, 0.0f, 100.0f);
  numBytes += cPack_init(&cPack_z3ZuznuC, 2, 0.0f, 100.0f);
  numBytes += cVar_init_f(&cVar_SatsfflH, 0.0f);
  numBytes += cVar_init_f(&cVar_Z8bdTJjH, 0.0f);
  numBytes += cVar_init_f(&cVar_bswWN0Oa, 0.0f);
  numBytes += cBinop_init(&cBinop_VrPW5ndb, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_7l5nFc9m, 0.0f); // __pow
  numBytes += cIf_init(&cIf_mvqx3jpF, false);
  numBytes += cBinop_init(&cBinop_mqp7hV9w, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_6fW3edpK, 74.0f);
  numBytes += cVar_init_f(&cVar_SKF55w80, 3.0f);
  numBytes += cSlice_init(&cSlice_AgPmbfid, 1, -1);
  numBytes += cVar_init_f(&cVar_MhI4ySMw, 1.0f);
  numBytes += cSlice_init(&cSlice_SYrLI5CK, 1, -1);
  numBytes += cVar_init_f(&cVar_ZY9EnNCc, 70.0f);
  numBytes += cBinop_init(&cBinop_rSaj21kQ, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_4IsQFDtf, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_HFAaufrD, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_1jo1ienq, 3000.0f);
  numBytes += cBinop_init(&cBinop_tbz4sByX, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_lnspz86B, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_TRjOUDpb, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Wkcqn3bd, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_5IzQe5UZ, 400.0f);
  numBytes += cBinop_init(&cBinop_nExlotDT, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_gLgKfI0d, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_SCP7MKV5, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_atgkxsWa, 30.0f);
  numBytes += cBinop_init(&cBinop_L4xa0OP6, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_q4V2WQXb, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_ZaSducp6, false);
  numBytes += cVar_init_f(&cVar_A88XMt4t, 0.0f);
  numBytes += cVar_init_f(&cVar_aJG3cdk5, 0.0f);
  numBytes += cPack_init(&cPack_OGTfYUht, 3, 0.0f, 500.0f, 100.0f);
  numBytes += cDelay_init(this, &cDelay_UKCqRkUk, 0.0f);
  numBytes += cVar_init_f(&cVar_XmWoZFeq, 20.0f);
  numBytes += cBinop_init(&cBinop_8GCKPnaR, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_j6w9iN3z, 0.0f);
  numBytes += cSlice_init(&cSlice_LttVg3v3, 1, -1);
  numBytes += cSlice_init(&cSlice_ZXIk42A1, 1, -1);
  numBytes += cVar_init_f(&cVar_84QcgxKe, 0.0f);
  numBytes += cVar_init_f(&cVar_f0vhqut9, 20.0f);
  numBytes += cVar_init_f(&cVar_niRmQEm8, 0.0f);
  numBytes += cVar_init_f(&cVar_ZSzlSYY7, 0.0f);
  numBytes += cVar_init_f(&cVar_JqJ0lkkX, 0.0f);
  numBytes += cSlice_init(&cSlice_67bEC3kp, 1, 1);
  numBytes += cSlice_init(&cSlice_FkRYrc59, 0, 1);
  numBytes += cBinop_init(&cBinop_9RsFRg0J, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_SSHIxfMd, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_8iRzXtTe, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_cmZWY24L, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_vmOWr0NK, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_RS54qNJ5, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_wnOzDM2h, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_UbUnCaDo, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_KPywm9jg, 0.0f);
  numBytes += cVar_init_f(&cVar_h41KdUsN, 0.0f);
  numBytes += cVar_init_f(&cVar_y0MupXgE, 0.0f);
  numBytes += cVar_init_f(&cVar_xtYM98iV, 0.0f);
  numBytes += cVar_init_f(&cVar_cUEaprgS, 0.0f);
  numBytes += cVar_init_f(&cVar_00PELqc1, 0.0f);
  numBytes += sVarf_init(&sVarf_nJJ4ILHL, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_V4wR91BC, 8.0f);
  numBytes += cBinop_init(&cBinop_FUS7WJbU, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_5uvYOJM2, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_ADvCG4Qf, 0.0f);
  numBytes += cVar_init_f(&cVar_OBYhsDmG, 0.0f);
  numBytes += cBinop_init(&cBinop_n8ygCl8T, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_pEcz7Z9s, 0.0f); // __pow
  numBytes += cIf_init(&cIf_CvKOSfo1, false);
  numBytes += cBinop_init(&cBinop_IExDdY5H, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_s4rFDq9J, 82.0f);
  numBytes += cVar_init_f(&cVar_ZQSXxfYd, 21.0f);
  numBytes += cSlice_init(&cSlice_XdLLMEkd, 1, -1);
  numBytes += cVar_init_f(&cVar_T43VsInE, 1.0f);
  numBytes += cSlice_init(&cSlice_jeF8A55i, 1, -1);
  numBytes += cVar_init_f(&cVar_6DMDfZoY, 70.0f);
  numBytes += cBinop_init(&cBinop_pIorOmme, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_mKuLUo25, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_JWmyN2IH, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_zo689zNi, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_CZMo5qJr, 8.0f);
  numBytes += cBinop_init(&cBinop_3x67Rj2v, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_emBiY9Do, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_wndoKVBX, 0.0f);
  numBytes += cVar_init_f(&cVar_VOXlkJTO, 0.0f);
  numBytes += cBinop_init(&cBinop_SbIWz1kq, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_b3lVXixd, 0.0f); // __pow
  numBytes += cIf_init(&cIf_oIkSa7cN, false);
  numBytes += cBinop_init(&cBinop_YyU2geGZ, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_6Ex7VlqK, 82.0f);
  numBytes += cVar_init_f(&cVar_sIbB3e2O, 21.0f);
  numBytes += cSlice_init(&cSlice_sYhO0qG0, 1, -1);
  numBytes += cVar_init_f(&cVar_2aWZRzFk, 1.0f);
  numBytes += cSlice_init(&cSlice_jEBYZ3Bl, 1, -1);
  numBytes += cVar_init_f(&cVar_gbKTo76x, 70.0f);
  numBytes += cBinop_init(&cBinop_tW033KxR, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_yEAFfjlo, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_gSSjpTk6, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_0hLjw0dx, 10000.0f);
  numBytes += cBinop_init(&cBinop_OkAfvZfx, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_8Rog4paB, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_VDoi2do4, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_Uj84oJTF, 10000.0f);
  numBytes += cBinop_init(&cBinop_Rd1DYuEH, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_Vaaqnr6c, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_NTmqvcoM, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Ntw1D20l, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_KpApzz5A, 20.0f);
  numBytes += cBinop_init(&cBinop_tceichcy, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_whHqkSsm, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_6YJdXVHE, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_o8qfkPNy, 20.0f);
  numBytes += cBinop_init(&cBinop_5KodpnGH, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_ek8zFHfj, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_TOzzNEgb, 0.0f);
  numBytes += sVarf_init(&sVarf_q8ir5V4z, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Tu6Uws36, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_isQGAHSG, 0.0f);
  numBytes += cVar_init_f(&cVar_4pkYxBIe, 0.0f);
  numBytes += cVar_init_f(&cVar_8I6zgg6q, 0.0f);
  numBytes += cVar_init_f(&cVar_MAXOQGvU, 1.0f);
  numBytes += sVarf_init(&sVarf_FLd83p1r, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_uJm8NHPS, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_0wrv5SYK, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_JIfGATmv, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_XeVI1A3d, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_bchMExFE, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_CUloRpZr, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_U8Il5DjN, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_VFMAqSUw, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_R1b5dFhN, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_K8N9EI8Y, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_uXViedwA, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_iEr6X7DA, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_FIZwblvr, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_7UfqoknL, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_9iXyz8Ng, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_2XXKzlBH, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_3SdOvssF, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_X7rl3nEp, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_DVty0KjR, 0.5f); // __mul
  numBytes += sVarf_init(&sVarf_aQDFN7Pq, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_QSd6EwK0, 0.0f, 0.0f, false);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_Echomatica_1_3_1::~Heavy_Echomatica_1_3_1() {
  sEnv_free(&sEnv_9kN2aNIz);
  sEnv_free(&sEnv_IBsEIK8M);
  sEnv_free(&sEnv_ZlitHNSW);
  hTable_free(&hTable_ob8PQSvd);
  cPack_free(&cPack_L1TO5NaH);
  cPack_free(&cPack_A8pAIw1o);
  cPack_free(&cPack_Z7jEZ2ic);
  cPack_free(&cPack_BQyw2Al9);
  cPack_free(&cPack_LLZFrpAp);
  cPack_free(&cPack_omf4143H);
  cPack_free(&cPack_2GpLnE6v);
  cPack_free(&cPack_03MT59SQ);
  hTable_free(&hTable_0cQsOJd1);
  hTable_free(&hTable_29d75dGt);
  cPack_free(&cPack_VQy9MoXh);
  cPack_free(&cPack_z3ZuznuC);
  cPack_free(&cPack_OGTfYUht);
}

HvTable *Heavy_Echomatica_1_3_1::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0xC7C6279C: return &hTable_ob8PQSvd; // del-1001-delayA
    case 0x6F28B8EB: return &hTable_0cQsOJd1; // del-1001-delayD
    case 0xA74180A2: return &hTable_29d75dGt; // del-1001-delayC
    default: return nullptr;
  }
}

void Heavy_Echomatica_1_3_1::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0x22C9B907: { // Vari
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_2Ss8mJFl_sendMessage);
      break;
    }
    case 0xC6DDD6FE: { // 1208-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_hSiGj0MU_sendMessage);
      break;
    }
    case 0xCFEDDF7: { // 1208-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_jMVzRemz_sendMessage);
      break;
    }
    case 0x17325573: { // 1286-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_DHZDG0oc_sendMessage);
      break;
    }
    case 0xA97CDE08: { // 1286-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_tq5ydBB0_sendMessage);
      break;
    }
    case 0x92D5088: { // 1308-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1elZY9jV_sendMessage);
      break;
    }
    case 0x432A2140: { // 1308-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_q7jNVADQ_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_akonfRZg_sendMessage);
      break;
    }
    case 0xE68AB11B: { // chrs
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Ic7Dm8xS_sendMessage);
      break;
    }
    case 0xBA8CED4E: { // dry
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_uGaC6KtG_sendMessage);
      break;
    }
    case 0xEA9D7BDD: { // drymod
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9JKHKkrv_sendMessage);
      break;
    }
    case 0x63E722C0: { // echo
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_srHxPjXE_sendMessage);
      break;
    }
    case 0x31E76251: { // echomod
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_NYq8EYDb_sendMessage);
      break;
    }
    case 0x8FA433B0: { // f1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9wY3mRod_sendMessage);
      break;
    }
    case 0xEE0EB120: { // f2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_S7p8p0fc_sendMessage);
      break;
    }
    case 0x4FFCF19F: { // f3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_gtcuLlGY_sendMessage);
      break;
    }
    case 0x2AF9F5EB: { // f4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_g0nfVyzw_sendMessage);
      break;
    }
    case 0xC6F6EBB2: { // f5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_nXuDZfmM_sendMessage);
      break;
    }
    case 0x775D6E5E: { // f6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4Q8luzX6_sendMessage);
      break;
    }
    case 0xBB6123FD: { // fdbck_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_WXD6h4DA_sendMessage);
      break;
    }
    case 0xF1E7CD16: { // feedback
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_pWJWemrO_sendMessage);
      break;
    }
    case 0xC7AF3F72: { // h1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ws9nZjb4_sendMessage);
      break;
    }
    case 0x9BEBB079: { // h2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_j7xH127m_sendMessage);
      break;
    }
    case 0xAB1137FD: { // h3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_LjOZli2J_sendMessage);
      break;
    }
    case 0x2B4C6DE1: { // h4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_h5KKyTyj_sendMessage);
      break;
    }
    case 0x2541E77D: { // h5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_qBfISDJs_sendMessage);
      break;
    }
    case 0xE7F6D341: { // h6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_5KsyZEr0_sendMessage);
      break;
    }
    case 0x5667A4DA: { // head1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ygLAx2kO_sendMessage);
      break;
    }
    case 0xAD6B31A5: { // head2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_xbCO1D28_sendMessage);
      break;
    }
    case 0x8A2BD450: { // head3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_tGQS3CTo_sendMessage);
      break;
    }
    case 0xCF5C829A: { // head4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9alZcK3G_sendMessage);
      break;
    }
    case 0xEE70DFBC: { // head5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_STZfkAq1_sendMessage);
      break;
    }
    case 0x8E4B9939: { // head6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_VdsYO38r_sendMessage);
      break;
    }
    case 0x7E24361: { // hp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_QYjO6QMF_sendMessage);
      break;
    }
    case 0x674D12F6: { // hp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_LCRQdkpv_sendMessage);
      break;
    }
    case 0x6A20C3F5: { // hp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Tl9qennV_sendMessage);
      break;
    }
    case 0x123E8795: { // lp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_5KibeDKw_sendMessage);
      break;
    }
    case 0x4588BD1: { // lp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_umEBV3mO_sendMessage);
      break;
    }
    case 0xB7298D49: { // lp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ILuYKF79_sendMessage);
      break;
    }
    case 0x64BD0F15: { // mf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_KhDN39Qm_sendMessage);
      break;
    }
    case 0x5A12F82E: { // mg
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_7mS41bCk_sendMessage);
      break;
    }
    case 0x2C9C49A7: { // mq
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_abbnt8L2_sendMessage);
      break;
    }
    case 0xC8D93A6D: { // tapehead_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_18hnOfVV_sendMessage);
      break;
    }
    case 0xB25D05EB: { // varispeed
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_7Il19VW5_sendMessage);
      break;
    }
    case 0x8ADB5B6B: { // varispeed_enable
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Ny1hZf2f_sendMessage);
      break;
    }
    case 0x7BB47B7B: { // wnf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ELargh30_sendMessage);
      break;
    }
    default: return;
  }
}

int Heavy_Echomatica_1_3_1::getParameterInfo(int index, HvParameterInfo *info) {
  if (info != nullptr) {
    switch (index) {
      case 0: {
        info->name = "dry";
        info->hash = 0xBA8CED4E;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 1.0f;
        break;
      }
      case 1: {
        info->name = "drymod";
        info->hash = 0xEA9D7BDD;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.5f;
        info->maxVal = 2.0f;
        info->defaultVal = 1.0f;
        break;
      }
      case 2: {
        info->name = "echo";
        info->hash = 0x63E722C0;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 3: {
        info->name = "echomod";
        info->hash = 0x31E76251;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.0f;
        break;
      }
      case 4: {
        info->name = "fdbck_mode";
        info->hash = 0xBB6123FD;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 2.0f;
        info->defaultVal = 0.0f;
        break;
      }
      case 5: {
        info->name = "feedback";
        info->hash = 0xF1E7CD16;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 6: {
        info->name = "tapehead_mode";
        info->hash = 0xC8D93A6D;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 14.0f;
        info->defaultVal = 1.0f;
        break;
      }
      case 7: {
        info->name = "varispeed";
        info->hash = 0xB25D05EB;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 8: {
        info->name = "varispeed_enable";
        info->hash = 0x8ADB5B6B;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.0f;
        break;
      }
      default: {
        info->name = "invalid parameter index";
        info->hash = 0;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 0.0f;
        info->defaultVal = 0.0f;
        break;
      }
    }
  }
  return 9;
}



/*
 * Send Function Implementations
 */


void Heavy_Echomatica_1_3_1::cMsg_Te4il0hU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_n8mS9pqj_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_n8mS9pqj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_D3ZSowmO_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_bkYIl2Fk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FwHBhoWf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSystem_u2Gv3glY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_Nltf9hh1_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_QVZkhf4f, m);
}

void Heavy_Echomatica_1_3_1::cBinop_D3ZSowmO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_QAokdLUk, m);
}

void Heavy_Echomatica_1_3_1::cMsg_FwHBhoWf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_u2Gv3glY_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_Nltf9hh1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_QZsV0a0N, m);
}

void Heavy_Echomatica_1_3_1::cMsg_5XThlHSb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_5zlgAnRK_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_5zlgAnRK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_zRdGtoOY_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_R6AZ29So_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6BcWbiWe_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSystem_JlqYnS9n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_Qce2NMzk_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_gQWe44Uh, m);
}

void Heavy_Echomatica_1_3_1::cBinop_zRdGtoOY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ocDfyrU0, m);
}

void Heavy_Echomatica_1_3_1::cMsg_6BcWbiWe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_JlqYnS9n_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_Qce2NMzk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_StiGe7l0, m);
}

void Heavy_Echomatica_1_3_1::cMsg_EHJVVAtj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_9IsUMA3d_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_9IsUMA3d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_0cU0sRER_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_MVXONMyA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IHORllHB_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSystem_lMt5CSYg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_0bKxToJg_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_mR9j5y5q, m);
}

void Heavy_Echomatica_1_3_1::cBinop_0cU0sRER_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_HtVMfOEy, m);
}

void Heavy_Echomatica_1_3_1::cMsg_IHORllHB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_lMt5CSYg_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_0bKxToJg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_anPUzbUd, m);
}

void Heavy_Echomatica_1_3_1::cMsg_2ASkYaEy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_EhWt7cz2_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_EhWt7cz2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_2nq3IQ4s_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_ekfHhPXN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8rl9hOSa_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSystem_yAMfwd1t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_V5GZz9sy_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_9K7oGpFq, m);
}

void Heavy_Echomatica_1_3_1::cBinop_2nq3IQ4s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_gihkWbd7, m);
}

void Heavy_Echomatica_1_3_1::cMsg_8rl9hOSa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_yAMfwd1t_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_V5GZz9sy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_d35nWb3c, m);
}

void Heavy_Echomatica_1_3_1::cCast_yQxNFrFR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qhg3D9RG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_MYzHGBpo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Gm2ejI65_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_fFTMhoe1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vqSRMiud_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_j7E9hOj6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gUtjcgyE_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_ZzO51OVz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_h1qdfCRL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_BYY3TeuU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ayGKjHML_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_TKs9tnTV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BpzdPT6g_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_37IPCgSg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_RdruxIaX_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_Tz4z7gP7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_b2h8M9Wn_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_1l7lOQ8q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EW0xj7eu_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_j85LOpzx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XK20Zvv9_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_93kSEAIu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ZjjxXbOV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_63E9U2lG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_D1CQKZzL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_NRsW2Jce_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ICVPX3SF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_o96w1hiR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ybJXw6mR_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_kkCXrNhG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QrTjxoJg_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSwitchcase_xCrxdivK_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_feTdLCX1_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IRgci8Pu_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kF9SXZJX_sendMessage);
      break;
    }
    case 0x40400000: { // "3.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ytEBSueJ_sendMessage);
      break;
    }
    case 0x40800000: { // "4.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zDOrtqpp_sendMessage);
      break;
    }
    case 0x40A00000: { // "5.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4k4emgH0_sendMessage);
      break;
    }
    case 0x40C00000: { // "6.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vuH1B7Sm_sendMessage);
      break;
    }
    case 0x40E00000: { // "7.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vmaW8lhU_sendMessage);
      break;
    }
    case 0x41000000: { // "8.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SUii2oQx_sendMessage);
      break;
    }
    case 0x41100000: { // "9.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RMDn7H6w_sendMessage);
      break;
    }
    case 0x41200000: { // "10.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Np3UD10Q_sendMessage);
      break;
    }
    case 0x41300000: { // "11.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AQpUJ4wn_sendMessage);
      break;
    }
    case 0x41400000: { // "12.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YmkNtvV7_sendMessage);
      break;
    }
    case 0x41500000: { // "13.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CfTjNOoD_sendMessage);
      break;
    }
    case 0x41600000: { // "14.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YxOez8Lr_sendMessage);
      break;
    }
    case 0x41700000: { // "15.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zRAOfZDw_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica_1_3_1::cCast_feTdLCX1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_j85LOpzx_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_IRgci8Pu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NRsW2Jce_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_kF9SXZJX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Tz4z7gP7_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_ytEBSueJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1l7lOQ8q_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_zDOrtqpp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_63E9U2lG_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_4k4emgH0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_93kSEAIu_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_vuH1B7Sm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZzO51OVz_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_vmaW8lhU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_o96w1hiR_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_SUii2oQx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kkCXrNhG_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_RMDn7H6w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BYY3TeuU_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_Np3UD10Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MYzHGBpo_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_AQpUJ4wn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fFTMhoe1_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_YmkNtvV7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_j7E9hOj6_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_CfTjNOoD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yQxNFrFR_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_YxOez8Lr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_37IPCgSg_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_zRAOfZDw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TKs9tnTV_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_b2h8M9Wn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(28);
  msg_init(m, 28, msg_getTimestamp(n));
  msg_setFloat(m, 0, 122.0f);
  msg_setFloat(m, 1, 603.0f);
  msg_setFloat(m, 2, 428.0f);
  msg_setFloat(m, 3, 360.0f);
  msg_setFloat(m, 4, 280.0f);
  msg_setFloat(m, 5, 122.0f);
  msg_setFloat(m, 6, 0.0f);
  msg_setFloat(m, 7, 0.63f);
  msg_setFloat(m, 8, 0.79f);
  msg_setFloat(m, 9, 0.31f);
  msg_setFloat(m, 10, 0.0f);
  msg_setFloat(m, 11, 1.0f);
  msg_setFloat(m, 12, 0.0f);
  msg_setFloat(m, 13, 1.0f);
  msg_setFloat(m, 14, 0.0f);
  msg_setFloat(m, 15, 0.0f);
  msg_setFloat(m, 16, 0.0f);
  msg_setFloat(m, 17, 0.0f);
  msg_setFloat(m, 18, 0.0f);
  msg_setFloat(m, 19, 70.0f);
  msg_setFloat(m, 20, 200.0f);
  msg_setFloat(m, 21, 200.0f);
  msg_setFloat(m, 22, 1000.0f);
  msg_setFloat(m, 23, 4300.0f);
  msg_setFloat(m, 24, 6000.0f);
  msg_setFloat(m, 25, 2.0f);
  msg_setFloat(m, 26, 916.0f);
  msg_setFloat(m, 27, 20.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fv87gkcU, 0, m, &cSlice_Fv87gkcU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pAhZqdIV, 0, m, &cSlice_pAhZqdIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nytE1cDf, 0, m, &cSlice_nytE1cDf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PFGUAmrw, 0, m, &cSlice_PFGUAmrw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EzfsN4PO, 0, m, &cSlice_EzfsN4PO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f6LABaw7, 0, m, &cSlice_f6LABaw7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qJwtdsNc, 0, m, &cSlice_qJwtdsNc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6Zn9BSpa, 0, m, &cSlice_6Zn9BSpa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_j9mmBTBo, 0, m, &cSlice_j9mmBTBo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4g7kzxKk, 0, m, &cSlice_4g7kzxKk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HeDQiD7X, 0, m, &cSlice_HeDQiD7X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ELCcLq6J, 0, m, &cSlice_ELCcLq6J_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0g51Nvdp, 0, m, &cSlice_0g51Nvdp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4DguF9Je, 0, m, &cSlice_4DguF9Je_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ebwWZuer, 0, m, &cSlice_ebwWZuer_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9LyXNsSP, 0, m, &cSlice_9LyXNsSP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ztks9yhy, 0, m, &cSlice_ztks9yhy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJH3x7Uy, 0, m, &cSlice_rJH3x7Uy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0N5vk8Fb, 0, m, &cSlice_0N5vk8Fb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DC2FBDeH, 0, m, &cSlice_DC2FBDeH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2yzmz43p, 0, m, &cSlice_2yzmz43p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0uQ5P0TF, 0, m, &cSlice_0uQ5P0TF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGkJj24M, 0, m, &cSlice_zGkJj24M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9x3G47eH, 0, m, &cSlice_9x3G47eH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8Hcqm1VK, 0, m, &cSlice_8Hcqm1VK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UqEJrUhE, 0, m, &cSlice_UqEJrUhE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jF2o9er8, 0, m, &cSlice_jF2o9er8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3zqttV9R, 0, m, &cSlice_3zqttV9R_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_ICVPX3SF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(28);
  msg_init(m, 28, msg_getTimestamp(n));
  msg_setFloat(m, 0, 122.0f);
  msg_setFloat(m, 1, 603.0f);
  msg_setFloat(m, 2, 428.0f);
  msg_setFloat(m, 3, 360.0f);
  msg_setFloat(m, 4, 280.0f);
  msg_setFloat(m, 5, 122.0f);
  msg_setFloat(m, 6, 0.0f);
  msg_setFloat(m, 7, 0.63f);
  msg_setFloat(m, 8, 0.79f);
  msg_setFloat(m, 9, 0.0f);
  msg_setFloat(m, 10, 0.0f);
  msg_setFloat(m, 11, 1.0f);
  msg_setFloat(m, 12, 0.0f);
  msg_setFloat(m, 13, 1.0f);
  msg_setFloat(m, 14, 0.0f);
  msg_setFloat(m, 15, 0.0f);
  msg_setFloat(m, 16, 0.0f);
  msg_setFloat(m, 17, 0.0f);
  msg_setFloat(m, 18, 0.0f);
  msg_setFloat(m, 19, 70.0f);
  msg_setFloat(m, 20, 200.0f);
  msg_setFloat(m, 21, 200.0f);
  msg_setFloat(m, 22, 1000.0f);
  msg_setFloat(m, 23, 4300.0f);
  msg_setFloat(m, 24, 6000.0f);
  msg_setFloat(m, 25, 2.0f);
  msg_setFloat(m, 26, 916.0f);
  msg_setFloat(m, 27, 20.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fv87gkcU, 0, m, &cSlice_Fv87gkcU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pAhZqdIV, 0, m, &cSlice_pAhZqdIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nytE1cDf, 0, m, &cSlice_nytE1cDf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PFGUAmrw, 0, m, &cSlice_PFGUAmrw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EzfsN4PO, 0, m, &cSlice_EzfsN4PO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f6LABaw7, 0, m, &cSlice_f6LABaw7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qJwtdsNc, 0, m, &cSlice_qJwtdsNc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6Zn9BSpa, 0, m, &cSlice_6Zn9BSpa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_j9mmBTBo, 0, m, &cSlice_j9mmBTBo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4g7kzxKk, 0, m, &cSlice_4g7kzxKk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HeDQiD7X, 0, m, &cSlice_HeDQiD7X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ELCcLq6J, 0, m, &cSlice_ELCcLq6J_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0g51Nvdp, 0, m, &cSlice_0g51Nvdp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4DguF9Je, 0, m, &cSlice_4DguF9Je_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ebwWZuer, 0, m, &cSlice_ebwWZuer_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9LyXNsSP, 0, m, &cSlice_9LyXNsSP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ztks9yhy, 0, m, &cSlice_ztks9yhy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJH3x7Uy, 0, m, &cSlice_rJH3x7Uy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0N5vk8Fb, 0, m, &cSlice_0N5vk8Fb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DC2FBDeH, 0, m, &cSlice_DC2FBDeH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2yzmz43p, 0, m, &cSlice_2yzmz43p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0uQ5P0TF, 0, m, &cSlice_0uQ5P0TF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGkJj24M, 0, m, &cSlice_zGkJj24M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9x3G47eH, 0, m, &cSlice_9x3G47eH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8Hcqm1VK, 0, m, &cSlice_8Hcqm1VK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UqEJrUhE, 0, m, &cSlice_UqEJrUhE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jF2o9er8, 0, m, &cSlice_jF2o9er8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3zqttV9R, 0, m, &cSlice_3zqttV9R_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_XK20Zvv9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(28);
  msg_init(m, 28, msg_getTimestamp(n));
  msg_setFloat(m, 0, 122.0f);
  msg_setFloat(m, 1, 603.0f);
  msg_setFloat(m, 2, 428.0f);
  msg_setFloat(m, 3, 360.0f);
  msg_setFloat(m, 4, 280.0f);
  msg_setFloat(m, 5, 122.0f);
  msg_setFloat(m, 6, 0.0f);
  msg_setFloat(m, 7, 0.63f);
  msg_setFloat(m, 8, 0.79f);
  msg_setFloat(m, 9, 0.79f);
  msg_setFloat(m, 10, 1.0f);
  msg_setFloat(m, 11, 1.0f);
  msg_setFloat(m, 12, 0.0f);
  msg_setFloat(m, 13, 0.0f);
  msg_setFloat(m, 14, 1.0f);
  msg_setFloat(m, 15, 0.0f);
  msg_setFloat(m, 16, 0.0f);
  msg_setFloat(m, 17, 0.0f);
  msg_setFloat(m, 18, 0.0f);
  msg_setFloat(m, 19, 70.0f);
  msg_setFloat(m, 20, 200.0f);
  msg_setFloat(m, 21, 200.0f);
  msg_setFloat(m, 22, 1000.0f);
  msg_setFloat(m, 23, 4300.0f);
  msg_setFloat(m, 24, 6000.0f);
  msg_setFloat(m, 25, 2.0f);
  msg_setFloat(m, 26, 916.0f);
  msg_setFloat(m, 27, 20.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fv87gkcU, 0, m, &cSlice_Fv87gkcU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pAhZqdIV, 0, m, &cSlice_pAhZqdIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nytE1cDf, 0, m, &cSlice_nytE1cDf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PFGUAmrw, 0, m, &cSlice_PFGUAmrw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EzfsN4PO, 0, m, &cSlice_EzfsN4PO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f6LABaw7, 0, m, &cSlice_f6LABaw7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qJwtdsNc, 0, m, &cSlice_qJwtdsNc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6Zn9BSpa, 0, m, &cSlice_6Zn9BSpa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_j9mmBTBo, 0, m, &cSlice_j9mmBTBo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4g7kzxKk, 0, m, &cSlice_4g7kzxKk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HeDQiD7X, 0, m, &cSlice_HeDQiD7X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ELCcLq6J, 0, m, &cSlice_ELCcLq6J_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0g51Nvdp, 0, m, &cSlice_0g51Nvdp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4DguF9Je, 0, m, &cSlice_4DguF9Je_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ebwWZuer, 0, m, &cSlice_ebwWZuer_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9LyXNsSP, 0, m, &cSlice_9LyXNsSP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ztks9yhy, 0, m, &cSlice_ztks9yhy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJH3x7Uy, 0, m, &cSlice_rJH3x7Uy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0N5vk8Fb, 0, m, &cSlice_0N5vk8Fb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DC2FBDeH, 0, m, &cSlice_DC2FBDeH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2yzmz43p, 0, m, &cSlice_2yzmz43p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0uQ5P0TF, 0, m, &cSlice_0uQ5P0TF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGkJj24M, 0, m, &cSlice_zGkJj24M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9x3G47eH, 0, m, &cSlice_9x3G47eH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8Hcqm1VK, 0, m, &cSlice_8Hcqm1VK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UqEJrUhE, 0, m, &cSlice_UqEJrUhE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jF2o9er8, 0, m, &cSlice_jF2o9er8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3zqttV9R, 0, m, &cSlice_3zqttV9R_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_EW0xj7eu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(28);
  msg_init(m, 28, msg_getTimestamp(n));
  msg_setFloat(m, 0, 122.0f);
  msg_setFloat(m, 1, 603.0f);
  msg_setFloat(m, 2, 428.0f);
  msg_setFloat(m, 3, 360.0f);
  msg_setFloat(m, 4, 280.0f);
  msg_setFloat(m, 5, 122.0f);
  msg_setFloat(m, 6, 0.0f);
  msg_setFloat(m, 7, 0.63f);
  msg_setFloat(m, 8, 0.0f);
  msg_setFloat(m, 9, 0.79f);
  msg_setFloat(m, 10, 0.31f);
  msg_setFloat(m, 11, 1.0f);
  msg_setFloat(m, 12, 0.0f);
  msg_setFloat(m, 13, 0.0f);
  msg_setFloat(m, 14, 0.0f);
  msg_setFloat(m, 15, 0.0f);
  msg_setFloat(m, 16, 1.0f);
  msg_setFloat(m, 17, 0.0f);
  msg_setFloat(m, 18, 0.0f);
  msg_setFloat(m, 19, 70.0f);
  msg_setFloat(m, 20, 200.0f);
  msg_setFloat(m, 21, 200.0f);
  msg_setFloat(m, 22, 1000.0f);
  msg_setFloat(m, 23, 4300.0f);
  msg_setFloat(m, 24, 6000.0f);
  msg_setFloat(m, 25, 2.0f);
  msg_setFloat(m, 26, 916.0f);
  msg_setFloat(m, 27, 20.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fv87gkcU, 0, m, &cSlice_Fv87gkcU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pAhZqdIV, 0, m, &cSlice_pAhZqdIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nytE1cDf, 0, m, &cSlice_nytE1cDf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PFGUAmrw, 0, m, &cSlice_PFGUAmrw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EzfsN4PO, 0, m, &cSlice_EzfsN4PO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f6LABaw7, 0, m, &cSlice_f6LABaw7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qJwtdsNc, 0, m, &cSlice_qJwtdsNc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6Zn9BSpa, 0, m, &cSlice_6Zn9BSpa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_j9mmBTBo, 0, m, &cSlice_j9mmBTBo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4g7kzxKk, 0, m, &cSlice_4g7kzxKk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HeDQiD7X, 0, m, &cSlice_HeDQiD7X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ELCcLq6J, 0, m, &cSlice_ELCcLq6J_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0g51Nvdp, 0, m, &cSlice_0g51Nvdp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4DguF9Je, 0, m, &cSlice_4DguF9Je_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ebwWZuer, 0, m, &cSlice_ebwWZuer_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9LyXNsSP, 0, m, &cSlice_9LyXNsSP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ztks9yhy, 0, m, &cSlice_ztks9yhy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJH3x7Uy, 0, m, &cSlice_rJH3x7Uy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0N5vk8Fb, 0, m, &cSlice_0N5vk8Fb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DC2FBDeH, 0, m, &cSlice_DC2FBDeH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2yzmz43p, 0, m, &cSlice_2yzmz43p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0uQ5P0TF, 0, m, &cSlice_0uQ5P0TF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGkJj24M, 0, m, &cSlice_zGkJj24M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9x3G47eH, 0, m, &cSlice_9x3G47eH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8Hcqm1VK, 0, m, &cSlice_8Hcqm1VK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UqEJrUhE, 0, m, &cSlice_UqEJrUhE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jF2o9er8, 0, m, &cSlice_jF2o9er8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3zqttV9R, 0, m, &cSlice_3zqttV9R_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_D1CQKZzL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(28);
  msg_init(m, 28, msg_getTimestamp(n));
  msg_setFloat(m, 0, 122.0f);
  msg_setFloat(m, 1, 603.0f);
  msg_setFloat(m, 2, 428.0f);
  msg_setFloat(m, 3, 360.0f);
  msg_setFloat(m, 4, 280.0f);
  msg_setFloat(m, 5, 122.0f);
  msg_setFloat(m, 6, 0.0f);
  msg_setFloat(m, 7, 1.0f);
  msg_setFloat(m, 8, 0.0f);
  msg_setFloat(m, 9, 0.0f);
  msg_setFloat(m, 10, 0.0f);
  msg_setFloat(m, 11, 0.0f);
  msg_setFloat(m, 12, 0.0f);
  msg_setFloat(m, 13, 0.0f);
  msg_setFloat(m, 14, 0.0f);
  msg_setFloat(m, 15, 1.0f);
  msg_setFloat(m, 16, 0.0f);
  msg_setFloat(m, 17, 0.0f);
  msg_setFloat(m, 18, 0.0f);
  msg_setFloat(m, 19, 70.0f);
  msg_setFloat(m, 20, 200.0f);
  msg_setFloat(m, 21, 200.0f);
  msg_setFloat(m, 22, 1000.0f);
  msg_setFloat(m, 23, 4300.0f);
  msg_setFloat(m, 24, 6000.0f);
  msg_setFloat(m, 25, 2.0f);
  msg_setFloat(m, 26, 916.0f);
  msg_setFloat(m, 27, 20.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fv87gkcU, 0, m, &cSlice_Fv87gkcU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pAhZqdIV, 0, m, &cSlice_pAhZqdIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nytE1cDf, 0, m, &cSlice_nytE1cDf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PFGUAmrw, 0, m, &cSlice_PFGUAmrw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EzfsN4PO, 0, m, &cSlice_EzfsN4PO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f6LABaw7, 0, m, &cSlice_f6LABaw7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qJwtdsNc, 0, m, &cSlice_qJwtdsNc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6Zn9BSpa, 0, m, &cSlice_6Zn9BSpa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_j9mmBTBo, 0, m, &cSlice_j9mmBTBo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4g7kzxKk, 0, m, &cSlice_4g7kzxKk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HeDQiD7X, 0, m, &cSlice_HeDQiD7X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ELCcLq6J, 0, m, &cSlice_ELCcLq6J_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0g51Nvdp, 0, m, &cSlice_0g51Nvdp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4DguF9Je, 0, m, &cSlice_4DguF9Je_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ebwWZuer, 0, m, &cSlice_ebwWZuer_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9LyXNsSP, 0, m, &cSlice_9LyXNsSP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ztks9yhy, 0, m, &cSlice_ztks9yhy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJH3x7Uy, 0, m, &cSlice_rJH3x7Uy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0N5vk8Fb, 0, m, &cSlice_0N5vk8Fb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DC2FBDeH, 0, m, &cSlice_DC2FBDeH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2yzmz43p, 0, m, &cSlice_2yzmz43p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0uQ5P0TF, 0, m, &cSlice_0uQ5P0TF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGkJj24M, 0, m, &cSlice_zGkJj24M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9x3G47eH, 0, m, &cSlice_9x3G47eH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8Hcqm1VK, 0, m, &cSlice_8Hcqm1VK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UqEJrUhE, 0, m, &cSlice_UqEJrUhE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jF2o9er8, 0, m, &cSlice_jF2o9er8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3zqttV9R, 0, m, &cSlice_3zqttV9R_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_ZjjxXbOV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(28);
  msg_init(m, 28, msg_getTimestamp(n));
  msg_setFloat(m, 0, 122.0f);
  msg_setFloat(m, 1, 603.0f);
  msg_setFloat(m, 2, 428.0f);
  msg_setFloat(m, 3, 360.0f);
  msg_setFloat(m, 4, 280.0f);
  msg_setFloat(m, 5, 122.0f);
  msg_setFloat(m, 6, 0.0f);
  msg_setFloat(m, 7, 0.63f);
  msg_setFloat(m, 8, 0.79f);
  msg_setFloat(m, 9, 0.79f);
  msg_setFloat(m, 10, 1.0f);
  msg_setFloat(m, 11, 1.0f);
  msg_setFloat(m, 12, 0.0f);
  msg_setFloat(m, 13, 1.0f);
  msg_setFloat(m, 14, 0.0f);
  msg_setFloat(m, 15, 0.0f);
  msg_setFloat(m, 16, 0.0f);
  msg_setFloat(m, 17, 0.0f);
  msg_setFloat(m, 18, 0.0f);
  msg_setFloat(m, 19, 70.0f);
  msg_setFloat(m, 20, 200.0f);
  msg_setFloat(m, 21, 200.0f);
  msg_setFloat(m, 22, 1000.0f);
  msg_setFloat(m, 23, 4300.0f);
  msg_setFloat(m, 24, 6000.0f);
  msg_setFloat(m, 25, 2.0f);
  msg_setFloat(m, 26, 916.0f);
  msg_setFloat(m, 27, 20.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fv87gkcU, 0, m, &cSlice_Fv87gkcU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pAhZqdIV, 0, m, &cSlice_pAhZqdIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nytE1cDf, 0, m, &cSlice_nytE1cDf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PFGUAmrw, 0, m, &cSlice_PFGUAmrw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EzfsN4PO, 0, m, &cSlice_EzfsN4PO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f6LABaw7, 0, m, &cSlice_f6LABaw7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qJwtdsNc, 0, m, &cSlice_qJwtdsNc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6Zn9BSpa, 0, m, &cSlice_6Zn9BSpa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_j9mmBTBo, 0, m, &cSlice_j9mmBTBo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4g7kzxKk, 0, m, &cSlice_4g7kzxKk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HeDQiD7X, 0, m, &cSlice_HeDQiD7X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ELCcLq6J, 0, m, &cSlice_ELCcLq6J_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0g51Nvdp, 0, m, &cSlice_0g51Nvdp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4DguF9Je, 0, m, &cSlice_4DguF9Je_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ebwWZuer, 0, m, &cSlice_ebwWZuer_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9LyXNsSP, 0, m, &cSlice_9LyXNsSP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ztks9yhy, 0, m, &cSlice_ztks9yhy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJH3x7Uy, 0, m, &cSlice_rJH3x7Uy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0N5vk8Fb, 0, m, &cSlice_0N5vk8Fb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DC2FBDeH, 0, m, &cSlice_DC2FBDeH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2yzmz43p, 0, m, &cSlice_2yzmz43p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0uQ5P0TF, 0, m, &cSlice_0uQ5P0TF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGkJj24M, 0, m, &cSlice_zGkJj24M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9x3G47eH, 0, m, &cSlice_9x3G47eH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8Hcqm1VK, 0, m, &cSlice_8Hcqm1VK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UqEJrUhE, 0, m, &cSlice_UqEJrUhE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jF2o9er8, 0, m, &cSlice_jF2o9er8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3zqttV9R, 0, m, &cSlice_3zqttV9R_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_h1qdfCRL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(28);
  msg_init(m, 28, msg_getTimestamp(n));
  msg_setFloat(m, 0, 355.0f);
  msg_setFloat(m, 1, 355.0f);
  msg_setFloat(m, 2, 355.0f);
  msg_setFloat(m, 3, 280.0f);
  msg_setFloat(m, 4, 200.0f);
  msg_setFloat(m, 5, 100.0f);
  msg_setFloat(m, 6, 0.0f);
  msg_setFloat(m, 7, 0.0f);
  msg_setFloat(m, 8, 1.0f);
  msg_setFloat(m, 9, 0.5f);
  msg_setFloat(m, 10, 0.7f);
  msg_setFloat(m, 11, 0.7f);
  msg_setFloat(m, 12, 0.0f);
  msg_setFloat(m, 13, 0.0f);
  msg_setFloat(m, 14, 1.0f);
  msg_setFloat(m, 15, 0.0f);
  msg_setFloat(m, 16, 0.0f);
  msg_setFloat(m, 17, 0.0f);
  msg_setFloat(m, 18, 0.0f);
  msg_setFloat(m, 19, 2.0f);
  msg_setFloat(m, 20, 220.0f);
  msg_setFloat(m, 21, 220.0f);
  msg_setFloat(m, 22, 1100.0f);
  msg_setFloat(m, 23, 4300.0f);
  msg_setFloat(m, 24, 6000.0f);
  msg_setFloat(m, 25, 2.4f);
  msg_setFloat(m, 26, 1022.0f);
  msg_setFloat(m, 27, 23.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fv87gkcU, 0, m, &cSlice_Fv87gkcU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pAhZqdIV, 0, m, &cSlice_pAhZqdIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nytE1cDf, 0, m, &cSlice_nytE1cDf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PFGUAmrw, 0, m, &cSlice_PFGUAmrw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EzfsN4PO, 0, m, &cSlice_EzfsN4PO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f6LABaw7, 0, m, &cSlice_f6LABaw7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qJwtdsNc, 0, m, &cSlice_qJwtdsNc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6Zn9BSpa, 0, m, &cSlice_6Zn9BSpa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_j9mmBTBo, 0, m, &cSlice_j9mmBTBo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4g7kzxKk, 0, m, &cSlice_4g7kzxKk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HeDQiD7X, 0, m, &cSlice_HeDQiD7X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ELCcLq6J, 0, m, &cSlice_ELCcLq6J_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0g51Nvdp, 0, m, &cSlice_0g51Nvdp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4DguF9Je, 0, m, &cSlice_4DguF9Je_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ebwWZuer, 0, m, &cSlice_ebwWZuer_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9LyXNsSP, 0, m, &cSlice_9LyXNsSP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ztks9yhy, 0, m, &cSlice_ztks9yhy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJH3x7Uy, 0, m, &cSlice_rJH3x7Uy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0N5vk8Fb, 0, m, &cSlice_0N5vk8Fb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DC2FBDeH, 0, m, &cSlice_DC2FBDeH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2yzmz43p, 0, m, &cSlice_2yzmz43p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0uQ5P0TF, 0, m, &cSlice_0uQ5P0TF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGkJj24M, 0, m, &cSlice_zGkJj24M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9x3G47eH, 0, m, &cSlice_9x3G47eH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8Hcqm1VK, 0, m, &cSlice_8Hcqm1VK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UqEJrUhE, 0, m, &cSlice_UqEJrUhE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jF2o9er8, 0, m, &cSlice_jF2o9er8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3zqttV9R, 0, m, &cSlice_3zqttV9R_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_ybJXw6mR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(28);
  msg_init(m, 28, msg_getTimestamp(n));
  msg_setFloat(m, 0, 355.0f);
  msg_setFloat(m, 1, 355.0f);
  msg_setFloat(m, 2, 355.0f);
  msg_setFloat(m, 3, 280.0f);
  msg_setFloat(m, 4, 200.0f);
  msg_setFloat(m, 5, 100.0f);
  msg_setFloat(m, 6, 0.0f);
  msg_setFloat(m, 7, 0.0f);
  msg_setFloat(m, 8, 1.0f);
  msg_setFloat(m, 9, 0.5f);
  msg_setFloat(m, 10, 0.7f);
  msg_setFloat(m, 11, 0.0f);
  msg_setFloat(m, 12, 0.0f);
  msg_setFloat(m, 13, 0.0f);
  msg_setFloat(m, 14, 1.0f);
  msg_setFloat(m, 15, 0.0f);
  msg_setFloat(m, 16, 0.0f);
  msg_setFloat(m, 17, 0.0f);
  msg_setFloat(m, 18, 0.0f);
  msg_setFloat(m, 19, 2.0f);
  msg_setFloat(m, 20, 220.0f);
  msg_setFloat(m, 21, 220.0f);
  msg_setFloat(m, 22, 1100.0f);
  msg_setFloat(m, 23, 4300.0f);
  msg_setFloat(m, 24, 6000.0f);
  msg_setFloat(m, 25, 2.4f);
  msg_setFloat(m, 26, 1022.0f);
  msg_setFloat(m, 27, 23.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fv87gkcU, 0, m, &cSlice_Fv87gkcU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pAhZqdIV, 0, m, &cSlice_pAhZqdIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nytE1cDf, 0, m, &cSlice_nytE1cDf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PFGUAmrw, 0, m, &cSlice_PFGUAmrw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EzfsN4PO, 0, m, &cSlice_EzfsN4PO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f6LABaw7, 0, m, &cSlice_f6LABaw7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qJwtdsNc, 0, m, &cSlice_qJwtdsNc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6Zn9BSpa, 0, m, &cSlice_6Zn9BSpa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_j9mmBTBo, 0, m, &cSlice_j9mmBTBo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4g7kzxKk, 0, m, &cSlice_4g7kzxKk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HeDQiD7X, 0, m, &cSlice_HeDQiD7X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ELCcLq6J, 0, m, &cSlice_ELCcLq6J_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0g51Nvdp, 0, m, &cSlice_0g51Nvdp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4DguF9Je, 0, m, &cSlice_4DguF9Je_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ebwWZuer, 0, m, &cSlice_ebwWZuer_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9LyXNsSP, 0, m, &cSlice_9LyXNsSP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ztks9yhy, 0, m, &cSlice_ztks9yhy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJH3x7Uy, 0, m, &cSlice_rJH3x7Uy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0N5vk8Fb, 0, m, &cSlice_0N5vk8Fb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DC2FBDeH, 0, m, &cSlice_DC2FBDeH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2yzmz43p, 0, m, &cSlice_2yzmz43p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0uQ5P0TF, 0, m, &cSlice_0uQ5P0TF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGkJj24M, 0, m, &cSlice_zGkJj24M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9x3G47eH, 0, m, &cSlice_9x3G47eH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8Hcqm1VK, 0, m, &cSlice_8Hcqm1VK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UqEJrUhE, 0, m, &cSlice_UqEJrUhE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jF2o9er8, 0, m, &cSlice_jF2o9er8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3zqttV9R, 0, m, &cSlice_3zqttV9R_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_QrTjxoJg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(28);
  msg_init(m, 28, msg_getTimestamp(n));
  msg_setFloat(m, 0, 355.0f);
  msg_setFloat(m, 1, 355.0f);
  msg_setFloat(m, 2, 355.0f);
  msg_setFloat(m, 3, 280.0f);
  msg_setFloat(m, 4, 200.0f);
  msg_setFloat(m, 5, 100.0f);
  msg_setFloat(m, 6, 0.0f);
  msg_setFloat(m, 7, 0.0f);
  msg_setFloat(m, 8, 1.0f);
  msg_setFloat(m, 9, 0.5f);
  msg_setFloat(m, 10, 0.0f);
  msg_setFloat(m, 11, 0.0f);
  msg_setFloat(m, 12, 0.0f);
  msg_setFloat(m, 13, 0.0f);
  msg_setFloat(m, 14, 1.0f);
  msg_setFloat(m, 15, 0.0f);
  msg_setFloat(m, 16, 0.0f);
  msg_setFloat(m, 17, 0.0f);
  msg_setFloat(m, 18, 0.0f);
  msg_setFloat(m, 19, 2.0f);
  msg_setFloat(m, 20, 220.0f);
  msg_setFloat(m, 21, 220.0f);
  msg_setFloat(m, 22, 1100.0f);
  msg_setFloat(m, 23, 4300.0f);
  msg_setFloat(m, 24, 6000.0f);
  msg_setFloat(m, 25, 2.4f);
  msg_setFloat(m, 26, 1022.0f);
  msg_setFloat(m, 27, 23.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fv87gkcU, 0, m, &cSlice_Fv87gkcU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pAhZqdIV, 0, m, &cSlice_pAhZqdIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nytE1cDf, 0, m, &cSlice_nytE1cDf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PFGUAmrw, 0, m, &cSlice_PFGUAmrw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EzfsN4PO, 0, m, &cSlice_EzfsN4PO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f6LABaw7, 0, m, &cSlice_f6LABaw7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qJwtdsNc, 0, m, &cSlice_qJwtdsNc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6Zn9BSpa, 0, m, &cSlice_6Zn9BSpa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_j9mmBTBo, 0, m, &cSlice_j9mmBTBo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4g7kzxKk, 0, m, &cSlice_4g7kzxKk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HeDQiD7X, 0, m, &cSlice_HeDQiD7X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ELCcLq6J, 0, m, &cSlice_ELCcLq6J_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0g51Nvdp, 0, m, &cSlice_0g51Nvdp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4DguF9Je, 0, m, &cSlice_4DguF9Je_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ebwWZuer, 0, m, &cSlice_ebwWZuer_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9LyXNsSP, 0, m, &cSlice_9LyXNsSP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ztks9yhy, 0, m, &cSlice_ztks9yhy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJH3x7Uy, 0, m, &cSlice_rJH3x7Uy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0N5vk8Fb, 0, m, &cSlice_0N5vk8Fb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DC2FBDeH, 0, m, &cSlice_DC2FBDeH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2yzmz43p, 0, m, &cSlice_2yzmz43p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0uQ5P0TF, 0, m, &cSlice_0uQ5P0TF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGkJj24M, 0, m, &cSlice_zGkJj24M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9x3G47eH, 0, m, &cSlice_9x3G47eH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8Hcqm1VK, 0, m, &cSlice_8Hcqm1VK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UqEJrUhE, 0, m, &cSlice_UqEJrUhE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jF2o9er8, 0, m, &cSlice_jF2o9er8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3zqttV9R, 0, m, &cSlice_3zqttV9R_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_ayGKjHML_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(28);
  msg_init(m, 28, msg_getTimestamp(n));
  msg_setFloat(m, 0, 595.0f);
  msg_setFloat(m, 1, 510.0f);
  msg_setFloat(m, 2, 424.0f);
  msg_setFloat(m, 3, 330.0f);
  msg_setFloat(m, 4, 280.0f);
  msg_setFloat(m, 5, 120.0f);
  msg_setFloat(m, 6, 0.63f);
  msg_setFloat(m, 7, 0.63f);
  msg_setFloat(m, 8, 0.79f);
  msg_setFloat(m, 9, 0.79f);
  msg_setFloat(m, 10, 1.0f);
  msg_setFloat(m, 11, 1.0f);
  msg_setFloat(m, 12, 0.4f);
  msg_setFloat(m, 13, 0.18f);
  msg_setFloat(m, 14, 0.12f);
  msg_setFloat(m, 15, 0.14f);
  msg_setFloat(m, 16, 0.11f);
  msg_setFloat(m, 17, 0.11f);
  msg_setFloat(m, 18, 0.0f);
  msg_setFloat(m, 19, 70.0f);
  msg_setFloat(m, 20, 200.0f);
  msg_setFloat(m, 21, 200.0f);
  msg_setFloat(m, 22, 1000.0f);
  msg_setFloat(m, 23, 4300.0f);
  msg_setFloat(m, 24, 6000.0f);
  msg_setFloat(m, 25, 2.0f);
  msg_setFloat(m, 26, 916.0f);
  msg_setFloat(m, 27, 20.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fv87gkcU, 0, m, &cSlice_Fv87gkcU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pAhZqdIV, 0, m, &cSlice_pAhZqdIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nytE1cDf, 0, m, &cSlice_nytE1cDf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PFGUAmrw, 0, m, &cSlice_PFGUAmrw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EzfsN4PO, 0, m, &cSlice_EzfsN4PO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f6LABaw7, 0, m, &cSlice_f6LABaw7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qJwtdsNc, 0, m, &cSlice_qJwtdsNc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6Zn9BSpa, 0, m, &cSlice_6Zn9BSpa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_j9mmBTBo, 0, m, &cSlice_j9mmBTBo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4g7kzxKk, 0, m, &cSlice_4g7kzxKk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HeDQiD7X, 0, m, &cSlice_HeDQiD7X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ELCcLq6J, 0, m, &cSlice_ELCcLq6J_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0g51Nvdp, 0, m, &cSlice_0g51Nvdp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4DguF9Je, 0, m, &cSlice_4DguF9Je_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ebwWZuer, 0, m, &cSlice_ebwWZuer_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9LyXNsSP, 0, m, &cSlice_9LyXNsSP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ztks9yhy, 0, m, &cSlice_ztks9yhy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJH3x7Uy, 0, m, &cSlice_rJH3x7Uy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0N5vk8Fb, 0, m, &cSlice_0N5vk8Fb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DC2FBDeH, 0, m, &cSlice_DC2FBDeH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2yzmz43p, 0, m, &cSlice_2yzmz43p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0uQ5P0TF, 0, m, &cSlice_0uQ5P0TF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGkJj24M, 0, m, &cSlice_zGkJj24M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9x3G47eH, 0, m, &cSlice_9x3G47eH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8Hcqm1VK, 0, m, &cSlice_8Hcqm1VK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UqEJrUhE, 0, m, &cSlice_UqEJrUhE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jF2o9er8, 0, m, &cSlice_jF2o9er8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3zqttV9R, 0, m, &cSlice_3zqttV9R_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_Gm2ejI65_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(28);
  msg_init(m, 28, msg_getTimestamp(n));
  msg_setFloat(m, 0, 595.0f);
  msg_setFloat(m, 1, 510.0f);
  msg_setFloat(m, 2, 424.0f);
  msg_setFloat(m, 3, 330.0f);
  msg_setFloat(m, 4, 280.0f);
  msg_setFloat(m, 5, 120.0f);
  msg_setFloat(m, 6, 0.63f);
  msg_setFloat(m, 7, 0.0f);
  msg_setFloat(m, 8, 0.79f);
  msg_setFloat(m, 9, 0.0f);
  msg_setFloat(m, 10, 0.0f);
  msg_setFloat(m, 11, 1.0f);
  msg_setFloat(m, 12, 0.0f);
  msg_setFloat(m, 13, 0.0f);
  msg_setFloat(m, 14, 0.0f);
  msg_setFloat(m, 15, 0.0f);
  msg_setFloat(m, 16, 1.0f);
  msg_setFloat(m, 17, 0.0f);
  msg_setFloat(m, 18, 0.0f);
  msg_setFloat(m, 19, 70.0f);
  msg_setFloat(m, 20, 200.0f);
  msg_setFloat(m, 21, 200.0f);
  msg_setFloat(m, 22, 1000.0f);
  msg_setFloat(m, 23, 4300.0f);
  msg_setFloat(m, 24, 6000.0f);
  msg_setFloat(m, 25, 2.0f);
  msg_setFloat(m, 26, 916.0f);
  msg_setFloat(m, 27, 20.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fv87gkcU, 0, m, &cSlice_Fv87gkcU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pAhZqdIV, 0, m, &cSlice_pAhZqdIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nytE1cDf, 0, m, &cSlice_nytE1cDf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PFGUAmrw, 0, m, &cSlice_PFGUAmrw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EzfsN4PO, 0, m, &cSlice_EzfsN4PO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f6LABaw7, 0, m, &cSlice_f6LABaw7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qJwtdsNc, 0, m, &cSlice_qJwtdsNc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6Zn9BSpa, 0, m, &cSlice_6Zn9BSpa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_j9mmBTBo, 0, m, &cSlice_j9mmBTBo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4g7kzxKk, 0, m, &cSlice_4g7kzxKk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HeDQiD7X, 0, m, &cSlice_HeDQiD7X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ELCcLq6J, 0, m, &cSlice_ELCcLq6J_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0g51Nvdp, 0, m, &cSlice_0g51Nvdp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4DguF9Je, 0, m, &cSlice_4DguF9Je_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ebwWZuer, 0, m, &cSlice_ebwWZuer_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9LyXNsSP, 0, m, &cSlice_9LyXNsSP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ztks9yhy, 0, m, &cSlice_ztks9yhy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJH3x7Uy, 0, m, &cSlice_rJH3x7Uy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0N5vk8Fb, 0, m, &cSlice_0N5vk8Fb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DC2FBDeH, 0, m, &cSlice_DC2FBDeH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2yzmz43p, 0, m, &cSlice_2yzmz43p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0uQ5P0TF, 0, m, &cSlice_0uQ5P0TF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGkJj24M, 0, m, &cSlice_zGkJj24M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9x3G47eH, 0, m, &cSlice_9x3G47eH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8Hcqm1VK, 0, m, &cSlice_8Hcqm1VK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UqEJrUhE, 0, m, &cSlice_UqEJrUhE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jF2o9er8, 0, m, &cSlice_jF2o9er8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3zqttV9R, 0, m, &cSlice_3zqttV9R_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_vqSRMiud_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(28);
  msg_init(m, 28, msg_getTimestamp(n));
  msg_setFloat(m, 0, 420.0f);
  msg_setFloat(m, 1, 350.0f);
  msg_setFloat(m, 2, 280.0f);
  msg_setFloat(m, 3, 210.0f);
  msg_setFloat(m, 4, 140.0f);
  msg_setFloat(m, 5, 70.0f);
  msg_setFloat(m, 6, 1.0f);
  msg_setFloat(m, 7, 0.5f);
  msg_setFloat(m, 8, 0.0f);
  msg_setFloat(m, 9, 0.0f);
  msg_setFloat(m, 10, 0.0f);
  msg_setFloat(m, 11, 0.0f);
  msg_setFloat(m, 12, 0.3f);
  msg_setFloat(m, 13, 0.7f);
  msg_setFloat(m, 14, 0.0f);
  msg_setFloat(m, 15, 0.0f);
  msg_setFloat(m, 16, 0.0f);
  msg_setFloat(m, 17, 0.0f);
  msg_setFloat(m, 18, 1.0f);
  msg_setFloat(m, 19, 200.0f);
  msg_setFloat(m, 20, 200.0f);
  msg_setFloat(m, 21, 430.0f);
  msg_setFloat(m, 22, 1300.0f);
  msg_setFloat(m, 23, 4300.0f);
  msg_setFloat(m, 24, 6000.0f);
  msg_setFloat(m, 25, 2.0f);
  msg_setFloat(m, 26, 1066.0f);
  msg_setFloat(m, 27, 24.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fv87gkcU, 0, m, &cSlice_Fv87gkcU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pAhZqdIV, 0, m, &cSlice_pAhZqdIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nytE1cDf, 0, m, &cSlice_nytE1cDf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PFGUAmrw, 0, m, &cSlice_PFGUAmrw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EzfsN4PO, 0, m, &cSlice_EzfsN4PO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f6LABaw7, 0, m, &cSlice_f6LABaw7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qJwtdsNc, 0, m, &cSlice_qJwtdsNc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6Zn9BSpa, 0, m, &cSlice_6Zn9BSpa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_j9mmBTBo, 0, m, &cSlice_j9mmBTBo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4g7kzxKk, 0, m, &cSlice_4g7kzxKk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HeDQiD7X, 0, m, &cSlice_HeDQiD7X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ELCcLq6J, 0, m, &cSlice_ELCcLq6J_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0g51Nvdp, 0, m, &cSlice_0g51Nvdp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4DguF9Je, 0, m, &cSlice_4DguF9Je_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ebwWZuer, 0, m, &cSlice_ebwWZuer_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9LyXNsSP, 0, m, &cSlice_9LyXNsSP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ztks9yhy, 0, m, &cSlice_ztks9yhy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJH3x7Uy, 0, m, &cSlice_rJH3x7Uy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0N5vk8Fb, 0, m, &cSlice_0N5vk8Fb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DC2FBDeH, 0, m, &cSlice_DC2FBDeH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2yzmz43p, 0, m, &cSlice_2yzmz43p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0uQ5P0TF, 0, m, &cSlice_0uQ5P0TF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGkJj24M, 0, m, &cSlice_zGkJj24M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9x3G47eH, 0, m, &cSlice_9x3G47eH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8Hcqm1VK, 0, m, &cSlice_8Hcqm1VK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UqEJrUhE, 0, m, &cSlice_UqEJrUhE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jF2o9er8, 0, m, &cSlice_jF2o9er8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3zqttV9R, 0, m, &cSlice_3zqttV9R_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_gUtjcgyE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(28);
  msg_init(m, 28, msg_getTimestamp(n));
  msg_setFloat(m, 0, 420.0f);
  msg_setFloat(m, 1, 350.0f);
  msg_setFloat(m, 2, 280.0f);
  msg_setFloat(m, 3, 210.0f);
  msg_setFloat(m, 4, 140.0f);
  msg_setFloat(m, 5, 70.0f);
  msg_setFloat(m, 6, 1.0f);
  msg_setFloat(m, 7, 0.5f);
  msg_setFloat(m, 8, 0.5f);
  msg_setFloat(m, 9, 0.0f);
  msg_setFloat(m, 10, 0.0f);
  msg_setFloat(m, 11, 0.0f);
  msg_setFloat(m, 12, 0.316f);
  msg_setFloat(m, 13, 1.0f);
  msg_setFloat(m, 14, 0.0f);
  msg_setFloat(m, 15, 0.0f);
  msg_setFloat(m, 16, 0.0f);
  msg_setFloat(m, 17, 0.0f);
  msg_setFloat(m, 18, 1.0f);
  msg_setFloat(m, 19, 200.0f);
  msg_setFloat(m, 20, 200.0f);
  msg_setFloat(m, 21, 430.0f);
  msg_setFloat(m, 22, 1300.0f);
  msg_setFloat(m, 23, 4300.0f);
  msg_setFloat(m, 24, 6000.0f);
  msg_setFloat(m, 25, 2.0f);
  msg_setFloat(m, 26, 1066.0f);
  msg_setFloat(m, 27, 24.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fv87gkcU, 0, m, &cSlice_Fv87gkcU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pAhZqdIV, 0, m, &cSlice_pAhZqdIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nytE1cDf, 0, m, &cSlice_nytE1cDf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PFGUAmrw, 0, m, &cSlice_PFGUAmrw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EzfsN4PO, 0, m, &cSlice_EzfsN4PO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f6LABaw7, 0, m, &cSlice_f6LABaw7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qJwtdsNc, 0, m, &cSlice_qJwtdsNc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6Zn9BSpa, 0, m, &cSlice_6Zn9BSpa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_j9mmBTBo, 0, m, &cSlice_j9mmBTBo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4g7kzxKk, 0, m, &cSlice_4g7kzxKk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HeDQiD7X, 0, m, &cSlice_HeDQiD7X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ELCcLq6J, 0, m, &cSlice_ELCcLq6J_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0g51Nvdp, 0, m, &cSlice_0g51Nvdp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4DguF9Je, 0, m, &cSlice_4DguF9Je_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ebwWZuer, 0, m, &cSlice_ebwWZuer_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9LyXNsSP, 0, m, &cSlice_9LyXNsSP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ztks9yhy, 0, m, &cSlice_ztks9yhy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJH3x7Uy, 0, m, &cSlice_rJH3x7Uy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0N5vk8Fb, 0, m, &cSlice_0N5vk8Fb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DC2FBDeH, 0, m, &cSlice_DC2FBDeH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2yzmz43p, 0, m, &cSlice_2yzmz43p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0uQ5P0TF, 0, m, &cSlice_0uQ5P0TF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGkJj24M, 0, m, &cSlice_zGkJj24M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9x3G47eH, 0, m, &cSlice_9x3G47eH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8Hcqm1VK, 0, m, &cSlice_8Hcqm1VK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UqEJrUhE, 0, m, &cSlice_UqEJrUhE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jF2o9er8, 0, m, &cSlice_jF2o9er8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3zqttV9R, 0, m, &cSlice_3zqttV9R_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_qhg3D9RG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(28);
  msg_init(m, 28, msg_getTimestamp(n));
  msg_setFloat(m, 0, 420.0f);
  msg_setFloat(m, 1, 350.0f);
  msg_setFloat(m, 2, 280.0f);
  msg_setFloat(m, 3, 210.0f);
  msg_setFloat(m, 4, 140.0f);
  msg_setFloat(m, 5, 70.0f);
  msg_setFloat(m, 6, 1.0f);
  msg_setFloat(m, 7, 0.0f);
  msg_setFloat(m, 8, 0.0f);
  msg_setFloat(m, 9, 0.0f);
  msg_setFloat(m, 10, 1.0f);
  msg_setFloat(m, 11, 0.0f);
  msg_setFloat(m, 12, 0.316f);
  msg_setFloat(m, 13, 1.0f);
  msg_setFloat(m, 14, 0.0f);
  msg_setFloat(m, 15, 0.0f);
  msg_setFloat(m, 16, 0.0f);
  msg_setFloat(m, 17, 0.0f);
  msg_setFloat(m, 18, 1.0f);
  msg_setFloat(m, 19, 200.0f);
  msg_setFloat(m, 20, 200.0f);
  msg_setFloat(m, 21, 430.0f);
  msg_setFloat(m, 22, 1300.0f);
  msg_setFloat(m, 23, 4300.0f);
  msg_setFloat(m, 24, 6000.0f);
  msg_setFloat(m, 25, 2.0f);
  msg_setFloat(m, 26, 1066.0f);
  msg_setFloat(m, 27, 24.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fv87gkcU, 0, m, &cSlice_Fv87gkcU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pAhZqdIV, 0, m, &cSlice_pAhZqdIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nytE1cDf, 0, m, &cSlice_nytE1cDf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PFGUAmrw, 0, m, &cSlice_PFGUAmrw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EzfsN4PO, 0, m, &cSlice_EzfsN4PO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f6LABaw7, 0, m, &cSlice_f6LABaw7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qJwtdsNc, 0, m, &cSlice_qJwtdsNc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6Zn9BSpa, 0, m, &cSlice_6Zn9BSpa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_j9mmBTBo, 0, m, &cSlice_j9mmBTBo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4g7kzxKk, 0, m, &cSlice_4g7kzxKk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HeDQiD7X, 0, m, &cSlice_HeDQiD7X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ELCcLq6J, 0, m, &cSlice_ELCcLq6J_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0g51Nvdp, 0, m, &cSlice_0g51Nvdp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4DguF9Je, 0, m, &cSlice_4DguF9Je_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ebwWZuer, 0, m, &cSlice_ebwWZuer_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9LyXNsSP, 0, m, &cSlice_9LyXNsSP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ztks9yhy, 0, m, &cSlice_ztks9yhy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJH3x7Uy, 0, m, &cSlice_rJH3x7Uy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0N5vk8Fb, 0, m, &cSlice_0N5vk8Fb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DC2FBDeH, 0, m, &cSlice_DC2FBDeH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2yzmz43p, 0, m, &cSlice_2yzmz43p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0uQ5P0TF, 0, m, &cSlice_0uQ5P0TF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGkJj24M, 0, m, &cSlice_zGkJj24M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9x3G47eH, 0, m, &cSlice_9x3G47eH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8Hcqm1VK, 0, m, &cSlice_8Hcqm1VK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UqEJrUhE, 0, m, &cSlice_UqEJrUhE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jF2o9er8, 0, m, &cSlice_jF2o9er8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3zqttV9R, 0, m, &cSlice_3zqttV9R_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_RdruxIaX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(28);
  msg_init(m, 28, msg_getTimestamp(n));
  msg_setFloat(m, 0, 420.0f);
  msg_setFloat(m, 1, 350.0f);
  msg_setFloat(m, 2, 280.0f);
  msg_setFloat(m, 3, 210.0f);
  msg_setFloat(m, 4, 140.0f);
  msg_setFloat(m, 5, 70.0f);
  msg_setFloat(m, 6, 1.0f);
  msg_setFloat(m, 7, 0.5f);
  msg_setFloat(m, 8, 0.0f);
  msg_setFloat(m, 9, 0.0f);
  msg_setFloat(m, 10, 1.0f);
  msg_setFloat(m, 11, 0.0f);
  msg_setFloat(m, 12, 0.316f);
  msg_setFloat(m, 13, 1.0f);
  msg_setFloat(m, 14, 0.0f);
  msg_setFloat(m, 15, 0.0f);
  msg_setFloat(m, 16, 0.0f);
  msg_setFloat(m, 17, 0.0f);
  msg_setFloat(m, 18, 1.0f);
  msg_setFloat(m, 19, 200.0f);
  msg_setFloat(m, 20, 200.0f);
  msg_setFloat(m, 21, 430.0f);
  msg_setFloat(m, 22, 1300.0f);
  msg_setFloat(m, 23, 4300.0f);
  msg_setFloat(m, 24, 6000.0f);
  msg_setFloat(m, 25, 2.0f);
  msg_setFloat(m, 26, 1066.0f);
  msg_setFloat(m, 27, 24.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fv87gkcU, 0, m, &cSlice_Fv87gkcU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pAhZqdIV, 0, m, &cSlice_pAhZqdIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nytE1cDf, 0, m, &cSlice_nytE1cDf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PFGUAmrw, 0, m, &cSlice_PFGUAmrw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EzfsN4PO, 0, m, &cSlice_EzfsN4PO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f6LABaw7, 0, m, &cSlice_f6LABaw7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qJwtdsNc, 0, m, &cSlice_qJwtdsNc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6Zn9BSpa, 0, m, &cSlice_6Zn9BSpa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_j9mmBTBo, 0, m, &cSlice_j9mmBTBo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4g7kzxKk, 0, m, &cSlice_4g7kzxKk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HeDQiD7X, 0, m, &cSlice_HeDQiD7X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ELCcLq6J, 0, m, &cSlice_ELCcLq6J_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0g51Nvdp, 0, m, &cSlice_0g51Nvdp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4DguF9Je, 0, m, &cSlice_4DguF9Je_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ebwWZuer, 0, m, &cSlice_ebwWZuer_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9LyXNsSP, 0, m, &cSlice_9LyXNsSP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ztks9yhy, 0, m, &cSlice_ztks9yhy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJH3x7Uy, 0, m, &cSlice_rJH3x7Uy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0N5vk8Fb, 0, m, &cSlice_0N5vk8Fb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DC2FBDeH, 0, m, &cSlice_DC2FBDeH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2yzmz43p, 0, m, &cSlice_2yzmz43p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0uQ5P0TF, 0, m, &cSlice_0uQ5P0TF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGkJj24M, 0, m, &cSlice_zGkJj24M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9x3G47eH, 0, m, &cSlice_9x3G47eH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8Hcqm1VK, 0, m, &cSlice_8Hcqm1VK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UqEJrUhE, 0, m, &cSlice_UqEJrUhE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jF2o9er8, 0, m, &cSlice_jF2o9er8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3zqttV9R, 0, m, &cSlice_3zqttV9R_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_BpzdPT6g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(28);
  msg_init(m, 28, msg_getTimestamp(n));
  msg_setFloat(m, 0, 420.0f);
  msg_setFloat(m, 1, 350.0f);
  msg_setFloat(m, 2, 280.0f);
  msg_setFloat(m, 3, 210.0f);
  msg_setFloat(m, 4, 140.0f);
  msg_setFloat(m, 5, 70.0f);
  msg_setFloat(m, 6, 1.0f);
  msg_setFloat(m, 7, 0.5f);
  msg_setFloat(m, 8, 0.5f);
  msg_setFloat(m, 9, 0.5f);
  msg_setFloat(m, 10, 0.0f);
  msg_setFloat(m, 11, 0.0f);
  msg_setFloat(m, 12, 0.316f);
  msg_setFloat(m, 13, 1.0f);
  msg_setFloat(m, 14, 0.0f);
  msg_setFloat(m, 15, 0.0f);
  msg_setFloat(m, 16, 0.0f);
  msg_setFloat(m, 17, 0.0f);
  msg_setFloat(m, 18, 1.0f);
  msg_setFloat(m, 19, 200.0f);
  msg_setFloat(m, 20, 200.0f);
  msg_setFloat(m, 21, 430.0f);
  msg_setFloat(m, 22, 1300.0f);
  msg_setFloat(m, 23, 4300.0f);
  msg_setFloat(m, 24, 6000.0f);
  msg_setFloat(m, 25, 2.0f);
  msg_setFloat(m, 26, 1066.0f);
  msg_setFloat(m, 27, 24.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fv87gkcU, 0, m, &cSlice_Fv87gkcU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pAhZqdIV, 0, m, &cSlice_pAhZqdIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nytE1cDf, 0, m, &cSlice_nytE1cDf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PFGUAmrw, 0, m, &cSlice_PFGUAmrw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EzfsN4PO, 0, m, &cSlice_EzfsN4PO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f6LABaw7, 0, m, &cSlice_f6LABaw7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qJwtdsNc, 0, m, &cSlice_qJwtdsNc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6Zn9BSpa, 0, m, &cSlice_6Zn9BSpa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_j9mmBTBo, 0, m, &cSlice_j9mmBTBo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4g7kzxKk, 0, m, &cSlice_4g7kzxKk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HeDQiD7X, 0, m, &cSlice_HeDQiD7X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ELCcLq6J, 0, m, &cSlice_ELCcLq6J_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0g51Nvdp, 0, m, &cSlice_0g51Nvdp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4DguF9Je, 0, m, &cSlice_4DguF9Je_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ebwWZuer, 0, m, &cSlice_ebwWZuer_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9LyXNsSP, 0, m, &cSlice_9LyXNsSP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ztks9yhy, 0, m, &cSlice_ztks9yhy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJH3x7Uy, 0, m, &cSlice_rJH3x7Uy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0N5vk8Fb, 0, m, &cSlice_0N5vk8Fb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DC2FBDeH, 0, m, &cSlice_DC2FBDeH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2yzmz43p, 0, m, &cSlice_2yzmz43p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0uQ5P0TF, 0, m, &cSlice_0uQ5P0TF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGkJj24M, 0, m, &cSlice_zGkJj24M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9x3G47eH, 0, m, &cSlice_9x3G47eH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8Hcqm1VK, 0, m, &cSlice_8Hcqm1VK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UqEJrUhE, 0, m, &cSlice_UqEJrUhE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jF2o9er8, 0, m, &cSlice_jF2o9er8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3zqttV9R, 0, m, &cSlice_3zqttV9R_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_Ss3u78Dh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_tLbZlqHU_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_tLbZlqHU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_xFkLIEou_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_R9m5ZzTi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_H06Cgids_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSystem_GZvqLTf6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_8gs0hHPM_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_X8U8KBGo, m);
}

void Heavy_Echomatica_1_3_1::cBinop_xFkLIEou_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Xn99z2Uk, m);
}

void Heavy_Echomatica_1_3_1::cMsg_H06Cgids_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_GZvqLTf6_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_8gs0hHPM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_m1VshnCd, m);
}

void Heavy_Echomatica_1_3_1::cMsg_1PGON56B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_TZKHmAM7_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_TZKHmAM7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_y5SLMfGk_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_Dyr6ZFL3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BoOo5FXd_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSystem_UZYWpVAB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_39Y5zaJR_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_deYXT6vm, m);
}

void Heavy_Echomatica_1_3_1::cBinop_y5SLMfGk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_iUvNybFA, m);
}

void Heavy_Echomatica_1_3_1::cMsg_BoOo5FXd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_UZYWpVAB_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_39Y5zaJR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_NDfvRXn5, m);
}

void Heavy_Echomatica_1_3_1::cVar_2ItTX49E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica_1_3_1::cVar_dY5LqiiQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica_1_3_1::cVar_EjZy7xzw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica_1_3_1::cVar_7rVWhU9r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica_1_3_1::cVar_jeO5UEyT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica_1_3_1::cVar_6a5YXyay_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica_1_3_1::cVar_yoDYiFqr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica_1_3_1::cVar_sjyquPsE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica_1_3_1::cVar_ejzW8HGu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica_1_3_1::cVar_XhQXVNkr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica_1_3_1::cVar_t2OXRHEu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica_1_3_1::cVar_pevQ5KcR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica_1_3_1::cMsg_yqBnF9pk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_k9TFnK46_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_k9TFnK46_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_h2amx6Dx_sendMessage);
}

void Heavy_Echomatica_1_3_1::cDelay_MjwhmHcj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_MjwhmHcj, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_XZoBvB3J, 0, m, &cDelay_XZoBvB3J_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_MjwhmHcj, 0, m, &cDelay_MjwhmHcj_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_lYqZnbOg, 1, m, NULL);
}

void Heavy_Echomatica_1_3_1::cDelay_XZoBvB3J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_XZoBvB3J, m);
  cMsg_g6hxiXrF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSwitchcase_heDwnTIk_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_8FsRlMLG_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica_1_3_1::cBinop_8lDLUQP7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vyLksdEB_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::hTable_ob8PQSvd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_AaJ0kcTq_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_MjwhmHcj, 2, m, &cDelay_MjwhmHcj_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OngnDp7R_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_vyLksdEB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_ob8PQSvd, 0, m, &hTable_ob8PQSvd_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_h2amx6Dx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5000.0f, 0, m, &cBinop_8lDLUQP7_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_g6hxiXrF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_ob8PQSvd, 0, m, &hTable_ob8PQSvd_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_OngnDp7R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_MjwhmHcj, 0, m, &cDelay_MjwhmHcj_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_AaJ0kcTq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_XZoBvB3J, 2, m, &cDelay_XZoBvB3J_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_8FsRlMLG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_lYqZnbOg, 1, m, NULL);
}

void Heavy_Echomatica_1_3_1::cPack_L1TO5NaH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_NhDWBcIM, 0, m, NULL);
}

void Heavy_Echomatica_1_3_1::cPack_A8pAIw1o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_UkJ2yJpr, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_a8JWRtjB, 0, m, &cVar_a8JWRtjB_sendMessage);
}

void Heavy_Echomatica_1_3_1::cPack_Z7jEZ2ic_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Jm2TE1b2, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_vecEllHP, 0, m, &cVar_vecEllHP_sendMessage);
}

void Heavy_Echomatica_1_3_1::cPack_BQyw2Al9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_1d96uCmI, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_DzwbvLx8, 0, m, &cVar_DzwbvLx8_sendMessage);
}

void Heavy_Echomatica_1_3_1::cPack_LLZFrpAp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_0gAywUUl, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_OQhx2cDg, 0, m, &cVar_OQhx2cDg_sendMessage);
}

void Heavy_Echomatica_1_3_1::cPack_omf4143H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_JRnl2POD, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_Yvfq4X9x, 0, m, &cVar_Yvfq4X9x_sendMessage);
}

void Heavy_Echomatica_1_3_1::cPack_2GpLnE6v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_yAPGJXkc, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_AXGLidEf, 0, m, &cVar_AXGLidEf_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_fFxQkaHz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eGJyeqph, HV_BINOP_MULTIPLY, 0, m, &cBinop_eGJyeqph_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_AdpmeTxE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_s4Hgf3fV_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_s4Hgf3fV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rSgwj1R9_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cBinop_eGJyeqph_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_JIc69GOd_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_s8wiDS7W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eGJyeqph, HV_BINOP_MULTIPLY, 1, m, &cBinop_eGJyeqph_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_rSgwj1R9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_s8wiDS7W_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_JIc69GOd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_oSkhjh4c_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_oSkhjh4c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_KD0YpBs4_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_yztMCvl3, m);
}

void Heavy_Echomatica_1_3_1::cBinop_KD0YpBs4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ZwrXsh3s, m);
}

void Heavy_Echomatica_1_3_1::cSlice_Fv87gkcU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_1tYuD03W_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_pAhZqdIV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_yXSNMFXZ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_nytE1cDf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_snxXax5u_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_PFGUAmrw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_OdWNd2BL_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_EzfsN4PO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_OxF9AxgF_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_f6LABaw7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_HojHUcba_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_qJwtdsNc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_BY4O0n5i_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_6Zn9BSpa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_lUJ0BLbG_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_j9mmBTBo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_BFo8smSC_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_4g7kzxKk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_1Z0Trjgu_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_HeDQiD7X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_NR6IUK3U_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_ELCcLq6J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_LWJeiUpT_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_0g51Nvdp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_nLOXq3Vt_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_4DguF9Je_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_buXJa8Nx_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_ebwWZuer_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_l6mp8VHE_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_9LyXNsSP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_PlAZkzbT_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_ztks9yhy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_0bXIzMcf_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_rJH3x7Uy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_CUJ6Kr1Y_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_0N5vk8Fb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_1yh9Vpnl_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_DC2FBDeH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_LlQ6L0Vj_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_2yzmz43p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_m5pTfnTJ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_0uQ5P0TF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_J0O3HNqx_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_zGkJj24M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_XpNMX0l2_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_9x3G47eH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_6qg77OI8_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_8Hcqm1VK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_JxIAhU0q_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_UqEJrUhE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_wfww6CNW_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_jF2o9er8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_95yg5ngz_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_3zqttV9R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_okGMtkhA_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cBinop_wz2y1lcm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_dGWDNlfW_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_dGWDNlfW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_RNHnGhjJ_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_ufC7RQQY_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_KcYPlb8f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_FHf8BovE_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_Jp96MmWY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_JT1q0vsP_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_JT1q0vsP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ATDahEtA, HV_BINOP_DIVIDE, 1, m, &cBinop_ATDahEtA_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_RNHnGhjJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_6WYdT6m0_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_6WYdT6m0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_PXr6wVtJ, m);
}

void Heavy_Echomatica_1_3_1::cMsg_X0XMfQFa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_VkN3sZbW_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_VkN3sZbW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_wz2y1lcm_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_ufC7RQQY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_JojMskYK, m);
}

void Heavy_Echomatica_1_3_1::cBinop_FHf8BovE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_AL9atjNX_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_AL9atjNX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ATDahEtA, HV_BINOP_DIVIDE, 0, m, &cBinop_ATDahEtA_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_ATDahEtA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_X0XMfQFa_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cBinop_RVbm1Os4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_xSXHmG4T_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_xSXHmG4T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_iWkKoXdX_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_snR5nlxo_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_MPzafuAU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_jd9N9hDI_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_7cw3VWVl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_WxoPifnc_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_WxoPifnc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AbTAU9Cw, HV_BINOP_DIVIDE, 1, m, &cBinop_AbTAU9Cw_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_iWkKoXdX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_ySDAJXeq_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_ySDAJXeq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_XjCVMNLL, m);
}

void Heavy_Echomatica_1_3_1::cMsg_6TeTcbj3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Yzg2mAui_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_Yzg2mAui_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_RVbm1Os4_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_snR5nlxo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_LI2LK6ey, m);
}

void Heavy_Echomatica_1_3_1::cBinop_jd9N9hDI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_nqtjPPgC_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_nqtjPPgC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AbTAU9Cw, HV_BINOP_DIVIDE, 0, m, &cBinop_AbTAU9Cw_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_AbTAU9Cw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6TeTcbj3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cBinop_dmAcWwop_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_xnT8Ft3k_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_xnT8Ft3k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_CnpzPDKo_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_9WKnDz28_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_BVDF7U2x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_EX4Ce3ZR_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_NeJkkBd6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_MBruD1MW_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_MBruD1MW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Zlsxzvmv, HV_BINOP_DIVIDE, 1, m, &cBinop_Zlsxzvmv_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_CnpzPDKo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_x5VBPLj9_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_x5VBPLj9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_wCRdP5Te, m);
}

void Heavy_Echomatica_1_3_1::cMsg_hitajT9F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_LgibObpE_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_LgibObpE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_dmAcWwop_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_9WKnDz28_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_atBp9DsE, m);
}

void Heavy_Echomatica_1_3_1::cBinop_EX4Ce3ZR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_11pdLBQf_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_11pdLBQf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Zlsxzvmv, HV_BINOP_DIVIDE, 0, m, &cBinop_Zlsxzvmv_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_Zlsxzvmv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hitajT9F_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cVar_szn71jgb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AFFuQDNr, HV_BINOP_MULTIPLY, 0, m, &cBinop_AFFuQDNr_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_l9xiHB2l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_qy8XAsw2_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_qy8XAsw2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YuXK0rrs_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cBinop_AFFuQDNr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_BinpuuMD_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_SpmU9lTI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AFFuQDNr, HV_BINOP_MULTIPLY, 1, m, &cBinop_AFFuQDNr_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_YuXK0rrs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_SpmU9lTI_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_BinpuuMD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_vZqFxdLL_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_vZqFxdLL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_bDF2NpJA_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_WT8mi0Q8, m);
}

void Heavy_Echomatica_1_3_1::cBinop_bDF2NpJA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_CqUsNcvq, m);
}

void Heavy_Echomatica_1_3_1::cVar_pWlVsMQN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BcZbVNuN, HV_BINOP_MULTIPLY, 0, m, &cBinop_BcZbVNuN_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_Oi3HFj4r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_mhluZUS3_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_mhluZUS3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IqtwHjoq_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cBinop_BcZbVNuN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_wKJHKEK2_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_V3OjK5FK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BcZbVNuN, HV_BINOP_MULTIPLY, 1, m, &cBinop_BcZbVNuN_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_IqtwHjoq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_V3OjK5FK_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_wKJHKEK2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_IEtwiePB_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_IEtwiePB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_IhbtoV5z_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_BvCQmcPc, m);
}

void Heavy_Echomatica_1_3_1::cBinop_IhbtoV5z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_yduYFTTK, m);
}

void Heavy_Echomatica_1_3_1::cVar_XNFvoPrV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hSGIue6m, HV_BINOP_MULTIPLY, 0, m, &cBinop_hSGIue6m_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_H4zerIaw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_7vCh4QDm_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_7vCh4QDm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JR9bjDoy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cBinop_hSGIue6m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_91LwCdsB_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_EyIfuIVY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hSGIue6m, HV_BINOP_MULTIPLY, 1, m, &cBinop_hSGIue6m_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_JR9bjDoy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_EyIfuIVY_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_91LwCdsB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_91jxQrrl_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_91jxQrrl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_hI6cMzlu_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_nS7ObhDA, m);
}

void Heavy_Echomatica_1_3_1::cBinop_hI6cMzlu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_nhYo88d4, m);
}

void Heavy_Echomatica_1_3_1::cMsg_6TXREDs3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ItoNoI4I_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_ItoNoI4I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fNVvyUJR, HV_BINOP_DIVIDE, 1, m, &cBinop_fNVvyUJR_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_PMdcW90m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_qkLXLxy6_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_W2bcHkIx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.001f, 0, m, &cBinop_edcsI5nN_sendMessage);
}

void Heavy_Echomatica_1_3_1::cUnop_75aBGkI0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_KTSKDq1V_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_fNVvyUJR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_A1Zebshg, HV_BINOP_MULTIPLY, 1, m, &cBinop_A1Zebshg_sendMessage);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_75aBGkI0_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_v60GGMXJ, HV_BINOP_DIVIDE, 0, m, &cBinop_v60GGMXJ_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_qkLXLxy6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fNVvyUJR, HV_BINOP_DIVIDE, 0, m, &cBinop_fNVvyUJR_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_v60GGMXJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_PB89Bi31_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_4QP3TcGp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_WLvQulkb_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_WLvQulkb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_SzhHnBm0_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_NPli3Obq, HV_BINOP_MULTIPLY, 0, m, &cBinop_NPli3Obq_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_A1Zebshg, HV_BINOP_MULTIPLY, 0, m, &cBinop_A1Zebshg_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_KTSKDq1V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NPli3Obq, HV_BINOP_MULTIPLY, 1, m, &cBinop_NPli3Obq_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_NPli3Obq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_SQ20vLlS_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_hW0ddyCo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_PMdcW90m, 0, m, &cVar_PMdcW90m_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_KKnY740b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_4XCKMJl0_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_4XCKMJl0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_2MEhJfs7, 5, m);
}

void Heavy_Echomatica_1_3_1::cBinop_SQ20vLlS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_2MEhJfs7, 4, m);
}

void Heavy_Echomatica_1_3_1::cBinop_oKKk6rVl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6HTGqsju, HV_BINOP_MULTIPLY, 0, m, &cBinop_6HTGqsju_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_A1Zebshg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_X2P3sXzf, HV_BINOP_ADD, 1, m, &cBinop_X2P3sXzf_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_SzhHnBm0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_KKnY740b_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_X2P3sXzf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6HTGqsju, HV_BINOP_MULTIPLY, 1, m, &cBinop_6HTGqsju_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_6HTGqsju_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_2MEhJfs7, 1, m);
}

void Heavy_Echomatica_1_3_1::cBinop_edcsI5nN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_v60GGMXJ, HV_BINOP_DIVIDE, 1, m, &cBinop_v60GGMXJ_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_PB89Bi31_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_4QP3TcGp_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_X2P3sXzf, HV_BINOP_ADD, 0, m, &cBinop_X2P3sXzf_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_oKKk6rVl_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_a8JWRtjB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica_1_3_1::cVar_vecEllHP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica_1_3_1::cVar_AXGLidEf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica_1_3_1::cVar_DzwbvLx8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica_1_3_1::cVar_OQhx2cDg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica_1_3_1::cVar_Yvfq4X9x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica_1_3_1::cSlice_XMFc5idn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_QSd6EwK0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_4HA5GdHh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_gSDe9Aqa, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_Fty59Dom_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_aQDFN7Pq, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_u8tg5rYC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_FYzcAaC8, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSwitchcase_0UUeEyWw_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gygLJMHU_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fIqsBX6u_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica_1_3_1::cCast_gygLJMHU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YmVNKb52_sendMessage);
}

void Heavy_Echomatica_1_3_1::cPack_03MT59SQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_yOKjABDc, 0, m, NULL);
}

void Heavy_Echomatica_1_3_1::cMsg_QniqSz3w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_zFlBvnzf_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_zFlBvnzf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_0aSKOLVt_sendMessage);
}

void Heavy_Echomatica_1_3_1::cDelay_4qrN8tWp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_4qrN8tWp, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_EmM8z2zX, 0, m, &cDelay_EmM8z2zX_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_4qrN8tWp, 0, m, &cDelay_4qrN8tWp_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_3mF5qyQV, 1, m, NULL);
}

void Heavy_Echomatica_1_3_1::cDelay_EmM8z2zX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_EmM8z2zX, m);
  cMsg_HNIkELb5_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSwitchcase_jldX9FK7_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_Am8Szk5u_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica_1_3_1::cBinop_Jr6YT5Vh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cA3E5t2V_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::hTable_0cQsOJd1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7zjiFFLL_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_4qrN8tWp, 2, m, &cDelay_4qrN8tWp_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dLZhWnYB_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_cA3E5t2V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_0cQsOJd1, 0, m, &hTable_0cQsOJd1_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_0aSKOLVt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 40.0f, 0, m, &cBinop_Jr6YT5Vh_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_HNIkELb5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_0cQsOJd1, 0, m, &hTable_0cQsOJd1_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_dLZhWnYB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_4qrN8tWp, 0, m, &cDelay_4qrN8tWp_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_7zjiFFLL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_EmM8z2zX, 2, m, &cDelay_EmM8z2zX_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_Am8Szk5u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_3mF5qyQV, 1, m, NULL);
}

void Heavy_Echomatica_1_3_1::cVar_fN1ZdQmk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_PREtbBZ1, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_LISRTAJf, m);
}

void Heavy_Echomatica_1_3_1::cMsg_FjNg2vgk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_12x9PzMy_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_12x9PzMy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_P2ZJo31K_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_OPCsHc9c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_19fv8f1e_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSystem_ogd17mPa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_WMm3x2PO_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_mVIRZo52, m);
}

void Heavy_Echomatica_1_3_1::cBinop_P2ZJo31K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_KMNjFBtD, m);
}

void Heavy_Echomatica_1_3_1::cMsg_19fv8f1e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ogd17mPa_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_WMm3x2PO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_pq3SnxO2, m);
}

void Heavy_Echomatica_1_3_1::cMsg_SLCqz4zY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_o21whg37_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_o21whg37_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_LYdPVKsF_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_VIB7pSNr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DGCCFPti_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSystem_TUCpxKPH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_hXHG6YeI_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_ZGxbknCf, m);
}

void Heavy_Echomatica_1_3_1::cBinop_LYdPVKsF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_lzsyeKO2, m);
}

void Heavy_Echomatica_1_3_1::cMsg_DGCCFPti_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_TUCpxKPH_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_hXHG6YeI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_kVPV9ZSa, m);
}

void Heavy_Echomatica_1_3_1::cMsg_bji5ogqG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_pDA0xSVu_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_pDA0xSVu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_V3Gm8Jfh_sendMessage);
}

void Heavy_Echomatica_1_3_1::cDelay_bb5t1w7A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_bb5t1w7A, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_agoTUWdU, 0, m, &cDelay_agoTUWdU_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_bb5t1w7A, 0, m, &cDelay_bb5t1w7A_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_2BBW26yA, 1, m, NULL);
}

void Heavy_Echomatica_1_3_1::cDelay_agoTUWdU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_agoTUWdU, m);
  cMsg_1QH7YD30_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSwitchcase_j57071UC_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_iQl1pC7T_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica_1_3_1::cBinop_oJjqzoFW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WOlCeTqm_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::hTable_29d75dGt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xePv6HMN_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_bb5t1w7A, 2, m, &cDelay_bb5t1w7A_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wjp5P2d4_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_WOlCeTqm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_29d75dGt, 0, m, &hTable_29d75dGt_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_V3Gm8Jfh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 30.0f, 0, m, &cBinop_oJjqzoFW_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_1QH7YD30_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_29d75dGt, 0, m, &hTable_29d75dGt_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_wjp5P2d4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_bb5t1w7A, 0, m, &cDelay_bb5t1w7A_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_xePv6HMN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_agoTUWdU, 2, m, &cDelay_agoTUWdU_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_iQl1pC7T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_2BBW26yA, 1, m, NULL);
}

void Heavy_Echomatica_1_3_1::cBinop_lo3B2dEk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_gIsI8zBe_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_gIsI8zBe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_OPdfMsi2_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_ZXCF7QPN_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_Pd62vqHs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_nJDG59Gi_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_OgEmiM1H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_nKtM0YjQ_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_nKtM0YjQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GJu3ZHGT, HV_BINOP_DIVIDE, 1, m, &cBinop_GJu3ZHGT_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_OPdfMsi2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_Wd6sDGEi_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_Wd6sDGEi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_vGD9WPZw, m);
}

void Heavy_Echomatica_1_3_1::cMsg_f761J3QR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_GpGLaX5X_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_GpGLaX5X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_lo3B2dEk_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_ZXCF7QPN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_7zXAKQYY, m);
}

void Heavy_Echomatica_1_3_1::cBinop_nJDG59Gi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_w6x7AV9z_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_w6x7AV9z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GJu3ZHGT, HV_BINOP_DIVIDE, 0, m, &cBinop_GJu3ZHGT_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_GJu3ZHGT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_f761J3QR_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cBinop_SqaBr5wo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_9RUlTIRR_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_9RUlTIRR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_qdTfyAyq_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_eDX5ryyo_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_zy9PkJTR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_CrYm7VA7_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_C1I04KHS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_MEJ0V6JM_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_MEJ0V6JM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_betzn6Bb, HV_BINOP_DIVIDE, 1, m, &cBinop_betzn6Bb_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_qdTfyAyq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_UD6398YL_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_UD6398YL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_5t5p2qV5, m);
}

void Heavy_Echomatica_1_3_1::cMsg_8d18s9nb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_rCAztdNl_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_rCAztdNl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_SqaBr5wo_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_eDX5ryyo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_2wzl30oD, m);
}

void Heavy_Echomatica_1_3_1::cBinop_CrYm7VA7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_7NFyQaxU_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_7NFyQaxU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_betzn6Bb, HV_BINOP_DIVIDE, 0, m, &cBinop_betzn6Bb_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_betzn6Bb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8d18s9nb_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cVar_WdhXvJMD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_z3ZuznuC, 0, m, &cPack_z3ZuznuC_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_nzAqMVRm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_VQy9MoXh, 0, m, &cPack_VQy9MoXh_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_MlLuKASg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_TrzV77oi_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica_1_3_1::cPack_VQy9MoXh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_eYOqMAnK, 0, m, NULL);
}

void Heavy_Echomatica_1_3_1::cPack_z3ZuznuC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_lsf54WSc, 0, m, NULL);
}

void Heavy_Echomatica_1_3_1::cSwitchcase_TrzV77oi_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_C6DJodjh_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GL7qgvlf_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RsYzkrxS_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica_1_3_1::cCast_C6DJodjh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IrAFDKni_sendMessage(_c, 0, m);
  cMsg_UYCULH2D_sendMessage(_c, 0, m);
  cMsg_iFUlvcnO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_GL7qgvlf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IrAFDKni_sendMessage(_c, 0, m);
  cMsg_UYCULH2D_sendMessage(_c, 0, m);
  cMsg_GAwT4vGe_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_RsYzkrxS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DcePLL6h_sendMessage(_c, 0, m);
  cMsg_NJcU0pBd_sendMessage(_c, 0, m);
  cMsg_GAwT4vGe_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cVar_SatsfflH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_rApoltnD_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cVar_Z8bdTJjH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rSaj21kQ, HV_BINOP_DIVIDE, 0, m, &cBinop_rSaj21kQ_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_bswWN0Oa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mqp7hV9w, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_mqp7hV9w_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_mvqx3jpF, 0, m, &cIf_mvqx3jpF_sendMessage);
}

void Heavy_Echomatica_1_3_1::sEnv_9kN2aNIz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_Pmx0wOjE_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_VrPW5ndb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_q1bgnuBq_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_q1bgnuBq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_my1a844I_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GfjF8Rj7_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_GfjF8Rj7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_a6P9m2eJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_my1a844I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7l5nFc9m, HV_BINOP_POW, 1, m, &cBinop_7l5nFc9m_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_a6P9m2eJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_7l5nFc9m, HV_BINOP_POW, 0, m, &cBinop_7l5nFc9m_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_7l5nFc9m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_4wXOULCE_sendMessage);
}

void Heavy_Echomatica_1_3_1::cIf_mvqx3jpF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_VrPW5ndb, HV_BINOP_SUBTRACT, 0, m, &cBinop_VrPW5ndb_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_4IsQFDtf, HV_BINOP_SUBTRACT, 0, m, &cBinop_4IsQFDtf_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cBinop_mqp7hV9w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_mvqx3jpF, 1, m, &cIf_mvqx3jpF_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_6fW3edpK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_IsPJUbl3_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_A956ASM4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jCi7GBh1_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_SKF55w80_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GXf2j2IJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oilXCNGc_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSwitchcase_WBGsL7j1_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_AgPmbfid, 0, m, &cSlice_AgPmbfid_sendMessage);
      break;
    }
    default: {
      cSwitchcase_ES21t0Ej_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica_1_3_1::cSlice_AgPmbfid_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_sutZI4Uk_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_sutZI4Uk_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cVar_MhI4ySMw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_sutZI4Uk_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_sutZI4Uk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_hSiGj0MU_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSwitchcase_ES21t0Ej_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_SYrLI5CK, 0, m, &cSlice_SYrLI5CK_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica_1_3_1::cSlice_SYrLI5CK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_F5GX8STk_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_F5GX8STk_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cVar_ZY9EnNCc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_F5GX8STk_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_F5GX8STk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jMVzRemz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_oilXCNGc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Z8bdTJjH, 0, m, &cVar_Z8bdTJjH_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_GXf2j2IJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rSaj21kQ, HV_BINOP_DIVIDE, 1, m, &cBinop_rSaj21kQ_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_rSaj21kQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HFAaufrD, HV_BINOP_ADD, 0, m, &cBinop_HFAaufrD_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_4IsQFDtf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Z8bdTJjH, 0, m, &cVar_Z8bdTJjH_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_A956ASM4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mqp7hV9w, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_mqp7hV9w_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_jCi7GBh1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bswWN0Oa, 0, m, &cVar_bswWN0Oa_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_IsPJUbl3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LfujYogJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4Blyy3Ki_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_HFAaufrD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VrPW5ndb, HV_BINOP_SUBTRACT, 0, m, &cBinop_VrPW5ndb_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_MRI3SPpb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6fW3edpK, 0, m, &cVar_6fW3edpK_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_HF9I9QTn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SKF55w80, 0, m, &cVar_SKF55w80_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_08q7IbbE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VrPW5ndb, HV_BINOP_SUBTRACT, 1, m, &cBinop_VrPW5ndb_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_rvcCO5rr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bswWN0Oa, 0, m, &cVar_bswWN0Oa_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_4wXOULCE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CKidyLzq_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_LfujYogJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HFAaufrD, HV_BINOP_ADD, 1, m, &cBinop_HFAaufrD_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_4Blyy3Ki_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4IsQFDtf, HV_BINOP_SUBTRACT, 1, m, &cBinop_4IsQFDtf_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_Pmx0wOjE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_08q7IbbE_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rvcCO5rr_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_CKidyLzq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_hu4SY6a2, 0, m, NULL);
}

void Heavy_Echomatica_1_3_1::cMsg_IrAFDKni_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_nzAqMVRm, 0, m, &cVar_nzAqMVRm_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_UYCULH2D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_WdhXvJMD, 0, m, &cVar_WdhXvJMD_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_DcePLL6h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_nzAqMVRm, 0, m, &cVar_nzAqMVRm_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_NJcU0pBd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_WdhXvJMD, 0, m, &cVar_WdhXvJMD_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSend_rApoltnD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Ic7Dm8xS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cMsg_iFUlvcnO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_SatsfflH, 0, m, &cVar_SatsfflH_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_GAwT4vGe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_SatsfflH, 0, m, &cVar_SatsfflH_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_1jo1ienq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tbz4sByX, HV_BINOP_MULTIPLY, 0, m, &cBinop_tbz4sByX_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_t1tmR1As_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_SIK8F3H2_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_SIK8F3H2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vSVPaAWf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cBinop_tbz4sByX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_8NzY6qY7_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_SBG6O2zf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tbz4sByX, HV_BINOP_MULTIPLY, 1, m, &cBinop_tbz4sByX_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_vSVPaAWf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_SBG6O2zf_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_8NzY6qY7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_CAOwHxhF_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_CAOwHxhF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_lHSj7MJ8_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_TRjOUDpb, m);
}

void Heavy_Echomatica_1_3_1::cBinop_lHSj7MJ8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_lnspz86B, m);
}

void Heavy_Echomatica_1_3_1::cBinop_Vnl3zCoF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_quTmaTtr_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_quTmaTtr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_RpafA14Z_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_mlb4ciy0_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_5IzQe5UZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_WFuGeMz2_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_m6X38VpE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_hsUcu42H_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_hsUcu42H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nExlotDT, HV_BINOP_DIVIDE, 1, m, &cBinop_nExlotDT_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_RpafA14Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_L3REC1fF_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_L3REC1fF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_gLgKfI0d, m);
}

void Heavy_Echomatica_1_3_1::cMsg_lVW7ECfS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_mt9ReoIA_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_mt9ReoIA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_Vnl3zCoF_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_mlb4ciy0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Wkcqn3bd, m);
}

void Heavy_Echomatica_1_3_1::cBinop_WFuGeMz2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_cghWFaMB_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_cghWFaMB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nExlotDT, HV_BINOP_DIVIDE, 0, m, &cBinop_nExlotDT_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_nExlotDT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_lVW7ECfS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cBinop_IrREFWS6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_eTq5HfJS_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_eTq5HfJS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_x5S7cP8B_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_RzH2v1fe_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_atgkxsWa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_JUiEEsgt_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_J9rPt5SG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_6IjpWkgn_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_6IjpWkgn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_L4xa0OP6, HV_BINOP_DIVIDE, 1, m, &cBinop_L4xa0OP6_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_x5S7cP8B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_NiePpOw7_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_NiePpOw7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_q4V2WQXb, m);
}

void Heavy_Echomatica_1_3_1::cMsg_Fco9cA1U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_z29ET7IP_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_z29ET7IP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_IrREFWS6_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_RzH2v1fe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_SCP7MKV5, m);
}

void Heavy_Echomatica_1_3_1::cBinop_JUiEEsgt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_ourKYnJE_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_ourKYnJE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_L4xa0OP6, HV_BINOP_DIVIDE, 0, m, &cBinop_L4xa0OP6_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_L4xa0OP6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Fco9cA1U_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cIf_ZaSducp6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_A88XMt4t, 0, m, &cVar_A88XMt4t_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cVar_A88XMt4t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_K8N9EI8Y, HV_BINOP_MULTIPLY, 0, m, &cBinop_K8N9EI8Y_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_aJG3cdk5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_ZaSducp6, 0, m, &cIf_ZaSducp6_sendMessage);
}

void Heavy_Echomatica_1_3_1::cPack_OGTfYUht_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_VE90g0Wg_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica_1_3_1::cMsg_jZKq2HCS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_gJCRY3JZ_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_gJCRY3JZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SSHIxfMd, HV_BINOP_MULTIPLY, 1, m, &cBinop_SSHIxfMd_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_9RsFRg0J, HV_BINOP_MULTIPLY, 1, m, &cBinop_9RsFRg0J_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSwitchcase_0m1Gg3Xt_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cMsg_BiOayOkR_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_BiOayOkR_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kRgGrpVp_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica_1_3_1::cDelay_UKCqRkUk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_UKCqRkUk, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_UKCqRkUk, 0, m, &cDelay_UKCqRkUk_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_j6w9iN3z, 0, m, &cVar_j6w9iN3z_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_kRgGrpVp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BiOayOkR_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_UKCqRkUk, 0, m, &cDelay_UKCqRkUk_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_j6w9iN3z, 0, m, &cVar_j6w9iN3z_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_UuUbQwgZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_jvygbuB1_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_jvygbuB1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_eqgHvrDy_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_XmWoZFeq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8GCKPnaR, HV_BINOP_MULTIPLY, 0, m, &cBinop_8GCKPnaR_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_BiOayOkR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_UKCqRkUk, 0, m, &cDelay_UKCqRkUk_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_6vy1cL2C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_UKCqRkUk, 2, m, &cDelay_UKCqRkUk_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_eqgHvrDy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8GCKPnaR, HV_BINOP_MULTIPLY, 1, m, &cBinop_8GCKPnaR_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_8GCKPnaR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_6vy1cL2C_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_j6w9iN3z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8iRzXtTe, HV_BINOP_SUBTRACT, 0, m, &cBinop_8iRzXtTe_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_AyvsfE0I_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSwitchcase_C1imogKS_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_alHyd06p_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BpRIK540_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica_1_3_1::cCast_alHyd06p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JqJ0lkkX, 0, m, &cVar_JqJ0lkkX_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_BpRIK540_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jdEff9TD_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BKLmpMys_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSwitchcase_VE90g0Wg_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_LttVg3v3, 0, m, &cSlice_LttVg3v3_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ZXIk42A1, 0, m, &cSlice_ZXIk42A1_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_p22iw2Gf_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_67bEC3kp, 0, m, &cSlice_67bEC3kp_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_FkRYrc59, 0, m, &cSlice_FkRYrc59_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_g5Q1C1eK_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_U1tey3Om_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica_1_3_1::cSlice_LttVg3v3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_EWkQaXQW_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_EWkQaXQW_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_ZXIk42A1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_i6u3U45x_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XjYJPuUX_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_i6u3U45x_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XjYJPuUX_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cVar_84QcgxKe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TXlAcvfr_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_CUNddsNp_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_f0vhqut9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_lDZrS9xN_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica_1_3_1::cSwitchcase_lDZrS9xN_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EtmfA5Cg_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_SSHIxfMd, HV_BINOP_MULTIPLY, 0, m, &cBinop_SSHIxfMd_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_vmOWr0NK, HV_BINOP_DIVIDE, 1, m, &cBinop_vmOWr0NK_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_XmWoZFeq, 0, m, &cVar_XmWoZFeq_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica_1_3_1::cCast_EtmfA5Cg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LQnIhAHP_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cVar_niRmQEm8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UbUnCaDo, HV_BINOP_SUBTRACT, 1, m, &cBinop_UbUnCaDo_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_ZSzlSYY7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JqJ0lkkX, 0, m, &cVar_JqJ0lkkX_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_JqJ0lkkX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cmZWY24L, HV_BINOP_ADD, 0, m, &cBinop_cmZWY24L_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_wnOzDM2h, HV_BINOP_ADD, 0, m, &cBinop_wnOzDM2h_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kCLFxbn9_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gLJ4hfBZ_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSlice_67bEC3kp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TXlAcvfr_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_CUNddsNp_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cSlice_FkRYrc59_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_BdtaCgJy_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dtazcxfb_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cBinop_88TZCzOO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_j6w9iN3z, 1, m, &cVar_j6w9iN3z_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_9RsFRg0J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_88TZCzOO_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_SSHIxfMd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_UP5RmwdX_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_UP5RmwdX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8iRzXtTe, HV_BINOP_SUBTRACT, 1, m, &cBinop_8iRzXtTe_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_8iRzXtTe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_j6w9iN3z, 1, m, &cVar_j6w9iN3z_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_8RG8CoBK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_0m1Gg3Xt_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica_1_3_1::cMsg_X1POAEJW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_0m1Gg3Xt_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_wnOzDM2h, HV_BINOP_ADD, 1, m, &cBinop_wnOzDM2h_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_cmZWY24L, HV_BINOP_ADD, 1, m, &cBinop_cmZWY24L_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_AyvsfE0I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_C1imogKS_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica_1_3_1::cBinop_cmZWY24L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JqJ0lkkX, 1, m, &cVar_JqJ0lkkX_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_vmOWr0NK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RS54qNJ5, HV_BINOP_DIVIDE, 1, m, &cBinop_RS54qNJ5_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_RS54qNJ5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wnOzDM2h, HV_BINOP_ADD, 1, m, &cBinop_wnOzDM2h_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_cmZWY24L, HV_BINOP_ADD, 1, m, &cBinop_cmZWY24L_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_CUNddsNp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vmOWr0NK, HV_BINOP_DIVIDE, 0, m, &cBinop_vmOWr0NK_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_TXlAcvfr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9RsFRg0J, HV_BINOP_MULTIPLY, 0, m, &cBinop_9RsFRg0J_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_BdtaCgJy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ZSzlSYY7, 1, m, &cVar_ZSzlSYY7_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_dtazcxfb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UbUnCaDo, HV_BINOP_SUBTRACT, 0, m, &cBinop_UbUnCaDo_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_BKLmpMys_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ZSzlSYY7, 0, m, &cVar_ZSzlSYY7_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_jdEff9TD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_X1POAEJW_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cBinop_wnOzDM2h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_niRmQEm8, 0, m, &cVar_niRmQEm8_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_EWkQaXQW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_0m1Gg3Xt_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica_1_3_1::cMsg_UIwDvZJ1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_84QcgxKe, 1, m, &cVar_84QcgxKe_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_LQnIhAHP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_SSHIxfMd, HV_BINOP_MULTIPLY, 0, m, &cBinop_SSHIxfMd_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_vmOWr0NK, HV_BINOP_DIVIDE, 1, m, &cBinop_vmOWr0NK_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_XmWoZFeq, 0, m, &cVar_XmWoZFeq_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_XjYJPuUX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YpPBTZ8L_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_wnOzDM2h, HV_BINOP_ADD, 0, m, &cBinop_wnOzDM2h_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_JqJ0lkkX, 1, m, &cVar_JqJ0lkkX_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_i6u3U45x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EWkQaXQW_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cBinop_UbUnCaDo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RS54qNJ5, HV_BINOP_DIVIDE, 0, m, &cBinop_RS54qNJ5_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_YpPBTZ8L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_X1POAEJW_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_U1tey3Om_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_UIwDvZJ1_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_g5Q1C1eK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8RG8CoBK_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_p22iw2Gf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_84QcgxKe, 0, m, &cVar_84QcgxKe_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_KPywm9jg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uXViedwA, HV_BINOP_MULTIPLY, 0, m, &cBinop_uXViedwA_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_h41KdUsN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iEr6X7DA, HV_BINOP_MULTIPLY, 0, m, &cBinop_iEr6X7DA_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_y0MupXgE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FIZwblvr, HV_BINOP_MULTIPLY, 0, m, &cBinop_FIZwblvr_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_xtYM98iV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7UfqoknL, HV_BINOP_MULTIPLY, 0, m, &cBinop_7UfqoknL_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_cUEaprgS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9iXyz8Ng, HV_BINOP_MULTIPLY, 0, m, &cBinop_9iXyz8Ng_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_00PELqc1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2XXKzlBH, HV_BINOP_MULTIPLY, 0, m, &cBinop_2XXKzlBH_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSwitchcase_kcCeEDZo_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IKkbkEz1_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tg0DchAp_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica_1_3_1::cCast_IKkbkEz1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WhWME3PR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RubngHKf_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_q4CtDe0R_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_tg0DchAp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YhekmqZU_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rLUtF050_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_c7AHV7PQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kxS5ePbJ_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_0exb7OEZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_8WfCVJPy_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_8WfCVJPy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_mYxKbELb_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_cYS5olPw_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_V4wR91BC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_LKf0OcHw_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_r3vw0gY0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Z9q4yRXb_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_Z9q4yRXb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FUS7WJbU, HV_BINOP_DIVIDE, 1, m, &cBinop_FUS7WJbU_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_mYxKbELb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_mC5bqU28_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_mC5bqU28_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_5uvYOJM2, m);
}

void Heavy_Echomatica_1_3_1::cMsg_z8IFm4uj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Fpy1ugJh_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_Fpy1ugJh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_0exb7OEZ_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_cYS5olPw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_nJJ4ILHL, m);
}

void Heavy_Echomatica_1_3_1::cBinop_LKf0OcHw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_bX7aih84_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_bX7aih84_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FUS7WJbU, HV_BINOP_DIVIDE, 0, m, &cBinop_FUS7WJbU_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_FUS7WJbU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_z8IFm4uj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cVar_ADvCG4Qf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pIorOmme, HV_BINOP_DIVIDE, 0, m, &cBinop_pIorOmme_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_OBYhsDmG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IExDdY5H, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_IExDdY5H_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_CvKOSfo1, 0, m, &cIf_CvKOSfo1_sendMessage);
}

void Heavy_Echomatica_1_3_1::sEnv_IBsEIK8M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_4llH0iXi_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_n8ygCl8T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_YQRVr4sb_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_YQRVr4sb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JZVE08XW_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ATB7fie8_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_ATB7fie8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qQm4OiTF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_JZVE08XW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pEcz7Z9s, HV_BINOP_POW, 1, m, &cBinop_pEcz7Z9s_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_qQm4OiTF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_pEcz7Z9s, HV_BINOP_POW, 0, m, &cBinop_pEcz7Z9s_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_pEcz7Z9s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_gOsOiAgy_sendMessage);
}

void Heavy_Echomatica_1_3_1::cIf_CvKOSfo1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_n8ygCl8T, HV_BINOP_SUBTRACT, 0, m, &cBinop_n8ygCl8T_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_mKuLUo25, HV_BINOP_SUBTRACT, 0, m, &cBinop_mKuLUo25_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cBinop_IExDdY5H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_CvKOSfo1, 1, m, &cIf_CvKOSfo1_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_s4rFDq9J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7v8R9PBP_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_u8jr12eV_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yxX2xrqg_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_ZQSXxfYd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kiCmQm17_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SXlmWQhI_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSwitchcase_kGSfepkW_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_XdLLMEkd, 0, m, &cSlice_XdLLMEkd_sendMessage);
      break;
    }
    default: {
      cSwitchcase_54ArwVmG_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica_1_3_1::cSlice_XdLLMEkd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_KnSGZAWp_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_KnSGZAWp_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cVar_T43VsInE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_KnSGZAWp_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_KnSGZAWp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_DHZDG0oc_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSwitchcase_54ArwVmG_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_jeF8A55i, 0, m, &cSlice_jeF8A55i_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica_1_3_1::cSlice_jeF8A55i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_N3nIL1Sf_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_N3nIL1Sf_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cVar_6DMDfZoY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_N3nIL1Sf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_N3nIL1Sf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_tq5ydBB0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_kiCmQm17_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pIorOmme, HV_BINOP_DIVIDE, 1, m, &cBinop_pIorOmme_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_SXlmWQhI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ADvCG4Qf, 0, m, &cVar_ADvCG4Qf_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_pIorOmme_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JWmyN2IH, HV_BINOP_ADD, 0, m, &cBinop_JWmyN2IH_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_mKuLUo25_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ADvCG4Qf, 0, m, &cVar_ADvCG4Qf_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_u8jr12eV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IExDdY5H, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_IExDdY5H_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_yxX2xrqg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OBYhsDmG, 0, m, &cVar_OBYhsDmG_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_7v8R9PBP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZcnaNko1_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZZX6VoHi_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_JWmyN2IH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_n8ygCl8T, HV_BINOP_SUBTRACT, 0, m, &cBinop_n8ygCl8T_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_pR9RAtdA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ZQSXxfYd, 0, m, &cVar_ZQSXxfYd_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_YNU7nYhj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_s4rFDq9J, 0, m, &cVar_s4rFDq9J_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_GecHU8mT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_n8ygCl8T, HV_BINOP_SUBTRACT, 1, m, &cBinop_n8ygCl8T_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_BINYE1EC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OBYhsDmG, 0, m, &cVar_OBYhsDmG_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_gOsOiAgy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dsHmWyPq_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_ZcnaNko1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JWmyN2IH, HV_BINOP_ADD, 1, m, &cBinop_JWmyN2IH_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_ZZX6VoHi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mKuLUo25, HV_BINOP_SUBTRACT, 1, m, &cBinop_mKuLUo25_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_4llH0iXi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GecHU8mT_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_BINYE1EC_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_dsHmWyPq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_oVN7e5pg, 0, m, NULL);
}

void Heavy_Echomatica_1_3_1::cBinop_TnbK0GN9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_BtZH6XB9_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_BtZH6XB9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_grWSvPHd_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_RJthLVez_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_CZMo5qJr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_1ECoMS5N_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_pwjiHUSk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_F6XLTWKd_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_F6XLTWKd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3x67Rj2v, HV_BINOP_DIVIDE, 1, m, &cBinop_3x67Rj2v_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_grWSvPHd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_SHHe7oS4_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_SHHe7oS4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_emBiY9Do, m);
}

void Heavy_Echomatica_1_3_1::cMsg_2KUXHTpk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Hsa89XAh_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_Hsa89XAh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_TnbK0GN9_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_RJthLVez_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_zo689zNi, m);
}

void Heavy_Echomatica_1_3_1::cBinop_1ECoMS5N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_OJ2uw1cf_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_OJ2uw1cf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3x67Rj2v, HV_BINOP_DIVIDE, 0, m, &cBinop_3x67Rj2v_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_3x67Rj2v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2KUXHTpk_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cVar_wndoKVBX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tW033KxR, HV_BINOP_DIVIDE, 0, m, &cBinop_tW033KxR_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_VOXlkJTO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YyU2geGZ, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_YyU2geGZ_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_oIkSa7cN, 0, m, &cIf_oIkSa7cN_sendMessage);
}

void Heavy_Echomatica_1_3_1::sEnv_ZlitHNSW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_vmxGiSIa_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_SbIWz1kq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_4bbvm4Na_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_4bbvm4Na_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hkeRGQz2_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LeylM3Dj_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_LeylM3Dj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mTd4locf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_hkeRGQz2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_b3lVXixd, HV_BINOP_POW, 1, m, &cBinop_b3lVXixd_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_mTd4locf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_b3lVXixd, HV_BINOP_POW, 0, m, &cBinop_b3lVXixd_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_b3lVXixd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_DLhKAI65_sendMessage);
}

void Heavy_Echomatica_1_3_1::cIf_oIkSa7cN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_SbIWz1kq, HV_BINOP_SUBTRACT, 0, m, &cBinop_SbIWz1kq_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_yEAFfjlo, HV_BINOP_SUBTRACT, 0, m, &cBinop_yEAFfjlo_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cBinop_YyU2geGZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_oIkSa7cN, 1, m, &cIf_oIkSa7cN_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_6Ex7VlqK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_EDJDAF84_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_n5Kt6QCp_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pqFtpIEI_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_sIbB3e2O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wTdt9TEg_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BszZG6ZW_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSwitchcase_NGx9eBA9_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_sYhO0qG0, 0, m, &cSlice_sYhO0qG0_sendMessage);
      break;
    }
    default: {
      cSwitchcase_FmkRkcYp_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica_1_3_1::cSlice_sYhO0qG0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_b28NF9ML_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_b28NF9ML_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cVar_2aWZRzFk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_b28NF9ML_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_b28NF9ML_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_1elZY9jV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSwitchcase_FmkRkcYp_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_jEBYZ3Bl, 0, m, &cSlice_jEBYZ3Bl_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica_1_3_1::cSlice_jEBYZ3Bl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_5jDVGjKv_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_5jDVGjKv_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica_1_3_1::cVar_gbKTo76x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_5jDVGjKv_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_5jDVGjKv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_q7jNVADQ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_BszZG6ZW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wndoKVBX, 0, m, &cVar_wndoKVBX_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_wTdt9TEg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tW033KxR, HV_BINOP_DIVIDE, 1, m, &cBinop_tW033KxR_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_tW033KxR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gSSjpTk6, HV_BINOP_ADD, 0, m, &cBinop_gSSjpTk6_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_yEAFfjlo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wndoKVBX, 0, m, &cVar_wndoKVBX_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_n5Kt6QCp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YyU2geGZ, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_YyU2geGZ_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_EDJDAF84_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_smSNpAWZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2SCePDpg_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_pqFtpIEI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VOXlkJTO, 0, m, &cVar_VOXlkJTO_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_gSSjpTk6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SbIWz1kq, HV_BINOP_SUBTRACT, 0, m, &cBinop_SbIWz1kq_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_2rdThhnC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_sIbB3e2O, 0, m, &cVar_sIbB3e2O_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_B9Ki6Xq6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6Ex7VlqK, 0, m, &cVar_6Ex7VlqK_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_1Da1KGo4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VOXlkJTO, 0, m, &cVar_VOXlkJTO_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_FGz6mmH2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SbIWz1kq, HV_BINOP_SUBTRACT, 1, m, &cBinop_SbIWz1kq_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_DLhKAI65_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_UsTbErhy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_smSNpAWZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gSSjpTk6, HV_BINOP_ADD, 1, m, &cBinop_gSSjpTk6_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_2SCePDpg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yEAFfjlo, HV_BINOP_SUBTRACT, 1, m, &cBinop_yEAFfjlo_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_vmxGiSIa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FGz6mmH2_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1Da1KGo4_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_UsTbErhy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_2lYXWxaQ, 0, m, NULL);
}

void Heavy_Echomatica_1_3_1::cVar_0hLjw0dx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OkAfvZfx, HV_BINOP_MULTIPLY, 0, m, &cBinop_OkAfvZfx_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_tWPBlKCI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_FF5thIAP_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_FF5thIAP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Mi4o5QN9_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cBinop_OkAfvZfx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_XSjdUYkj_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_MmJNdKiX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OkAfvZfx, HV_BINOP_MULTIPLY, 1, m, &cBinop_OkAfvZfx_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_Mi4o5QN9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_MmJNdKiX_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_XSjdUYkj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_PY0HFV2X_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_PY0HFV2X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_FLZlOztH_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_VDoi2do4, m);
}

void Heavy_Echomatica_1_3_1::cBinop_FLZlOztH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_8Rog4paB, m);
}

void Heavy_Echomatica_1_3_1::cVar_Uj84oJTF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Rd1DYuEH, HV_BINOP_MULTIPLY, 0, m, &cBinop_Rd1DYuEH_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_Woqa6Hp9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_f5TcV054_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_f5TcV054_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sP2GVrTX_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cBinop_Rd1DYuEH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_YjJksz6Z_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_625X2fyB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Rd1DYuEH, HV_BINOP_MULTIPLY, 1, m, &cBinop_Rd1DYuEH_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_sP2GVrTX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_625X2fyB_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_YjJksz6Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_1couoMMy_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_1couoMMy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_yk60A52o_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_NTmqvcoM, m);
}

void Heavy_Echomatica_1_3_1::cBinop_yk60A52o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Vaaqnr6c, m);
}

void Heavy_Echomatica_1_3_1::cBinop_QjK0X3C4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_ZybLQZuD_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_ZybLQZuD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_eddd9hnX_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_GGLJOWmo_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_KpApzz5A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_VaCytU79_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_PgYXm3ow_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_S2soH62B_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_S2soH62B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tceichcy, HV_BINOP_DIVIDE, 1, m, &cBinop_tceichcy_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_eddd9hnX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_Q30h4s4h_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_Q30h4s4h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_whHqkSsm, m);
}

void Heavy_Echomatica_1_3_1::cMsg_y7GVvzX6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_9wtARumV_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_9wtARumV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_QjK0X3C4_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_GGLJOWmo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Ntw1D20l, m);
}

void Heavy_Echomatica_1_3_1::cBinop_VaCytU79_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_Q7dLNXNi_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_Q7dLNXNi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tceichcy, HV_BINOP_DIVIDE, 0, m, &cBinop_tceichcy_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_tceichcy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_y7GVvzX6_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cBinop_pSN7HBoL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_mZKokXiQ_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_mZKokXiQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Y5JUEfnB_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_h4dIw0KX_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_o8qfkPNy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_gfojzlZW_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_ThIXFB21_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_JZ264r4q_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSystem_JZ264r4q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5KodpnGH, HV_BINOP_DIVIDE, 1, m, &cBinop_5KodpnGH_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_Y5JUEfnB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_ktDDinKK_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_ktDDinKK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ek8zFHfj, m);
}

void Heavy_Echomatica_1_3_1::cMsg_EIBfetR7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_c0MonCNZ_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_c0MonCNZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_pSN7HBoL_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_h4dIw0KX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_6YJdXVHE, m);
}

void Heavy_Echomatica_1_3_1::cBinop_gfojzlZW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_IKfaV9HL_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_IKfaV9HL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5KodpnGH, HV_BINOP_DIVIDE, 0, m, &cBinop_5KodpnGH_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_5KodpnGH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EIBfetR7_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cVar_TOzzNEgb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_q8ir5V4z, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Tu6Uws36, m);
}

void Heavy_Echomatica_1_3_1::cVar_isQGAHSG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DVty0KjR, HV_BINOP_MULTIPLY, 0, m, &cBinop_DVty0KjR_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_4pkYxBIe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_OGTfYUht, 0, m, &cPack_OGTfYUht_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_8I6zgg6q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_03MT59SQ, 0, m, &cPack_03MT59SQ_sendMessage);
}

void Heavy_Echomatica_1_3_1::cVar_MAXOQGvU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_VQTv1ANF_sendMessage);
  cSwitchcase_kcCeEDZo_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica_1_3_1::cBinop_VQTv1ANF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_MAXOQGvU, 1, m, &cVar_MAXOQGvU_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSend_okGMtkhA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_VdsYO38r_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_95yg5ngz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_STZfkAq1_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_wfww6CNW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_9alZcK3G_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_JxIAhU0q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_tGQS3CTo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_6qg77OI8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_xbCO1D28_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_XpNMX0l2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ygLAx2kO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_J0O3HNqx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_5KsyZEr0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_m5pTfnTJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_qBfISDJs_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_LlQ6L0Vj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_h5KKyTyj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_1yh9Vpnl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_LjOZli2J_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_CUJ6Kr1Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_j7xH127m_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_0bXIzMcf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ws9nZjb4_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_PlAZkzbT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_4Q8luzX6_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_l6mp8VHE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_nXuDZfmM_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_buXJa8Nx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_g0nfVyzw_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_nLOXq3Vt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_gtcuLlGY_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_LWJeiUpT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_S7p8p0fc_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_NR6IUK3U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_9wY3mRod_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_1Z0Trjgu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ELargh30_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_BFo8smSC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_QYjO6QMF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_lUJ0BLbG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_LCRQdkpv_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_BY4O0n5i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Tl9qennV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_HojHUcba_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_5KibeDKw_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_OxF9AxgF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_umEBV3mO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_OdWNd2BL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ILuYKF79_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_snxXax5u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_7mS41bCk_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_yXSNMFXZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_KhDN39Qm_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cSend_1tYuD03W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_abbnt8L2_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cMsg_sWfkVWM1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.01f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XMFc5idn, 0, m, &cSlice_XMFc5idn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4HA5GdHh, 0, m, &cSlice_4HA5GdHh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fty59Dom, 0, m, &cSlice_Fty59Dom_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_u8tg5rYC, 0, m, &cSlice_u8tg5rYC_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_YmVNKb52_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sWfkVWM1_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_fIqsBX6u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uPnWOrHt_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cMsg_uPnWOrHt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.2f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XMFc5idn, 0, m, &cSlice_XMFc5idn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4HA5GdHh, 0, m, &cSlice_4HA5GdHh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fty59Dom, 0, m, &cSlice_Fty59Dom_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_u8tg5rYC, 0, m, &cSlice_u8tg5rYC_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_D1iAJr10_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_K8N9EI8Y, HV_BINOP_MULTIPLY, 1, m, &cBinop_K8N9EI8Y_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_K8N9EI8Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_1HUWyHQ9_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cMsg_uGyCZEBq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_A88XMt4t, 0, m, &cVar_A88XMt4t_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_8JN5hsFf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_ZaSducp6, 1, m, &cIf_ZaSducp6_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_wlOHxMZn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_ZaSducp6, 1, m, &cIf_ZaSducp6_sendMessage);
}

void Heavy_Echomatica_1_3_1::cSend_1HUWyHQ9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_2Ss8mJFl_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cBinop_uXViedwA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_2GpLnE6v, 0, m, &cPack_2GpLnE6v_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_iEr6X7DA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_A8pAIw1o, 0, m, &cPack_A8pAIw1o_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_FIZwblvr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Z7jEZ2ic, 0, m, &cPack_Z7jEZ2ic_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_7UfqoknL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_BQyw2Al9, 0, m, &cPack_BQyw2Al9_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_9iXyz8Ng_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_LLZFrpAp, 0, m, &cPack_LLZFrpAp_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_2XXKzlBH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_omf4143H, 0, m, &cPack_omf4143H_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_UtE2Crsw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_KPywm9jg, 0, m, &cVar_KPywm9jg_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_IW3kGlU1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uXViedwA, HV_BINOP_MULTIPLY, 1, m, &cBinop_uXViedwA_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_RHY4uX4J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2XXKzlBH, HV_BINOP_MULTIPLY, 1, m, &cBinop_2XXKzlBH_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_9zN2EN4z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_00PELqc1, 0, m, &cVar_00PELqc1_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_NBtk7r1g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cUEaprgS, 0, m, &cVar_cUEaprgS_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_us2J20cg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9iXyz8Ng, HV_BINOP_MULTIPLY, 1, m, &cBinop_9iXyz8Ng_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_Oyk1Udh0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xtYM98iV, 0, m, &cVar_xtYM98iV_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_aIk5U70C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7UfqoknL, HV_BINOP_MULTIPLY, 1, m, &cBinop_7UfqoknL_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_PVLHLKWr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FIZwblvr, HV_BINOP_MULTIPLY, 1, m, &cBinop_FIZwblvr_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_TIjWUpdY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_y0MupXgE, 0, m, &cVar_y0MupXgE_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_uyqlLaPD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iEr6X7DA, HV_BINOP_MULTIPLY, 1, m, &cBinop_iEr6X7DA_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_IKpBITHl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_h41KdUsN, 0, m, &cVar_h41KdUsN_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_3SdOvssF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wZjx22j3_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PrjuTZX2_sendMessage);
}

void Heavy_Echomatica_1_3_1::cMsg_Sx0mSW0U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.5f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_3SdOvssF, HV_BINOP_MULTIPLY, 1, m, &cBinop_3SdOvssF_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_gLJ4hfBZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3SdOvssF, HV_BINOP_MULTIPLY, 0, m, &cBinop_3SdOvssF_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_kCLFxbn9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Sx0mSW0U_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cMsg_miKyZGAr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_X7rl3nEp, HV_BINOP_ADD, 1, m, &cBinop_X7rl3nEp_sendMessage);
}

void Heavy_Echomatica_1_3_1::cBinop_X7rl3nEp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_aJG3cdk5, 0, m, &cVar_aJG3cdk5_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_PrjuTZX2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_X7rl3nEp, HV_BINOP_ADD, 0, m, &cBinop_X7rl3nEp_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_wZjx22j3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_miKyZGAr_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_q4CtDe0R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uGyCZEBq_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_WhWME3PR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wlOHxMZn_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_RubngHKf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_D1iAJr10_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_kxS5ePbJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_K8N9EI8Y, HV_BINOP_MULTIPLY, 0, m, &cBinop_K8N9EI8Y_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_rLUtF050_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_D1iAJr10_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cCast_c7AHV7PQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_aJG3cdk5, 0, m, &cVar_aJG3cdk5_sendMessage);
}

void Heavy_Echomatica_1_3_1::cCast_YhekmqZU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8JN5hsFf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cBinop_DVty0KjR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_L1TO5NaH, 0, m, &cPack_L1TO5NaH_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_akonfRZg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_MhI4ySMw, 0, m, &cVar_MhI4ySMw_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ZY9EnNCc, 0, m, &cVar_ZY9EnNCc_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_T43VsInE, 0, m, &cVar_T43VsInE_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_6DMDfZoY, 0, m, &cVar_6DMDfZoY_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_2aWZRzFk, 0, m, &cVar_2aWZRzFk_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_gbKTo76x, 0, m, &cVar_gbKTo76x_sendMessage);
  cMsg_QniqSz3w_sendMessage(_c, 0, m);
  cMsg_bji5ogqG_sendMessage(_c, 0, m);
  cMsg_OgEmiM1H_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Pd62vqHs, 0, m, &cVar_Pd62vqHs_sendMessage);
  cMsg_C1I04KHS_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_zy9PkJTR, 0, m, &cVar_zy9PkJTR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HF9I9QTn_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MRI3SPpb_sendMessage);
  cMsg_UuUbQwgZ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_XmWoZFeq, 0, m, &cVar_XmWoZFeq_sendMessage);
  cMsg_r3vw0gY0_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_V4wR91BC, 0, m, &cVar_V4wR91BC_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pR9RAtdA_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YNU7nYhj_sendMessage);
  cMsg_pwjiHUSk_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_CZMo5qJr, 0, m, &cVar_CZMo5qJr_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2rdThhnC_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_B9Ki6Xq6_sendMessage);
  cMsg_tWPBlKCI_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_0hLjw0dx, 0, m, &cVar_0hLjw0dx_sendMessage);
  cMsg_Woqa6Hp9_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Uj84oJTF, 0, m, &cVar_Uj84oJTF_sendMessage);
  cMsg_yqBnF9pk_sendMessage(_c, 0, m);
  cMsg_AdpmeTxE_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_fFxQkaHz, 0, m, &cVar_fFxQkaHz_sendMessage);
  cMsg_Jp96MmWY_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_KcYPlb8f, 0, m, &cVar_KcYPlb8f_sendMessage);
  cMsg_7cw3VWVl_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_MPzafuAU, 0, m, &cVar_MPzafuAU_sendMessage);
  cMsg_NeJkkBd6_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_BVDF7U2x, 0, m, &cVar_BVDF7U2x_sendMessage);
  cMsg_l9xiHB2l_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_szn71jgb, 0, m, &cVar_szn71jgb_sendMessage);
  cMsg_Oi3HFj4r_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_pWlVsMQN, 0, m, &cVar_pWlVsMQN_sendMessage);
  cMsg_H4zerIaw_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_XNFvoPrV, 0, m, &cVar_XNFvoPrV_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_W2bcHkIx, 0, m, &cVar_W2bcHkIx_sendMessage);
  cMsg_6TXREDs3_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_PMdcW90m, 0, m, &cVar_PMdcW90m_sendMessage);
  cMsg_t1tmR1As_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_1jo1ienq, 0, m, &cVar_1jo1ienq_sendMessage);
  cMsg_m6X38VpE_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_5IzQe5UZ, 0, m, &cVar_5IzQe5UZ_sendMessage);
  cMsg_J9rPt5SG_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_atgkxsWa, 0, m, &cVar_atgkxsWa_sendMessage);
  cMsg_jZKq2HCS_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_niRmQEm8, 0, m, &cVar_niRmQEm8_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_f0vhqut9, 0, m, &cVar_f0vhqut9_sendMessage);
  cMsg_PgYXm3ow_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_KpApzz5A, 0, m, &cVar_KpApzz5A_sendMessage);
  cMsg_ThIXFB21_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_o8qfkPNy, 0, m, &cVar_o8qfkPNy_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_bkYIl2Fk, 0, m, &cVar_bkYIl2Fk_sendMessage);
  cMsg_Te4il0hU_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_R6AZ29So, 0, m, &cVar_R6AZ29So_sendMessage);
  cMsg_5XThlHSb_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_MVXONMyA, 0, m, &cVar_MVXONMyA_sendMessage);
  cMsg_EHJVVAtj_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ekfHhPXN, 0, m, &cVar_ekfHhPXN_sendMessage);
  cMsg_2ASkYaEy_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_R9m5ZzTi, 0, m, &cVar_R9m5ZzTi_sendMessage);
  cMsg_Ss3u78Dh_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Dyr6ZFL3, 0, m, &cVar_Dyr6ZFL3_sendMessage);
  cMsg_1PGON56B_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_OPCsHc9c, 0, m, &cVar_OPCsHc9c_sendMessage);
  cMsg_FjNg2vgk_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_VIB7pSNr, 0, m, &cVar_VIB7pSNr_sendMessage);
  cMsg_SLCqz4zY_sendMessage(_c, 0, m);
}

void Heavy_Echomatica_1_3_1::cReceive_18hnOfVV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_xCrxdivK_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica_1_3_1::cReceive_VdsYO38r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_h41KdUsN, 0, m, &cVar_h41KdUsN_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_STZfkAq1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_y0MupXgE, 0, m, &cVar_y0MupXgE_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_9alZcK3G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xtYM98iV, 0, m, &cVar_xtYM98iV_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_tGQS3CTo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cUEaprgS, 0, m, &cVar_cUEaprgS_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_xbCO1D28_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_00PELqc1, 0, m, &cVar_00PELqc1_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_ygLAx2kO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_KPywm9jg, 0, m, &cVar_KPywm9jg_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_5KsyZEr0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_iOAGCDNI, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_2ItTX49E, 0, m, &cVar_2ItTX49E_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_qBfISDJs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_36nvlRmD, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_EjZy7xzw, 0, m, &cVar_EjZy7xzw_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_h5KKyTyj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_AVTRLFwO, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_jeO5UEyT, 0, m, &cVar_jeO5UEyT_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_LjOZli2J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_PaSJzYai, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_yoDYiFqr, 0, m, &cVar_yoDYiFqr_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_j7xH127m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_fGE7PF2Q, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_ejzW8HGu, 0, m, &cVar_ejzW8HGu_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_ws9nZjb4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_egTO6PDI, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_t2OXRHEu, 0, m, &cVar_t2OXRHEu_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_4Q8luzX6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_ncc8mYHw, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_dY5LqiiQ, 0, m, &cVar_dY5LqiiQ_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_nXuDZfmM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Neod7gJa, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_7rVWhU9r, 0, m, &cVar_7rVWhU9r_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_g0nfVyzw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_YCAOSTuI, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_6a5YXyay, 0, m, &cVar_6a5YXyay_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_gtcuLlGY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_4DuNBioi, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_sjyquPsE, 0, m, &cVar_sjyquPsE_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_S7p8p0fc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_VgEkHRqA, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_XhQXVNkr, 0, m, &cVar_XhQXVNkr_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_9wY3mRod_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_gaHIZvAT, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_pevQ5KcR, 0, m, &cVar_pevQ5KcR_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_2Ss8mJFl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_uyqlLaPD_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IKpBITHl_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PVLHLKWr_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TIjWUpdY_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_aIk5U70C_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Oyk1Udh0_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_us2J20cg_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NBtk7r1g_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_RHY4uX4J_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9zN2EN4z_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_IW3kGlU1_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UtE2Crsw_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_ELargh30_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_0UUeEyWw_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica_1_3_1::cReceive_QYjO6QMF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_KcYPlb8f, 0, m, &cVar_KcYPlb8f_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_LCRQdkpv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_MPzafuAU, 0, m, &cVar_MPzafuAU_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_Tl9qennV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BVDF7U2x, 0, m, &cVar_BVDF7U2x_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_5KibeDKw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_szn71jgb, 0, m, &cVar_szn71jgb_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_umEBV3mO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_pWlVsMQN, 0, m, &cVar_pWlVsMQN_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_ILuYKF79_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_XNFvoPrV, 0, m, &cVar_XNFvoPrV_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_7mS41bCk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_3wqLbyS2, m);
}

void Heavy_Echomatica_1_3_1::cReceive_KhDN39Qm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_PMdcW90m, 0, m, &cVar_PMdcW90m_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_abbnt8L2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_W2bcHkIx, 0, m, &cVar_W2bcHkIx_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hW0ddyCo_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_Ic7Dm8xS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fN1ZdQmk, 0, m, &cVar_fN1ZdQmk_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_WXD6h4DA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_TrzV77oi_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica_1_3_1::cReceive_hSiGj0MU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GXf2j2IJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oilXCNGc_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_jMVzRemz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_IsPJUbl3_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_A956ASM4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jCi7GBh1_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_pWJWemrO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_03MT59SQ, 0, m, &cPack_03MT59SQ_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_uGaC6KtG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_q8ir5V4z, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Tu6Uws36, m);
}

void Heavy_Echomatica_1_3_1::cReceive_srHxPjXE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DVty0KjR, HV_BINOP_MULTIPLY, 0, m, &cBinop_DVty0KjR_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_Ny1hZf2f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_kcCeEDZo_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica_1_3_1::cReceive_7Il19VW5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_OGTfYUht, 0, m, &cPack_OGTfYUht_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_DHZDG0oc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kiCmQm17_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SXlmWQhI_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_tq5ydBB0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7v8R9PBP_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_u8jr12eV_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yxX2xrqg_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_1elZY9jV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wTdt9TEg_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BszZG6ZW_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_q7jNVADQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_EDJDAF84_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_n5Kt6QCp_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pqFtpIEI_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_NYq8EYDb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DVty0KjR, HV_BINOP_MULTIPLY, 1, m, &cBinop_DVty0KjR_sendMessage);
}

void Heavy_Echomatica_1_3_1::cReceive_9JKHKkrv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_uJm8NHPS, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_FLd83p1r, m);
}



/*
 * Code for expr~ implementation
 * Write out the generic implementation code
 */

 // per class code

 // per object code


/*
 * Context Process Implementation
 */

int Heavy_Echomatica_1_3_1::process(float **inputBuffers, float **outputBuffers, int n) {
  while (hLp_hasData(&inQueue)) {
    hv_uint32_t numBytes = 0;
    ReceiverMessagePair *p = reinterpret_cast<ReceiverMessagePair *>(hLp_getReadBuffer(&inQueue, &numBytes));
    hv_assert(numBytes >= sizeof(ReceiverMessagePair));
    scheduleMessageForReceiver(p->receiverHash, &p->msg);
    hLp_consume(&inQueue);
  }

  sendBangToReceiver(0xDD21C0EB); // send to __hv_bang~ on next cycle
  const int n4 = n & ~HV_N_SIMD_MASK; // ensure that the block size is a multiple of HV_N_SIMD

  // temporary signal vars
  hv_bufferf_t Bf0, Bf1, Bf2, Bf3, Bf4, Bf5, Bf6, Bf7, Bf8, Bf9, Bf10, Bf11, Bf12, Bf13, Bf14;
  hv_bufferi_t Bi0, Bi1;

  // input and output vars
  hv_bufferf_t O0, O1;
  hv_bufferf_t I0, I1;

  // declare and init the zero buffer
  hv_bufferf_t ZERO; __hv_zero_f(VOf(ZERO));

  hv_uint32_t nextBlock = blockStartTimestamp;
  for (int n = 0; n < n4; n += HV_N_SIMD) {

    // process all of the messages for this block
    nextBlock += HV_N_SIMD;
    while (mq_hasMessageBefore(&mq, nextBlock)) {
      MessageNode *const node = mq_peek(&mq);
      node->sendMessage(this, node->let, node->m);
      mq_pop(&mq);
    }

    // load input buffers
    __hv_load_f(inputBuffers[0]+n, VOf(I0));
    __hv_load_f(inputBuffers[1]+n, VOf(I1));

    // zero output buffers
    __hv_zero_f(VOf(O0));
    __hv_zero_f(VOf(O1));

    // process all signal functions
    __hv_varread_f(&sVarf_R1b5dFhN, VOf(Bf0));
    __hv_biquad_k_f(&sBiquad_k_2MEhJfs7, VIf(Bf0), VOf(Bf1));
    __hv_varread_f(&sVarf_3wqLbyS2, VOf(Bf2));
    __hv_varread_f(&sVarf_JojMskYK, VOf(Bf3));
    __hv_rpole_f(&sRPole_Z3i60TBs, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_XOys3I72, VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_PXr6wVtJ, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_LI2LK6ey, VOf(Bf0));
    __hv_rpole_f(&sRPole_Xy0ZHoIs, VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_imSCIc5B, VIf(Bf0), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_XjCVMNLL, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_atBp9DsE, VOf(Bf3));
    __hv_rpole_f(&sRPole_DIjSpNK0, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_yzuYsNZa, VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_wCRdP5Te, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_WT8mi0Q8, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_CqUsNcvq, VOf(Bf3));
    __hv_rpole_f(&sRPole_DyTBEliT, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_BvCQmcPc, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_yduYFTTK, VOf(Bf3));
    __hv_rpole_f(&sRPole_eYX1i5rd, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_nS7ObhDA, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_nhYo88d4, VOf(Bf3));
    __hv_rpole_f(&sRPole_nPtff6dN, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf1), VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_JIfGATmv, VOf(Bf2));
    __hv_varread_f(&sVarf_XeVI1A3d, VOf(Bf1));
    __hv_varread_f(&sVarf_bchMExFE, VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_CUloRpZr, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_U8Il5DjN, VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_VFMAqSUw, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_Wkcqn3bd, VOf(Bf2));
    __hv_rpole_f(&sRPole_WAD54lJH, VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_R6NEev6T, VIf(Bf2), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_gLgKfI0d, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_TRjOUDpb, VOf(Bf1));
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_lnspz86B, VOf(Bf2));
    __hv_rpole_f(&sRPole_TrBOmZnu, VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f);
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_yOKjABDc, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_eYOqMAnK, VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    sEnv_process(this, &sEnv_9kN2aNIz, VIf(Bf0), &sEnv_9kN2aNIz_sendMessage);
    __hv_line_f(&sLine_hu4SY6a2, VOf(Bf4));
    __hv_mul_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf0), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_min_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf4), -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f);
    __hv_max_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf4), VOf(Bf0));
    __hv_var_k_f(VOf(Bf5), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf5), VOf(Bf6));
    __hv_var_k_f(VOf(Bf7), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_fma_f(VIf(Bf0), VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_div_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 0.79f, 0.79f, 0.79f, 0.79f, 0.79f, 0.79f, 0.79f, 0.79f);
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_lsf54WSc, VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf2), VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f);
    __hv_min_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf5), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_yztMCvl3, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_ZwrXsh3s, VOf(Bf5));
    __hv_rpole_f(&sRPole_UfMACkEI, VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_tabwrite_f(&sTabwrite_lYqZnbOg, VIf(Bf5));
    __hv_phasor_k_f(&sPhasor_FYzcAaC8, VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_abs_f(VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf5), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf5));
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf2), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf4), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf1), VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf5), VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_aQDFN7Pq, VOf(Bf2));
    __hv_phasor_k_f(&sPhasor_gSDe9Aqa, VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_abs_f(VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf4), VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf6), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf7), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf1), VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf5), VIf(Bf6), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_QSd6EwK0, VOf(Bf6));
    __hv_mul_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf3), VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_0wrv5SYK, VIf(Bf6));
    __hv_line_f(&sLine_UkJ2yJpr, VOf(Bf6));
    __hv_varread_f(&sVarf_0wrv5SYK, VOf(Bf2));
    __hv_add_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_tabhead_f(&sTabhead_Hi0KCZ3R, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_QAokdLUk, VOf(Bf6));
    __hv_mul_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_QZsV0a0N, VOf(Bf2));
    __hv_min_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_QVZkhf4f, VOf(Bf2));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_r19aq14H, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_WbvuLsM4, VIi(Bi0), VOf(Bf2));
    __hv_sub_f(VIf(Bf4), VIf(Bf2), VOf(Bf4));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf4), VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_ncc8mYHw, VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_JIfGATmv, VIf(Bf3));
    __hv_line_f(&sLine_1d96uCmI, VOf(Bf3));
    __hv_varread_f(&sVarf_0wrv5SYK, VOf(Bf4));
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_tabhead_f(&sTabhead_gn22YINZ, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_gihkWbd7, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_d35nWb3c, VOf(Bf4));
    __hv_min_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_9K7oGpFq, VOf(Bf4));
    __hv_zero_f(VOf(Bf5));
    __hv_lt_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_cast_fi(VIf(Bf5), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_LfLYDFff, VIi(Bi1), VOf(Bf5));
    __hv_tabread_if(&sTabread_SmIG8Mb2, VIi(Bi0), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf5));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf5), VIf(Bf6), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_YCAOSTuI, VOf(Bf6));
    __hv_mul_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_XeVI1A3d, VIf(Bf6));
    __hv_line_f(&sLine_JRnl2POD, VOf(Bf6));
    __hv_varread_f(&sVarf_0wrv5SYK, VOf(Bf5));
    __hv_add_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_tabhead_f(&sTabhead_rv4To1cy, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_HtVMfOEy, VOf(Bf6));
    __hv_mul_f(VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_anPUzbUd, VOf(Bf5));
    __hv_min_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_mR9j5y5q, VOf(Bf5));
    __hv_zero_f(VOf(Bf7));
    __hv_lt_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_and_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_cast_fi(VIf(Bf7), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_zs9ObMum, VIi(Bi1), VOf(Bf7));
    __hv_tabread_if(&sTabread_a0ioulSz, VIi(Bi0), VOf(Bf5));
    __hv_sub_f(VIf(Bf7), VIf(Bf5), VOf(Bf7));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf7), VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_VgEkHRqA, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_bchMExFE, VIf(Bf3));
    __hv_line_f(&sLine_yAPGJXkc, VOf(Bf3));
    __hv_varread_f(&sVarf_0wrv5SYK, VOf(Bf7));
    __hv_add_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_tabhead_f(&sTabhead_Y2k639tU, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_ocDfyrU0, VOf(Bf3));
    __hv_mul_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_StiGe7l0, VOf(Bf7));
    __hv_min_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_gQWe44Uh, VOf(Bf7));
    __hv_zero_f(VOf(Bf1));
    __hv_lt_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_and_f(VIf(Bf7), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_cast_fi(VIf(Bf1), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_LBEuNycD, VIi(Bi1), VOf(Bf1));
    __hv_tabread_if(&sTabread_E3ySWvpc, VIi(Bi0), VOf(Bf7));
    __hv_sub_f(VIf(Bf1), VIf(Bf7), VOf(Bf1));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf1), VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_gaHIZvAT, VOf(Bf6));
    __hv_mul_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_CUloRpZr, VIf(Bf6));
    __hv_line_f(&sLine_0gAywUUl, VOf(Bf6));
    __hv_varread_f(&sVarf_0wrv5SYK, VOf(Bf1));
    __hv_add_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_tabhead_f(&sTabhead_lDQCfk66, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_Xn99z2Uk, VOf(Bf6));
    __hv_mul_f(VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_m1VshnCd, VOf(Bf1));
    __hv_min_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_X8U8KBGo, VOf(Bf1));
    __hv_zero_f(VOf(Bf0));
    __hv_lt_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_and_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_cast_fi(VIf(Bf0), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_k9FLfYnH, VIi(Bi1), VOf(Bf0));
    __hv_tabread_if(&sTabread_M1mtecMi, VIi(Bi0), VOf(Bf1));
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf0));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf0), VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_4DuNBioi, VOf(Bf3));
    __hv_mul_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_U8Il5DjN, VIf(Bf3));
    __hv_line_f(&sLine_Jm2TE1b2, VOf(Bf3));
    __hv_varread_f(&sVarf_0wrv5SYK, VOf(Bf0));
    __hv_add_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_tabhead_f(&sTabhead_A1W8lbJD, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_iUvNybFA, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_NDfvRXn5, VOf(Bf0));
    __hv_min_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_deYXT6vm, VOf(Bf0));
    __hv_zero_f(VOf(Bf8));
    __hv_lt_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_and_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_cast_fi(VIf(Bf8), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_mpXcyO10, VIi(Bi1), VOf(Bf8));
    __hv_tabread_if(&sTabread_kPGsUfzj, VIi(Bi0), VOf(Bf0));
    __hv_sub_f(VIf(Bf8), VIf(Bf0), VOf(Bf8));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf8), VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_Neod7gJa, VOf(Bf6));
    __hv_mul_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_VFMAqSUw, VIf(Bf6));
    sEnv_process(this, &sEnv_IBsEIK8M, VIf(I0), &sEnv_IBsEIK8M_sendMessage);
    __hv_line_f(&sLine_oVN7e5pg, VOf(Bf6));
    __hv_mul_f(VIf(I0), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf8), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf6), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_VDoi2do4, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_8Rog4paB, VOf(Bf6));
    __hv_rpole_f(&sRPole_rn7QXo5T, VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_nJJ4ILHL, VOf(Bf8));
    __hv_rpole_f(&sRPole_L8y8zIp3, VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_evP6cPYc, VIf(Bf8), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_5uvYOJM2, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    sEnv_process(this, &sEnv_ZlitHNSW, VIf(I1), &sEnv_ZlitHNSW_sendMessage);
    __hv_line_f(&sLine_2lYXWxaQ, VOf(Bf6));
    __hv_mul_f(VIf(I1), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf3), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_NTmqvcoM, VOf(Bf3));
    __hv_mul_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_Vaaqnr6c, VOf(Bf6));
    __hv_rpole_f(&sRPole_8ADCeAfQ, VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_zo689zNi, VOf(Bf3));
    __hv_rpole_f(&sRPole_LrhjAlcb, VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_pQHWN3u5, VIf(Bf3), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_emBiY9Do, VOf(Bf3));
    __hv_mul_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf8), VIf(Bf3), VOf(Bf6));
    __hv_varwrite_f(&sVarf_R1b5dFhN, VIf(Bf6));
    __hv_varread_f(&sVarf_q8ir5V4z, VOf(Bf6));
    __hv_mul_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_FLd83p1r, VOf(Bf3));
    __hv_line_f(&sLine_iOAGCDNI, VOf(Bf9));
    __hv_line_f(&sLine_36nvlRmD, VOf(Bf10));
    __hv_line_f(&sLine_AVTRLFwO, VOf(Bf11));
    __hv_line_f(&sLine_PaSJzYai, VOf(Bf12));
    __hv_line_f(&sLine_fGE7PF2Q, VOf(Bf13));
    __hv_line_f(&sLine_egTO6PDI, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf5), VIf(Bf13), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf1), VIf(Bf12), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf4), VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf0), VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf2), VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_SCP7MKV5, VOf(Bf9));
    __hv_rpole_f(&sRPole_fWqetvay, VIf(Bf14), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_TUTILxl1, VIf(Bf9), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_q4V2WQXb, VOf(Bf9));
    __hv_mul_f(VIf(Bf14), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf14), 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f);
    __hv_min_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf9), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf14), VIf(Bf9), VOf(Bf9));
    __hv_line_f(&sLine_NhDWBcIM, VOf(Bf14));
    __hv_mul_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_phasor_k_f(&sPhasor_n83LIrbr, VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_abs_f(VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf9), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf2), VOf(Bf9));
    __hv_mul_f(VIf(Bf2), VIf(Bf9), VOf(Bf10));
    __hv_mul_f(VIf(Bf10), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf0), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf11), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf10), VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf9), VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_var_k_f(VOf(Bf9), 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f);
    __hv_fma_f(VIf(Bf2), VIf(Bf0), VIf(Bf9), VOf(Bf9));
    __hv_tabhead_f(&sTabhead_ukkJxWto, VOf(Bf0));
    __hv_var_k_f_r(VOf(Bf2), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_lzsyeKO2, VOf(Bf0));
    __hv_mul_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_kVPV9ZSa, VOf(Bf9));
    __hv_min_f(VIf(Bf0), VIf(Bf9), VOf(Bf9));
    __hv_zero_f(VOf(Bf0));
    __hv_max_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf2));
    __hv_varread_f(&sVarf_ZGxbknCf, VOf(Bf9));
    __hv_zero_f(VOf(Bf11));
    __hv_lt_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_and_f(VIf(Bf9), VIf(Bf11), VOf(Bf11));
    __hv_add_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_cast_fi(VIf(Bf11), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_BxpkvpJs, VIi(Bi1), VOf(Bf11));
    __hv_tabread_if(&sTabread_ajT9SLyz, VIi(Bi0), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf11), VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf9), VIf(Bf2), VIf(Bf14), VOf(Bf2));
    __hv_varread_f(&sVarf_7zXAKQYY, VOf(Bf9));
    __hv_rpole_f(&sRPole_7Nlcvejr, VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_vOjnBuQ8, VIf(Bf9), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_vGD9WPZw, VOf(Bf9));
    __hv_mul_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_phasor_k_f(&sPhasor_g6YeZeSF, VOf(Bf2));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_abs_f(VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf2), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf11), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf2));
    __hv_mul_f(VIf(Bf11), VIf(Bf2), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf10), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf4), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf0), VIf(Bf4), VIf(Bf11), VOf(Bf11));
    __hv_fma_f(VIf(Bf2), VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf10), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_var_k_f(VOf(Bf2), 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f);
    __hv_fma_f(VIf(Bf11), VIf(Bf10), VIf(Bf2), VOf(Bf2));
    __hv_tabhead_f(&sTabhead_DghsG0R7, VOf(Bf10));
    __hv_var_k_f_r(VOf(Bf11), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_KMNjFBtD, VOf(Bf10));
    __hv_mul_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_pq3SnxO2, VOf(Bf2));
    __hv_min_f(VIf(Bf10), VIf(Bf2), VOf(Bf2));
    __hv_zero_f(VOf(Bf10));
    __hv_max_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf11), VIf(Bf10), VOf(Bf10));
    __hv_floor_f(VIf(Bf10), VOf(Bf11));
    __hv_varread_f(&sVarf_mVIRZo52, VOf(Bf2));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf11), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf11), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_YHxlj448, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_Se8ds7NY, VIi(Bi0), VOf(Bf2));
    __hv_sub_f(VIf(Bf4), VIf(Bf2), VOf(Bf4));
    __hv_sub_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_fma_f(VIf(Bf4), VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf2), VIf(Bf11), VIf(Bf14), VOf(Bf11));
    __hv_varread_f(&sVarf_2wzl30oD, VOf(Bf2));
    __hv_rpole_f(&sRPole_UnYHXdHe, VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_5uWqQdvp, VIf(Bf2), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_5t5p2qV5, VOf(Bf2));
    __hv_mul_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_LISRTAJf, VOf(Bf11));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_tabwrite_f(&sTabwrite_3mF5qyQV, VIf(Bf11));
    __hv_varread_f(&sVarf_PREtbBZ1, VOf(Bf11));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_tabwrite_f(&sTabwrite_2BBW26yA, VIf(Bf11));
    __hv_fma_f(VIf(Bf6), VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_6YJdXVHE, VOf(Bf3));
    __hv_rpole_f(&sRPole_GFjkJRo6, VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_L9YnRI2m, VIf(Bf3), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_ek8zFHfj, VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf3), VIf(O1), VOf(O1));
    __hv_varread_f(&sVarf_Tu6Uws36, VOf(Bf3));
    __hv_mul_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_uJm8NHPS, VOf(Bf8));
    __hv_fma_f(VIf(Bf3), VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_Ntw1D20l, VOf(Bf8));
    __hv_rpole_f(&sRPole_TFlv01U8, VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_8HWLmjo5, VIf(Bf8), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_whHqkSsm, VOf(Bf8));
    __hv_mul_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf8), VIf(O0), VOf(O0));

    // save output vars to output buffer
    __hv_store_f(outputBuffers[0]+n, VIf(O0));
    __hv_store_f(outputBuffers[1]+n, VIf(O1));
  }

  blockStartTimestamp = nextBlock;

  return n4; // return the number of frames processed

}

int Heavy_Echomatica_1_3_1::processInline(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(!(n4 & HV_N_SIMD_MASK)); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 2 channel(s)
  float **const bIn = reinterpret_cast<float **>(hv_alloca(2*sizeof(float *)));
  bIn[0] = inputBuffers+(0*n4);
  bIn[1] = inputBuffers+(1*n4);

  // define the heavy output buffer for 2 channel(s)
  float **const bOut = reinterpret_cast<float **>(hv_alloca(2*sizeof(float *)));
  bOut[0] = outputBuffers+(0*n4);
  bOut[1] = outputBuffers+(1*n4);

  int n = process(bIn, bOut, n4);
  return n;
}

int Heavy_Echomatica_1_3_1::processInlineInterleaved(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(n4 & ~HV_N_SIMD_MASK); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 2 channel(s), uninterleave
  float *const bIn = reinterpret_cast<float *>(hv_alloca(2*n4*sizeof(float)));
  #if HV_SIMD_SSE || HV_SIMD_AVX
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    __m128 a = _mm_load_ps(inputBuffers+i);                // LRLR
    __m128 b = _mm_load_ps(inputBuffers+4+i);              // LRLR
    __m128 x = _mm_shuffle_ps(a, b, _MM_SHUFFLE(2,0,2,0)); // LLLL
    __m128 y = _mm_shuffle_ps(a, b, _MM_SHUFFLE(3,1,3,1)); // RRRR
    _mm_store_ps(bIn+j, x);
    _mm_store_ps(bIn+n4+j, y);
  }
  #elif HV_SIMD_NEON
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    float32x4x2_t a = vld2q_f32(inputBuffers+i); // load and uninterleave
    vst1q_f32(bIn+j, a.val[0]);
    vst1q_f32(bIn+n4+j, a.val[1]);
  }
  #else // HV_SIMD_NONE
  for (int j = 0; j < n4; ++j) {
    bIn[0*n4+j] = inputBuffers[0+2*j];
    bIn[1*n4+j] = inputBuffers[1+2*j];
  }
  #endif

  // define the heavy output buffer for 2 channel(s)
  float *const bOut = reinterpret_cast<float *>(hv_alloca(2*n4*sizeof(float)));

  int n = processInline(bIn, bOut, n4);

  // interleave the heavy output into the output buffer
  #if HV_SIMD_AVX
  for (int i = 0, j = 0; j < n4; j += 8, i += 16) {
    __m256 x = _mm256_load_ps(bOut+j);    // LLLLLLLL
    __m256 y = _mm256_load_ps(bOut+n4+j); // RRRRRRRR
    __m256 a = _mm256_unpacklo_ps(x, y);  // LRLRLRLR
    __m256 b = _mm256_unpackhi_ps(x, y);  // LRLRLRLR
    _mm256_store_ps(outputBuffers+i, a);
    _mm256_store_ps(outputBuffers+8+i, b);
  }
  #elif HV_SIMD_SSE
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    __m128 x = _mm_load_ps(bOut+j);    // LLLL
    __m128 y = _mm_load_ps(bOut+n4+j); // RRRR
    __m128 a = _mm_unpacklo_ps(x, y);  // LRLR
    __m128 b = _mm_unpackhi_ps(x, y);  // LRLR
    _mm_store_ps(outputBuffers+i, a);
    _mm_store_ps(outputBuffers+4+i, b);
  }
  #elif HV_SIMD_NEON
  // https://community.arm.com/groups/processors/blog/2012/03/13/coding-for-neon--part-5-rearranging-vectors
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    float32x4_t x = vld1q_f32(bOut+j);
    float32x4_t y = vld1q_f32(bOut+n4+j);
    float32x4x2_t z = {x, y};
    vst2q_f32(outputBuffers+i, z); // interleave and store
  }
  #else // HV_SIMD_NONE
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < n4; ++j) {
      outputBuffers[i+2*j] = bOut[i*n4+j];
    }
  }
  #endif

  return n;
}
