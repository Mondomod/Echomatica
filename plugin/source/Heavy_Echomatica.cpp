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
  numBytes += sEnv_init(&sEnv_3DelVEa7, 256, 512);
  numBytes += sLine_init(&sLine_WHWiMlis);
  numBytes += sRPole_init(&sRPole_kSwEj9j6);
  numBytes += sRPole_init(&sRPole_CqFYWyjA);
  numBytes += sDel1_init(&sDel1_f8Y5MZFr);
  numBytes += sEnv_init(&sEnv_fghOrcNy, 256, 512);
  numBytes += sLine_init(&sLine_bp77BR8O);
  numBytes += sRPole_init(&sRPole_ZSTPKs1w);
  numBytes += sRPole_init(&sRPole_TMqzkmGp);
  numBytes += sDel1_init(&sDel1_XlDGWH5d);
  numBytes += sRPole_init(&sRPole_tamOTK8F);
  numBytes += sDel1_init(&sDel1_aP1SlzXz);
  numBytes += sRPole_init(&sRPole_UA5QHEsm);
  numBytes += sLine_init(&sLine_AdrTeNVb);
  numBytes += sLine_init(&sLine_zRHdJkfY);
  numBytes += sEnv_init(&sEnv_Z8vtW9Cd, 256, 512);
  numBytes += sLine_init(&sLine_6W3ljcNl);
  numBytes += sLine_init(&sLine_pyaWV10n);
  numBytes += sRPole_init(&sRPole_rHZyJBoh);
  numBytes += sRPole_init(&sRPole_hYkCwfSC);
  numBytes += sDel1_init(&sDel1_9T1U4Wqa);
  numBytes += sTabwrite_init(&sTabwrite_pWi0XPhH, &hTable_hYMfrILr);
  numBytes += sPhasor_k_init(&sPhasor_3RdkqynE, 0.0f, sampleRate);
  numBytes += sPhasor_k_init(&sPhasor_hMA8xOnF, 0.0f, sampleRate);
  numBytes += sLine_init(&sLine_k4K27cEv);
  numBytes += sTabhead_init(&sTabhead_MOmyfLfD, &hTable_hYMfrILr);
  numBytes += sTabread_init(&sTabread_cE6RZMsP, &hTable_hYMfrILr, false);
  numBytes += sTabread_init(&sTabread_hAOWCBC6, &hTable_hYMfrILr, false);
  numBytes += sLine_init(&sLine_r14GQdpn);
  numBytes += sLine_init(&sLine_PZbeGCYg);
  numBytes += sTabhead_init(&sTabhead_nVeWy0IP, &hTable_hYMfrILr);
  numBytes += sTabread_init(&sTabread_VsbB4NUA, &hTable_hYMfrILr, false);
  numBytes += sTabread_init(&sTabread_Fwj1F5bM, &hTable_hYMfrILr, false);
  numBytes += sLine_init(&sLine_9Md4eUG1);
  numBytes += sLine_init(&sLine_dfuFSTjO);
  numBytes += sTabhead_init(&sTabhead_YSa0G98A, &hTable_hYMfrILr);
  numBytes += sTabread_init(&sTabread_DeeLKeGo, &hTable_hYMfrILr, false);
  numBytes += sTabread_init(&sTabread_vt4UDgZy, &hTable_hYMfrILr, false);
  numBytes += sLine_init(&sLine_4g20Qzzm);
  numBytes += sLine_init(&sLine_HLmPYKYh);
  numBytes += sTabhead_init(&sTabhead_DUzeyGGc, &hTable_hYMfrILr);
  numBytes += sTabread_init(&sTabread_FSAP6kZ4, &hTable_hYMfrILr, false);
  numBytes += sTabread_init(&sTabread_Ov11Hed1, &hTable_hYMfrILr, false);
  numBytes += sLine_init(&sLine_euPYC2le);
  numBytes += sLine_init(&sLine_9MPg6KDI);
  numBytes += sTabhead_init(&sTabhead_XRcSEFtF, &hTable_hYMfrILr);
  numBytes += sTabread_init(&sTabread_QfYbyCWm, &hTable_hYMfrILr, false);
  numBytes += sTabread_init(&sTabread_DStQDf6y, &hTable_hYMfrILr, false);
  numBytes += sLine_init(&sLine_ALB7Iop3);
  numBytes += sLine_init(&sLine_l662I3fb);
  numBytes += sTabhead_init(&sTabhead_vPVkTgKa, &hTable_hYMfrILr);
  numBytes += sTabread_init(&sTabread_vHs9sxou, &hTable_hYMfrILr, false);
  numBytes += sTabread_init(&sTabread_fDYeLJFC, &hTable_hYMfrILr, false);
  numBytes += sLine_init(&sLine_neUY0Sab);
  numBytes += sLine_init(&sLine_8voXXkjS);
  numBytes += sLine_init(&sLine_FLqOFmlD);
  numBytes += sLine_init(&sLine_go30dqRL);
  numBytes += sLine_init(&sLine_7hLmsQcx);
  numBytes += sLine_init(&sLine_48aoyzsr);
  numBytes += sLine_init(&sLine_3UTD2jLr);
  numBytes += sBiquad_k_init(&sBiquad_k_xGTHaZn6, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  numBytes += sRPole_init(&sRPole_b4xGe2cg);
  numBytes += sDel1_init(&sDel1_P4n4iMAV);
  numBytes += sRPole_init(&sRPole_tPX6coFb);
  numBytes += sDel1_init(&sDel1_x88HHBDF);
  numBytes += sRPole_init(&sRPole_0SlBNdOa);
  numBytes += sDel1_init(&sDel1_gQnIRtbP);
  numBytes += sRPole_init(&sRPole_ChzMbX6a);
  numBytes += sRPole_init(&sRPole_LLQm2V1U);
  numBytes += sRPole_init(&sRPole_fiLtz5R4);
  numBytes += sRPole_init(&sRPole_PweodlGQ);
  numBytes += sDel1_init(&sDel1_HxNYGXYd);
  numBytes += sLine_init(&sLine_LPXAF7fR);
  numBytes += sLine_init(&sLine_Jbwla4vc);
  numBytes += sLine_init(&sLine_ScjZWXpG);
  numBytes += sLine_init(&sLine_HIQKc63w);
  numBytes += sLine_init(&sLine_WOG1vR2T);
  numBytes += sBiquad_init(&sBiquad_s_NP2Qb5Ot);
  numBytes += sLine_init(&sLine_B9ftAqW9);
  numBytes += sPhasor_k_init(&sPhasor_bmXx8Yd0, 0.3f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_UryGlJup, &hTable_O074W810);
  numBytes += sTabread_init(&sTabread_vHVo9Bw1, &hTable_O074W810, false);
  numBytes += sTabread_init(&sTabread_et4PD4g0, &hTable_O074W810, false);
  numBytes += sRPole_init(&sRPole_klsnOE7b);
  numBytes += sDel1_init(&sDel1_CvZgUqsq);
  numBytes += sPhasor_k_init(&sPhasor_D4H30uKg, 0.5f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_lMMuqXCX, &hTable_o5U4ISfn);
  numBytes += sTabread_init(&sTabread_bWzQLc2k, &hTable_o5U4ISfn, false);
  numBytes += sTabread_init(&sTabread_KRl6Hrst, &hTable_o5U4ISfn, false);
  numBytes += sRPole_init(&sRPole_PdnmQ7dl);
  numBytes += sDel1_init(&sDel1_4sIol0jR);
  numBytes += sTabwrite_init(&sTabwrite_kFsZTNdM, &hTable_o5U4ISfn);
  numBytes += sTabwrite_init(&sTabwrite_HLzmrw3I, &hTable_O074W810);
  numBytes += sRPole_init(&sRPole_Swsv3Zxn);
  numBytes += sDel1_init(&sDel1_ys27hHnU);
  numBytes += sRPole_init(&sRPole_Re0NC44U);
  numBytes += sDel1_init(&sDel1_id2QItjY);
  numBytes += cVar_init_s(&cVar_nrLzDoXW, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_CvoFMPqc, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_aV59czHT, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_lfghYPtM, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_qn3gSFbs, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_7hgLit6M, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_XVSzm28c, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_CKkRaHMa, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_6HvNBIFK, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_HkiZQucd, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_vP24XB18, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ouZDTU7I, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_2gIvaMpq, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_almC4a6A, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_E4Jr6u6T, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_KLBzpIun, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_kZb4VmIh, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_EZO94C1R, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_AF2CQNhx, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_2S5Dv1I5, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_7TZkxf3E, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_XEXmq5zw, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_L63bNF6x, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_JmiU9pPh, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_HgDp6R0l, 0.0f);
  numBytes += cVar_init_f(&cVar_zuAWCmaa, 0.0f);
  numBytes += cVar_init_f(&cVar_1PM0gW2A, 0.0f);
  numBytes += cVar_init_f(&cVar_nrFh5S5J, 0.0f);
  numBytes += cVar_init_f(&cVar_I7a2TvYK, 0.0f);
  numBytes += cVar_init_f(&cVar_npXYJIYY, 0.0f);
  numBytes += cVar_init_f(&cVar_Qd1KQhKt, 0.0f);
  numBytes += cVar_init_f(&cVar_fjesncdK, 0.0f);
  numBytes += cVar_init_f(&cVar_VyHJQwDH, 0.0f);
  numBytes += cVar_init_f(&cVar_LmdglMEu, 0.0f);
  numBytes += cVar_init_f(&cVar_JbgUbf6m, 0.0f);
  numBytes += cVar_init_f(&cVar_Bjcdacc3, 0.0f);
  numBytes += cPack_init(&cPack_wyWXTql7, 2, 0.0f, 20.0f);
  numBytes += cPack_init(&cPack_IxQULMqR, 2, 0.0f, 1800.0f);
  numBytes += cPack_init(&cPack_RQwGIdgn, 2, 0.0f, 1600.0f);
  numBytes += cPack_init(&cPack_E26TM1je, 2, 0.0f, 1300.0f);
  numBytes += cPack_init(&cPack_S5O9Cbbv, 2, 0.0f, 1000.0f);
  numBytes += cPack_init(&cPack_REANWtMk, 2, 0.0f, 800.0f);
  numBytes += cPack_init(&cPack_GK8JEe6B, 2, 0.0f, 600.0f);
  numBytes += cSlice_init(&cSlice_Qek6kPi2, 27, 1);
  numBytes += cSlice_init(&cSlice_RkGWSSnE, 26, 1);
  numBytes += cSlice_init(&cSlice_DRxUFHsq, 25, 1);
  numBytes += cSlice_init(&cSlice_UZymWpRJ, 24, 1);
  numBytes += cSlice_init(&cSlice_qYVnTrAU, 23, 1);
  numBytes += cSlice_init(&cSlice_AR9sPcVJ, 22, 1);
  numBytes += cSlice_init(&cSlice_3xiTRyjT, 21, 1);
  numBytes += cSlice_init(&cSlice_DOj1gTfY, 20, 1);
  numBytes += cSlice_init(&cSlice_C7AUpud9, 19, 1);
  numBytes += cSlice_init(&cSlice_VuM5j4kZ, 18, 1);
  numBytes += cSlice_init(&cSlice_QInVMI8U, 17, 1);
  numBytes += cSlice_init(&cSlice_BCmCLmkH, 16, 1);
  numBytes += cSlice_init(&cSlice_roqm1yHF, 15, 1);
  numBytes += cSlice_init(&cSlice_SCAEZevg, 14, 1);
  numBytes += cSlice_init(&cSlice_p2XXxrr0, 13, 1);
  numBytes += cSlice_init(&cSlice_jKKbvbOf, 12, 1);
  numBytes += cSlice_init(&cSlice_Rs82KTD1, 11, 1);
  numBytes += cSlice_init(&cSlice_rkHYjw32, 10, 1);
  numBytes += cSlice_init(&cSlice_ieT0OAFb, 9, 1);
  numBytes += cSlice_init(&cSlice_Wvj4Lfkc, 8, 1);
  numBytes += cSlice_init(&cSlice_KG3FHXjr, 7, 1);
  numBytes += cSlice_init(&cSlice_D0ydRXbY, 6, 1);
  numBytes += cSlice_init(&cSlice_hnZ1Sabf, 5, 1);
  numBytes += cSlice_init(&cSlice_oBCjuteD, 4, 1);
  numBytes += cSlice_init(&cSlice_eoFIiJwR, 3, 1);
  numBytes += cSlice_init(&cSlice_ePgxAcug, 2, 1);
  numBytes += cSlice_init(&cSlice_QkiACR9P, 1, 1);
  numBytes += cSlice_init(&cSlice_nGBojZ59, 0, 1);
  numBytes += cVar_init_f(&cVar_ks4QVgSk, 0.0f);
  numBytes += cVar_init_f(&cVar_JB2eW99J, 0.0f);
  numBytes += cVar_init_f(&cVar_xuKzp4sX, 0.0f);
  numBytes += cVar_init_f(&cVar_4i7FLY3y, 0.0f);
  numBytes += cVar_init_f(&cVar_zr6UWTic, 0.0f);
  numBytes += cVar_init_f(&cVar_frMbYm8g, 0.0f);
  numBytes += cSlice_init(&cSlice_7587Nfi8, 3, 1);
  numBytes += cSlice_init(&cSlice_UmM9t7rB, 2, 1);
  numBytes += cSlice_init(&cSlice_YGCx3TOi, 1, 1);
  numBytes += cSlice_init(&cSlice_kn6J7OWc, 0, 1);
  numBytes += cPack_init(&cPack_8qH4VSaw, 2, 0.0f, 50.0f);
  numBytes += cDelay_init(this, &cDelay_0f7qYTdK, 0.0f);
  numBytes += cDelay_init(this, &cDelay_wctm16oU, 0.0f);
  numBytes += hTable_init(&hTable_o5U4ISfn, 256);
  numBytes += cVar_init_f(&cVar_GWk9trRD, 0.0f);
  numBytes += cVar_init_s(&cVar_w8hFHDY2, "del-1001-delayD");
  numBytes += sVarf_init(&sVarf_TaYsPA7L, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Abhedhb3, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_8v2Zbkzd, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_dw5wP3Tq, "del-1001-delayC");
  numBytes += sVarf_init(&sVarf_JF8XEfji, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_wvr5LSp5, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_axFWNTmj, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_uQXqQlSh, 0.0f);
  numBytes += cDelay_init(this, &cDelay_Pu3lMV4F, 0.0f);
  numBytes += hTable_init(&hTable_O074W810, 256);
  numBytes += sVarf_init(&sVarf_IAPllr7m, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_RsAVUZX9, 3.0f);
  numBytes += cBinop_init(&cBinop_uAwTIOFA, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_Kmh8CRBe, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Eh2LIyA0, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_gCGleG8n, 3.0f);
  numBytes += cBinop_init(&cBinop_3ccydmyf, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_le0f17wo, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_sp1kCLay, 1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_dXFRcw0U, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_Kzj6rLJ0, 0.0f);
  numBytes += cVar_init_f(&cVar_cwALxjNU, 0.0f);
  numBytes += cVar_init_f(&cVar_79aZpdjD, 0.0f);
  numBytes += cPack_init(&cPack_fy8kftKy, 2, 0.0f, 100.0f);
  numBytes += cPack_init(&cPack_gwZbifTO, 2, 0.0f, 100.0f);
  numBytes += cVar_init_f(&cVar_go5V3ih2, 0.0f);
  numBytes += cVar_init_f(&cVar_JQUqKeE5, 0.0f);
  numBytes += cVar_init_f(&cVar_lK7MbB4b, 0.0f);
  numBytes += cBinop_init(&cBinop_PdhjA4El, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_VXOnfw0M, 0.0f); // __pow
  numBytes += cIf_init(&cIf_QWWbMViU, false);
  numBytes += cBinop_init(&cBinop_9iV8K2bW, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_Hw4Of70A, 74.0f);
  numBytes += cVar_init_f(&cVar_lflDqr2H, 3.0f);
  numBytes += cSlice_init(&cSlice_P0VKvwWs, 1, -1);
  numBytes += cVar_init_f(&cVar_ptd3JmEY, 1.0f);
  numBytes += cSlice_init(&cSlice_83UrQcsJ, 1, -1);
  numBytes += cVar_init_f(&cVar_8xw8FwYP, 70.0f);
  numBytes += cBinop_init(&cBinop_U4DAX0yv, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_Tx0eYSVs, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_8LT8ATOp, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_bnWtiS3X, 3000.0f);
  numBytes += cBinop_init(&cBinop_xVlmL0jF, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_wlVsmoJB, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Xm31b88M, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_kspn1A75, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_gVMUyC0B, 400.0f);
  numBytes += cBinop_init(&cBinop_a4iH5s0C, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_2nABxhho, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_07NPCjrt, false);
  numBytes += cVar_init_f(&cVar_Z7jJnXCG, 0.0f);
  numBytes += cVar_init_f(&cVar_pZlKgrxD, 0.0f);
  numBytes += cPack_init(&cPack_utxM8W9s, 3, 0.0f, 500.0f, 100.0f);
  numBytes += cDelay_init(this, &cDelay_DG3LdsjG, 0.0f);
  numBytes += cVar_init_f(&cVar_Mhdp64th, 20.0f);
  numBytes += cBinop_init(&cBinop_EKC84hKj, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_11I0o9ut, 0.0f);
  numBytes += cSlice_init(&cSlice_2vyP03HN, 1, -1);
  numBytes += cSlice_init(&cSlice_i8HmnVSb, 1, -1);
  numBytes += cVar_init_f(&cVar_OOuk12b0, 0.0f);
  numBytes += cVar_init_f(&cVar_V3KTmCq9, 20.0f);
  numBytes += cVar_init_f(&cVar_1z0bE0zV, 0.0f);
  numBytes += cVar_init_f(&cVar_6oJqTOaG, 0.0f);
  numBytes += cVar_init_f(&cVar_157YALMd, 0.0f);
  numBytes += cSlice_init(&cSlice_8vxlABw6, 1, 1);
  numBytes += cSlice_init(&cSlice_n9gxHQTJ, 0, 1);
  numBytes += cBinop_init(&cBinop_vflPJgIb, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_2lYfzzFW, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_XsqaFzdB, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_fdN35NCr, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_yizGFK3z, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_MPp6V04w, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_HlSzGvfp, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_yksTXEmN, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_rrmdjfnt, 0.0f);
  numBytes += cVar_init_f(&cVar_Dis4Ez7m, 0.0f);
  numBytes += cVar_init_f(&cVar_RODvJVvV, 0.0f);
  numBytes += cVar_init_f(&cVar_tGSJjfCP, 0.0f);
  numBytes += cVar_init_f(&cVar_EacJ840L, 0.0f);
  numBytes += cVar_init_f(&cVar_oX2Jn6vU, 0.0f);
  numBytes += sVarf_init(&sVarf_kAT5wN2i, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_IrNalIXx, 8.0f);
  numBytes += cBinop_init(&cBinop_Vk7aSFvJ, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_FCTHvr2Y, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_6CNVHa56, 0.0f);
  numBytes += cVar_init_f(&cVar_WEBDchav, 0.0f);
  numBytes += cBinop_init(&cBinop_587Moo5y, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_IqzkMKIj, 0.0f); // __pow
  numBytes += cIf_init(&cIf_yN4ZjPkN, false);
  numBytes += cBinop_init(&cBinop_gs0y2Lfn, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_qy0i5CFq, 82.0f);
  numBytes += cVar_init_f(&cVar_hgyMjLqw, 21.0f);
  numBytes += cSlice_init(&cSlice_oZ4a5ZCh, 1, -1);
  numBytes += cVar_init_f(&cVar_jDBE6Jxe, 1.0f);
  numBytes += cSlice_init(&cSlice_TLu9Lz56, 1, -1);
  numBytes += cVar_init_f(&cVar_POaGZcU4, 70.0f);
  numBytes += cBinop_init(&cBinop_ba1IXFcZ, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_0cz7MuCI, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_rOzqayVA, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_YaFNmRty, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_bzAwelga, 8.0f);
  numBytes += cBinop_init(&cBinop_c7nETXB4, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_yTUpjMvw, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_FFrL7pB6, 0.0f);
  numBytes += cVar_init_f(&cVar_7XFDCYIR, 0.0f);
  numBytes += cBinop_init(&cBinop_pqcSx2xc, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_0KR09LHk, 0.0f); // __pow
  numBytes += cIf_init(&cIf_jbrE5ki4, false);
  numBytes += cBinop_init(&cBinop_BA135JQD, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_Ez62AiVC, 82.0f);
  numBytes += cVar_init_f(&cVar_9e2iJgoC, 21.0f);
  numBytes += cSlice_init(&cSlice_2mU7x2DS, 1, -1);
  numBytes += cVar_init_f(&cVar_vMlJ9ac0, 1.0f);
  numBytes += cSlice_init(&cSlice_8Z5m8qI8, 1, -1);
  numBytes += cVar_init_f(&cVar_DaO1kGBk, 70.0f);
  numBytes += cBinop_init(&cBinop_hlagb0l9, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_yWkEhSDQ, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_Z8RbExAi, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_IahalyXv, 10000.0f);
  numBytes += cBinop_init(&cBinop_W6tNHAz9, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_gHlgcw6b, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_LuZtKaMn, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_WNv9T3VD, 10000.0f);
  numBytes += cBinop_init(&cBinop_KJumXBZc, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_AOtyjB8S, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_b6dxxPTC, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_9uz8t2pm, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_mvlPTaBG, 20.0f);
  numBytes += cBinop_init(&cBinop_Lpjbgn5H, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_85pZUEdS, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_rd7t9gph, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_C7pPYkzV, 20.0f);
  numBytes += cBinop_init(&cBinop_jBGM4tea, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_2FLKH5Pn, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_dl6kXYvn, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_LOrnp8x2, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_sFAqgtNt, 0.0f);
  numBytes += cDelay_init(this, &cDelay_avKT3l11, 0.0f);
  numBytes += hTable_init(&hTable_hYMfrILr, 256);
  numBytes += cVar_init_f(&cVar_Bp9EFn9v, 0.0f);
  numBytes += cVar_init_f(&cVar_FM2y4X7G, 0.0f);
  numBytes += cVar_init_f(&cVar_HEQ44Zmj, 1.0f);
  numBytes += cVar_init_f(&cVar_e3nR7W3R, 0.0f);
  numBytes += sVarf_init(&sVarf_3InXXHDf, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_HWpRhbfC, 0.0f);
  numBytes += cBinop_init(&cBinop_pmLwOEPQ, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_0npoSHBg, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_MkF6wEf0, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_FYCUJCuW, 0.0f);
  numBytes += cBinop_init(&cBinop_PWteoCam, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_01Byy70G, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_YgSDlaCC, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_uJl9k0Ps, 0.0f);
  numBytes += cBinop_init(&cBinop_9xVJiqB6, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_h5rFgAXA, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_Q4YDIarg, 22050.0f);
  numBytes += cBinop_init(&cBinop_ffeCMziO, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_jhSsyvMq, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_AdUexVat, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_VERq0I2m, 22050.0f);
  numBytes += cBinop_init(&cBinop_SmArHhC0, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_wBU6sQis, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_9cbLFMO3, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_JQtY6ER9, 22050.0f);
  numBytes += cBinop_init(&cBinop_zRDpXVZS, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_54n1fzTo, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_TRvFmIqJ, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_hQeb2UTi, 22050.0f);
  numBytes += cVar_init_f(&cVar_Zo7N6ie4, 1.0f);
  numBytes += cBinop_init(&cBinop_Bu5AwnFr, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_sZJSg0JY, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_coPVT7Fy, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_uO0ly9Zf, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_jk5IZiJV, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_FiskoH2v, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_8QQTZQz8, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_GVxxrC5H, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_7xPhshow, 30.0f);
  numBytes += cBinop_init(&cBinop_eI8Q7Zcb, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_lSD51BFi, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_n2lp21Mj, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_nSB9vnlg, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_RqeO6CWE, 0.0f);
  numBytes += cBinop_init(&cBinop_RP8CqhOG, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_p0INKv83, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_NCtkenzr, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_ZvJ7omDG, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_8Mv8j5JT, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_feFWscHF, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_FaPBNNgq, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_WcQt9ssQ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_JjxUskFn, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_WJcgD34E, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_jllGCEte, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_4Jbazckn, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_CaivyIqV, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_zIAGmOBo, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_6ltierWm, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_N3VA529d, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_iq4K6DH2, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_PbbH28Mg, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_KPUrkzjM, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_dd7mVqIj, 4500.0f);
  numBytes += cVar_init_f(&cVar_KmVcA5qm, 1.0f);
  numBytes += cVar_init_f(&cVar_2MvuQssh, -6.0f);
  numBytes += cBinop_init(&cBinop_Sp4VfFuM, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_VgweeodU, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_jeIELv2e, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_VK5MvWtJ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_mh3Gi1sz, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_fLjmB61l, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_mVOxJAwF, 0.0f); // __pow
  numBytes += cBinop_init(&cBinop_cH23uHh7, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_KPFyzgAp, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_w2VDKDS4, 20.0f);
  numBytes += cBinop_init(&cBinop_ZRDUvRMI, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_eqjxVRBQ, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_9fUrzTcA, 8000.0f);
  numBytes += cBinop_init(&cBinop_CSmbnGpZ, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_WxC5Oq4P, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_5bU92VXa, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_w1Ob9suW, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_GsV0QAJw, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_AxWKDMY3, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_p4S1RKGX, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_YTtI45p4, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_XWAAdNDJ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_4BmtV5AZ, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_CKmyfuvg, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_L6hUBge7, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_SUTQvx6K, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_rMywTRQ1, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_wflicF51, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_lnenmss4, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_hL447o86, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_8T5SdVgd, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_6QYvwYEl, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_NnnTyyWG, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_zbO7yScU, 0.0f, 0.0f, false);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_Echomatica::~Heavy_Echomatica() {
  sEnv_free(&sEnv_3DelVEa7);
  sEnv_free(&sEnv_fghOrcNy);
  sEnv_free(&sEnv_Z8vtW9Cd);
  cPack_free(&cPack_wyWXTql7);
  cPack_free(&cPack_IxQULMqR);
  cPack_free(&cPack_RQwGIdgn);
  cPack_free(&cPack_E26TM1je);
  cPack_free(&cPack_S5O9Cbbv);
  cPack_free(&cPack_REANWtMk);
  cPack_free(&cPack_GK8JEe6B);
  cPack_free(&cPack_8qH4VSaw);
  hTable_free(&hTable_o5U4ISfn);
  hTable_free(&hTable_O074W810);
  cPack_free(&cPack_fy8kftKy);
  cPack_free(&cPack_gwZbifTO);
  cPack_free(&cPack_utxM8W9s);
  hTable_free(&hTable_hYMfrILr);
}

HvTable *Heavy_Echomatica::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0x6F28B8EB: return &hTable_o5U4ISfn; // del-1001-delayD
    case 0xA74180A2: return &hTable_O074W810; // del-1001-delayC
    case 0xC7C6279C: return &hTable_hYMfrILr; // del-1001-delayA
    default: return nullptr;
  }
}

void Heavy_Echomatica::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0x22C9B907: { // Vari
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_jJMhnZFt_sendMessage);
      break;
    }
    case 0xBC81AC40: { // 1148-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_IDklrUw3_sendMessage);
      break;
    }
    case 0xA048D52F: { // 1148-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_hwooaTKh_sendMessage);
      break;
    }
    case 0xA2B0A880: { // 1218-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_3OYa9spT_sendMessage);
      break;
    }
    case 0xE351C9CC: { // 1218-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ZTFPKtPz_sendMessage);
      break;
    }
    case 0xE091EC31: { // 1240-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_zFnNTKC3_sendMessage);
      break;
    }
    case 0xAE9102A0: { // 1240-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Xd3llCT3_sendMessage);
      break;
    }
    case 0x613FB00D: { // 1381-A
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_i00olHgB_sendMessage);
      break;
    }
    case 0x84B978CE: { // 1381-sqrtA-alpha-2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_HgKjzGED_sendMessage);
      break;
    }
    case 0xD75E56F: { // 1381-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ZuYfBeyb_sendMessage);
      break;
    }
    case 0xA720EEDB: { // 1381-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_HyrZstLq_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_oZ73pxAs_sendMessage);
      break;
    }
    case 0xE68AB11B: { // chrs
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_UjJx1zbh_sendMessage);
      break;
    }
    case 0xBA8CED4E: { // dry
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_PmNrq0tN_sendMessage);
      break;
    }
    case 0x63E722C0: { // echo
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_poautT9y_sendMessage);
      break;
    }
    case 0x8FA433B0: { // f1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Px7XBNtl_sendMessage);
      break;
    }
    case 0xEE0EB120: { // f2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_CH9lPWxo_sendMessage);
      break;
    }
    case 0x4FFCF19F: { // f3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_pr633vd3_sendMessage);
      break;
    }
    case 0x2AF9F5EB: { // f4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_7QZOM1ku_sendMessage);
      break;
    }
    case 0xC6F6EBB2: { // f5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_UbrvWeU0_sendMessage);
      break;
    }
    case 0x775D6E5E: { // f6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_wwfBYgmm_sendMessage);
      break;
    }
    case 0xBB6123FD: { // fdbck_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ywLxePJK_sendMessage);
      break;
    }
    case 0xF1E7CD16: { // feedback
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_HjjtfBu0_sendMessage);
      break;
    }
    case 0xC7AF3F72: { // h1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_vze8RRHQ_sendMessage);
      break;
    }
    case 0x9BEBB079: { // h2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_d2fFOF7j_sendMessage);
      break;
    }
    case 0xAB1137FD: { // h3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Q9h9tBVA_sendMessage);
      break;
    }
    case 0x2B4C6DE1: { // h4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ZTQZMSjb_sendMessage);
      break;
    }
    case 0x2541E77D: { // h5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_X2UxslDK_sendMessage);
      break;
    }
    case 0xE7F6D341: { // h6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_l4aMekVd_sendMessage);
      break;
    }
    case 0x5667A4DA: { // head1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_XnTXfTz5_sendMessage);
      break;
    }
    case 0xAD6B31A5: { // head2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_pMwOXpoP_sendMessage);
      break;
    }
    case 0x8A2BD450: { // head3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ukoEqrSM_sendMessage);
      break;
    }
    case 0xCF5C829A: { // head4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9q8kXvT9_sendMessage);
      break;
    }
    case 0xEE70DFBC: { // head5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_K3Jf9JG0_sendMessage);
      break;
    }
    case 0x8E4B9939: { // head6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_zm0LLuqu_sendMessage);
      break;
    }
    case 0x7E24361: { // hp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_iMDAhn5i_sendMessage);
      break;
    }
    case 0x674D12F6: { // hp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_fCLQKLKF_sendMessage);
      break;
    }
    case 0x6A20C3F5: { // hp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_kaTVxUTG_sendMessage);
      break;
    }
    case 0x123E8795: { // lp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_23Jz0U3C_sendMessage);
      break;
    }
    case 0x4588BD1: { // lp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_utKWDc0P_sendMessage);
      break;
    }
    case 0xB7298D49: { // lp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_IAPPH85E_sendMessage);
      break;
    }
    case 0x64BD0F15: { // mf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_mdWSSa9T_sendMessage);
      break;
    }
    case 0x5A12F82E: { // mg
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_kKlEDIzj_sendMessage);
      break;
    }
    case 0x2C9C49A7: { // mq
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_pq83DsvP_sendMessage);
      break;
    }
    case 0xC8D93A6D: { // tapehead_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_f1XRI6hZ_sendMessage);
      break;
    }
    case 0xB25D05EB: { // varispeed
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_kCIvgeDD_sendMessage);
      break;
    }
    case 0x8ADB5B6B: { // varispeed_enable
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_rLQy82mX_sendMessage);
      break;
    }
    case 0x7BB47B7B: { // wnf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Np7hbJXm_sendMessage);
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


void Heavy_Echomatica::cMsg_4gVceFhH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_E1iq0FKu_sendMessage);
}

void Heavy_Echomatica::cSystem_E1iq0FKu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_hM7NV0lp_sendMessage);
}

void Heavy_Echomatica::cVar_nrLzDoXW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OEEv13bD_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_pTxfFtMo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_BpEO8tDk_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_CvoFMPqc, m);
}

void Heavy_Echomatica::cBinop_hM7NV0lp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_aV59czHT, m);
}

void Heavy_Echomatica::cMsg_OEEv13bD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_pTxfFtMo_sendMessage);
}

void Heavy_Echomatica::cBinop_BpEO8tDk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_lfghYPtM, m);
}

void Heavy_Echomatica::cMsg_s2Q130BF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_7cuGF58F_sendMessage);
}

void Heavy_Echomatica::cSystem_7cuGF58F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_DXDDyzU1_sendMessage);
}

void Heavy_Echomatica::cVar_qn3gSFbs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FnzrV2Fy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_SdmBVieO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_9RbZkkxt_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_7hgLit6M, m);
}

void Heavy_Echomatica::cBinop_DXDDyzU1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_XVSzm28c, m);
}

void Heavy_Echomatica::cMsg_FnzrV2Fy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_SdmBVieO_sendMessage);
}

void Heavy_Echomatica::cBinop_9RbZkkxt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_CKkRaHMa, m);
}

void Heavy_Echomatica::cMsg_IZvjJ2FS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_T3vI8o74_sendMessage);
}

void Heavy_Echomatica::cSystem_T3vI8o74_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_TKQ3vBBM_sendMessage);
}

void Heavy_Echomatica::cVar_6HvNBIFK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YXdTSpBL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_7vUBVOlR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_grYsI3yj_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_HkiZQucd, m);
}

void Heavy_Echomatica::cBinop_TKQ3vBBM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_vP24XB18, m);
}

void Heavy_Echomatica::cMsg_YXdTSpBL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_7vUBVOlR_sendMessage);
}

void Heavy_Echomatica::cBinop_grYsI3yj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ouZDTU7I, m);
}

void Heavy_Echomatica::cMsg_xJqLIICZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_2cW0F4Jy_sendMessage);
}

void Heavy_Echomatica::cSystem_2cW0F4Jy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_xVx78Xby_sendMessage);
}

void Heavy_Echomatica::cVar_2gIvaMpq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YraHAcjN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_N9u6cZJf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_tKLmqtFT_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_almC4a6A, m);
}

void Heavy_Echomatica::cBinop_xVx78Xby_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_E4Jr6u6T, m);
}

void Heavy_Echomatica::cMsg_YraHAcjN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_N9u6cZJf_sendMessage);
}

void Heavy_Echomatica::cBinop_tKLmqtFT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_KLBzpIun, m);
}

void Heavy_Echomatica::cCast_G0AJW734_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OUX4pDq4_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_MW6ScRE2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_yznTTH9N_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_fdLI6lgK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NPJ9V5cP_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_uuwU87WF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SuBIvFSp_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_hG8xKSOk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_U3EZ8JL5_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_hljU4oXt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EVxlYdrv_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_Vruoqjhb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_o0gnXq4X_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_skH3Nrld_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OG9PiaLo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_1YK7Jz79_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QCACpZBe_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_RnYK9hig_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DZd2ezUt_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_NIJEa8X8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BuLV0GzI_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_cTRBOhfG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wU1PTTnq_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_ZxHTU1or_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XGSCmC2Q_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_dMaZWunT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GlBCoqIV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_vUaM38iR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6Va4EsYA_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_natb31pa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cntidhwY_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_lv7qpdT6_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QIMwBxyC_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Yopy1OSW_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UcAwSe2G_sendMessage);
      break;
    }
    case 0x40400000: { // "3.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qnCsHSyl_sendMessage);
      break;
    }
    case 0x40800000: { // "4.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3h1mdEQA_sendMessage);
      break;
    }
    case 0x40A00000: { // "5.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_491Zxo3T_sendMessage);
      break;
    }
    case 0x40C00000: { // "6.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_J7hfoDKf_sendMessage);
      break;
    }
    case 0x40E00000: { // "7.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sJw9Mzv6_sendMessage);
      break;
    }
    case 0x41000000: { // "8.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uxVUBWUD_sendMessage);
      break;
    }
    case 0x41100000: { // "9.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Sag7520X_sendMessage);
      break;
    }
    case 0x41200000: { // "10.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XoZolFwd_sendMessage);
      break;
    }
    case 0x41300000: { // "11.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Ozqkx3Ab_sendMessage);
      break;
    }
    case 0x41400000: { // "12.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MUMdkuun_sendMessage);
      break;
    }
    case 0x41500000: { // "13.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AJTKMJzt_sendMessage);
      break;
    }
    case 0x41600000: { // "14.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xg6fZTQP_sendMessage);
      break;
    }
    case 0x41700000: { // "15.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UTPdCEEe_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_QIMwBxyC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NIJEa8X8_sendMessage);
}

void Heavy_Echomatica::cCast_Yopy1OSW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dMaZWunT_sendMessage);
}

void Heavy_Echomatica::cCast_UcAwSe2G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1YK7Jz79_sendMessage);
}

void Heavy_Echomatica::cCast_qnCsHSyl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RnYK9hig_sendMessage);
}

void Heavy_Echomatica::cCast_3h1mdEQA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZxHTU1or_sendMessage);
}

void Heavy_Echomatica::cCast_491Zxo3T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cTRBOhfG_sendMessage);
}

void Heavy_Echomatica::cCast_J7hfoDKf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hG8xKSOk_sendMessage);
}

void Heavy_Echomatica::cCast_sJw9Mzv6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vUaM38iR_sendMessage);
}

void Heavy_Echomatica::cCast_uxVUBWUD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_natb31pa_sendMessage);
}

void Heavy_Echomatica::cCast_Sag7520X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hljU4oXt_sendMessage);
}

void Heavy_Echomatica::cCast_XoZolFwd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MW6ScRE2_sendMessage);
}

void Heavy_Echomatica::cCast_Ozqkx3Ab_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fdLI6lgK_sendMessage);
}

void Heavy_Echomatica::cCast_MUMdkuun_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uuwU87WF_sendMessage);
}

void Heavy_Echomatica::cCast_AJTKMJzt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_G0AJW734_sendMessage);
}

void Heavy_Echomatica::cCast_xg6fZTQP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_skH3Nrld_sendMessage);
}

void Heavy_Echomatica::cCast_UTPdCEEe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Vruoqjhb_sendMessage);
}

void Heavy_Echomatica::cMsg_QCACpZBe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Qek6kPi2, 0, m, &cSlice_Qek6kPi2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RkGWSSnE, 0, m, &cSlice_RkGWSSnE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DRxUFHsq, 0, m, &cSlice_DRxUFHsq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UZymWpRJ, 0, m, &cSlice_UZymWpRJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qYVnTrAU, 0, m, &cSlice_qYVnTrAU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AR9sPcVJ, 0, m, &cSlice_AR9sPcVJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3xiTRyjT, 0, m, &cSlice_3xiTRyjT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DOj1gTfY, 0, m, &cSlice_DOj1gTfY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_C7AUpud9, 0, m, &cSlice_C7AUpud9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VuM5j4kZ, 0, m, &cSlice_VuM5j4kZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QInVMI8U, 0, m, &cSlice_QInVMI8U_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BCmCLmkH, 0, m, &cSlice_BCmCLmkH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_roqm1yHF, 0, m, &cSlice_roqm1yHF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SCAEZevg, 0, m, &cSlice_SCAEZevg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_p2XXxrr0, 0, m, &cSlice_p2XXxrr0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jKKbvbOf, 0, m, &cSlice_jKKbvbOf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rs82KTD1, 0, m, &cSlice_Rs82KTD1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rkHYjw32, 0, m, &cSlice_rkHYjw32_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ieT0OAFb, 0, m, &cSlice_ieT0OAFb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wvj4Lfkc, 0, m, &cSlice_Wvj4Lfkc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KG3FHXjr, 0, m, &cSlice_KG3FHXjr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_D0ydRXbY, 0, m, &cSlice_D0ydRXbY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hnZ1Sabf, 0, m, &cSlice_hnZ1Sabf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oBCjuteD, 0, m, &cSlice_oBCjuteD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eoFIiJwR, 0, m, &cSlice_eoFIiJwR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ePgxAcug, 0, m, &cSlice_ePgxAcug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QkiACR9P, 0, m, &cSlice_QkiACR9P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nGBojZ59, 0, m, &cSlice_nGBojZ59_sendMessage);
}

void Heavy_Echomatica::cMsg_GlBCoqIV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Qek6kPi2, 0, m, &cSlice_Qek6kPi2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RkGWSSnE, 0, m, &cSlice_RkGWSSnE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DRxUFHsq, 0, m, &cSlice_DRxUFHsq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UZymWpRJ, 0, m, &cSlice_UZymWpRJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qYVnTrAU, 0, m, &cSlice_qYVnTrAU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AR9sPcVJ, 0, m, &cSlice_AR9sPcVJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3xiTRyjT, 0, m, &cSlice_3xiTRyjT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DOj1gTfY, 0, m, &cSlice_DOj1gTfY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_C7AUpud9, 0, m, &cSlice_C7AUpud9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VuM5j4kZ, 0, m, &cSlice_VuM5j4kZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QInVMI8U, 0, m, &cSlice_QInVMI8U_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BCmCLmkH, 0, m, &cSlice_BCmCLmkH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_roqm1yHF, 0, m, &cSlice_roqm1yHF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SCAEZevg, 0, m, &cSlice_SCAEZevg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_p2XXxrr0, 0, m, &cSlice_p2XXxrr0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jKKbvbOf, 0, m, &cSlice_jKKbvbOf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rs82KTD1, 0, m, &cSlice_Rs82KTD1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rkHYjw32, 0, m, &cSlice_rkHYjw32_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ieT0OAFb, 0, m, &cSlice_ieT0OAFb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wvj4Lfkc, 0, m, &cSlice_Wvj4Lfkc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KG3FHXjr, 0, m, &cSlice_KG3FHXjr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_D0ydRXbY, 0, m, &cSlice_D0ydRXbY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hnZ1Sabf, 0, m, &cSlice_hnZ1Sabf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oBCjuteD, 0, m, &cSlice_oBCjuteD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eoFIiJwR, 0, m, &cSlice_eoFIiJwR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ePgxAcug, 0, m, &cSlice_ePgxAcug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QkiACR9P, 0, m, &cSlice_QkiACR9P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nGBojZ59, 0, m, &cSlice_nGBojZ59_sendMessage);
}

void Heavy_Echomatica::cMsg_BuLV0GzI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Qek6kPi2, 0, m, &cSlice_Qek6kPi2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RkGWSSnE, 0, m, &cSlice_RkGWSSnE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DRxUFHsq, 0, m, &cSlice_DRxUFHsq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UZymWpRJ, 0, m, &cSlice_UZymWpRJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qYVnTrAU, 0, m, &cSlice_qYVnTrAU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AR9sPcVJ, 0, m, &cSlice_AR9sPcVJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3xiTRyjT, 0, m, &cSlice_3xiTRyjT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DOj1gTfY, 0, m, &cSlice_DOj1gTfY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_C7AUpud9, 0, m, &cSlice_C7AUpud9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VuM5j4kZ, 0, m, &cSlice_VuM5j4kZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QInVMI8U, 0, m, &cSlice_QInVMI8U_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BCmCLmkH, 0, m, &cSlice_BCmCLmkH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_roqm1yHF, 0, m, &cSlice_roqm1yHF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SCAEZevg, 0, m, &cSlice_SCAEZevg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_p2XXxrr0, 0, m, &cSlice_p2XXxrr0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jKKbvbOf, 0, m, &cSlice_jKKbvbOf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rs82KTD1, 0, m, &cSlice_Rs82KTD1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rkHYjw32, 0, m, &cSlice_rkHYjw32_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ieT0OAFb, 0, m, &cSlice_ieT0OAFb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wvj4Lfkc, 0, m, &cSlice_Wvj4Lfkc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KG3FHXjr, 0, m, &cSlice_KG3FHXjr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_D0ydRXbY, 0, m, &cSlice_D0ydRXbY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hnZ1Sabf, 0, m, &cSlice_hnZ1Sabf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oBCjuteD, 0, m, &cSlice_oBCjuteD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eoFIiJwR, 0, m, &cSlice_eoFIiJwR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ePgxAcug, 0, m, &cSlice_ePgxAcug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QkiACR9P, 0, m, &cSlice_QkiACR9P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nGBojZ59, 0, m, &cSlice_nGBojZ59_sendMessage);
}

void Heavy_Echomatica::cMsg_DZd2ezUt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Qek6kPi2, 0, m, &cSlice_Qek6kPi2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RkGWSSnE, 0, m, &cSlice_RkGWSSnE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DRxUFHsq, 0, m, &cSlice_DRxUFHsq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UZymWpRJ, 0, m, &cSlice_UZymWpRJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qYVnTrAU, 0, m, &cSlice_qYVnTrAU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AR9sPcVJ, 0, m, &cSlice_AR9sPcVJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3xiTRyjT, 0, m, &cSlice_3xiTRyjT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DOj1gTfY, 0, m, &cSlice_DOj1gTfY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_C7AUpud9, 0, m, &cSlice_C7AUpud9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VuM5j4kZ, 0, m, &cSlice_VuM5j4kZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QInVMI8U, 0, m, &cSlice_QInVMI8U_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BCmCLmkH, 0, m, &cSlice_BCmCLmkH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_roqm1yHF, 0, m, &cSlice_roqm1yHF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SCAEZevg, 0, m, &cSlice_SCAEZevg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_p2XXxrr0, 0, m, &cSlice_p2XXxrr0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jKKbvbOf, 0, m, &cSlice_jKKbvbOf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rs82KTD1, 0, m, &cSlice_Rs82KTD1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rkHYjw32, 0, m, &cSlice_rkHYjw32_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ieT0OAFb, 0, m, &cSlice_ieT0OAFb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wvj4Lfkc, 0, m, &cSlice_Wvj4Lfkc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KG3FHXjr, 0, m, &cSlice_KG3FHXjr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_D0ydRXbY, 0, m, &cSlice_D0ydRXbY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hnZ1Sabf, 0, m, &cSlice_hnZ1Sabf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oBCjuteD, 0, m, &cSlice_oBCjuteD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eoFIiJwR, 0, m, &cSlice_eoFIiJwR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ePgxAcug, 0, m, &cSlice_ePgxAcug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QkiACR9P, 0, m, &cSlice_QkiACR9P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nGBojZ59, 0, m, &cSlice_nGBojZ59_sendMessage);
}

void Heavy_Echomatica::cMsg_XGSCmC2Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Qek6kPi2, 0, m, &cSlice_Qek6kPi2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RkGWSSnE, 0, m, &cSlice_RkGWSSnE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DRxUFHsq, 0, m, &cSlice_DRxUFHsq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UZymWpRJ, 0, m, &cSlice_UZymWpRJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qYVnTrAU, 0, m, &cSlice_qYVnTrAU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AR9sPcVJ, 0, m, &cSlice_AR9sPcVJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3xiTRyjT, 0, m, &cSlice_3xiTRyjT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DOj1gTfY, 0, m, &cSlice_DOj1gTfY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_C7AUpud9, 0, m, &cSlice_C7AUpud9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VuM5j4kZ, 0, m, &cSlice_VuM5j4kZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QInVMI8U, 0, m, &cSlice_QInVMI8U_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BCmCLmkH, 0, m, &cSlice_BCmCLmkH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_roqm1yHF, 0, m, &cSlice_roqm1yHF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SCAEZevg, 0, m, &cSlice_SCAEZevg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_p2XXxrr0, 0, m, &cSlice_p2XXxrr0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jKKbvbOf, 0, m, &cSlice_jKKbvbOf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rs82KTD1, 0, m, &cSlice_Rs82KTD1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rkHYjw32, 0, m, &cSlice_rkHYjw32_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ieT0OAFb, 0, m, &cSlice_ieT0OAFb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wvj4Lfkc, 0, m, &cSlice_Wvj4Lfkc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KG3FHXjr, 0, m, &cSlice_KG3FHXjr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_D0ydRXbY, 0, m, &cSlice_D0ydRXbY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hnZ1Sabf, 0, m, &cSlice_hnZ1Sabf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oBCjuteD, 0, m, &cSlice_oBCjuteD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eoFIiJwR, 0, m, &cSlice_eoFIiJwR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ePgxAcug, 0, m, &cSlice_ePgxAcug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QkiACR9P, 0, m, &cSlice_QkiACR9P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nGBojZ59, 0, m, &cSlice_nGBojZ59_sendMessage);
}

void Heavy_Echomatica::cMsg_wU1PTTnq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Qek6kPi2, 0, m, &cSlice_Qek6kPi2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RkGWSSnE, 0, m, &cSlice_RkGWSSnE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DRxUFHsq, 0, m, &cSlice_DRxUFHsq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UZymWpRJ, 0, m, &cSlice_UZymWpRJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qYVnTrAU, 0, m, &cSlice_qYVnTrAU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AR9sPcVJ, 0, m, &cSlice_AR9sPcVJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3xiTRyjT, 0, m, &cSlice_3xiTRyjT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DOj1gTfY, 0, m, &cSlice_DOj1gTfY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_C7AUpud9, 0, m, &cSlice_C7AUpud9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VuM5j4kZ, 0, m, &cSlice_VuM5j4kZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QInVMI8U, 0, m, &cSlice_QInVMI8U_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BCmCLmkH, 0, m, &cSlice_BCmCLmkH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_roqm1yHF, 0, m, &cSlice_roqm1yHF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SCAEZevg, 0, m, &cSlice_SCAEZevg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_p2XXxrr0, 0, m, &cSlice_p2XXxrr0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jKKbvbOf, 0, m, &cSlice_jKKbvbOf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rs82KTD1, 0, m, &cSlice_Rs82KTD1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rkHYjw32, 0, m, &cSlice_rkHYjw32_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ieT0OAFb, 0, m, &cSlice_ieT0OAFb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wvj4Lfkc, 0, m, &cSlice_Wvj4Lfkc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KG3FHXjr, 0, m, &cSlice_KG3FHXjr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_D0ydRXbY, 0, m, &cSlice_D0ydRXbY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hnZ1Sabf, 0, m, &cSlice_hnZ1Sabf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oBCjuteD, 0, m, &cSlice_oBCjuteD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eoFIiJwR, 0, m, &cSlice_eoFIiJwR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ePgxAcug, 0, m, &cSlice_ePgxAcug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QkiACR9P, 0, m, &cSlice_QkiACR9P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nGBojZ59, 0, m, &cSlice_nGBojZ59_sendMessage);
}

void Heavy_Echomatica::cMsg_U3EZ8JL5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Qek6kPi2, 0, m, &cSlice_Qek6kPi2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RkGWSSnE, 0, m, &cSlice_RkGWSSnE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DRxUFHsq, 0, m, &cSlice_DRxUFHsq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UZymWpRJ, 0, m, &cSlice_UZymWpRJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qYVnTrAU, 0, m, &cSlice_qYVnTrAU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AR9sPcVJ, 0, m, &cSlice_AR9sPcVJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3xiTRyjT, 0, m, &cSlice_3xiTRyjT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DOj1gTfY, 0, m, &cSlice_DOj1gTfY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_C7AUpud9, 0, m, &cSlice_C7AUpud9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VuM5j4kZ, 0, m, &cSlice_VuM5j4kZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QInVMI8U, 0, m, &cSlice_QInVMI8U_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BCmCLmkH, 0, m, &cSlice_BCmCLmkH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_roqm1yHF, 0, m, &cSlice_roqm1yHF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SCAEZevg, 0, m, &cSlice_SCAEZevg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_p2XXxrr0, 0, m, &cSlice_p2XXxrr0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jKKbvbOf, 0, m, &cSlice_jKKbvbOf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rs82KTD1, 0, m, &cSlice_Rs82KTD1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rkHYjw32, 0, m, &cSlice_rkHYjw32_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ieT0OAFb, 0, m, &cSlice_ieT0OAFb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wvj4Lfkc, 0, m, &cSlice_Wvj4Lfkc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KG3FHXjr, 0, m, &cSlice_KG3FHXjr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_D0ydRXbY, 0, m, &cSlice_D0ydRXbY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hnZ1Sabf, 0, m, &cSlice_hnZ1Sabf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oBCjuteD, 0, m, &cSlice_oBCjuteD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eoFIiJwR, 0, m, &cSlice_eoFIiJwR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ePgxAcug, 0, m, &cSlice_ePgxAcug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QkiACR9P, 0, m, &cSlice_QkiACR9P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nGBojZ59, 0, m, &cSlice_nGBojZ59_sendMessage);
}

void Heavy_Echomatica::cMsg_6Va4EsYA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Qek6kPi2, 0, m, &cSlice_Qek6kPi2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RkGWSSnE, 0, m, &cSlice_RkGWSSnE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DRxUFHsq, 0, m, &cSlice_DRxUFHsq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UZymWpRJ, 0, m, &cSlice_UZymWpRJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qYVnTrAU, 0, m, &cSlice_qYVnTrAU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AR9sPcVJ, 0, m, &cSlice_AR9sPcVJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3xiTRyjT, 0, m, &cSlice_3xiTRyjT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DOj1gTfY, 0, m, &cSlice_DOj1gTfY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_C7AUpud9, 0, m, &cSlice_C7AUpud9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VuM5j4kZ, 0, m, &cSlice_VuM5j4kZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QInVMI8U, 0, m, &cSlice_QInVMI8U_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BCmCLmkH, 0, m, &cSlice_BCmCLmkH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_roqm1yHF, 0, m, &cSlice_roqm1yHF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SCAEZevg, 0, m, &cSlice_SCAEZevg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_p2XXxrr0, 0, m, &cSlice_p2XXxrr0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jKKbvbOf, 0, m, &cSlice_jKKbvbOf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rs82KTD1, 0, m, &cSlice_Rs82KTD1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rkHYjw32, 0, m, &cSlice_rkHYjw32_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ieT0OAFb, 0, m, &cSlice_ieT0OAFb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wvj4Lfkc, 0, m, &cSlice_Wvj4Lfkc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KG3FHXjr, 0, m, &cSlice_KG3FHXjr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_D0ydRXbY, 0, m, &cSlice_D0ydRXbY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hnZ1Sabf, 0, m, &cSlice_hnZ1Sabf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oBCjuteD, 0, m, &cSlice_oBCjuteD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eoFIiJwR, 0, m, &cSlice_eoFIiJwR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ePgxAcug, 0, m, &cSlice_ePgxAcug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QkiACR9P, 0, m, &cSlice_QkiACR9P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nGBojZ59, 0, m, &cSlice_nGBojZ59_sendMessage);
}

void Heavy_Echomatica::cMsg_cntidhwY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Qek6kPi2, 0, m, &cSlice_Qek6kPi2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RkGWSSnE, 0, m, &cSlice_RkGWSSnE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DRxUFHsq, 0, m, &cSlice_DRxUFHsq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UZymWpRJ, 0, m, &cSlice_UZymWpRJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qYVnTrAU, 0, m, &cSlice_qYVnTrAU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AR9sPcVJ, 0, m, &cSlice_AR9sPcVJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3xiTRyjT, 0, m, &cSlice_3xiTRyjT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DOj1gTfY, 0, m, &cSlice_DOj1gTfY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_C7AUpud9, 0, m, &cSlice_C7AUpud9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VuM5j4kZ, 0, m, &cSlice_VuM5j4kZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QInVMI8U, 0, m, &cSlice_QInVMI8U_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BCmCLmkH, 0, m, &cSlice_BCmCLmkH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_roqm1yHF, 0, m, &cSlice_roqm1yHF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SCAEZevg, 0, m, &cSlice_SCAEZevg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_p2XXxrr0, 0, m, &cSlice_p2XXxrr0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jKKbvbOf, 0, m, &cSlice_jKKbvbOf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rs82KTD1, 0, m, &cSlice_Rs82KTD1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rkHYjw32, 0, m, &cSlice_rkHYjw32_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ieT0OAFb, 0, m, &cSlice_ieT0OAFb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wvj4Lfkc, 0, m, &cSlice_Wvj4Lfkc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KG3FHXjr, 0, m, &cSlice_KG3FHXjr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_D0ydRXbY, 0, m, &cSlice_D0ydRXbY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hnZ1Sabf, 0, m, &cSlice_hnZ1Sabf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oBCjuteD, 0, m, &cSlice_oBCjuteD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eoFIiJwR, 0, m, &cSlice_eoFIiJwR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ePgxAcug, 0, m, &cSlice_ePgxAcug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QkiACR9P, 0, m, &cSlice_QkiACR9P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nGBojZ59, 0, m, &cSlice_nGBojZ59_sendMessage);
}

void Heavy_Echomatica::cMsg_EVxlYdrv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Qek6kPi2, 0, m, &cSlice_Qek6kPi2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RkGWSSnE, 0, m, &cSlice_RkGWSSnE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DRxUFHsq, 0, m, &cSlice_DRxUFHsq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UZymWpRJ, 0, m, &cSlice_UZymWpRJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qYVnTrAU, 0, m, &cSlice_qYVnTrAU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AR9sPcVJ, 0, m, &cSlice_AR9sPcVJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3xiTRyjT, 0, m, &cSlice_3xiTRyjT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DOj1gTfY, 0, m, &cSlice_DOj1gTfY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_C7AUpud9, 0, m, &cSlice_C7AUpud9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VuM5j4kZ, 0, m, &cSlice_VuM5j4kZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QInVMI8U, 0, m, &cSlice_QInVMI8U_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BCmCLmkH, 0, m, &cSlice_BCmCLmkH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_roqm1yHF, 0, m, &cSlice_roqm1yHF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SCAEZevg, 0, m, &cSlice_SCAEZevg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_p2XXxrr0, 0, m, &cSlice_p2XXxrr0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jKKbvbOf, 0, m, &cSlice_jKKbvbOf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rs82KTD1, 0, m, &cSlice_Rs82KTD1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rkHYjw32, 0, m, &cSlice_rkHYjw32_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ieT0OAFb, 0, m, &cSlice_ieT0OAFb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wvj4Lfkc, 0, m, &cSlice_Wvj4Lfkc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KG3FHXjr, 0, m, &cSlice_KG3FHXjr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_D0ydRXbY, 0, m, &cSlice_D0ydRXbY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hnZ1Sabf, 0, m, &cSlice_hnZ1Sabf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oBCjuteD, 0, m, &cSlice_oBCjuteD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eoFIiJwR, 0, m, &cSlice_eoFIiJwR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ePgxAcug, 0, m, &cSlice_ePgxAcug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QkiACR9P, 0, m, &cSlice_QkiACR9P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nGBojZ59, 0, m, &cSlice_nGBojZ59_sendMessage);
}

void Heavy_Echomatica::cMsg_yznTTH9N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Qek6kPi2, 0, m, &cSlice_Qek6kPi2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RkGWSSnE, 0, m, &cSlice_RkGWSSnE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DRxUFHsq, 0, m, &cSlice_DRxUFHsq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UZymWpRJ, 0, m, &cSlice_UZymWpRJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qYVnTrAU, 0, m, &cSlice_qYVnTrAU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AR9sPcVJ, 0, m, &cSlice_AR9sPcVJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3xiTRyjT, 0, m, &cSlice_3xiTRyjT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DOj1gTfY, 0, m, &cSlice_DOj1gTfY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_C7AUpud9, 0, m, &cSlice_C7AUpud9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VuM5j4kZ, 0, m, &cSlice_VuM5j4kZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QInVMI8U, 0, m, &cSlice_QInVMI8U_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BCmCLmkH, 0, m, &cSlice_BCmCLmkH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_roqm1yHF, 0, m, &cSlice_roqm1yHF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SCAEZevg, 0, m, &cSlice_SCAEZevg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_p2XXxrr0, 0, m, &cSlice_p2XXxrr0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jKKbvbOf, 0, m, &cSlice_jKKbvbOf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rs82KTD1, 0, m, &cSlice_Rs82KTD1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rkHYjw32, 0, m, &cSlice_rkHYjw32_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ieT0OAFb, 0, m, &cSlice_ieT0OAFb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wvj4Lfkc, 0, m, &cSlice_Wvj4Lfkc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KG3FHXjr, 0, m, &cSlice_KG3FHXjr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_D0ydRXbY, 0, m, &cSlice_D0ydRXbY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hnZ1Sabf, 0, m, &cSlice_hnZ1Sabf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oBCjuteD, 0, m, &cSlice_oBCjuteD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eoFIiJwR, 0, m, &cSlice_eoFIiJwR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ePgxAcug, 0, m, &cSlice_ePgxAcug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QkiACR9P, 0, m, &cSlice_QkiACR9P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nGBojZ59, 0, m, &cSlice_nGBojZ59_sendMessage);
}

void Heavy_Echomatica::cMsg_NPJ9V5cP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Qek6kPi2, 0, m, &cSlice_Qek6kPi2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RkGWSSnE, 0, m, &cSlice_RkGWSSnE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DRxUFHsq, 0, m, &cSlice_DRxUFHsq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UZymWpRJ, 0, m, &cSlice_UZymWpRJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qYVnTrAU, 0, m, &cSlice_qYVnTrAU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AR9sPcVJ, 0, m, &cSlice_AR9sPcVJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3xiTRyjT, 0, m, &cSlice_3xiTRyjT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DOj1gTfY, 0, m, &cSlice_DOj1gTfY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_C7AUpud9, 0, m, &cSlice_C7AUpud9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VuM5j4kZ, 0, m, &cSlice_VuM5j4kZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QInVMI8U, 0, m, &cSlice_QInVMI8U_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BCmCLmkH, 0, m, &cSlice_BCmCLmkH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_roqm1yHF, 0, m, &cSlice_roqm1yHF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SCAEZevg, 0, m, &cSlice_SCAEZevg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_p2XXxrr0, 0, m, &cSlice_p2XXxrr0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jKKbvbOf, 0, m, &cSlice_jKKbvbOf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rs82KTD1, 0, m, &cSlice_Rs82KTD1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rkHYjw32, 0, m, &cSlice_rkHYjw32_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ieT0OAFb, 0, m, &cSlice_ieT0OAFb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wvj4Lfkc, 0, m, &cSlice_Wvj4Lfkc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KG3FHXjr, 0, m, &cSlice_KG3FHXjr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_D0ydRXbY, 0, m, &cSlice_D0ydRXbY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hnZ1Sabf, 0, m, &cSlice_hnZ1Sabf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oBCjuteD, 0, m, &cSlice_oBCjuteD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eoFIiJwR, 0, m, &cSlice_eoFIiJwR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ePgxAcug, 0, m, &cSlice_ePgxAcug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QkiACR9P, 0, m, &cSlice_QkiACR9P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nGBojZ59, 0, m, &cSlice_nGBojZ59_sendMessage);
}

void Heavy_Echomatica::cMsg_SuBIvFSp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Qek6kPi2, 0, m, &cSlice_Qek6kPi2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RkGWSSnE, 0, m, &cSlice_RkGWSSnE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DRxUFHsq, 0, m, &cSlice_DRxUFHsq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UZymWpRJ, 0, m, &cSlice_UZymWpRJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qYVnTrAU, 0, m, &cSlice_qYVnTrAU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AR9sPcVJ, 0, m, &cSlice_AR9sPcVJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3xiTRyjT, 0, m, &cSlice_3xiTRyjT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DOj1gTfY, 0, m, &cSlice_DOj1gTfY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_C7AUpud9, 0, m, &cSlice_C7AUpud9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VuM5j4kZ, 0, m, &cSlice_VuM5j4kZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QInVMI8U, 0, m, &cSlice_QInVMI8U_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BCmCLmkH, 0, m, &cSlice_BCmCLmkH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_roqm1yHF, 0, m, &cSlice_roqm1yHF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SCAEZevg, 0, m, &cSlice_SCAEZevg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_p2XXxrr0, 0, m, &cSlice_p2XXxrr0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jKKbvbOf, 0, m, &cSlice_jKKbvbOf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rs82KTD1, 0, m, &cSlice_Rs82KTD1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rkHYjw32, 0, m, &cSlice_rkHYjw32_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ieT0OAFb, 0, m, &cSlice_ieT0OAFb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wvj4Lfkc, 0, m, &cSlice_Wvj4Lfkc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KG3FHXjr, 0, m, &cSlice_KG3FHXjr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_D0ydRXbY, 0, m, &cSlice_D0ydRXbY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hnZ1Sabf, 0, m, &cSlice_hnZ1Sabf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oBCjuteD, 0, m, &cSlice_oBCjuteD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eoFIiJwR, 0, m, &cSlice_eoFIiJwR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ePgxAcug, 0, m, &cSlice_ePgxAcug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QkiACR9P, 0, m, &cSlice_QkiACR9P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nGBojZ59, 0, m, &cSlice_nGBojZ59_sendMessage);
}

void Heavy_Echomatica::cMsg_OUX4pDq4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Qek6kPi2, 0, m, &cSlice_Qek6kPi2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RkGWSSnE, 0, m, &cSlice_RkGWSSnE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DRxUFHsq, 0, m, &cSlice_DRxUFHsq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UZymWpRJ, 0, m, &cSlice_UZymWpRJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qYVnTrAU, 0, m, &cSlice_qYVnTrAU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AR9sPcVJ, 0, m, &cSlice_AR9sPcVJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3xiTRyjT, 0, m, &cSlice_3xiTRyjT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DOj1gTfY, 0, m, &cSlice_DOj1gTfY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_C7AUpud9, 0, m, &cSlice_C7AUpud9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VuM5j4kZ, 0, m, &cSlice_VuM5j4kZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QInVMI8U, 0, m, &cSlice_QInVMI8U_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BCmCLmkH, 0, m, &cSlice_BCmCLmkH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_roqm1yHF, 0, m, &cSlice_roqm1yHF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SCAEZevg, 0, m, &cSlice_SCAEZevg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_p2XXxrr0, 0, m, &cSlice_p2XXxrr0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jKKbvbOf, 0, m, &cSlice_jKKbvbOf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rs82KTD1, 0, m, &cSlice_Rs82KTD1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rkHYjw32, 0, m, &cSlice_rkHYjw32_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ieT0OAFb, 0, m, &cSlice_ieT0OAFb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wvj4Lfkc, 0, m, &cSlice_Wvj4Lfkc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KG3FHXjr, 0, m, &cSlice_KG3FHXjr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_D0ydRXbY, 0, m, &cSlice_D0ydRXbY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hnZ1Sabf, 0, m, &cSlice_hnZ1Sabf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oBCjuteD, 0, m, &cSlice_oBCjuteD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eoFIiJwR, 0, m, &cSlice_eoFIiJwR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ePgxAcug, 0, m, &cSlice_ePgxAcug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QkiACR9P, 0, m, &cSlice_QkiACR9P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nGBojZ59, 0, m, &cSlice_nGBojZ59_sendMessage);
}

void Heavy_Echomatica::cMsg_OG9PiaLo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Qek6kPi2, 0, m, &cSlice_Qek6kPi2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RkGWSSnE, 0, m, &cSlice_RkGWSSnE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DRxUFHsq, 0, m, &cSlice_DRxUFHsq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UZymWpRJ, 0, m, &cSlice_UZymWpRJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qYVnTrAU, 0, m, &cSlice_qYVnTrAU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AR9sPcVJ, 0, m, &cSlice_AR9sPcVJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3xiTRyjT, 0, m, &cSlice_3xiTRyjT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DOj1gTfY, 0, m, &cSlice_DOj1gTfY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_C7AUpud9, 0, m, &cSlice_C7AUpud9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VuM5j4kZ, 0, m, &cSlice_VuM5j4kZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QInVMI8U, 0, m, &cSlice_QInVMI8U_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BCmCLmkH, 0, m, &cSlice_BCmCLmkH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_roqm1yHF, 0, m, &cSlice_roqm1yHF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SCAEZevg, 0, m, &cSlice_SCAEZevg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_p2XXxrr0, 0, m, &cSlice_p2XXxrr0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jKKbvbOf, 0, m, &cSlice_jKKbvbOf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rs82KTD1, 0, m, &cSlice_Rs82KTD1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rkHYjw32, 0, m, &cSlice_rkHYjw32_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ieT0OAFb, 0, m, &cSlice_ieT0OAFb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wvj4Lfkc, 0, m, &cSlice_Wvj4Lfkc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KG3FHXjr, 0, m, &cSlice_KG3FHXjr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_D0ydRXbY, 0, m, &cSlice_D0ydRXbY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hnZ1Sabf, 0, m, &cSlice_hnZ1Sabf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oBCjuteD, 0, m, &cSlice_oBCjuteD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eoFIiJwR, 0, m, &cSlice_eoFIiJwR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ePgxAcug, 0, m, &cSlice_ePgxAcug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QkiACR9P, 0, m, &cSlice_QkiACR9P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nGBojZ59, 0, m, &cSlice_nGBojZ59_sendMessage);
}

void Heavy_Echomatica::cMsg_o0gnXq4X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Qek6kPi2, 0, m, &cSlice_Qek6kPi2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RkGWSSnE, 0, m, &cSlice_RkGWSSnE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DRxUFHsq, 0, m, &cSlice_DRxUFHsq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UZymWpRJ, 0, m, &cSlice_UZymWpRJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qYVnTrAU, 0, m, &cSlice_qYVnTrAU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AR9sPcVJ, 0, m, &cSlice_AR9sPcVJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3xiTRyjT, 0, m, &cSlice_3xiTRyjT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DOj1gTfY, 0, m, &cSlice_DOj1gTfY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_C7AUpud9, 0, m, &cSlice_C7AUpud9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VuM5j4kZ, 0, m, &cSlice_VuM5j4kZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QInVMI8U, 0, m, &cSlice_QInVMI8U_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BCmCLmkH, 0, m, &cSlice_BCmCLmkH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_roqm1yHF, 0, m, &cSlice_roqm1yHF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SCAEZevg, 0, m, &cSlice_SCAEZevg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_p2XXxrr0, 0, m, &cSlice_p2XXxrr0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jKKbvbOf, 0, m, &cSlice_jKKbvbOf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rs82KTD1, 0, m, &cSlice_Rs82KTD1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rkHYjw32, 0, m, &cSlice_rkHYjw32_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ieT0OAFb, 0, m, &cSlice_ieT0OAFb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wvj4Lfkc, 0, m, &cSlice_Wvj4Lfkc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KG3FHXjr, 0, m, &cSlice_KG3FHXjr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_D0ydRXbY, 0, m, &cSlice_D0ydRXbY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hnZ1Sabf, 0, m, &cSlice_hnZ1Sabf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oBCjuteD, 0, m, &cSlice_oBCjuteD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eoFIiJwR, 0, m, &cSlice_eoFIiJwR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ePgxAcug, 0, m, &cSlice_ePgxAcug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QkiACR9P, 0, m, &cSlice_QkiACR9P_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nGBojZ59, 0, m, &cSlice_nGBojZ59_sendMessage);
}

void Heavy_Echomatica::cMsg_RQ6NUtJM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Is2v8UUb_sendMessage);
}

void Heavy_Echomatica::cSystem_Is2v8UUb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_6bwYznj9_sendMessage);
}

void Heavy_Echomatica::cVar_kZb4VmIh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zZSxXX5c_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_vA9olrMK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_TEB9dLjk_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_EZO94C1R, m);
}

void Heavy_Echomatica::cBinop_6bwYznj9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_AF2CQNhx, m);
}

void Heavy_Echomatica::cMsg_zZSxXX5c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_vA9olrMK_sendMessage);
}

void Heavy_Echomatica::cBinop_TEB9dLjk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_2S5Dv1I5, m);
}

void Heavy_Echomatica::cMsg_5nZFw3eC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_g8ewojR4_sendMessage);
}

void Heavy_Echomatica::cSystem_g8ewojR4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_giSmh8zB_sendMessage);
}

void Heavy_Echomatica::cVar_7TZkxf3E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nMU3Zs0Q_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_TPWn8F3g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_eVscvFW6_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_XEXmq5zw, m);
}

void Heavy_Echomatica::cBinop_giSmh8zB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_L63bNF6x, m);
}

void Heavy_Echomatica::cMsg_nMU3Zs0Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_TPWn8F3g_sendMessage);
}

void Heavy_Echomatica::cBinop_eVscvFW6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_JmiU9pPh, m);
}

void Heavy_Echomatica::cVar_HgDp6R0l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_zuAWCmaa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_1PM0gW2A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_nrFh5S5J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_I7a2TvYK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_npXYJIYY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_Qd1KQhKt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_fjesncdK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_VyHJQwDH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_LmdglMEu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_JbgUbf6m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_Bjcdacc3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cPack_wyWXTql7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_B9ftAqW9, 0, m, NULL);
}

void Heavy_Echomatica::cPack_IxQULMqR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_k4K27cEv, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_ks4QVgSk, 0, m, &cVar_ks4QVgSk_sendMessage);
}

void Heavy_Echomatica::cPack_RQwGIdgn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_l662I3fb, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_JB2eW99J, 0, m, &cVar_JB2eW99J_sendMessage);
}

void Heavy_Echomatica::cPack_E26TM1je_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_PZbeGCYg, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_4i7FLY3y, 0, m, &cVar_4i7FLY3y_sendMessage);
}

void Heavy_Echomatica::cPack_S5O9Cbbv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_9MPg6KDI, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_zr6UWTic, 0, m, &cVar_zr6UWTic_sendMessage);
}

void Heavy_Echomatica::cPack_REANWtMk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_dfuFSTjO, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_frMbYm8g, 0, m, &cVar_frMbYm8g_sendMessage);
}

void Heavy_Echomatica::cPack_GK8JEe6B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_HLmPYKYh, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_xuKzp4sX, 0, m, &cVar_xuKzp4sX_sendMessage);
}

void Heavy_Echomatica::cSlice_Qek6kPi2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Tzdr3NIb_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_RkGWSSnE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_5xl8iCTZ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_DRxUFHsq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_D037ItZX_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_UZymWpRJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_DlZ2CLmU_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_qYVnTrAU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_jPO3tvMg_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_AR9sPcVJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ro7sTJR2_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_3xiTRyjT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_rIpPM2VQ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_DOj1gTfY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_FquZ6npn_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_C7AUpud9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_oza6r9SG_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_VuM5j4kZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_uY2qlAMx_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_QInVMI8U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_qLLC35ou_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_BCmCLmkH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_uVLSqk6x_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_roqm1yHF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ZMLgf22q_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_SCAEZevg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_QcdGfkRB_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_p2XXxrr0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_gmTD21v6_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_jKKbvbOf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_9deYyYYF_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_Rs82KTD1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_2ZCdUNvi_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_rkHYjw32_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_5uV6RM55_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_ieT0OAFb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_tEgmWlob_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_Wvj4Lfkc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_93MecMAS_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_KG3FHXjr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_8FudXKxN_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_D0ydRXbY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_vhqkvhw7_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_hnZ1Sabf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_HqIk9xJm_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_oBCjuteD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Q4u21fsk_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_eoFIiJwR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_rhgFRJgZ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_ePgxAcug_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_VetFbh6L_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_QkiACR9P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_S0jxCycC_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_nGBojZ59_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_j2dzGwFY_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_ks4QVgSk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_JB2eW99J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_xuKzp4sX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_4i7FLY3y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_zr6UWTic_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_frMbYm8g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cSlice_7587Nfi8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_zbO7yScU, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_UmM9t7rB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_hMA8xOnF, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_YGCx3TOi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_NnnTyyWG, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_kn6J7OWc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_3RdkqynE, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSwitchcase_6p7wyINF_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yQt88uQS_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oGucztXD_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_yQt88uQS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kdzQgxs6_sendMessage);
}

void Heavy_Echomatica::cPack_8qH4VSaw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_AdrTeNVb, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_9mIYUtH5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_W2vQVWXz_sendMessage);
}

void Heavy_Echomatica::cSystem_W2vQVWXz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_7Ryw6hW2_sendMessage);
}

void Heavy_Echomatica::cDelay_0f7qYTdK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_0f7qYTdK, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_wctm16oU, 0, m, &cDelay_wctm16oU_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_0f7qYTdK, 0, m, &cDelay_0f7qYTdK_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_kFsZTNdM, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_wctm16oU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_wctm16oU, m);
  cMsg_KNI1MJVL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_CpfRTs92_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_QrrME3ne_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_WK06pxrN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_yJNjQf09_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_o5U4ISfn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2oumHJvf_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_0f7qYTdK, 2, m, &cDelay_0f7qYTdK_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QcCbsAip_sendMessage);
}

void Heavy_Echomatica::cMsg_yJNjQf09_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_o5U4ISfn, 0, m, &hTable_o5U4ISfn_sendMessage);
}

void Heavy_Echomatica::cBinop_7Ryw6hW2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 40.0f, 0, m, &cBinop_WK06pxrN_sendMessage);
}

void Heavy_Echomatica::cMsg_KNI1MJVL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_o5U4ISfn, 0, m, &hTable_o5U4ISfn_sendMessage);
}

void Heavy_Echomatica::cCast_QcCbsAip_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_0f7qYTdK, 0, m, &cDelay_0f7qYTdK_sendMessage);
}

void Heavy_Echomatica::cMsg_2oumHJvf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_wctm16oU, 2, m, &cDelay_wctm16oU_sendMessage);
}

void Heavy_Echomatica::cMsg_QrrME3ne_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_kFsZTNdM, 1, m, NULL);
}

void Heavy_Echomatica::cVar_GWk9trRD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_sp1kCLay, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_dXFRcw0U, m);
}

void Heavy_Echomatica::cMsg_xE0PnlUV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_vF6h2eBw_sendMessage);
}

void Heavy_Echomatica::cSystem_vF6h2eBw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_zNcMI1Z4_sendMessage);
}

void Heavy_Echomatica::cVar_w8hFHDY2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5KQvALiQ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_klDfqr2s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_UJMox7fV_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_TaYsPA7L, m);
}

void Heavy_Echomatica::cBinop_zNcMI1Z4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Abhedhb3, m);
}

void Heavy_Echomatica::cMsg_5KQvALiQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_klDfqr2s_sendMessage);
}

void Heavy_Echomatica::cBinop_UJMox7fV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_8v2Zbkzd, m);
}

void Heavy_Echomatica::cMsg_ePeIJ6jb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_kxoOHdMB_sendMessage);
}

void Heavy_Echomatica::cSystem_kxoOHdMB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_7cQ89eRt_sendMessage);
}

void Heavy_Echomatica::cVar_dw5wP3Tq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fzWRQDUY_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_67cTXLli_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_MRsEtxTa_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_JF8XEfji, m);
}

void Heavy_Echomatica::cBinop_7cQ89eRt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_wvr5LSp5, m);
}

void Heavy_Echomatica::cMsg_fzWRQDUY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_67cTXLli_sendMessage);
}

void Heavy_Echomatica::cBinop_MRsEtxTa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_axFWNTmj, m);
}

void Heavy_Echomatica::cMsg_c0EBG9G1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_V1iBsJQn_sendMessage);
}

void Heavy_Echomatica::cSystem_V1iBsJQn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_bDADoY4q_sendMessage);
}

void Heavy_Echomatica::cDelay_uQXqQlSh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_uQXqQlSh, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Pu3lMV4F, 0, m, &cDelay_Pu3lMV4F_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_uQXqQlSh, 0, m, &cDelay_uQXqQlSh_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_HLzmrw3I, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_Pu3lMV4F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Pu3lMV4F, m);
  cMsg_ZG4lgG13_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_IDDfs27Y_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_zkPRwiss_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_uynb1DoJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_UB7JNMpN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_O074W810_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_osdEbCfZ_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_uQXqQlSh, 2, m, &cDelay_uQXqQlSh_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_r5hwMdBg_sendMessage);
}

void Heavy_Echomatica::cMsg_UB7JNMpN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_O074W810, 0, m, &hTable_O074W810_sendMessage);
}

void Heavy_Echomatica::cBinop_bDADoY4q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 30.0f, 0, m, &cBinop_uynb1DoJ_sendMessage);
}

void Heavy_Echomatica::cMsg_ZG4lgG13_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_O074W810, 0, m, &hTable_O074W810_sendMessage);
}

void Heavy_Echomatica::cCast_r5hwMdBg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_uQXqQlSh, 0, m, &cDelay_uQXqQlSh_sendMessage);
}

void Heavy_Echomatica::cMsg_osdEbCfZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_Pu3lMV4F, 2, m, &cDelay_Pu3lMV4F_sendMessage);
}

void Heavy_Echomatica::cMsg_zkPRwiss_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_HLzmrw3I, 1, m, NULL);
}

void Heavy_Echomatica::cBinop_jlRLkjoZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_TH1KMghz_sendMessage);
}

void Heavy_Echomatica::cBinop_TH1KMghz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_u3DIytg9_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_6QhWkvOp_sendMessage);
}

void Heavy_Echomatica::cVar_RsAVUZX9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_cTEKAwjq_sendMessage);
}

void Heavy_Echomatica::cMsg_jwkRRURk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_UEOfvtIY_sendMessage);
}

void Heavy_Echomatica::cSystem_UEOfvtIY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uAwTIOFA, HV_BINOP_DIVIDE, 1, m, &cBinop_uAwTIOFA_sendMessage);
}

void Heavy_Echomatica::cBinop_u3DIytg9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_ZsIRj9k1_sendMessage);
}

void Heavy_Echomatica::cBinop_ZsIRj9k1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Kmh8CRBe, m);
}

void Heavy_Echomatica::cMsg_6k7xynt0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_VAAj07KT_sendMessage);
}

void Heavy_Echomatica::cBinop_VAAj07KT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_jlRLkjoZ_sendMessage);
}

void Heavy_Echomatica::cBinop_6QhWkvOp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_IAPllr7m, m);
}

void Heavy_Echomatica::cBinop_cTEKAwjq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_ZUxUJHze_sendMessage);
}

void Heavy_Echomatica::cBinop_ZUxUJHze_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uAwTIOFA, HV_BINOP_DIVIDE, 0, m, &cBinop_uAwTIOFA_sendMessage);
}

void Heavy_Echomatica::cBinop_uAwTIOFA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6k7xynt0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_8gumSyG7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_FIUVCmWL_sendMessage);
}

void Heavy_Echomatica::cBinop_FIUVCmWL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_V4w13239_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_5Tu1BIAg_sendMessage);
}

void Heavy_Echomatica::cVar_gCGleG8n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_Vi05fao1_sendMessage);
}

void Heavy_Echomatica::cMsg_5bEwzK1V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_9lQIbaZd_sendMessage);
}

void Heavy_Echomatica::cSystem_9lQIbaZd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3ccydmyf, HV_BINOP_DIVIDE, 1, m, &cBinop_3ccydmyf_sendMessage);
}

void Heavy_Echomatica::cBinop_V4w13239_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_nmFitmbq_sendMessage);
}

void Heavy_Echomatica::cBinop_nmFitmbq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_le0f17wo, m);
}

void Heavy_Echomatica::cMsg_yrGT2HeJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_sNvV72QQ_sendMessage);
}

void Heavy_Echomatica::cBinop_sNvV72QQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_8gumSyG7_sendMessage);
}

void Heavy_Echomatica::cBinop_5Tu1BIAg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Eh2LIyA0, m);
}

void Heavy_Echomatica::cBinop_Vi05fao1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_XfUakN0w_sendMessage);
}

void Heavy_Echomatica::cBinop_XfUakN0w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3ccydmyf, HV_BINOP_DIVIDE, 0, m, &cBinop_3ccydmyf_sendMessage);
}

void Heavy_Echomatica::cBinop_3ccydmyf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_yrGT2HeJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_Kzj6rLJ0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_gwZbifTO, 0, m, &cPack_gwZbifTO_sendMessage);
}

void Heavy_Echomatica::cVar_cwALxjNU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_fy8kftKy, 0, m, &cPack_fy8kftKy_sendMessage);
}

void Heavy_Echomatica::cVar_79aZpdjD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_JCz3ps89_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cPack_fy8kftKy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_zRHdJkfY, 0, m, NULL);
}

void Heavy_Echomatica::cPack_gwZbifTO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_pyaWV10n, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_JCz3ps89_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IWKdeJmF_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Fx4lEKlW_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eVTuvIFa_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_IWKdeJmF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5Ff8sad3_sendMessage(_c, 0, m);
  cMsg_Vq3pEjzk_sendMessage(_c, 0, m);
  cMsg_tBZlBfkd_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_Fx4lEKlW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5Ff8sad3_sendMessage(_c, 0, m);
  cMsg_Vq3pEjzk_sendMessage(_c, 0, m);
  cMsg_ZTvxjODf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_eVTuvIFa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_UKb6yQUO_sendMessage(_c, 0, m);
  cMsg_v44MhdmC_sendMessage(_c, 0, m);
  cMsg_ZTvxjODf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_go5V3ih2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_XF7IW72r_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_JQUqKeE5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_U4DAX0yv, HV_BINOP_DIVIDE, 0, m, &cBinop_U4DAX0yv_sendMessage);
}

void Heavy_Echomatica::cVar_lK7MbB4b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9iV8K2bW, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_9iV8K2bW_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_QWWbMViU, 0, m, &cIf_QWWbMViU_sendMessage);
}

void Heavy_Echomatica::sEnv_Z8vtW9Cd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_vM3qKjrJ_sendMessage);
}

void Heavy_Echomatica::cBinop_PdhjA4El_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_kBGPj3BL_sendMessage);
}

void Heavy_Echomatica::cBinop_kBGPj3BL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_N6SaVtlk_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0kMzspfT_sendMessage);
}

void Heavy_Echomatica::cCast_N6SaVtlk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VXOnfw0M, HV_BINOP_POW, 1, m, &cBinop_VXOnfw0M_sendMessage);
}

void Heavy_Echomatica::cCast_0kMzspfT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dELZXHsJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_dELZXHsJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_VXOnfw0M, HV_BINOP_POW, 0, m, &cBinop_VXOnfw0M_sendMessage);
}

void Heavy_Echomatica::cBinop_VXOnfw0M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_ThkQf6bg_sendMessage);
}

void Heavy_Echomatica::cIf_QWWbMViU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_PdhjA4El, HV_BINOP_SUBTRACT, 0, m, &cBinop_PdhjA4El_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_Tx0eYSVs, HV_BINOP_SUBTRACT, 0, m, &cBinop_Tx0eYSVs_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_9iV8K2bW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_QWWbMViU, 1, m, &cIf_QWWbMViU_sendMessage);
}

void Heavy_Echomatica::cVar_Hw4Of70A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Kkw0uhpc_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sp1jymwu_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wdlugbKv_sendMessage);
}

void Heavy_Echomatica::cVar_lflDqr2H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_KofcXw23_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UEIOYp8H_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_QCxCXAme_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_P0VKvwWs, 0, m, &cSlice_P0VKvwWs_sendMessage);
      break;
    }
    default: {
      cSwitchcase_3EVlYcGD_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_P0VKvwWs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_A5I529MN_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_A5I529MN_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_ptd3JmEY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_A5I529MN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_A5I529MN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IDklrUw3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_3EVlYcGD_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_83UrQcsJ, 0, m, &cSlice_83UrQcsJ_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_83UrQcsJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_9MmjiqaC_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_9MmjiqaC_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_8xw8FwYP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_9MmjiqaC_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_9MmjiqaC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_hwooaTKh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_KofcXw23_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_U4DAX0yv, HV_BINOP_DIVIDE, 1, m, &cBinop_U4DAX0yv_sendMessage);
}

void Heavy_Echomatica::cCast_UEIOYp8H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JQUqKeE5, 0, m, &cVar_JQUqKeE5_sendMessage);
}

void Heavy_Echomatica::cBinop_U4DAX0yv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8LT8ATOp, HV_BINOP_ADD, 0, m, &cBinop_8LT8ATOp_sendMessage);
}

void Heavy_Echomatica::cBinop_Tx0eYSVs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JQUqKeE5, 0, m, &cVar_JQUqKeE5_sendMessage);
}

void Heavy_Echomatica::cCast_Kkw0uhpc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_S3QAIDxP_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XTGFuVvi_sendMessage);
}

void Heavy_Echomatica::cCast_wdlugbKv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_lK7MbB4b, 0, m, &cVar_lK7MbB4b_sendMessage);
}

void Heavy_Echomatica::cCast_sp1jymwu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9iV8K2bW, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_9iV8K2bW_sendMessage);
}

void Heavy_Echomatica::cBinop_8LT8ATOp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PdhjA4El, HV_BINOP_SUBTRACT, 0, m, &cBinop_PdhjA4El_sendMessage);
}

void Heavy_Echomatica::cCast_MU1m1vfI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Hw4Of70A, 0, m, &cVar_Hw4Of70A_sendMessage);
}

void Heavy_Echomatica::cCast_XE1Wr5eO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_lflDqr2H, 0, m, &cVar_lflDqr2H_sendMessage);
}

void Heavy_Echomatica::cCast_UOwMcO9w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PdhjA4El, HV_BINOP_SUBTRACT, 1, m, &cBinop_PdhjA4El_sendMessage);
}

void Heavy_Echomatica::cCast_Kwl8vbGM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_lK7MbB4b, 0, m, &cVar_lK7MbB4b_sendMessage);
}

void Heavy_Echomatica::cBinop_ThkQf6bg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YdAfVzSc_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_S3QAIDxP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8LT8ATOp, HV_BINOP_ADD, 1, m, &cBinop_8LT8ATOp_sendMessage);
}

void Heavy_Echomatica::cCast_XTGFuVvi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Tx0eYSVs, HV_BINOP_SUBTRACT, 1, m, &cBinop_Tx0eYSVs_sendMessage);
}

void Heavy_Echomatica::cBinop_vM3qKjrJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_UOwMcO9w_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Kwl8vbGM_sendMessage);
}

void Heavy_Echomatica::cMsg_YdAfVzSc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_6W3ljcNl, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_5Ff8sad3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_cwALxjNU, 0, m, &cVar_cwALxjNU_sendMessage);
}

void Heavy_Echomatica::cMsg_Vq3pEjzk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_Kzj6rLJ0, 0, m, &cVar_Kzj6rLJ0_sendMessage);
}

void Heavy_Echomatica::cMsg_UKb6yQUO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_cwALxjNU, 0, m, &cVar_cwALxjNU_sendMessage);
}

void Heavy_Echomatica::cMsg_v44MhdmC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_Kzj6rLJ0, 0, m, &cVar_Kzj6rLJ0_sendMessage);
}

void Heavy_Echomatica::cSend_XF7IW72r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_UjJx1zbh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_tBZlBfkd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_go5V3ih2, 0, m, &cVar_go5V3ih2_sendMessage);
}

void Heavy_Echomatica::cMsg_ZTvxjODf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_go5V3ih2, 0, m, &cVar_go5V3ih2_sendMessage);
}

void Heavy_Echomatica::cVar_bnWtiS3X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xVlmL0jF, HV_BINOP_MULTIPLY, 0, m, &cBinop_xVlmL0jF_sendMessage);
}

void Heavy_Echomatica::cMsg_3RQbdoIJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_DcJbVzz7_sendMessage);
}

void Heavy_Echomatica::cSystem_DcJbVzz7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QRUq4rkL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_xVlmL0jF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_zXb4e155_sendMessage);
}

void Heavy_Echomatica::cBinop_5XdfFdXr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xVlmL0jF, HV_BINOP_MULTIPLY, 1, m, &cBinop_xVlmL0jF_sendMessage);
}

void Heavy_Echomatica::cMsg_QRUq4rkL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_5XdfFdXr_sendMessage);
}

void Heavy_Echomatica::cBinop_zXb4e155_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_N5LYOWAF_sendMessage);
}

void Heavy_Echomatica::cBinop_N5LYOWAF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_z1f0rImU_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Xm31b88M, m);
}

void Heavy_Echomatica::cBinop_z1f0rImU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_wlVsmoJB, m);
}

void Heavy_Echomatica::cBinop_Jl57OYh6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_LY9EZP23_sendMessage);
}

void Heavy_Echomatica::cBinop_LY9EZP23_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_OpZEpFUf_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_KrB5V24R_sendMessage);
}

void Heavy_Echomatica::cVar_gVMUyC0B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_wr7ZL5xv_sendMessage);
}

void Heavy_Echomatica::cMsg_pEdRNCWJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_XcTVVr3m_sendMessage);
}

void Heavy_Echomatica::cSystem_XcTVVr3m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_a4iH5s0C, HV_BINOP_DIVIDE, 1, m, &cBinop_a4iH5s0C_sendMessage);
}

void Heavy_Echomatica::cBinop_OpZEpFUf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_dfzJJ4vo_sendMessage);
}

void Heavy_Echomatica::cBinop_dfzJJ4vo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_2nABxhho, m);
}

void Heavy_Echomatica::cMsg_ceJ7LpYj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_nSHfBhks_sendMessage);
}

void Heavy_Echomatica::cBinop_nSHfBhks_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_Jl57OYh6_sendMessage);
}

void Heavy_Echomatica::cBinop_KrB5V24R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_kspn1A75, m);
}

void Heavy_Echomatica::cBinop_wr7ZL5xv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_zDPuMt3p_sendMessage);
}

void Heavy_Echomatica::cBinop_zDPuMt3p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_a4iH5s0C, HV_BINOP_DIVIDE, 0, m, &cBinop_a4iH5s0C_sendMessage);
}

void Heavy_Echomatica::cBinop_a4iH5s0C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ceJ7LpYj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cIf_07NPCjrt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_Z7jJnXCG, 0, m, &cVar_Z7jJnXCG_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_Z7jJnXCG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CKmyfuvg, HV_BINOP_MULTIPLY, 0, m, &cBinop_CKmyfuvg_sendMessage);
}

void Heavy_Echomatica::cVar_pZlKgrxD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_07NPCjrt, 0, m, &cIf_07NPCjrt_sendMessage);
}

void Heavy_Echomatica::cPack_utxM8W9s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_gC2c4az1_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_BAfNxeRm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_2DYAOh2J_sendMessage);
}

void Heavy_Echomatica::cSystem_2DYAOh2J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2lYfzzFW, HV_BINOP_MULTIPLY, 1, m, &cBinop_2lYfzzFW_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_vflPJgIb, HV_BINOP_MULTIPLY, 1, m, &cBinop_vflPJgIb_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_M5HsIeTp_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cMsg_Dce2n29i_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_Dce2n29i_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_48vzcmPw_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cDelay_DG3LdsjG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_DG3LdsjG, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_DG3LdsjG, 0, m, &cDelay_DG3LdsjG_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_11I0o9ut, 0, m, &cVar_11I0o9ut_sendMessage);
}

void Heavy_Echomatica::cCast_48vzcmPw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Dce2n29i_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_DG3LdsjG, 0, m, &cDelay_DG3LdsjG_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_11I0o9ut, 0, m, &cVar_11I0o9ut_sendMessage);
}

void Heavy_Echomatica::cMsg_KvfPXbRb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_DHz4AiHs_sendMessage);
}

void Heavy_Echomatica::cSystem_DHz4AiHs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_F7vKU1Uq_sendMessage);
}

void Heavy_Echomatica::cVar_Mhdp64th_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EKC84hKj, HV_BINOP_MULTIPLY, 0, m, &cBinop_EKC84hKj_sendMessage);
}

void Heavy_Echomatica::cMsg_Dce2n29i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_DG3LdsjG, 0, m, &cDelay_DG3LdsjG_sendMessage);
}

void Heavy_Echomatica::cBinop_TopTvYyw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_DG3LdsjG, 2, m, &cDelay_DG3LdsjG_sendMessage);
}

void Heavy_Echomatica::cBinop_F7vKU1Uq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EKC84hKj, HV_BINOP_MULTIPLY, 1, m, &cBinop_EKC84hKj_sendMessage);
}

void Heavy_Echomatica::cBinop_EKC84hKj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_TopTvYyw_sendMessage);
}

void Heavy_Echomatica::cVar_11I0o9ut_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XsqaFzdB, HV_BINOP_SUBTRACT, 0, m, &cBinop_XsqaFzdB_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_kW3jCrt1_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_pZMyBgLS_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KttAkHUa_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qDaBEMJc_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_KttAkHUa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_157YALMd, 0, m, &cVar_157YALMd_sendMessage);
}

void Heavy_Echomatica::cCast_qDaBEMJc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hbobLDyw_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cm4GaZMA_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_gC2c4az1_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_2vyP03HN, 0, m, &cSlice_2vyP03HN_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_i8HmnVSb, 0, m, &cSlice_i8HmnVSb_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_x9I9gFfm_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_8vxlABw6, 0, m, &cSlice_8vxlABw6_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_n9gxHQTJ, 0, m, &cSlice_n9gxHQTJ_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gPFtHmRG_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_P1rwt4gq_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_2vyP03HN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_G9HZ6ZV4_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_G9HZ6ZV4_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_i8HmnVSb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_s8VJoQu6_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_uObN813n_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_s8VJoQu6_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_uObN813n_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_OOuk12b0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4hxwGJuI_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hIP2jXqk_sendMessage);
}

void Heavy_Echomatica::cVar_V3KTmCq9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_UJS7N2o2_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_UJS7N2o2_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nwLri4ik_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_2lYfzzFW, HV_BINOP_MULTIPLY, 0, m, &cBinop_2lYfzzFW_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_yizGFK3z, HV_BINOP_DIVIDE, 1, m, &cBinop_yizGFK3z_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_Mhdp64th, 0, m, &cVar_Mhdp64th_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_nwLri4ik_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_kUGZwlZ9_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_1z0bE0zV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yksTXEmN, HV_BINOP_SUBTRACT, 1, m, &cBinop_yksTXEmN_sendMessage);
}

void Heavy_Echomatica::cVar_6oJqTOaG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_157YALMd, 0, m, &cVar_157YALMd_sendMessage);
}

void Heavy_Echomatica::cVar_157YALMd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fdN35NCr, HV_BINOP_ADD, 0, m, &cBinop_fdN35NCr_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_HlSzGvfp, HV_BINOP_ADD, 0, m, &cBinop_HlSzGvfp_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zjD5J8b9_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SCp63bxb_sendMessage);
}

void Heavy_Echomatica::cSlice_8vxlABw6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4hxwGJuI_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hIP2jXqk_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_n9gxHQTJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_9rsd1uad_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jMl1SJ1t_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_bVWNFgIQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_11I0o9ut, 1, m, &cVar_11I0o9ut_sendMessage);
}

void Heavy_Echomatica::cBinop_vflPJgIb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_bVWNFgIQ_sendMessage);
}

void Heavy_Echomatica::cBinop_2lYfzzFW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_d8hO7M8U_sendMessage);
}

void Heavy_Echomatica::cBinop_d8hO7M8U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XsqaFzdB, HV_BINOP_SUBTRACT, 1, m, &cBinop_XsqaFzdB_sendMessage);
}

void Heavy_Echomatica::cBinop_XsqaFzdB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_11I0o9ut, 1, m, &cVar_11I0o9ut_sendMessage);
}

void Heavy_Echomatica::cMsg_msaHS4T7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_M5HsIeTp_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_lpQ3JSof_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_M5HsIeTp_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_HlSzGvfp, HV_BINOP_ADD, 1, m, &cBinop_HlSzGvfp_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_fdN35NCr, HV_BINOP_ADD, 1, m, &cBinop_fdN35NCr_sendMessage);
}

void Heavy_Echomatica::cBinop_kW3jCrt1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_pZMyBgLS_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_fdN35NCr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_157YALMd, 1, m, &cVar_157YALMd_sendMessage);
}

void Heavy_Echomatica::cBinop_yizGFK3z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MPp6V04w, HV_BINOP_DIVIDE, 1, m, &cBinop_MPp6V04w_sendMessage);
}

void Heavy_Echomatica::cBinop_MPp6V04w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HlSzGvfp, HV_BINOP_ADD, 1, m, &cBinop_HlSzGvfp_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_fdN35NCr, HV_BINOP_ADD, 1, m, &cBinop_fdN35NCr_sendMessage);
}

void Heavy_Echomatica::cCast_hIP2jXqk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yizGFK3z, HV_BINOP_DIVIDE, 0, m, &cBinop_yizGFK3z_sendMessage);
}

void Heavy_Echomatica::cCast_4hxwGJuI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vflPJgIb, HV_BINOP_MULTIPLY, 0, m, &cBinop_vflPJgIb_sendMessage);
}

void Heavy_Echomatica::cCast_9rsd1uad_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6oJqTOaG, 1, m, &cVar_6oJqTOaG_sendMessage);
}

void Heavy_Echomatica::cCast_jMl1SJ1t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yksTXEmN, HV_BINOP_SUBTRACT, 0, m, &cBinop_yksTXEmN_sendMessage);
}

void Heavy_Echomatica::cCast_hbobLDyw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_lpQ3JSof_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_cm4GaZMA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6oJqTOaG, 0, m, &cVar_6oJqTOaG_sendMessage);
}

void Heavy_Echomatica::cBinop_HlSzGvfp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_1z0bE0zV, 0, m, &cVar_1z0bE0zV_sendMessage);
}

void Heavy_Echomatica::cMsg_G9HZ6ZV4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_M5HsIeTp_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_4oDpqpQJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_OOuk12b0, 1, m, &cVar_OOuk12b0_sendMessage);
}

void Heavy_Echomatica::cMsg_kUGZwlZ9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_2lYfzzFW, HV_BINOP_MULTIPLY, 0, m, &cBinop_2lYfzzFW_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_yizGFK3z, HV_BINOP_DIVIDE, 1, m, &cBinop_yizGFK3z_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Mhdp64th, 0, m, &cVar_Mhdp64th_sendMessage);
}

void Heavy_Echomatica::cCast_s8VJoQu6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_G9HZ6ZV4_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_uObN813n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8Cv2AAC7_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_HlSzGvfp, HV_BINOP_ADD, 0, m, &cBinop_HlSzGvfp_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_157YALMd, 1, m, &cVar_157YALMd_sendMessage);
}

void Heavy_Echomatica::cBinop_yksTXEmN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MPp6V04w, HV_BINOP_DIVIDE, 0, m, &cBinop_MPp6V04w_sendMessage);
}

void Heavy_Echomatica::cCast_8Cv2AAC7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_lpQ3JSof_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_P1rwt4gq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4oDpqpQJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_x9I9gFfm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OOuk12b0, 0, m, &cVar_OOuk12b0_sendMessage);
}

void Heavy_Echomatica::cCast_gPFtHmRG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_msaHS4T7_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_rrmdjfnt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_L6hUBge7, HV_BINOP_MULTIPLY, 0, m, &cBinop_L6hUBge7_sendMessage);
}

void Heavy_Echomatica::cVar_Dis4Ez7m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SUTQvx6K, HV_BINOP_MULTIPLY, 0, m, &cBinop_SUTQvx6K_sendMessage);
}

void Heavy_Echomatica::cVar_RODvJVvV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rMywTRQ1, HV_BINOP_MULTIPLY, 0, m, &cBinop_rMywTRQ1_sendMessage);
}

void Heavy_Echomatica::cVar_tGSJjfCP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wflicF51, HV_BINOP_MULTIPLY, 0, m, &cBinop_wflicF51_sendMessage);
}

void Heavy_Echomatica::cVar_EacJ840L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lnenmss4, HV_BINOP_MULTIPLY, 0, m, &cBinop_lnenmss4_sendMessage);
}

void Heavy_Echomatica::cVar_oX2Jn6vU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hL447o86, HV_BINOP_MULTIPLY, 0, m, &cBinop_hL447o86_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_va1RR3Rd_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LsqgILXk_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_F4q9hPIA_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_LsqgILXk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dnqhdlbO_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_A9R4KwB5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MlY2T4Wz_sendMessage);
}

void Heavy_Echomatica::cCast_F4q9hPIA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jU4ZGJQj_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4knrSyDo_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6XXiHUYE_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NL2cmROg_sendMessage);
}

void Heavy_Echomatica::cBinop_LA8OSws3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_NUrMOJh2_sendMessage);
}

void Heavy_Echomatica::cBinop_NUrMOJh2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_X2md7mxz_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_m8EvfETI_sendMessage);
}

void Heavy_Echomatica::cVar_IrNalIXx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_pUnP6h1H_sendMessage);
}

void Heavy_Echomatica::cMsg_OO9IyHmX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_cEy66tMk_sendMessage);
}

void Heavy_Echomatica::cSystem_cEy66tMk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Vk7aSFvJ, HV_BINOP_DIVIDE, 1, m, &cBinop_Vk7aSFvJ_sendMessage);
}

void Heavy_Echomatica::cBinop_X2md7mxz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_IfmsfLkk_sendMessage);
}

void Heavy_Echomatica::cBinop_IfmsfLkk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_FCTHvr2Y, m);
}

void Heavy_Echomatica::cMsg_gId99cel_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_1xrAuxJx_sendMessage);
}

void Heavy_Echomatica::cBinop_1xrAuxJx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_LA8OSws3_sendMessage);
}

void Heavy_Echomatica::cBinop_m8EvfETI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_kAT5wN2i, m);
}

void Heavy_Echomatica::cBinop_pUnP6h1H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_ADEKqczG_sendMessage);
}

void Heavy_Echomatica::cBinop_ADEKqczG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Vk7aSFvJ, HV_BINOP_DIVIDE, 0, m, &cBinop_Vk7aSFvJ_sendMessage);
}

void Heavy_Echomatica::cBinop_Vk7aSFvJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gId99cel_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_6CNVHa56_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ba1IXFcZ, HV_BINOP_DIVIDE, 0, m, &cBinop_ba1IXFcZ_sendMessage);
}

void Heavy_Echomatica::cVar_WEBDchav_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gs0y2Lfn, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_gs0y2Lfn_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_yN4ZjPkN, 0, m, &cIf_yN4ZjPkN_sendMessage);
}

void Heavy_Echomatica::sEnv_3DelVEa7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_2dxEMPMB_sendMessage);
}

void Heavy_Echomatica::cBinop_587Moo5y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_2Dcdz1qQ_sendMessage);
}

void Heavy_Echomatica::cBinop_2Dcdz1qQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kVytAyPC_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pPR09SPE_sendMessage);
}

void Heavy_Echomatica::cCast_kVytAyPC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IqzkMKIj, HV_BINOP_POW, 1, m, &cBinop_IqzkMKIj_sendMessage);
}

void Heavy_Echomatica::cCast_pPR09SPE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_z8b8lOkK_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_z8b8lOkK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_IqzkMKIj, HV_BINOP_POW, 0, m, &cBinop_IqzkMKIj_sendMessage);
}

void Heavy_Echomatica::cBinop_IqzkMKIj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_HOnBCb7g_sendMessage);
}

void Heavy_Echomatica::cIf_yN4ZjPkN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_587Moo5y, HV_BINOP_SUBTRACT, 0, m, &cBinop_587Moo5y_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_0cz7MuCI, HV_BINOP_SUBTRACT, 0, m, &cBinop_0cz7MuCI_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_gs0y2Lfn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_yN4ZjPkN, 1, m, &cIf_yN4ZjPkN_sendMessage);
}

void Heavy_Echomatica::cVar_qy0i5CFq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qOLI0tjL_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_cIICWGH0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_A37klwWh_sendMessage);
}

void Heavy_Echomatica::cVar_hgyMjLqw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1FAU0yKh_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KWKm4T6n_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_pqU0jRnI_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_oZ4a5ZCh, 0, m, &cSlice_oZ4a5ZCh_sendMessage);
      break;
    }
    default: {
      cSwitchcase_1tecJwMt_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_oZ4a5ZCh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_pAxxat3A_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_pAxxat3A_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_jDBE6Jxe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_pAxxat3A_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_pAxxat3A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_3OYa9spT_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_1tecJwMt_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_TLu9Lz56, 0, m, &cSlice_TLu9Lz56_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_TLu9Lz56_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_AJswD2cW_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_AJswD2cW_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_POaGZcU4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_AJswD2cW_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_AJswD2cW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ZTFPKtPz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_1FAU0yKh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ba1IXFcZ, HV_BINOP_DIVIDE, 1, m, &cBinop_ba1IXFcZ_sendMessage);
}

void Heavy_Echomatica::cCast_KWKm4T6n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6CNVHa56, 0, m, &cVar_6CNVHa56_sendMessage);
}

void Heavy_Echomatica::cBinop_ba1IXFcZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rOzqayVA, HV_BINOP_ADD, 0, m, &cBinop_rOzqayVA_sendMessage);
}

void Heavy_Echomatica::cBinop_0cz7MuCI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6CNVHa56, 0, m, &cVar_6CNVHa56_sendMessage);
}

void Heavy_Echomatica::cCast_cIICWGH0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gs0y2Lfn, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_gs0y2Lfn_sendMessage);
}

void Heavy_Echomatica::cCast_A37klwWh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WEBDchav, 0, m, &cVar_WEBDchav_sendMessage);
}

void Heavy_Echomatica::cCast_qOLI0tjL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_s9uXc6WT_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_CXkLcs00_sendMessage);
}

void Heavy_Echomatica::cBinop_rOzqayVA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_587Moo5y, HV_BINOP_SUBTRACT, 0, m, &cBinop_587Moo5y_sendMessage);
}

void Heavy_Echomatica::cCast_lZYkMkdD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_qy0i5CFq, 0, m, &cVar_qy0i5CFq_sendMessage);
}

void Heavy_Echomatica::cCast_foK0AnAd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_hgyMjLqw, 0, m, &cVar_hgyMjLqw_sendMessage);
}

void Heavy_Echomatica::cCast_GiRZYMge_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WEBDchav, 0, m, &cVar_WEBDchav_sendMessage);
}

void Heavy_Echomatica::cCast_3IRyFApw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_587Moo5y, HV_BINOP_SUBTRACT, 1, m, &cBinop_587Moo5y_sendMessage);
}

void Heavy_Echomatica::cBinop_HOnBCb7g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_A2MEG4qb_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_s9uXc6WT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rOzqayVA, HV_BINOP_ADD, 1, m, &cBinop_rOzqayVA_sendMessage);
}

void Heavy_Echomatica::cCast_CXkLcs00_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0cz7MuCI, HV_BINOP_SUBTRACT, 1, m, &cBinop_0cz7MuCI_sendMessage);
}

void Heavy_Echomatica::cBinop_2dxEMPMB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3IRyFApw_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GiRZYMge_sendMessage);
}

void Heavy_Echomatica::cMsg_A2MEG4qb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_WHWiMlis, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_ICdDr1Fc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_sFCWz4vA_sendMessage);
}

void Heavy_Echomatica::cBinop_sFCWz4vA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_PWkOEBBO_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_EFeABcjJ_sendMessage);
}

void Heavy_Echomatica::cVar_bzAwelga_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_QqvmTlTa_sendMessage);
}

void Heavy_Echomatica::cMsg_0B0hRIJ2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ficJ7JvV_sendMessage);
}

void Heavy_Echomatica::cSystem_ficJ7JvV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_c7nETXB4, HV_BINOP_DIVIDE, 1, m, &cBinop_c7nETXB4_sendMessage);
}

void Heavy_Echomatica::cBinop_PWkOEBBO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_zyqbUNOc_sendMessage);
}

void Heavy_Echomatica::cBinop_zyqbUNOc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_yTUpjMvw, m);
}

void Heavy_Echomatica::cMsg_ETSVG6WG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_0gfvrejj_sendMessage);
}

void Heavy_Echomatica::cBinop_0gfvrejj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_ICdDr1Fc_sendMessage);
}

void Heavy_Echomatica::cBinop_EFeABcjJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_YaFNmRty, m);
}

void Heavy_Echomatica::cBinop_QqvmTlTa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_fkm7spf2_sendMessage);
}

void Heavy_Echomatica::cBinop_fkm7spf2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_c7nETXB4, HV_BINOP_DIVIDE, 0, m, &cBinop_c7nETXB4_sendMessage);
}

void Heavy_Echomatica::cBinop_c7nETXB4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ETSVG6WG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_FFrL7pB6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hlagb0l9, HV_BINOP_DIVIDE, 0, m, &cBinop_hlagb0l9_sendMessage);
}

void Heavy_Echomatica::cVar_7XFDCYIR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BA135JQD, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_BA135JQD_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_jbrE5ki4, 0, m, &cIf_jbrE5ki4_sendMessage);
}

void Heavy_Echomatica::sEnv_fghOrcNy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_husYGb7O_sendMessage);
}

void Heavy_Echomatica::cBinop_pqcSx2xc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_xcltWjUN_sendMessage);
}

void Heavy_Echomatica::cBinop_xcltWjUN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YLev6usG_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_k8ij1QZf_sendMessage);
}

void Heavy_Echomatica::cCast_k8ij1QZf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PcDiIzKy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_YLev6usG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0KR09LHk, HV_BINOP_POW, 1, m, &cBinop_0KR09LHk_sendMessage);
}

void Heavy_Echomatica::cMsg_PcDiIzKy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_0KR09LHk, HV_BINOP_POW, 0, m, &cBinop_0KR09LHk_sendMessage);
}

void Heavy_Echomatica::cBinop_0KR09LHk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_780fLufK_sendMessage);
}

void Heavy_Echomatica::cIf_jbrE5ki4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_pqcSx2xc, HV_BINOP_SUBTRACT, 0, m, &cBinop_pqcSx2xc_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_yWkEhSDQ, HV_BINOP_SUBTRACT, 0, m, &cBinop_yWkEhSDQ_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_BA135JQD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_jbrE5ki4, 1, m, &cIf_jbrE5ki4_sendMessage);
}

void Heavy_Echomatica::cVar_Ez62AiVC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_miAAScKA_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lzQFQ0ck_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sZbthUva_sendMessage);
}

void Heavy_Echomatica::cVar_9e2iJgoC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LNu0gEsO_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WZBYvA0x_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_kpUmKYvg_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_2mU7x2DS, 0, m, &cSlice_2mU7x2DS_sendMessage);
      break;
    }
    default: {
      cSwitchcase_xyjm9Ep3_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_2mU7x2DS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_y23vh2Sb_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_y23vh2Sb_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_vMlJ9ac0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_y23vh2Sb_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_y23vh2Sb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_zFnNTKC3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_xyjm9Ep3_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_8Z5m8qI8, 0, m, &cSlice_8Z5m8qI8_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_8Z5m8qI8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_EgselifZ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_EgselifZ_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_DaO1kGBk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_EgselifZ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_EgselifZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Xd3llCT3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_WZBYvA0x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FFrL7pB6, 0, m, &cVar_FFrL7pB6_sendMessage);
}

void Heavy_Echomatica::cCast_LNu0gEsO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hlagb0l9, HV_BINOP_DIVIDE, 1, m, &cBinop_hlagb0l9_sendMessage);
}

void Heavy_Echomatica::cBinop_hlagb0l9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Z8RbExAi, HV_BINOP_ADD, 0, m, &cBinop_Z8RbExAi_sendMessage);
}

void Heavy_Echomatica::cBinop_yWkEhSDQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FFrL7pB6, 0, m, &cVar_FFrL7pB6_sendMessage);
}

void Heavy_Echomatica::cCast_lzQFQ0ck_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BA135JQD, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_BA135JQD_sendMessage);
}

void Heavy_Echomatica::cCast_miAAScKA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_RqfP8Gke_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xoMtovvw_sendMessage);
}

void Heavy_Echomatica::cCast_sZbthUva_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_7XFDCYIR, 0, m, &cVar_7XFDCYIR_sendMessage);
}

void Heavy_Echomatica::cBinop_Z8RbExAi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pqcSx2xc, HV_BINOP_SUBTRACT, 0, m, &cBinop_pqcSx2xc_sendMessage);
}

void Heavy_Echomatica::cCast_hYtc9286_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Ez62AiVC, 0, m, &cVar_Ez62AiVC_sendMessage);
}

void Heavy_Echomatica::cCast_0pS3aTs6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9e2iJgoC, 0, m, &cVar_9e2iJgoC_sendMessage);
}

void Heavy_Echomatica::cCast_aOsVC28A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pqcSx2xc, HV_BINOP_SUBTRACT, 1, m, &cBinop_pqcSx2xc_sendMessage);
}

void Heavy_Echomatica::cCast_ixGMatBF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_7XFDCYIR, 0, m, &cVar_7XFDCYIR_sendMessage);
}

void Heavy_Echomatica::cBinop_780fLufK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_RXSmiCyV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_RqfP8Gke_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Z8RbExAi, HV_BINOP_ADD, 1, m, &cBinop_Z8RbExAi_sendMessage);
}

void Heavy_Echomatica::cCast_xoMtovvw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yWkEhSDQ, HV_BINOP_SUBTRACT, 1, m, &cBinop_yWkEhSDQ_sendMessage);
}

void Heavy_Echomatica::cBinop_husYGb7O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_aOsVC28A_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ixGMatBF_sendMessage);
}

void Heavy_Echomatica::cMsg_RXSmiCyV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_bp77BR8O, 0, m, NULL);
}

void Heavy_Echomatica::cVar_IahalyXv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_W6tNHAz9, HV_BINOP_MULTIPLY, 0, m, &cBinop_W6tNHAz9_sendMessage);
}

void Heavy_Echomatica::cMsg_VG8B4o7u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_poZtldgW_sendMessage);
}

void Heavy_Echomatica::cSystem_poZtldgW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_M0Pxu3HK_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_W6tNHAz9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_Tt6BYERH_sendMessage);
}

void Heavy_Echomatica::cBinop_hZExrZMW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_W6tNHAz9, HV_BINOP_MULTIPLY, 1, m, &cBinop_W6tNHAz9_sendMessage);
}

void Heavy_Echomatica::cMsg_M0Pxu3HK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_hZExrZMW_sendMessage);
}

void Heavy_Echomatica::cBinop_Tt6BYERH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_qMW19dWQ_sendMessage);
}

void Heavy_Echomatica::cBinop_qMW19dWQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_1XOUnfyq_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_LuZtKaMn, m);
}

void Heavy_Echomatica::cBinop_1XOUnfyq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_gHlgcw6b, m);
}

void Heavy_Echomatica::cVar_WNv9T3VD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KJumXBZc, HV_BINOP_MULTIPLY, 0, m, &cBinop_KJumXBZc_sendMessage);
}

void Heavy_Echomatica::cMsg_E7Nptqpn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_tgZOH0qD_sendMessage);
}

void Heavy_Echomatica::cSystem_tgZOH0qD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_H0z7VkIG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_KJumXBZc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_InT0VHma_sendMessage);
}

void Heavy_Echomatica::cBinop_5GU3HOJk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KJumXBZc, HV_BINOP_MULTIPLY, 1, m, &cBinop_KJumXBZc_sendMessage);
}

void Heavy_Echomatica::cMsg_H0z7VkIG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_5GU3HOJk_sendMessage);
}

void Heavy_Echomatica::cBinop_InT0VHma_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_drIzQGMD_sendMessage);
}

void Heavy_Echomatica::cBinop_drIzQGMD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_0Dta0sbG_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_b6dxxPTC, m);
}

void Heavy_Echomatica::cBinop_0Dta0sbG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_AOtyjB8S, m);
}

void Heavy_Echomatica::cBinop_FHjM5MQd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_8z6DNVW4_sendMessage);
}

void Heavy_Echomatica::cBinop_8z6DNVW4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_tlA34o2a_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_I5UgNbwz_sendMessage);
}

void Heavy_Echomatica::cVar_mvlPTaBG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_D5sqWzRI_sendMessage);
}

void Heavy_Echomatica::cMsg_dZ32vmTm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_981Yeho8_sendMessage);
}

void Heavy_Echomatica::cSystem_981Yeho8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Lpjbgn5H, HV_BINOP_DIVIDE, 1, m, &cBinop_Lpjbgn5H_sendMessage);
}

void Heavy_Echomatica::cBinop_tlA34o2a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_nzGZzdjb_sendMessage);
}

void Heavy_Echomatica::cBinop_nzGZzdjb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_85pZUEdS, m);
}

void Heavy_Echomatica::cMsg_rPxmezrO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_bCkTjpip_sendMessage);
}

void Heavy_Echomatica::cBinop_bCkTjpip_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_FHjM5MQd_sendMessage);
}

void Heavy_Echomatica::cBinop_I5UgNbwz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_9uz8t2pm, m);
}

void Heavy_Echomatica::cBinop_D5sqWzRI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_c4ilb6SY_sendMessage);
}

void Heavy_Echomatica::cBinop_c4ilb6SY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Lpjbgn5H, HV_BINOP_DIVIDE, 0, m, &cBinop_Lpjbgn5H_sendMessage);
}

void Heavy_Echomatica::cBinop_Lpjbgn5H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rPxmezrO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_qRh7OsFA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_a6Sug3lR_sendMessage);
}

void Heavy_Echomatica::cBinop_a6Sug3lR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_tYPuyiY5_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_GptaHWdK_sendMessage);
}

void Heavy_Echomatica::cVar_C7pPYkzV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_mQd9C8vY_sendMessage);
}

void Heavy_Echomatica::cMsg_1BJ8Ye0o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_w7LlzXBM_sendMessage);
}

void Heavy_Echomatica::cSystem_w7LlzXBM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jBGM4tea, HV_BINOP_DIVIDE, 1, m, &cBinop_jBGM4tea_sendMessage);
}

void Heavy_Echomatica::cBinop_tYPuyiY5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_AmfgLWK6_sendMessage);
}

void Heavy_Echomatica::cBinop_AmfgLWK6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_2FLKH5Pn, m);
}

void Heavy_Echomatica::cMsg_7cPUvbvA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_BLhoSGYH_sendMessage);
}

void Heavy_Echomatica::cBinop_BLhoSGYH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_qRh7OsFA_sendMessage);
}

void Heavy_Echomatica::cBinop_GptaHWdK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_rd7t9gph, m);
}

void Heavy_Echomatica::cBinop_mQd9C8vY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_oafdkoLd_sendMessage);
}

void Heavy_Echomatica::cBinop_oafdkoLd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jBGM4tea, HV_BINOP_DIVIDE, 0, m, &cBinop_jBGM4tea_sendMessage);
}

void Heavy_Echomatica::cBinop_jBGM4tea_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7cPUvbvA_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_yqkAIGL6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_5PPqjPnH_sendMessage);
}

void Heavy_Echomatica::cSystem_5PPqjPnH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_BVcLxKtL_sendMessage);
}

void Heavy_Echomatica::cDelay_sFAqgtNt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_sFAqgtNt, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_avKT3l11, 0, m, &cDelay_avKT3l11_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_sFAqgtNt, 0, m, &cDelay_sFAqgtNt_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_pWi0XPhH, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_avKT3l11_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_avKT3l11, m);
  cMsg_xpSxcl9m_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_rKXiKM30_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_RNYvAiNJ_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_kWKLDolw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mJm12vMf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_hYMfrILr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hLlkFN2A_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_sFAqgtNt, 2, m, &cDelay_sFAqgtNt_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IQtoDBAg_sendMessage);
}

void Heavy_Echomatica::cMsg_mJm12vMf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_hYMfrILr, 0, m, &hTable_hYMfrILr_sendMessage);
}

void Heavy_Echomatica::cBinop_BVcLxKtL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_kWKLDolw_sendMessage);
}

void Heavy_Echomatica::cMsg_xpSxcl9m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_hYMfrILr, 0, m, &hTable_hYMfrILr_sendMessage);
}

void Heavy_Echomatica::cCast_IQtoDBAg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_sFAqgtNt, 0, m, &cDelay_sFAqgtNt_sendMessage);
}

void Heavy_Echomatica::cMsg_hLlkFN2A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_avKT3l11, 2, m, &cDelay_avKT3l11_sendMessage);
}

void Heavy_Echomatica::cMsg_RNYvAiNJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_pWi0XPhH, 1, m, NULL);
}

void Heavy_Echomatica::cVar_Bp9EFn9v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_wyWXTql7, 0, m, &cPack_wyWXTql7_sendMessage);
}

void Heavy_Echomatica::cVar_FM2y4X7G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_8qH4VSaw, 0, m, &cPack_8qH4VSaw_sendMessage);
}

void Heavy_Echomatica::cVar_HEQ44Zmj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_Lmuwfm2F_sendMessage);
  cSwitchcase_va1RR3Rd_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_Lmuwfm2F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HEQ44Zmj, 1, m, &cVar_HEQ44Zmj_sendMessage);
}

void Heavy_Echomatica::cVar_e3nR7W3R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_utxM8W9s, 0, m, &cPack_utxM8W9s_sendMessage);
}

void Heavy_Echomatica::cBinop_noWgOLYC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_BkWyBAjM_sendMessage);
}

void Heavy_Echomatica::cBinop_BkWyBAjM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Be7wVije_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_mezXPB2X_sendMessage);
}

void Heavy_Echomatica::cVar_HWpRhbfC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_qfmkxP4Y_sendMessage);
}

void Heavy_Echomatica::cMsg_1otI0PX0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_y1icERHh_sendMessage);
}

void Heavy_Echomatica::cSystem_y1icERHh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pmLwOEPQ, HV_BINOP_DIVIDE, 1, m, &cBinop_pmLwOEPQ_sendMessage);
}

void Heavy_Echomatica::cBinop_Be7wVije_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_PLr046Lq_sendMessage);
}

void Heavy_Echomatica::cBinop_PLr046Lq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_0npoSHBg, m);
}

void Heavy_Echomatica::cMsg_BsvFOCZr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_tcA5jWRj_sendMessage);
}

void Heavy_Echomatica::cBinop_tcA5jWRj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_noWgOLYC_sendMessage);
}

void Heavy_Echomatica::cBinop_mezXPB2X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_3InXXHDf, m);
}

void Heavy_Echomatica::cBinop_qfmkxP4Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_AUdpQWbR_sendMessage);
}

void Heavy_Echomatica::cBinop_AUdpQWbR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pmLwOEPQ, HV_BINOP_DIVIDE, 0, m, &cBinop_pmLwOEPQ_sendMessage);
}

void Heavy_Echomatica::cBinop_pmLwOEPQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BsvFOCZr_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_mtZfGnhc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_CB0zNBoi_sendMessage);
}

void Heavy_Echomatica::cBinop_CB0zNBoi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_4Uq7FY0d_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_ifzSj1tQ_sendMessage);
}

void Heavy_Echomatica::cVar_FYCUJCuW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_jvoQWHWg_sendMessage);
}

void Heavy_Echomatica::cMsg_exuHCqOB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Kueh2J6r_sendMessage);
}

void Heavy_Echomatica::cSystem_Kueh2J6r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PWteoCam, HV_BINOP_DIVIDE, 1, m, &cBinop_PWteoCam_sendMessage);
}

void Heavy_Echomatica::cBinop_4Uq7FY0d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_wwKxRhEX_sendMessage);
}

void Heavy_Echomatica::cBinop_wwKxRhEX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_01Byy70G, m);
}

void Heavy_Echomatica::cMsg_SEPD3ni2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_7uPU6WWU_sendMessage);
}

void Heavy_Echomatica::cBinop_7uPU6WWU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_mtZfGnhc_sendMessage);
}

void Heavy_Echomatica::cBinop_ifzSj1tQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_MkF6wEf0, m);
}

void Heavy_Echomatica::cBinop_jvoQWHWg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_ytDapX3Q_sendMessage);
}

void Heavy_Echomatica::cBinop_ytDapX3Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PWteoCam, HV_BINOP_DIVIDE, 0, m, &cBinop_PWteoCam_sendMessage);
}

void Heavy_Echomatica::cBinop_PWteoCam_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SEPD3ni2_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_kYPaaorD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_K5BzIE0h_sendMessage);
}

void Heavy_Echomatica::cBinop_K5BzIE0h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_8pmcolyp_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_JXjdbqlC_sendMessage);
}

void Heavy_Echomatica::cVar_uJl9k0Ps_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_Re2ilXbO_sendMessage);
}

void Heavy_Echomatica::cMsg_7mSS4Hoh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_sB20KdeS_sendMessage);
}

void Heavy_Echomatica::cSystem_sB20KdeS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9xVJiqB6, HV_BINOP_DIVIDE, 1, m, &cBinop_9xVJiqB6_sendMessage);
}

void Heavy_Echomatica::cBinop_8pmcolyp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_FEliy8VW_sendMessage);
}

void Heavy_Echomatica::cBinop_FEliy8VW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_h5rFgAXA, m);
}

void Heavy_Echomatica::cMsg_32IGuvq9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_r8rloacp_sendMessage);
}

void Heavy_Echomatica::cBinop_r8rloacp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_kYPaaorD_sendMessage);
}

void Heavy_Echomatica::cBinop_JXjdbqlC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_YgSDlaCC, m);
}

void Heavy_Echomatica::cBinop_Re2ilXbO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_aIeevq1w_sendMessage);
}

void Heavy_Echomatica::cBinop_aIeevq1w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9xVJiqB6, HV_BINOP_DIVIDE, 0, m, &cBinop_9xVJiqB6_sendMessage);
}

void Heavy_Echomatica::cBinop_9xVJiqB6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_32IGuvq9_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_Q4YDIarg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ffeCMziO, HV_BINOP_MULTIPLY, 0, m, &cBinop_ffeCMziO_sendMessage);
}

void Heavy_Echomatica::cMsg_bxUrq81f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_9hrkKtWT_sendMessage);
}

void Heavy_Echomatica::cSystem_9hrkKtWT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_A5FmqADc_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_ffeCMziO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_5HhtKkvU_sendMessage);
}

void Heavy_Echomatica::cBinop_bA5ueGlQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ffeCMziO, HV_BINOP_MULTIPLY, 1, m, &cBinop_ffeCMziO_sendMessage);
}

void Heavy_Echomatica::cMsg_A5FmqADc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_bA5ueGlQ_sendMessage);
}

void Heavy_Echomatica::cBinop_5HhtKkvU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_BVD5RrzG_sendMessage);
}

void Heavy_Echomatica::cBinop_BVD5RrzG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_muLUFQ5c_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_AdUexVat, m);
}

void Heavy_Echomatica::cBinop_muLUFQ5c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_jhSsyvMq, m);
}

void Heavy_Echomatica::cVar_VERq0I2m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SmArHhC0, HV_BINOP_MULTIPLY, 0, m, &cBinop_SmArHhC0_sendMessage);
}

void Heavy_Echomatica::cMsg_kEgYgf9N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_6S6lwrde_sendMessage);
}

void Heavy_Echomatica::cSystem_6S6lwrde_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Rqv14Itg_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_SmArHhC0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_TnT1C2pB_sendMessage);
}

void Heavy_Echomatica::cBinop_6mdMqXj4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SmArHhC0, HV_BINOP_MULTIPLY, 1, m, &cBinop_SmArHhC0_sendMessage);
}

void Heavy_Echomatica::cMsg_Rqv14Itg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_6mdMqXj4_sendMessage);
}

void Heavy_Echomatica::cBinop_TnT1C2pB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_0xESSxdq_sendMessage);
}

void Heavy_Echomatica::cBinop_0xESSxdq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_1fJl9dcm_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_9cbLFMO3, m);
}

void Heavy_Echomatica::cBinop_1fJl9dcm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_wBU6sQis, m);
}

void Heavy_Echomatica::cVar_JQtY6ER9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zRDpXVZS, HV_BINOP_MULTIPLY, 0, m, &cBinop_zRDpXVZS_sendMessage);
}

void Heavy_Echomatica::cMsg_NHbP2IdX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_9LU4vXL7_sendMessage);
}

void Heavy_Echomatica::cSystem_9LU4vXL7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zLl6kVPI_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_zRDpXVZS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_GhTP30Io_sendMessage);
}

void Heavy_Echomatica::cBinop_GGdaFDi9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zRDpXVZS, HV_BINOP_MULTIPLY, 1, m, &cBinop_zRDpXVZS_sendMessage);
}

void Heavy_Echomatica::cMsg_zLl6kVPI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_GGdaFDi9_sendMessage);
}

void Heavy_Echomatica::cBinop_GhTP30Io_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_ruTFwGDl_sendMessage);
}

void Heavy_Echomatica::cBinop_ruTFwGDl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_MaK1jeYZ_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_TRvFmIqJ, m);
}

void Heavy_Echomatica::cBinop_MaK1jeYZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_54n1fzTo, m);
}

void Heavy_Echomatica::cMsg_WQbVOrek_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_1We6ovna_sendMessage);
}

void Heavy_Echomatica::cSystem_1We6ovna_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Bu5AwnFr, HV_BINOP_DIVIDE, 1, m, &cBinop_Bu5AwnFr_sendMessage);
}

void Heavy_Echomatica::cVar_hQeb2UTi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_c3RNvLJk_sendMessage);
}

void Heavy_Echomatica::cVar_Zo7N6ie4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.001f, 0, m, &cBinop_Lt8lTKTZ_sendMessage);
}

void Heavy_Echomatica::cUnop_ERgXKsEP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_A1mxKv8l_sendMessage);
}

void Heavy_Echomatica::cBinop_Bu5AwnFr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uO0ly9Zf, HV_BINOP_MULTIPLY, 1, m, &cBinop_uO0ly9Zf_sendMessage);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_ERgXKsEP_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_sZJSg0JY, HV_BINOP_DIVIDE, 0, m, &cBinop_sZJSg0JY_sendMessage);
}

void Heavy_Echomatica::cBinop_c3RNvLJk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Bu5AwnFr, HV_BINOP_DIVIDE, 0, m, &cBinop_Bu5AwnFr_sendMessage);
}

void Heavy_Echomatica::cBinop_sZJSg0JY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_m3AXZJAf_sendMessage);
}

void Heavy_Echomatica::cBinop_otawHtyn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_52FlMQ6J_sendMessage);
}

void Heavy_Echomatica::cBinop_52FlMQ6J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_9gKMyeEf_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_coPVT7Fy, HV_BINOP_MULTIPLY, 0, m, &cBinop_coPVT7Fy_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_uO0ly9Zf, HV_BINOP_MULTIPLY, 0, m, &cBinop_uO0ly9Zf_sendMessage);
}

void Heavy_Echomatica::cBinop_A1mxKv8l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_coPVT7Fy, HV_BINOP_MULTIPLY, 1, m, &cBinop_coPVT7Fy_sendMessage);
}

void Heavy_Echomatica::cBinop_coPVT7Fy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_sHXooPH2_sendMessage);
}

void Heavy_Echomatica::cCast_sYp8cjOT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_hQeb2UTi, 0, m, &cVar_hQeb2UTi_sendMessage);
}

void Heavy_Echomatica::cBinop_ol2BMo0K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_DUjSTiRa_sendMessage);
}

void Heavy_Echomatica::cBinop_DUjSTiRa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_xGTHaZn6, 5, m);
}

void Heavy_Echomatica::cBinop_sHXooPH2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_xGTHaZn6, 4, m);
}

void Heavy_Echomatica::cBinop_O1xxe7Zl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FiskoH2v, HV_BINOP_MULTIPLY, 0, m, &cBinop_FiskoH2v_sendMessage);
}

void Heavy_Echomatica::cBinop_uO0ly9Zf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jk5IZiJV, HV_BINOP_ADD, 1, m, &cBinop_jk5IZiJV_sendMessage);
}

void Heavy_Echomatica::cBinop_9gKMyeEf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_ol2BMo0K_sendMessage);
}

void Heavy_Echomatica::cBinop_jk5IZiJV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FiskoH2v, HV_BINOP_MULTIPLY, 1, m, &cBinop_FiskoH2v_sendMessage);
}

void Heavy_Echomatica::cBinop_FiskoH2v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_xGTHaZn6, 1, m);
}

void Heavy_Echomatica::cBinop_Lt8lTKTZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sZJSg0JY, HV_BINOP_DIVIDE, 1, m, &cBinop_sZJSg0JY_sendMessage);
}

void Heavy_Echomatica::cBinop_m3AXZJAf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_otawHtyn_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_jk5IZiJV, HV_BINOP_ADD, 0, m, &cBinop_jk5IZiJV_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_O1xxe7Zl_sendMessage);
}

void Heavy_Echomatica::cBinop_aLhEIMQE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_TvV96Sm0_sendMessage);
}

void Heavy_Echomatica::cBinop_TvV96Sm0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_HvLBVzfr_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_lHUwB2vR_sendMessage);
}

void Heavy_Echomatica::cVar_7xPhshow_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_Jh2gGDvu_sendMessage);
}

void Heavy_Echomatica::cMsg_PxEWPigt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_dvN3XcJQ_sendMessage);
}

void Heavy_Echomatica::cSystem_dvN3XcJQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eI8Q7Zcb, HV_BINOP_DIVIDE, 1, m, &cBinop_eI8Q7Zcb_sendMessage);
}

void Heavy_Echomatica::cBinop_HvLBVzfr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_v414FGkd_sendMessage);
}

void Heavy_Echomatica::cBinop_v414FGkd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_lSD51BFi, m);
}

void Heavy_Echomatica::cMsg_1UNHW5gM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_zFDWbrqQ_sendMessage);
}

void Heavy_Echomatica::cBinop_zFDWbrqQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_aLhEIMQE_sendMessage);
}

void Heavy_Echomatica::cBinop_lHUwB2vR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_GVxxrC5H, m);
}

void Heavy_Echomatica::cBinop_Jh2gGDvu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_aCVF36et_sendMessage);
}

void Heavy_Echomatica::cBinop_aCVF36et_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eI8Q7Zcb, HV_BINOP_DIVIDE, 0, m, &cBinop_eI8Q7Zcb_sendMessage);
}

void Heavy_Echomatica::cBinop_eI8Q7Zcb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1UNHW5gM_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_5j1wvNI3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_LPXAF7fR, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_qxonh7gh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Jbwla4vc, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_i4qlPVio_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_ScjZWXpG, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_oiGkNS0Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_HIQKc63w, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_aOlvuVR1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_WOG1vR2T, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_ouOmWygk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_lFUj8T1M_sendMessage);
}

void Heavy_Echomatica::cSystem_lFUj8T1M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_n2lp21Mj, HV_BINOP_DIVIDE, 1, m, &cBinop_n2lp21Mj_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kCYcJhvM_sendMessage);
}

void Heavy_Echomatica::cUnop_fwb9aY3z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_05R5uzsI_sendMessage);
}

void Heavy_Echomatica::cMsg_aeIlBEyk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_fwb9aY3z_sendMessage);
}

void Heavy_Echomatica::cBinop_05R5uzsI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_n2lp21Mj, HV_BINOP_DIVIDE, 0, m, &cBinop_n2lp21Mj_sendMessage);
}

void Heavy_Echomatica::cCast_kCYcJhvM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_aeIlBEyk_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_n2lp21Mj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nSB9vnlg, HV_BINOP_MULTIPLY, 1, m, &cBinop_nSB9vnlg_sendMessage);
}

void Heavy_Echomatica::cBinop_nSB9vnlg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_NeKzjaER_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kmTizqCG_sendMessage);
}

void Heavy_Echomatica::cUnop_Ow9CYaXd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_VnLY9rkb_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cUnop_FVsRvqNv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_yW00KrC6_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_K6iTOdnn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_0iixnGqG_sendMessage);
}

void Heavy_Echomatica::cBinop_0iixnGqG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nSB9vnlg, HV_BINOP_MULTIPLY, 0, m, &cBinop_nSB9vnlg_sendMessage);
}

void Heavy_Echomatica::cBinop_JBgvHcVy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_9YxeZ4Uu_sendMessage);
}

void Heavy_Echomatica::cBinop_9YxeZ4Uu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YhziNGfl_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_RqeO6CWE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LAF80qLO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_2qrhtzIj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RP8CqhOG, HV_BINOP_MULTIPLY, 1, m, &cBinop_RP8CqhOG_sendMessage);
}

void Heavy_Echomatica::cBinop_RP8CqhOG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NCtkenzr, HV_BINOP_ADD, 0, m, &cBinop_NCtkenzr_sendMessage);
}

void Heavy_Echomatica::cBinop_w2UsL3E2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NCtkenzr, HV_BINOP_ADD, 1, m, &cBinop_NCtkenzr_sendMessage);
}

void Heavy_Echomatica::cCast_yiuHMHdh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_p0INKv83, HV_BINOP_MULTIPLY, 1, m, &cBinop_p0INKv83_sendMessage);
}

void Heavy_Echomatica::cCast_kLTV9ReP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_2qrhtzIj_sendMessage);
}

void Heavy_Echomatica::cCast_t7KQqUZR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_w2UsL3E2_sendMessage);
}

void Heavy_Echomatica::cBinop_p0INKv83_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VgweeodU, HV_BINOP_MULTIPLY, 1, m, &cBinop_VgweeodU_sendMessage);
}

void Heavy_Echomatica::cBinop_NCtkenzr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZvJ7omDG, HV_BINOP_ADD, 0, m, &cBinop_ZvJ7omDG_sendMessage);
}

void Heavy_Echomatica::cBinop_ZvJ7omDG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_p0INKv83, HV_BINOP_MULTIPLY, 0, m, &cBinop_p0INKv83_sendMessage);
}

void Heavy_Echomatica::cBinop_sfkyKKWp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FaPBNNgq, HV_BINOP_ADD, 1, m, &cBinop_FaPBNNgq_sendMessage);
}

void Heavy_Echomatica::cBinop_lSG6LU78_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8Mv8j5JT, HV_BINOP_MULTIPLY, 1, m, &cBinop_8Mv8j5JT_sendMessage);
}

void Heavy_Echomatica::cBinop_8Mv8j5JT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FaPBNNgq, HV_BINOP_ADD, 0, m, &cBinop_FaPBNNgq_sendMessage);
}

void Heavy_Echomatica::cCast_8LMGpofg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_ZKJubaqL_sendMessage);
}

void Heavy_Echomatica::cCast_Zlejtl8q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_lSG6LU78_sendMessage);
}

void Heavy_Echomatica::cCast_GYTFziKT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_sfkyKKWp_sendMessage);
}

void Heavy_Echomatica::cBinop_feFWscHF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jeIELv2e, HV_BINOP_MULTIPLY, 1, m, &cBinop_jeIELv2e_sendMessage);
}

void Heavy_Echomatica::cBinop_FaPBNNgq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_feFWscHF, HV_BINOP_MULTIPLY, 0, m, &cBinop_feFWscHF_sendMessage);
}

void Heavy_Echomatica::cBinop_ZKJubaqL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_feFWscHF, HV_BINOP_MULTIPLY, 1, m, &cBinop_feFWscHF_sendMessage);
}

void Heavy_Echomatica::cBinop_PuYG6VWx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WcQt9ssQ, HV_BINOP_MULTIPLY, 1, m, &cBinop_WcQt9ssQ_sendMessage);
}

void Heavy_Echomatica::cBinop_WcQt9ssQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JjxUskFn, HV_BINOP_ADD, 0, m, &cBinop_JjxUskFn_sendMessage);
}

void Heavy_Echomatica::cBinop_JjxUskFn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WJcgD34E, HV_BINOP_SUBTRACT, 0, m, &cBinop_WJcgD34E_sendMessage);
}

void Heavy_Echomatica::cBinop_jfDD1NkJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JjxUskFn, HV_BINOP_ADD, 1, m, &cBinop_JjxUskFn_sendMessage);
}

void Heavy_Echomatica::cBinop_WJcgD34E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jllGCEte, HV_BINOP_MULTIPLY, 0, m, &cBinop_jllGCEte_sendMessage);
}

void Heavy_Echomatica::cCast_Jk0ctTa2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_jfDD1NkJ_sendMessage);
}

void Heavy_Echomatica::cCast_TxRtrjRO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_PuYG6VWx_sendMessage);
}

void Heavy_Echomatica::cCast_e68CopQI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jllGCEte, HV_BINOP_MULTIPLY, 1, m, &cBinop_jllGCEte_sendMessage);
}

void Heavy_Echomatica::cBinop_jllGCEte_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VK5MvWtJ, HV_BINOP_MULTIPLY, 1, m, &cBinop_VK5MvWtJ_sendMessage);
}

void Heavy_Echomatica::cBinop_xlQjOzFZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4Jbazckn, HV_BINOP_ADD, 1, m, &cBinop_4Jbazckn_sendMessage);
}

void Heavy_Echomatica::cBinop_4Jbazckn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_YctkFznO_sendMessage);
}

void Heavy_Echomatica::cBinop_K3NHtyMg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_NIspsnTI_sendMessage);
}

void Heavy_Echomatica::cBinop_CaivyIqV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4Jbazckn, HV_BINOP_ADD, 0, m, &cBinop_4Jbazckn_sendMessage);
}

void Heavy_Echomatica::cCast_0FiDgWln_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_K3NHtyMg_sendMessage);
}

void Heavy_Echomatica::cCast_O797OQfw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_xlQjOzFZ_sendMessage);
}

void Heavy_Echomatica::cBinop_YctkFznO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mh3Gi1sz, HV_BINOP_MULTIPLY, 1, m, &cBinop_mh3Gi1sz_sendMessage);
}

void Heavy_Echomatica::cBinop_NIspsnTI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CaivyIqV, HV_BINOP_MULTIPLY, 1, m, &cBinop_CaivyIqV_sendMessage);
}

void Heavy_Echomatica::cBinop_lN6FjCbe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_mqaB1osG_sendMessage);
}

void Heavy_Echomatica::cBinop_zIAGmOBo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6ltierWm, HV_BINOP_ADD, 0, m, &cBinop_6ltierWm_sendMessage);
}

void Heavy_Echomatica::cBinop_6ltierWm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_N3VA529d, HV_BINOP_SUBTRACT, 0, m, &cBinop_N3VA529d_sendMessage);
}

void Heavy_Echomatica::cBinop_7QQckf6T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6ltierWm, HV_BINOP_ADD, 1, m, &cBinop_6ltierWm_sendMessage);
}

void Heavy_Echomatica::cCast_p1tHxOjh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_7QQckf6T_sendMessage);
}

void Heavy_Echomatica::cCast_JszWcENq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_lN6FjCbe_sendMessage);
}

void Heavy_Echomatica::cBinop_N3VA529d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fLjmB61l, HV_BINOP_MULTIPLY, 1, m, &cBinop_fLjmB61l_sendMessage);
}

void Heavy_Echomatica::cBinop_mqaB1osG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zIAGmOBo, HV_BINOP_MULTIPLY, 1, m, &cBinop_zIAGmOBo_sendMessage);
}

void Heavy_Echomatica::cBinop_v1inZafK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, -24.0f, 0, m, &cBinop_7jFdxiQX_sendMessage);
}

void Heavy_Echomatica::cBinop_7jFdxiQX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_IBsDt5xd_sendMessage);
}

void Heavy_Echomatica::cBinop_IvdPOpsi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_m7XcL5Ng_sendMessage);
}

void Heavy_Echomatica::cBinop_iq4K6DH2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PbbH28Mg, HV_BINOP_ADD, 0, m, &cBinop_PbbH28Mg_sendMessage);
}

void Heavy_Echomatica::cBinop_PbbH28Mg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KPUrkzjM, HV_BINOP_ADD, 0, m, &cBinop_KPUrkzjM_sendMessage);
}

void Heavy_Echomatica::cBinop_Ji7GmWoI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PbbH28Mg, HV_BINOP_ADD, 1, m, &cBinop_PbbH28Mg_sendMessage);
}

void Heavy_Echomatica::cCast_5SRiiTie_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_IvdPOpsi_sendMessage);
}

void Heavy_Echomatica::cCast_ZZdvoNiX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Ji7GmWoI_sendMessage);
}

void Heavy_Echomatica::cBinop_KPUrkzjM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RqeO6CWE, 1, m, &cVar_RqeO6CWE_sendMessage);
}

void Heavy_Echomatica::cBinop_m7XcL5Ng_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iq4K6DH2, HV_BINOP_MULTIPLY, 1, m, &cBinop_iq4K6DH2_sendMessage);
}

void Heavy_Echomatica::cVar_dd7mVqIj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_M34G7NFG_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_K6iTOdnn_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_etc4ZUlN_sendMessage);
}

void Heavy_Echomatica::cVar_KmVcA5qm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_JBgvHcVy_sendMessage);
}

void Heavy_Echomatica::cVar_2MvuQssh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 24.0f, 0, m, &cBinop_v1inZafK_sendMessage);
}

void Heavy_Echomatica::cUnop_29dYahV7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_zr2HdGrS_sendMessage);
}

void Heavy_Echomatica::cCast_NeKzjaER_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_Ow9CYaXd_sendMessage);
}

void Heavy_Echomatica::cCast_kmTizqCG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_FVsRvqNv_sendMessage);
}

void Heavy_Echomatica::cSend_VnLY9rkb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_HyrZstLq_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_yW00KrC6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ZuYfBeyb_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_YlprDw61_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cMsg_YhziNGfl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_1Sidsump_sendMessage);
}

void Heavy_Echomatica::cBinop_1Sidsump_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Sp4VfFuM, HV_BINOP_MULTIPLY, 1, m, &cBinop_Sp4VfFuM_sendMessage);
}

void Heavy_Echomatica::cBinop_Sp4VfFuM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_bcu8wfLO_sendMessage);
}

void Heavy_Echomatica::cBinop_bcu8wfLO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GOAB8ko6_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_vDElYHOR_sendMessage);
}

void Heavy_Echomatica::cMsg_LAF80qLO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_mWU2FrHx_sendMessage);
}

void Heavy_Echomatica::cBinop_mWU2FrHx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Gx4ooxin_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_aDUxJXyx_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dTzPmzA9_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_StKMDvrs_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_keXf0Roq_sendMessage);
}

void Heavy_Echomatica::cBinop_VgweeodU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5j1wvNI3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_jeIELv2e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qxonh7gh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_VK5MvWtJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_i4qlPVio_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_mh3Gi1sz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oiGkNS0Z_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_fLjmB61l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_aOlvuVR1_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_PcvOJrfD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_dd7mVqIj, 0, m, &cVar_dd7mVqIj_sendMessage);
}

void Heavy_Echomatica::cCast_3KPjA7lD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_KmVcA5qm, 1, m, &cVar_KmVcA5qm_sendMessage);
}

void Heavy_Echomatica::cCast_M34G7NFG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_KmVcA5qm, 0, m, &cVar_KmVcA5qm_sendMessage);
}

void Heavy_Echomatica::cCast_etc4ZUlN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RqeO6CWE, 0, m, &cVar_RqeO6CWE_sendMessage);
}

void Heavy_Echomatica::cSend_RVfqw1Bz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_i00olHgB_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_IBsDt5xd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_U0SM8R3I_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_P7s2SRhe_sendMessage);
}

void Heavy_Echomatica::cCast_P7s2SRhe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_egpkOQiU_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_U0SM8R3I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mVOxJAwF, HV_BINOP_POW, 1, m, &cBinop_mVOxJAwF_sendMessage);
}

void Heavy_Echomatica::cMsg_egpkOQiU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_mVOxJAwF, HV_BINOP_POW, 0, m, &cBinop_mVOxJAwF_sendMessage);
}

void Heavy_Echomatica::cBinop_mVOxJAwF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3Z4UB1cL_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xoCxXfqb_sendMessage);
}

void Heavy_Echomatica::cCast_pzsRqHpC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_dd7mVqIj, 0, m, &cVar_dd7mVqIj_sendMessage);
}

void Heavy_Echomatica::cCast_jv7mgy90_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_2MvuQssh, 0, m, &cVar_2MvuQssh_sendMessage);
}

void Heavy_Echomatica::cCast_K1C0ZOrl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_dd7mVqIj, 0, m, &cVar_dd7mVqIj_sendMessage);
}

void Heavy_Echomatica::cCast_sgXBvIdN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_2MvuQssh, 0, m, &cVar_2MvuQssh_sendMessage);
}

void Heavy_Echomatica::cBinop_zr2HdGrS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cH23uHh7, HV_BINOP_MULTIPLY, 1, m, &cBinop_cH23uHh7_sendMessage);
}

void Heavy_Echomatica::cBinop_cH23uHh7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_iDpeZ9P0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_GOAB8ko6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_YlprDw61_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_vDElYHOR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cH23uHh7, HV_BINOP_MULTIPLY, 0, m, &cBinop_cH23uHh7_sendMessage);
}

void Heavy_Echomatica::cCast_keXf0Roq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VgweeodU, HV_BINOP_MULTIPLY, 0, m, &cBinop_VgweeodU_sendMessage);
}

void Heavy_Echomatica::cCast_StKMDvrs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jeIELv2e, HV_BINOP_MULTIPLY, 0, m, &cBinop_jeIELv2e_sendMessage);
}

void Heavy_Echomatica::cCast_dTzPmzA9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VK5MvWtJ, HV_BINOP_MULTIPLY, 0, m, &cBinop_VK5MvWtJ_sendMessage);
}

void Heavy_Echomatica::cCast_aDUxJXyx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mh3Gi1sz, HV_BINOP_MULTIPLY, 0, m, &cBinop_mh3Gi1sz_sendMessage);
}

void Heavy_Echomatica::cCast_Gx4ooxin_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fLjmB61l, HV_BINOP_MULTIPLY, 0, m, &cBinop_fLjmB61l_sendMessage);
}

void Heavy_Echomatica::cCast_3Z4UB1cL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_RVfqw1Bz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_xoCxXfqb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SQRT, m, &cUnop_29dYahV7_sendMessage);
}

void Heavy_Echomatica::cSend_iDpeZ9P0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_HgKjzGED_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_Wr3hvbeB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_ucNO21NS_sendMessage);
}

void Heavy_Echomatica::cBinop_ucNO21NS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_iP2NbhN7_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_hH1YBBnF_sendMessage);
}

void Heavy_Echomatica::cVar_w2VDKDS4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_UREdhOAS_sendMessage);
}

void Heavy_Echomatica::cMsg_R9XjSr6F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_EsqdbCJ8_sendMessage);
}

void Heavy_Echomatica::cSystem_EsqdbCJ8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZRDUvRMI, HV_BINOP_DIVIDE, 1, m, &cBinop_ZRDUvRMI_sendMessage);
}

void Heavy_Echomatica::cBinop_iP2NbhN7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_4atMaQ0B_sendMessage);
}

void Heavy_Echomatica::cBinop_4atMaQ0B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_eqjxVRBQ, m);
}

void Heavy_Echomatica::cMsg_QWHK4Sfe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_9OpveHPG_sendMessage);
}

void Heavy_Echomatica::cBinop_9OpveHPG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_Wr3hvbeB_sendMessage);
}

void Heavy_Echomatica::cBinop_hH1YBBnF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_KPFyzgAp, m);
}

void Heavy_Echomatica::cBinop_UREdhOAS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_fSJWS5g6_sendMessage);
}

void Heavy_Echomatica::cBinop_fSJWS5g6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZRDUvRMI, HV_BINOP_DIVIDE, 0, m, &cBinop_ZRDUvRMI_sendMessage);
}

void Heavy_Echomatica::cBinop_ZRDUvRMI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QWHK4Sfe_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_9fUrzTcA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CSmbnGpZ, HV_BINOP_MULTIPLY, 0, m, &cBinop_CSmbnGpZ_sendMessage);
}

void Heavy_Echomatica::cMsg_GxntK4rQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_jztW66Ta_sendMessage);
}

void Heavy_Echomatica::cSystem_jztW66Ta_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oqPo23ND_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_CSmbnGpZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_Wd1Nnfl2_sendMessage);
}

void Heavy_Echomatica::cBinop_0SuMf3hh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CSmbnGpZ, HV_BINOP_MULTIPLY, 1, m, &cBinop_CSmbnGpZ_sendMessage);
}

void Heavy_Echomatica::cMsg_oqPo23ND_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_0SuMf3hh_sendMessage);
}

void Heavy_Echomatica::cBinop_Wd1Nnfl2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_T5XxnYfb_sendMessage);
}

void Heavy_Echomatica::cBinop_T5XxnYfb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_JEl7ReUX_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_5bU92VXa, m);
}

void Heavy_Echomatica::cBinop_JEl7ReUX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_WxC5Oq4P, m);
}

void Heavy_Echomatica::cSend_j2dzGwFY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_zm0LLuqu_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_S0jxCycC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_K3Jf9JG0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_VetFbh6L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_9q8kXvT9_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_rhgFRJgZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ukoEqrSM_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_Q4u21fsk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_pMwOXpoP_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_HqIk9xJm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_XnTXfTz5_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_vhqkvhw7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_l4aMekVd_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_8FudXKxN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_X2UxslDK_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_93MecMAS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ZTQZMSjb_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_tEgmWlob_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Q9h9tBVA_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_5uV6RM55_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_d2fFOF7j_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_2ZCdUNvi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_vze8RRHQ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_9deYyYYF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_wwfBYgmm_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_gmTD21v6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_UbrvWeU0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_QcdGfkRB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_7QZOM1ku_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_ZMLgf22q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_pr633vd3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_uVLSqk6x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_CH9lPWxo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_qLLC35ou_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Px7XBNtl_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_uY2qlAMx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Np7hbJXm_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_oza6r9SG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_iMDAhn5i_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_FquZ6npn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_fCLQKLKF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_rIpPM2VQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_kaTVxUTG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_ro7sTJR2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_23Jz0U3C_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_jPO3tvMg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_utKWDc0P_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_DlZ2CLmU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IAPPH85E_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_D037ItZX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_kKlEDIzj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_5xl8iCTZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_mdWSSa9T_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_Tzdr3NIb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_pq83DsvP_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_CIGOjsXT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.01f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7587Nfi8, 0, m, &cSlice_7587Nfi8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UmM9t7rB, 0, m, &cSlice_UmM9t7rB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YGCx3TOi, 0, m, &cSlice_YGCx3TOi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kn6J7OWc, 0, m, &cSlice_kn6J7OWc_sendMessage);
}

void Heavy_Echomatica::cCast_kdzQgxs6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CIGOjsXT_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_oGucztXD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_htg6Em8B_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_htg6Em8B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.2f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7587Nfi8, 0, m, &cSlice_7587Nfi8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UmM9t7rB, 0, m, &cSlice_UmM9t7rB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YGCx3TOi, 0, m, &cSlice_YGCx3TOi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kn6J7OWc, 0, m, &cSlice_kn6J7OWc_sendMessage);
}

void Heavy_Echomatica::cMsg_SFF9kcCp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CKmyfuvg, HV_BINOP_MULTIPLY, 1, m, &cBinop_CKmyfuvg_sendMessage);
}

void Heavy_Echomatica::cBinop_CKmyfuvg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_4fdnWAUl_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_5UuoWY6Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_Z7jJnXCG, 0, m, &cVar_Z7jJnXCG_sendMessage);
}

void Heavy_Echomatica::cMsg_Pkciab0j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_07NPCjrt, 1, m, &cIf_07NPCjrt_sendMessage);
}

void Heavy_Echomatica::cMsg_QzbGhxql_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_07NPCjrt, 1, m, &cIf_07NPCjrt_sendMessage);
}

void Heavy_Echomatica::cSend_4fdnWAUl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jJMhnZFt_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_L6hUBge7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_GK8JEe6B, 0, m, &cPack_GK8JEe6B_sendMessage);
}

void Heavy_Echomatica::cBinop_SUTQvx6K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_IxQULMqR, 0, m, &cPack_IxQULMqR_sendMessage);
}

void Heavy_Echomatica::cBinop_rMywTRQ1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_RQwGIdgn, 0, m, &cPack_RQwGIdgn_sendMessage);
}

void Heavy_Echomatica::cBinop_wflicF51_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_E26TM1je, 0, m, &cPack_E26TM1je_sendMessage);
}

void Heavy_Echomatica::cBinop_lnenmss4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_S5O9Cbbv, 0, m, &cPack_S5O9Cbbv_sendMessage);
}

void Heavy_Echomatica::cBinop_hL447o86_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_REANWtMk, 0, m, &cPack_REANWtMk_sendMessage);
}

void Heavy_Echomatica::cCast_FPmnNDXZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rrmdjfnt, 0, m, &cVar_rrmdjfnt_sendMessage);
}

void Heavy_Echomatica::cCast_s8R03Wwv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_L6hUBge7, HV_BINOP_MULTIPLY, 1, m, &cBinop_L6hUBge7_sendMessage);
}

void Heavy_Echomatica::cCast_KbwGaN3a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hL447o86, HV_BINOP_MULTIPLY, 1, m, &cBinop_hL447o86_sendMessage);
}

void Heavy_Echomatica::cCast_WAmk2v0W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_oX2Jn6vU, 0, m, &cVar_oX2Jn6vU_sendMessage);
}

void Heavy_Echomatica::cCast_n4FWWcQU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lnenmss4, HV_BINOP_MULTIPLY, 1, m, &cBinop_lnenmss4_sendMessage);
}

void Heavy_Echomatica::cCast_6Y3Uidxs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_EacJ840L, 0, m, &cVar_EacJ840L_sendMessage);
}

void Heavy_Echomatica::cCast_EDhrEbDl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wflicF51, HV_BINOP_MULTIPLY, 1, m, &cBinop_wflicF51_sendMessage);
}

void Heavy_Echomatica::cCast_CEzvBjtp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tGSJjfCP, 0, m, &cVar_tGSJjfCP_sendMessage);
}

void Heavy_Echomatica::cCast_Cphv5kJ7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rMywTRQ1, HV_BINOP_MULTIPLY, 1, m, &cBinop_rMywTRQ1_sendMessage);
}

void Heavy_Echomatica::cCast_qKhxoZzN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RODvJVvV, 0, m, &cVar_RODvJVvV_sendMessage);
}

void Heavy_Echomatica::cCast_hVZGQzHP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Dis4Ez7m, 0, m, &cVar_Dis4Ez7m_sendMessage);
}

void Heavy_Echomatica::cCast_Rg8pkMPw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SUTQvx6K, HV_BINOP_MULTIPLY, 1, m, &cBinop_SUTQvx6K_sendMessage);
}

void Heavy_Echomatica::cBinop_8T5SdVgd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GluH0lMF_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_EUx12I8b_sendMessage);
}

void Heavy_Echomatica::cMsg_COcM1Dqj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.5f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_8T5SdVgd, HV_BINOP_MULTIPLY, 1, m, &cBinop_8T5SdVgd_sendMessage);
}

void Heavy_Echomatica::cCast_zjD5J8b9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_COcM1Dqj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_SCp63bxb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8T5SdVgd, HV_BINOP_MULTIPLY, 0, m, &cBinop_8T5SdVgd_sendMessage);
}

void Heavy_Echomatica::cMsg_of44hYR1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_6QYvwYEl, HV_BINOP_ADD, 1, m, &cBinop_6QYvwYEl_sendMessage);
}

void Heavy_Echomatica::cBinop_6QYvwYEl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_pZlKgrxD, 0, m, &cVar_pZlKgrxD_sendMessage);
}

void Heavy_Echomatica::cCast_EUx12I8b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6QYvwYEl, HV_BINOP_ADD, 0, m, &cBinop_6QYvwYEl_sendMessage);
}

void Heavy_Echomatica::cCast_GluH0lMF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_of44hYR1_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_MlY2T4Wz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5UuoWY6Z_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_A9R4KwB5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SFF9kcCp_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_dnqhdlbO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QzbGhxql_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_4knrSyDo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SFF9kcCp_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_jU4ZGJQj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Pkciab0j_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_6XXiHUYE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_pZlKgrxD, 0, m, &cVar_pZlKgrxD_sendMessage);
}

void Heavy_Echomatica::cCast_NL2cmROg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CKmyfuvg, HV_BINOP_MULTIPLY, 0, m, &cBinop_CKmyfuvg_sendMessage);
}

void Heavy_Echomatica::cReceive_oZ73pxAs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ouOmWygk_sendMessage(_c, 0, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sgXBvIdN_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_K1C0ZOrl_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ptd3JmEY, 0, m, &cVar_ptd3JmEY_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_8xw8FwYP, 0, m, &cVar_8xw8FwYP_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_jDBE6Jxe, 0, m, &cVar_jDBE6Jxe_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_POaGZcU4, 0, m, &cVar_POaGZcU4_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_vMlJ9ac0, 0, m, &cVar_vMlJ9ac0_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_DaO1kGBk, 0, m, &cVar_DaO1kGBk_sendMessage);
  cMsg_9mIYUtH5_sendMessage(_c, 0, m);
  cMsg_c0EBG9G1_sendMessage(_c, 0, m);
  cMsg_jwkRRURk_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_RsAVUZX9, 0, m, &cVar_RsAVUZX9_sendMessage);
  cMsg_5bEwzK1V_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_gCGleG8n, 0, m, &cVar_gCGleG8n_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XE1Wr5eO_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MU1m1vfI_sendMessage);
  cMsg_KvfPXbRb_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Mhdp64th, 0, m, &cVar_Mhdp64th_sendMessage);
  cMsg_OO9IyHmX_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_IrNalIXx, 0, m, &cVar_IrNalIXx_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_foK0AnAd_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lZYkMkdD_sendMessage);
  cMsg_0B0hRIJ2_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_bzAwelga, 0, m, &cVar_bzAwelga_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0pS3aTs6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hYtc9286_sendMessage);
  cMsg_VG8B4o7u_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_IahalyXv, 0, m, &cVar_IahalyXv_sendMessage);
  cMsg_E7Nptqpn_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_WNv9T3VD, 0, m, &cVar_WNv9T3VD_sendMessage);
  cMsg_1otI0PX0_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_HWpRhbfC, 0, m, &cVar_HWpRhbfC_sendMessage);
  cMsg_exuHCqOB_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_FYCUJCuW, 0, m, &cVar_FYCUJCuW_sendMessage);
  cMsg_7mSS4Hoh_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_uJl9k0Ps, 0, m, &cVar_uJl9k0Ps_sendMessage);
  cMsg_bxUrq81f_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Q4YDIarg, 0, m, &cVar_Q4YDIarg_sendMessage);
  cMsg_kEgYgf9N_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_VERq0I2m, 0, m, &cVar_VERq0I2m_sendMessage);
  cMsg_NHbP2IdX_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_JQtY6ER9, 0, m, &cVar_JQtY6ER9_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Zo7N6ie4, 0, m, &cVar_Zo7N6ie4_sendMessage);
  cMsg_WQbVOrek_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_hQeb2UTi, 0, m, &cVar_hQeb2UTi_sendMessage);
  cMsg_PxEWPigt_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_7xPhshow, 0, m, &cVar_7xPhshow_sendMessage);
  cMsg_3RQbdoIJ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_bnWtiS3X, 0, m, &cVar_bnWtiS3X_sendMessage);
  cMsg_pEdRNCWJ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_gVMUyC0B, 0, m, &cVar_gVMUyC0B_sendMessage);
  cMsg_BAfNxeRm_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_1z0bE0zV, 0, m, &cVar_1z0bE0zV_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_V3KTmCq9, 0, m, &cVar_V3KTmCq9_sendMessage);
  cMsg_dZ32vmTm_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_mvlPTaBG, 0, m, &cVar_mvlPTaBG_sendMessage);
  cMsg_1BJ8Ye0o_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_C7pPYkzV, 0, m, &cVar_C7pPYkzV_sendMessage);
  cMsg_yqkAIGL6_sendMessage(_c, 0, m);
  cMsg_R9XjSr6F_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_w2VDKDS4, 0, m, &cVar_w2VDKDS4_sendMessage);
  cMsg_GxntK4rQ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_9fUrzTcA, 0, m, &cVar_9fUrzTcA_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_nrLzDoXW, 0, m, &cVar_nrLzDoXW_sendMessage);
  cMsg_4gVceFhH_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_qn3gSFbs, 0, m, &cVar_qn3gSFbs_sendMessage);
  cMsg_s2Q130BF_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_6HvNBIFK, 0, m, &cVar_6HvNBIFK_sendMessage);
  cMsg_IZvjJ2FS_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_2gIvaMpq, 0, m, &cVar_2gIvaMpq_sendMessage);
  cMsg_xJqLIICZ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_kZb4VmIh, 0, m, &cVar_kZb4VmIh_sendMessage);
  cMsg_RQ6NUtJM_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_7TZkxf3E, 0, m, &cVar_7TZkxf3E_sendMessage);
  cMsg_5nZFw3eC_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_w8hFHDY2, 0, m, &cVar_w8hFHDY2_sendMessage);
  cMsg_xE0PnlUV_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_dw5wP3Tq, 0, m, &cVar_dw5wP3Tq_sendMessage);
  cMsg_ePeIJ6jb_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cReceive_f1XRI6hZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_lv7qpdT6_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_zm0LLuqu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Dis4Ez7m, 0, m, &cVar_Dis4Ez7m_sendMessage);
}

void Heavy_Echomatica::cReceive_K3Jf9JG0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RODvJVvV, 0, m, &cVar_RODvJVvV_sendMessage);
}

void Heavy_Echomatica::cReceive_9q8kXvT9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tGSJjfCP, 0, m, &cVar_tGSJjfCP_sendMessage);
}

void Heavy_Echomatica::cReceive_ukoEqrSM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_EacJ840L, 0, m, &cVar_EacJ840L_sendMessage);
}

void Heavy_Echomatica::cReceive_pMwOXpoP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_oX2Jn6vU, 0, m, &cVar_oX2Jn6vU_sendMessage);
}

void Heavy_Echomatica::cReceive_XnTXfTz5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rrmdjfnt, 0, m, &cVar_rrmdjfnt_sendMessage);
}

void Heavy_Echomatica::cReceive_l4aMekVd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_8voXXkjS, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_HgDp6R0l, 0, m, &cVar_HgDp6R0l_sendMessage);
}

void Heavy_Echomatica::cReceive_X2UxslDK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_FLqOFmlD, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_1PM0gW2A, 0, m, &cVar_1PM0gW2A_sendMessage);
}

void Heavy_Echomatica::cReceive_ZTQZMSjb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_go30dqRL, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_I7a2TvYK, 0, m, &cVar_I7a2TvYK_sendMessage);
}

void Heavy_Echomatica::cReceive_Q9h9tBVA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_7hLmsQcx, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_Qd1KQhKt, 0, m, &cVar_Qd1KQhKt_sendMessage);
}

void Heavy_Echomatica::cReceive_d2fFOF7j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_48aoyzsr, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_VyHJQwDH, 0, m, &cVar_VyHJQwDH_sendMessage);
}

void Heavy_Echomatica::cReceive_vze8RRHQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_3UTD2jLr, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_JbgUbf6m, 0, m, &cVar_JbgUbf6m_sendMessage);
}

void Heavy_Echomatica::cReceive_wwfBYgmm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_r14GQdpn, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_zuAWCmaa, 0, m, &cVar_zuAWCmaa_sendMessage);
}

void Heavy_Echomatica::cReceive_UbrvWeU0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_neUY0Sab, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_nrFh5S5J, 0, m, &cVar_nrFh5S5J_sendMessage);
}

void Heavy_Echomatica::cReceive_7QZOM1ku_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_9Md4eUG1, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_npXYJIYY, 0, m, &cVar_npXYJIYY_sendMessage);
}

void Heavy_Echomatica::cReceive_pr633vd3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_ALB7Iop3, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_fjesncdK, 0, m, &cVar_fjesncdK_sendMessage);
}

void Heavy_Echomatica::cReceive_CH9lPWxo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_4g20Qzzm, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_LmdglMEu, 0, m, &cVar_LmdglMEu_sendMessage);
}

void Heavy_Echomatica::cReceive_Px7XBNtl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_euPYC2le, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_Bjcdacc3, 0, m, &cVar_Bjcdacc3_sendMessage);
}

void Heavy_Echomatica::cReceive_jJMhnZFt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Rg8pkMPw_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hVZGQzHP_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Cphv5kJ7_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qKhxoZzN_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_EDhrEbDl_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CEzvBjtp_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_n4FWWcQU_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6Y3Uidxs_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_KbwGaN3a_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WAmk2v0W_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_s8R03Wwv_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FPmnNDXZ_sendMessage);
}

void Heavy_Echomatica::cReceive_Np7hbJXm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_6p7wyINF_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_iMDAhn5i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HWpRhbfC, 0, m, &cVar_HWpRhbfC_sendMessage);
}

void Heavy_Echomatica::cReceive_fCLQKLKF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FYCUJCuW, 0, m, &cVar_FYCUJCuW_sendMessage);
}

void Heavy_Echomatica::cReceive_kaTVxUTG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uJl9k0Ps, 0, m, &cVar_uJl9k0Ps_sendMessage);
}

void Heavy_Echomatica::cReceive_23Jz0U3C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Q4YDIarg, 0, m, &cVar_Q4YDIarg_sendMessage);
}

void Heavy_Echomatica::cReceive_utKWDc0P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VERq0I2m, 0, m, &cVar_VERq0I2m_sendMessage);
}

void Heavy_Echomatica::cReceive_IAPPH85E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JQtY6ER9, 0, m, &cVar_JQtY6ER9_sendMessage);
}

void Heavy_Echomatica::cReceive_kKlEDIzj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_8QQTZQz8, m);
}

void Heavy_Echomatica::cReceive_mdWSSa9T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_hQeb2UTi, 0, m, &cVar_hQeb2UTi_sendMessage);
}

void Heavy_Echomatica::cReceive_pq83DsvP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Zo7N6ie4, 0, m, &cVar_Zo7N6ie4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sYp8cjOT_sendMessage);
}

void Heavy_Echomatica::cReceive_UjJx1zbh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_GWk9trRD, 0, m, &cVar_GWk9trRD_sendMessage);
}

void Heavy_Echomatica::cReceive_ywLxePJK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_JCz3ps89_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_IDklrUw3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_KofcXw23_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UEIOYp8H_sendMessage);
}

void Heavy_Echomatica::cReceive_hwooaTKh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Kkw0uhpc_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sp1jymwu_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wdlugbKv_sendMessage);
}

void Heavy_Echomatica::cReceive_HjjtfBu0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_8qH4VSaw, 0, m, &cPack_8qH4VSaw_sendMessage);
}

void Heavy_Echomatica::cReceive_PmNrq0tN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_dl6kXYvn, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_LOrnp8x2, m);
}

void Heavy_Echomatica::cReceive_poautT9y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_wyWXTql7, 0, m, &cPack_wyWXTql7_sendMessage);
}

void Heavy_Echomatica::cReceive_rLQy82mX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_va1RR3Rd_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_kCIvgeDD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_utxM8W9s, 0, m, &cPack_utxM8W9s_sendMessage);
}

void Heavy_Echomatica::cReceive_3OYa9spT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1FAU0yKh_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KWKm4T6n_sendMessage);
}

void Heavy_Echomatica::cReceive_ZTFPKtPz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qOLI0tjL_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_cIICWGH0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_A37klwWh_sendMessage);
}

void Heavy_Echomatica::cReceive_zFnNTKC3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LNu0gEsO_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WZBYvA0x_sendMessage);
}

void Heavy_Echomatica::cReceive_Xd3llCT3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_miAAScKA_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lzQFQ0ck_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sZbthUva_sendMessage);
}

void Heavy_Echomatica::cReceive_HyrZstLq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Sp4VfFuM, HV_BINOP_MULTIPLY, 0, m, &cBinop_Sp4VfFuM_sendMessage);
}

void Heavy_Echomatica::cReceive_ZuYfBeyb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RP8CqhOG, HV_BINOP_MULTIPLY, 0, m, &cBinop_RP8CqhOG_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_8Mv8j5JT, HV_BINOP_MULTIPLY, 0, m, &cBinop_8Mv8j5JT_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_WcQt9ssQ, HV_BINOP_MULTIPLY, 0, m, &cBinop_WcQt9ssQ_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CaivyIqV, HV_BINOP_MULTIPLY, 0, m, &cBinop_CaivyIqV_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_zIAGmOBo, HV_BINOP_MULTIPLY, 0, m, &cBinop_zIAGmOBo_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_iq4K6DH2, HV_BINOP_MULTIPLY, 0, m, &cBinop_iq4K6DH2_sendMessage);
}

void Heavy_Echomatica::cReceive_i00olHgB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yiuHMHdh_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_t7KQqUZR_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kLTV9ReP_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_8LMGpofg_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GYTFziKT_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Zlejtl8q_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_e68CopQI_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Jk0ctTa2_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TxRtrjRO_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_O797OQfw_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_0FiDgWln_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_p1tHxOjh_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JszWcENq_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZZdvoNiX_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5SRiiTie_sendMessage);
}

void Heavy_Echomatica::cReceive_HgKjzGED_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZvJ7omDG, HV_BINOP_ADD, 1, m, &cBinop_ZvJ7omDG_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_WJcgD34E, HV_BINOP_SUBTRACT, 1, m, &cBinop_WJcgD34E_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_N3VA529d, HV_BINOP_SUBTRACT, 1, m, &cBinop_N3VA529d_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_KPUrkzjM, HV_BINOP_ADD, 1, m, &cBinop_KPUrkzjM_sendMessage);
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
    sEnv_process(this, &sEnv_3DelVEa7, VIf(I0), &sEnv_3DelVEa7_sendMessage);
    __hv_line_f(&sLine_WHWiMlis, VOf(Bf0));
    __hv_mul_f(VIf(I0), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_LuZtKaMn, VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_gHlgcw6b, VOf(Bf0));
    __hv_rpole_f(&sRPole_kSwEj9j6, VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_kAT5wN2i, VOf(Bf1));
    __hv_rpole_f(&sRPole_CqFYWyjA, VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_f8Y5MZFr, VIf(Bf1), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_FCTHvr2Y, VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    sEnv_process(this, &sEnv_fghOrcNy, VIf(I1), &sEnv_fghOrcNy_sendMessage);
    __hv_line_f(&sLine_bp77BR8O, VOf(Bf0));
    __hv_mul_f(VIf(I1), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf2), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_b6dxxPTC, VOf(Bf2));
    __hv_mul_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_AOtyjB8S, VOf(Bf0));
    __hv_rpole_f(&sRPole_ZSTPKs1w, VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_YaFNmRty, VOf(Bf2));
    __hv_rpole_f(&sRPole_TMqzkmGp, VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_XlDGWH5d, VIf(Bf2), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_yTUpjMvw, VOf(Bf2));
    __hv_mul_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf1), VIf(Bf2), VOf(Bf0));
    __hv_varread_f(&sVarf_GsV0QAJw, VOf(Bf3));
    __hv_varread_f(&sVarf_AxWKDMY3, VOf(Bf4));
    __hv_varread_f(&sVarf_p4S1RKGX, VOf(Bf5));
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_YTtI45p4, VOf(Bf4));
    __hv_add_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_XWAAdNDJ, VOf(Bf5));
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_4BmtV5AZ, VOf(Bf4));
    __hv_add_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_kspn1A75, VOf(Bf3));
    __hv_rpole_f(&sRPole_tamOTK8F, VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_aP1SlzXz, VIf(Bf3), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_2nABxhho, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_Xm31b88M, VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_wlVsmoJB, VOf(Bf3));
    __hv_rpole_f(&sRPole_UA5QHEsm, VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f);
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_AdrTeNVb, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_zRHdJkfY, VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    sEnv_process(this, &sEnv_Z8vtW9Cd, VIf(Bf5), &sEnv_Z8vtW9Cd_sendMessage);
    __hv_line_f(&sLine_6W3ljcNl, VOf(Bf6));
    __hv_mul_f(VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf5), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_min_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf6), -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f);
    __hv_max_f(VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf6), VOf(Bf5));
    __hv_var_k_f(VOf(Bf7), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_add_f(VIf(Bf5), VIf(Bf7), VOf(Bf8));
    __hv_var_k_f(VOf(Bf9), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_fma_f(VIf(Bf5), VIf(Bf9), VIf(Bf7), VOf(Bf7));
    __hv_div_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_mul_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf6), 0.79f, 0.79f, 0.79f, 0.79f, 0.79f, 0.79f, 0.79f, 0.79f);
    __hv_mul_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_line_f(&sLine_pyaWV10n, VOf(Bf7));
    __hv_mul_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf3), VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_5bU92VXa, VOf(Bf0));
    __hv_mul_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_WxC5Oq4P, VOf(Bf7));
    __hv_rpole_f(&sRPole_rHZyJBoh, VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_KPFyzgAp, VOf(Bf0));
    __hv_rpole_f(&sRPole_hYkCwfSC, VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_9T1U4Wqa, VIf(Bf0), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_eqjxVRBQ, VOf(Bf0));
    __hv_mul_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_tabwrite_f(&sTabwrite_pWi0XPhH, VIf(Bf0));
    __hv_phasor_k_f(&sPhasor_3RdkqynE, VOf(Bf0));
    __hv_var_k_f(VOf(Bf7), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_abs_f(VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf0), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf7), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_mul_f(VIf(Bf7), VIf(Bf7), VOf(Bf0));
    __hv_mul_f(VIf(Bf7), VIf(Bf0), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf3), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf6), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf4), VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf0), VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_NnnTyyWG, VOf(Bf3));
    __hv_phasor_k_f(&sPhasor_hMA8xOnF, VOf(Bf0));
    __hv_var_k_f(VOf(Bf6), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_abs_f(VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf0), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf6), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf6), VOf(Bf0));
    __hv_mul_f(VIf(Bf6), VIf(Bf0), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf8), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf9), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf4), VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf0), VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_zbO7yScU, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf7), VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_varwrite_f(&sVarf_w1Ob9suW, VIf(Bf8));
    __hv_line_f(&sLine_k4K27cEv, VOf(Bf8));
    __hv_varread_f(&sVarf_w1Ob9suW, VOf(Bf3));
    __hv_add_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_tabhead_f(&sTabhead_MOmyfLfD, VOf(Bf8));
    __hv_var_k_f_r(VOf(Bf7), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_aV59czHT, VOf(Bf8));
    __hv_mul_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_lfghYPtM, VOf(Bf3));
    __hv_min_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_zero_f(VOf(Bf8));
    __hv_max_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_floor_f(VIf(Bf8), VOf(Bf7));
    __hv_varread_f(&sVarf_CvoFMPqc, VOf(Bf3));
    __hv_zero_f(VOf(Bf6));
    __hv_lt_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_and_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_cast_fi(VIf(Bf6), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_cE6RZMsP, VIi(Bi1), VOf(Bf6));
    __hv_tabread_if(&sTabread_hAOWCBC6, VIi(Bi0), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf6));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf6), VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_r14GQdpn, VOf(Bf7));
    __hv_mul_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_varwrite_f(&sVarf_GsV0QAJw, VIf(Bf7));
    __hv_line_f(&sLine_PZbeGCYg, VOf(Bf7));
    __hv_varread_f(&sVarf_w1Ob9suW, VOf(Bf6));
    __hv_add_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_tabhead_f(&sTabhead_nVeWy0IP, VOf(Bf7));
    __hv_var_k_f_r(VOf(Bf8), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_E4Jr6u6T, VOf(Bf7));
    __hv_mul_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_KLBzpIun, VOf(Bf6));
    __hv_min_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_zero_f(VOf(Bf7));
    __hv_max_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_floor_f(VIf(Bf7), VOf(Bf8));
    __hv_varread_f(&sVarf_almC4a6A, VOf(Bf6));
    __hv_zero_f(VOf(Bf0));
    __hv_lt_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_and_f(VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_cast_fi(VIf(Bf0), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_VsbB4NUA, VIi(Bi1), VOf(Bf0));
    __hv_tabread_if(&sTabread_Fwj1F5bM, VIi(Bi0), VOf(Bf6));
    __hv_sub_f(VIf(Bf0), VIf(Bf6), VOf(Bf0));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf0), VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_line_f(&sLine_9Md4eUG1, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_varwrite_f(&sVarf_AxWKDMY3, VIf(Bf8));
    __hv_line_f(&sLine_dfuFSTjO, VOf(Bf8));
    __hv_varread_f(&sVarf_w1Ob9suW, VOf(Bf0));
    __hv_add_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_tabhead_f(&sTabhead_YSa0G98A, VOf(Bf8));
    __hv_var_k_f_r(VOf(Bf7), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_vP24XB18, VOf(Bf8));
    __hv_mul_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_ouZDTU7I, VOf(Bf0));
    __hv_min_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf8));
    __hv_max_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_floor_f(VIf(Bf8), VOf(Bf7));
    __hv_varread_f(&sVarf_HkiZQucd, VOf(Bf0));
    __hv_zero_f(VOf(Bf9));
    __hv_lt_f(VIf(Bf7), VIf(Bf9), VOf(Bf9));
    __hv_and_f(VIf(Bf0), VIf(Bf9), VOf(Bf9));
    __hv_add_f(VIf(Bf7), VIf(Bf9), VOf(Bf9));
    __hv_cast_fi(VIf(Bf9), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_DeeLKeGo, VIi(Bi1), VOf(Bf9));
    __hv_tabread_if(&sTabread_vt4UDgZy, VIi(Bi0), VOf(Bf0));
    __hv_sub_f(VIf(Bf9), VIf(Bf0), VOf(Bf9));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf9), VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_4g20Qzzm, VOf(Bf7));
    __hv_mul_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varwrite_f(&sVarf_p4S1RKGX, VIf(Bf7));
    __hv_line_f(&sLine_HLmPYKYh, VOf(Bf7));
    __hv_varread_f(&sVarf_w1Ob9suW, VOf(Bf9));
    __hv_add_f(VIf(Bf7), VIf(Bf9), VOf(Bf9));
    __hv_tabhead_f(&sTabhead_DUzeyGGc, VOf(Bf7));
    __hv_var_k_f_r(VOf(Bf8), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_XVSzm28c, VOf(Bf7));
    __hv_mul_f(VIf(Bf9), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_CKkRaHMa, VOf(Bf9));
    __hv_min_f(VIf(Bf7), VIf(Bf9), VOf(Bf9));
    __hv_zero_f(VOf(Bf7));
    __hv_max_f(VIf(Bf9), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_floor_f(VIf(Bf7), VOf(Bf8));
    __hv_varread_f(&sVarf_7hgLit6M, VOf(Bf9));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf9), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_FSAP6kZ4, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_Ov11Hed1, VIi(Bi0), VOf(Bf9));
    __hv_sub_f(VIf(Bf4), VIf(Bf9), VOf(Bf4));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf4), VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_line_f(&sLine_euPYC2le, VOf(Bf8));
    __hv_mul_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_varwrite_f(&sVarf_YTtI45p4, VIf(Bf8));
    __hv_line_f(&sLine_9MPg6KDI, VOf(Bf8));
    __hv_varread_f(&sVarf_w1Ob9suW, VOf(Bf4));
    __hv_add_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_tabhead_f(&sTabhead_XRcSEFtF, VOf(Bf8));
    __hv_var_k_f_r(VOf(Bf7), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_AF2CQNhx, VOf(Bf8));
    __hv_mul_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_2S5Dv1I5, VOf(Bf4));
    __hv_min_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_zero_f(VOf(Bf8));
    __hv_max_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_floor_f(VIf(Bf8), VOf(Bf7));
    __hv_varread_f(&sVarf_EZO94C1R, VOf(Bf4));
    __hv_zero_f(VOf(Bf5));
    __hv_lt_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_cast_fi(VIf(Bf5), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_QfYbyCWm, VIi(Bi1), VOf(Bf5));
    __hv_tabread_if(&sTabread_DStQDf6y, VIi(Bi0), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf5));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf5), VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_ALB7Iop3, VOf(Bf7));
    __hv_mul_f(VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_varwrite_f(&sVarf_XWAAdNDJ, VIf(Bf7));
    __hv_line_f(&sLine_l662I3fb, VOf(Bf7));
    __hv_varread_f(&sVarf_w1Ob9suW, VOf(Bf5));
    __hv_add_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_tabhead_f(&sTabhead_vPVkTgKa, VOf(Bf7));
    __hv_var_k_f_r(VOf(Bf8), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_L63bNF6x, VOf(Bf7));
    __hv_mul_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_JmiU9pPh, VOf(Bf5));
    __hv_min_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf7));
    __hv_max_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_floor_f(VIf(Bf7), VOf(Bf8));
    __hv_varread_f(&sVarf_XEXmq5zw, VOf(Bf5));
    __hv_zero_f(VOf(Bf10));
    __hv_lt_f(VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_and_f(VIf(Bf5), VIf(Bf10), VOf(Bf10));
    __hv_add_f(VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_cast_fi(VIf(Bf10), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_vHs9sxou, VIi(Bi1), VOf(Bf10));
    __hv_tabread_if(&sTabread_fDYeLJFC, VIi(Bi0), VOf(Bf5));
    __hv_sub_f(VIf(Bf10), VIf(Bf5), VOf(Bf10));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf10), VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_neUY0Sab, VOf(Bf8));
    __hv_mul_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_varwrite_f(&sVarf_4BmtV5AZ, VIf(Bf8));
    __hv_varread_f(&sVarf_dl6kXYvn, VOf(Bf8));
    __hv_mul_f(VIf(Bf2), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf2), 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f);
    __hv_line_f(&sLine_8voXXkjS, VOf(Bf10));
    __hv_line_f(&sLine_FLqOFmlD, VOf(Bf7));
    __hv_line_f(&sLine_go30dqRL, VOf(Bf11));
    __hv_line_f(&sLine_7hLmsQcx, VOf(Bf12));
    __hv_line_f(&sLine_48aoyzsr, VOf(Bf13));
    __hv_line_f(&sLine_3UTD2jLr, VOf(Bf14));
    __hv_mul_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf0), VIf(Bf13), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf4), VIf(Bf12), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf6), VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf5), VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf3), VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_biquad_k_f(&sBiquad_k_xGTHaZn6, VIf(Bf14), VOf(Bf10));
    __hv_varread_f(&sVarf_8QQTZQz8, VOf(Bf3));
    __hv_varread_f(&sVarf_3InXXHDf, VOf(Bf7));
    __hv_rpole_f(&sRPole_b4xGe2cg, VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_P4n4iMAV, VIf(Bf7), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_0npoSHBg, VOf(Bf7));
    __hv_mul_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_MkF6wEf0, VOf(Bf14));
    __hv_rpole_f(&sRPole_tPX6coFb, VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_x88HHBDF, VIf(Bf14), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_01Byy70G, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_YgSDlaCC, VOf(Bf7));
    __hv_rpole_f(&sRPole_0SlBNdOa, VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_gQnIRtbP, VIf(Bf7), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_h5rFgAXA, VOf(Bf7));
    __hv_mul_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_AdUexVat, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_jhSsyvMq, VOf(Bf7));
    __hv_rpole_f(&sRPole_ChzMbX6a, VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_9cbLFMO3, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_wBU6sQis, VOf(Bf7));
    __hv_rpole_f(&sRPole_LLQm2V1U, VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_TRvFmIqJ, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_54n1fzTo, VOf(Bf7));
    __hv_rpole_f(&sRPole_fiLtz5R4, VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf10), VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_GVxxrC5H, VOf(Bf3));
    __hv_rpole_f(&sRPole_PweodlGQ, VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_HxNYGXYd, VIf(Bf3), VOf(Bf10));
    __hv_mul_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_lSD51BFi, VOf(Bf3));
    __hv_mul_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_LPXAF7fR, VOf(Bf7));
    __hv_line_f(&sLine_Jbwla4vc, VOf(Bf10));
    __hv_line_f(&sLine_ScjZWXpG, VOf(Bf14));
    __hv_line_f(&sLine_HIQKc63w, VOf(Bf5));
    __hv_line_f(&sLine_WOG1vR2T, VOf(Bf11));
    __hv_biquad_f(&sBiquad_s_NP2Qb5Ot, VIf(Bf3), VIf(Bf7), VIf(Bf10), VIf(Bf14), VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf5), 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f);
    __hv_min_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf11), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_line_f(&sLine_B9ftAqW9, VOf(Bf5));
    __hv_mul_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_phasor_k_f(&sPhasor_bmXx8Yd0, VOf(Bf11));
    __hv_var_k_f(VOf(Bf14), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_abs_f(VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf11), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf14), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_mul_f(VIf(Bf14), VIf(Bf14), VOf(Bf11));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf10));
    __hv_mul_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf7), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf3), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf10), VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf11), VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf7), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_var_k_f(VOf(Bf11), 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f);
    __hv_fma_f(VIf(Bf14), VIf(Bf7), VIf(Bf11), VOf(Bf11));
    __hv_tabhead_f(&sTabhead_UryGlJup, VOf(Bf7));
    __hv_var_k_f_r(VOf(Bf14), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_wvr5LSp5, VOf(Bf7));
    __hv_mul_f(VIf(Bf11), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_axFWNTmj, VOf(Bf11));
    __hv_min_f(VIf(Bf7), VIf(Bf11), VOf(Bf11));
    __hv_zero_f(VOf(Bf7));
    __hv_max_f(VIf(Bf11), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_floor_f(VIf(Bf7), VOf(Bf14));
    __hv_varread_f(&sVarf_JF8XEfji, VOf(Bf11));
    __hv_zero_f(VOf(Bf3));
    __hv_lt_f(VIf(Bf14), VIf(Bf3), VOf(Bf3));
    __hv_and_f(VIf(Bf11), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf14), VIf(Bf3), VOf(Bf3));
    __hv_cast_fi(VIf(Bf3), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_vHVo9Bw1, VIi(Bi1), VOf(Bf3));
    __hv_tabread_if(&sTabread_et4PD4g0, VIi(Bi0), VOf(Bf11));
    __hv_sub_f(VIf(Bf3), VIf(Bf11), VOf(Bf3));
    __hv_sub_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf3), VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf14), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf11), VIf(Bf14), VIf(Bf5), VOf(Bf14));
    __hv_varread_f(&sVarf_IAPllr7m, VOf(Bf11));
    __hv_rpole_f(&sRPole_klsnOE7b, VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_CvZgUqsq, VIf(Bf11), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_Kmh8CRBe, VOf(Bf11));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_phasor_k_f(&sPhasor_D4H30uKg, VOf(Bf14));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf14), VIf(Bf3), VOf(Bf3));
    __hv_abs_f(VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf14), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf3), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf14), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf14));
    __hv_mul_f(VIf(Bf3), VIf(Bf14), VOf(Bf7));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf10), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf6), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf7), VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf14), VIf(Bf10), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf10), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_var_k_f(VOf(Bf14), 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f);
    __hv_fma_f(VIf(Bf3), VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_tabhead_f(&sTabhead_lMMuqXCX, VOf(Bf10));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf10), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_Abhedhb3, VOf(Bf10));
    __hv_mul_f(VIf(Bf14), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_8v2Zbkzd, VOf(Bf14));
    __hv_min_f(VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_zero_f(VOf(Bf10));
    __hv_max_f(VIf(Bf14), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf3), VIf(Bf10), VOf(Bf10));
    __hv_floor_f(VIf(Bf10), VOf(Bf3));
    __hv_varread_f(&sVarf_TaYsPA7L, VOf(Bf14));
    __hv_zero_f(VOf(Bf6));
    __hv_lt_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_and_f(VIf(Bf14), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_cast_fi(VIf(Bf6), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_bWzQLc2k, VIi(Bi1), VOf(Bf6));
    __hv_tabread_if(&sTabread_KRl6Hrst, VIi(Bi0), VOf(Bf14));
    __hv_sub_f(VIf(Bf6), VIf(Bf14), VOf(Bf6));
    __hv_sub_f(VIf(Bf10), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf6), VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf14), VIf(Bf3), VIf(Bf5), VOf(Bf3));
    __hv_varread_f(&sVarf_Eh2LIyA0, VOf(Bf14));
    __hv_rpole_f(&sRPole_PdnmQ7dl, VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_4sIol0jR, VIf(Bf14), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf14), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_le0f17wo, VOf(Bf14));
    __hv_mul_f(VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_dXFRcw0U, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_tabwrite_f(&sTabwrite_kFsZTNdM, VIf(Bf3));
    __hv_varread_f(&sVarf_sp1kCLay, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_tabwrite_f(&sTabwrite_HLzmrw3I, VIf(Bf3));
    __hv_fma_f(VIf(Bf8), VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_rd7t9gph, VOf(Bf2));
    __hv_rpole_f(&sRPole_Swsv3Zxn, VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_ys27hHnU, VIf(Bf2), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_2FLKH5Pn, VOf(Bf2));
    __hv_mul_f(VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf2), VIf(O1), VOf(O1));
    __hv_varread_f(&sVarf_LOrnp8x2, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f);
    __hv_fma_f(VIf(Bf2), VIf(Bf1), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_9uz8t2pm, VOf(Bf1));
    __hv_rpole_f(&sRPole_Re0NC44U, VIf(Bf11), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_id2QItjY, VIf(Bf1), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf1), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_85pZUEdS, VOf(Bf1));
    __hv_mul_f(VIf(Bf11), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf1), VIf(O0), VOf(O0));

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
