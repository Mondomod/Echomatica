/** Mondomatic */

#include "Heavy_Echomatica.hpp"

#include <new>

#define Context(_c) static_cast<Heavy_Echomatica *>(_c)


/*
 * C Functions
 */

extern "C" {
  HV_EXPORT HeavyContextInterface *hv_Echomatica_new(double sampleRate) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_Echomatica));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_Echomatica(sampleRate);
    return Context(ptr);
  }

  HV_EXPORT HeavyContextInterface *hv_Echomatica_new_with_options(double sampleRate,
      int poolKb, int inQueueKb, int outQueueKb) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_Echomatica));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_Echomatica(sampleRate, poolKb, inQueueKb, outQueueKb);
    return Context(ptr);
  }

  HV_EXPORT void hv_Echomatica_free(HeavyContextInterface *instance) {
    // call destructor
    Context(instance)->~Heavy_Echomatica();
    // free memory
    hv_free(instance);
  }
} // extern "C"







/*
 * Class Functions
 */

Heavy_Echomatica::Heavy_Echomatica(double sampleRate, int poolKb, int inQueueKb, int outQueueKb)
    : HeavyContext(sampleRate, poolKb, inQueueKb, outQueueKb) {
  numBytes += sBiquad_k_init(&sBiquad_k_lIIzWQFw, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  numBytes += sRPole_init(&sRPole_EEFYIoOC);
  numBytes += sDel1_init(&sDel1_B6KSSVY0);
  numBytes += sRPole_init(&sRPole_DHab27qw);
  numBytes += sDel1_init(&sDel1_SQEVCD5h);
  numBytes += sRPole_init(&sRPole_EpYQqYrc);
  numBytes += sDel1_init(&sDel1_UTJXYgtz);
  numBytes += sRPole_init(&sRPole_LeYj9dw1);
  numBytes += sRPole_init(&sRPole_MOsW1WB0);
  numBytes += sRPole_init(&sRPole_7LU9GCuC);
  numBytes += sRPole_init(&sRPole_gnE7ubsC);
  numBytes += sDel1_init(&sDel1_GHleUiki);
  numBytes += sRPole_init(&sRPole_GGTA6Xfs);
  numBytes += sLine_init(&sLine_RBkXKFcY);
  numBytes += sLine_init(&sLine_3c9gmJNX);
  numBytes += sEnv_init(&sEnv_eBpAyol9, 256, 512);
  numBytes += sLine_init(&sLine_bYbGAuCO);
  numBytes += sLine_init(&sLine_g7Dne5J7);
  numBytes += sRPole_init(&sRPole_8znOqSfo);
  numBytes += sTabwrite_init(&sTabwrite_Kw0kOEb1, &hTable_xAMoulxO);
  numBytes += sPhasor_k_init(&sPhasor_QXRuIFim, 0.0f, sampleRate);
  numBytes += sPhasor_k_init(&sPhasor_2PzTEcSR, 0.0f, sampleRate);
  numBytes += sLine_init(&sLine_eQdG8VWG);
  numBytes += sTabhead_init(&sTabhead_y09BnyIT, &hTable_xAMoulxO);
  numBytes += sTabread_init(&sTabread_eQq3nrKr, &hTable_xAMoulxO, false);
  numBytes += sTabread_init(&sTabread_tmnSO1e1, &hTable_xAMoulxO, false);
  numBytes += sLine_init(&sLine_zA7hABg7);
  numBytes += sLine_init(&sLine_4QZ4cUOb);
  numBytes += sTabhead_init(&sTabhead_HKoj1PxQ, &hTable_xAMoulxO);
  numBytes += sTabread_init(&sTabread_WmnTF2FF, &hTable_xAMoulxO, false);
  numBytes += sTabread_init(&sTabread_n1g2ktVs, &hTable_xAMoulxO, false);
  numBytes += sLine_init(&sLine_C7RVoe5x);
  numBytes += sLine_init(&sLine_58MYh6sM);
  numBytes += sTabhead_init(&sTabhead_ffQK5sX1, &hTable_xAMoulxO);
  numBytes += sTabread_init(&sTabread_7KCziAuO, &hTable_xAMoulxO, false);
  numBytes += sTabread_init(&sTabread_1rcfEnku, &hTable_xAMoulxO, false);
  numBytes += sLine_init(&sLine_AV1DHCkU);
  numBytes += sLine_init(&sLine_jyz8QVfx);
  numBytes += sTabhead_init(&sTabhead_NeGDry4C, &hTable_xAMoulxO);
  numBytes += sTabread_init(&sTabread_hj09vjr1, &hTable_xAMoulxO, false);
  numBytes += sTabread_init(&sTabread_JNamAsES, &hTable_xAMoulxO, false);
  numBytes += sLine_init(&sLine_0TWe2R64);
  numBytes += sLine_init(&sLine_SAC1H6GT);
  numBytes += sTabhead_init(&sTabhead_xeZiD90V, &hTable_xAMoulxO);
  numBytes += sTabread_init(&sTabread_gSBKrsNZ, &hTable_xAMoulxO, false);
  numBytes += sTabread_init(&sTabread_oVNKoShv, &hTable_xAMoulxO, false);
  numBytes += sLine_init(&sLine_gPT3XOJK);
  numBytes += sLine_init(&sLine_A0c5Ngzi);
  numBytes += sTabhead_init(&sTabhead_jHqhD2xt, &hTable_xAMoulxO);
  numBytes += sTabread_init(&sTabread_ckDfjoXs, &hTable_xAMoulxO, false);
  numBytes += sTabread_init(&sTabread_FsEIVIPx, &hTable_xAMoulxO, false);
  numBytes += sLine_init(&sLine_6yB4y4aM);
  numBytes += sEnv_init(&sEnv_uU3cnlU6, 256, 512);
  numBytes += sLine_init(&sLine_Nw12VOyb);
  numBytes += sRPole_init(&sRPole_YeU9i4kH);
  numBytes += sRPole_init(&sRPole_S2LnCcZ5);
  numBytes += sDel1_init(&sDel1_WknTv4yY);
  numBytes += sEnv_init(&sEnv_jFNvuNoX, 256, 512);
  numBytes += sLine_init(&sLine_E50myOw3);
  numBytes += sRPole_init(&sRPole_5XPxswzO);
  numBytes += sRPole_init(&sRPole_BCIojrgh);
  numBytes += sDel1_init(&sDel1_at87Ria9);
  numBytes += sRPole_init(&sRPole_PDadpkMm);
  numBytes += sDel1_init(&sDel1_SGxAjGhk);
  numBytes += sLine_init(&sLine_yabwkAP1);
  numBytes += sPhasor_k_init(&sPhasor_KwwL2zva, 0.3f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_F0MPCMTH, &hTable_9WGrtO0z);
  numBytes += sTabread_init(&sTabread_QA6Fp6Sr, &hTable_9WGrtO0z, false);
  numBytes += sTabread_init(&sTabread_9SwgZ4Dl, &hTable_9WGrtO0z, false);
  numBytes += sRPole_init(&sRPole_K3NGb1ZV);
  numBytes += sDel1_init(&sDel1_iy0HV9Hj);
  numBytes += sPhasor_k_init(&sPhasor_zfCAWje4, 0.5f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_1xvq0yTN, &hTable_Sk97yiQy);
  numBytes += sTabread_init(&sTabread_W715w0B5, &hTable_Sk97yiQy, false);
  numBytes += sTabread_init(&sTabread_X94GTMp3, &hTable_Sk97yiQy, false);
  numBytes += sRPole_init(&sRPole_9vmKguCt);
  numBytes += sDel1_init(&sDel1_ilqFatpP);
  numBytes += sTabwrite_init(&sTabwrite_sphWnPCr, &hTable_Sk97yiQy);
  numBytes += sTabwrite_init(&sTabwrite_sm201wML, &hTable_9WGrtO0z);
  numBytes += sRPole_init(&sRPole_7hdAU6b2);
  numBytes += sDel1_init(&sDel1_SHJ0MBLs);
  numBytes += sRPole_init(&sRPole_H0Nuhy3h);
  numBytes += sDel1_init(&sDel1_xpJxCqjM);
  numBytes += sLine_init(&sLine_cCx9soFY);
  numBytes += sLine_init(&sLine_SKdjyEiz);
  numBytes += sLine_init(&sLine_8LhXQU2F);
  numBytes += sLine_init(&sLine_YyrIVt72);
  numBytes += sLine_init(&sLine_BUngelYI);
  numBytes += sLine_init(&sLine_zRxUpwrf);
  numBytes += cVar_init_s(&cVar_X9wZg4Rr, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_RTrMlDIH, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_UkCaSIKU, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_dhdCyfst, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_4Ic3f6cp, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_P8ZlqjF4, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_QDnMKz2W, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_n0NAtqRX, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_FzxpvhiA, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_2IzBp8hh, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_mX1zAyZ2, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Y5HrQIHt, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_ax5mKf9U, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_Wi2lZN9a, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_wCA1hA8D, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_DtAjYsc2, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_tfL4MZEB, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_YMye6L1J, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_zsnI7YDl, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_RAy8FzNo, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_nRfpX3j8, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_I7y3KmZu, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_MZGPrzuU, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Jk6B1gRX, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_RG0XaZ6G, 0.0f);
  numBytes += cVar_init_f(&cVar_1cWbkLA3, 0.0f);
  numBytes += cVar_init_f(&cVar_B3vXl0Fb, 0.0f);
  numBytes += cVar_init_f(&cVar_VOHj1ZCy, 0.0f);
  numBytes += cVar_init_f(&cVar_vX7mvaWY, 0.0f);
  numBytes += cVar_init_f(&cVar_JdQ4X9JA, 0.0f);
  numBytes += cVar_init_f(&cVar_PF9auPHw, 0.0f);
  numBytes += cVar_init_f(&cVar_QxxzmVAi, 0.0f);
  numBytes += cVar_init_f(&cVar_KkaXcXo4, 0.0f);
  numBytes += cVar_init_f(&cVar_BlOs1cPd, 0.0f);
  numBytes += cVar_init_f(&cVar_3WLWMr1D, 0.0f);
  numBytes += cVar_init_f(&cVar_I11MkeOI, 0.0f);
  numBytes += cPack_init(&cPack_erHTlg2C, 2, 0.0f, 20.0f);
  numBytes += cPack_init(&cPack_18TNexwQ, 2, 0.0f, 1800.0f);
  numBytes += cPack_init(&cPack_unQxgdww, 2, 0.0f, 1600.0f);
  numBytes += cPack_init(&cPack_Kr1KSWjj, 2, 0.0f, 1300.0f);
  numBytes += cPack_init(&cPack_ES371sCB, 2, 0.0f, 1000.0f);
  numBytes += cPack_init(&cPack_QiksLS71, 2, 0.0f, 800.0f);
  numBytes += cPack_init(&cPack_A4CXuNhb, 2, 0.0f, 600.0f);
  numBytes += cSlice_init(&cSlice_SeV7NcMe, 27, 1);
  numBytes += cSlice_init(&cSlice_kMgSthEF, 26, 1);
  numBytes += cSlice_init(&cSlice_xMiNUYZk, 25, 1);
  numBytes += cSlice_init(&cSlice_ezfr4fub, 24, 1);
  numBytes += cSlice_init(&cSlice_twYGbWSM, 23, 1);
  numBytes += cSlice_init(&cSlice_wblvcw9f, 22, 1);
  numBytes += cSlice_init(&cSlice_OLX2EVea, 21, 1);
  numBytes += cSlice_init(&cSlice_OUBYcJrN, 20, 1);
  numBytes += cSlice_init(&cSlice_MjiN6RbM, 19, 1);
  numBytes += cSlice_init(&cSlice_jWo6ouXo, 18, 1);
  numBytes += cSlice_init(&cSlice_5jokOcDY, 17, 1);
  numBytes += cSlice_init(&cSlice_Yw9O8Xyn, 16, 1);
  numBytes += cSlice_init(&cSlice_dx0mE2vf, 15, 1);
  numBytes += cSlice_init(&cSlice_VSB3kbQG, 14, 1);
  numBytes += cSlice_init(&cSlice_mpK8DueT, 13, 1);
  numBytes += cSlice_init(&cSlice_HDZRdYgp, 12, 1);
  numBytes += cSlice_init(&cSlice_f35TkILr, 11, 1);
  numBytes += cSlice_init(&cSlice_vlQdQezJ, 10, 1);
  numBytes += cSlice_init(&cSlice_BXpqNI2P, 9, 1);
  numBytes += cSlice_init(&cSlice_udUHZIjR, 8, 1);
  numBytes += cSlice_init(&cSlice_80Lzel6b, 7, 1);
  numBytes += cSlice_init(&cSlice_MJPbd6Wc, 6, 1);
  numBytes += cSlice_init(&cSlice_pOE0t40i, 5, 1);
  numBytes += cSlice_init(&cSlice_lDAUisbp, 4, 1);
  numBytes += cSlice_init(&cSlice_pWIJvuH0, 3, 1);
  numBytes += cSlice_init(&cSlice_FQQEHWos, 2, 1);
  numBytes += cSlice_init(&cSlice_05N2CEmc, 1, 1);
  numBytes += cSlice_init(&cSlice_3nKlWdjw, 0, 1);
  numBytes += sVarf_init(&sVarf_ynExFKrl, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_fgKmHVOR, 0.0f);
  numBytes += cBinop_init(&cBinop_uKqyHqjw, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_vHJXrvjT, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_unYm8T2a, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_bxBqym4O, 0.0f);
  numBytes += cBinop_init(&cBinop_rlePq5Ip, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_VsN3vcrg, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_23LYqawl, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_1YFc9OdX, 0.0f);
  numBytes += cBinop_init(&cBinop_QT0OecLo, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_WD5jaOIV, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_znVkxzaI, 22050.0f);
  numBytes += cBinop_init(&cBinop_CzRumNkt, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_fFG1x9jR, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_lXmojnzH, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_sb4o7qQ6, 22050.0f);
  numBytes += cBinop_init(&cBinop_J6myOIN1, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_cm2fvFVT, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_rtvfk9AG, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_0R698Oyy, 22050.0f);
  numBytes += cBinop_init(&cBinop_unT6Ly3W, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_nmx2Mwf7, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_V0kDjerQ, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_TCIdLR0x, 22050.0f);
  numBytes += cVar_init_f(&cVar_fZY9orFf, 1.0f);
  numBytes += cBinop_init(&cBinop_ITopFTdj, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_NkGDK2ph, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_huPqiRiS, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_augMW0vl, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_NBxiM6Nx, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_p6QZM3bi, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_muC7InWp, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_8ZFlu1AO, 0.0f);
  numBytes += cVar_init_f(&cVar_TAViNKH4, 0.0f);
  numBytes += cVar_init_f(&cVar_sLjtBOv2, 0.0f);
  numBytes += cVar_init_f(&cVar_fZ1HYh1O, 0.0f);
  numBytes += cVar_init_f(&cVar_WHGJqkeN, 0.0f);
  numBytes += cVar_init_f(&cVar_66zxFCmm, 0.0f);
  numBytes += cSlice_init(&cSlice_nOXRP60F, 3, 1);
  numBytes += cSlice_init(&cSlice_pjUKlOwf, 2, 1);
  numBytes += cSlice_init(&cSlice_VUOnwhry, 1, 1);
  numBytes += cSlice_init(&cSlice_JLTaHZgC, 0, 1);
  numBytes += cPack_init(&cPack_uRYAjskS, 2, 0.0f, 50.0f);
  numBytes += cDelay_init(this, &cDelay_WqEX4ObD, 0.0f);
  numBytes += cDelay_init(this, &cDelay_QbY3az93, 0.0f);
  numBytes += hTable_init(&hTable_Sk97yiQy, 256);
  numBytes += cVar_init_f(&cVar_DTOWs1Wa, 0.0f);
  numBytes += cVar_init_s(&cVar_opxYNif3, "del-1001-delayD");
  numBytes += sVarf_init(&sVarf_gC2WhgZJ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_e63pGA6L, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_UClXYCGc, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_ZuHRrUXk, "del-1001-delayC");
  numBytes += sVarf_init(&sVarf_H2iNE3WR, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_tWxACywY, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ApN7xsbn, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_1tQkbhWp, 0.0f);
  numBytes += cDelay_init(this, &cDelay_PFNxxooE, 0.0f);
  numBytes += hTable_init(&hTable_9WGrtO0z, 256);
  numBytes += sVarf_init(&sVarf_SapQPaP4, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_19Xm5Ykz, 3.0f);
  numBytes += cBinop_init(&cBinop_8q58ARzX, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_swRrYumj, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_bobMpB7C, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_YtPeRmtm, 3.0f);
  numBytes += cBinop_init(&cBinop_ovdyiFnz, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_o1xGruuN, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_DFlX2U7t, 1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_EfuqqN8k, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_AEPNtUvM, 0.0f);
  numBytes += cVar_init_f(&cVar_tEHjQCb2, 0.0f);
  numBytes += cVar_init_f(&cVar_jhAlAshN, 0.0f);
  numBytes += cPack_init(&cPack_VMr8bHlu, 2, 0.0f, 100.0f);
  numBytes += cPack_init(&cPack_h5bt3es1, 2, 0.0f, 100.0f);
  numBytes += cVar_init_f(&cVar_z43kBjXL, 0.0f);
  numBytes += cVar_init_f(&cVar_U3y9ia2Z, 0.0f);
  numBytes += cVar_init_f(&cVar_OcT2mQa2, 0.0f);
  numBytes += cBinop_init(&cBinop_4vUz8tT7, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_VxcpKxE6, 0.0f); // __pow
  numBytes += cIf_init(&cIf_dkh9Msc7, false);
  numBytes += cBinop_init(&cBinop_qEbAxu9d, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_90o1Yy2d, 74.0f);
  numBytes += cVar_init_f(&cVar_ZBLVRqHn, 3.0f);
  numBytes += cSlice_init(&cSlice_clKyTDsw, 1, -1);
  numBytes += cVar_init_f(&cVar_4ejZWlqB, 1.0f);
  numBytes += cSlice_init(&cSlice_P2Mkcy4C, 1, -1);
  numBytes += cVar_init_f(&cVar_mOGbNPO1, 70.0f);
  numBytes += cBinop_init(&cBinop_ZrCyNj76, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_7WLVo0JK, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_zL69jl5m, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_rb7BxYeD, 3000.0f);
  numBytes += cBinop_init(&cBinop_YYsRVBSg, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_Tb6dQkk8, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_5QvZOyBF, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_zU08L9M3, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_64PpancC, 400.0f);
  numBytes += cBinop_init(&cBinop_sWjpYOr0, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_rBp8rpA5, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_RAMYJAxD, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_ytbmSFuW, 30.0f);
  numBytes += cBinop_init(&cBinop_qereFo9t, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_dPLCFtsm, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_YK7QVWzU, false);
  numBytes += cVar_init_f(&cVar_U0h4NPxV, 0.0f);
  numBytes += cVar_init_f(&cVar_GMVOzcCC, 0.0f);
  numBytes += cPack_init(&cPack_RdTulpue, 3, 0.0f, 500.0f, 100.0f);
  numBytes += cDelay_init(this, &cDelay_SMxsCyeS, 0.0f);
  numBytes += cVar_init_f(&cVar_Ouc21BBq, 20.0f);
  numBytes += cBinop_init(&cBinop_jMB3GnFJ, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_WLReintU, 0.0f);
  numBytes += cSlice_init(&cSlice_bGkTG5VM, 1, -1);
  numBytes += cSlice_init(&cSlice_885cfSDi, 1, -1);
  numBytes += cVar_init_f(&cVar_AUVCzLXe, 0.0f);
  numBytes += cVar_init_f(&cVar_6ojXG0K2, 20.0f);
  numBytes += cVar_init_f(&cVar_s8cXfF6a, 0.0f);
  numBytes += cVar_init_f(&cVar_uGPzDOdY, 0.0f);
  numBytes += cVar_init_f(&cVar_WeB5wmad, 0.0f);
  numBytes += cSlice_init(&cSlice_JCvvA77x, 1, 1);
  numBytes += cSlice_init(&cSlice_QaTDigqA, 0, 1);
  numBytes += cBinop_init(&cBinop_qywMxWn8, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_2CMIZlX1, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_w4iheW0I, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_cs8KMwqr, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_QkU5CQbp, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_KVSbGwcn, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_Y3spDmJ0, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_apSdg2C3, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_XyguWI0L, 0.0f);
  numBytes += cVar_init_f(&cVar_C1q8cJ4B, 0.0f);
  numBytes += cVar_init_f(&cVar_1l39j94n, 0.0f);
  numBytes += cVar_init_f(&cVar_h43UpT9H, 0.0f);
  numBytes += cVar_init_f(&cVar_fuiJGtNm, 0.0f);
  numBytes += cVar_init_f(&cVar_R58JGtx7, 0.0f);
  numBytes += sVarf_init(&sVarf_OQpnXPZx, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_Gs9czhu2, 8.0f);
  numBytes += cBinop_init(&cBinop_VAX8yBai, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_vnEjhJke, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_Axv7g2Nq, 0.0f);
  numBytes += cVar_init_f(&cVar_S8z4xys4, 0.0f);
  numBytes += cBinop_init(&cBinop_LffZVXBa, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_t4BMmpc8, 0.0f); // __pow
  numBytes += cIf_init(&cIf_uLTWnwXz, false);
  numBytes += cBinop_init(&cBinop_Xt21ab7i, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_SNDqrkCa, 82.0f);
  numBytes += cVar_init_f(&cVar_FPe3WUXn, 21.0f);
  numBytes += cSlice_init(&cSlice_tGrd7yRc, 1, -1);
  numBytes += cVar_init_f(&cVar_GX0eLMAG, 1.0f);
  numBytes += cSlice_init(&cSlice_rqUgA4mn, 1, -1);
  numBytes += cVar_init_f(&cVar_JsfJmapC, 70.0f);
  numBytes += cBinop_init(&cBinop_929OI3an, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_XfyI4aXP, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_0YscpUB2, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_HvYcSgi0, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_7KDi04Vy, 8.0f);
  numBytes += cBinop_init(&cBinop_SyANOLSa, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_SWA5zlJs, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_gon3ume9, 0.0f);
  numBytes += cVar_init_f(&cVar_fJ0jHmNb, 0.0f);
  numBytes += cBinop_init(&cBinop_2bxrStCY, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_jepGEryv, 0.0f); // __pow
  numBytes += cIf_init(&cIf_piSahvSl, false);
  numBytes += cBinop_init(&cBinop_mzslvTHG, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_kim1GGj8, 82.0f);
  numBytes += cVar_init_f(&cVar_ICP92P2T, 21.0f);
  numBytes += cSlice_init(&cSlice_QvP3TwVl, 1, -1);
  numBytes += cVar_init_f(&cVar_S1gZXt0h, 1.0f);
  numBytes += cSlice_init(&cSlice_I4pOPvmM, 1, -1);
  numBytes += cVar_init_f(&cVar_vdPUUhjL, 70.0f);
  numBytes += cBinop_init(&cBinop_2H5pKHhU, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_mesXkKMt, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_7C3CGDty, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_VwROXICj, 10000.0f);
  numBytes += cBinop_init(&cBinop_NJgyIj1z, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_tUioCfFx, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_cnEbYPdp, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_wXdSACuE, 10000.0f);
  numBytes += cBinop_init(&cBinop_HqnNT6to, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_7aLvL2md, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Y7JJ70VG, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_74ycPKVw, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_s7HBiG8x, 20.0f);
  numBytes += cBinop_init(&cBinop_U29ne7PD, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_iuCBgxMv, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_GyKH6VmQ, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_yzggPDm9, 20.0f);
  numBytes += cBinop_init(&cBinop_fS5pg8HK, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_gN5n45jQ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_AguRl1gM, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_tOOSIjvl, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_TUBbDXOZ, 0.0f);
  numBytes += cDelay_init(this, &cDelay_y6TjTYHb, 0.0f);
  numBytes += hTable_init(&hTable_xAMoulxO, 256);
  numBytes += cVar_init_f(&cVar_DL1eIvee, 8000.0f);
  numBytes += cBinop_init(&cBinop_4ZtgcwEl, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_DwyAomGP, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_VTxrQoZP, 0.0f, 0.0f, false);
  numBytes += cExpr_init(&cExpr_kzKWqiNj, &Heavy_Echomatica::cExpr_kzKWqiNj_evaluate);
  numBytes += sVarf_init(&sVarf_9oVWULPP, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_U0x54IXk, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_EfZY6LZ8, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_WHElu1vk, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_sfjGD8yB, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Kwk2omaF, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Q1n4SOYu, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_rlwLmFPB, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_RPjgyIeT, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ULMgyS4s, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_NnLHbfn2, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_utrBX7BF, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_JIIayXHR, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_6ReQzdbi, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_EHeayhtD, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_yAbDESNB, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_UwH8BgKP, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_axuQHCwH, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_vJCNziVW, 0.0f, 0.0f, false);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_Echomatica::~Heavy_Echomatica() {
  sEnv_free(&sEnv_eBpAyol9);
  sEnv_free(&sEnv_uU3cnlU6);
  sEnv_free(&sEnv_jFNvuNoX);
  cPack_free(&cPack_erHTlg2C);
  cPack_free(&cPack_18TNexwQ);
  cPack_free(&cPack_unQxgdww);
  cPack_free(&cPack_Kr1KSWjj);
  cPack_free(&cPack_ES371sCB);
  cPack_free(&cPack_QiksLS71);
  cPack_free(&cPack_A4CXuNhb);
  cPack_free(&cPack_uRYAjskS);
  hTable_free(&hTable_Sk97yiQy);
  hTable_free(&hTable_9WGrtO0z);
  cPack_free(&cPack_VMr8bHlu);
  cPack_free(&cPack_h5bt3es1);
  cPack_free(&cPack_RdTulpue);
  hTable_free(&hTable_xAMoulxO);
  cExpr_free(&cExpr_kzKWqiNj);
}

HvTable *Heavy_Echomatica::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0x6F28B8EB: return &hTable_Sk97yiQy; // del-1001-delayD
    case 0xA74180A2: return &hTable_9WGrtO0z; // del-1001-delayC
    case 0xC7C6279C: return &hTable_xAMoulxO; // del-1001-delayA
    default: return nullptr;
  }
}

void Heavy_Echomatica::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0x22C9B907: { // Vari
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_3pJIlyL3_sendMessage);
      break;
    }
    case 0xD137AA79: { // 1198-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_faJrEEwI_sendMessage);
      break;
    }
    case 0x88303B1D: { // 1198-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_8qpk7KGf_sendMessage);
      break;
    }
    case 0x41773AF7: { // 1276-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_nltlbnCO_sendMessage);
      break;
    }
    case 0xDEB10149: { // 1276-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Mrj4LPzr_sendMessage);
      break;
    }
    case 0x9DF6835D: { // 1298-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9WYX5m9O_sendMessage);
      break;
    }
    case 0xA9789206: { // 1298-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_B2M29tNJ_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_SYtLC5Te_sendMessage);
      break;
    }
    case 0xE68AB11B: { // chrs
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_l8bTP8Qy_sendMessage);
      break;
    }
    case 0xBA8CED4E: { // dry
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_5jonw5ha_sendMessage);
      break;
    }
    case 0x63E722C0: { // echo
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ioO62yn4_sendMessage);
      break;
    }
    case 0x8FA433B0: { // f1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_VsiG73DP_sendMessage);
      break;
    }
    case 0xEE0EB120: { // f2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_wauDKI53_sendMessage);
      break;
    }
    case 0x4FFCF19F: { // f3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_11ZrFKGs_sendMessage);
      break;
    }
    case 0x2AF9F5EB: { // f4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_LMZikG1X_sendMessage);
      break;
    }
    case 0xC6F6EBB2: { // f5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_vNmYOr1Z_sendMessage);
      break;
    }
    case 0x775D6E5E: { // f6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_FsFH6ET1_sendMessage);
      break;
    }
    case 0xBB6123FD: { // fdbck_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_sp3wQFyR_sendMessage);
      break;
    }
    case 0xF1E7CD16: { // feedback
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Eakzvt72_sendMessage);
      break;
    }
    case 0xC7AF3F72: { // h1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_rKqdPGBB_sendMessage);
      break;
    }
    case 0x9BEBB079: { // h2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_2HE1ZDW1_sendMessage);
      break;
    }
    case 0xAB1137FD: { // h3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_jsQD5sXC_sendMessage);
      break;
    }
    case 0x2B4C6DE1: { // h4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_kg6cNpp3_sendMessage);
      break;
    }
    case 0x2541E77D: { // h5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_K2EoSWYF_sendMessage);
      break;
    }
    case 0xE7F6D341: { // h6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_CLn4ht8q_sendMessage);
      break;
    }
    case 0x5667A4DA: { // head1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_a8ARNwCa_sendMessage);
      break;
    }
    case 0xAD6B31A5: { // head2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_GXRTekk3_sendMessage);
      break;
    }
    case 0x8A2BD450: { // head3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_5iIqBL0x_sendMessage);
      break;
    }
    case 0xCF5C829A: { // head4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_wyaaf2Wv_sendMessage);
      break;
    }
    case 0xEE70DFBC: { // head5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_QJVvXE7G_sendMessage);
      break;
    }
    case 0x8E4B9939: { // head6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_z2FHJ0T8_sendMessage);
      break;
    }
    case 0x7E24361: { // hp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_FM2lvQs6_sendMessage);
      break;
    }
    case 0x674D12F6: { // hp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ci5jVlOM_sendMessage);
      break;
    }
    case 0x6A20C3F5: { // hp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_bbpmnO5A_sendMessage);
      break;
    }
    case 0x123E8795: { // lp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Cqd2E0EM_sendMessage);
      break;
    }
    case 0x4588BD1: { // lp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_HrR3n51Q_sendMessage);
      break;
    }
    case 0xB7298D49: { // lp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_AXnnjWuh_sendMessage);
      break;
    }
    case 0x64BD0F15: { // mf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_2RXXiC5P_sendMessage);
      break;
    }
    case 0x5A12F82E: { // mg
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ll64VPu1_sendMessage);
      break;
    }
    case 0x2C9C49A7: { // mq
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_dp3c0vxx_sendMessage);
      break;
    }
    case 0xC8D93A6D: { // tapehead_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_wqeYk6zN_sendMessage);
      break;
    }
    case 0xB25D05EB: { // varispeed
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_kL2s7iyo_sendMessage);
      break;
    }
    case 0x8ADB5B6B: { // varispeed_enable
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_dvDyPSRB_sendMessage);
      break;
    }
    case 0x7BB47B7B: { // wnf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_vay4hxL0_sendMessage);
      break;
    }
    default: return;
  }
}

int Heavy_Echomatica::getParameterInfo(int index, HvParameterInfo *info) {
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
        info->name = "echo";
        info->hash = 0x63E722C0;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 2: {
        info->name = "fdbck_mode";
        info->hash = 0xBB6123FD;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 2.0f;
        info->defaultVal = 0.0f;
        break;
      }
      case 3: {
        info->name = "feedback";
        info->hash = 0xF1E7CD16;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 4: {
        info->name = "tapehead_mode";
        info->hash = 0xC8D93A6D;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 14.0f;
        info->defaultVal = 1.0f;
        break;
      }
      case 5: {
        info->name = "varispeed";
        info->hash = 0xB25D05EB;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 6: {
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
  return 7;
}



/*
 * Send Function Implementations
 */


void Heavy_Echomatica::cMsg_sBowO1gh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_rtEqYBkU_sendMessage);
}

void Heavy_Echomatica::cSystem_rtEqYBkU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_ALLBingi_sendMessage);
}

void Heavy_Echomatica::cVar_X9wZg4Rr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_M6fSfiNf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_YjZSOmHS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_HL1mcQmM_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_RTrMlDIH, m);
}

void Heavy_Echomatica::cBinop_ALLBingi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_UkCaSIKU, m);
}

void Heavy_Echomatica::cMsg_M6fSfiNf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_YjZSOmHS_sendMessage);
}

void Heavy_Echomatica::cBinop_HL1mcQmM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_dhdCyfst, m);
}

void Heavy_Echomatica::cMsg_1MOOQxUP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_mZMNLFOv_sendMessage);
}

void Heavy_Echomatica::cSystem_mZMNLFOv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Jqq68Ujq_sendMessage);
}

void Heavy_Echomatica::cVar_4Ic3f6cp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Fl7wgDTP_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_G36UMnhG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_ke3N0P4V_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_P8ZlqjF4, m);
}

void Heavy_Echomatica::cBinop_Jqq68Ujq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_QDnMKz2W, m);
}

void Heavy_Echomatica::cMsg_Fl7wgDTP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_G36UMnhG_sendMessage);
}

void Heavy_Echomatica::cBinop_ke3N0P4V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_n0NAtqRX, m);
}

void Heavy_Echomatica::cMsg_F435QDPI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Xc7EC5Uv_sendMessage);
}

void Heavy_Echomatica::cSystem_Xc7EC5Uv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_8yC33HM1_sendMessage);
}

void Heavy_Echomatica::cVar_FzxpvhiA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pm0zqJvG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_M0NCgUIv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_plUsOnmO_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_2IzBp8hh, m);
}

void Heavy_Echomatica::cBinop_8yC33HM1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_mX1zAyZ2, m);
}

void Heavy_Echomatica::cMsg_pm0zqJvG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_M0NCgUIv_sendMessage);
}

void Heavy_Echomatica::cBinop_plUsOnmO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Y5HrQIHt, m);
}

void Heavy_Echomatica::cMsg_wRHLUTH0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Npe2FyNT_sendMessage);
}

void Heavy_Echomatica::cSystem_Npe2FyNT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Xc9eDYCu_sendMessage);
}

void Heavy_Echomatica::cVar_ax5mKf9U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_y8Hziyua_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_adRAQysM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_ZTxoOvRz_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Wi2lZN9a, m);
}

void Heavy_Echomatica::cBinop_Xc9eDYCu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_wCA1hA8D, m);
}

void Heavy_Echomatica::cMsg_y8Hziyua_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_adRAQysM_sendMessage);
}

void Heavy_Echomatica::cBinop_ZTxoOvRz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_DtAjYsc2, m);
}

void Heavy_Echomatica::cCast_RYaTZlvH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_m93QsnOf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_qxoCh7lX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_725RKX8S_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_G3LyktdV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1fZL2W9t_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_cCwegHur_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_m38h3iHX_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_vWUaKdet_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_MSZlTqaA_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_TieOZAKV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wm6tOExO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_s0WUMDRF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ouYxhGv4_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_JTa7Jvio_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gFFyUDJk_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_43NV9Xaa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HNcQMZrd_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_cXh2QND6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_J5wSbLMy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_1fUA2DOG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0uPTlV09_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_D1whtvBE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dG0PGdQG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_mV3pJLCE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wL5yLqee_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_pIWtJGdu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TqdNNrHH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_BbDv0Drx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_P0OmiDFd_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_JjewWSBk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_utMKme3p_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_D6ZIUi6O_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Zn615ZoQ_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_o1V74sl4_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_U9QnZuXx_sendMessage);
      break;
    }
    case 0x40400000: { // "3.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fIxirrY0_sendMessage);
      break;
    }
    case 0x40800000: { // "4.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DjRlpkNk_sendMessage);
      break;
    }
    case 0x40A00000: { // "5.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7zJmZPl1_sendMessage);
      break;
    }
    case 0x40C00000: { // "6.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_q3aYaFQO_sendMessage);
      break;
    }
    case 0x40E00000: { // "7.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mkWFKylo_sendMessage);
      break;
    }
    case 0x41000000: { // "8.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0h1orXpx_sendMessage);
      break;
    }
    case 0x41100000: { // "9.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EhqdudVt_sendMessage);
      break;
    }
    case 0x41200000: { // "10.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0LYmHdKU_sendMessage);
      break;
    }
    case 0x41300000: { // "11.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XYaWlU3R_sendMessage);
      break;
    }
    case 0x41400000: { // "12.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5cPQ7qCh_sendMessage);
      break;
    }
    case 0x41500000: { // "13.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xHSZ5C4c_sendMessage);
      break;
    }
    case 0x41600000: { // "14.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7JwUuMP8_sendMessage);
      break;
    }
    case 0x41700000: { // "15.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1sFbkTxm_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_Zn615ZoQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1fUA2DOG_sendMessage);
}

void Heavy_Echomatica::cCast_o1V74sl4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pIWtJGdu_sendMessage);
}

void Heavy_Echomatica::cCast_U9QnZuXx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_43NV9Xaa_sendMessage);
}

void Heavy_Echomatica::cCast_fIxirrY0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cXh2QND6_sendMessage);
}

void Heavy_Echomatica::cCast_DjRlpkNk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mV3pJLCE_sendMessage);
}

void Heavy_Echomatica::cCast_7zJmZPl1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_D1whtvBE_sendMessage);
}

void Heavy_Echomatica::cCast_q3aYaFQO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vWUaKdet_sendMessage);
}

void Heavy_Echomatica::cCast_mkWFKylo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BbDv0Drx_sendMessage);
}

void Heavy_Echomatica::cCast_0h1orXpx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JjewWSBk_sendMessage);
}

void Heavy_Echomatica::cCast_EhqdudVt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TieOZAKV_sendMessage);
}

void Heavy_Echomatica::cCast_0LYmHdKU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qxoCh7lX_sendMessage);
}

void Heavy_Echomatica::cCast_XYaWlU3R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_G3LyktdV_sendMessage);
}

void Heavy_Echomatica::cCast_5cPQ7qCh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cCwegHur_sendMessage);
}

void Heavy_Echomatica::cCast_xHSZ5C4c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RYaTZlvH_sendMessage);
}

void Heavy_Echomatica::cCast_7JwUuMP8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JTa7Jvio_sendMessage);
}

void Heavy_Echomatica::cCast_1sFbkTxm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_s0WUMDRF_sendMessage);
}

void Heavy_Echomatica::cMsg_HNcQMZrd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_SeV7NcMe, 0, m, &cSlice_SeV7NcMe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kMgSthEF, 0, m, &cSlice_kMgSthEF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xMiNUYZk, 0, m, &cSlice_xMiNUYZk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ezfr4fub, 0, m, &cSlice_ezfr4fub_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_twYGbWSM, 0, m, &cSlice_twYGbWSM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wblvcw9f, 0, m, &cSlice_wblvcw9f_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OLX2EVea, 0, m, &cSlice_OLX2EVea_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OUBYcJrN, 0, m, &cSlice_OUBYcJrN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MjiN6RbM, 0, m, &cSlice_MjiN6RbM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jWo6ouXo, 0, m, &cSlice_jWo6ouXo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5jokOcDY, 0, m, &cSlice_5jokOcDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yw9O8Xyn, 0, m, &cSlice_Yw9O8Xyn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dx0mE2vf, 0, m, &cSlice_dx0mE2vf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VSB3kbQG, 0, m, &cSlice_VSB3kbQG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mpK8DueT, 0, m, &cSlice_mpK8DueT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HDZRdYgp, 0, m, &cSlice_HDZRdYgp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f35TkILr, 0, m, &cSlice_f35TkILr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vlQdQezJ, 0, m, &cSlice_vlQdQezJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BXpqNI2P, 0, m, &cSlice_BXpqNI2P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_udUHZIjR, 0, m, &cSlice_udUHZIjR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_80Lzel6b, 0, m, &cSlice_80Lzel6b_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MJPbd6Wc, 0, m, &cSlice_MJPbd6Wc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pOE0t40i, 0, m, &cSlice_pOE0t40i_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lDAUisbp, 0, m, &cSlice_lDAUisbp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pWIJvuH0, 0, m, &cSlice_pWIJvuH0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FQQEHWos, 0, m, &cSlice_FQQEHWos_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_05N2CEmc, 0, m, &cSlice_05N2CEmc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3nKlWdjw, 0, m, &cSlice_3nKlWdjw_sendMessage);
}

void Heavy_Echomatica::cMsg_TqdNNrHH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_SeV7NcMe, 0, m, &cSlice_SeV7NcMe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kMgSthEF, 0, m, &cSlice_kMgSthEF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xMiNUYZk, 0, m, &cSlice_xMiNUYZk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ezfr4fub, 0, m, &cSlice_ezfr4fub_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_twYGbWSM, 0, m, &cSlice_twYGbWSM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wblvcw9f, 0, m, &cSlice_wblvcw9f_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OLX2EVea, 0, m, &cSlice_OLX2EVea_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OUBYcJrN, 0, m, &cSlice_OUBYcJrN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MjiN6RbM, 0, m, &cSlice_MjiN6RbM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jWo6ouXo, 0, m, &cSlice_jWo6ouXo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5jokOcDY, 0, m, &cSlice_5jokOcDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yw9O8Xyn, 0, m, &cSlice_Yw9O8Xyn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dx0mE2vf, 0, m, &cSlice_dx0mE2vf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VSB3kbQG, 0, m, &cSlice_VSB3kbQG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mpK8DueT, 0, m, &cSlice_mpK8DueT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HDZRdYgp, 0, m, &cSlice_HDZRdYgp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f35TkILr, 0, m, &cSlice_f35TkILr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vlQdQezJ, 0, m, &cSlice_vlQdQezJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BXpqNI2P, 0, m, &cSlice_BXpqNI2P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_udUHZIjR, 0, m, &cSlice_udUHZIjR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_80Lzel6b, 0, m, &cSlice_80Lzel6b_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MJPbd6Wc, 0, m, &cSlice_MJPbd6Wc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pOE0t40i, 0, m, &cSlice_pOE0t40i_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lDAUisbp, 0, m, &cSlice_lDAUisbp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pWIJvuH0, 0, m, &cSlice_pWIJvuH0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FQQEHWos, 0, m, &cSlice_FQQEHWos_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_05N2CEmc, 0, m, &cSlice_05N2CEmc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3nKlWdjw, 0, m, &cSlice_3nKlWdjw_sendMessage);
}

void Heavy_Echomatica::cMsg_0uPTlV09_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_SeV7NcMe, 0, m, &cSlice_SeV7NcMe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kMgSthEF, 0, m, &cSlice_kMgSthEF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xMiNUYZk, 0, m, &cSlice_xMiNUYZk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ezfr4fub, 0, m, &cSlice_ezfr4fub_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_twYGbWSM, 0, m, &cSlice_twYGbWSM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wblvcw9f, 0, m, &cSlice_wblvcw9f_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OLX2EVea, 0, m, &cSlice_OLX2EVea_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OUBYcJrN, 0, m, &cSlice_OUBYcJrN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MjiN6RbM, 0, m, &cSlice_MjiN6RbM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jWo6ouXo, 0, m, &cSlice_jWo6ouXo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5jokOcDY, 0, m, &cSlice_5jokOcDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yw9O8Xyn, 0, m, &cSlice_Yw9O8Xyn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dx0mE2vf, 0, m, &cSlice_dx0mE2vf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VSB3kbQG, 0, m, &cSlice_VSB3kbQG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mpK8DueT, 0, m, &cSlice_mpK8DueT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HDZRdYgp, 0, m, &cSlice_HDZRdYgp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f35TkILr, 0, m, &cSlice_f35TkILr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vlQdQezJ, 0, m, &cSlice_vlQdQezJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BXpqNI2P, 0, m, &cSlice_BXpqNI2P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_udUHZIjR, 0, m, &cSlice_udUHZIjR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_80Lzel6b, 0, m, &cSlice_80Lzel6b_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MJPbd6Wc, 0, m, &cSlice_MJPbd6Wc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pOE0t40i, 0, m, &cSlice_pOE0t40i_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lDAUisbp, 0, m, &cSlice_lDAUisbp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pWIJvuH0, 0, m, &cSlice_pWIJvuH0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FQQEHWos, 0, m, &cSlice_FQQEHWos_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_05N2CEmc, 0, m, &cSlice_05N2CEmc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3nKlWdjw, 0, m, &cSlice_3nKlWdjw_sendMessage);
}

void Heavy_Echomatica::cMsg_J5wSbLMy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_SeV7NcMe, 0, m, &cSlice_SeV7NcMe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kMgSthEF, 0, m, &cSlice_kMgSthEF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xMiNUYZk, 0, m, &cSlice_xMiNUYZk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ezfr4fub, 0, m, &cSlice_ezfr4fub_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_twYGbWSM, 0, m, &cSlice_twYGbWSM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wblvcw9f, 0, m, &cSlice_wblvcw9f_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OLX2EVea, 0, m, &cSlice_OLX2EVea_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OUBYcJrN, 0, m, &cSlice_OUBYcJrN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MjiN6RbM, 0, m, &cSlice_MjiN6RbM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jWo6ouXo, 0, m, &cSlice_jWo6ouXo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5jokOcDY, 0, m, &cSlice_5jokOcDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yw9O8Xyn, 0, m, &cSlice_Yw9O8Xyn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dx0mE2vf, 0, m, &cSlice_dx0mE2vf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VSB3kbQG, 0, m, &cSlice_VSB3kbQG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mpK8DueT, 0, m, &cSlice_mpK8DueT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HDZRdYgp, 0, m, &cSlice_HDZRdYgp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f35TkILr, 0, m, &cSlice_f35TkILr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vlQdQezJ, 0, m, &cSlice_vlQdQezJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BXpqNI2P, 0, m, &cSlice_BXpqNI2P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_udUHZIjR, 0, m, &cSlice_udUHZIjR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_80Lzel6b, 0, m, &cSlice_80Lzel6b_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MJPbd6Wc, 0, m, &cSlice_MJPbd6Wc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pOE0t40i, 0, m, &cSlice_pOE0t40i_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lDAUisbp, 0, m, &cSlice_lDAUisbp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pWIJvuH0, 0, m, &cSlice_pWIJvuH0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FQQEHWos, 0, m, &cSlice_FQQEHWos_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_05N2CEmc, 0, m, &cSlice_05N2CEmc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3nKlWdjw, 0, m, &cSlice_3nKlWdjw_sendMessage);
}

void Heavy_Echomatica::cMsg_wL5yLqee_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_SeV7NcMe, 0, m, &cSlice_SeV7NcMe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kMgSthEF, 0, m, &cSlice_kMgSthEF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xMiNUYZk, 0, m, &cSlice_xMiNUYZk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ezfr4fub, 0, m, &cSlice_ezfr4fub_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_twYGbWSM, 0, m, &cSlice_twYGbWSM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wblvcw9f, 0, m, &cSlice_wblvcw9f_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OLX2EVea, 0, m, &cSlice_OLX2EVea_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OUBYcJrN, 0, m, &cSlice_OUBYcJrN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MjiN6RbM, 0, m, &cSlice_MjiN6RbM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jWo6ouXo, 0, m, &cSlice_jWo6ouXo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5jokOcDY, 0, m, &cSlice_5jokOcDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yw9O8Xyn, 0, m, &cSlice_Yw9O8Xyn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dx0mE2vf, 0, m, &cSlice_dx0mE2vf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VSB3kbQG, 0, m, &cSlice_VSB3kbQG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mpK8DueT, 0, m, &cSlice_mpK8DueT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HDZRdYgp, 0, m, &cSlice_HDZRdYgp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f35TkILr, 0, m, &cSlice_f35TkILr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vlQdQezJ, 0, m, &cSlice_vlQdQezJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BXpqNI2P, 0, m, &cSlice_BXpqNI2P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_udUHZIjR, 0, m, &cSlice_udUHZIjR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_80Lzel6b, 0, m, &cSlice_80Lzel6b_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MJPbd6Wc, 0, m, &cSlice_MJPbd6Wc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pOE0t40i, 0, m, &cSlice_pOE0t40i_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lDAUisbp, 0, m, &cSlice_lDAUisbp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pWIJvuH0, 0, m, &cSlice_pWIJvuH0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FQQEHWos, 0, m, &cSlice_FQQEHWos_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_05N2CEmc, 0, m, &cSlice_05N2CEmc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3nKlWdjw, 0, m, &cSlice_3nKlWdjw_sendMessage);
}

void Heavy_Echomatica::cMsg_dG0PGdQG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_SeV7NcMe, 0, m, &cSlice_SeV7NcMe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kMgSthEF, 0, m, &cSlice_kMgSthEF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xMiNUYZk, 0, m, &cSlice_xMiNUYZk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ezfr4fub, 0, m, &cSlice_ezfr4fub_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_twYGbWSM, 0, m, &cSlice_twYGbWSM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wblvcw9f, 0, m, &cSlice_wblvcw9f_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OLX2EVea, 0, m, &cSlice_OLX2EVea_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OUBYcJrN, 0, m, &cSlice_OUBYcJrN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MjiN6RbM, 0, m, &cSlice_MjiN6RbM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jWo6ouXo, 0, m, &cSlice_jWo6ouXo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5jokOcDY, 0, m, &cSlice_5jokOcDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yw9O8Xyn, 0, m, &cSlice_Yw9O8Xyn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dx0mE2vf, 0, m, &cSlice_dx0mE2vf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VSB3kbQG, 0, m, &cSlice_VSB3kbQG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mpK8DueT, 0, m, &cSlice_mpK8DueT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HDZRdYgp, 0, m, &cSlice_HDZRdYgp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f35TkILr, 0, m, &cSlice_f35TkILr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vlQdQezJ, 0, m, &cSlice_vlQdQezJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BXpqNI2P, 0, m, &cSlice_BXpqNI2P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_udUHZIjR, 0, m, &cSlice_udUHZIjR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_80Lzel6b, 0, m, &cSlice_80Lzel6b_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MJPbd6Wc, 0, m, &cSlice_MJPbd6Wc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pOE0t40i, 0, m, &cSlice_pOE0t40i_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lDAUisbp, 0, m, &cSlice_lDAUisbp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pWIJvuH0, 0, m, &cSlice_pWIJvuH0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FQQEHWos, 0, m, &cSlice_FQQEHWos_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_05N2CEmc, 0, m, &cSlice_05N2CEmc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3nKlWdjw, 0, m, &cSlice_3nKlWdjw_sendMessage);
}

void Heavy_Echomatica::cMsg_MSZlTqaA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_SeV7NcMe, 0, m, &cSlice_SeV7NcMe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kMgSthEF, 0, m, &cSlice_kMgSthEF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xMiNUYZk, 0, m, &cSlice_xMiNUYZk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ezfr4fub, 0, m, &cSlice_ezfr4fub_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_twYGbWSM, 0, m, &cSlice_twYGbWSM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wblvcw9f, 0, m, &cSlice_wblvcw9f_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OLX2EVea, 0, m, &cSlice_OLX2EVea_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OUBYcJrN, 0, m, &cSlice_OUBYcJrN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MjiN6RbM, 0, m, &cSlice_MjiN6RbM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jWo6ouXo, 0, m, &cSlice_jWo6ouXo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5jokOcDY, 0, m, &cSlice_5jokOcDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yw9O8Xyn, 0, m, &cSlice_Yw9O8Xyn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dx0mE2vf, 0, m, &cSlice_dx0mE2vf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VSB3kbQG, 0, m, &cSlice_VSB3kbQG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mpK8DueT, 0, m, &cSlice_mpK8DueT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HDZRdYgp, 0, m, &cSlice_HDZRdYgp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f35TkILr, 0, m, &cSlice_f35TkILr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vlQdQezJ, 0, m, &cSlice_vlQdQezJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BXpqNI2P, 0, m, &cSlice_BXpqNI2P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_udUHZIjR, 0, m, &cSlice_udUHZIjR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_80Lzel6b, 0, m, &cSlice_80Lzel6b_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MJPbd6Wc, 0, m, &cSlice_MJPbd6Wc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pOE0t40i, 0, m, &cSlice_pOE0t40i_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lDAUisbp, 0, m, &cSlice_lDAUisbp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pWIJvuH0, 0, m, &cSlice_pWIJvuH0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FQQEHWos, 0, m, &cSlice_FQQEHWos_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_05N2CEmc, 0, m, &cSlice_05N2CEmc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3nKlWdjw, 0, m, &cSlice_3nKlWdjw_sendMessage);
}

void Heavy_Echomatica::cMsg_P0OmiDFd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_SeV7NcMe, 0, m, &cSlice_SeV7NcMe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kMgSthEF, 0, m, &cSlice_kMgSthEF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xMiNUYZk, 0, m, &cSlice_xMiNUYZk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ezfr4fub, 0, m, &cSlice_ezfr4fub_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_twYGbWSM, 0, m, &cSlice_twYGbWSM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wblvcw9f, 0, m, &cSlice_wblvcw9f_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OLX2EVea, 0, m, &cSlice_OLX2EVea_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OUBYcJrN, 0, m, &cSlice_OUBYcJrN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MjiN6RbM, 0, m, &cSlice_MjiN6RbM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jWo6ouXo, 0, m, &cSlice_jWo6ouXo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5jokOcDY, 0, m, &cSlice_5jokOcDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yw9O8Xyn, 0, m, &cSlice_Yw9O8Xyn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dx0mE2vf, 0, m, &cSlice_dx0mE2vf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VSB3kbQG, 0, m, &cSlice_VSB3kbQG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mpK8DueT, 0, m, &cSlice_mpK8DueT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HDZRdYgp, 0, m, &cSlice_HDZRdYgp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f35TkILr, 0, m, &cSlice_f35TkILr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vlQdQezJ, 0, m, &cSlice_vlQdQezJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BXpqNI2P, 0, m, &cSlice_BXpqNI2P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_udUHZIjR, 0, m, &cSlice_udUHZIjR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_80Lzel6b, 0, m, &cSlice_80Lzel6b_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MJPbd6Wc, 0, m, &cSlice_MJPbd6Wc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pOE0t40i, 0, m, &cSlice_pOE0t40i_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lDAUisbp, 0, m, &cSlice_lDAUisbp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pWIJvuH0, 0, m, &cSlice_pWIJvuH0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FQQEHWos, 0, m, &cSlice_FQQEHWos_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_05N2CEmc, 0, m, &cSlice_05N2CEmc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3nKlWdjw, 0, m, &cSlice_3nKlWdjw_sendMessage);
}

void Heavy_Echomatica::cMsg_utMKme3p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_SeV7NcMe, 0, m, &cSlice_SeV7NcMe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kMgSthEF, 0, m, &cSlice_kMgSthEF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xMiNUYZk, 0, m, &cSlice_xMiNUYZk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ezfr4fub, 0, m, &cSlice_ezfr4fub_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_twYGbWSM, 0, m, &cSlice_twYGbWSM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wblvcw9f, 0, m, &cSlice_wblvcw9f_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OLX2EVea, 0, m, &cSlice_OLX2EVea_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OUBYcJrN, 0, m, &cSlice_OUBYcJrN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MjiN6RbM, 0, m, &cSlice_MjiN6RbM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jWo6ouXo, 0, m, &cSlice_jWo6ouXo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5jokOcDY, 0, m, &cSlice_5jokOcDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yw9O8Xyn, 0, m, &cSlice_Yw9O8Xyn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dx0mE2vf, 0, m, &cSlice_dx0mE2vf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VSB3kbQG, 0, m, &cSlice_VSB3kbQG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mpK8DueT, 0, m, &cSlice_mpK8DueT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HDZRdYgp, 0, m, &cSlice_HDZRdYgp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f35TkILr, 0, m, &cSlice_f35TkILr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vlQdQezJ, 0, m, &cSlice_vlQdQezJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BXpqNI2P, 0, m, &cSlice_BXpqNI2P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_udUHZIjR, 0, m, &cSlice_udUHZIjR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_80Lzel6b, 0, m, &cSlice_80Lzel6b_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MJPbd6Wc, 0, m, &cSlice_MJPbd6Wc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pOE0t40i, 0, m, &cSlice_pOE0t40i_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lDAUisbp, 0, m, &cSlice_lDAUisbp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pWIJvuH0, 0, m, &cSlice_pWIJvuH0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FQQEHWos, 0, m, &cSlice_FQQEHWos_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_05N2CEmc, 0, m, &cSlice_05N2CEmc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3nKlWdjw, 0, m, &cSlice_3nKlWdjw_sendMessage);
}

void Heavy_Echomatica::cMsg_wm6tOExO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_SeV7NcMe, 0, m, &cSlice_SeV7NcMe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kMgSthEF, 0, m, &cSlice_kMgSthEF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xMiNUYZk, 0, m, &cSlice_xMiNUYZk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ezfr4fub, 0, m, &cSlice_ezfr4fub_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_twYGbWSM, 0, m, &cSlice_twYGbWSM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wblvcw9f, 0, m, &cSlice_wblvcw9f_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OLX2EVea, 0, m, &cSlice_OLX2EVea_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OUBYcJrN, 0, m, &cSlice_OUBYcJrN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MjiN6RbM, 0, m, &cSlice_MjiN6RbM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jWo6ouXo, 0, m, &cSlice_jWo6ouXo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5jokOcDY, 0, m, &cSlice_5jokOcDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yw9O8Xyn, 0, m, &cSlice_Yw9O8Xyn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dx0mE2vf, 0, m, &cSlice_dx0mE2vf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VSB3kbQG, 0, m, &cSlice_VSB3kbQG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mpK8DueT, 0, m, &cSlice_mpK8DueT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HDZRdYgp, 0, m, &cSlice_HDZRdYgp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f35TkILr, 0, m, &cSlice_f35TkILr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vlQdQezJ, 0, m, &cSlice_vlQdQezJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BXpqNI2P, 0, m, &cSlice_BXpqNI2P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_udUHZIjR, 0, m, &cSlice_udUHZIjR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_80Lzel6b, 0, m, &cSlice_80Lzel6b_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MJPbd6Wc, 0, m, &cSlice_MJPbd6Wc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pOE0t40i, 0, m, &cSlice_pOE0t40i_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lDAUisbp, 0, m, &cSlice_lDAUisbp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pWIJvuH0, 0, m, &cSlice_pWIJvuH0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FQQEHWos, 0, m, &cSlice_FQQEHWos_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_05N2CEmc, 0, m, &cSlice_05N2CEmc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3nKlWdjw, 0, m, &cSlice_3nKlWdjw_sendMessage);
}

void Heavy_Echomatica::cMsg_725RKX8S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_SeV7NcMe, 0, m, &cSlice_SeV7NcMe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kMgSthEF, 0, m, &cSlice_kMgSthEF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xMiNUYZk, 0, m, &cSlice_xMiNUYZk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ezfr4fub, 0, m, &cSlice_ezfr4fub_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_twYGbWSM, 0, m, &cSlice_twYGbWSM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wblvcw9f, 0, m, &cSlice_wblvcw9f_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OLX2EVea, 0, m, &cSlice_OLX2EVea_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OUBYcJrN, 0, m, &cSlice_OUBYcJrN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MjiN6RbM, 0, m, &cSlice_MjiN6RbM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jWo6ouXo, 0, m, &cSlice_jWo6ouXo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5jokOcDY, 0, m, &cSlice_5jokOcDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yw9O8Xyn, 0, m, &cSlice_Yw9O8Xyn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dx0mE2vf, 0, m, &cSlice_dx0mE2vf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VSB3kbQG, 0, m, &cSlice_VSB3kbQG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mpK8DueT, 0, m, &cSlice_mpK8DueT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HDZRdYgp, 0, m, &cSlice_HDZRdYgp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f35TkILr, 0, m, &cSlice_f35TkILr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vlQdQezJ, 0, m, &cSlice_vlQdQezJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BXpqNI2P, 0, m, &cSlice_BXpqNI2P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_udUHZIjR, 0, m, &cSlice_udUHZIjR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_80Lzel6b, 0, m, &cSlice_80Lzel6b_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MJPbd6Wc, 0, m, &cSlice_MJPbd6Wc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pOE0t40i, 0, m, &cSlice_pOE0t40i_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lDAUisbp, 0, m, &cSlice_lDAUisbp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pWIJvuH0, 0, m, &cSlice_pWIJvuH0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FQQEHWos, 0, m, &cSlice_FQQEHWos_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_05N2CEmc, 0, m, &cSlice_05N2CEmc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3nKlWdjw, 0, m, &cSlice_3nKlWdjw_sendMessage);
}

void Heavy_Echomatica::cMsg_1fZL2W9t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_SeV7NcMe, 0, m, &cSlice_SeV7NcMe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kMgSthEF, 0, m, &cSlice_kMgSthEF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xMiNUYZk, 0, m, &cSlice_xMiNUYZk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ezfr4fub, 0, m, &cSlice_ezfr4fub_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_twYGbWSM, 0, m, &cSlice_twYGbWSM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wblvcw9f, 0, m, &cSlice_wblvcw9f_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OLX2EVea, 0, m, &cSlice_OLX2EVea_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OUBYcJrN, 0, m, &cSlice_OUBYcJrN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MjiN6RbM, 0, m, &cSlice_MjiN6RbM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jWo6ouXo, 0, m, &cSlice_jWo6ouXo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5jokOcDY, 0, m, &cSlice_5jokOcDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yw9O8Xyn, 0, m, &cSlice_Yw9O8Xyn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dx0mE2vf, 0, m, &cSlice_dx0mE2vf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VSB3kbQG, 0, m, &cSlice_VSB3kbQG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mpK8DueT, 0, m, &cSlice_mpK8DueT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HDZRdYgp, 0, m, &cSlice_HDZRdYgp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f35TkILr, 0, m, &cSlice_f35TkILr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vlQdQezJ, 0, m, &cSlice_vlQdQezJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BXpqNI2P, 0, m, &cSlice_BXpqNI2P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_udUHZIjR, 0, m, &cSlice_udUHZIjR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_80Lzel6b, 0, m, &cSlice_80Lzel6b_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MJPbd6Wc, 0, m, &cSlice_MJPbd6Wc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pOE0t40i, 0, m, &cSlice_pOE0t40i_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lDAUisbp, 0, m, &cSlice_lDAUisbp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pWIJvuH0, 0, m, &cSlice_pWIJvuH0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FQQEHWos, 0, m, &cSlice_FQQEHWos_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_05N2CEmc, 0, m, &cSlice_05N2CEmc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3nKlWdjw, 0, m, &cSlice_3nKlWdjw_sendMessage);
}

void Heavy_Echomatica::cMsg_m38h3iHX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_SeV7NcMe, 0, m, &cSlice_SeV7NcMe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kMgSthEF, 0, m, &cSlice_kMgSthEF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xMiNUYZk, 0, m, &cSlice_xMiNUYZk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ezfr4fub, 0, m, &cSlice_ezfr4fub_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_twYGbWSM, 0, m, &cSlice_twYGbWSM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wblvcw9f, 0, m, &cSlice_wblvcw9f_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OLX2EVea, 0, m, &cSlice_OLX2EVea_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OUBYcJrN, 0, m, &cSlice_OUBYcJrN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MjiN6RbM, 0, m, &cSlice_MjiN6RbM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jWo6ouXo, 0, m, &cSlice_jWo6ouXo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5jokOcDY, 0, m, &cSlice_5jokOcDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yw9O8Xyn, 0, m, &cSlice_Yw9O8Xyn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dx0mE2vf, 0, m, &cSlice_dx0mE2vf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VSB3kbQG, 0, m, &cSlice_VSB3kbQG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mpK8DueT, 0, m, &cSlice_mpK8DueT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HDZRdYgp, 0, m, &cSlice_HDZRdYgp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f35TkILr, 0, m, &cSlice_f35TkILr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vlQdQezJ, 0, m, &cSlice_vlQdQezJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BXpqNI2P, 0, m, &cSlice_BXpqNI2P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_udUHZIjR, 0, m, &cSlice_udUHZIjR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_80Lzel6b, 0, m, &cSlice_80Lzel6b_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MJPbd6Wc, 0, m, &cSlice_MJPbd6Wc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pOE0t40i, 0, m, &cSlice_pOE0t40i_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lDAUisbp, 0, m, &cSlice_lDAUisbp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pWIJvuH0, 0, m, &cSlice_pWIJvuH0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FQQEHWos, 0, m, &cSlice_FQQEHWos_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_05N2CEmc, 0, m, &cSlice_05N2CEmc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3nKlWdjw, 0, m, &cSlice_3nKlWdjw_sendMessage);
}

void Heavy_Echomatica::cMsg_m93QsnOf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_SeV7NcMe, 0, m, &cSlice_SeV7NcMe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kMgSthEF, 0, m, &cSlice_kMgSthEF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xMiNUYZk, 0, m, &cSlice_xMiNUYZk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ezfr4fub, 0, m, &cSlice_ezfr4fub_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_twYGbWSM, 0, m, &cSlice_twYGbWSM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wblvcw9f, 0, m, &cSlice_wblvcw9f_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OLX2EVea, 0, m, &cSlice_OLX2EVea_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OUBYcJrN, 0, m, &cSlice_OUBYcJrN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MjiN6RbM, 0, m, &cSlice_MjiN6RbM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jWo6ouXo, 0, m, &cSlice_jWo6ouXo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5jokOcDY, 0, m, &cSlice_5jokOcDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yw9O8Xyn, 0, m, &cSlice_Yw9O8Xyn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dx0mE2vf, 0, m, &cSlice_dx0mE2vf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VSB3kbQG, 0, m, &cSlice_VSB3kbQG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mpK8DueT, 0, m, &cSlice_mpK8DueT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HDZRdYgp, 0, m, &cSlice_HDZRdYgp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f35TkILr, 0, m, &cSlice_f35TkILr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vlQdQezJ, 0, m, &cSlice_vlQdQezJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BXpqNI2P, 0, m, &cSlice_BXpqNI2P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_udUHZIjR, 0, m, &cSlice_udUHZIjR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_80Lzel6b, 0, m, &cSlice_80Lzel6b_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MJPbd6Wc, 0, m, &cSlice_MJPbd6Wc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pOE0t40i, 0, m, &cSlice_pOE0t40i_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lDAUisbp, 0, m, &cSlice_lDAUisbp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pWIJvuH0, 0, m, &cSlice_pWIJvuH0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FQQEHWos, 0, m, &cSlice_FQQEHWos_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_05N2CEmc, 0, m, &cSlice_05N2CEmc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3nKlWdjw, 0, m, &cSlice_3nKlWdjw_sendMessage);
}

void Heavy_Echomatica::cMsg_gFFyUDJk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_SeV7NcMe, 0, m, &cSlice_SeV7NcMe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kMgSthEF, 0, m, &cSlice_kMgSthEF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xMiNUYZk, 0, m, &cSlice_xMiNUYZk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ezfr4fub, 0, m, &cSlice_ezfr4fub_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_twYGbWSM, 0, m, &cSlice_twYGbWSM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wblvcw9f, 0, m, &cSlice_wblvcw9f_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OLX2EVea, 0, m, &cSlice_OLX2EVea_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OUBYcJrN, 0, m, &cSlice_OUBYcJrN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MjiN6RbM, 0, m, &cSlice_MjiN6RbM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jWo6ouXo, 0, m, &cSlice_jWo6ouXo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5jokOcDY, 0, m, &cSlice_5jokOcDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yw9O8Xyn, 0, m, &cSlice_Yw9O8Xyn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dx0mE2vf, 0, m, &cSlice_dx0mE2vf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VSB3kbQG, 0, m, &cSlice_VSB3kbQG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mpK8DueT, 0, m, &cSlice_mpK8DueT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HDZRdYgp, 0, m, &cSlice_HDZRdYgp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f35TkILr, 0, m, &cSlice_f35TkILr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vlQdQezJ, 0, m, &cSlice_vlQdQezJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BXpqNI2P, 0, m, &cSlice_BXpqNI2P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_udUHZIjR, 0, m, &cSlice_udUHZIjR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_80Lzel6b, 0, m, &cSlice_80Lzel6b_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MJPbd6Wc, 0, m, &cSlice_MJPbd6Wc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pOE0t40i, 0, m, &cSlice_pOE0t40i_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lDAUisbp, 0, m, &cSlice_lDAUisbp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pWIJvuH0, 0, m, &cSlice_pWIJvuH0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FQQEHWos, 0, m, &cSlice_FQQEHWos_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_05N2CEmc, 0, m, &cSlice_05N2CEmc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3nKlWdjw, 0, m, &cSlice_3nKlWdjw_sendMessage);
}

void Heavy_Echomatica::cMsg_ouYxhGv4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_SeV7NcMe, 0, m, &cSlice_SeV7NcMe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kMgSthEF, 0, m, &cSlice_kMgSthEF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xMiNUYZk, 0, m, &cSlice_xMiNUYZk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ezfr4fub, 0, m, &cSlice_ezfr4fub_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_twYGbWSM, 0, m, &cSlice_twYGbWSM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wblvcw9f, 0, m, &cSlice_wblvcw9f_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OLX2EVea, 0, m, &cSlice_OLX2EVea_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OUBYcJrN, 0, m, &cSlice_OUBYcJrN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MjiN6RbM, 0, m, &cSlice_MjiN6RbM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jWo6ouXo, 0, m, &cSlice_jWo6ouXo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5jokOcDY, 0, m, &cSlice_5jokOcDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yw9O8Xyn, 0, m, &cSlice_Yw9O8Xyn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dx0mE2vf, 0, m, &cSlice_dx0mE2vf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VSB3kbQG, 0, m, &cSlice_VSB3kbQG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mpK8DueT, 0, m, &cSlice_mpK8DueT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HDZRdYgp, 0, m, &cSlice_HDZRdYgp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_f35TkILr, 0, m, &cSlice_f35TkILr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vlQdQezJ, 0, m, &cSlice_vlQdQezJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BXpqNI2P, 0, m, &cSlice_BXpqNI2P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_udUHZIjR, 0, m, &cSlice_udUHZIjR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_80Lzel6b, 0, m, &cSlice_80Lzel6b_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MJPbd6Wc, 0, m, &cSlice_MJPbd6Wc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pOE0t40i, 0, m, &cSlice_pOE0t40i_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lDAUisbp, 0, m, &cSlice_lDAUisbp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pWIJvuH0, 0, m, &cSlice_pWIJvuH0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FQQEHWos, 0, m, &cSlice_FQQEHWos_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_05N2CEmc, 0, m, &cSlice_05N2CEmc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3nKlWdjw, 0, m, &cSlice_3nKlWdjw_sendMessage);
}

void Heavy_Echomatica::cMsg_PcOhtR4L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Rso7Taax_sendMessage);
}

void Heavy_Echomatica::cSystem_Rso7Taax_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Vza7DvDW_sendMessage);
}

void Heavy_Echomatica::cVar_tfL4MZEB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cuf26cIy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_H4Tq8ZGk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_CewrYxFd_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_YMye6L1J, m);
}

void Heavy_Echomatica::cBinop_Vza7DvDW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_zsnI7YDl, m);
}

void Heavy_Echomatica::cMsg_cuf26cIy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_H4Tq8ZGk_sendMessage);
}

void Heavy_Echomatica::cBinop_CewrYxFd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_RAy8FzNo, m);
}

void Heavy_Echomatica::cMsg_XnF1nTpR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_igUEANEh_sendMessage);
}

void Heavy_Echomatica::cSystem_igUEANEh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_KkJpyLBe_sendMessage);
}

void Heavy_Echomatica::cVar_nRfpX3j8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_STGq0KUj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_X4N3D90r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_IoHaIH4W_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_I7y3KmZu, m);
}

void Heavy_Echomatica::cBinop_KkJpyLBe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_MZGPrzuU, m);
}

void Heavy_Echomatica::cMsg_STGq0KUj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_X4N3D90r_sendMessage);
}

void Heavy_Echomatica::cBinop_IoHaIH4W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Jk6B1gRX, m);
}

void Heavy_Echomatica::cVar_RG0XaZ6G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_1cWbkLA3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_B3vXl0Fb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_VOHj1ZCy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_vX7mvaWY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_JdQ4X9JA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_PF9auPHw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_QxxzmVAi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_KkaXcXo4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_BlOs1cPd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_3WLWMr1D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_I11MkeOI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cPack_erHTlg2C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_yabwkAP1, 0, m, NULL);
}

void Heavy_Echomatica::cPack_18TNexwQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_eQdG8VWG, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_8ZFlu1AO, 0, m, &cVar_8ZFlu1AO_sendMessage);
}

void Heavy_Echomatica::cPack_unQxgdww_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_A0c5Ngzi, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_TAViNKH4, 0, m, &cVar_TAViNKH4_sendMessage);
}

void Heavy_Echomatica::cPack_Kr1KSWjj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_4QZ4cUOb, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_fZ1HYh1O, 0, m, &cVar_fZ1HYh1O_sendMessage);
}

void Heavy_Echomatica::cPack_ES371sCB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_SAC1H6GT, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_WHGJqkeN, 0, m, &cVar_WHGJqkeN_sendMessage);
}

void Heavy_Echomatica::cPack_QiksLS71_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_58MYh6sM, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_66zxFCmm, 0, m, &cVar_66zxFCmm_sendMessage);
}

void Heavy_Echomatica::cPack_A4CXuNhb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_jyz8QVfx, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_sLjtBOv2, 0, m, &cVar_sLjtBOv2_sendMessage);
}

void Heavy_Echomatica::cSlice_SeV7NcMe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_B0gqALKy_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_kMgSthEF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_L3DTqCUJ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_xMiNUYZk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_6afl00A4_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_ezfr4fub_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_BP2Co7P5_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_twYGbWSM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_XL2yOwQC_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_wblvcw9f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ZSzLSWKU_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_OLX2EVea_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_qWK6OhSf_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_OUBYcJrN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_FUwguBJ6_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_MjiN6RbM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Ns5QR0z1_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_jWo6ouXo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_4rYTMqGj_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_5jokOcDY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Y0E4YAfq_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_Yw9O8Xyn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_oSfRW4Ur_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_dx0mE2vf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_kQyTV4pc_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_VSB3kbQG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_QD3OByd2_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_mpK8DueT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_iUmL593X_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_HDZRdYgp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_FI33YUtX_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_f35TkILr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_94uXibs6_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_vlQdQezJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_NzSeWTIi_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_BXpqNI2P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_nwfzWR2g_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_udUHZIjR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Ifz0uQz3_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_80Lzel6b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_KmQcJtRW_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_MJPbd6Wc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_yXx8rEO2_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_pOE0t40i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_cT3uz5B8_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_lDAUisbp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Hml5rla4_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_pWIJvuH0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Uarljnnp_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_FQQEHWos_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_UyGuF1yD_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_05N2CEmc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_tNjpXvgC_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_3nKlWdjw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_JW9EGjNj_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_cYCHXWb4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_xjUrO69q_sendMessage);
}

void Heavy_Echomatica::cBinop_xjUrO69q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_M7FBAp55_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_xHYEF3UA_sendMessage);
}

void Heavy_Echomatica::cVar_fgKmHVOR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_V7oKM418_sendMessage);
}

void Heavy_Echomatica::cMsg_CIaTfpr0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_8jYPQSQc_sendMessage);
}

void Heavy_Echomatica::cSystem_8jYPQSQc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uKqyHqjw, HV_BINOP_DIVIDE, 1, m, &cBinop_uKqyHqjw_sendMessage);
}

void Heavy_Echomatica::cBinop_M7FBAp55_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_O5Pr1PJq_sendMessage);
}

void Heavy_Echomatica::cBinop_O5Pr1PJq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_vHJXrvjT, m);
}

void Heavy_Echomatica::cMsg_jyk6CmjR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_gWUufkkb_sendMessage);
}

void Heavy_Echomatica::cBinop_gWUufkkb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_cYCHXWb4_sendMessage);
}

void Heavy_Echomatica::cBinop_xHYEF3UA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ynExFKrl, m);
}

void Heavy_Echomatica::cBinop_V7oKM418_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_e5d5bK3W_sendMessage);
}

void Heavy_Echomatica::cBinop_e5d5bK3W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uKqyHqjw, HV_BINOP_DIVIDE, 0, m, &cBinop_uKqyHqjw_sendMessage);
}

void Heavy_Echomatica::cBinop_uKqyHqjw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jyk6CmjR_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_YG2RJtzY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_YAJyw6Le_sendMessage);
}

void Heavy_Echomatica::cBinop_YAJyw6Le_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_p8qjoWVS_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_biwdsdH7_sendMessage);
}

void Heavy_Echomatica::cVar_bxBqym4O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_w9UEgBts_sendMessage);
}

void Heavy_Echomatica::cMsg_6JVIXyPy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_x8fB4R7J_sendMessage);
}

void Heavy_Echomatica::cSystem_x8fB4R7J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rlePq5Ip, HV_BINOP_DIVIDE, 1, m, &cBinop_rlePq5Ip_sendMessage);
}

void Heavy_Echomatica::cBinop_p8qjoWVS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_7vJeqe9K_sendMessage);
}

void Heavy_Echomatica::cBinop_7vJeqe9K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_VsN3vcrg, m);
}

void Heavy_Echomatica::cMsg_eH7RgnXe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_FkNQrmwt_sendMessage);
}

void Heavy_Echomatica::cBinop_FkNQrmwt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_YG2RJtzY_sendMessage);
}

void Heavy_Echomatica::cBinop_biwdsdH7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_unYm8T2a, m);
}

void Heavy_Echomatica::cBinop_w9UEgBts_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_0pyGIVVm_sendMessage);
}

void Heavy_Echomatica::cBinop_0pyGIVVm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rlePq5Ip, HV_BINOP_DIVIDE, 0, m, &cBinop_rlePq5Ip_sendMessage);
}

void Heavy_Echomatica::cBinop_rlePq5Ip_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_eH7RgnXe_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_OHSACRH5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_XBGKNpdk_sendMessage);
}

void Heavy_Echomatica::cBinop_XBGKNpdk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_WikoMJpP_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_RudghjVL_sendMessage);
}

void Heavy_Echomatica::cVar_1YFc9OdX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_CeNRKFTk_sendMessage);
}

void Heavy_Echomatica::cMsg_AeFssC0c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_4kK2T0yO_sendMessage);
}

void Heavy_Echomatica::cSystem_4kK2T0yO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QT0OecLo, HV_BINOP_DIVIDE, 1, m, &cBinop_QT0OecLo_sendMessage);
}

void Heavy_Echomatica::cBinop_WikoMJpP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_GoAL8l7F_sendMessage);
}

void Heavy_Echomatica::cBinop_GoAL8l7F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_WD5jaOIV, m);
}

void Heavy_Echomatica::cMsg_M3226l7w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_nBGboyo1_sendMessage);
}

void Heavy_Echomatica::cBinop_nBGboyo1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_OHSACRH5_sendMessage);
}

void Heavy_Echomatica::cBinop_RudghjVL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_23LYqawl, m);
}

void Heavy_Echomatica::cBinop_CeNRKFTk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_L3sYzX7D_sendMessage);
}

void Heavy_Echomatica::cBinop_L3sYzX7D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QT0OecLo, HV_BINOP_DIVIDE, 0, m, &cBinop_QT0OecLo_sendMessage);
}

void Heavy_Echomatica::cBinop_QT0OecLo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_M3226l7w_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_znVkxzaI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CzRumNkt, HV_BINOP_MULTIPLY, 0, m, &cBinop_CzRumNkt_sendMessage);
}

void Heavy_Echomatica::cMsg_1IRaDBRl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_fdlQTO2p_sendMessage);
}

void Heavy_Echomatica::cSystem_fdlQTO2p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6iwiO3zV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_CzRumNkt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_EA5Vicgq_sendMessage);
}

void Heavy_Echomatica::cBinop_0MJZEQmc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CzRumNkt, HV_BINOP_MULTIPLY, 1, m, &cBinop_CzRumNkt_sendMessage);
}

void Heavy_Echomatica::cMsg_6iwiO3zV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_0MJZEQmc_sendMessage);
}

void Heavy_Echomatica::cBinop_EA5Vicgq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_vLvq0Ts9_sendMessage);
}

void Heavy_Echomatica::cBinop_vLvq0Ts9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_RoRH1TAW_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_lXmojnzH, m);
}

void Heavy_Echomatica::cBinop_RoRH1TAW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_fFG1x9jR, m);
}

void Heavy_Echomatica::cVar_sb4o7qQ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_J6myOIN1, HV_BINOP_MULTIPLY, 0, m, &cBinop_J6myOIN1_sendMessage);
}

void Heavy_Echomatica::cMsg_Uyupicmo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ZrwR2fWu_sendMessage);
}

void Heavy_Echomatica::cSystem_ZrwR2fWu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qXvgANkL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_J6myOIN1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_EGSgHpHH_sendMessage);
}

void Heavy_Echomatica::cBinop_qyNzO3af_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_J6myOIN1, HV_BINOP_MULTIPLY, 1, m, &cBinop_J6myOIN1_sendMessage);
}

void Heavy_Echomatica::cMsg_qXvgANkL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_qyNzO3af_sendMessage);
}

void Heavy_Echomatica::cBinop_EGSgHpHH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_6pTvv4XS_sendMessage);
}

void Heavy_Echomatica::cBinop_6pTvv4XS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_ntGszaM1_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_rtvfk9AG, m);
}

void Heavy_Echomatica::cBinop_ntGszaM1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_cm2fvFVT, m);
}

void Heavy_Echomatica::cVar_0R698Oyy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_unT6Ly3W, HV_BINOP_MULTIPLY, 0, m, &cBinop_unT6Ly3W_sendMessage);
}

void Heavy_Echomatica::cMsg_Ig5rSrWg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_xQkiob64_sendMessage);
}

void Heavy_Echomatica::cSystem_xQkiob64_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_AEWS8MVR_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_unT6Ly3W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_saDur2hV_sendMessage);
}

void Heavy_Echomatica::cBinop_duRZRhbK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_unT6Ly3W, HV_BINOP_MULTIPLY, 1, m, &cBinop_unT6Ly3W_sendMessage);
}

void Heavy_Echomatica::cMsg_AEWS8MVR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_duRZRhbK_sendMessage);
}

void Heavy_Echomatica::cBinop_saDur2hV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_M3LEiz0o_sendMessage);
}

void Heavy_Echomatica::cBinop_M3LEiz0o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_zAj8HgnC_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_V0kDjerQ, m);
}

void Heavy_Echomatica::cBinop_zAj8HgnC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_nmx2Mwf7, m);
}

void Heavy_Echomatica::cMsg_rrqB1Y3Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Kx8nXFEZ_sendMessage);
}

void Heavy_Echomatica::cSystem_Kx8nXFEZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ITopFTdj, HV_BINOP_DIVIDE, 1, m, &cBinop_ITopFTdj_sendMessage);
}

void Heavy_Echomatica::cVar_TCIdLR0x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_GtpRYjWs_sendMessage);
}

void Heavy_Echomatica::cVar_fZY9orFf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.001f, 0, m, &cBinop_H8zX2PuV_sendMessage);
}

void Heavy_Echomatica::cUnop_XTvDr0OL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_JakWLzDP_sendMessage);
}

void Heavy_Echomatica::cBinop_ITopFTdj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_augMW0vl, HV_BINOP_MULTIPLY, 1, m, &cBinop_augMW0vl_sendMessage);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_XTvDr0OL_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_NkGDK2ph, HV_BINOP_DIVIDE, 0, m, &cBinop_NkGDK2ph_sendMessage);
}

void Heavy_Echomatica::cBinop_GtpRYjWs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ITopFTdj, HV_BINOP_DIVIDE, 0, m, &cBinop_ITopFTdj_sendMessage);
}

void Heavy_Echomatica::cBinop_NkGDK2ph_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_lCqmraIw_sendMessage);
}

void Heavy_Echomatica::cBinop_AUNJ7OBr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_DbdRsOo7_sendMessage);
}

void Heavy_Echomatica::cBinop_DbdRsOo7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_oO0FIF77_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_huPqiRiS, HV_BINOP_MULTIPLY, 0, m, &cBinop_huPqiRiS_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_augMW0vl, HV_BINOP_MULTIPLY, 0, m, &cBinop_augMW0vl_sendMessage);
}

void Heavy_Echomatica::cBinop_JakWLzDP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_huPqiRiS, HV_BINOP_MULTIPLY, 1, m, &cBinop_huPqiRiS_sendMessage);
}

void Heavy_Echomatica::cBinop_huPqiRiS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_gdiPTpIh_sendMessage);
}

void Heavy_Echomatica::cCast_9aqc6YET_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TCIdLR0x, 0, m, &cVar_TCIdLR0x_sendMessage);
}

void Heavy_Echomatica::cBinop_64OXSK6P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_9XX8ox8x_sendMessage);
}

void Heavy_Echomatica::cBinop_9XX8ox8x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_lIIzWQFw, 5, m);
}

void Heavy_Echomatica::cBinop_gdiPTpIh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_lIIzWQFw, 4, m);
}

void Heavy_Echomatica::cBinop_6ZcAKJa9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_p6QZM3bi, HV_BINOP_MULTIPLY, 0, m, &cBinop_p6QZM3bi_sendMessage);
}

void Heavy_Echomatica::cBinop_augMW0vl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NBxiM6Nx, HV_BINOP_ADD, 1, m, &cBinop_NBxiM6Nx_sendMessage);
}

void Heavy_Echomatica::cBinop_oO0FIF77_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_64OXSK6P_sendMessage);
}

void Heavy_Echomatica::cBinop_NBxiM6Nx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_p6QZM3bi, HV_BINOP_MULTIPLY, 1, m, &cBinop_p6QZM3bi_sendMessage);
}

void Heavy_Echomatica::cBinop_p6QZM3bi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_lIIzWQFw, 1, m);
}

void Heavy_Echomatica::cBinop_H8zX2PuV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NkGDK2ph, HV_BINOP_DIVIDE, 1, m, &cBinop_NkGDK2ph_sendMessage);
}

void Heavy_Echomatica::cBinop_lCqmraIw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_AUNJ7OBr_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_NBxiM6Nx, HV_BINOP_ADD, 0, m, &cBinop_NBxiM6Nx_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_6ZcAKJa9_sendMessage);
}

void Heavy_Echomatica::cVar_8ZFlu1AO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_TAViNKH4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_sLjtBOv2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_fZ1HYh1O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_WHGJqkeN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_66zxFCmm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cSlice_nOXRP60F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_vJCNziVW, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_pjUKlOwf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_2PzTEcSR, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_VUOnwhry_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_axuQHCwH, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_JLTaHZgC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_QXRuIFim, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSwitchcase_TINKDUNG_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ql0xhkip_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_K5WW6F42_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_ql0xhkip_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_k723L3Ms_sendMessage);
}

void Heavy_Echomatica::cPack_uRYAjskS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_RBkXKFcY, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_UZOKKeRC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_lIgqdW2p_sendMessage);
}

void Heavy_Echomatica::cSystem_lIgqdW2p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_NVJo4MGg_sendMessage);
}

void Heavy_Echomatica::cDelay_WqEX4ObD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_WqEX4ObD, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_QbY3az93, 0, m, &cDelay_QbY3az93_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_WqEX4ObD, 0, m, &cDelay_WqEX4ObD_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_sphWnPCr, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_QbY3az93_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_QbY3az93, m);
  cMsg_aSTdm4Yf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_SwTSctFu_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_2oxg7Spn_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_BOxsvkfd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SwLgRP6Z_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_Sk97yiQy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PIALlRkl_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_WqEX4ObD, 2, m, &cDelay_WqEX4ObD_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MtvTZKEd_sendMessage);
}

void Heavy_Echomatica::cMsg_SwLgRP6Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_Sk97yiQy, 0, m, &hTable_Sk97yiQy_sendMessage);
}

void Heavy_Echomatica::cBinop_NVJo4MGg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 40.0f, 0, m, &cBinop_BOxsvkfd_sendMessage);
}

void Heavy_Echomatica::cMsg_aSTdm4Yf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_Sk97yiQy, 0, m, &hTable_Sk97yiQy_sendMessage);
}

void Heavy_Echomatica::cCast_MtvTZKEd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_WqEX4ObD, 0, m, &cDelay_WqEX4ObD_sendMessage);
}

void Heavy_Echomatica::cMsg_PIALlRkl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_QbY3az93, 2, m, &cDelay_QbY3az93_sendMessage);
}

void Heavy_Echomatica::cMsg_2oxg7Spn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_sphWnPCr, 1, m, NULL);
}

void Heavy_Echomatica::cVar_DTOWs1Wa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_DFlX2U7t, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_EfuqqN8k, m);
}

void Heavy_Echomatica::cMsg_XERXoTDn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_sXeSL5cU_sendMessage);
}

void Heavy_Echomatica::cSystem_sXeSL5cU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_EBHKeFrd_sendMessage);
}

void Heavy_Echomatica::cVar_opxYNif3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uHlOfq8l_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_cCuZNaD2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_J7FigIDf_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_gC2WhgZJ, m);
}

void Heavy_Echomatica::cBinop_EBHKeFrd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_e63pGA6L, m);
}

void Heavy_Echomatica::cMsg_uHlOfq8l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_cCuZNaD2_sendMessage);
}

void Heavy_Echomatica::cBinop_J7FigIDf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_UClXYCGc, m);
}

void Heavy_Echomatica::cMsg_oz74OTJ3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_F0lTkh3p_sendMessage);
}

void Heavy_Echomatica::cSystem_F0lTkh3p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_CLACXlzg_sendMessage);
}

void Heavy_Echomatica::cVar_ZuHRrUXk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CprcxD0y_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_Fzkmv0s0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_d672wf5p_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_H2iNE3WR, m);
}

void Heavy_Echomatica::cBinop_CLACXlzg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_tWxACywY, m);
}

void Heavy_Echomatica::cMsg_CprcxD0y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Fzkmv0s0_sendMessage);
}

void Heavy_Echomatica::cBinop_d672wf5p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ApN7xsbn, m);
}

void Heavy_Echomatica::cMsg_AjuI9On1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_LIgaRVdW_sendMessage);
}

void Heavy_Echomatica::cSystem_LIgaRVdW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_nzwqRcwe_sendMessage);
}

void Heavy_Echomatica::cDelay_1tQkbhWp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_1tQkbhWp, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_PFNxxooE, 0, m, &cDelay_PFNxxooE_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_1tQkbhWp, 0, m, &cDelay_1tQkbhWp_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_sm201wML, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_PFNxxooE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_PFNxxooE, m);
  cMsg_qHd5aKgA_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_RrNrLtS0_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_kyrCXJ5Q_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_M6fJbICB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GLyGGXPl_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_9WGrtO0z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_02ngs39x_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_1tQkbhWp, 2, m, &cDelay_1tQkbhWp_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KsxHypkr_sendMessage);
}

void Heavy_Echomatica::cMsg_GLyGGXPl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_9WGrtO0z, 0, m, &hTable_9WGrtO0z_sendMessage);
}

void Heavy_Echomatica::cBinop_nzwqRcwe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 30.0f, 0, m, &cBinop_M6fJbICB_sendMessage);
}

void Heavy_Echomatica::cMsg_qHd5aKgA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_9WGrtO0z, 0, m, &hTable_9WGrtO0z_sendMessage);
}

void Heavy_Echomatica::cCast_KsxHypkr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_1tQkbhWp, 0, m, &cDelay_1tQkbhWp_sendMessage);
}

void Heavy_Echomatica::cMsg_02ngs39x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_PFNxxooE, 2, m, &cDelay_PFNxxooE_sendMessage);
}

void Heavy_Echomatica::cMsg_kyrCXJ5Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_sm201wML, 1, m, NULL);
}

void Heavy_Echomatica::cBinop_O1JpGGdR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_DVAPaVLt_sendMessage);
}

void Heavy_Echomatica::cBinop_DVAPaVLt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_9q2CL4m2_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_7mrrRh2Z_sendMessage);
}

void Heavy_Echomatica::cVar_19Xm5Ykz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_zH5swYUW_sendMessage);
}

void Heavy_Echomatica::cMsg_tazpRKw2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_QpznJDcW_sendMessage);
}

void Heavy_Echomatica::cSystem_QpznJDcW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8q58ARzX, HV_BINOP_DIVIDE, 1, m, &cBinop_8q58ARzX_sendMessage);
}

void Heavy_Echomatica::cBinop_9q2CL4m2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_KraBHU1r_sendMessage);
}

void Heavy_Echomatica::cBinop_KraBHU1r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_swRrYumj, m);
}

void Heavy_Echomatica::cMsg_f1A6bLeo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_pEBm5TbM_sendMessage);
}

void Heavy_Echomatica::cBinop_pEBm5TbM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_O1JpGGdR_sendMessage);
}

void Heavy_Echomatica::cBinop_7mrrRh2Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_SapQPaP4, m);
}

void Heavy_Echomatica::cBinop_zH5swYUW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_Mm3qLPrH_sendMessage);
}

void Heavy_Echomatica::cBinop_Mm3qLPrH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8q58ARzX, HV_BINOP_DIVIDE, 0, m, &cBinop_8q58ARzX_sendMessage);
}

void Heavy_Echomatica::cBinop_8q58ARzX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_f1A6bLeo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_AbfDDrYC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_cWOPOLZD_sendMessage);
}

void Heavy_Echomatica::cBinop_cWOPOLZD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_xgm7xAKz_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_WyxB6Bp1_sendMessage);
}

void Heavy_Echomatica::cVar_YtPeRmtm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_4Yoc42fp_sendMessage);
}

void Heavy_Echomatica::cMsg_8tI087Rg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_iEJQrGcb_sendMessage);
}

void Heavy_Echomatica::cSystem_iEJQrGcb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ovdyiFnz, HV_BINOP_DIVIDE, 1, m, &cBinop_ovdyiFnz_sendMessage);
}

void Heavy_Echomatica::cBinop_xgm7xAKz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_8z6bxg6u_sendMessage);
}

void Heavy_Echomatica::cBinop_8z6bxg6u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_o1xGruuN, m);
}

void Heavy_Echomatica::cMsg_Ef1OfKQF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_OzmguPCl_sendMessage);
}

void Heavy_Echomatica::cBinop_OzmguPCl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_AbfDDrYC_sendMessage);
}

void Heavy_Echomatica::cBinop_WyxB6Bp1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_bobMpB7C, m);
}

void Heavy_Echomatica::cBinop_4Yoc42fp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_DgQhRKUQ_sendMessage);
}

void Heavy_Echomatica::cBinop_DgQhRKUQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ovdyiFnz, HV_BINOP_DIVIDE, 0, m, &cBinop_ovdyiFnz_sendMessage);
}

void Heavy_Echomatica::cBinop_ovdyiFnz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Ef1OfKQF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_AEPNtUvM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_h5bt3es1, 0, m, &cPack_h5bt3es1_sendMessage);
}

void Heavy_Echomatica::cVar_tEHjQCb2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_VMr8bHlu, 0, m, &cPack_VMr8bHlu_sendMessage);
}

void Heavy_Echomatica::cVar_jhAlAshN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_QnTs2cvb_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cPack_VMr8bHlu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_3c9gmJNX, 0, m, NULL);
}

void Heavy_Echomatica::cPack_h5bt3es1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_g7Dne5J7, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_QnTs2cvb_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aENnDhfG_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_J2HH15UF_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QfA9nPn0_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_aENnDhfG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KcKflj68_sendMessage(_c, 0, m);
  cMsg_1UxDrzqb_sendMessage(_c, 0, m);
  cMsg_OCn8T6jd_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_J2HH15UF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KcKflj68_sendMessage(_c, 0, m);
  cMsg_1UxDrzqb_sendMessage(_c, 0, m);
  cMsg_W5pg2SYM_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_QfA9nPn0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rU1rXZW3_sendMessage(_c, 0, m);
  cMsg_t2Ey3DH1_sendMessage(_c, 0, m);
  cMsg_W5pg2SYM_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_z43kBjXL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_eAMGCihG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_U3y9ia2Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZrCyNj76, HV_BINOP_DIVIDE, 0, m, &cBinop_ZrCyNj76_sendMessage);
}

void Heavy_Echomatica::cVar_OcT2mQa2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qEbAxu9d, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_qEbAxu9d_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_dkh9Msc7, 0, m, &cIf_dkh9Msc7_sendMessage);
}

void Heavy_Echomatica::sEnv_eBpAyol9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_LOEJUvtm_sendMessage);
}

void Heavy_Echomatica::cBinop_4vUz8tT7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_4CP9x4HO_sendMessage);
}

void Heavy_Echomatica::cBinop_4CP9x4HO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dEev85eZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_i0vE5a7C_sendMessage);
}

void Heavy_Echomatica::cCast_dEev85eZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VxcpKxE6, HV_BINOP_POW, 1, m, &cBinop_VxcpKxE6_sendMessage);
}

void Heavy_Echomatica::cCast_i0vE5a7C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_R64it357_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_R64it357_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_VxcpKxE6, HV_BINOP_POW, 0, m, &cBinop_VxcpKxE6_sendMessage);
}

void Heavy_Echomatica::cBinop_VxcpKxE6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_rdxfLHqI_sendMessage);
}

void Heavy_Echomatica::cIf_dkh9Msc7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_4vUz8tT7, HV_BINOP_SUBTRACT, 0, m, &cBinop_4vUz8tT7_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_7WLVo0JK, HV_BINOP_SUBTRACT, 0, m, &cBinop_7WLVo0JK_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_qEbAxu9d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_dkh9Msc7, 1, m, &cIf_dkh9Msc7_sendMessage);
}

void Heavy_Echomatica::cVar_90o1Yy2d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_DaK7JXe0_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mWPOg356_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bhp2Agl5_sendMessage);
}

void Heavy_Echomatica::cVar_ZBLVRqHn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_K3YUMOck_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_a3Hs6sfL_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_hqRPmuGU_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_clKyTDsw, 0, m, &cSlice_clKyTDsw_sendMessage);
      break;
    }
    default: {
      cSwitchcase_W3zc3neM_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_clKyTDsw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_kLhc9Owd_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_kLhc9Owd_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_4ejZWlqB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_kLhc9Owd_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_kLhc9Owd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_faJrEEwI_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_W3zc3neM_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_P2Mkcy4C, 0, m, &cSlice_P2Mkcy4C_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_P2Mkcy4C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_pGLS7JyK_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_pGLS7JyK_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_mOGbNPO1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_pGLS7JyK_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_pGLS7JyK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_8qpk7KGf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_K3YUMOck_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZrCyNj76, HV_BINOP_DIVIDE, 1, m, &cBinop_ZrCyNj76_sendMessage);
}

void Heavy_Echomatica::cCast_a3Hs6sfL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_U3y9ia2Z, 0, m, &cVar_U3y9ia2Z_sendMessage);
}

void Heavy_Echomatica::cBinop_ZrCyNj76_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zL69jl5m, HV_BINOP_ADD, 0, m, &cBinop_zL69jl5m_sendMessage);
}

void Heavy_Echomatica::cBinop_7WLVo0JK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_U3y9ia2Z, 0, m, &cVar_U3y9ia2Z_sendMessage);
}

void Heavy_Echomatica::cCast_mWPOg356_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qEbAxu9d, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_qEbAxu9d_sendMessage);
}

void Heavy_Echomatica::cCast_DaK7JXe0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PUgnAySz_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ULTXVOBr_sendMessage);
}

void Heavy_Echomatica::cCast_bhp2Agl5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OcT2mQa2, 0, m, &cVar_OcT2mQa2_sendMessage);
}

void Heavy_Echomatica::cBinop_zL69jl5m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4vUz8tT7, HV_BINOP_SUBTRACT, 0, m, &cBinop_4vUz8tT7_sendMessage);
}

void Heavy_Echomatica::cCast_D2drJRuK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_90o1Yy2d, 0, m, &cVar_90o1Yy2d_sendMessage);
}

void Heavy_Echomatica::cCast_RAKMVA2g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ZBLVRqHn, 0, m, &cVar_ZBLVRqHn_sendMessage);
}

void Heavy_Echomatica::cCast_idqGDfVo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4vUz8tT7, HV_BINOP_SUBTRACT, 1, m, &cBinop_4vUz8tT7_sendMessage);
}

void Heavy_Echomatica::cCast_HTB0Vz2n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OcT2mQa2, 0, m, &cVar_OcT2mQa2_sendMessage);
}

void Heavy_Echomatica::cBinop_rdxfLHqI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KJNg8qU4_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_PUgnAySz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zL69jl5m, HV_BINOP_ADD, 1, m, &cBinop_zL69jl5m_sendMessage);
}

void Heavy_Echomatica::cCast_ULTXVOBr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7WLVo0JK, HV_BINOP_SUBTRACT, 1, m, &cBinop_7WLVo0JK_sendMessage);
}

void Heavy_Echomatica::cBinop_LOEJUvtm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_idqGDfVo_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_HTB0Vz2n_sendMessage);
}

void Heavy_Echomatica::cMsg_KJNg8qU4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_bYbGAuCO, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_KcKflj68_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_tEHjQCb2, 0, m, &cVar_tEHjQCb2_sendMessage);
}

void Heavy_Echomatica::cMsg_1UxDrzqb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_AEPNtUvM, 0, m, &cVar_AEPNtUvM_sendMessage);
}

void Heavy_Echomatica::cMsg_rU1rXZW3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_tEHjQCb2, 0, m, &cVar_tEHjQCb2_sendMessage);
}

void Heavy_Echomatica::cMsg_t2Ey3DH1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_AEPNtUvM, 0, m, &cVar_AEPNtUvM_sendMessage);
}

void Heavy_Echomatica::cSend_eAMGCihG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_l8bTP8Qy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_OCn8T6jd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_z43kBjXL, 0, m, &cVar_z43kBjXL_sendMessage);
}

void Heavy_Echomatica::cMsg_W5pg2SYM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_z43kBjXL, 0, m, &cVar_z43kBjXL_sendMessage);
}

void Heavy_Echomatica::cVar_rb7BxYeD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YYsRVBSg, HV_BINOP_MULTIPLY, 0, m, &cBinop_YYsRVBSg_sendMessage);
}

void Heavy_Echomatica::cMsg_thNJebvP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_0Va4zjGZ_sendMessage);
}

void Heavy_Echomatica::cSystem_0Va4zjGZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_b891kiiK_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_YYsRVBSg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_MQvnNK3O_sendMessage);
}

void Heavy_Echomatica::cBinop_Gl0j405y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YYsRVBSg, HV_BINOP_MULTIPLY, 1, m, &cBinop_YYsRVBSg_sendMessage);
}

void Heavy_Echomatica::cMsg_b891kiiK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Gl0j405y_sendMessage);
}

void Heavy_Echomatica::cBinop_MQvnNK3O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_jFk0jlEE_sendMessage);
}

void Heavy_Echomatica::cBinop_jFk0jlEE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_W6yoI1rA_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_5QvZOyBF, m);
}

void Heavy_Echomatica::cBinop_W6yoI1rA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Tb6dQkk8, m);
}

void Heavy_Echomatica::cBinop_kTLqhEiM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_xaCDG09T_sendMessage);
}

void Heavy_Echomatica::cBinop_xaCDG09T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_gofUICFj_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_Id5MsvBf_sendMessage);
}

void Heavy_Echomatica::cVar_64PpancC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_3XIeLCL2_sendMessage);
}

void Heavy_Echomatica::cMsg_RShVJ81Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_LUbtNrD1_sendMessage);
}

void Heavy_Echomatica::cSystem_LUbtNrD1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sWjpYOr0, HV_BINOP_DIVIDE, 1, m, &cBinop_sWjpYOr0_sendMessage);
}

void Heavy_Echomatica::cBinop_gofUICFj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_m61a8lyP_sendMessage);
}

void Heavy_Echomatica::cBinop_m61a8lyP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_rBp8rpA5, m);
}

void Heavy_Echomatica::cMsg_i5bfo19U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_YL7efHnY_sendMessage);
}

void Heavy_Echomatica::cBinop_YL7efHnY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_kTLqhEiM_sendMessage);
}

void Heavy_Echomatica::cBinop_Id5MsvBf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_zU08L9M3, m);
}

void Heavy_Echomatica::cBinop_3XIeLCL2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_sj4FU76O_sendMessage);
}

void Heavy_Echomatica::cBinop_sj4FU76O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sWjpYOr0, HV_BINOP_DIVIDE, 0, m, &cBinop_sWjpYOr0_sendMessage);
}

void Heavy_Echomatica::cBinop_sWjpYOr0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_i5bfo19U_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_d7ZuBJX9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_Ibn0aVSV_sendMessage);
}

void Heavy_Echomatica::cBinop_Ibn0aVSV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_llTG4K65_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_gGkDj04n_sendMessage);
}

void Heavy_Echomatica::cVar_ytbmSFuW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_uEKURgAv_sendMessage);
}

void Heavy_Echomatica::cMsg_x8Aq3UxH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_kqKrXlAB_sendMessage);
}

void Heavy_Echomatica::cSystem_kqKrXlAB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qereFo9t, HV_BINOP_DIVIDE, 1, m, &cBinop_qereFo9t_sendMessage);
}

void Heavy_Echomatica::cBinop_llTG4K65_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_8GKeRiUW_sendMessage);
}

void Heavy_Echomatica::cBinop_8GKeRiUW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_dPLCFtsm, m);
}

void Heavy_Echomatica::cMsg_FBUcscZX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_jbmmtavM_sendMessage);
}

void Heavy_Echomatica::cBinop_jbmmtavM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_d7ZuBJX9_sendMessage);
}

void Heavy_Echomatica::cBinop_gGkDj04n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_RAMYJAxD, m);
}

void Heavy_Echomatica::cBinop_uEKURgAv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_e5V6JCSw_sendMessage);
}

void Heavy_Echomatica::cBinop_e5V6JCSw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qereFo9t, HV_BINOP_DIVIDE, 0, m, &cBinop_qereFo9t_sendMessage);
}

void Heavy_Echomatica::cBinop_qereFo9t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FBUcscZX_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cIf_YK7QVWzU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_U0h4NPxV, 0, m, &cVar_U0h4NPxV_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_U0h4NPxV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RPjgyIeT, HV_BINOP_MULTIPLY, 0, m, &cBinop_RPjgyIeT_sendMessage);
}

void Heavy_Echomatica::cVar_GMVOzcCC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_YK7QVWzU, 0, m, &cIf_YK7QVWzU_sendMessage);
}

void Heavy_Echomatica::cPack_RdTulpue_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_U7IN3EMv_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_cq1H37AB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_fEPMa7xe_sendMessage);
}

void Heavy_Echomatica::cSystem_fEPMa7xe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2CMIZlX1, HV_BINOP_MULTIPLY, 1, m, &cBinop_2CMIZlX1_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_qywMxWn8, HV_BINOP_MULTIPLY, 1, m, &cBinop_qywMxWn8_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_yMTiyDGY_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cMsg_4JPdHPQV_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_4JPdHPQV_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2W54IqYh_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cDelay_SMxsCyeS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_SMxsCyeS, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_SMxsCyeS, 0, m, &cDelay_SMxsCyeS_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_WLReintU, 0, m, &cVar_WLReintU_sendMessage);
}

void Heavy_Echomatica::cCast_2W54IqYh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4JPdHPQV_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_SMxsCyeS, 0, m, &cDelay_SMxsCyeS_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_WLReintU, 0, m, &cVar_WLReintU_sendMessage);
}

void Heavy_Echomatica::cMsg_anWw0GNi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_WcSn5gl7_sendMessage);
}

void Heavy_Echomatica::cSystem_WcSn5gl7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_JBeQuuvs_sendMessage);
}

void Heavy_Echomatica::cVar_Ouc21BBq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jMB3GnFJ, HV_BINOP_MULTIPLY, 0, m, &cBinop_jMB3GnFJ_sendMessage);
}

void Heavy_Echomatica::cMsg_4JPdHPQV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_SMxsCyeS, 0, m, &cDelay_SMxsCyeS_sendMessage);
}

void Heavy_Echomatica::cBinop_ZARzXGip_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_SMxsCyeS, 2, m, &cDelay_SMxsCyeS_sendMessage);
}

void Heavy_Echomatica::cBinop_JBeQuuvs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jMB3GnFJ, HV_BINOP_MULTIPLY, 1, m, &cBinop_jMB3GnFJ_sendMessage);
}

void Heavy_Echomatica::cBinop_jMB3GnFJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_ZARzXGip_sendMessage);
}

void Heavy_Echomatica::cVar_WLReintU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_w4iheW0I, HV_BINOP_SUBTRACT, 0, m, &cBinop_w4iheW0I_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_0A19D95T_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_Tu5A1FKP_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IATE6M1c_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qxn1XlTL_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_IATE6M1c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WeB5wmad, 0, m, &cVar_WeB5wmad_sendMessage);
}

void Heavy_Echomatica::cCast_qxn1XlTL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PdvENMvS_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HOo9bVom_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_U7IN3EMv_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_bGkTG5VM, 0, m, &cSlice_bGkTG5VM_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_885cfSDi, 0, m, &cSlice_885cfSDi_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WhR8mQJA_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_JCvvA77x, 0, m, &cSlice_JCvvA77x_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_QaTDigqA, 0, m, &cSlice_QaTDigqA_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HEPqYaXD_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_V0RVHN7t_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_bGkTG5VM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_Yj1SGsru_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_Yj1SGsru_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_885cfSDi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IjCghYU0_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_OiyAKW6j_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IjCghYU0_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_OiyAKW6j_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_AUVCzLXe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_N0NnkdBe_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7MFIT67o_sendMessage);
}

void Heavy_Echomatica::cVar_6ojXG0K2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_RE9Dly6O_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_RE9Dly6O_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PZOjCyiv_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_2CMIZlX1, HV_BINOP_MULTIPLY, 0, m, &cBinop_2CMIZlX1_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_QkU5CQbp, HV_BINOP_DIVIDE, 1, m, &cBinop_QkU5CQbp_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_Ouc21BBq, 0, m, &cVar_Ouc21BBq_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_PZOjCyiv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rTBhGZVs_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_s8cXfF6a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_apSdg2C3, HV_BINOP_SUBTRACT, 1, m, &cBinop_apSdg2C3_sendMessage);
}

void Heavy_Echomatica::cVar_uGPzDOdY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WeB5wmad, 0, m, &cVar_WeB5wmad_sendMessage);
}

void Heavy_Echomatica::cVar_WeB5wmad_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cs8KMwqr, HV_BINOP_ADD, 0, m, &cBinop_cs8KMwqr_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Y3spDmJ0, HV_BINOP_ADD, 0, m, &cBinop_Y3spDmJ0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0nADR7x1_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6c7BHamm_sendMessage);
}

void Heavy_Echomatica::cSlice_JCvvA77x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_N0NnkdBe_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7MFIT67o_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_QaTDigqA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6LzPpQgl_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yBLNZZ4F_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_56ABDYDK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WLReintU, 1, m, &cVar_WLReintU_sendMessage);
}

void Heavy_Echomatica::cBinop_qywMxWn8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_56ABDYDK_sendMessage);
}

void Heavy_Echomatica::cBinop_2CMIZlX1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_LWkKKa3B_sendMessage);
}

void Heavy_Echomatica::cBinop_LWkKKa3B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_w4iheW0I, HV_BINOP_SUBTRACT, 1, m, &cBinop_w4iheW0I_sendMessage);
}

void Heavy_Echomatica::cBinop_w4iheW0I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WLReintU, 1, m, &cVar_WLReintU_sendMessage);
}

void Heavy_Echomatica::cMsg_w0dyOv8o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_yMTiyDGY_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_B40QeUWV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_yMTiyDGY_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Y3spDmJ0, HV_BINOP_ADD, 1, m, &cBinop_Y3spDmJ0_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_cs8KMwqr, HV_BINOP_ADD, 1, m, &cBinop_cs8KMwqr_sendMessage);
}

void Heavy_Echomatica::cBinop_0A19D95T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Tu5A1FKP_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_cs8KMwqr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WeB5wmad, 1, m, &cVar_WeB5wmad_sendMessage);
}

void Heavy_Echomatica::cBinop_QkU5CQbp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KVSbGwcn, HV_BINOP_DIVIDE, 1, m, &cBinop_KVSbGwcn_sendMessage);
}

void Heavy_Echomatica::cBinop_KVSbGwcn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Y3spDmJ0, HV_BINOP_ADD, 1, m, &cBinop_Y3spDmJ0_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_cs8KMwqr, HV_BINOP_ADD, 1, m, &cBinop_cs8KMwqr_sendMessage);
}

void Heavy_Echomatica::cCast_N0NnkdBe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qywMxWn8, HV_BINOP_MULTIPLY, 0, m, &cBinop_qywMxWn8_sendMessage);
}

void Heavy_Echomatica::cCast_7MFIT67o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QkU5CQbp, HV_BINOP_DIVIDE, 0, m, &cBinop_QkU5CQbp_sendMessage);
}

void Heavy_Echomatica::cCast_yBLNZZ4F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_apSdg2C3, HV_BINOP_SUBTRACT, 0, m, &cBinop_apSdg2C3_sendMessage);
}

void Heavy_Echomatica::cCast_6LzPpQgl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uGPzDOdY, 1, m, &cVar_uGPzDOdY_sendMessage);
}

void Heavy_Echomatica::cCast_HOo9bVom_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uGPzDOdY, 0, m, &cVar_uGPzDOdY_sendMessage);
}

void Heavy_Echomatica::cCast_PdvENMvS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_B40QeUWV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_Y3spDmJ0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_s8cXfF6a, 0, m, &cVar_s8cXfF6a_sendMessage);
}

void Heavy_Echomatica::cMsg_Yj1SGsru_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_yMTiyDGY_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_OZToSCxL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_AUVCzLXe, 1, m, &cVar_AUVCzLXe_sendMessage);
}

void Heavy_Echomatica::cMsg_rTBhGZVs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_2CMIZlX1, HV_BINOP_MULTIPLY, 0, m, &cBinop_2CMIZlX1_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_QkU5CQbp, HV_BINOP_DIVIDE, 1, m, &cBinop_QkU5CQbp_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Ouc21BBq, 0, m, &cVar_Ouc21BBq_sendMessage);
}

void Heavy_Echomatica::cCast_OiyAKW6j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_A6qMVMpc_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Y3spDmJ0, HV_BINOP_ADD, 0, m, &cBinop_Y3spDmJ0_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_WeB5wmad, 1, m, &cVar_WeB5wmad_sendMessage);
}

void Heavy_Echomatica::cCast_IjCghYU0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Yj1SGsru_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_apSdg2C3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KVSbGwcn, HV_BINOP_DIVIDE, 0, m, &cBinop_KVSbGwcn_sendMessage);
}

void Heavy_Echomatica::cCast_A6qMVMpc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_B40QeUWV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_WhR8mQJA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_AUVCzLXe, 0, m, &cVar_AUVCzLXe_sendMessage);
}

void Heavy_Echomatica::cCast_HEPqYaXD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_w0dyOv8o_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_V0RVHN7t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OZToSCxL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_XyguWI0L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ULMgyS4s, HV_BINOP_MULTIPLY, 0, m, &cBinop_ULMgyS4s_sendMessage);
}

void Heavy_Echomatica::cVar_C1q8cJ4B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NnLHbfn2, HV_BINOP_MULTIPLY, 0, m, &cBinop_NnLHbfn2_sendMessage);
}

void Heavy_Echomatica::cVar_1l39j94n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_utrBX7BF, HV_BINOP_MULTIPLY, 0, m, &cBinop_utrBX7BF_sendMessage);
}

void Heavy_Echomatica::cVar_h43UpT9H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JIIayXHR, HV_BINOP_MULTIPLY, 0, m, &cBinop_JIIayXHR_sendMessage);
}

void Heavy_Echomatica::cVar_fuiJGtNm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6ReQzdbi, HV_BINOP_MULTIPLY, 0, m, &cBinop_6ReQzdbi_sendMessage);
}

void Heavy_Echomatica::cVar_R58JGtx7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EHeayhtD, HV_BINOP_MULTIPLY, 0, m, &cBinop_EHeayhtD_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_PIpghOJs_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ts9iEifQ_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8Ftn441W_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_ts9iEifQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1VHfNuRs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_neWaR6dS_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RPdQy5Gs_sendMessage);
}

void Heavy_Echomatica::cCast_8Ftn441W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EZ48fX7a_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RLFGcmaW_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Wi90OuKf_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_teD63wEd_sendMessage);
}

void Heavy_Echomatica::cBinop_fMQWCoem_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_1WS0krVe_sendMessage);
}

void Heavy_Echomatica::cBinop_1WS0krVe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_qrGdC7rn_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_Zflr36W1_sendMessage);
}

void Heavy_Echomatica::cVar_Gs9czhu2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_oXnZTDOG_sendMessage);
}

void Heavy_Echomatica::cMsg_OW0NrNgD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_J6CkE1TT_sendMessage);
}

void Heavy_Echomatica::cSystem_J6CkE1TT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VAX8yBai, HV_BINOP_DIVIDE, 1, m, &cBinop_VAX8yBai_sendMessage);
}

void Heavy_Echomatica::cBinop_qrGdC7rn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_BwgWJWfx_sendMessage);
}

void Heavy_Echomatica::cBinop_BwgWJWfx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_vnEjhJke, m);
}

void Heavy_Echomatica::cMsg_pOD23ZgV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_8v8azIsq_sendMessage);
}

void Heavy_Echomatica::cBinop_8v8azIsq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_fMQWCoem_sendMessage);
}

void Heavy_Echomatica::cBinop_Zflr36W1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_OQpnXPZx, m);
}

void Heavy_Echomatica::cBinop_oXnZTDOG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_lLLECsra_sendMessage);
}

void Heavy_Echomatica::cBinop_lLLECsra_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VAX8yBai, HV_BINOP_DIVIDE, 0, m, &cBinop_VAX8yBai_sendMessage);
}

void Heavy_Echomatica::cBinop_VAX8yBai_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pOD23ZgV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_Axv7g2Nq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_929OI3an, HV_BINOP_DIVIDE, 0, m, &cBinop_929OI3an_sendMessage);
}

void Heavy_Echomatica::cVar_S8z4xys4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Xt21ab7i, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_Xt21ab7i_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_uLTWnwXz, 0, m, &cIf_uLTWnwXz_sendMessage);
}

void Heavy_Echomatica::sEnv_uU3cnlU6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_OwwrcyJE_sendMessage);
}

void Heavy_Echomatica::cBinop_LffZVXBa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_nkNOolMh_sendMessage);
}

void Heavy_Echomatica::cBinop_nkNOolMh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GcnO3MUa_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WcuPxOUh_sendMessage);
}

void Heavy_Echomatica::cCast_WcuPxOUh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_keoBZNmD_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_GcnO3MUa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_t4BMmpc8, HV_BINOP_POW, 1, m, &cBinop_t4BMmpc8_sendMessage);
}

void Heavy_Echomatica::cMsg_keoBZNmD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_t4BMmpc8, HV_BINOP_POW, 0, m, &cBinop_t4BMmpc8_sendMessage);
}

void Heavy_Echomatica::cBinop_t4BMmpc8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_5voLCFVv_sendMessage);
}

void Heavy_Echomatica::cIf_uLTWnwXz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_LffZVXBa, HV_BINOP_SUBTRACT, 0, m, &cBinop_LffZVXBa_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_XfyI4aXP, HV_BINOP_SUBTRACT, 0, m, &cBinop_XfyI4aXP_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_Xt21ab7i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_uLTWnwXz, 1, m, &cIf_uLTWnwXz_sendMessage);
}

void Heavy_Echomatica::cVar_SNDqrkCa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_M5gpODRy_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_H10D0cBu_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9LcNrzh5_sendMessage);
}

void Heavy_Echomatica::cVar_FPe3WUXn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Q5GRkjoo_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jNz4ZxS4_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_eqjTTJDZ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_tGrd7yRc, 0, m, &cSlice_tGrd7yRc_sendMessage);
      break;
    }
    default: {
      cSwitchcase_Y6jwsSn2_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_tGrd7yRc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_28FS084j_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_28FS084j_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_GX0eLMAG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_28FS084j_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_28FS084j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_nltlbnCO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_Y6jwsSn2_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_rqUgA4mn, 0, m, &cSlice_rqUgA4mn_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_rqUgA4mn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_XieDLFU9_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_XieDLFU9_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_JsfJmapC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_XieDLFU9_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_XieDLFU9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Mrj4LPzr_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_jNz4ZxS4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Axv7g2Nq, 0, m, &cVar_Axv7g2Nq_sendMessage);
}

void Heavy_Echomatica::cCast_Q5GRkjoo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_929OI3an, HV_BINOP_DIVIDE, 1, m, &cBinop_929OI3an_sendMessage);
}

void Heavy_Echomatica::cBinop_929OI3an_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0YscpUB2, HV_BINOP_ADD, 0, m, &cBinop_0YscpUB2_sendMessage);
}

void Heavy_Echomatica::cBinop_XfyI4aXP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Axv7g2Nq, 0, m, &cVar_Axv7g2Nq_sendMessage);
}

void Heavy_Echomatica::cCast_9LcNrzh5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_S8z4xys4, 0, m, &cVar_S8z4xys4_sendMessage);
}

void Heavy_Echomatica::cCast_M5gpODRy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_42F06Ata_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2OVLbuMz_sendMessage);
}

void Heavy_Echomatica::cCast_H10D0cBu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Xt21ab7i, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_Xt21ab7i_sendMessage);
}

void Heavy_Echomatica::cBinop_0YscpUB2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LffZVXBa, HV_BINOP_SUBTRACT, 0, m, &cBinop_LffZVXBa_sendMessage);
}

void Heavy_Echomatica::cCast_2uxPBRBj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SNDqrkCa, 0, m, &cVar_SNDqrkCa_sendMessage);
}

void Heavy_Echomatica::cCast_WcZwpE8z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FPe3WUXn, 0, m, &cVar_FPe3WUXn_sendMessage);
}

void Heavy_Echomatica::cCast_eMsbRYob_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_S8z4xys4, 0, m, &cVar_S8z4xys4_sendMessage);
}

void Heavy_Echomatica::cCast_iWy3u2Jx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LffZVXBa, HV_BINOP_SUBTRACT, 1, m, &cBinop_LffZVXBa_sendMessage);
}

void Heavy_Echomatica::cBinop_5voLCFVv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1FcD6AxR_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_2OVLbuMz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XfyI4aXP, HV_BINOP_SUBTRACT, 1, m, &cBinop_XfyI4aXP_sendMessage);
}

void Heavy_Echomatica::cCast_42F06Ata_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0YscpUB2, HV_BINOP_ADD, 1, m, &cBinop_0YscpUB2_sendMessage);
}

void Heavy_Echomatica::cBinop_OwwrcyJE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iWy3u2Jx_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_eMsbRYob_sendMessage);
}

void Heavy_Echomatica::cMsg_1FcD6AxR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Nw12VOyb, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_ySkjGBkq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_kwj0DnlJ_sendMessage);
}

void Heavy_Echomatica::cBinop_kwj0DnlJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_WXCxVlcn_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_WpK1wreP_sendMessage);
}

void Heavy_Echomatica::cVar_7KDi04Vy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_q29sCUgu_sendMessage);
}

void Heavy_Echomatica::cMsg_JNSAo9Op_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_N79NyLCk_sendMessage);
}

void Heavy_Echomatica::cSystem_N79NyLCk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SyANOLSa, HV_BINOP_DIVIDE, 1, m, &cBinop_SyANOLSa_sendMessage);
}

void Heavy_Echomatica::cBinop_WXCxVlcn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_op7fZY59_sendMessage);
}

void Heavy_Echomatica::cBinop_op7fZY59_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_SWA5zlJs, m);
}

void Heavy_Echomatica::cMsg_yeBbI9oG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_D3pGOBNa_sendMessage);
}

void Heavy_Echomatica::cBinop_D3pGOBNa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_ySkjGBkq_sendMessage);
}

void Heavy_Echomatica::cBinop_WpK1wreP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_HvYcSgi0, m);
}

void Heavy_Echomatica::cBinop_q29sCUgu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_1UuQgZTI_sendMessage);
}

void Heavy_Echomatica::cBinop_1UuQgZTI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SyANOLSa, HV_BINOP_DIVIDE, 0, m, &cBinop_SyANOLSa_sendMessage);
}

void Heavy_Echomatica::cBinop_SyANOLSa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_yeBbI9oG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_gon3ume9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2H5pKHhU, HV_BINOP_DIVIDE, 0, m, &cBinop_2H5pKHhU_sendMessage);
}

void Heavy_Echomatica::cVar_fJ0jHmNb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mzslvTHG, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_mzslvTHG_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_piSahvSl, 0, m, &cIf_piSahvSl_sendMessage);
}

void Heavy_Echomatica::sEnv_jFNvuNoX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_FMcgI3nC_sendMessage);
}

void Heavy_Echomatica::cBinop_2bxrStCY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_LzXclJbC_sendMessage);
}

void Heavy_Echomatica::cBinop_LzXclJbC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_R0ffhycu_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XQruY7kB_sendMessage);
}

void Heavy_Echomatica::cCast_XQruY7kB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_m3yILvdH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_R0ffhycu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jepGEryv, HV_BINOP_POW, 1, m, &cBinop_jepGEryv_sendMessage);
}

void Heavy_Echomatica::cMsg_m3yILvdH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_jepGEryv, HV_BINOP_POW, 0, m, &cBinop_jepGEryv_sendMessage);
}

void Heavy_Echomatica::cBinop_jepGEryv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_EqIWxxKQ_sendMessage);
}

void Heavy_Echomatica::cIf_piSahvSl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_2bxrStCY, HV_BINOP_SUBTRACT, 0, m, &cBinop_2bxrStCY_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_mesXkKMt, HV_BINOP_SUBTRACT, 0, m, &cBinop_mesXkKMt_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_mzslvTHG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_piSahvSl, 1, m, &cIf_piSahvSl_sendMessage);
}

void Heavy_Echomatica::cVar_kim1GGj8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fc6GbPOq_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_g71v3mm7_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JOwNBzIl_sendMessage);
}

void Heavy_Echomatica::cVar_ICP92P2T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Ewbp7Qdj_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4XMkmp4m_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_CpEuhmJs_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_QvP3TwVl, 0, m, &cSlice_QvP3TwVl_sendMessage);
      break;
    }
    default: {
      cSwitchcase_rBHiYroH_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_QvP3TwVl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ghg0nHF5_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_ghg0nHF5_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_S1gZXt0h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_ghg0nHF5_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_ghg0nHF5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_9WYX5m9O_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_rBHiYroH_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_I4pOPvmM, 0, m, &cSlice_I4pOPvmM_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_I4pOPvmM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_xbUAE4VE_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_xbUAE4VE_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_vdPUUhjL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_xbUAE4VE_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_xbUAE4VE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_B2M29tNJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_Ewbp7Qdj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2H5pKHhU, HV_BINOP_DIVIDE, 1, m, &cBinop_2H5pKHhU_sendMessage);
}

void Heavy_Echomatica::cCast_4XMkmp4m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_gon3ume9, 0, m, &cVar_gon3ume9_sendMessage);
}

void Heavy_Echomatica::cBinop_2H5pKHhU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7C3CGDty, HV_BINOP_ADD, 0, m, &cBinop_7C3CGDty_sendMessage);
}

void Heavy_Echomatica::cBinop_mesXkKMt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_gon3ume9, 0, m, &cVar_gon3ume9_sendMessage);
}

void Heavy_Echomatica::cCast_fc6GbPOq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_E8jHG8G7_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_BYhbgx1c_sendMessage);
}

void Heavy_Echomatica::cCast_g71v3mm7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mzslvTHG, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_mzslvTHG_sendMessage);
}

void Heavy_Echomatica::cCast_JOwNBzIl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fJ0jHmNb, 0, m, &cVar_fJ0jHmNb_sendMessage);
}

void Heavy_Echomatica::cBinop_7C3CGDty_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2bxrStCY, HV_BINOP_SUBTRACT, 0, m, &cBinop_2bxrStCY_sendMessage);
}

void Heavy_Echomatica::cCast_UucKVvyF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_kim1GGj8, 0, m, &cVar_kim1GGj8_sendMessage);
}

void Heavy_Echomatica::cCast_NTm8d27c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ICP92P2T, 0, m, &cVar_ICP92P2T_sendMessage);
}

void Heavy_Echomatica::cCast_PSUplE3m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fJ0jHmNb, 0, m, &cVar_fJ0jHmNb_sendMessage);
}

void Heavy_Echomatica::cCast_MveNwoFz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2bxrStCY, HV_BINOP_SUBTRACT, 1, m, &cBinop_2bxrStCY_sendMessage);
}

void Heavy_Echomatica::cBinop_EqIWxxKQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FbrEjdTd_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_BYhbgx1c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mesXkKMt, HV_BINOP_SUBTRACT, 1, m, &cBinop_mesXkKMt_sendMessage);
}

void Heavy_Echomatica::cCast_E8jHG8G7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7C3CGDty, HV_BINOP_ADD, 1, m, &cBinop_7C3CGDty_sendMessage);
}

void Heavy_Echomatica::cBinop_FMcgI3nC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_MveNwoFz_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PSUplE3m_sendMessage);
}

void Heavy_Echomatica::cMsg_FbrEjdTd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_E50myOw3, 0, m, NULL);
}

void Heavy_Echomatica::cVar_VwROXICj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NJgyIj1z, HV_BINOP_MULTIPLY, 0, m, &cBinop_NJgyIj1z_sendMessage);
}

void Heavy_Echomatica::cMsg_zg5uTma9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_F2AGnhMl_sendMessage);
}

void Heavy_Echomatica::cSystem_F2AGnhMl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JCZTto2P_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_NJgyIj1z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_7SIGeV23_sendMessage);
}

void Heavy_Echomatica::cBinop_Fv5s4YFO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NJgyIj1z, HV_BINOP_MULTIPLY, 1, m, &cBinop_NJgyIj1z_sendMessage);
}

void Heavy_Echomatica::cMsg_JCZTto2P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Fv5s4YFO_sendMessage);
}

void Heavy_Echomatica::cBinop_7SIGeV23_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_kwEQ4Up3_sendMessage);
}

void Heavy_Echomatica::cBinop_kwEQ4Up3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_APTOOoln_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_cnEbYPdp, m);
}

void Heavy_Echomatica::cBinop_APTOOoln_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_tUioCfFx, m);
}

void Heavy_Echomatica::cVar_wXdSACuE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HqnNT6to, HV_BINOP_MULTIPLY, 0, m, &cBinop_HqnNT6to_sendMessage);
}

void Heavy_Echomatica::cMsg_w5P4rfby_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_LZTHV9M2_sendMessage);
}

void Heavy_Echomatica::cSystem_LZTHV9M2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_C4tBhvj1_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_HqnNT6to_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_P1tCYdOu_sendMessage);
}

void Heavy_Echomatica::cBinop_VRHLZLWH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HqnNT6to, HV_BINOP_MULTIPLY, 1, m, &cBinop_HqnNT6to_sendMessage);
}

void Heavy_Echomatica::cMsg_C4tBhvj1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_VRHLZLWH_sendMessage);
}

void Heavy_Echomatica::cBinop_P1tCYdOu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_UqQ4K0hA_sendMessage);
}

void Heavy_Echomatica::cBinop_UqQ4K0hA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_8EUsLg4U_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Y7JJ70VG, m);
}

void Heavy_Echomatica::cBinop_8EUsLg4U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_7aLvL2md, m);
}

void Heavy_Echomatica::cBinop_7KqXHdsN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_BSr74Pw2_sendMessage);
}

void Heavy_Echomatica::cBinop_BSr74Pw2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_XBGHofcd_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_f3rCv9GW_sendMessage);
}

void Heavy_Echomatica::cVar_s7HBiG8x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_128lP2bM_sendMessage);
}

void Heavy_Echomatica::cMsg_L9CHlVn9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_dEIBcNYX_sendMessage);
}

void Heavy_Echomatica::cSystem_dEIBcNYX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_U29ne7PD, HV_BINOP_DIVIDE, 1, m, &cBinop_U29ne7PD_sendMessage);
}

void Heavy_Echomatica::cBinop_XBGHofcd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_Strfqy4G_sendMessage);
}

void Heavy_Echomatica::cBinop_Strfqy4G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_iuCBgxMv, m);
}

void Heavy_Echomatica::cMsg_CGn4DKot_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_v1YgPyNU_sendMessage);
}

void Heavy_Echomatica::cBinop_v1YgPyNU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_7KqXHdsN_sendMessage);
}

void Heavy_Echomatica::cBinop_f3rCv9GW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_74ycPKVw, m);
}

void Heavy_Echomatica::cBinop_128lP2bM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_Zeh8H1bJ_sendMessage);
}

void Heavy_Echomatica::cBinop_Zeh8H1bJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_U29ne7PD, HV_BINOP_DIVIDE, 0, m, &cBinop_U29ne7PD_sendMessage);
}

void Heavy_Echomatica::cBinop_U29ne7PD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CGn4DKot_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_qSxOntE0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_LGoTB31x_sendMessage);
}

void Heavy_Echomatica::cBinop_LGoTB31x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Wvc6xuRN_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_Tz4Ylg1Z_sendMessage);
}

void Heavy_Echomatica::cVar_yzggPDm9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_EpC2dXLF_sendMessage);
}

void Heavy_Echomatica::cMsg_dZ7fiRwe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_4eAgMWbj_sendMessage);
}

void Heavy_Echomatica::cSystem_4eAgMWbj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fS5pg8HK, HV_BINOP_DIVIDE, 1, m, &cBinop_fS5pg8HK_sendMessage);
}

void Heavy_Echomatica::cBinop_Wvc6xuRN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_PPpch8C8_sendMessage);
}

void Heavy_Echomatica::cBinop_PPpch8C8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_gN5n45jQ, m);
}

void Heavy_Echomatica::cMsg_gUXp0ezM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_jjl6DLWh_sendMessage);
}

void Heavy_Echomatica::cBinop_jjl6DLWh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_qSxOntE0_sendMessage);
}

void Heavy_Echomatica::cBinop_Tz4Ylg1Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_GyKH6VmQ, m);
}

void Heavy_Echomatica::cBinop_EpC2dXLF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_aAaTo9z7_sendMessage);
}

void Heavy_Echomatica::cBinop_aAaTo9z7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fS5pg8HK, HV_BINOP_DIVIDE, 0, m, &cBinop_fS5pg8HK_sendMessage);
}

void Heavy_Echomatica::cBinop_fS5pg8HK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gUXp0ezM_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_tclQh8Mv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_G2k304tM_sendMessage);
}

void Heavy_Echomatica::cSystem_G2k304tM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_ii710JGF_sendMessage);
}

void Heavy_Echomatica::cDelay_TUBbDXOZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_TUBbDXOZ, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_y6TjTYHb, 0, m, &cDelay_y6TjTYHb_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_TUBbDXOZ, 0, m, &cDelay_TUBbDXOZ_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_Kw0kOEb1, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_y6TjTYHb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_y6TjTYHb, m);
  cMsg_7W9qrY0u_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_VXrly3sP_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_E106GKEp_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_FuQan1wb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DulZwAgd_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_xAMoulxO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3aaLUVre_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_TUBbDXOZ, 2, m, &cDelay_TUBbDXOZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_j22IX37v_sendMessage);
}

void Heavy_Echomatica::cMsg_DulZwAgd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_xAMoulxO, 0, m, &hTable_xAMoulxO_sendMessage);
}

void Heavy_Echomatica::cBinop_ii710JGF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_FuQan1wb_sendMessage);
}

void Heavy_Echomatica::cMsg_7W9qrY0u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_xAMoulxO, 0, m, &hTable_xAMoulxO_sendMessage);
}

void Heavy_Echomatica::cCast_j22IX37v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_TUBbDXOZ, 0, m, &cDelay_TUBbDXOZ_sendMessage);
}

void Heavy_Echomatica::cMsg_3aaLUVre_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_y6TjTYHb, 2, m, &cDelay_y6TjTYHb_sendMessage);
}

void Heavy_Echomatica::cMsg_E106GKEp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_Kw0kOEb1, 1, m, NULL);
}

void Heavy_Echomatica::cVar_DL1eIvee_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4ZtgcwEl, HV_BINOP_MULTIPLY, 0, m, &cBinop_4ZtgcwEl_sendMessage);
}

void Heavy_Echomatica::cMsg_kq7x1C9X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_nRzRVaiH_sendMessage);
}

void Heavy_Echomatica::cSystem_nRzRVaiH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_G3sQYuut_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_4ZtgcwEl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_b8goJpE2_sendMessage);
}

void Heavy_Echomatica::cBinop_ebJbnoBj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4ZtgcwEl, HV_BINOP_MULTIPLY, 1, m, &cBinop_4ZtgcwEl_sendMessage);
}

void Heavy_Echomatica::cMsg_G3sQYuut_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_ebJbnoBj_sendMessage);
}

void Heavy_Echomatica::cBinop_b8goJpE2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_1G2vpd7x_sendMessage);
}

void Heavy_Echomatica::cBinop_1G2vpd7x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_rnS2MX2t_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_VTxrQoZP, m);
}

void Heavy_Echomatica::cBinop_rnS2MX2t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_DwyAomGP, m);
}

void Heavy_Echomatica::cExpr_kzKWqiNj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_erHTlg2C, 0, m, &cPack_erHTlg2C_sendMessage);
}

float Heavy_Echomatica::cExpr_kzKWqiNj_evaluate(const float* args) {
  	return (hv_exp_f(1.5*((float)(args[0])))-1)/(hv_exp_f(1.5)-1);
}

void Heavy_Echomatica::cSend_JW9EGjNj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_z2FHJ0T8_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_tNjpXvgC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_QJVvXE7G_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_UyGuF1yD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_wyaaf2Wv_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_Uarljnnp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_5iIqBL0x_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_Hml5rla4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_GXRTekk3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_cT3uz5B8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_a8ARNwCa_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_yXx8rEO2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_CLn4ht8q_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_KmQcJtRW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_K2EoSWYF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_Ifz0uQz3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_kg6cNpp3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_nwfzWR2g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jsQD5sXC_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_NzSeWTIi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_2HE1ZDW1_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_94uXibs6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_rKqdPGBB_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_FI33YUtX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_FsFH6ET1_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_iUmL593X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_vNmYOr1Z_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_QD3OByd2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_LMZikG1X_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_kQyTV4pc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_11ZrFKGs_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_oSfRW4Ur_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_wauDKI53_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_Y0E4YAfq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_VsiG73DP_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_4rYTMqGj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_vay4hxL0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_Ns5QR0z1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_FM2lvQs6_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_FUwguBJ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ci5jVlOM_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_qWK6OhSf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_bbpmnO5A_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_ZSzLSWKU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Cqd2E0EM_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_XL2yOwQC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_HrR3n51Q_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_BP2Co7P5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_AXnnjWuh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_6afl00A4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ll64VPu1_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_L3DTqCUJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_2RXXiC5P_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_B0gqALKy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_dp3c0vxx_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_lb4PFEyG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.01f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nOXRP60F, 0, m, &cSlice_nOXRP60F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pjUKlOwf, 0, m, &cSlice_pjUKlOwf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VUOnwhry, 0, m, &cSlice_VUOnwhry_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JLTaHZgC, 0, m, &cSlice_JLTaHZgC_sendMessage);
}

void Heavy_Echomatica::cCast_k723L3Ms_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_lb4PFEyG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_K5WW6F42_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_69nI0BSA_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_69nI0BSA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.2f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nOXRP60F, 0, m, &cSlice_nOXRP60F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pjUKlOwf, 0, m, &cSlice_pjUKlOwf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VUOnwhry, 0, m, &cSlice_VUOnwhry_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JLTaHZgC, 0, m, &cSlice_JLTaHZgC_sendMessage);
}

void Heavy_Echomatica::cMsg_JlKkOD1y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_RPjgyIeT, HV_BINOP_MULTIPLY, 1, m, &cBinop_RPjgyIeT_sendMessage);
}

void Heavy_Echomatica::cBinop_RPjgyIeT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_ioMrPRw8_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_EG201Dsg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_U0h4NPxV, 0, m, &cVar_U0h4NPxV_sendMessage);
}

void Heavy_Echomatica::cMsg_bw6jcplj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_YK7QVWzU, 1, m, &cIf_YK7QVWzU_sendMessage);
}

void Heavy_Echomatica::cMsg_qEUOKDOB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_YK7QVWzU, 1, m, &cIf_YK7QVWzU_sendMessage);
}

void Heavy_Echomatica::cSend_ioMrPRw8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_3pJIlyL3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_ULMgyS4s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_A4CXuNhb, 0, m, &cPack_A4CXuNhb_sendMessage);
}

void Heavy_Echomatica::cBinop_NnLHbfn2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_18TNexwQ, 0, m, &cPack_18TNexwQ_sendMessage);
}

void Heavy_Echomatica::cBinop_utrBX7BF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_unQxgdww, 0, m, &cPack_unQxgdww_sendMessage);
}

void Heavy_Echomatica::cBinop_JIIayXHR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Kr1KSWjj, 0, m, &cPack_Kr1KSWjj_sendMessage);
}

void Heavy_Echomatica::cBinop_6ReQzdbi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ES371sCB, 0, m, &cPack_ES371sCB_sendMessage);
}

void Heavy_Echomatica::cBinop_EHeayhtD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_QiksLS71, 0, m, &cPack_QiksLS71_sendMessage);
}

void Heavy_Echomatica::cCast_oIWY9yD9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ULMgyS4s, HV_BINOP_MULTIPLY, 1, m, &cBinop_ULMgyS4s_sendMessage);
}

void Heavy_Echomatica::cCast_4xsjW4sN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_XyguWI0L, 0, m, &cVar_XyguWI0L_sendMessage);
}

void Heavy_Echomatica::cCast_stvQrM9P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EHeayhtD, HV_BINOP_MULTIPLY, 1, m, &cBinop_EHeayhtD_sendMessage);
}

void Heavy_Echomatica::cCast_bQwj7t8W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_R58JGtx7, 0, m, &cVar_R58JGtx7_sendMessage);
}

void Heavy_Echomatica::cCast_iv8n4UmH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fuiJGtNm, 0, m, &cVar_fuiJGtNm_sendMessage);
}

void Heavy_Echomatica::cCast_kSbJ9yn9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6ReQzdbi, HV_BINOP_MULTIPLY, 1, m, &cBinop_6ReQzdbi_sendMessage);
}

void Heavy_Echomatica::cCast_UxhyxfbI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_h43UpT9H, 0, m, &cVar_h43UpT9H_sendMessage);
}

void Heavy_Echomatica::cCast_P2EfhAAu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JIIayXHR, HV_BINOP_MULTIPLY, 1, m, &cBinop_JIIayXHR_sendMessage);
}

void Heavy_Echomatica::cCast_ZtViLy88_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_utrBX7BF, HV_BINOP_MULTIPLY, 1, m, &cBinop_utrBX7BF_sendMessage);
}

void Heavy_Echomatica::cCast_xQQVuxN5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_1l39j94n, 0, m, &cVar_1l39j94n_sendMessage);
}

void Heavy_Echomatica::cCast_wzcnEdOC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NnLHbfn2, HV_BINOP_MULTIPLY, 1, m, &cBinop_NnLHbfn2_sendMessage);
}

void Heavy_Echomatica::cCast_zQ5g7Fe3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_C1q8cJ4B, 0, m, &cVar_C1q8cJ4B_sendMessage);
}

void Heavy_Echomatica::cBinop_yAbDESNB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fGNTHjVg_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_g5KByCRq_sendMessage);
}

void Heavy_Echomatica::cMsg_GKvDeL7P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.5f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_yAbDESNB, HV_BINOP_MULTIPLY, 1, m, &cBinop_yAbDESNB_sendMessage);
}

void Heavy_Echomatica::cCast_6c7BHamm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yAbDESNB, HV_BINOP_MULTIPLY, 0, m, &cBinop_yAbDESNB_sendMessage);
}

void Heavy_Echomatica::cCast_0nADR7x1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GKvDeL7P_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_tCg6Ts1X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_UwH8BgKP, HV_BINOP_ADD, 1, m, &cBinop_UwH8BgKP_sendMessage);
}

void Heavy_Echomatica::cBinop_UwH8BgKP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_GMVOzcCC, 0, m, &cVar_GMVOzcCC_sendMessage);
}

void Heavy_Echomatica::cCast_fGNTHjVg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tCg6Ts1X_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_g5KByCRq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UwH8BgKP, HV_BINOP_ADD, 0, m, &cBinop_UwH8BgKP_sendMessage);
}

void Heavy_Echomatica::cCast_neWaR6dS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JlKkOD1y_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_1VHfNuRs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qEUOKDOB_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_RPdQy5Gs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EG201Dsg_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_EZ48fX7a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bw6jcplj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_Wi90OuKf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_GMVOzcCC, 0, m, &cVar_GMVOzcCC_sendMessage);
}

void Heavy_Echomatica::cCast_RLFGcmaW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JlKkOD1y_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_teD63wEd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RPjgyIeT, HV_BINOP_MULTIPLY, 0, m, &cBinop_RPjgyIeT_sendMessage);
}

void Heavy_Echomatica::cReceive_SYtLC5Te_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4ejZWlqB, 0, m, &cVar_4ejZWlqB_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_mOGbNPO1, 0, m, &cVar_mOGbNPO1_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_GX0eLMAG, 0, m, &cVar_GX0eLMAG_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_JsfJmapC, 0, m, &cVar_JsfJmapC_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_S1gZXt0h, 0, m, &cVar_S1gZXt0h_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_vdPUUhjL, 0, m, &cVar_vdPUUhjL_sendMessage);
  cMsg_UZOKKeRC_sendMessage(_c, 0, m);
  cMsg_AjuI9On1_sendMessage(_c, 0, m);
  cMsg_tazpRKw2_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_19Xm5Ykz, 0, m, &cVar_19Xm5Ykz_sendMessage);
  cMsg_8tI087Rg_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_YtPeRmtm, 0, m, &cVar_YtPeRmtm_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RAKMVA2g_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_D2drJRuK_sendMessage);
  cMsg_anWw0GNi_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Ouc21BBq, 0, m, &cVar_Ouc21BBq_sendMessage);
  cMsg_OW0NrNgD_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Gs9czhu2, 0, m, &cVar_Gs9czhu2_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WcZwpE8z_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2uxPBRBj_sendMessage);
  cMsg_JNSAo9Op_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_7KDi04Vy, 0, m, &cVar_7KDi04Vy_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NTm8d27c_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UucKVvyF_sendMessage);
  cMsg_zg5uTma9_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_VwROXICj, 0, m, &cVar_VwROXICj_sendMessage);
  cMsg_w5P4rfby_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_wXdSACuE, 0, m, &cVar_wXdSACuE_sendMessage);
  cMsg_CIaTfpr0_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_fgKmHVOR, 0, m, &cVar_fgKmHVOR_sendMessage);
  cMsg_6JVIXyPy_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_bxBqym4O, 0, m, &cVar_bxBqym4O_sendMessage);
  cMsg_AeFssC0c_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_1YFc9OdX, 0, m, &cVar_1YFc9OdX_sendMessage);
  cMsg_1IRaDBRl_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_znVkxzaI, 0, m, &cVar_znVkxzaI_sendMessage);
  cMsg_Uyupicmo_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_sb4o7qQ6, 0, m, &cVar_sb4o7qQ6_sendMessage);
  cMsg_Ig5rSrWg_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_0R698Oyy, 0, m, &cVar_0R698Oyy_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_fZY9orFf, 0, m, &cVar_fZY9orFf_sendMessage);
  cMsg_rrqB1Y3Q_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_TCIdLR0x, 0, m, &cVar_TCIdLR0x_sendMessage);
  cMsg_thNJebvP_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_rb7BxYeD, 0, m, &cVar_rb7BxYeD_sendMessage);
  cMsg_RShVJ81Q_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_64PpancC, 0, m, &cVar_64PpancC_sendMessage);
  cMsg_x8Aq3UxH_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ytbmSFuW, 0, m, &cVar_ytbmSFuW_sendMessage);
  cMsg_cq1H37AB_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_s8cXfF6a, 0, m, &cVar_s8cXfF6a_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_6ojXG0K2, 0, m, &cVar_6ojXG0K2_sendMessage);
  cMsg_L9CHlVn9_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_s7HBiG8x, 0, m, &cVar_s7HBiG8x_sendMessage);
  cMsg_dZ7fiRwe_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_yzggPDm9, 0, m, &cVar_yzggPDm9_sendMessage);
  cMsg_tclQh8Mv_sendMessage(_c, 0, m);
  cMsg_kq7x1C9X_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_DL1eIvee, 0, m, &cVar_DL1eIvee_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_X9wZg4Rr, 0, m, &cVar_X9wZg4Rr_sendMessage);
  cMsg_sBowO1gh_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_4Ic3f6cp, 0, m, &cVar_4Ic3f6cp_sendMessage);
  cMsg_1MOOQxUP_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_FzxpvhiA, 0, m, &cVar_FzxpvhiA_sendMessage);
  cMsg_F435QDPI_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ax5mKf9U, 0, m, &cVar_ax5mKf9U_sendMessage);
  cMsg_wRHLUTH0_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_tfL4MZEB, 0, m, &cVar_tfL4MZEB_sendMessage);
  cMsg_PcOhtR4L_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_nRfpX3j8, 0, m, &cVar_nRfpX3j8_sendMessage);
  cMsg_XnF1nTpR_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_opxYNif3, 0, m, &cVar_opxYNif3_sendMessage);
  cMsg_XERXoTDn_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ZuHRrUXk, 0, m, &cVar_ZuHRrUXk_sendMessage);
  cMsg_oz74OTJ3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cReceive_wqeYk6zN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_D6ZIUi6O_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_z2FHJ0T8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_C1q8cJ4B, 0, m, &cVar_C1q8cJ4B_sendMessage);
}

void Heavy_Echomatica::cReceive_QJVvXE7G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_1l39j94n, 0, m, &cVar_1l39j94n_sendMessage);
}

void Heavy_Echomatica::cReceive_wyaaf2Wv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_h43UpT9H, 0, m, &cVar_h43UpT9H_sendMessage);
}

void Heavy_Echomatica::cReceive_5iIqBL0x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fuiJGtNm, 0, m, &cVar_fuiJGtNm_sendMessage);
}

void Heavy_Echomatica::cReceive_GXRTekk3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_R58JGtx7, 0, m, &cVar_R58JGtx7_sendMessage);
}

void Heavy_Echomatica::cReceive_a8ARNwCa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_XyguWI0L, 0, m, &cVar_XyguWI0L_sendMessage);
}

void Heavy_Echomatica::cReceive_CLn4ht8q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_cCx9soFY, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_RG0XaZ6G, 0, m, &cVar_RG0XaZ6G_sendMessage);
}

void Heavy_Echomatica::cReceive_K2EoSWYF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_SKdjyEiz, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_B3vXl0Fb, 0, m, &cVar_B3vXl0Fb_sendMessage);
}

void Heavy_Echomatica::cReceive_kg6cNpp3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_8LhXQU2F, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_vX7mvaWY, 0, m, &cVar_vX7mvaWY_sendMessage);
}

void Heavy_Echomatica::cReceive_jsQD5sXC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_YyrIVt72, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_PF9auPHw, 0, m, &cVar_PF9auPHw_sendMessage);
}

void Heavy_Echomatica::cReceive_2HE1ZDW1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_BUngelYI, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_KkaXcXo4, 0, m, &cVar_KkaXcXo4_sendMessage);
}

void Heavy_Echomatica::cReceive_rKqdPGBB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_zRxUpwrf, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_3WLWMr1D, 0, m, &cVar_3WLWMr1D_sendMessage);
}

void Heavy_Echomatica::cReceive_FsFH6ET1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_zA7hABg7, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_1cWbkLA3, 0, m, &cVar_1cWbkLA3_sendMessage);
}

void Heavy_Echomatica::cReceive_vNmYOr1Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_6yB4y4aM, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_VOHj1ZCy, 0, m, &cVar_VOHj1ZCy_sendMessage);
}

void Heavy_Echomatica::cReceive_LMZikG1X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_C7RVoe5x, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_JdQ4X9JA, 0, m, &cVar_JdQ4X9JA_sendMessage);
}

void Heavy_Echomatica::cReceive_11ZrFKGs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_gPT3XOJK, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_QxxzmVAi, 0, m, &cVar_QxxzmVAi_sendMessage);
}

void Heavy_Echomatica::cReceive_wauDKI53_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_AV1DHCkU, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_BlOs1cPd, 0, m, &cVar_BlOs1cPd_sendMessage);
}

void Heavy_Echomatica::cReceive_VsiG73DP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_0TWe2R64, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_I11MkeOI, 0, m, &cVar_I11MkeOI_sendMessage);
}

void Heavy_Echomatica::cReceive_3pJIlyL3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wzcnEdOC_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zQ5g7Fe3_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZtViLy88_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xQQVuxN5_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_P2EfhAAu_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UxhyxfbI_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kSbJ9yn9_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iv8n4UmH_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_stvQrM9P_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bQwj7t8W_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oIWY9yD9_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4xsjW4sN_sendMessage);
}

void Heavy_Echomatica::cReceive_vay4hxL0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_TINKDUNG_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_FM2lvQs6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fgKmHVOR, 0, m, &cVar_fgKmHVOR_sendMessage);
}

void Heavy_Echomatica::cReceive_ci5jVlOM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bxBqym4O, 0, m, &cVar_bxBqym4O_sendMessage);
}

void Heavy_Echomatica::cReceive_bbpmnO5A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_1YFc9OdX, 0, m, &cVar_1YFc9OdX_sendMessage);
}

void Heavy_Echomatica::cReceive_Cqd2E0EM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_znVkxzaI, 0, m, &cVar_znVkxzaI_sendMessage);
}

void Heavy_Echomatica::cReceive_HrR3n51Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_sb4o7qQ6, 0, m, &cVar_sb4o7qQ6_sendMessage);
}

void Heavy_Echomatica::cReceive_AXnnjWuh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0R698Oyy, 0, m, &cVar_0R698Oyy_sendMessage);
}

void Heavy_Echomatica::cReceive_ll64VPu1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_muC7InWp, m);
}

void Heavy_Echomatica::cReceive_2RXXiC5P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TCIdLR0x, 0, m, &cVar_TCIdLR0x_sendMessage);
}

void Heavy_Echomatica::cReceive_dp3c0vxx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fZY9orFf, 0, m, &cVar_fZY9orFf_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9aqc6YET_sendMessage);
}

void Heavy_Echomatica::cReceive_l8bTP8Qy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_DTOWs1Wa, 0, m, &cVar_DTOWs1Wa_sendMessage);
}

void Heavy_Echomatica::cReceive_sp3wQFyR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_QnTs2cvb_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_faJrEEwI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_K3YUMOck_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_a3Hs6sfL_sendMessage);
}

void Heavy_Echomatica::cReceive_8qpk7KGf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_DaK7JXe0_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mWPOg356_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bhp2Agl5_sendMessage);
}

void Heavy_Echomatica::cReceive_Eakzvt72_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_uRYAjskS, 0, m, &cPack_uRYAjskS_sendMessage);
}

void Heavy_Echomatica::cReceive_5jonw5ha_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_AguRl1gM, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_tOOSIjvl, m);
}

void Heavy_Echomatica::cReceive_ioO62yn4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cExpr_onMessage(_c, &Context(_c)->cExpr_kzKWqiNj, 0, m, &cExpr_kzKWqiNj_sendMessage);
}

void Heavy_Echomatica::cReceive_dvDyPSRB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_PIpghOJs_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_kL2s7iyo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_RdTulpue, 0, m, &cPack_RdTulpue_sendMessage);
}

void Heavy_Echomatica::cReceive_nltlbnCO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Q5GRkjoo_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jNz4ZxS4_sendMessage);
}

void Heavy_Echomatica::cReceive_Mrj4LPzr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_M5gpODRy_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_H10D0cBu_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9LcNrzh5_sendMessage);
}

void Heavy_Echomatica::cReceive_9WYX5m9O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Ewbp7Qdj_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4XMkmp4m_sendMessage);
}

void Heavy_Echomatica::cReceive_B2M29tNJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fc6GbPOq_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_g71v3mm7_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JOwNBzIl_sendMessage);
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

int Heavy_Echomatica::process(float **inputBuffers, float **outputBuffers, int n) {
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
  hv_bufferf_t Bf0, Bf1, Bf2, Bf3, Bf4, Bf5, Bf6, Bf7, Bf8, Bf9, Bf10, Bf11, Bf12, Bf13, Bf14, Bf15;
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
    __hv_varread_f(&sVarf_rlwLmFPB, VOf(Bf0));
    __hv_biquad_k_f(&sBiquad_k_lIIzWQFw, VIf(Bf0), VOf(Bf1));
    __hv_varread_f(&sVarf_muC7InWp, VOf(Bf2));
    __hv_varread_f(&sVarf_ynExFKrl, VOf(Bf3));
    __hv_rpole_f(&sRPole_EEFYIoOC, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_B6KSSVY0, VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_vHJXrvjT, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_unYm8T2a, VOf(Bf0));
    __hv_rpole_f(&sRPole_DHab27qw, VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_SQEVCD5h, VIf(Bf0), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_VsN3vcrg, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_23LYqawl, VOf(Bf3));
    __hv_rpole_f(&sRPole_EpYQqYrc, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_UTJXYgtz, VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_WD5jaOIV, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_lXmojnzH, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_fFG1x9jR, VOf(Bf3));
    __hv_rpole_f(&sRPole_LeYj9dw1, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_rtvfk9AG, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_cm2fvFVT, VOf(Bf3));
    __hv_rpole_f(&sRPole_MOsW1WB0, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_V0kDjerQ, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_nmx2Mwf7, VOf(Bf3));
    __hv_rpole_f(&sRPole_7LU9GCuC, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf1), VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_U0x54IXk, VOf(Bf2));
    __hv_varread_f(&sVarf_EfZY6LZ8, VOf(Bf1));
    __hv_varread_f(&sVarf_WHElu1vk, VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_sfjGD8yB, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_Kwk2omaF, VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_Q1n4SOYu, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_zU08L9M3, VOf(Bf2));
    __hv_rpole_f(&sRPole_gnE7ubsC, VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_GHleUiki, VIf(Bf2), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_rBp8rpA5, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_5QvZOyBF, VOf(Bf1));
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_Tb6dQkk8, VOf(Bf2));
    __hv_rpole_f(&sRPole_GGTA6Xfs, VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f);
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_RBkXKFcY, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_3c9gmJNX, VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    sEnv_process(this, &sEnv_eBpAyol9, VIf(Bf0), &sEnv_eBpAyol9_sendMessage);
    __hv_line_f(&sLine_bYbGAuCO, VOf(Bf4));
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
    __hv_line_f(&sLine_g7Dne5J7, VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf2), VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_VTxrQoZP, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_DwyAomGP, VOf(Bf5));
    __hv_rpole_f(&sRPole_8znOqSfo, VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_tabwrite_f(&sTabwrite_Kw0kOEb1, VIf(Bf5));
    __hv_phasor_k_f(&sPhasor_QXRuIFim, VOf(Bf5));
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
    __hv_varread_f(&sVarf_axuQHCwH, VOf(Bf2));
    __hv_phasor_k_f(&sPhasor_2PzTEcSR, VOf(Bf5));
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
    __hv_varread_f(&sVarf_vJCNziVW, VOf(Bf6));
    __hv_mul_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf3), VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_9oVWULPP, VIf(Bf6));
    __hv_line_f(&sLine_eQdG8VWG, VOf(Bf6));
    __hv_varread_f(&sVarf_9oVWULPP, VOf(Bf2));
    __hv_add_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_tabhead_f(&sTabhead_y09BnyIT, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_UkCaSIKU, VOf(Bf6));
    __hv_mul_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_dhdCyfst, VOf(Bf2));
    __hv_min_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_RTrMlDIH, VOf(Bf2));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_eQq3nrKr, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_tmnSO1e1, VIi(Bi0), VOf(Bf2));
    __hv_sub_f(VIf(Bf4), VIf(Bf2), VOf(Bf4));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf4), VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_zA7hABg7, VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_U0x54IXk, VIf(Bf3));
    __hv_line_f(&sLine_4QZ4cUOb, VOf(Bf3));
    __hv_varread_f(&sVarf_9oVWULPP, VOf(Bf4));
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_tabhead_f(&sTabhead_HKoj1PxQ, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_wCA1hA8D, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_DtAjYsc2, VOf(Bf4));
    __hv_min_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_Wi2lZN9a, VOf(Bf4));
    __hv_zero_f(VOf(Bf5));
    __hv_lt_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_cast_fi(VIf(Bf5), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_WmnTF2FF, VIi(Bi1), VOf(Bf5));
    __hv_tabread_if(&sTabread_n1g2ktVs, VIi(Bi0), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf5));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf5), VIf(Bf6), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_C7RVoe5x, VOf(Bf6));
    __hv_mul_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_EfZY6LZ8, VIf(Bf6));
    __hv_line_f(&sLine_58MYh6sM, VOf(Bf6));
    __hv_varread_f(&sVarf_9oVWULPP, VOf(Bf5));
    __hv_add_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_tabhead_f(&sTabhead_ffQK5sX1, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_mX1zAyZ2, VOf(Bf6));
    __hv_mul_f(VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_Y5HrQIHt, VOf(Bf5));
    __hv_min_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_2IzBp8hh, VOf(Bf5));
    __hv_zero_f(VOf(Bf7));
    __hv_lt_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_and_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_cast_fi(VIf(Bf7), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_7KCziAuO, VIi(Bi1), VOf(Bf7));
    __hv_tabread_if(&sTabread_1rcfEnku, VIi(Bi0), VOf(Bf5));
    __hv_sub_f(VIf(Bf7), VIf(Bf5), VOf(Bf7));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf7), VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_AV1DHCkU, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_WHElu1vk, VIf(Bf3));
    __hv_line_f(&sLine_jyz8QVfx, VOf(Bf3));
    __hv_varread_f(&sVarf_9oVWULPP, VOf(Bf7));
    __hv_add_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_tabhead_f(&sTabhead_NeGDry4C, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_QDnMKz2W, VOf(Bf3));
    __hv_mul_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_n0NAtqRX, VOf(Bf7));
    __hv_min_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_P8ZlqjF4, VOf(Bf7));
    __hv_zero_f(VOf(Bf1));
    __hv_lt_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_and_f(VIf(Bf7), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_cast_fi(VIf(Bf1), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_hj09vjr1, VIi(Bi1), VOf(Bf1));
    __hv_tabread_if(&sTabread_JNamAsES, VIi(Bi0), VOf(Bf7));
    __hv_sub_f(VIf(Bf1), VIf(Bf7), VOf(Bf1));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf1), VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_0TWe2R64, VOf(Bf6));
    __hv_mul_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_sfjGD8yB, VIf(Bf6));
    __hv_line_f(&sLine_SAC1H6GT, VOf(Bf6));
    __hv_varread_f(&sVarf_9oVWULPP, VOf(Bf1));
    __hv_add_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_tabhead_f(&sTabhead_xeZiD90V, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_zsnI7YDl, VOf(Bf6));
    __hv_mul_f(VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_RAy8FzNo, VOf(Bf1));
    __hv_min_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_YMye6L1J, VOf(Bf1));
    __hv_zero_f(VOf(Bf0));
    __hv_lt_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_and_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_cast_fi(VIf(Bf0), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_gSBKrsNZ, VIi(Bi1), VOf(Bf0));
    __hv_tabread_if(&sTabread_oVNKoShv, VIi(Bi0), VOf(Bf1));
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf0));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf0), VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_gPT3XOJK, VOf(Bf3));
    __hv_mul_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_Kwk2omaF, VIf(Bf3));
    __hv_line_f(&sLine_A0c5Ngzi, VOf(Bf3));
    __hv_varread_f(&sVarf_9oVWULPP, VOf(Bf0));
    __hv_add_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_tabhead_f(&sTabhead_jHqhD2xt, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_MZGPrzuU, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_Jk6B1gRX, VOf(Bf0));
    __hv_min_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_I7y3KmZu, VOf(Bf0));
    __hv_zero_f(VOf(Bf8));
    __hv_lt_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_and_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_cast_fi(VIf(Bf8), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_ckDfjoXs, VIi(Bi1), VOf(Bf8));
    __hv_tabread_if(&sTabread_FsEIVIPx, VIi(Bi0), VOf(Bf0));
    __hv_sub_f(VIf(Bf8), VIf(Bf0), VOf(Bf8));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf8), VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_6yB4y4aM, VOf(Bf6));
    __hv_mul_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_Q1n4SOYu, VIf(Bf6));
    sEnv_process(this, &sEnv_uU3cnlU6, VIf(I0), &sEnv_uU3cnlU6_sendMessage);
    __hv_line_f(&sLine_Nw12VOyb, VOf(Bf6));
    __hv_mul_f(VIf(I0), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf8), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf6), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_cnEbYPdp, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_tUioCfFx, VOf(Bf6));
    __hv_rpole_f(&sRPole_YeU9i4kH, VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_OQpnXPZx, VOf(Bf8));
    __hv_rpole_f(&sRPole_S2LnCcZ5, VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_WknTv4yY, VIf(Bf8), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_vnEjhJke, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    sEnv_process(this, &sEnv_jFNvuNoX, VIf(I1), &sEnv_jFNvuNoX_sendMessage);
    __hv_line_f(&sLine_E50myOw3, VOf(Bf6));
    __hv_mul_f(VIf(I1), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf3), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_Y7JJ70VG, VOf(Bf3));
    __hv_mul_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_7aLvL2md, VOf(Bf6));
    __hv_rpole_f(&sRPole_5XPxswzO, VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_HvYcSgi0, VOf(Bf3));
    __hv_rpole_f(&sRPole_BCIojrgh, VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_at87Ria9, VIf(Bf3), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_SWA5zlJs, VOf(Bf3));
    __hv_mul_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf8), VIf(Bf3), VOf(Bf6));
    __hv_varwrite_f(&sVarf_rlwLmFPB, VIf(Bf6));
    __hv_varread_f(&sVarf_AguRl1gM, VOf(Bf6));
    __hv_mul_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf3), 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f);
    __hv_varread_f(&sVarf_RAMYJAxD, VOf(Bf9));
    __hv_rpole_f(&sRPole_PDadpkMm, VIf(ZERO), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf10), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_SGxAjGhk, VIf(Bf9), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf9), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_dPLCFtsm, VOf(Bf9));
    __hv_mul_f(VIf(Bf10), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf10), 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f);
    __hv_min_f(VIf(Bf9), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf9), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf10), VIf(Bf9), VOf(Bf9));
    __hv_line_f(&sLine_yabwkAP1, VOf(Bf10));
    __hv_mul_f(VIf(Bf9), VIf(Bf10), VOf(Bf10));
    __hv_phasor_k_f(&sPhasor_KwwL2zva, VOf(Bf9));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf9), VIf(Bf11), VOf(Bf11));
    __hv_abs_f(VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf9), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf11), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf9), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf9));
    __hv_mul_f(VIf(Bf11), VIf(Bf9), VOf(Bf12));
    __hv_mul_f(VIf(Bf12), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf13), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf14), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf12), VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_fma_f(VIf(Bf9), VIf(Bf13), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf13), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_var_k_f(VOf(Bf9), 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f);
    __hv_fma_f(VIf(Bf11), VIf(Bf13), VIf(Bf9), VOf(Bf9));
    __hv_tabhead_f(&sTabhead_F0MPCMTH, VOf(Bf13));
    __hv_var_k_f_r(VOf(Bf11), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf13), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_tWxACywY, VOf(Bf13));
    __hv_mul_f(VIf(Bf9), VIf(Bf13), VOf(Bf13));
    __hv_varread_f(&sVarf_ApN7xsbn, VOf(Bf9));
    __hv_min_f(VIf(Bf13), VIf(Bf9), VOf(Bf9));
    __hv_zero_f(VOf(Bf13));
    __hv_max_f(VIf(Bf9), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf11), VIf(Bf13), VOf(Bf13));
    __hv_floor_f(VIf(Bf13), VOf(Bf11));
    __hv_varread_f(&sVarf_H2iNE3WR, VOf(Bf9));
    __hv_zero_f(VOf(Bf14));
    __hv_lt_f(VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_and_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_add_f(VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_cast_fi(VIf(Bf14), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_QA6Fp6Sr, VIi(Bi1), VOf(Bf14));
    __hv_tabread_if(&sTabread_9SwgZ4Dl, VIi(Bi0), VOf(Bf9));
    __hv_sub_f(VIf(Bf14), VIf(Bf9), VOf(Bf14));
    __hv_sub_f(VIf(Bf13), VIf(Bf11), VOf(Bf11));
    __hv_fma_f(VIf(Bf14), VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf9), VIf(Bf11), VIf(Bf10), VOf(Bf11));
    __hv_varread_f(&sVarf_SapQPaP4, VOf(Bf9));
    __hv_rpole_f(&sRPole_K3NGb1ZV, VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_iy0HV9Hj, VIf(Bf9), VOf(Bf14));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf9), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_swRrYumj, VOf(Bf9));
    __hv_mul_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_phasor_k_f(&sPhasor_zfCAWje4, VOf(Bf11));
    __hv_var_k_f(VOf(Bf14), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_abs_f(VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf11), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf14), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_mul_f(VIf(Bf14), VIf(Bf14), VOf(Bf11));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf13));
    __hv_mul_f(VIf(Bf13), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf12), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf15), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf13), VIf(Bf15), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf11), VIf(Bf12), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf12), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_var_k_f(VOf(Bf11), 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f);
    __hv_fma_f(VIf(Bf14), VIf(Bf12), VIf(Bf11), VOf(Bf11));
    __hv_tabhead_f(&sTabhead_1xvq0yTN, VOf(Bf12));
    __hv_var_k_f_r(VOf(Bf14), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf12), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_e63pGA6L, VOf(Bf12));
    __hv_mul_f(VIf(Bf11), VIf(Bf12), VOf(Bf12));
    __hv_varread_f(&sVarf_UClXYCGc, VOf(Bf11));
    __hv_min_f(VIf(Bf12), VIf(Bf11), VOf(Bf11));
    __hv_zero_f(VOf(Bf12));
    __hv_max_f(VIf(Bf11), VIf(Bf12), VOf(Bf12));
    __hv_sub_f(VIf(Bf14), VIf(Bf12), VOf(Bf12));
    __hv_floor_f(VIf(Bf12), VOf(Bf14));
    __hv_varread_f(&sVarf_gC2WhgZJ, VOf(Bf11));
    __hv_zero_f(VOf(Bf15));
    __hv_lt_f(VIf(Bf14), VIf(Bf15), VOf(Bf15));
    __hv_and_f(VIf(Bf11), VIf(Bf15), VOf(Bf15));
    __hv_add_f(VIf(Bf14), VIf(Bf15), VOf(Bf15));
    __hv_cast_fi(VIf(Bf15), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_W715w0B5, VIi(Bi1), VOf(Bf15));
    __hv_tabread_if(&sTabread_X94GTMp3, VIi(Bi0), VOf(Bf11));
    __hv_sub_f(VIf(Bf15), VIf(Bf11), VOf(Bf15));
    __hv_sub_f(VIf(Bf12), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf15), VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf14), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf11), VIf(Bf14), VIf(Bf10), VOf(Bf14));
    __hv_varread_f(&sVarf_bobMpB7C, VOf(Bf11));
    __hv_rpole_f(&sRPole_9vmKguCt, VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_ilqFatpP, VIf(Bf11), VOf(Bf15));
    __hv_mul_f(VIf(Bf15), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_o1xGruuN, VOf(Bf11));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_EfuqqN8k, VOf(Bf14));
    __hv_mul_f(VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_tabwrite_f(&sTabwrite_sphWnPCr, VIf(Bf14));
    __hv_varread_f(&sVarf_DFlX2U7t, VOf(Bf14));
    __hv_mul_f(VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_tabwrite_f(&sTabwrite_sm201wML, VIf(Bf14));
    __hv_fma_f(VIf(Bf6), VIf(Bf3), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_GyKH6VmQ, VOf(Bf3));
    __hv_rpole_f(&sRPole_7hdAU6b2, VIf(Bf11), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_SHJ0MBLs, VIf(Bf3), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf3), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_gN5n45jQ, VOf(Bf3));
    __hv_mul_f(VIf(Bf11), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf3), VIf(O1), VOf(O1));
    __hv_varread_f(&sVarf_tOOSIjvl, VOf(Bf3));
    __hv_mul_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf8), 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f);
    __hv_fma_f(VIf(Bf3), VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_74ycPKVw, VOf(Bf8));
    __hv_rpole_f(&sRPole_H0Nuhy3h, VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_xpJxCqjM, VIf(Bf8), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_iuCBgxMv, VOf(Bf8));
    __hv_mul_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf8), VIf(O0), VOf(O0));
    __hv_line_f(&sLine_cCx9soFY, VOf(Bf8));
    __hv_mul_f(VIf(Bf2), VIf(Bf8), VOf(Bf8));
    __hv_line_f(&sLine_SKdjyEiz, VOf(Bf2));
    __hv_line_f(&sLine_8LhXQU2F, VOf(Bf9));
    __hv_line_f(&sLine_YyrIVt72, VOf(Bf3));
    __hv_line_f(&sLine_BUngelYI, VOf(Bf11));
    __hv_line_f(&sLine_zRxUpwrf, VOf(Bf6));
    __hv_mul_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf5), VIf(Bf11), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf1), VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf4), VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf0), VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));

    // save output vars to output buffer
    __hv_store_f(outputBuffers[0]+n, VIf(O0));
    __hv_store_f(outputBuffers[1]+n, VIf(O1));
  }

  blockStartTimestamp = nextBlock;

  return n4; // return the number of frames processed

}

int Heavy_Echomatica::processInline(float *inputBuffers, float *outputBuffers, int n4) {
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

int Heavy_Echomatica::processInlineInterleaved(float *inputBuffers, float *outputBuffers, int n4) {
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
