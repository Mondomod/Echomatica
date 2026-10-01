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
  numBytes += sBiquad_k_init(&sBiquad_k_jbV4vIAF, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  numBytes += sRPole_init(&sRPole_KlQ5mUT1);
  numBytes += sDel1_init(&sDel1_ITMZ5XlV);
  numBytes += sRPole_init(&sRPole_WCpQxTg5);
  numBytes += sDel1_init(&sDel1_bTCrzgVf);
  numBytes += sRPole_init(&sRPole_F5c9QHUd);
  numBytes += sDel1_init(&sDel1_kY6yKCgC);
  numBytes += sRPole_init(&sRPole_F1BEDnsu);
  numBytes += sRPole_init(&sRPole_dvzC5Svy);
  numBytes += sRPole_init(&sRPole_d6qNEXMr);
  numBytes += sRPole_init(&sRPole_HFf2qUdB);
  numBytes += sDel1_init(&sDel1_1hQ664pv);
  numBytes += sRPole_init(&sRPole_HBr6gjwu);
  numBytes += sLine_init(&sLine_Jlyw8YlO);
  numBytes += sLine_init(&sLine_u2rFsbG6);
  numBytes += sEnv_init(&sEnv_KxjqSL6t, 256, 512);
  numBytes += sLine_init(&sLine_RN6aKJ9b);
  numBytes += sLine_init(&sLine_pKFovPog);
  numBytes += sRPole_init(&sRPole_NiB4m5YJ);
  numBytes += sTabwrite_init(&sTabwrite_S7OHbnAT, &hTable_wKnPPZ5A);
  numBytes += sPhasor_k_init(&sPhasor_VlocrFf9, 0.0f, sampleRate);
  numBytes += sPhasor_k_init(&sPhasor_CGZLSzDU, 0.0f, sampleRate);
  numBytes += sLine_init(&sLine_tzR3ZRxf);
  numBytes += sTabhead_init(&sTabhead_4RbGUSkj, &hTable_wKnPPZ5A);
  numBytes += sTabread_init(&sTabread_wYkeohPh, &hTable_wKnPPZ5A, false);
  numBytes += sTabread_init(&sTabread_Niub9zJe, &hTable_wKnPPZ5A, false);
  numBytes += sLine_init(&sLine_gr9xSByZ);
  numBytes += sLine_init(&sLine_H3zmJvTV);
  numBytes += sTabhead_init(&sTabhead_KPVbvcp0, &hTable_wKnPPZ5A);
  numBytes += sTabread_init(&sTabread_FRgQGl7w, &hTable_wKnPPZ5A, false);
  numBytes += sTabread_init(&sTabread_rWCdEWy7, &hTable_wKnPPZ5A, false);
  numBytes += sLine_init(&sLine_50Q9A2ee);
  numBytes += sLine_init(&sLine_B4pzA46h);
  numBytes += sTabhead_init(&sTabhead_rU30Y3is, &hTable_wKnPPZ5A);
  numBytes += sTabread_init(&sTabread_e5tpZK5J, &hTable_wKnPPZ5A, false);
  numBytes += sTabread_init(&sTabread_FadG5VCl, &hTable_wKnPPZ5A, false);
  numBytes += sLine_init(&sLine_1ieji3Po);
  numBytes += sLine_init(&sLine_KfZIjqWu);
  numBytes += sTabhead_init(&sTabhead_WCE79OXh, &hTable_wKnPPZ5A);
  numBytes += sTabread_init(&sTabread_sZOC1whV, &hTable_wKnPPZ5A, false);
  numBytes += sTabread_init(&sTabread_gJePxrEp, &hTable_wKnPPZ5A, false);
  numBytes += sLine_init(&sLine_qx09OJC3);
  numBytes += sLine_init(&sLine_7p1Kzr1Z);
  numBytes += sTabhead_init(&sTabhead_mUACPm2K, &hTable_wKnPPZ5A);
  numBytes += sTabread_init(&sTabread_a1lR0QfZ, &hTable_wKnPPZ5A, false);
  numBytes += sTabread_init(&sTabread_VBQVofka, &hTable_wKnPPZ5A, false);
  numBytes += sLine_init(&sLine_npqcDeC0);
  numBytes += sLine_init(&sLine_fvXCYvNM);
  numBytes += sTabhead_init(&sTabhead_cOQMr7uF, &hTable_wKnPPZ5A);
  numBytes += sTabread_init(&sTabread_b0Cwd6G3, &hTable_wKnPPZ5A, false);
  numBytes += sTabread_init(&sTabread_FpfA4W8F, &hTable_wKnPPZ5A, false);
  numBytes += sLine_init(&sLine_WGp3ZVEy);
  numBytes += sEnv_init(&sEnv_WSJkxnQY, 256, 512);
  numBytes += sLine_init(&sLine_NN03tJ9d);
  numBytes += sRPole_init(&sRPole_2moeqx0P);
  numBytes += sRPole_init(&sRPole_jL3QBqLH);
  numBytes += sDel1_init(&sDel1_381ay5Lr);
  numBytes += sEnv_init(&sEnv_VqsbOBBu, 256, 512);
  numBytes += sLine_init(&sLine_6dhZiY64);
  numBytes += sRPole_init(&sRPole_oZj4zQzS);
  numBytes += sRPole_init(&sRPole_OgrSMOMK);
  numBytes += sDel1_init(&sDel1_5yzZKohl);
  numBytes += sLine_init(&sLine_CDSvVcw5);
  numBytes += sLine_init(&sLine_dbuklFnB);
  numBytes += sLine_init(&sLine_t0nvFS19);
  numBytes += sLine_init(&sLine_uIPggpPT);
  numBytes += sLine_init(&sLine_sJHXCU7c);
  numBytes += sLine_init(&sLine_xlvldnXL);
  numBytes += sRPole_init(&sRPole_Ij6JJBXr);
  numBytes += sDel1_init(&sDel1_VH0onM8e);
  numBytes += sLine_init(&sLine_OSblXxr0);
  numBytes += sPhasor_k_init(&sPhasor_4zCM5eKO, 0.3f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_0isvB8pA, &hTable_CRcXxreM);
  numBytes += sTabread_init(&sTabread_nseGRee8, &hTable_CRcXxreM, false);
  numBytes += sTabread_init(&sTabread_cN3GJrkG, &hTable_CRcXxreM, false);
  numBytes += sRPole_init(&sRPole_pcA1agba);
  numBytes += sDel1_init(&sDel1_0ui7OtKe);
  numBytes += sPhasor_k_init(&sPhasor_qj20STY9, 0.5f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_5va6enwQ, &hTable_BL4jeOBk);
  numBytes += sTabread_init(&sTabread_OpP2NFxL, &hTable_BL4jeOBk, false);
  numBytes += sTabread_init(&sTabread_xBs8dTGn, &hTable_BL4jeOBk, false);
  numBytes += sRPole_init(&sRPole_vgBWBBti);
  numBytes += sDel1_init(&sDel1_dTJGa5Bc);
  numBytes += sTabwrite_init(&sTabwrite_06alywv3, &hTable_BL4jeOBk);
  numBytes += sTabwrite_init(&sTabwrite_AUeWj0uT, &hTable_CRcXxreM);
  numBytes += sRPole_init(&sRPole_JP1uKBAu);
  numBytes += sDel1_init(&sDel1_UJV9ln2s);
  numBytes += sRPole_init(&sRPole_nZZJsoSP);
  numBytes += sDel1_init(&sDel1_4GgopS3i);
  numBytes += cVar_init_s(&cVar_0XsZM11r, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_TPR9KfNJ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_389BR7ZN, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_zgf9gk6w, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_tNQ6yXju, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_o4TUH4ej, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_UAUlNcQ1, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_sq69fTLq, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_JvbujEoo, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_DNtsz37d, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_dueh4maM, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_BXZjCInm, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_klZ3trPq, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_9eC1kjbj, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_zFYTh7Bk, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_O6fgmGNE, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_C9hCWgPP, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_eO0miFS7, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Hd5bFdrc, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_GJmWRWqF, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_VAxEQ0fi, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_qg2cftoR, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_pf3st23O, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_oOOgIRvS, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_vWkcWIoQ, 0.0f);
  numBytes += cVar_init_f(&cVar_Pumx632Y, 0.0f);
  numBytes += cVar_init_f(&cVar_jGIzxHLJ, 0.0f);
  numBytes += cVar_init_f(&cVar_7RlGxVG4, 0.0f);
  numBytes += cVar_init_f(&cVar_apVcMp1K, 0.0f);
  numBytes += cVar_init_f(&cVar_VVE2Kt6g, 0.0f);
  numBytes += cVar_init_f(&cVar_7GxwexHU, 0.0f);
  numBytes += cVar_init_f(&cVar_aeizXvUv, 0.0f);
  numBytes += cVar_init_f(&cVar_Dp4NRqi3, 0.0f);
  numBytes += cVar_init_f(&cVar_5oB0TNdx, 0.0f);
  numBytes += cVar_init_f(&cVar_5aYGuwGe, 0.0f);
  numBytes += cVar_init_f(&cVar_MOOXRbyZ, 0.0f);
  numBytes += cDelay_init(this, &cDelay_SdIIHCmU, 0.0f);
  numBytes += cDelay_init(this, &cDelay_Xeif9KXc, 0.0f);
  numBytes += hTable_init(&hTable_wKnPPZ5A, 256);
  numBytes += cPack_init(&cPack_Pgv4RTlg, 2, 0.0f, 20.0f);
  numBytes += cPack_init(&cPack_y35QIZjt, 2, 0.0f, 1800.0f);
  numBytes += cPack_init(&cPack_cHkaWkP3, 2, 0.0f, 1600.0f);
  numBytes += cPack_init(&cPack_rCRvEVLV, 2, 0.0f, 1300.0f);
  numBytes += cPack_init(&cPack_bKBR96yD, 2, 0.0f, 1000.0f);
  numBytes += cPack_init(&cPack_9vCrgsCy, 2, 0.0f, 800.0f);
  numBytes += cPack_init(&cPack_tL7M6CtQ, 2, 0.0f, 600.0f);
  numBytes += cVar_init_f(&cVar_Py3y35Ly, 10000.0f);
  numBytes += cBinop_init(&cBinop_4jBEQSlo, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_wO06QDAD, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_NRFZb0nk, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_noDy0hPc, 27, 1);
  numBytes += cSlice_init(&cSlice_8b7rR8OY, 26, 1);
  numBytes += cSlice_init(&cSlice_heh4AMUV, 25, 1);
  numBytes += cSlice_init(&cSlice_4zdpQdm7, 24, 1);
  numBytes += cSlice_init(&cSlice_P962oPJw, 23, 1);
  numBytes += cSlice_init(&cSlice_tUswvCnQ, 22, 1);
  numBytes += cSlice_init(&cSlice_45c01XcB, 21, 1);
  numBytes += cSlice_init(&cSlice_HgyEagvo, 20, 1);
  numBytes += cSlice_init(&cSlice_3uyneX1E, 19, 1);
  numBytes += cSlice_init(&cSlice_2MUm7YOO, 18, 1);
  numBytes += cSlice_init(&cSlice_yuTBEsBs, 17, 1);
  numBytes += cSlice_init(&cSlice_2Kp6HvAz, 16, 1);
  numBytes += cSlice_init(&cSlice_7PdJnF1u, 15, 1);
  numBytes += cSlice_init(&cSlice_yrKzNWW9, 14, 1);
  numBytes += cSlice_init(&cSlice_NIHb0fGz, 13, 1);
  numBytes += cSlice_init(&cSlice_7m48MUOp, 12, 1);
  numBytes += cSlice_init(&cSlice_cB6iDAve, 11, 1);
  numBytes += cSlice_init(&cSlice_t57ogDDP, 10, 1);
  numBytes += cSlice_init(&cSlice_snCrrtSv, 9, 1);
  numBytes += cSlice_init(&cSlice_VIg28b7u, 8, 1);
  numBytes += cSlice_init(&cSlice_Wyow9UyE, 7, 1);
  numBytes += cSlice_init(&cSlice_Q2ibHK3m, 6, 1);
  numBytes += cSlice_init(&cSlice_BQetlPBG, 5, 1);
  numBytes += cSlice_init(&cSlice_913OjPrJ, 4, 1);
  numBytes += cSlice_init(&cSlice_5vaFCJMg, 3, 1);
  numBytes += cSlice_init(&cSlice_oZHIDeBv, 2, 1);
  numBytes += cSlice_init(&cSlice_gjI4kaha, 1, 1);
  numBytes += cSlice_init(&cSlice_xyPHrKfb, 0, 1);
  numBytes += sVarf_init(&sVarf_3FcvCOCs, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_Nyyk4lWE, 0.0f);
  numBytes += cBinop_init(&cBinop_lmmqNnvG, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_QoHxJYF6, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_VdMyYjOh, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_YDRcchLB, 0.0f);
  numBytes += cBinop_init(&cBinop_DvtxDE3d, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_8VUnt41R, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_41AmtaqF, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_W5O9gnqL, 0.0f);
  numBytes += cBinop_init(&cBinop_heKxj1kv, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_UFOgnYfn, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_7F58Cvkq, 22050.0f);
  numBytes += cBinop_init(&cBinop_WIhRargy, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_oksy9V6c, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_MRlyw5PH, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_udYO9Bfw, 22050.0f);
  numBytes += cBinop_init(&cBinop_Hkj2GC41, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_266zoWGY, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_0xvd63pl, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_u1Y7Yzcp, 22050.0f);
  numBytes += cBinop_init(&cBinop_rgrMFKpB, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_lReZsROf, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_wArrtoph, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_Q8uPGVtP, 22050.0f);
  numBytes += cVar_init_f(&cVar_2emU3W3b, 1.0f);
  numBytes += cBinop_init(&cBinop_aODQHZdv, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_V56oP7K6, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_CmY8QyXF, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_1yus6OXo, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_qG2ppnIG, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_vDRz5xY3, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_XkI5Fv5l, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_FGzwVkOG, 0.0f);
  numBytes += cVar_init_f(&cVar_lb6oq98F, 0.0f);
  numBytes += cVar_init_f(&cVar_boisjjXZ, 0.0f);
  numBytes += cVar_init_f(&cVar_i9pqN9SU, 0.0f);
  numBytes += cVar_init_f(&cVar_UYunUFjf, 0.0f);
  numBytes += cVar_init_f(&cVar_9qI8lVJm, 0.0f);
  numBytes += cSlice_init(&cSlice_LAaKQviM, 3, 1);
  numBytes += cSlice_init(&cSlice_cUEWZGU1, 2, 1);
  numBytes += cSlice_init(&cSlice_3KDccdgf, 1, 1);
  numBytes += cSlice_init(&cSlice_xZSEPGv0, 0, 1);
  numBytes += cPack_init(&cPack_VOa2M5L1, 2, 0.0f, 50.0f);
  numBytes += cDelay_init(this, &cDelay_oP8Ln4US, 0.0f);
  numBytes += cDelay_init(this, &cDelay_RolILfh2, 0.0f);
  numBytes += hTable_init(&hTable_BL4jeOBk, 256);
  numBytes += cVar_init_f(&cVar_wnzb07r1, 0.0f);
  numBytes += cVar_init_s(&cVar_myRk9DMx, "del-1001-delayD");
  numBytes += sVarf_init(&sVarf_VLgulLnm, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_K4YimH6g, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_5rEXnoHP, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_U7rOPUEb, "del-1001-delayC");
  numBytes += sVarf_init(&sVarf_auLJe7A8, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_aFCrZv1Z, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_3pKrx9IR, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_IF0al2BF, 0.0f);
  numBytes += cDelay_init(this, &cDelay_EgHexEIU, 0.0f);
  numBytes += hTable_init(&hTable_CRcXxreM, 256);
  numBytes += sVarf_init(&sVarf_QxsCpNjs, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_RvIZoWOR, 3.0f);
  numBytes += cBinop_init(&cBinop_fDhAjrY0, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_PektZ6tU, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_GDbe0OYr, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_fvnoHgfJ, 3.0f);
  numBytes += cBinop_init(&cBinop_LLHbAYie, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_nfcNoR4I, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_7RMajP9N, 1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_iy0Lj2gd, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_SAfwpzLI, 0.0f);
  numBytes += cVar_init_f(&cVar_5m4tXvcl, 0.0f);
  numBytes += cVar_init_f(&cVar_CguR1CEP, 0.0f);
  numBytes += cPack_init(&cPack_EblKlg6I, 2, 0.0f, 100.0f);
  numBytes += cPack_init(&cPack_nYepie1l, 2, 0.0f, 100.0f);
  numBytes += cVar_init_f(&cVar_NJeaR3jT, 0.0f);
  numBytes += cVar_init_f(&cVar_cEmFsmDn, 0.0f);
  numBytes += cVar_init_f(&cVar_TPRIhOf4, 0.0f);
  numBytes += cBinop_init(&cBinop_LPpSVf0u, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_G0K3QPeL, 0.0f); // __pow
  numBytes += cIf_init(&cIf_Kprtn86h, false);
  numBytes += cBinop_init(&cBinop_T6RHZJBW, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_kBpE8vgW, 74.0f);
  numBytes += cVar_init_f(&cVar_FSYD9vxZ, 3.0f);
  numBytes += cSlice_init(&cSlice_Cog71zlR, 1, -1);
  numBytes += cVar_init_f(&cVar_KtSVkgAd, 1.0f);
  numBytes += cSlice_init(&cSlice_QO6SIUX4, 1, -1);
  numBytes += cVar_init_f(&cVar_CWkyKB2d, 70.0f);
  numBytes += cBinop_init(&cBinop_Zua7xQfI, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_cRSczIE2, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_Ohnqdsfl, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_GXaSlYn3, 3000.0f);
  numBytes += cBinop_init(&cBinop_xT0WItGl, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_tm6ugopr, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_n5663NcB, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_vnlMRA0j, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_ny6UlXvQ, 400.0f);
  numBytes += cBinop_init(&cBinop_i9MMJ36I, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_EzIj0I7v, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_iEmoiXKB, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_YUYfloOf, 30.0f);
  numBytes += cBinop_init(&cBinop_vxED5fiN, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_Nnoh0nCM, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_sQ0XcbEP, false);
  numBytes += cVar_init_f(&cVar_U5rFW6Ck, 0.0f);
  numBytes += cVar_init_f(&cVar_ZVrgkzng, 0.0f);
  numBytes += cPack_init(&cPack_LBgmxiPW, 3, 0.0f, 500.0f, 100.0f);
  numBytes += cDelay_init(this, &cDelay_fpa28vWn, 0.0f);
  numBytes += cVar_init_f(&cVar_syPPkqDI, 20.0f);
  numBytes += cBinop_init(&cBinop_7e5OpPLz, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_iFocdySi, 0.0f);
  numBytes += cSlice_init(&cSlice_IsjvyPtD, 1, -1);
  numBytes += cSlice_init(&cSlice_NtpMVDy9, 1, -1);
  numBytes += cVar_init_f(&cVar_jhLA90oX, 0.0f);
  numBytes += cVar_init_f(&cVar_uF6LZGox, 20.0f);
  numBytes += cVar_init_f(&cVar_xyTMM2BX, 0.0f);
  numBytes += cVar_init_f(&cVar_rgzW3BxJ, 0.0f);
  numBytes += cVar_init_f(&cVar_dCVejE9Z, 0.0f);
  numBytes += cSlice_init(&cSlice_ek9hHmrl, 1, 1);
  numBytes += cSlice_init(&cSlice_tDh07SWR, 0, 1);
  numBytes += cBinop_init(&cBinop_eECMYPF9, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_4onxdkHF, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_wCx8o59M, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_JZM0Htff, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_VbuHhTDN, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_DgNFRdqJ, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_O1AzpMzW, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_cS6VaAbX, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_A7U8Do86, 0.0f);
  numBytes += cVar_init_f(&cVar_ZhNOP5fr, 0.0f);
  numBytes += cVar_init_f(&cVar_7D4at0Er, 0.0f);
  numBytes += cVar_init_f(&cVar_KhBriDNl, 0.0f);
  numBytes += cVar_init_f(&cVar_G6NJi59S, 0.0f);
  numBytes += cVar_init_f(&cVar_Qn94ccj1, 0.0f);
  numBytes += sVarf_init(&sVarf_5mLWb8uf, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_akqH15jy, 8.0f);
  numBytes += cBinop_init(&cBinop_d1EsVKQ1, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_LWHovlTu, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_aLXokfrw, 0.0f);
  numBytes += cVar_init_f(&cVar_kBpEnrvT, 0.0f);
  numBytes += cBinop_init(&cBinop_pwBoNg68, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_KryQuUlG, 0.0f); // __pow
  numBytes += cIf_init(&cIf_CzCpKAuv, false);
  numBytes += cBinop_init(&cBinop_FHExY45D, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_Jx8xJWdL, 82.0f);
  numBytes += cVar_init_f(&cVar_y6clkYs3, 21.0f);
  numBytes += cSlice_init(&cSlice_05AA01PN, 1, -1);
  numBytes += cVar_init_f(&cVar_bkDMhM2b, 1.0f);
  numBytes += cSlice_init(&cSlice_QkxQgai5, 1, -1);
  numBytes += cVar_init_f(&cVar_Chmk6Y2y, 70.0f);
  numBytes += cBinop_init(&cBinop_qudktnxh, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_Pgr8Aegy, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_UPNlzgC1, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_D2vZuaxD, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_1gW5bTNr, 8.0f);
  numBytes += cBinop_init(&cBinop_Eb6iqXnQ, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_dd6lIODB, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_04SvvUCH, 0.0f);
  numBytes += cVar_init_f(&cVar_dsewHEcs, 0.0f);
  numBytes += cBinop_init(&cBinop_eJ516m5q, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_kGILg5Sy, 0.0f); // __pow
  numBytes += cIf_init(&cIf_odo6aLx4, false);
  numBytes += cBinop_init(&cBinop_fUBjxK59, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_1sVGdFTj, 82.0f);
  numBytes += cVar_init_f(&cVar_GEYfdFey, 21.0f);
  numBytes += cSlice_init(&cSlice_oFbccCvk, 1, -1);
  numBytes += cVar_init_f(&cVar_XXlPzaVm, 1.0f);
  numBytes += cSlice_init(&cSlice_IeCMneX8, 1, -1);
  numBytes += cVar_init_f(&cVar_FfBHnbS8, 70.0f);
  numBytes += cBinop_init(&cBinop_rt1WvJie, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_3VR2WNmI, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_le3QA0rj, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_6WhQnZdi, 10000.0f);
  numBytes += cBinop_init(&cBinop_0LQlnPW9, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_fBXZ33FN, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_DNedV1DX, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_osPtu8LY, 10000.0f);
  numBytes += cBinop_init(&cBinop_vGJXHCFF, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_Rqtv37P2, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_vq2GJNGH, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_bMWg0Sii, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_LE3rImlB, 20.0f);
  numBytes += cBinop_init(&cBinop_jxBoRmfS, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_soYDkk1E, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ZV9Hym0P, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_SIGb1iEh, 20.0f);
  numBytes += cBinop_init(&cBinop_kd3NbRLN, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_Tg0NX1hO, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_M6I3hIiv, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_vYjZGWeH, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_onAtlNJi, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_vuCD9JaH, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ITGDKZhF, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_bgtiVYHe, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_iKZu30IY, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_C5NUBjfN, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_LL1AiKnI, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ylbjJxZZ, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_qBYOFu8x, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_aewHa2ht, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_2xMHscpw, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_oti1Q7hv, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_iXIggiFe, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_2D5r6vIX, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_9BUdtSPq, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_3mxE6jAM, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_PUnVpODs, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_5LFdPE5q, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_vMkuvtio, 0.0f, 0.0f, false);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_Echomatica::~Heavy_Echomatica() {
  sEnv_free(&sEnv_KxjqSL6t);
  sEnv_free(&sEnv_WSJkxnQY);
  sEnv_free(&sEnv_VqsbOBBu);
  hTable_free(&hTable_wKnPPZ5A);
  cPack_free(&cPack_Pgv4RTlg);
  cPack_free(&cPack_y35QIZjt);
  cPack_free(&cPack_cHkaWkP3);
  cPack_free(&cPack_rCRvEVLV);
  cPack_free(&cPack_bKBR96yD);
  cPack_free(&cPack_9vCrgsCy);
  cPack_free(&cPack_tL7M6CtQ);
  cPack_free(&cPack_VOa2M5L1);
  hTable_free(&hTable_BL4jeOBk);
  hTable_free(&hTable_CRcXxreM);
  cPack_free(&cPack_EblKlg6I);
  cPack_free(&cPack_nYepie1l);
  cPack_free(&cPack_LBgmxiPW);
}

HvTable *Heavy_Echomatica::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0xC7C6279C: return &hTable_wKnPPZ5A; // del-1001-delayA
    case 0x6F28B8EB: return &hTable_BL4jeOBk; // del-1001-delayD
    case 0xA74180A2: return &hTable_CRcXxreM; // del-1001-delayC
    default: return nullptr;
  }
}

void Heavy_Echomatica::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0x22C9B907: { // Vari
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_PNJdgybG_sendMessage);
      break;
    }
    case 0xA99A1B1B: { // 1207-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_GftmTRpz_sendMessage);
      break;
    }
    case 0x84185EE6: { // 1207-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_GEMwbVKD_sendMessage);
      break;
    }
    case 0x4C0364B1: { // 1285-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9j4OL0Rm_sendMessage);
      break;
    }
    case 0xE0EC232D: { // 1285-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4OiaBq4p_sendMessage);
      break;
    }
    case 0xD892F55D: { // 1307-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_MOelq6c0_sendMessage);
      break;
    }
    case 0xDF5BAE2: { // 1307-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ImP1Pzc0_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_8rTp3LYs_sendMessage);
      break;
    }
    case 0xE68AB11B: { // chrs
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_8WvrPwQ1_sendMessage);
      break;
    }
    case 0xBA8CED4E: { // dry
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_NFmw5QCb_sendMessage);
      break;
    }
    case 0x63E722C0: { // echo
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_B1c0NFvr_sendMessage);
      break;
    }
    case 0x8FA433B0: { // f1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_AvXuCjOP_sendMessage);
      break;
    }
    case 0xEE0EB120: { // f2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_OrRaoizH_sendMessage);
      break;
    }
    case 0x4FFCF19F: { // f3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_xkrCOuYV_sendMessage);
      break;
    }
    case 0x2AF9F5EB: { // f4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_0SxDoJ3V_sendMessage);
      break;
    }
    case 0xC6F6EBB2: { // f5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ILoUPFMt_sendMessage);
      break;
    }
    case 0x775D6E5E: { // f6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_s8qRUUjt_sendMessage);
      break;
    }
    case 0xBB6123FD: { // fdbck_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_gmMo9XFU_sendMessage);
      break;
    }
    case 0xF1E7CD16: { // feedback
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1HqjOFS0_sendMessage);
      break;
    }
    case 0xC7AF3F72: { // h1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_TspUDIuK_sendMessage);
      break;
    }
    case 0x9BEBB079: { // h2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ZU7Es9ER_sendMessage);
      break;
    }
    case 0xAB1137FD: { // h3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_s3om06P6_sendMessage);
      break;
    }
    case 0x2B4C6DE1: { // h4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_06d9LyRq_sendMessage);
      break;
    }
    case 0x2541E77D: { // h5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_J5JHf8mO_sendMessage);
      break;
    }
    case 0xE7F6D341: { // h6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_zIT9Rbl7_sendMessage);
      break;
    }
    case 0x5667A4DA: { // head1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ANDBM3wq_sendMessage);
      break;
    }
    case 0xAD6B31A5: { // head2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_NApp2P8B_sendMessage);
      break;
    }
    case 0x8A2BD450: { // head3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_pl2CLVbB_sendMessage);
      break;
    }
    case 0xCF5C829A: { // head4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ttuzT3Fa_sendMessage);
      break;
    }
    case 0xEE70DFBC: { // head5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_x11HNjRR_sendMessage);
      break;
    }
    case 0x8E4B9939: { // head6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_kLZK0EDy_sendMessage);
      break;
    }
    case 0x7E24361: { // hp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_jwxDbOw7_sendMessage);
      break;
    }
    case 0x674D12F6: { // hp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_yJlqRPsm_sendMessage);
      break;
    }
    case 0x6A20C3F5: { // hp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4Nm9S1dy_sendMessage);
      break;
    }
    case 0x123E8795: { // lp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9uZksNm1_sendMessage);
      break;
    }
    case 0x4588BD1: { // lp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_36WxNaRP_sendMessage);
      break;
    }
    case 0xB7298D49: { // lp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_M7ooA9EU_sendMessage);
      break;
    }
    case 0x64BD0F15: { // mf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_5uIotG23_sendMessage);
      break;
    }
    case 0x5A12F82E: { // mg
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_zsWeHxqR_sendMessage);
      break;
    }
    case 0x2C9C49A7: { // mq
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_NIMlCAIP_sendMessage);
      break;
    }
    case 0xC8D93A6D: { // tapehead_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_nQyCsdEe_sendMessage);
      break;
    }
    case 0xB25D05EB: { // varispeed
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_sVcll0Ue_sendMessage);
      break;
    }
    case 0x8ADB5B6B: { // varispeed_enable
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Ixg9OIxN_sendMessage);
      break;
    }
    case 0x7BB47B7B: { // wnf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_uzwv3mJ7_sendMessage);
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


void Heavy_Echomatica::cMsg_919BX7ZP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_I443cMSN_sendMessage);
}

void Heavy_Echomatica::cSystem_I443cMSN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_fm8BA4Q5_sendMessage);
}

void Heavy_Echomatica::cVar_0XsZM11r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oxdlhK6Z_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_DMgws8lT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_Ic62uhRX_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_TPR9KfNJ, m);
}

void Heavy_Echomatica::cBinop_fm8BA4Q5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_389BR7ZN, m);
}

void Heavy_Echomatica::cMsg_oxdlhK6Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_DMgws8lT_sendMessage);
}

void Heavy_Echomatica::cBinop_Ic62uhRX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_zgf9gk6w, m);
}

void Heavy_Echomatica::cMsg_YRgNxH7r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ceSQ8GYn_sendMessage);
}

void Heavy_Echomatica::cSystem_ceSQ8GYn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_zKjsKGP3_sendMessage);
}

void Heavy_Echomatica::cVar_tNQ6yXju_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uVdziU3n_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_GtVk693I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_7f01ILH4_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_o4TUH4ej, m);
}

void Heavy_Echomatica::cBinop_zKjsKGP3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_UAUlNcQ1, m);
}

void Heavy_Echomatica::cMsg_uVdziU3n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_GtVk693I_sendMessage);
}

void Heavy_Echomatica::cBinop_7f01ILH4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_sq69fTLq, m);
}

void Heavy_Echomatica::cMsg_rURa8Neh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_jydakFix_sendMessage);
}

void Heavy_Echomatica::cSystem_jydakFix_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_qCCjmDNm_sendMessage);
}

void Heavy_Echomatica::cVar_JvbujEoo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uIoeHBwN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_ZbMoZAlC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_HWNtIyQp_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_DNtsz37d, m);
}

void Heavy_Echomatica::cBinop_qCCjmDNm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_dueh4maM, m);
}

void Heavy_Echomatica::cMsg_uIoeHBwN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ZbMoZAlC_sendMessage);
}

void Heavy_Echomatica::cBinop_HWNtIyQp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_BXZjCInm, m);
}

void Heavy_Echomatica::cMsg_Y6XhJBnk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_2j74JMTc_sendMessage);
}

void Heavy_Echomatica::cSystem_2j74JMTc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_6nbMLkKq_sendMessage);
}

void Heavy_Echomatica::cVar_klZ3trPq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3U92sCbJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_JWn3ONtg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_VJXKBq9a_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_9eC1kjbj, m);
}

void Heavy_Echomatica::cBinop_6nbMLkKq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_zFYTh7Bk, m);
}

void Heavy_Echomatica::cMsg_3U92sCbJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_JWn3ONtg_sendMessage);
}

void Heavy_Echomatica::cBinop_VJXKBq9a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_O6fgmGNE, m);
}

void Heavy_Echomatica::cCast_xvxYOQca_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DXWT0Otg_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_UyD4OoOw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EBmZDYfr_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_sAi0cyoU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_chrmwIn4_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_XL7AE39S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_60GPqJqM_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_cBtyevLE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nzC1DCeE_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_N6UtHQJk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Krp6wGyE_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_3oZY9ett_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_k61bORtG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_5FXC3Jfo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oDMcfFFL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_lWH7GQOA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_eki6qLAR_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_1RIdvjzn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0yzF57k6_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_4yfPZej4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dURuFdJs_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_zDmXe86N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_u23n9Zki_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_Pvg5E9ke_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IYdCMuGJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_OkVRaHr1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QoUcUQsI_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_5pOXG0M1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bltzkcM0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_yhS957Ma_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LBtD4jri_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_2iq5D411_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tj2QsuN6_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_P3ZgbhBo_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NITtyOKi_sendMessage);
      break;
    }
    case 0x40400000: { // "3.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6IqSL1uz_sendMessage);
      break;
    }
    case 0x40800000: { // "4.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1ez9xg8f_sendMessage);
      break;
    }
    case 0x40A00000: { // "5.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rzBDSg4w_sendMessage);
      break;
    }
    case 0x40C00000: { // "6.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QF9rD18f_sendMessage);
      break;
    }
    case 0x40E00000: { // "7.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_x0KFgYqC_sendMessage);
      break;
    }
    case 0x41000000: { // "8.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Q65hpsGh_sendMessage);
      break;
    }
    case 0x41100000: { // "9.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pZI1LdjD_sendMessage);
      break;
    }
    case 0x41200000: { // "10.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jwAGjZC3_sendMessage);
      break;
    }
    case 0x41300000: { // "11.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mgvy1E6D_sendMessage);
      break;
    }
    case 0x41400000: { // "12.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HJtfbTnT_sendMessage);
      break;
    }
    case 0x41500000: { // "13.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mu9wx24t_sendMessage);
      break;
    }
    case 0x41600000: { // "14.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YesHBrVi_sendMessage);
      break;
    }
    case 0x41700000: { // "15.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_E50C4ZPf_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_tj2QsuN6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4yfPZej4_sendMessage);
}

void Heavy_Echomatica::cCast_P3ZgbhBo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OkVRaHr1_sendMessage);
}

void Heavy_Echomatica::cCast_NITtyOKi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lWH7GQOA_sendMessage);
}

void Heavy_Echomatica::cCast_6IqSL1uz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1RIdvjzn_sendMessage);
}

void Heavy_Echomatica::cCast_1ez9xg8f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Pvg5E9ke_sendMessage);
}

void Heavy_Echomatica::cCast_rzBDSg4w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zDmXe86N_sendMessage);
}

void Heavy_Echomatica::cCast_QF9rD18f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cBtyevLE_sendMessage);
}

void Heavy_Echomatica::cCast_x0KFgYqC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5pOXG0M1_sendMessage);
}

void Heavy_Echomatica::cCast_Q65hpsGh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yhS957Ma_sendMessage);
}

void Heavy_Echomatica::cCast_pZI1LdjD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_N6UtHQJk_sendMessage);
}

void Heavy_Echomatica::cCast_jwAGjZC3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UyD4OoOw_sendMessage);
}

void Heavy_Echomatica::cCast_mgvy1E6D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sAi0cyoU_sendMessage);
}

void Heavy_Echomatica::cCast_HJtfbTnT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XL7AE39S_sendMessage);
}

void Heavy_Echomatica::cCast_mu9wx24t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xvxYOQca_sendMessage);
}

void Heavy_Echomatica::cCast_YesHBrVi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5FXC3Jfo_sendMessage);
}

void Heavy_Echomatica::cCast_E50C4ZPf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3oZY9ett_sendMessage);
}

void Heavy_Echomatica::cMsg_eki6qLAR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_noDy0hPc, 0, m, &cSlice_noDy0hPc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8b7rR8OY, 0, m, &cSlice_8b7rR8OY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_heh4AMUV, 0, m, &cSlice_heh4AMUV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4zdpQdm7, 0, m, &cSlice_4zdpQdm7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_P962oPJw, 0, m, &cSlice_P962oPJw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tUswvCnQ, 0, m, &cSlice_tUswvCnQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_45c01XcB, 0, m, &cSlice_45c01XcB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HgyEagvo, 0, m, &cSlice_HgyEagvo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3uyneX1E, 0, m, &cSlice_3uyneX1E_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2MUm7YOO, 0, m, &cSlice_2MUm7YOO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yuTBEsBs, 0, m, &cSlice_yuTBEsBs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Kp6HvAz, 0, m, &cSlice_2Kp6HvAz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7PdJnF1u, 0, m, &cSlice_7PdJnF1u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yrKzNWW9, 0, m, &cSlice_yrKzNWW9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NIHb0fGz, 0, m, &cSlice_NIHb0fGz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7m48MUOp, 0, m, &cSlice_7m48MUOp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cB6iDAve, 0, m, &cSlice_cB6iDAve_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t57ogDDP, 0, m, &cSlice_t57ogDDP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_snCrrtSv, 0, m, &cSlice_snCrrtSv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VIg28b7u, 0, m, &cSlice_VIg28b7u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wyow9UyE, 0, m, &cSlice_Wyow9UyE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Q2ibHK3m, 0, m, &cSlice_Q2ibHK3m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BQetlPBG, 0, m, &cSlice_BQetlPBG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_913OjPrJ, 0, m, &cSlice_913OjPrJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5vaFCJMg, 0, m, &cSlice_5vaFCJMg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oZHIDeBv, 0, m, &cSlice_oZHIDeBv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gjI4kaha, 0, m, &cSlice_gjI4kaha_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xyPHrKfb, 0, m, &cSlice_xyPHrKfb_sendMessage);
}

void Heavy_Echomatica::cMsg_QoUcUQsI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_noDy0hPc, 0, m, &cSlice_noDy0hPc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8b7rR8OY, 0, m, &cSlice_8b7rR8OY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_heh4AMUV, 0, m, &cSlice_heh4AMUV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4zdpQdm7, 0, m, &cSlice_4zdpQdm7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_P962oPJw, 0, m, &cSlice_P962oPJw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tUswvCnQ, 0, m, &cSlice_tUswvCnQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_45c01XcB, 0, m, &cSlice_45c01XcB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HgyEagvo, 0, m, &cSlice_HgyEagvo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3uyneX1E, 0, m, &cSlice_3uyneX1E_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2MUm7YOO, 0, m, &cSlice_2MUm7YOO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yuTBEsBs, 0, m, &cSlice_yuTBEsBs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Kp6HvAz, 0, m, &cSlice_2Kp6HvAz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7PdJnF1u, 0, m, &cSlice_7PdJnF1u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yrKzNWW9, 0, m, &cSlice_yrKzNWW9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NIHb0fGz, 0, m, &cSlice_NIHb0fGz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7m48MUOp, 0, m, &cSlice_7m48MUOp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cB6iDAve, 0, m, &cSlice_cB6iDAve_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t57ogDDP, 0, m, &cSlice_t57ogDDP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_snCrrtSv, 0, m, &cSlice_snCrrtSv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VIg28b7u, 0, m, &cSlice_VIg28b7u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wyow9UyE, 0, m, &cSlice_Wyow9UyE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Q2ibHK3m, 0, m, &cSlice_Q2ibHK3m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BQetlPBG, 0, m, &cSlice_BQetlPBG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_913OjPrJ, 0, m, &cSlice_913OjPrJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5vaFCJMg, 0, m, &cSlice_5vaFCJMg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oZHIDeBv, 0, m, &cSlice_oZHIDeBv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gjI4kaha, 0, m, &cSlice_gjI4kaha_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xyPHrKfb, 0, m, &cSlice_xyPHrKfb_sendMessage);
}

void Heavy_Echomatica::cMsg_dURuFdJs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_noDy0hPc, 0, m, &cSlice_noDy0hPc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8b7rR8OY, 0, m, &cSlice_8b7rR8OY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_heh4AMUV, 0, m, &cSlice_heh4AMUV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4zdpQdm7, 0, m, &cSlice_4zdpQdm7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_P962oPJw, 0, m, &cSlice_P962oPJw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tUswvCnQ, 0, m, &cSlice_tUswvCnQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_45c01XcB, 0, m, &cSlice_45c01XcB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HgyEagvo, 0, m, &cSlice_HgyEagvo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3uyneX1E, 0, m, &cSlice_3uyneX1E_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2MUm7YOO, 0, m, &cSlice_2MUm7YOO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yuTBEsBs, 0, m, &cSlice_yuTBEsBs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Kp6HvAz, 0, m, &cSlice_2Kp6HvAz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7PdJnF1u, 0, m, &cSlice_7PdJnF1u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yrKzNWW9, 0, m, &cSlice_yrKzNWW9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NIHb0fGz, 0, m, &cSlice_NIHb0fGz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7m48MUOp, 0, m, &cSlice_7m48MUOp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cB6iDAve, 0, m, &cSlice_cB6iDAve_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t57ogDDP, 0, m, &cSlice_t57ogDDP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_snCrrtSv, 0, m, &cSlice_snCrrtSv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VIg28b7u, 0, m, &cSlice_VIg28b7u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wyow9UyE, 0, m, &cSlice_Wyow9UyE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Q2ibHK3m, 0, m, &cSlice_Q2ibHK3m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BQetlPBG, 0, m, &cSlice_BQetlPBG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_913OjPrJ, 0, m, &cSlice_913OjPrJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5vaFCJMg, 0, m, &cSlice_5vaFCJMg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oZHIDeBv, 0, m, &cSlice_oZHIDeBv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gjI4kaha, 0, m, &cSlice_gjI4kaha_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xyPHrKfb, 0, m, &cSlice_xyPHrKfb_sendMessage);
}

void Heavy_Echomatica::cMsg_0yzF57k6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_noDy0hPc, 0, m, &cSlice_noDy0hPc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8b7rR8OY, 0, m, &cSlice_8b7rR8OY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_heh4AMUV, 0, m, &cSlice_heh4AMUV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4zdpQdm7, 0, m, &cSlice_4zdpQdm7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_P962oPJw, 0, m, &cSlice_P962oPJw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tUswvCnQ, 0, m, &cSlice_tUswvCnQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_45c01XcB, 0, m, &cSlice_45c01XcB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HgyEagvo, 0, m, &cSlice_HgyEagvo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3uyneX1E, 0, m, &cSlice_3uyneX1E_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2MUm7YOO, 0, m, &cSlice_2MUm7YOO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yuTBEsBs, 0, m, &cSlice_yuTBEsBs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Kp6HvAz, 0, m, &cSlice_2Kp6HvAz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7PdJnF1u, 0, m, &cSlice_7PdJnF1u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yrKzNWW9, 0, m, &cSlice_yrKzNWW9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NIHb0fGz, 0, m, &cSlice_NIHb0fGz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7m48MUOp, 0, m, &cSlice_7m48MUOp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cB6iDAve, 0, m, &cSlice_cB6iDAve_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t57ogDDP, 0, m, &cSlice_t57ogDDP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_snCrrtSv, 0, m, &cSlice_snCrrtSv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VIg28b7u, 0, m, &cSlice_VIg28b7u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wyow9UyE, 0, m, &cSlice_Wyow9UyE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Q2ibHK3m, 0, m, &cSlice_Q2ibHK3m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BQetlPBG, 0, m, &cSlice_BQetlPBG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_913OjPrJ, 0, m, &cSlice_913OjPrJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5vaFCJMg, 0, m, &cSlice_5vaFCJMg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oZHIDeBv, 0, m, &cSlice_oZHIDeBv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gjI4kaha, 0, m, &cSlice_gjI4kaha_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xyPHrKfb, 0, m, &cSlice_xyPHrKfb_sendMessage);
}

void Heavy_Echomatica::cMsg_IYdCMuGJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_noDy0hPc, 0, m, &cSlice_noDy0hPc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8b7rR8OY, 0, m, &cSlice_8b7rR8OY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_heh4AMUV, 0, m, &cSlice_heh4AMUV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4zdpQdm7, 0, m, &cSlice_4zdpQdm7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_P962oPJw, 0, m, &cSlice_P962oPJw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tUswvCnQ, 0, m, &cSlice_tUswvCnQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_45c01XcB, 0, m, &cSlice_45c01XcB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HgyEagvo, 0, m, &cSlice_HgyEagvo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3uyneX1E, 0, m, &cSlice_3uyneX1E_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2MUm7YOO, 0, m, &cSlice_2MUm7YOO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yuTBEsBs, 0, m, &cSlice_yuTBEsBs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Kp6HvAz, 0, m, &cSlice_2Kp6HvAz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7PdJnF1u, 0, m, &cSlice_7PdJnF1u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yrKzNWW9, 0, m, &cSlice_yrKzNWW9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NIHb0fGz, 0, m, &cSlice_NIHb0fGz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7m48MUOp, 0, m, &cSlice_7m48MUOp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cB6iDAve, 0, m, &cSlice_cB6iDAve_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t57ogDDP, 0, m, &cSlice_t57ogDDP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_snCrrtSv, 0, m, &cSlice_snCrrtSv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VIg28b7u, 0, m, &cSlice_VIg28b7u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wyow9UyE, 0, m, &cSlice_Wyow9UyE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Q2ibHK3m, 0, m, &cSlice_Q2ibHK3m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BQetlPBG, 0, m, &cSlice_BQetlPBG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_913OjPrJ, 0, m, &cSlice_913OjPrJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5vaFCJMg, 0, m, &cSlice_5vaFCJMg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oZHIDeBv, 0, m, &cSlice_oZHIDeBv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gjI4kaha, 0, m, &cSlice_gjI4kaha_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xyPHrKfb, 0, m, &cSlice_xyPHrKfb_sendMessage);
}

void Heavy_Echomatica::cMsg_u23n9Zki_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_noDy0hPc, 0, m, &cSlice_noDy0hPc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8b7rR8OY, 0, m, &cSlice_8b7rR8OY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_heh4AMUV, 0, m, &cSlice_heh4AMUV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4zdpQdm7, 0, m, &cSlice_4zdpQdm7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_P962oPJw, 0, m, &cSlice_P962oPJw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tUswvCnQ, 0, m, &cSlice_tUswvCnQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_45c01XcB, 0, m, &cSlice_45c01XcB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HgyEagvo, 0, m, &cSlice_HgyEagvo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3uyneX1E, 0, m, &cSlice_3uyneX1E_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2MUm7YOO, 0, m, &cSlice_2MUm7YOO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yuTBEsBs, 0, m, &cSlice_yuTBEsBs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Kp6HvAz, 0, m, &cSlice_2Kp6HvAz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7PdJnF1u, 0, m, &cSlice_7PdJnF1u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yrKzNWW9, 0, m, &cSlice_yrKzNWW9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NIHb0fGz, 0, m, &cSlice_NIHb0fGz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7m48MUOp, 0, m, &cSlice_7m48MUOp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cB6iDAve, 0, m, &cSlice_cB6iDAve_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t57ogDDP, 0, m, &cSlice_t57ogDDP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_snCrrtSv, 0, m, &cSlice_snCrrtSv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VIg28b7u, 0, m, &cSlice_VIg28b7u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wyow9UyE, 0, m, &cSlice_Wyow9UyE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Q2ibHK3m, 0, m, &cSlice_Q2ibHK3m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BQetlPBG, 0, m, &cSlice_BQetlPBG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_913OjPrJ, 0, m, &cSlice_913OjPrJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5vaFCJMg, 0, m, &cSlice_5vaFCJMg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oZHIDeBv, 0, m, &cSlice_oZHIDeBv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gjI4kaha, 0, m, &cSlice_gjI4kaha_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xyPHrKfb, 0, m, &cSlice_xyPHrKfb_sendMessage);
}

void Heavy_Echomatica::cMsg_nzC1DCeE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_noDy0hPc, 0, m, &cSlice_noDy0hPc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8b7rR8OY, 0, m, &cSlice_8b7rR8OY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_heh4AMUV, 0, m, &cSlice_heh4AMUV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4zdpQdm7, 0, m, &cSlice_4zdpQdm7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_P962oPJw, 0, m, &cSlice_P962oPJw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tUswvCnQ, 0, m, &cSlice_tUswvCnQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_45c01XcB, 0, m, &cSlice_45c01XcB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HgyEagvo, 0, m, &cSlice_HgyEagvo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3uyneX1E, 0, m, &cSlice_3uyneX1E_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2MUm7YOO, 0, m, &cSlice_2MUm7YOO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yuTBEsBs, 0, m, &cSlice_yuTBEsBs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Kp6HvAz, 0, m, &cSlice_2Kp6HvAz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7PdJnF1u, 0, m, &cSlice_7PdJnF1u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yrKzNWW9, 0, m, &cSlice_yrKzNWW9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NIHb0fGz, 0, m, &cSlice_NIHb0fGz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7m48MUOp, 0, m, &cSlice_7m48MUOp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cB6iDAve, 0, m, &cSlice_cB6iDAve_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t57ogDDP, 0, m, &cSlice_t57ogDDP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_snCrrtSv, 0, m, &cSlice_snCrrtSv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VIg28b7u, 0, m, &cSlice_VIg28b7u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wyow9UyE, 0, m, &cSlice_Wyow9UyE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Q2ibHK3m, 0, m, &cSlice_Q2ibHK3m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BQetlPBG, 0, m, &cSlice_BQetlPBG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_913OjPrJ, 0, m, &cSlice_913OjPrJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5vaFCJMg, 0, m, &cSlice_5vaFCJMg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oZHIDeBv, 0, m, &cSlice_oZHIDeBv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gjI4kaha, 0, m, &cSlice_gjI4kaha_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xyPHrKfb, 0, m, &cSlice_xyPHrKfb_sendMessage);
}

void Heavy_Echomatica::cMsg_bltzkcM0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_noDy0hPc, 0, m, &cSlice_noDy0hPc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8b7rR8OY, 0, m, &cSlice_8b7rR8OY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_heh4AMUV, 0, m, &cSlice_heh4AMUV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4zdpQdm7, 0, m, &cSlice_4zdpQdm7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_P962oPJw, 0, m, &cSlice_P962oPJw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tUswvCnQ, 0, m, &cSlice_tUswvCnQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_45c01XcB, 0, m, &cSlice_45c01XcB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HgyEagvo, 0, m, &cSlice_HgyEagvo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3uyneX1E, 0, m, &cSlice_3uyneX1E_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2MUm7YOO, 0, m, &cSlice_2MUm7YOO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yuTBEsBs, 0, m, &cSlice_yuTBEsBs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Kp6HvAz, 0, m, &cSlice_2Kp6HvAz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7PdJnF1u, 0, m, &cSlice_7PdJnF1u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yrKzNWW9, 0, m, &cSlice_yrKzNWW9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NIHb0fGz, 0, m, &cSlice_NIHb0fGz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7m48MUOp, 0, m, &cSlice_7m48MUOp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cB6iDAve, 0, m, &cSlice_cB6iDAve_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t57ogDDP, 0, m, &cSlice_t57ogDDP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_snCrrtSv, 0, m, &cSlice_snCrrtSv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VIg28b7u, 0, m, &cSlice_VIg28b7u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wyow9UyE, 0, m, &cSlice_Wyow9UyE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Q2ibHK3m, 0, m, &cSlice_Q2ibHK3m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BQetlPBG, 0, m, &cSlice_BQetlPBG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_913OjPrJ, 0, m, &cSlice_913OjPrJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5vaFCJMg, 0, m, &cSlice_5vaFCJMg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oZHIDeBv, 0, m, &cSlice_oZHIDeBv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gjI4kaha, 0, m, &cSlice_gjI4kaha_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xyPHrKfb, 0, m, &cSlice_xyPHrKfb_sendMessage);
}

void Heavy_Echomatica::cMsg_LBtD4jri_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_noDy0hPc, 0, m, &cSlice_noDy0hPc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8b7rR8OY, 0, m, &cSlice_8b7rR8OY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_heh4AMUV, 0, m, &cSlice_heh4AMUV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4zdpQdm7, 0, m, &cSlice_4zdpQdm7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_P962oPJw, 0, m, &cSlice_P962oPJw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tUswvCnQ, 0, m, &cSlice_tUswvCnQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_45c01XcB, 0, m, &cSlice_45c01XcB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HgyEagvo, 0, m, &cSlice_HgyEagvo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3uyneX1E, 0, m, &cSlice_3uyneX1E_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2MUm7YOO, 0, m, &cSlice_2MUm7YOO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yuTBEsBs, 0, m, &cSlice_yuTBEsBs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Kp6HvAz, 0, m, &cSlice_2Kp6HvAz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7PdJnF1u, 0, m, &cSlice_7PdJnF1u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yrKzNWW9, 0, m, &cSlice_yrKzNWW9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NIHb0fGz, 0, m, &cSlice_NIHb0fGz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7m48MUOp, 0, m, &cSlice_7m48MUOp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cB6iDAve, 0, m, &cSlice_cB6iDAve_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t57ogDDP, 0, m, &cSlice_t57ogDDP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_snCrrtSv, 0, m, &cSlice_snCrrtSv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VIg28b7u, 0, m, &cSlice_VIg28b7u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wyow9UyE, 0, m, &cSlice_Wyow9UyE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Q2ibHK3m, 0, m, &cSlice_Q2ibHK3m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BQetlPBG, 0, m, &cSlice_BQetlPBG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_913OjPrJ, 0, m, &cSlice_913OjPrJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5vaFCJMg, 0, m, &cSlice_5vaFCJMg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oZHIDeBv, 0, m, &cSlice_oZHIDeBv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gjI4kaha, 0, m, &cSlice_gjI4kaha_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xyPHrKfb, 0, m, &cSlice_xyPHrKfb_sendMessage);
}

void Heavy_Echomatica::cMsg_Krp6wGyE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_noDy0hPc, 0, m, &cSlice_noDy0hPc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8b7rR8OY, 0, m, &cSlice_8b7rR8OY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_heh4AMUV, 0, m, &cSlice_heh4AMUV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4zdpQdm7, 0, m, &cSlice_4zdpQdm7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_P962oPJw, 0, m, &cSlice_P962oPJw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tUswvCnQ, 0, m, &cSlice_tUswvCnQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_45c01XcB, 0, m, &cSlice_45c01XcB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HgyEagvo, 0, m, &cSlice_HgyEagvo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3uyneX1E, 0, m, &cSlice_3uyneX1E_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2MUm7YOO, 0, m, &cSlice_2MUm7YOO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yuTBEsBs, 0, m, &cSlice_yuTBEsBs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Kp6HvAz, 0, m, &cSlice_2Kp6HvAz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7PdJnF1u, 0, m, &cSlice_7PdJnF1u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yrKzNWW9, 0, m, &cSlice_yrKzNWW9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NIHb0fGz, 0, m, &cSlice_NIHb0fGz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7m48MUOp, 0, m, &cSlice_7m48MUOp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cB6iDAve, 0, m, &cSlice_cB6iDAve_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t57ogDDP, 0, m, &cSlice_t57ogDDP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_snCrrtSv, 0, m, &cSlice_snCrrtSv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VIg28b7u, 0, m, &cSlice_VIg28b7u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wyow9UyE, 0, m, &cSlice_Wyow9UyE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Q2ibHK3m, 0, m, &cSlice_Q2ibHK3m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BQetlPBG, 0, m, &cSlice_BQetlPBG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_913OjPrJ, 0, m, &cSlice_913OjPrJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5vaFCJMg, 0, m, &cSlice_5vaFCJMg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oZHIDeBv, 0, m, &cSlice_oZHIDeBv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gjI4kaha, 0, m, &cSlice_gjI4kaha_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xyPHrKfb, 0, m, &cSlice_xyPHrKfb_sendMessage);
}

void Heavy_Echomatica::cMsg_EBmZDYfr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_noDy0hPc, 0, m, &cSlice_noDy0hPc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8b7rR8OY, 0, m, &cSlice_8b7rR8OY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_heh4AMUV, 0, m, &cSlice_heh4AMUV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4zdpQdm7, 0, m, &cSlice_4zdpQdm7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_P962oPJw, 0, m, &cSlice_P962oPJw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tUswvCnQ, 0, m, &cSlice_tUswvCnQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_45c01XcB, 0, m, &cSlice_45c01XcB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HgyEagvo, 0, m, &cSlice_HgyEagvo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3uyneX1E, 0, m, &cSlice_3uyneX1E_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2MUm7YOO, 0, m, &cSlice_2MUm7YOO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yuTBEsBs, 0, m, &cSlice_yuTBEsBs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Kp6HvAz, 0, m, &cSlice_2Kp6HvAz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7PdJnF1u, 0, m, &cSlice_7PdJnF1u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yrKzNWW9, 0, m, &cSlice_yrKzNWW9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NIHb0fGz, 0, m, &cSlice_NIHb0fGz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7m48MUOp, 0, m, &cSlice_7m48MUOp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cB6iDAve, 0, m, &cSlice_cB6iDAve_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t57ogDDP, 0, m, &cSlice_t57ogDDP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_snCrrtSv, 0, m, &cSlice_snCrrtSv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VIg28b7u, 0, m, &cSlice_VIg28b7u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wyow9UyE, 0, m, &cSlice_Wyow9UyE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Q2ibHK3m, 0, m, &cSlice_Q2ibHK3m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BQetlPBG, 0, m, &cSlice_BQetlPBG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_913OjPrJ, 0, m, &cSlice_913OjPrJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5vaFCJMg, 0, m, &cSlice_5vaFCJMg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oZHIDeBv, 0, m, &cSlice_oZHIDeBv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gjI4kaha, 0, m, &cSlice_gjI4kaha_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xyPHrKfb, 0, m, &cSlice_xyPHrKfb_sendMessage);
}

void Heavy_Echomatica::cMsg_chrmwIn4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_noDy0hPc, 0, m, &cSlice_noDy0hPc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8b7rR8OY, 0, m, &cSlice_8b7rR8OY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_heh4AMUV, 0, m, &cSlice_heh4AMUV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4zdpQdm7, 0, m, &cSlice_4zdpQdm7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_P962oPJw, 0, m, &cSlice_P962oPJw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tUswvCnQ, 0, m, &cSlice_tUswvCnQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_45c01XcB, 0, m, &cSlice_45c01XcB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HgyEagvo, 0, m, &cSlice_HgyEagvo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3uyneX1E, 0, m, &cSlice_3uyneX1E_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2MUm7YOO, 0, m, &cSlice_2MUm7YOO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yuTBEsBs, 0, m, &cSlice_yuTBEsBs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Kp6HvAz, 0, m, &cSlice_2Kp6HvAz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7PdJnF1u, 0, m, &cSlice_7PdJnF1u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yrKzNWW9, 0, m, &cSlice_yrKzNWW9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NIHb0fGz, 0, m, &cSlice_NIHb0fGz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7m48MUOp, 0, m, &cSlice_7m48MUOp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cB6iDAve, 0, m, &cSlice_cB6iDAve_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t57ogDDP, 0, m, &cSlice_t57ogDDP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_snCrrtSv, 0, m, &cSlice_snCrrtSv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VIg28b7u, 0, m, &cSlice_VIg28b7u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wyow9UyE, 0, m, &cSlice_Wyow9UyE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Q2ibHK3m, 0, m, &cSlice_Q2ibHK3m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BQetlPBG, 0, m, &cSlice_BQetlPBG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_913OjPrJ, 0, m, &cSlice_913OjPrJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5vaFCJMg, 0, m, &cSlice_5vaFCJMg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oZHIDeBv, 0, m, &cSlice_oZHIDeBv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gjI4kaha, 0, m, &cSlice_gjI4kaha_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xyPHrKfb, 0, m, &cSlice_xyPHrKfb_sendMessage);
}

void Heavy_Echomatica::cMsg_60GPqJqM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_noDy0hPc, 0, m, &cSlice_noDy0hPc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8b7rR8OY, 0, m, &cSlice_8b7rR8OY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_heh4AMUV, 0, m, &cSlice_heh4AMUV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4zdpQdm7, 0, m, &cSlice_4zdpQdm7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_P962oPJw, 0, m, &cSlice_P962oPJw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tUswvCnQ, 0, m, &cSlice_tUswvCnQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_45c01XcB, 0, m, &cSlice_45c01XcB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HgyEagvo, 0, m, &cSlice_HgyEagvo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3uyneX1E, 0, m, &cSlice_3uyneX1E_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2MUm7YOO, 0, m, &cSlice_2MUm7YOO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yuTBEsBs, 0, m, &cSlice_yuTBEsBs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Kp6HvAz, 0, m, &cSlice_2Kp6HvAz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7PdJnF1u, 0, m, &cSlice_7PdJnF1u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yrKzNWW9, 0, m, &cSlice_yrKzNWW9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NIHb0fGz, 0, m, &cSlice_NIHb0fGz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7m48MUOp, 0, m, &cSlice_7m48MUOp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cB6iDAve, 0, m, &cSlice_cB6iDAve_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t57ogDDP, 0, m, &cSlice_t57ogDDP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_snCrrtSv, 0, m, &cSlice_snCrrtSv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VIg28b7u, 0, m, &cSlice_VIg28b7u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wyow9UyE, 0, m, &cSlice_Wyow9UyE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Q2ibHK3m, 0, m, &cSlice_Q2ibHK3m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BQetlPBG, 0, m, &cSlice_BQetlPBG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_913OjPrJ, 0, m, &cSlice_913OjPrJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5vaFCJMg, 0, m, &cSlice_5vaFCJMg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oZHIDeBv, 0, m, &cSlice_oZHIDeBv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gjI4kaha, 0, m, &cSlice_gjI4kaha_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xyPHrKfb, 0, m, &cSlice_xyPHrKfb_sendMessage);
}

void Heavy_Echomatica::cMsg_DXWT0Otg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_noDy0hPc, 0, m, &cSlice_noDy0hPc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8b7rR8OY, 0, m, &cSlice_8b7rR8OY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_heh4AMUV, 0, m, &cSlice_heh4AMUV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4zdpQdm7, 0, m, &cSlice_4zdpQdm7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_P962oPJw, 0, m, &cSlice_P962oPJw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tUswvCnQ, 0, m, &cSlice_tUswvCnQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_45c01XcB, 0, m, &cSlice_45c01XcB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HgyEagvo, 0, m, &cSlice_HgyEagvo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3uyneX1E, 0, m, &cSlice_3uyneX1E_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2MUm7YOO, 0, m, &cSlice_2MUm7YOO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yuTBEsBs, 0, m, &cSlice_yuTBEsBs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Kp6HvAz, 0, m, &cSlice_2Kp6HvAz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7PdJnF1u, 0, m, &cSlice_7PdJnF1u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yrKzNWW9, 0, m, &cSlice_yrKzNWW9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NIHb0fGz, 0, m, &cSlice_NIHb0fGz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7m48MUOp, 0, m, &cSlice_7m48MUOp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cB6iDAve, 0, m, &cSlice_cB6iDAve_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t57ogDDP, 0, m, &cSlice_t57ogDDP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_snCrrtSv, 0, m, &cSlice_snCrrtSv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VIg28b7u, 0, m, &cSlice_VIg28b7u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wyow9UyE, 0, m, &cSlice_Wyow9UyE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Q2ibHK3m, 0, m, &cSlice_Q2ibHK3m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BQetlPBG, 0, m, &cSlice_BQetlPBG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_913OjPrJ, 0, m, &cSlice_913OjPrJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5vaFCJMg, 0, m, &cSlice_5vaFCJMg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oZHIDeBv, 0, m, &cSlice_oZHIDeBv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gjI4kaha, 0, m, &cSlice_gjI4kaha_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xyPHrKfb, 0, m, &cSlice_xyPHrKfb_sendMessage);
}

void Heavy_Echomatica::cMsg_oDMcfFFL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_noDy0hPc, 0, m, &cSlice_noDy0hPc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8b7rR8OY, 0, m, &cSlice_8b7rR8OY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_heh4AMUV, 0, m, &cSlice_heh4AMUV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4zdpQdm7, 0, m, &cSlice_4zdpQdm7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_P962oPJw, 0, m, &cSlice_P962oPJw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tUswvCnQ, 0, m, &cSlice_tUswvCnQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_45c01XcB, 0, m, &cSlice_45c01XcB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HgyEagvo, 0, m, &cSlice_HgyEagvo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3uyneX1E, 0, m, &cSlice_3uyneX1E_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2MUm7YOO, 0, m, &cSlice_2MUm7YOO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yuTBEsBs, 0, m, &cSlice_yuTBEsBs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Kp6HvAz, 0, m, &cSlice_2Kp6HvAz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7PdJnF1u, 0, m, &cSlice_7PdJnF1u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yrKzNWW9, 0, m, &cSlice_yrKzNWW9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NIHb0fGz, 0, m, &cSlice_NIHb0fGz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7m48MUOp, 0, m, &cSlice_7m48MUOp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cB6iDAve, 0, m, &cSlice_cB6iDAve_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t57ogDDP, 0, m, &cSlice_t57ogDDP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_snCrrtSv, 0, m, &cSlice_snCrrtSv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VIg28b7u, 0, m, &cSlice_VIg28b7u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wyow9UyE, 0, m, &cSlice_Wyow9UyE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Q2ibHK3m, 0, m, &cSlice_Q2ibHK3m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BQetlPBG, 0, m, &cSlice_BQetlPBG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_913OjPrJ, 0, m, &cSlice_913OjPrJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5vaFCJMg, 0, m, &cSlice_5vaFCJMg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oZHIDeBv, 0, m, &cSlice_oZHIDeBv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gjI4kaha, 0, m, &cSlice_gjI4kaha_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xyPHrKfb, 0, m, &cSlice_xyPHrKfb_sendMessage);
}

void Heavy_Echomatica::cMsg_k61bORtG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_noDy0hPc, 0, m, &cSlice_noDy0hPc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8b7rR8OY, 0, m, &cSlice_8b7rR8OY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_heh4AMUV, 0, m, &cSlice_heh4AMUV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4zdpQdm7, 0, m, &cSlice_4zdpQdm7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_P962oPJw, 0, m, &cSlice_P962oPJw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tUswvCnQ, 0, m, &cSlice_tUswvCnQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_45c01XcB, 0, m, &cSlice_45c01XcB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HgyEagvo, 0, m, &cSlice_HgyEagvo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3uyneX1E, 0, m, &cSlice_3uyneX1E_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2MUm7YOO, 0, m, &cSlice_2MUm7YOO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yuTBEsBs, 0, m, &cSlice_yuTBEsBs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Kp6HvAz, 0, m, &cSlice_2Kp6HvAz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7PdJnF1u, 0, m, &cSlice_7PdJnF1u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yrKzNWW9, 0, m, &cSlice_yrKzNWW9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NIHb0fGz, 0, m, &cSlice_NIHb0fGz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7m48MUOp, 0, m, &cSlice_7m48MUOp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cB6iDAve, 0, m, &cSlice_cB6iDAve_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t57ogDDP, 0, m, &cSlice_t57ogDDP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_snCrrtSv, 0, m, &cSlice_snCrrtSv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VIg28b7u, 0, m, &cSlice_VIg28b7u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wyow9UyE, 0, m, &cSlice_Wyow9UyE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Q2ibHK3m, 0, m, &cSlice_Q2ibHK3m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_BQetlPBG, 0, m, &cSlice_BQetlPBG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_913OjPrJ, 0, m, &cSlice_913OjPrJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5vaFCJMg, 0, m, &cSlice_5vaFCJMg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oZHIDeBv, 0, m, &cSlice_oZHIDeBv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gjI4kaha, 0, m, &cSlice_gjI4kaha_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xyPHrKfb, 0, m, &cSlice_xyPHrKfb_sendMessage);
}

void Heavy_Echomatica::cMsg_d2q0YPsn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_tV16LmjN_sendMessage);
}

void Heavy_Echomatica::cSystem_tV16LmjN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_rVn4rOaT_sendMessage);
}

void Heavy_Echomatica::cVar_C9hCWgPP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4lqPvBle_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_dzX3nkjO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_DjC7jqoQ_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_eO0miFS7, m);
}

void Heavy_Echomatica::cBinop_rVn4rOaT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Hd5bFdrc, m);
}

void Heavy_Echomatica::cMsg_4lqPvBle_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_dzX3nkjO_sendMessage);
}

void Heavy_Echomatica::cBinop_DjC7jqoQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_GJmWRWqF, m);
}

void Heavy_Echomatica::cMsg_3NXwaDSC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_pvIL9hRD_sendMessage);
}

void Heavy_Echomatica::cSystem_pvIL9hRD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_n5dgfdfi_sendMessage);
}

void Heavy_Echomatica::cVar_VAxEQ0fi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wWb4AXjP_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_xnBLk2DG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_ikTNHDim_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_qg2cftoR, m);
}

void Heavy_Echomatica::cBinop_n5dgfdfi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_pf3st23O, m);
}

void Heavy_Echomatica::cMsg_wWb4AXjP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_xnBLk2DG_sendMessage);
}

void Heavy_Echomatica::cBinop_ikTNHDim_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_oOOgIRvS, m);
}

void Heavy_Echomatica::cVar_vWkcWIoQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_Pumx632Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_jGIzxHLJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_7RlGxVG4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_apVcMp1K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_VVE2Kt6g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_7GxwexHU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_aeizXvUv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_Dp4NRqi3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_5oB0TNdx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_5aYGuwGe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_MOOXRbyZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cMsg_DmESlKbk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_c4ELHIar_sendMessage);
}

void Heavy_Echomatica::cSystem_c4ELHIar_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_o0F0y5jg_sendMessage);
}

void Heavy_Echomatica::cDelay_SdIIHCmU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_SdIIHCmU, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Xeif9KXc, 0, m, &cDelay_Xeif9KXc_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_SdIIHCmU, 0, m, &cDelay_SdIIHCmU_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_S7OHbnAT, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_Xeif9KXc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Xeif9KXc, m);
  cMsg_MKuvnU2h_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_BZh2BTFL_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_tDB8I0tL_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_LCd85r9b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nz7cMT4R_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_wKnPPZ5A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qMCAl2zw_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_SdIIHCmU, 2, m, &cDelay_SdIIHCmU_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uj2bD2LH_sendMessage);
}

void Heavy_Echomatica::cMsg_nz7cMT4R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_wKnPPZ5A, 0, m, &hTable_wKnPPZ5A_sendMessage);
}

void Heavy_Echomatica::cBinop_o0F0y5jg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5000.0f, 0, m, &cBinop_LCd85r9b_sendMessage);
}

void Heavy_Echomatica::cMsg_MKuvnU2h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_wKnPPZ5A, 0, m, &hTable_wKnPPZ5A_sendMessage);
}

void Heavy_Echomatica::cCast_uj2bD2LH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_SdIIHCmU, 0, m, &cDelay_SdIIHCmU_sendMessage);
}

void Heavy_Echomatica::cMsg_qMCAl2zw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_Xeif9KXc, 2, m, &cDelay_Xeif9KXc_sendMessage);
}

void Heavy_Echomatica::cMsg_tDB8I0tL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_S7OHbnAT, 1, m, NULL);
}

void Heavy_Echomatica::cPack_Pgv4RTlg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_OSblXxr0, 0, m, NULL);
}

void Heavy_Echomatica::cPack_y35QIZjt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_tzR3ZRxf, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_FGzwVkOG, 0, m, &cVar_FGzwVkOG_sendMessage);
}

void Heavy_Echomatica::cPack_cHkaWkP3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_fvXCYvNM, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_lb6oq98F, 0, m, &cVar_lb6oq98F_sendMessage);
}

void Heavy_Echomatica::cPack_rCRvEVLV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_H3zmJvTV, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_i9pqN9SU, 0, m, &cVar_i9pqN9SU_sendMessage);
}

void Heavy_Echomatica::cPack_bKBR96yD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_7p1Kzr1Z, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_UYunUFjf, 0, m, &cVar_UYunUFjf_sendMessage);
}

void Heavy_Echomatica::cPack_9vCrgsCy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_B4pzA46h, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_9qI8lVJm, 0, m, &cVar_9qI8lVJm_sendMessage);
}

void Heavy_Echomatica::cPack_tL7M6CtQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_KfZIjqWu, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_boisjjXZ, 0, m, &cVar_boisjjXZ_sendMessage);
}

void Heavy_Echomatica::cVar_Py3y35Ly_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4jBEQSlo, HV_BINOP_MULTIPLY, 0, m, &cBinop_4jBEQSlo_sendMessage);
}

void Heavy_Echomatica::cMsg_MLKmJTFQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_13YyPXUO_sendMessage);
}

void Heavy_Echomatica::cSystem_13YyPXUO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_828SG2NI_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_4jBEQSlo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_Q2yxFmql_sendMessage);
}

void Heavy_Echomatica::cBinop_7Ecv5bwL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4jBEQSlo, HV_BINOP_MULTIPLY, 1, m, &cBinop_4jBEQSlo_sendMessage);
}

void Heavy_Echomatica::cMsg_828SG2NI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_7Ecv5bwL_sendMessage);
}

void Heavy_Echomatica::cBinop_Q2yxFmql_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_i580GztT_sendMessage);
}

void Heavy_Echomatica::cBinop_i580GztT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_PSzXwVPl_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_NRFZb0nk, m);
}

void Heavy_Echomatica::cBinop_PSzXwVPl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_wO06QDAD, m);
}

void Heavy_Echomatica::cSlice_noDy0hPc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_nWexBrqo_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_8b7rR8OY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_UVxQZG8J_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_heh4AMUV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_egeJPsq9_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_4zdpQdm7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_vQj7e6aJ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_P962oPJw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_TnFxLfEi_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_tUswvCnQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_n7tBDO4Y_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_45c01XcB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_rTnyc6XD_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_HgyEagvo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_EEC9YcnC_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_3uyneX1E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_56inGNGT_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_2MUm7YOO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_YrFJIvQh_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_yuTBEsBs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_vbxLHsEk_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_2Kp6HvAz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_hZaQbzcP_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_7PdJnF1u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_JuLuW6vl_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_yrKzNWW9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_4Tb9A2JR_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_NIHb0fGz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_0BuVrrgL_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_7m48MUOp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_luzTO99p_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_cB6iDAve_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_WHScJTRa_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_t57ogDDP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_iJosRqvU_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_snCrrtSv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_6xx3MVU8_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_VIg28b7u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_OcPELRhl_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_Wyow9UyE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_mYGmCK93_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_Q2ibHK3m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Hgw91QeY_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_BQetlPBG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_E1Te7Sub_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_913OjPrJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_bn0kPA7U_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_5vaFCJMg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_fAcdweqe_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_oZHIDeBv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_HWa4h6zT_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_gjI4kaha_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_1SFog2B0_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_xyPHrKfb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_oylvJ0pF_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_ut4WNjBd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_aUjctBCx_sendMessage);
}

void Heavy_Echomatica::cBinop_aUjctBCx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_aUNHjzSM_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_da2Ab6JG_sendMessage);
}

void Heavy_Echomatica::cVar_Nyyk4lWE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_LhVnc03O_sendMessage);
}

void Heavy_Echomatica::cMsg_OBIVl7rN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Y4G73f6P_sendMessage);
}

void Heavy_Echomatica::cSystem_Y4G73f6P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lmmqNnvG, HV_BINOP_DIVIDE, 1, m, &cBinop_lmmqNnvG_sendMessage);
}

void Heavy_Echomatica::cBinop_aUNHjzSM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_mWAS0uMn_sendMessage);
}

void Heavy_Echomatica::cBinop_mWAS0uMn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_QoHxJYF6, m);
}

void Heavy_Echomatica::cMsg_R89ogspQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_wtMb8vL1_sendMessage);
}

void Heavy_Echomatica::cBinop_wtMb8vL1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_ut4WNjBd_sendMessage);
}

void Heavy_Echomatica::cBinop_da2Ab6JG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_3FcvCOCs, m);
}

void Heavy_Echomatica::cBinop_LhVnc03O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_1iq3xL16_sendMessage);
}

void Heavy_Echomatica::cBinop_1iq3xL16_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lmmqNnvG, HV_BINOP_DIVIDE, 0, m, &cBinop_lmmqNnvG_sendMessage);
}

void Heavy_Echomatica::cBinop_lmmqNnvG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_R89ogspQ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_J8HsGAGj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_n3wQWPjh_sendMessage);
}

void Heavy_Echomatica::cBinop_n3wQWPjh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_OckgTKbS_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_yzPnHtBE_sendMessage);
}

void Heavy_Echomatica::cVar_YDRcchLB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_uDLkygZX_sendMessage);
}

void Heavy_Echomatica::cMsg_281dV4zl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_0n4KZXLa_sendMessage);
}

void Heavy_Echomatica::cSystem_0n4KZXLa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DvtxDE3d, HV_BINOP_DIVIDE, 1, m, &cBinop_DvtxDE3d_sendMessage);
}

void Heavy_Echomatica::cBinop_OckgTKbS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_hfmhIbOO_sendMessage);
}

void Heavy_Echomatica::cBinop_hfmhIbOO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_8VUnt41R, m);
}

void Heavy_Echomatica::cMsg_ntLs1VDY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_HUU1AHPc_sendMessage);
}

void Heavy_Echomatica::cBinop_HUU1AHPc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_J8HsGAGj_sendMessage);
}

void Heavy_Echomatica::cBinop_yzPnHtBE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_VdMyYjOh, m);
}

void Heavy_Echomatica::cBinop_uDLkygZX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_x94YYPi5_sendMessage);
}

void Heavy_Echomatica::cBinop_x94YYPi5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DvtxDE3d, HV_BINOP_DIVIDE, 0, m, &cBinop_DvtxDE3d_sendMessage);
}

void Heavy_Echomatica::cBinop_DvtxDE3d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ntLs1VDY_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_ndAmqXjk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_IbwVNwJx_sendMessage);
}

void Heavy_Echomatica::cBinop_IbwVNwJx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_fUfDLrvX_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_XNNmqgPL_sendMessage);
}

void Heavy_Echomatica::cVar_W5O9gnqL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_rrTFQl06_sendMessage);
}

void Heavy_Echomatica::cMsg_QSbRCFdS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_7ySIcf3M_sendMessage);
}

void Heavy_Echomatica::cSystem_7ySIcf3M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_heKxj1kv, HV_BINOP_DIVIDE, 1, m, &cBinop_heKxj1kv_sendMessage);
}

void Heavy_Echomatica::cBinop_fUfDLrvX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_7c6qrXEc_sendMessage);
}

void Heavy_Echomatica::cBinop_7c6qrXEc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_UFOgnYfn, m);
}

void Heavy_Echomatica::cMsg_yJ2upXIv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_vLO1kCTV_sendMessage);
}

void Heavy_Echomatica::cBinop_vLO1kCTV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_ndAmqXjk_sendMessage);
}

void Heavy_Echomatica::cBinop_XNNmqgPL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_41AmtaqF, m);
}

void Heavy_Echomatica::cBinop_rrTFQl06_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_19gNyRGq_sendMessage);
}

void Heavy_Echomatica::cBinop_19gNyRGq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_heKxj1kv, HV_BINOP_DIVIDE, 0, m, &cBinop_heKxj1kv_sendMessage);
}

void Heavy_Echomatica::cBinop_heKxj1kv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_yJ2upXIv_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_7F58Cvkq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WIhRargy, HV_BINOP_MULTIPLY, 0, m, &cBinop_WIhRargy_sendMessage);
}

void Heavy_Echomatica::cMsg_saHMmNmn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_CSDgzuuP_sendMessage);
}

void Heavy_Echomatica::cSystem_CSDgzuuP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vF4zkLk8_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_WIhRargy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_gtvdqudS_sendMessage);
}

void Heavy_Echomatica::cBinop_tpxeAodl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WIhRargy, HV_BINOP_MULTIPLY, 1, m, &cBinop_WIhRargy_sendMessage);
}

void Heavy_Echomatica::cMsg_vF4zkLk8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_tpxeAodl_sendMessage);
}

void Heavy_Echomatica::cBinop_gtvdqudS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_ejZusJZf_sendMessage);
}

void Heavy_Echomatica::cBinop_ejZusJZf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_624bJK1K_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_MRlyw5PH, m);
}

void Heavy_Echomatica::cBinop_624bJK1K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_oksy9V6c, m);
}

void Heavy_Echomatica::cVar_udYO9Bfw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Hkj2GC41, HV_BINOP_MULTIPLY, 0, m, &cBinop_Hkj2GC41_sendMessage);
}

void Heavy_Echomatica::cMsg_G4hDa23p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_gJdppXwm_sendMessage);
}

void Heavy_Echomatica::cSystem_gJdppXwm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zfAO8K32_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_Hkj2GC41_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_IxXxI5JE_sendMessage);
}

void Heavy_Echomatica::cBinop_kFdLGJtW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Hkj2GC41, HV_BINOP_MULTIPLY, 1, m, &cBinop_Hkj2GC41_sendMessage);
}

void Heavy_Echomatica::cMsg_zfAO8K32_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_kFdLGJtW_sendMessage);
}

void Heavy_Echomatica::cBinop_IxXxI5JE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_aJPvdRrh_sendMessage);
}

void Heavy_Echomatica::cBinop_aJPvdRrh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_Zz6b0qHm_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_0xvd63pl, m);
}

void Heavy_Echomatica::cBinop_Zz6b0qHm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_266zoWGY, m);
}

void Heavy_Echomatica::cVar_u1Y7Yzcp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rgrMFKpB, HV_BINOP_MULTIPLY, 0, m, &cBinop_rgrMFKpB_sendMessage);
}

void Heavy_Echomatica::cMsg_kJ0QHlj6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_KEUx6eWq_sendMessage);
}

void Heavy_Echomatica::cSystem_KEUx6eWq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_X5VGaKhc_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_rgrMFKpB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_s42ptPH4_sendMessage);
}

void Heavy_Echomatica::cBinop_c76VDO1R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rgrMFKpB, HV_BINOP_MULTIPLY, 1, m, &cBinop_rgrMFKpB_sendMessage);
}

void Heavy_Echomatica::cMsg_X5VGaKhc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_c76VDO1R_sendMessage);
}

void Heavy_Echomatica::cBinop_s42ptPH4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_K4zs65sW_sendMessage);
}

void Heavy_Echomatica::cBinop_K4zs65sW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_isin9Yw9_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_wArrtoph, m);
}

void Heavy_Echomatica::cBinop_isin9Yw9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_lReZsROf, m);
}

void Heavy_Echomatica::cMsg_473JzZNR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_zaISGAHy_sendMessage);
}

void Heavy_Echomatica::cSystem_zaISGAHy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aODQHZdv, HV_BINOP_DIVIDE, 1, m, &cBinop_aODQHZdv_sendMessage);
}

void Heavy_Echomatica::cVar_Q8uPGVtP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_m8SAobAF_sendMessage);
}

void Heavy_Echomatica::cVar_2emU3W3b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.001f, 0, m, &cBinop_FENQvimD_sendMessage);
}

void Heavy_Echomatica::cUnop_UfEghOHn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_v1j0Dhfy_sendMessage);
}

void Heavy_Echomatica::cBinop_aODQHZdv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1yus6OXo, HV_BINOP_MULTIPLY, 1, m, &cBinop_1yus6OXo_sendMessage);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_UfEghOHn_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_V56oP7K6, HV_BINOP_DIVIDE, 0, m, &cBinop_V56oP7K6_sendMessage);
}

void Heavy_Echomatica::cBinop_m8SAobAF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aODQHZdv, HV_BINOP_DIVIDE, 0, m, &cBinop_aODQHZdv_sendMessage);
}

void Heavy_Echomatica::cBinop_V56oP7K6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_UH3rvMY0_sendMessage);
}

void Heavy_Echomatica::cBinop_8OqldZkw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Ei611T4m_sendMessage);
}

void Heavy_Echomatica::cBinop_Ei611T4m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_KYy26tj4_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CmY8QyXF, HV_BINOP_MULTIPLY, 0, m, &cBinop_CmY8QyXF_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_1yus6OXo, HV_BINOP_MULTIPLY, 0, m, &cBinop_1yus6OXo_sendMessage);
}

void Heavy_Echomatica::cBinop_v1j0Dhfy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CmY8QyXF, HV_BINOP_MULTIPLY, 1, m, &cBinop_CmY8QyXF_sendMessage);
}

void Heavy_Echomatica::cBinop_CmY8QyXF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_oYZlhKE5_sendMessage);
}

void Heavy_Echomatica::cCast_3QQFpSnB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Q8uPGVtP, 0, m, &cVar_Q8uPGVtP_sendMessage);
}

void Heavy_Echomatica::cBinop_pzKd0UwO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_eWJAusvh_sendMessage);
}

void Heavy_Echomatica::cBinop_eWJAusvh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_jbV4vIAF, 5, m);
}

void Heavy_Echomatica::cBinop_oYZlhKE5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_jbV4vIAF, 4, m);
}

void Heavy_Echomatica::cBinop_aNOMwC4H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vDRz5xY3, HV_BINOP_MULTIPLY, 0, m, &cBinop_vDRz5xY3_sendMessage);
}

void Heavy_Echomatica::cBinop_1yus6OXo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qG2ppnIG, HV_BINOP_ADD, 1, m, &cBinop_qG2ppnIG_sendMessage);
}

void Heavy_Echomatica::cBinop_KYy26tj4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_pzKd0UwO_sendMessage);
}

void Heavy_Echomatica::cBinop_qG2ppnIG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vDRz5xY3, HV_BINOP_MULTIPLY, 1, m, &cBinop_vDRz5xY3_sendMessage);
}

void Heavy_Echomatica::cBinop_vDRz5xY3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_jbV4vIAF, 1, m);
}

void Heavy_Echomatica::cBinop_FENQvimD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_V56oP7K6, HV_BINOP_DIVIDE, 1, m, &cBinop_V56oP7K6_sendMessage);
}

void Heavy_Echomatica::cBinop_UH3rvMY0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_8OqldZkw_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_qG2ppnIG, HV_BINOP_ADD, 0, m, &cBinop_qG2ppnIG_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_aNOMwC4H_sendMessage);
}

void Heavy_Echomatica::cVar_FGzwVkOG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_lb6oq98F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_boisjjXZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_i9pqN9SU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_UYunUFjf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_9qI8lVJm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cSlice_LAaKQviM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_vMkuvtio, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_cUEWZGU1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_CGZLSzDU, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_3KDccdgf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_5LFdPE5q, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_xZSEPGv0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_VlocrFf9, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSwitchcase_S3QPC1ci_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DJCtr7df_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6rEKCjR1_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_DJCtr7df_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Uh3tjaY7_sendMessage);
}

void Heavy_Echomatica::cPack_VOa2M5L1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Jlyw8YlO, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_nV31qdwP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_tshp5jow_sendMessage);
}

void Heavy_Echomatica::cSystem_tshp5jow_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_KKY1XPMo_sendMessage);
}

void Heavy_Echomatica::cDelay_oP8Ln4US_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_oP8Ln4US, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_RolILfh2, 0, m, &cDelay_RolILfh2_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_oP8Ln4US, 0, m, &cDelay_oP8Ln4US_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_06alywv3, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_RolILfh2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_RolILfh2, m);
  cMsg_iy6lulZ5_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_AhhFQSQ9_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_XYlCWSh3_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_rLENOKDi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nrBBjdCg_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_BL4jeOBk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hVSKkloW_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_oP8Ln4US, 2, m, &cDelay_oP8Ln4US_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rMqHHGRc_sendMessage);
}

void Heavy_Echomatica::cMsg_nrBBjdCg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_BL4jeOBk, 0, m, &hTable_BL4jeOBk_sendMessage);
}

void Heavy_Echomatica::cBinop_KKY1XPMo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 40.0f, 0, m, &cBinop_rLENOKDi_sendMessage);
}

void Heavy_Echomatica::cMsg_iy6lulZ5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_BL4jeOBk, 0, m, &hTable_BL4jeOBk_sendMessage);
}

void Heavy_Echomatica::cCast_rMqHHGRc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_oP8Ln4US, 0, m, &cDelay_oP8Ln4US_sendMessage);
}

void Heavy_Echomatica::cMsg_hVSKkloW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_RolILfh2, 2, m, &cDelay_RolILfh2_sendMessage);
}

void Heavy_Echomatica::cMsg_XYlCWSh3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_06alywv3, 1, m, NULL);
}

void Heavy_Echomatica::cVar_wnzb07r1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_7RMajP9N, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_iy0Lj2gd, m);
}

void Heavy_Echomatica::cMsg_qqI1jOOX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_4inTJq4a_sendMessage);
}

void Heavy_Echomatica::cSystem_4inTJq4a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_sqbWD6b3_sendMessage);
}

void Heavy_Echomatica::cVar_myRk9DMx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dCNFcl0E_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_QCkU64tA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_wF8tp5ie_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_VLgulLnm, m);
}

void Heavy_Echomatica::cBinop_sqbWD6b3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_K4YimH6g, m);
}

void Heavy_Echomatica::cMsg_dCNFcl0E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_QCkU64tA_sendMessage);
}

void Heavy_Echomatica::cBinop_wF8tp5ie_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_5rEXnoHP, m);
}

void Heavy_Echomatica::cMsg_0XOkiWUS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_8T1nD5EZ_sendMessage);
}

void Heavy_Echomatica::cSystem_8T1nD5EZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_7ch07j3e_sendMessage);
}

void Heavy_Echomatica::cVar_U7rOPUEb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gE9Jpdsf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_5mz83rxQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_WMT3YPPk_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_auLJe7A8, m);
}

void Heavy_Echomatica::cBinop_7ch07j3e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_aFCrZv1Z, m);
}

void Heavy_Echomatica::cMsg_gE9Jpdsf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_5mz83rxQ_sendMessage);
}

void Heavy_Echomatica::cBinop_WMT3YPPk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_3pKrx9IR, m);
}

void Heavy_Echomatica::cMsg_bZuCuqH7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_PId5wNuy_sendMessage);
}

void Heavy_Echomatica::cSystem_PId5wNuy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_ye6ATiyh_sendMessage);
}

void Heavy_Echomatica::cDelay_IF0al2BF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_IF0al2BF, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_EgHexEIU, 0, m, &cDelay_EgHexEIU_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_IF0al2BF, 0, m, &cDelay_IF0al2BF_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_AUeWj0uT, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_EgHexEIU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_EgHexEIU, m);
  cMsg_wmVhFOzF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_pNGr9Ju8_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_u6exAsu0_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_45b5T68W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rCd8Vxa6_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_CRcXxreM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_h2frR8Pv_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_IF0al2BF, 2, m, &cDelay_IF0al2BF_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Zrn4vIny_sendMessage);
}

void Heavy_Echomatica::cMsg_rCd8Vxa6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_CRcXxreM, 0, m, &hTable_CRcXxreM_sendMessage);
}

void Heavy_Echomatica::cBinop_ye6ATiyh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 30.0f, 0, m, &cBinop_45b5T68W_sendMessage);
}

void Heavy_Echomatica::cMsg_wmVhFOzF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_CRcXxreM, 0, m, &hTable_CRcXxreM_sendMessage);
}

void Heavy_Echomatica::cCast_Zrn4vIny_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_IF0al2BF, 0, m, &cDelay_IF0al2BF_sendMessage);
}

void Heavy_Echomatica::cMsg_h2frR8Pv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_EgHexEIU, 2, m, &cDelay_EgHexEIU_sendMessage);
}

void Heavy_Echomatica::cMsg_u6exAsu0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_AUeWj0uT, 1, m, NULL);
}

void Heavy_Echomatica::cBinop_zRndjARs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_uWLCMbs6_sendMessage);
}

void Heavy_Echomatica::cBinop_uWLCMbs6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_r2EyimjP_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_w88Ccg2t_sendMessage);
}

void Heavy_Echomatica::cVar_RvIZoWOR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_RjU6QGSe_sendMessage);
}

void Heavy_Echomatica::cMsg_QG6PVnoD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_fYDNGXpY_sendMessage);
}

void Heavy_Echomatica::cSystem_fYDNGXpY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fDhAjrY0, HV_BINOP_DIVIDE, 1, m, &cBinop_fDhAjrY0_sendMessage);
}

void Heavy_Echomatica::cBinop_r2EyimjP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_kZjcoyae_sendMessage);
}

void Heavy_Echomatica::cBinop_kZjcoyae_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_PektZ6tU, m);
}

void Heavy_Echomatica::cMsg_IoeFUQWw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Mi8rvlZj_sendMessage);
}

void Heavy_Echomatica::cBinop_Mi8rvlZj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_zRndjARs_sendMessage);
}

void Heavy_Echomatica::cBinop_w88Ccg2t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_QxsCpNjs, m);
}

void Heavy_Echomatica::cBinop_RjU6QGSe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_Jq3UZcX4_sendMessage);
}

void Heavy_Echomatica::cBinop_Jq3UZcX4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fDhAjrY0, HV_BINOP_DIVIDE, 0, m, &cBinop_fDhAjrY0_sendMessage);
}

void Heavy_Echomatica::cBinop_fDhAjrY0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IoeFUQWw_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_P9hVmbJu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_IBTE3CYu_sendMessage);
}

void Heavy_Echomatica::cBinop_IBTE3CYu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_PpdPnx1k_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_VCY69Rez_sendMessage);
}

void Heavy_Echomatica::cVar_fvnoHgfJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_eGxlFNyI_sendMessage);
}

void Heavy_Echomatica::cMsg_o2KHeBd9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_FQq0Q7JQ_sendMessage);
}

void Heavy_Echomatica::cSystem_FQq0Q7JQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LLHbAYie, HV_BINOP_DIVIDE, 1, m, &cBinop_LLHbAYie_sendMessage);
}

void Heavy_Echomatica::cBinop_PpdPnx1k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_WKmkI29M_sendMessage);
}

void Heavy_Echomatica::cBinop_WKmkI29M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_nfcNoR4I, m);
}

void Heavy_Echomatica::cMsg_nseP17Iz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_sKIZ8YAC_sendMessage);
}

void Heavy_Echomatica::cBinop_sKIZ8YAC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_P9hVmbJu_sendMessage);
}

void Heavy_Echomatica::cBinop_VCY69Rez_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_GDbe0OYr, m);
}

void Heavy_Echomatica::cBinop_eGxlFNyI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_9QS8TFrI_sendMessage);
}

void Heavy_Echomatica::cBinop_9QS8TFrI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LLHbAYie, HV_BINOP_DIVIDE, 0, m, &cBinop_LLHbAYie_sendMessage);
}

void Heavy_Echomatica::cBinop_LLHbAYie_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nseP17Iz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_SAfwpzLI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_nYepie1l, 0, m, &cPack_nYepie1l_sendMessage);
}

void Heavy_Echomatica::cVar_5m4tXvcl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_EblKlg6I, 0, m, &cPack_EblKlg6I_sendMessage);
}

void Heavy_Echomatica::cVar_CguR1CEP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_epoYX78F_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cPack_EblKlg6I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_u2rFsbG6, 0, m, NULL);
}

void Heavy_Echomatica::cPack_nYepie1l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_pKFovPog, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_epoYX78F_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Gmojh55K_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_F2k3FT4L_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jkCHj1yZ_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_Gmojh55K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_UxWZLEHA_sendMessage(_c, 0, m);
  cMsg_Ysp0uBeX_sendMessage(_c, 0, m);
  cMsg_53lP1Gnf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_F2k3FT4L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_UxWZLEHA_sendMessage(_c, 0, m);
  cMsg_Ysp0uBeX_sendMessage(_c, 0, m);
  cMsg_BWGUB6X2_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_jkCHj1yZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oZS6VTLS_sendMessage(_c, 0, m);
  cMsg_Ik8RSZRf_sendMessage(_c, 0, m);
  cMsg_BWGUB6X2_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_NJeaR3jT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_NQ7BEcmp_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_cEmFsmDn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Zua7xQfI, HV_BINOP_DIVIDE, 0, m, &cBinop_Zua7xQfI_sendMessage);
}

void Heavy_Echomatica::cVar_TPRIhOf4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_T6RHZJBW, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_T6RHZJBW_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_Kprtn86h, 0, m, &cIf_Kprtn86h_sendMessage);
}

void Heavy_Echomatica::sEnv_KxjqSL6t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_oB2p76Df_sendMessage);
}

void Heavy_Echomatica::cBinop_LPpSVf0u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_723c9Tdq_sendMessage);
}

void Heavy_Echomatica::cBinop_723c9Tdq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Za3bA3Xd_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Wrabbgic_sendMessage);
}

void Heavy_Echomatica::cCast_Za3bA3Xd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_G0K3QPeL, HV_BINOP_POW, 1, m, &cBinop_G0K3QPeL_sendMessage);
}

void Heavy_Echomatica::cCast_Wrabbgic_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_46r79lX9_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_46r79lX9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_G0K3QPeL, HV_BINOP_POW, 0, m, &cBinop_G0K3QPeL_sendMessage);
}

void Heavy_Echomatica::cBinop_G0K3QPeL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_MsBvQ3Ab_sendMessage);
}

void Heavy_Echomatica::cIf_Kprtn86h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_LPpSVf0u, HV_BINOP_SUBTRACT, 0, m, &cBinop_LPpSVf0u_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_cRSczIE2, HV_BINOP_SUBTRACT, 0, m, &cBinop_cRSczIE2_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_T6RHZJBW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_Kprtn86h, 1, m, &cIf_Kprtn86h_sendMessage);
}

void Heavy_Echomatica::cVar_kBpE8vgW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SNGwFAz5_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_QY5c7Mm6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ycvl4ZAE_sendMessage);
}

void Heavy_Echomatica::cVar_FSYD9vxZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_cWPbnuxY_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BbiK9NZ8_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_GVZBgSzj_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Cog71zlR, 0, m, &cSlice_Cog71zlR_sendMessage);
      break;
    }
    default: {
      cSwitchcase_O8HH3g9i_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_Cog71zlR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_t9Gfcac4_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_t9Gfcac4_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_KtSVkgAd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_t9Gfcac4_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_t9Gfcac4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_GftmTRpz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_O8HH3g9i_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_QO6SIUX4, 0, m, &cSlice_QO6SIUX4_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_QO6SIUX4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_jWLkNDQs_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_jWLkNDQs_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_CWkyKB2d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_jWLkNDQs_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_jWLkNDQs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_GEMwbVKD_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_BbiK9NZ8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cEmFsmDn, 0, m, &cVar_cEmFsmDn_sendMessage);
}

void Heavy_Echomatica::cCast_cWPbnuxY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Zua7xQfI, HV_BINOP_DIVIDE, 1, m, &cBinop_Zua7xQfI_sendMessage);
}

void Heavy_Echomatica::cBinop_Zua7xQfI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ohnqdsfl, HV_BINOP_ADD, 0, m, &cBinop_Ohnqdsfl_sendMessage);
}

void Heavy_Echomatica::cBinop_cRSczIE2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cEmFsmDn, 0, m, &cVar_cEmFsmDn_sendMessage);
}

void Heavy_Echomatica::cCast_ycvl4ZAE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TPRIhOf4, 0, m, &cVar_TPRIhOf4_sendMessage);
}

void Heavy_Echomatica::cCast_SNGwFAz5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_aTgZnnnw_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_E6bPM8nY_sendMessage);
}

void Heavy_Echomatica::cCast_QY5c7Mm6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_T6RHZJBW, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_T6RHZJBW_sendMessage);
}

void Heavy_Echomatica::cBinop_Ohnqdsfl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LPpSVf0u, HV_BINOP_SUBTRACT, 0, m, &cBinop_LPpSVf0u_sendMessage);
}

void Heavy_Echomatica::cCast_G8MtoSS5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_kBpE8vgW, 0, m, &cVar_kBpE8vgW_sendMessage);
}

void Heavy_Echomatica::cCast_bY4neqR1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FSYD9vxZ, 0, m, &cVar_FSYD9vxZ_sendMessage);
}

void Heavy_Echomatica::cCast_e2x5qCRC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LPpSVf0u, HV_BINOP_SUBTRACT, 1, m, &cBinop_LPpSVf0u_sendMessage);
}

void Heavy_Echomatica::cCast_hIR5x9Ln_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TPRIhOf4, 0, m, &cVar_TPRIhOf4_sendMessage);
}

void Heavy_Echomatica::cBinop_MsBvQ3Ab_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_AYr3cBsf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_E6bPM8nY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cRSczIE2, HV_BINOP_SUBTRACT, 1, m, &cBinop_cRSczIE2_sendMessage);
}

void Heavy_Echomatica::cCast_aTgZnnnw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ohnqdsfl, HV_BINOP_ADD, 1, m, &cBinop_Ohnqdsfl_sendMessage);
}

void Heavy_Echomatica::cBinop_oB2p76Df_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_e2x5qCRC_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hIR5x9Ln_sendMessage);
}

void Heavy_Echomatica::cMsg_AYr3cBsf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_RN6aKJ9b, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_UxWZLEHA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_5m4tXvcl, 0, m, &cVar_5m4tXvcl_sendMessage);
}

void Heavy_Echomatica::cMsg_Ysp0uBeX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_SAfwpzLI, 0, m, &cVar_SAfwpzLI_sendMessage);
}

void Heavy_Echomatica::cMsg_oZS6VTLS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_5m4tXvcl, 0, m, &cVar_5m4tXvcl_sendMessage);
}

void Heavy_Echomatica::cMsg_Ik8RSZRf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_SAfwpzLI, 0, m, &cVar_SAfwpzLI_sendMessage);
}

void Heavy_Echomatica::cSend_NQ7BEcmp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_8WvrPwQ1_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_53lP1Gnf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_NJeaR3jT, 0, m, &cVar_NJeaR3jT_sendMessage);
}

void Heavy_Echomatica::cMsg_BWGUB6X2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_NJeaR3jT, 0, m, &cVar_NJeaR3jT_sendMessage);
}

void Heavy_Echomatica::cVar_GXaSlYn3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xT0WItGl, HV_BINOP_MULTIPLY, 0, m, &cBinop_xT0WItGl_sendMessage);
}

void Heavy_Echomatica::cMsg_MEtIBQiA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_cfE20bfa_sendMessage);
}

void Heavy_Echomatica::cSystem_cfE20bfa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_UKamweRW_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_xT0WItGl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_R8Exgwp0_sendMessage);
}

void Heavy_Echomatica::cBinop_OI0c0isg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xT0WItGl, HV_BINOP_MULTIPLY, 1, m, &cBinop_xT0WItGl_sendMessage);
}

void Heavy_Echomatica::cMsg_UKamweRW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_OI0c0isg_sendMessage);
}

void Heavy_Echomatica::cBinop_R8Exgwp0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_C9uF8T4u_sendMessage);
}

void Heavy_Echomatica::cBinop_C9uF8T4u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_8zzeK457_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_n5663NcB, m);
}

void Heavy_Echomatica::cBinop_8zzeK457_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_tm6ugopr, m);
}

void Heavy_Echomatica::cBinop_sA0rDVvJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_1IDD8ZmG_sendMessage);
}

void Heavy_Echomatica::cBinop_1IDD8ZmG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_FldwVFGv_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_FlrHlfBK_sendMessage);
}

void Heavy_Echomatica::cVar_ny6UlXvQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_BjUbBSGY_sendMessage);
}

void Heavy_Echomatica::cMsg_3FfJmzqe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_HmnyxRUW_sendMessage);
}

void Heavy_Echomatica::cSystem_HmnyxRUW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_i9MMJ36I, HV_BINOP_DIVIDE, 1, m, &cBinop_i9MMJ36I_sendMessage);
}

void Heavy_Echomatica::cBinop_FldwVFGv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_y9aL4hVW_sendMessage);
}

void Heavy_Echomatica::cBinop_y9aL4hVW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_EzIj0I7v, m);
}

void Heavy_Echomatica::cMsg_NhqB8D1g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_ZJGYcenC_sendMessage);
}

void Heavy_Echomatica::cBinop_ZJGYcenC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_sA0rDVvJ_sendMessage);
}

void Heavy_Echomatica::cBinop_FlrHlfBK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_vnlMRA0j, m);
}

void Heavy_Echomatica::cBinop_BjUbBSGY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_RbEBjvji_sendMessage);
}

void Heavy_Echomatica::cBinop_RbEBjvji_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_i9MMJ36I, HV_BINOP_DIVIDE, 0, m, &cBinop_i9MMJ36I_sendMessage);
}

void Heavy_Echomatica::cBinop_i9MMJ36I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NhqB8D1g_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_tAjmp2NO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_vM7PQlly_sendMessage);
}

void Heavy_Echomatica::cBinop_vM7PQlly_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_FgCZ2JwH_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_njNtNmt5_sendMessage);
}

void Heavy_Echomatica::cVar_YUYfloOf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_AmSUGCoM_sendMessage);
}

void Heavy_Echomatica::cMsg_ZtJFMIAe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_fG8hSCEe_sendMessage);
}

void Heavy_Echomatica::cSystem_fG8hSCEe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vxED5fiN, HV_BINOP_DIVIDE, 1, m, &cBinop_vxED5fiN_sendMessage);
}

void Heavy_Echomatica::cBinop_FgCZ2JwH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_9Z2M1dHF_sendMessage);
}

void Heavy_Echomatica::cBinop_9Z2M1dHF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Nnoh0nCM, m);
}

void Heavy_Echomatica::cMsg_lpoXFPZ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_vgsSWVUi_sendMessage);
}

void Heavy_Echomatica::cBinop_vgsSWVUi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_tAjmp2NO_sendMessage);
}

void Heavy_Echomatica::cBinop_njNtNmt5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_iEmoiXKB, m);
}

void Heavy_Echomatica::cBinop_AmSUGCoM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_OvniPteD_sendMessage);
}

void Heavy_Echomatica::cBinop_OvniPteD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vxED5fiN, HV_BINOP_DIVIDE, 0, m, &cBinop_vxED5fiN_sendMessage);
}

void Heavy_Echomatica::cBinop_vxED5fiN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_lpoXFPZ6_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cIf_sQ0XcbEP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_U5rFW6Ck, 0, m, &cVar_U5rFW6Ck_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_U5rFW6Ck_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qBYOFu8x, HV_BINOP_MULTIPLY, 0, m, &cBinop_qBYOFu8x_sendMessage);
}

void Heavy_Echomatica::cVar_ZVrgkzng_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_sQ0XcbEP, 0, m, &cIf_sQ0XcbEP_sendMessage);
}

void Heavy_Echomatica::cPack_LBgmxiPW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_43syskYA_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_ypn401SQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_QBHr6OgV_sendMessage);
}

void Heavy_Echomatica::cSystem_QBHr6OgV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4onxdkHF, HV_BINOP_MULTIPLY, 1, m, &cBinop_4onxdkHF_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_eECMYPF9, HV_BINOP_MULTIPLY, 1, m, &cBinop_eECMYPF9_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_McwpSOrI_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cMsg_YtIgVpKL_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_YtIgVpKL_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6sDn1Dix_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cDelay_fpa28vWn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_fpa28vWn, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_fpa28vWn, 0, m, &cDelay_fpa28vWn_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_iFocdySi, 0, m, &cVar_iFocdySi_sendMessage);
}

void Heavy_Echomatica::cCast_6sDn1Dix_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YtIgVpKL_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_fpa28vWn, 0, m, &cDelay_fpa28vWn_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_iFocdySi, 0, m, &cVar_iFocdySi_sendMessage);
}

void Heavy_Echomatica::cMsg_kVTFtA1c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ElVU6sYF_sendMessage);
}

void Heavy_Echomatica::cSystem_ElVU6sYF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_24OSByzQ_sendMessage);
}

void Heavy_Echomatica::cVar_syPPkqDI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7e5OpPLz, HV_BINOP_MULTIPLY, 0, m, &cBinop_7e5OpPLz_sendMessage);
}

void Heavy_Echomatica::cMsg_YtIgVpKL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_fpa28vWn, 0, m, &cDelay_fpa28vWn_sendMessage);
}

void Heavy_Echomatica::cBinop_IHXstVLG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_fpa28vWn, 2, m, &cDelay_fpa28vWn_sendMessage);
}

void Heavy_Echomatica::cBinop_24OSByzQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7e5OpPLz, HV_BINOP_MULTIPLY, 1, m, &cBinop_7e5OpPLz_sendMessage);
}

void Heavy_Echomatica::cBinop_7e5OpPLz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_IHXstVLG_sendMessage);
}

void Heavy_Echomatica::cVar_iFocdySi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wCx8o59M, HV_BINOP_SUBTRACT, 0, m, &cBinop_wCx8o59M_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_btczKuKs_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_WLHbb8LV_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Yl7NUlyx_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cnJj2KgI_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_Yl7NUlyx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_dCVejE9Z, 0, m, &cVar_dCVejE9Z_sendMessage);
}

void Heavy_Echomatica::cCast_cnJj2KgI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_L7tkWvEk_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8urjZCoB_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_43syskYA_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_IsjvyPtD, 0, m, &cSlice_IsjvyPtD_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_NtpMVDy9, 0, m, &cSlice_NtpMVDy9_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_B2h8N2Eq_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_ek9hHmrl, 0, m, &cSlice_ek9hHmrl_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_tDh07SWR, 0, m, &cSlice_tDh07SWR_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AcIGz5e1_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zLHDoXMc_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_IsjvyPtD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_rPHElivh_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_rPHElivh_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_NtpMVDy9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FifSzNbh_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_K3EcjJnP_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FifSzNbh_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_K3EcjJnP_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_jhLA90oX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_z9Fn4VMO_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jHjdnQBK_sendMessage);
}

void Heavy_Echomatica::cVar_uF6LZGox_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Dvl48NLP_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_Dvl48NLP_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_d8cl759f_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_4onxdkHF, HV_BINOP_MULTIPLY, 0, m, &cBinop_4onxdkHF_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_VbuHhTDN, HV_BINOP_DIVIDE, 1, m, &cBinop_VbuHhTDN_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_syPPkqDI, 0, m, &cVar_syPPkqDI_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_d8cl759f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FyOqfaDn_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_xyTMM2BX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cS6VaAbX, HV_BINOP_SUBTRACT, 1, m, &cBinop_cS6VaAbX_sendMessage);
}

void Heavy_Echomatica::cVar_rgzW3BxJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_dCVejE9Z, 0, m, &cVar_dCVejE9Z_sendMessage);
}

void Heavy_Echomatica::cVar_dCVejE9Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JZM0Htff, HV_BINOP_ADD, 0, m, &cBinop_JZM0Htff_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_O1AzpMzW, HV_BINOP_ADD, 0, m, &cBinop_O1AzpMzW_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_O5tHgAkC_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xp82YsNx_sendMessage);
}

void Heavy_Echomatica::cSlice_ek9hHmrl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_z9Fn4VMO_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jHjdnQBK_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_tDh07SWR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_S200vcXc_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_aexy7UxJ_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_ABc8PkVE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_iFocdySi, 1, m, &cVar_iFocdySi_sendMessage);
}

void Heavy_Echomatica::cBinop_eECMYPF9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_ABc8PkVE_sendMessage);
}

void Heavy_Echomatica::cBinop_4onxdkHF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_ZtI0c7WE_sendMessage);
}

void Heavy_Echomatica::cBinop_ZtI0c7WE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wCx8o59M, HV_BINOP_SUBTRACT, 1, m, &cBinop_wCx8o59M_sendMessage);
}

void Heavy_Echomatica::cBinop_wCx8o59M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_iFocdySi, 1, m, &cVar_iFocdySi_sendMessage);
}

void Heavy_Echomatica::cMsg_ksr4nhr7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_McwpSOrI_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_ATlhHNZr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_McwpSOrI_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_O1AzpMzW, HV_BINOP_ADD, 1, m, &cBinop_O1AzpMzW_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_JZM0Htff, HV_BINOP_ADD, 1, m, &cBinop_JZM0Htff_sendMessage);
}

void Heavy_Echomatica::cBinop_btczKuKs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_WLHbb8LV_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_JZM0Htff_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_dCVejE9Z, 1, m, &cVar_dCVejE9Z_sendMessage);
}

void Heavy_Echomatica::cBinop_VbuHhTDN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DgNFRdqJ, HV_BINOP_DIVIDE, 1, m, &cBinop_DgNFRdqJ_sendMessage);
}

void Heavy_Echomatica::cBinop_DgNFRdqJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_O1AzpMzW, HV_BINOP_ADD, 1, m, &cBinop_O1AzpMzW_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_JZM0Htff, HV_BINOP_ADD, 1, m, &cBinop_JZM0Htff_sendMessage);
}

void Heavy_Echomatica::cCast_jHjdnQBK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VbuHhTDN, HV_BINOP_DIVIDE, 0, m, &cBinop_VbuHhTDN_sendMessage);
}

void Heavy_Echomatica::cCast_z9Fn4VMO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eECMYPF9, HV_BINOP_MULTIPLY, 0, m, &cBinop_eECMYPF9_sendMessage);
}

void Heavy_Echomatica::cCast_S200vcXc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rgzW3BxJ, 1, m, &cVar_rgzW3BxJ_sendMessage);
}

void Heavy_Echomatica::cCast_aexy7UxJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cS6VaAbX, HV_BINOP_SUBTRACT, 0, m, &cBinop_cS6VaAbX_sendMessage);
}

void Heavy_Echomatica::cCast_L7tkWvEk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ATlhHNZr_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_8urjZCoB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rgzW3BxJ, 0, m, &cVar_rgzW3BxJ_sendMessage);
}

void Heavy_Echomatica::cBinop_O1AzpMzW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xyTMM2BX, 0, m, &cVar_xyTMM2BX_sendMessage);
}

void Heavy_Echomatica::cMsg_rPHElivh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_McwpSOrI_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_R565FRCl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_jhLA90oX, 1, m, &cVar_jhLA90oX_sendMessage);
}

void Heavy_Echomatica::cMsg_FyOqfaDn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_4onxdkHF, HV_BINOP_MULTIPLY, 0, m, &cBinop_4onxdkHF_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_VbuHhTDN, HV_BINOP_DIVIDE, 1, m, &cBinop_VbuHhTDN_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_syPPkqDI, 0, m, &cVar_syPPkqDI_sendMessage);
}

void Heavy_Echomatica::cCast_FifSzNbh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rPHElivh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_K3EcjJnP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FxqTTdgr_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_O1AzpMzW, HV_BINOP_ADD, 0, m, &cBinop_O1AzpMzW_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_dCVejE9Z, 1, m, &cVar_dCVejE9Z_sendMessage);
}

void Heavy_Echomatica::cBinop_cS6VaAbX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DgNFRdqJ, HV_BINOP_DIVIDE, 0, m, &cBinop_DgNFRdqJ_sendMessage);
}

void Heavy_Echomatica::cCast_FxqTTdgr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ATlhHNZr_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_AcIGz5e1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ksr4nhr7_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_zLHDoXMc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_R565FRCl_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_B2h8N2Eq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jhLA90oX, 0, m, &cVar_jhLA90oX_sendMessage);
}

void Heavy_Echomatica::cVar_A7U8Do86_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aewHa2ht, HV_BINOP_MULTIPLY, 0, m, &cBinop_aewHa2ht_sendMessage);
}

void Heavy_Echomatica::cVar_ZhNOP5fr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2xMHscpw, HV_BINOP_MULTIPLY, 0, m, &cBinop_2xMHscpw_sendMessage);
}

void Heavy_Echomatica::cVar_7D4at0Er_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oti1Q7hv, HV_BINOP_MULTIPLY, 0, m, &cBinop_oti1Q7hv_sendMessage);
}

void Heavy_Echomatica::cVar_KhBriDNl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iXIggiFe, HV_BINOP_MULTIPLY, 0, m, &cBinop_iXIggiFe_sendMessage);
}

void Heavy_Echomatica::cVar_G6NJi59S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2D5r6vIX, HV_BINOP_MULTIPLY, 0, m, &cBinop_2D5r6vIX_sendMessage);
}

void Heavy_Echomatica::cVar_Qn94ccj1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9BUdtSPq, HV_BINOP_MULTIPLY, 0, m, &cBinop_9BUdtSPq_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_scaS30iK_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vVsTnI7U_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_K1lIxpz8_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_vVsTnI7U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YErpmv6n_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hevvyOPJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CSzHBvEb_sendMessage);
}

void Heavy_Echomatica::cCast_K1lIxpz8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4EeJ5tg8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jXdrTMfr_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_C3MNv7qm_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uK5M0bGD_sendMessage);
}

void Heavy_Echomatica::cBinop_SpwDfGHO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_ojnN5rrY_sendMessage);
}

void Heavy_Echomatica::cBinop_ojnN5rrY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_bsBqJLEO_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_8bHMGUoc_sendMessage);
}

void Heavy_Echomatica::cVar_akqH15jy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_FDFCVbef_sendMessage);
}

void Heavy_Echomatica::cMsg_NpRU6GSw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Fo1P7kZF_sendMessage);
}

void Heavy_Echomatica::cSystem_Fo1P7kZF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_d1EsVKQ1, HV_BINOP_DIVIDE, 1, m, &cBinop_d1EsVKQ1_sendMessage);
}

void Heavy_Echomatica::cBinop_bsBqJLEO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_wwrv1b89_sendMessage);
}

void Heavy_Echomatica::cBinop_wwrv1b89_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_LWHovlTu, m);
}

void Heavy_Echomatica::cMsg_mVQHaKUw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_9TBaPxwM_sendMessage);
}

void Heavy_Echomatica::cBinop_9TBaPxwM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_SpwDfGHO_sendMessage);
}

void Heavy_Echomatica::cBinop_8bHMGUoc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_5mLWb8uf, m);
}

void Heavy_Echomatica::cBinop_FDFCVbef_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_YyWrsA9e_sendMessage);
}

void Heavy_Echomatica::cBinop_YyWrsA9e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_d1EsVKQ1, HV_BINOP_DIVIDE, 0, m, &cBinop_d1EsVKQ1_sendMessage);
}

void Heavy_Echomatica::cBinop_d1EsVKQ1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mVQHaKUw_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_aLXokfrw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qudktnxh, HV_BINOP_DIVIDE, 0, m, &cBinop_qudktnxh_sendMessage);
}

void Heavy_Echomatica::cVar_kBpEnrvT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FHExY45D, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_FHExY45D_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_CzCpKAuv, 0, m, &cIf_CzCpKAuv_sendMessage);
}

void Heavy_Echomatica::sEnv_WSJkxnQY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_FeKihsPA_sendMessage);
}

void Heavy_Echomatica::cBinop_pwBoNg68_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_QOzT61Mb_sendMessage);
}

void Heavy_Echomatica::cBinop_QOzT61Mb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tMZJ5dM4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kvqhipju_sendMessage);
}

void Heavy_Echomatica::cCast_kvqhipju_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_iIsZkjuI_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_tMZJ5dM4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KryQuUlG, HV_BINOP_POW, 1, m, &cBinop_KryQuUlG_sendMessage);
}

void Heavy_Echomatica::cMsg_iIsZkjuI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_KryQuUlG, HV_BINOP_POW, 0, m, &cBinop_KryQuUlG_sendMessage);
}

void Heavy_Echomatica::cBinop_KryQuUlG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_MOTR6dRp_sendMessage);
}

void Heavy_Echomatica::cIf_CzCpKAuv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_pwBoNg68, HV_BINOP_SUBTRACT, 0, m, &cBinop_pwBoNg68_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_Pgr8Aegy, HV_BINOP_SUBTRACT, 0, m, &cBinop_Pgr8Aegy_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_FHExY45D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_CzCpKAuv, 1, m, &cIf_CzCpKAuv_sendMessage);
}

void Heavy_Echomatica::cVar_Jx8xJWdL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3aV5bxJg_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_WLFsj85K_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NZIYJcQ7_sendMessage);
}

void Heavy_Echomatica::cVar_y6clkYs3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ICUt7YCL_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4KXIjaB1_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_S3NuMEG1_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_05AA01PN, 0, m, &cSlice_05AA01PN_sendMessage);
      break;
    }
    default: {
      cSwitchcase_fuR5Qf2J_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_05AA01PN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_MZf8SwtH_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_MZf8SwtH_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_bkDMhM2b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_MZf8SwtH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_MZf8SwtH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_9j4OL0Rm_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_fuR5Qf2J_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_QkxQgai5, 0, m, &cSlice_QkxQgai5_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_QkxQgai5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_XjpwUIQT_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_XjpwUIQT_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_Chmk6Y2y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_XjpwUIQT_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_XjpwUIQT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_4OiaBq4p_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_ICUt7YCL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qudktnxh, HV_BINOP_DIVIDE, 1, m, &cBinop_qudktnxh_sendMessage);
}

void Heavy_Echomatica::cCast_4KXIjaB1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_aLXokfrw, 0, m, &cVar_aLXokfrw_sendMessage);
}

void Heavy_Echomatica::cBinop_qudktnxh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UPNlzgC1, HV_BINOP_ADD, 0, m, &cBinop_UPNlzgC1_sendMessage);
}

void Heavy_Echomatica::cBinop_Pgr8Aegy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_aLXokfrw, 0, m, &cVar_aLXokfrw_sendMessage);
}

void Heavy_Echomatica::cCast_WLFsj85K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FHExY45D, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_FHExY45D_sendMessage);
}

void Heavy_Echomatica::cCast_3aV5bxJg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_p49nUMkO_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wVqWCKkJ_sendMessage);
}

void Heavy_Echomatica::cCast_NZIYJcQ7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_kBpEnrvT, 0, m, &cVar_kBpEnrvT_sendMessage);
}

void Heavy_Echomatica::cBinop_UPNlzgC1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pwBoNg68, HV_BINOP_SUBTRACT, 0, m, &cBinop_pwBoNg68_sendMessage);
}

void Heavy_Echomatica::cCast_dobBjz3r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Jx8xJWdL, 0, m, &cVar_Jx8xJWdL_sendMessage);
}

void Heavy_Echomatica::cCast_JyvkrHwW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_y6clkYs3, 0, m, &cVar_y6clkYs3_sendMessage);
}

void Heavy_Echomatica::cCast_Kp1a32Pe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pwBoNg68, HV_BINOP_SUBTRACT, 1, m, &cBinop_pwBoNg68_sendMessage);
}

void Heavy_Echomatica::cCast_gGMTn3lU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_kBpEnrvT, 0, m, &cVar_kBpEnrvT_sendMessage);
}

void Heavy_Echomatica::cBinop_MOTR6dRp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ha479vaS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_wVqWCKkJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Pgr8Aegy, HV_BINOP_SUBTRACT, 1, m, &cBinop_Pgr8Aegy_sendMessage);
}

void Heavy_Echomatica::cCast_p49nUMkO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UPNlzgC1, HV_BINOP_ADD, 1, m, &cBinop_UPNlzgC1_sendMessage);
}

void Heavy_Echomatica::cBinop_FeKihsPA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Kp1a32Pe_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gGMTn3lU_sendMessage);
}

void Heavy_Echomatica::cMsg_ha479vaS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_NN03tJ9d, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_XZON5D2C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_ItNIMmF5_sendMessage);
}

void Heavy_Echomatica::cBinop_ItNIMmF5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_nDonC1tQ_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_UYVZjwyH_sendMessage);
}

void Heavy_Echomatica::cVar_1gW5bTNr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_3i28VGmN_sendMessage);
}

void Heavy_Echomatica::cMsg_IYIsGkEb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Awbzo9wg_sendMessage);
}

void Heavy_Echomatica::cSystem_Awbzo9wg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Eb6iqXnQ, HV_BINOP_DIVIDE, 1, m, &cBinop_Eb6iqXnQ_sendMessage);
}

void Heavy_Echomatica::cBinop_nDonC1tQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_SYhVGShB_sendMessage);
}

void Heavy_Echomatica::cBinop_SYhVGShB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_dd6lIODB, m);
}

void Heavy_Echomatica::cMsg_eEfjFyx4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_0RUvk7lC_sendMessage);
}

void Heavy_Echomatica::cBinop_0RUvk7lC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_XZON5D2C_sendMessage);
}

void Heavy_Echomatica::cBinop_UYVZjwyH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_D2vZuaxD, m);
}

void Heavy_Echomatica::cBinop_3i28VGmN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_j597el2Z_sendMessage);
}

void Heavy_Echomatica::cBinop_j597el2Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Eb6iqXnQ, HV_BINOP_DIVIDE, 0, m, &cBinop_Eb6iqXnQ_sendMessage);
}

void Heavy_Echomatica::cBinop_Eb6iqXnQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_eEfjFyx4_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_04SvvUCH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rt1WvJie, HV_BINOP_DIVIDE, 0, m, &cBinop_rt1WvJie_sendMessage);
}

void Heavy_Echomatica::cVar_dsewHEcs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fUBjxK59, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_fUBjxK59_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_odo6aLx4, 0, m, &cIf_odo6aLx4_sendMessage);
}

void Heavy_Echomatica::sEnv_VqsbOBBu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_np9XIjL8_sendMessage);
}

void Heavy_Echomatica::cBinop_eJ516m5q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_DZh3AOe8_sendMessage);
}

void Heavy_Echomatica::cBinop_DZh3AOe8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_IKxTPrx4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Jb1rpD9x_sendMessage);
}

void Heavy_Echomatica::cCast_IKxTPrx4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kGILg5Sy, HV_BINOP_POW, 1, m, &cBinop_kGILg5Sy_sendMessage);
}

void Heavy_Echomatica::cCast_Jb1rpD9x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OTPpxMZe_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_OTPpxMZe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_kGILg5Sy, HV_BINOP_POW, 0, m, &cBinop_kGILg5Sy_sendMessage);
}

void Heavy_Echomatica::cBinop_kGILg5Sy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_kVvGkLEW_sendMessage);
}

void Heavy_Echomatica::cIf_odo6aLx4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_eJ516m5q, HV_BINOP_SUBTRACT, 0, m, &cBinop_eJ516m5q_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_3VR2WNmI, HV_BINOP_SUBTRACT, 0, m, &cBinop_3VR2WNmI_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_fUBjxK59_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_odo6aLx4, 1, m, &cIf_odo6aLx4_sendMessage);
}

void Heavy_Echomatica::cVar_1sVGdFTj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZdYgqBMz_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Trdhv1gR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7T6KRa8I_sendMessage);
}

void Heavy_Echomatica::cVar_GEYfdFey_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dTQioNLs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2sQf29pB_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_kKfG8FBZ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_oFbccCvk, 0, m, &cSlice_oFbccCvk_sendMessage);
      break;
    }
    default: {
      cSwitchcase_6AWb5alE_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_oFbccCvk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_yx0DYjmP_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_yx0DYjmP_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_XXlPzaVm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_yx0DYjmP_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_yx0DYjmP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_MOelq6c0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_6AWb5alE_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_IeCMneX8, 0, m, &cSlice_IeCMneX8_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_IeCMneX8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_A5nocfzj_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_A5nocfzj_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_FfBHnbS8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_A5nocfzj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_A5nocfzj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ImP1Pzc0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_dTQioNLs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rt1WvJie, HV_BINOP_DIVIDE, 1, m, &cBinop_rt1WvJie_sendMessage);
}

void Heavy_Echomatica::cCast_2sQf29pB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_04SvvUCH, 0, m, &cVar_04SvvUCH_sendMessage);
}

void Heavy_Echomatica::cBinop_rt1WvJie_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_le3QA0rj, HV_BINOP_ADD, 0, m, &cBinop_le3QA0rj_sendMessage);
}

void Heavy_Echomatica::cBinop_3VR2WNmI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_04SvvUCH, 0, m, &cVar_04SvvUCH_sendMessage);
}

void Heavy_Echomatica::cCast_ZdYgqBMz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sabiTLaw_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_aSxes94d_sendMessage);
}

void Heavy_Echomatica::cCast_7T6KRa8I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_dsewHEcs, 0, m, &cVar_dsewHEcs_sendMessage);
}

void Heavy_Echomatica::cCast_Trdhv1gR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fUBjxK59, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_fUBjxK59_sendMessage);
}

void Heavy_Echomatica::cBinop_le3QA0rj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eJ516m5q, HV_BINOP_SUBTRACT, 0, m, &cBinop_eJ516m5q_sendMessage);
}

void Heavy_Echomatica::cCast_BguK0sZX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_1sVGdFTj, 0, m, &cVar_1sVGdFTj_sendMessage);
}

void Heavy_Echomatica::cCast_oizRn5UJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_GEYfdFey, 0, m, &cVar_GEYfdFey_sendMessage);
}

void Heavy_Echomatica::cCast_aEnLftq9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_dsewHEcs, 0, m, &cVar_dsewHEcs_sendMessage);
}

void Heavy_Echomatica::cCast_WiRxNTtY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eJ516m5q, HV_BINOP_SUBTRACT, 1, m, &cBinop_eJ516m5q_sendMessage);
}

void Heavy_Echomatica::cBinop_kVvGkLEW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0P0WWFrd_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_aSxes94d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3VR2WNmI, HV_BINOP_SUBTRACT, 1, m, &cBinop_3VR2WNmI_sendMessage);
}

void Heavy_Echomatica::cCast_sabiTLaw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_le3QA0rj, HV_BINOP_ADD, 1, m, &cBinop_le3QA0rj_sendMessage);
}

void Heavy_Echomatica::cBinop_np9XIjL8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_WiRxNTtY_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_aEnLftq9_sendMessage);
}

void Heavy_Echomatica::cMsg_0P0WWFrd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_6dhZiY64, 0, m, NULL);
}

void Heavy_Echomatica::cVar_6WhQnZdi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0LQlnPW9, HV_BINOP_MULTIPLY, 0, m, &cBinop_0LQlnPW9_sendMessage);
}

void Heavy_Echomatica::cMsg_Rt817lUY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_pVAwN3I3_sendMessage);
}

void Heavy_Echomatica::cSystem_pVAwN3I3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zp9ZUmnS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_0LQlnPW9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_atc8y88h_sendMessage);
}

void Heavy_Echomatica::cBinop_voNybCcb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0LQlnPW9, HV_BINOP_MULTIPLY, 1, m, &cBinop_0LQlnPW9_sendMessage);
}

void Heavy_Echomatica::cMsg_zp9ZUmnS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_voNybCcb_sendMessage);
}

void Heavy_Echomatica::cBinop_atc8y88h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_gFWKTE88_sendMessage);
}

void Heavy_Echomatica::cBinop_gFWKTE88_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_McdLz1xm_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_DNedV1DX, m);
}

void Heavy_Echomatica::cBinop_McdLz1xm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_fBXZ33FN, m);
}

void Heavy_Echomatica::cVar_osPtu8LY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vGJXHCFF, HV_BINOP_MULTIPLY, 0, m, &cBinop_vGJXHCFF_sendMessage);
}

void Heavy_Echomatica::cMsg_L2ZRH5h5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_p5w5ACyt_sendMessage);
}

void Heavy_Echomatica::cSystem_p5w5ACyt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QoBAwIh4_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_vGJXHCFF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_uij7h7le_sendMessage);
}

void Heavy_Echomatica::cBinop_0sW7mGoE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vGJXHCFF, HV_BINOP_MULTIPLY, 1, m, &cBinop_vGJXHCFF_sendMessage);
}

void Heavy_Echomatica::cMsg_QoBAwIh4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_0sW7mGoE_sendMessage);
}

void Heavy_Echomatica::cBinop_uij7h7le_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_8iIt3Rh2_sendMessage);
}

void Heavy_Echomatica::cBinop_8iIt3Rh2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_I5uzpZNj_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_vq2GJNGH, m);
}

void Heavy_Echomatica::cBinop_I5uzpZNj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Rqtv37P2, m);
}

void Heavy_Echomatica::cBinop_e9Pb52SH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_VA6P6aOh_sendMessage);
}

void Heavy_Echomatica::cBinop_VA6P6aOh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_tRLpCos5_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_hqSQBbEV_sendMessage);
}

void Heavy_Echomatica::cVar_LE3rImlB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_S87lI2Ok_sendMessage);
}

void Heavy_Echomatica::cMsg_GvAxugzs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_LsbTA4NT_sendMessage);
}

void Heavy_Echomatica::cSystem_LsbTA4NT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jxBoRmfS, HV_BINOP_DIVIDE, 1, m, &cBinop_jxBoRmfS_sendMessage);
}

void Heavy_Echomatica::cBinop_tRLpCos5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_CtzkoFAO_sendMessage);
}

void Heavy_Echomatica::cBinop_CtzkoFAO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_soYDkk1E, m);
}

void Heavy_Echomatica::cMsg_gnDCZuzU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_eVVsoPqr_sendMessage);
}

void Heavy_Echomatica::cBinop_eVVsoPqr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_e9Pb52SH_sendMessage);
}

void Heavy_Echomatica::cBinop_hqSQBbEV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_bMWg0Sii, m);
}

void Heavy_Echomatica::cBinop_S87lI2Ok_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_9diqepgo_sendMessage);
}

void Heavy_Echomatica::cBinop_9diqepgo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jxBoRmfS, HV_BINOP_DIVIDE, 0, m, &cBinop_jxBoRmfS_sendMessage);
}

void Heavy_Echomatica::cBinop_jxBoRmfS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gnDCZuzU_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_VFjwlqeb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_WhS2xZxA_sendMessage);
}

void Heavy_Echomatica::cBinop_WhS2xZxA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_lvoAzhmX_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_RTWzZz6s_sendMessage);
}

void Heavy_Echomatica::cVar_SIGb1iEh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_VIHqYvQN_sendMessage);
}

void Heavy_Echomatica::cMsg_AXWaz7qu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_tkS3sID1_sendMessage);
}

void Heavy_Echomatica::cSystem_tkS3sID1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kd3NbRLN, HV_BINOP_DIVIDE, 1, m, &cBinop_kd3NbRLN_sendMessage);
}

void Heavy_Echomatica::cBinop_lvoAzhmX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_MdIG8JZQ_sendMessage);
}

void Heavy_Echomatica::cBinop_MdIG8JZQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Tg0NX1hO, m);
}

void Heavy_Echomatica::cMsg_On9bjoQc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_e2Y8Fvvi_sendMessage);
}

void Heavy_Echomatica::cBinop_e2Y8Fvvi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_VFjwlqeb_sendMessage);
}

void Heavy_Echomatica::cBinop_RTWzZz6s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ZV9Hym0P, m);
}

void Heavy_Echomatica::cBinop_VIHqYvQN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_LsyJuWH9_sendMessage);
}

void Heavy_Echomatica::cBinop_LsyJuWH9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kd3NbRLN, HV_BINOP_DIVIDE, 0, m, &cBinop_kd3NbRLN_sendMessage);
}

void Heavy_Echomatica::cBinop_kd3NbRLN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_On9bjoQc_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_oylvJ0pF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_kLZK0EDy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_1SFog2B0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_x11HNjRR_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_HWa4h6zT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ttuzT3Fa_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_fAcdweqe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_pl2CLVbB_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_bn0kPA7U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_NApp2P8B_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_E1Te7Sub_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ANDBM3wq_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_Hgw91QeY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_zIT9Rbl7_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_mYGmCK93_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_J5JHf8mO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_OcPELRhl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_06d9LyRq_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_6xx3MVU8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s3om06P6_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_iJosRqvU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ZU7Es9ER_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_WHScJTRa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_TspUDIuK_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_luzTO99p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s8qRUUjt_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_0BuVrrgL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ILoUPFMt_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_4Tb9A2JR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_0SxDoJ3V_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_JuLuW6vl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_xkrCOuYV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_hZaQbzcP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_OrRaoizH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_vbxLHsEk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_AvXuCjOP_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_YrFJIvQh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_uzwv3mJ7_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_56inGNGT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jwxDbOw7_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_EEC9YcnC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_yJlqRPsm_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_rTnyc6XD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_4Nm9S1dy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_n7tBDO4Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_9uZksNm1_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_TnFxLfEi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_36WxNaRP_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_vQj7e6aJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_M7ooA9EU_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_egeJPsq9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_zsWeHxqR_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_UVxQZG8J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_5uIotG23_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_nWexBrqo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_NIMlCAIP_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_0xAwSWqY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.01f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LAaKQviM, 0, m, &cSlice_LAaKQviM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cUEWZGU1, 0, m, &cSlice_cUEWZGU1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3KDccdgf, 0, m, &cSlice_3KDccdgf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xZSEPGv0, 0, m, &cSlice_xZSEPGv0_sendMessage);
}

void Heavy_Echomatica::cCast_Uh3tjaY7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0xAwSWqY_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_6rEKCjR1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HXo9dTa3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_HXo9dTa3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.2f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LAaKQviM, 0, m, &cSlice_LAaKQviM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cUEWZGU1, 0, m, &cSlice_cUEWZGU1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3KDccdgf, 0, m, &cSlice_3KDccdgf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xZSEPGv0, 0, m, &cSlice_xZSEPGv0_sendMessage);
}

void Heavy_Echomatica::cMsg_7AEvrqNW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_qBYOFu8x, HV_BINOP_MULTIPLY, 1, m, &cBinop_qBYOFu8x_sendMessage);
}

void Heavy_Echomatica::cBinop_qBYOFu8x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_WrqPnt7g_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_7h85wmfz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_U5rFW6Ck, 0, m, &cVar_U5rFW6Ck_sendMessage);
}

void Heavy_Echomatica::cMsg_72e5bTlQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_sQ0XcbEP, 1, m, &cIf_sQ0XcbEP_sendMessage);
}

void Heavy_Echomatica::cMsg_Qutvr8mX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_sQ0XcbEP, 1, m, &cIf_sQ0XcbEP_sendMessage);
}

void Heavy_Echomatica::cSend_WrqPnt7g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_PNJdgybG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_aewHa2ht_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_tL7M6CtQ, 0, m, &cPack_tL7M6CtQ_sendMessage);
}

void Heavy_Echomatica::cBinop_2xMHscpw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_y35QIZjt, 0, m, &cPack_y35QIZjt_sendMessage);
}

void Heavy_Echomatica::cBinop_oti1Q7hv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_cHkaWkP3, 0, m, &cPack_cHkaWkP3_sendMessage);
}

void Heavy_Echomatica::cBinop_iXIggiFe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_rCRvEVLV, 0, m, &cPack_rCRvEVLV_sendMessage);
}

void Heavy_Echomatica::cBinop_2D5r6vIX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_bKBR96yD, 0, m, &cPack_bKBR96yD_sendMessage);
}

void Heavy_Echomatica::cBinop_9BUdtSPq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_9vCrgsCy, 0, m, &cPack_9vCrgsCy_sendMessage);
}

void Heavy_Echomatica::cCast_iVtCdCr9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_A7U8Do86, 0, m, &cVar_A7U8Do86_sendMessage);
}

void Heavy_Echomatica::cCast_Xt4Z114U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aewHa2ht, HV_BINOP_MULTIPLY, 1, m, &cBinop_aewHa2ht_sendMessage);
}

void Heavy_Echomatica::cCast_jrr4Iwpl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Qn94ccj1, 0, m, &cVar_Qn94ccj1_sendMessage);
}

void Heavy_Echomatica::cCast_jbaGMb80_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9BUdtSPq, HV_BINOP_MULTIPLY, 1, m, &cBinop_9BUdtSPq_sendMessage);
}

void Heavy_Echomatica::cCast_N3DzTMm2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2D5r6vIX, HV_BINOP_MULTIPLY, 1, m, &cBinop_2D5r6vIX_sendMessage);
}

void Heavy_Echomatica::cCast_HS4pvuzM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_G6NJi59S, 0, m, &cVar_G6NJi59S_sendMessage);
}

void Heavy_Echomatica::cCast_DgZjzWxD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_KhBriDNl, 0, m, &cVar_KhBriDNl_sendMessage);
}

void Heavy_Echomatica::cCast_7qdQlEAD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iXIggiFe, HV_BINOP_MULTIPLY, 1, m, &cBinop_iXIggiFe_sendMessage);
}

void Heavy_Echomatica::cCast_kp5dhThB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_7D4at0Er, 0, m, &cVar_7D4at0Er_sendMessage);
}

void Heavy_Echomatica::cCast_8r8E6aDg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oti1Q7hv, HV_BINOP_MULTIPLY, 1, m, &cBinop_oti1Q7hv_sendMessage);
}

void Heavy_Echomatica::cCast_HHQfvyJh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2xMHscpw, HV_BINOP_MULTIPLY, 1, m, &cBinop_2xMHscpw_sendMessage);
}

void Heavy_Echomatica::cCast_AkuBmURm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ZhNOP5fr, 0, m, &cVar_ZhNOP5fr_sendMessage);
}

void Heavy_Echomatica::cBinop_3mxE6jAM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_T8KgmTj4_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZiEeKyzg_sendMessage);
}

void Heavy_Echomatica::cMsg_cru13VQ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.5f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_3mxE6jAM, HV_BINOP_MULTIPLY, 1, m, &cBinop_3mxE6jAM_sendMessage);
}

void Heavy_Echomatica::cCast_O5tHgAkC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cru13VQ6_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_xp82YsNx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3mxE6jAM, HV_BINOP_MULTIPLY, 0, m, &cBinop_3mxE6jAM_sendMessage);
}

void Heavy_Echomatica::cMsg_KQNhMVEA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_PUnVpODs, HV_BINOP_ADD, 1, m, &cBinop_PUnVpODs_sendMessage);
}

void Heavy_Echomatica::cBinop_PUnVpODs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ZVrgkzng, 0, m, &cVar_ZVrgkzng_sendMessage);
}

void Heavy_Echomatica::cCast_T8KgmTj4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KQNhMVEA_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_ZiEeKyzg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PUnVpODs, HV_BINOP_ADD, 0, m, &cBinop_PUnVpODs_sendMessage);
}

void Heavy_Echomatica::cCast_YErpmv6n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Qutvr8mX_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_CSzHBvEb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7h85wmfz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_hevvyOPJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7AEvrqNW_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_uK5M0bGD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qBYOFu8x, HV_BINOP_MULTIPLY, 0, m, &cBinop_qBYOFu8x_sendMessage);
}

void Heavy_Echomatica::cCast_C3MNv7qm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ZVrgkzng, 0, m, &cVar_ZVrgkzng_sendMessage);
}

void Heavy_Echomatica::cCast_4EeJ5tg8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_72e5bTlQ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_jXdrTMfr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7AEvrqNW_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cReceive_8rTp3LYs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_KtSVkgAd, 0, m, &cVar_KtSVkgAd_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_CWkyKB2d, 0, m, &cVar_CWkyKB2d_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_bkDMhM2b, 0, m, &cVar_bkDMhM2b_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Chmk6Y2y, 0, m, &cVar_Chmk6Y2y_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_XXlPzaVm, 0, m, &cVar_XXlPzaVm_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_FfBHnbS8, 0, m, &cVar_FfBHnbS8_sendMessage);
  cMsg_nV31qdwP_sendMessage(_c, 0, m);
  cMsg_bZuCuqH7_sendMessage(_c, 0, m);
  cMsg_QG6PVnoD_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_RvIZoWOR, 0, m, &cVar_RvIZoWOR_sendMessage);
  cMsg_o2KHeBd9_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_fvnoHgfJ, 0, m, &cVar_fvnoHgfJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bY4neqR1_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_G8MtoSS5_sendMessage);
  cMsg_kVTFtA1c_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_syPPkqDI, 0, m, &cVar_syPPkqDI_sendMessage);
  cMsg_NpRU6GSw_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_akqH15jy, 0, m, &cVar_akqH15jy_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JyvkrHwW_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dobBjz3r_sendMessage);
  cMsg_IYIsGkEb_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_1gW5bTNr, 0, m, &cVar_1gW5bTNr_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oizRn5UJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BguK0sZX_sendMessage);
  cMsg_Rt817lUY_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_6WhQnZdi, 0, m, &cVar_6WhQnZdi_sendMessage);
  cMsg_L2ZRH5h5_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_osPtu8LY, 0, m, &cVar_osPtu8LY_sendMessage);
  cMsg_DmESlKbk_sendMessage(_c, 0, m);
  cMsg_MLKmJTFQ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Py3y35Ly, 0, m, &cVar_Py3y35Ly_sendMessage);
  cMsg_OBIVl7rN_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Nyyk4lWE, 0, m, &cVar_Nyyk4lWE_sendMessage);
  cMsg_281dV4zl_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_YDRcchLB, 0, m, &cVar_YDRcchLB_sendMessage);
  cMsg_QSbRCFdS_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_W5O9gnqL, 0, m, &cVar_W5O9gnqL_sendMessage);
  cMsg_saHMmNmn_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_7F58Cvkq, 0, m, &cVar_7F58Cvkq_sendMessage);
  cMsg_G4hDa23p_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_udYO9Bfw, 0, m, &cVar_udYO9Bfw_sendMessage);
  cMsg_kJ0QHlj6_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_u1Y7Yzcp, 0, m, &cVar_u1Y7Yzcp_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_2emU3W3b, 0, m, &cVar_2emU3W3b_sendMessage);
  cMsg_473JzZNR_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Q8uPGVtP, 0, m, &cVar_Q8uPGVtP_sendMessage);
  cMsg_MEtIBQiA_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_GXaSlYn3, 0, m, &cVar_GXaSlYn3_sendMessage);
  cMsg_3FfJmzqe_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ny6UlXvQ, 0, m, &cVar_ny6UlXvQ_sendMessage);
  cMsg_ZtJFMIAe_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_YUYfloOf, 0, m, &cVar_YUYfloOf_sendMessage);
  cMsg_ypn401SQ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_xyTMM2BX, 0, m, &cVar_xyTMM2BX_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_uF6LZGox, 0, m, &cVar_uF6LZGox_sendMessage);
  cMsg_GvAxugzs_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_LE3rImlB, 0, m, &cVar_LE3rImlB_sendMessage);
  cMsg_AXWaz7qu_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_SIGb1iEh, 0, m, &cVar_SIGb1iEh_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_0XsZM11r, 0, m, &cVar_0XsZM11r_sendMessage);
  cMsg_919BX7ZP_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_tNQ6yXju, 0, m, &cVar_tNQ6yXju_sendMessage);
  cMsg_YRgNxH7r_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_JvbujEoo, 0, m, &cVar_JvbujEoo_sendMessage);
  cMsg_rURa8Neh_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_klZ3trPq, 0, m, &cVar_klZ3trPq_sendMessage);
  cMsg_Y6XhJBnk_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_C9hCWgPP, 0, m, &cVar_C9hCWgPP_sendMessage);
  cMsg_d2q0YPsn_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_VAxEQ0fi, 0, m, &cVar_VAxEQ0fi_sendMessage);
  cMsg_3NXwaDSC_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_myRk9DMx, 0, m, &cVar_myRk9DMx_sendMessage);
  cMsg_qqI1jOOX_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_U7rOPUEb, 0, m, &cVar_U7rOPUEb_sendMessage);
  cMsg_0XOkiWUS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cReceive_nQyCsdEe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_2iq5D411_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_kLZK0EDy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ZhNOP5fr, 0, m, &cVar_ZhNOP5fr_sendMessage);
}

void Heavy_Echomatica::cReceive_x11HNjRR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_7D4at0Er, 0, m, &cVar_7D4at0Er_sendMessage);
}

void Heavy_Echomatica::cReceive_ttuzT3Fa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_KhBriDNl, 0, m, &cVar_KhBriDNl_sendMessage);
}

void Heavy_Echomatica::cReceive_pl2CLVbB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_G6NJi59S, 0, m, &cVar_G6NJi59S_sendMessage);
}

void Heavy_Echomatica::cReceive_NApp2P8B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Qn94ccj1, 0, m, &cVar_Qn94ccj1_sendMessage);
}

void Heavy_Echomatica::cReceive_ANDBM3wq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_A7U8Do86, 0, m, &cVar_A7U8Do86_sendMessage);
}

void Heavy_Echomatica::cReceive_zIT9Rbl7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_CDSvVcw5, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_vWkcWIoQ, 0, m, &cVar_vWkcWIoQ_sendMessage);
}

void Heavy_Echomatica::cReceive_J5JHf8mO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_dbuklFnB, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_jGIzxHLJ, 0, m, &cVar_jGIzxHLJ_sendMessage);
}

void Heavy_Echomatica::cReceive_06d9LyRq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_t0nvFS19, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_apVcMp1K, 0, m, &cVar_apVcMp1K_sendMessage);
}

void Heavy_Echomatica::cReceive_s3om06P6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_uIPggpPT, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_7GxwexHU, 0, m, &cVar_7GxwexHU_sendMessage);
}

void Heavy_Echomatica::cReceive_ZU7Es9ER_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_sJHXCU7c, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_Dp4NRqi3, 0, m, &cVar_Dp4NRqi3_sendMessage);
}

void Heavy_Echomatica::cReceive_TspUDIuK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_xlvldnXL, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_5aYGuwGe, 0, m, &cVar_5aYGuwGe_sendMessage);
}

void Heavy_Echomatica::cReceive_s8qRUUjt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_gr9xSByZ, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_Pumx632Y, 0, m, &cVar_Pumx632Y_sendMessage);
}

void Heavy_Echomatica::cReceive_ILoUPFMt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_WGp3ZVEy, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_7RlGxVG4, 0, m, &cVar_7RlGxVG4_sendMessage);
}

void Heavy_Echomatica::cReceive_0SxDoJ3V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_50Q9A2ee, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_VVE2Kt6g, 0, m, &cVar_VVE2Kt6g_sendMessage);
}

void Heavy_Echomatica::cReceive_xkrCOuYV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_npqcDeC0, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_aeizXvUv, 0, m, &cVar_aeizXvUv_sendMessage);
}

void Heavy_Echomatica::cReceive_OrRaoizH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_1ieji3Po, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_5oB0TNdx, 0, m, &cVar_5oB0TNdx_sendMessage);
}

void Heavy_Echomatica::cReceive_AvXuCjOP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_qx09OJC3, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_MOOXRbyZ, 0, m, &cVar_MOOXRbyZ_sendMessage);
}

void Heavy_Echomatica::cReceive_PNJdgybG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_HHQfvyJh_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AkuBmURm_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_8r8E6aDg_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kp5dhThB_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7qdQlEAD_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DgZjzWxD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_N3DzTMm2_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HS4pvuzM_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jbaGMb80_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jrr4Iwpl_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Xt4Z114U_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iVtCdCr9_sendMessage);
}

void Heavy_Echomatica::cReceive_uzwv3mJ7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_S3QPC1ci_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_jwxDbOw7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Nyyk4lWE, 0, m, &cVar_Nyyk4lWE_sendMessage);
}

void Heavy_Echomatica::cReceive_yJlqRPsm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YDRcchLB, 0, m, &cVar_YDRcchLB_sendMessage);
}

void Heavy_Echomatica::cReceive_4Nm9S1dy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_W5O9gnqL, 0, m, &cVar_W5O9gnqL_sendMessage);
}

void Heavy_Echomatica::cReceive_9uZksNm1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_7F58Cvkq, 0, m, &cVar_7F58Cvkq_sendMessage);
}

void Heavy_Echomatica::cReceive_36WxNaRP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_udYO9Bfw, 0, m, &cVar_udYO9Bfw_sendMessage);
}

void Heavy_Echomatica::cReceive_M7ooA9EU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_u1Y7Yzcp, 0, m, &cVar_u1Y7Yzcp_sendMessage);
}

void Heavy_Echomatica::cReceive_zsWeHxqR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_XkI5Fv5l, m);
}

void Heavy_Echomatica::cReceive_5uIotG23_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Q8uPGVtP, 0, m, &cVar_Q8uPGVtP_sendMessage);
}

void Heavy_Echomatica::cReceive_NIMlCAIP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_2emU3W3b, 0, m, &cVar_2emU3W3b_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3QQFpSnB_sendMessage);
}

void Heavy_Echomatica::cReceive_8WvrPwQ1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wnzb07r1, 0, m, &cVar_wnzb07r1_sendMessage);
}

void Heavy_Echomatica::cReceive_gmMo9XFU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_epoYX78F_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_GftmTRpz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_cWPbnuxY_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BbiK9NZ8_sendMessage);
}

void Heavy_Echomatica::cReceive_GEMwbVKD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SNGwFAz5_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_QY5c7Mm6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ycvl4ZAE_sendMessage);
}

void Heavy_Echomatica::cReceive_1HqjOFS0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_VOa2M5L1, 0, m, &cPack_VOa2M5L1_sendMessage);
}

void Heavy_Echomatica::cReceive_NFmw5QCb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_M6I3hIiv, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_vYjZGWeH, m);
}

void Heavy_Echomatica::cReceive_B1c0NFvr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Pgv4RTlg, 0, m, &cPack_Pgv4RTlg_sendMessage);
}

void Heavy_Echomatica::cReceive_Ixg9OIxN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_scaS30iK_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_sVcll0Ue_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_LBgmxiPW, 0, m, &cPack_LBgmxiPW_sendMessage);
}

void Heavy_Echomatica::cReceive_9j4OL0Rm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ICUt7YCL_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4KXIjaB1_sendMessage);
}

void Heavy_Echomatica::cReceive_4OiaBq4p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3aV5bxJg_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_WLFsj85K_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NZIYJcQ7_sendMessage);
}

void Heavy_Echomatica::cReceive_MOelq6c0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dTQioNLs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2sQf29pB_sendMessage);
}

void Heavy_Echomatica::cReceive_ImP1Pzc0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZdYgqBMz_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Trdhv1gR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7T6KRa8I_sendMessage);
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
    __hv_varread_f(&sVarf_ylbjJxZZ, VOf(Bf0));
    __hv_biquad_k_f(&sBiquad_k_jbV4vIAF, VIf(Bf0), VOf(Bf1));
    __hv_varread_f(&sVarf_XkI5Fv5l, VOf(Bf2));
    __hv_varread_f(&sVarf_3FcvCOCs, VOf(Bf3));
    __hv_rpole_f(&sRPole_KlQ5mUT1, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_ITMZ5XlV, VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_QoHxJYF6, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_VdMyYjOh, VOf(Bf0));
    __hv_rpole_f(&sRPole_WCpQxTg5, VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_bTCrzgVf, VIf(Bf0), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_8VUnt41R, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_41AmtaqF, VOf(Bf3));
    __hv_rpole_f(&sRPole_F5c9QHUd, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_kY6yKCgC, VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_UFOgnYfn, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_MRlyw5PH, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_oksy9V6c, VOf(Bf3));
    __hv_rpole_f(&sRPole_F1BEDnsu, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_0xvd63pl, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_266zoWGY, VOf(Bf3));
    __hv_rpole_f(&sRPole_dvzC5Svy, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_wArrtoph, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_lReZsROf, VOf(Bf3));
    __hv_rpole_f(&sRPole_d6qNEXMr, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf1), VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_vuCD9JaH, VOf(Bf2));
    __hv_varread_f(&sVarf_ITGDKZhF, VOf(Bf1));
    __hv_varread_f(&sVarf_bgtiVYHe, VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_iKZu30IY, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_C5NUBjfN, VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_LL1AiKnI, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_vnlMRA0j, VOf(Bf2));
    __hv_rpole_f(&sRPole_HFf2qUdB, VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_1hQ664pv, VIf(Bf2), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_EzIj0I7v, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_n5663NcB, VOf(Bf1));
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_tm6ugopr, VOf(Bf2));
    __hv_rpole_f(&sRPole_HBr6gjwu, VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f);
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_Jlyw8YlO, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_u2rFsbG6, VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    sEnv_process(this, &sEnv_KxjqSL6t, VIf(Bf0), &sEnv_KxjqSL6t_sendMessage);
    __hv_line_f(&sLine_RN6aKJ9b, VOf(Bf4));
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
    __hv_line_f(&sLine_pKFovPog, VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf2), VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_NRFZb0nk, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_wO06QDAD, VOf(Bf5));
    __hv_rpole_f(&sRPole_NiB4m5YJ, VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_tabwrite_f(&sTabwrite_S7OHbnAT, VIf(Bf5));
    __hv_phasor_k_f(&sPhasor_VlocrFf9, VOf(Bf5));
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
    __hv_varread_f(&sVarf_5LFdPE5q, VOf(Bf2));
    __hv_phasor_k_f(&sPhasor_CGZLSzDU, VOf(Bf5));
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
    __hv_varread_f(&sVarf_vMkuvtio, VOf(Bf6));
    __hv_mul_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf3), VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_onAtlNJi, VIf(Bf6));
    __hv_line_f(&sLine_tzR3ZRxf, VOf(Bf6));
    __hv_varread_f(&sVarf_onAtlNJi, VOf(Bf2));
    __hv_add_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_tabhead_f(&sTabhead_4RbGUSkj, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_389BR7ZN, VOf(Bf6));
    __hv_mul_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_zgf9gk6w, VOf(Bf2));
    __hv_min_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_TPR9KfNJ, VOf(Bf2));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_wYkeohPh, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_Niub9zJe, VIi(Bi0), VOf(Bf2));
    __hv_sub_f(VIf(Bf4), VIf(Bf2), VOf(Bf4));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf4), VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_gr9xSByZ, VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_vuCD9JaH, VIf(Bf3));
    __hv_line_f(&sLine_H3zmJvTV, VOf(Bf3));
    __hv_varread_f(&sVarf_onAtlNJi, VOf(Bf4));
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_tabhead_f(&sTabhead_KPVbvcp0, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_zFYTh7Bk, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_O6fgmGNE, VOf(Bf4));
    __hv_min_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_9eC1kjbj, VOf(Bf4));
    __hv_zero_f(VOf(Bf5));
    __hv_lt_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_cast_fi(VIf(Bf5), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_FRgQGl7w, VIi(Bi1), VOf(Bf5));
    __hv_tabread_if(&sTabread_rWCdEWy7, VIi(Bi0), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf5));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf5), VIf(Bf6), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_50Q9A2ee, VOf(Bf6));
    __hv_mul_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_ITGDKZhF, VIf(Bf6));
    __hv_line_f(&sLine_B4pzA46h, VOf(Bf6));
    __hv_varread_f(&sVarf_onAtlNJi, VOf(Bf5));
    __hv_add_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_tabhead_f(&sTabhead_rU30Y3is, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_dueh4maM, VOf(Bf6));
    __hv_mul_f(VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_BXZjCInm, VOf(Bf5));
    __hv_min_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_DNtsz37d, VOf(Bf5));
    __hv_zero_f(VOf(Bf7));
    __hv_lt_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_and_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_cast_fi(VIf(Bf7), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_e5tpZK5J, VIi(Bi1), VOf(Bf7));
    __hv_tabread_if(&sTabread_FadG5VCl, VIi(Bi0), VOf(Bf5));
    __hv_sub_f(VIf(Bf7), VIf(Bf5), VOf(Bf7));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf7), VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_1ieji3Po, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_bgtiVYHe, VIf(Bf3));
    __hv_line_f(&sLine_KfZIjqWu, VOf(Bf3));
    __hv_varread_f(&sVarf_onAtlNJi, VOf(Bf7));
    __hv_add_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_tabhead_f(&sTabhead_WCE79OXh, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_UAUlNcQ1, VOf(Bf3));
    __hv_mul_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_sq69fTLq, VOf(Bf7));
    __hv_min_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_o4TUH4ej, VOf(Bf7));
    __hv_zero_f(VOf(Bf1));
    __hv_lt_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_and_f(VIf(Bf7), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_cast_fi(VIf(Bf1), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_sZOC1whV, VIi(Bi1), VOf(Bf1));
    __hv_tabread_if(&sTabread_gJePxrEp, VIi(Bi0), VOf(Bf7));
    __hv_sub_f(VIf(Bf1), VIf(Bf7), VOf(Bf1));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf1), VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_qx09OJC3, VOf(Bf6));
    __hv_mul_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_iKZu30IY, VIf(Bf6));
    __hv_line_f(&sLine_7p1Kzr1Z, VOf(Bf6));
    __hv_varread_f(&sVarf_onAtlNJi, VOf(Bf1));
    __hv_add_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_tabhead_f(&sTabhead_mUACPm2K, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_Hd5bFdrc, VOf(Bf6));
    __hv_mul_f(VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_GJmWRWqF, VOf(Bf1));
    __hv_min_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_eO0miFS7, VOf(Bf1));
    __hv_zero_f(VOf(Bf0));
    __hv_lt_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_and_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_cast_fi(VIf(Bf0), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_a1lR0QfZ, VIi(Bi1), VOf(Bf0));
    __hv_tabread_if(&sTabread_VBQVofka, VIi(Bi0), VOf(Bf1));
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf0));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf0), VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_npqcDeC0, VOf(Bf3));
    __hv_mul_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_C5NUBjfN, VIf(Bf3));
    __hv_line_f(&sLine_fvXCYvNM, VOf(Bf3));
    __hv_varread_f(&sVarf_onAtlNJi, VOf(Bf0));
    __hv_add_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_tabhead_f(&sTabhead_cOQMr7uF, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_pf3st23O, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_oOOgIRvS, VOf(Bf0));
    __hv_min_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_qg2cftoR, VOf(Bf0));
    __hv_zero_f(VOf(Bf8));
    __hv_lt_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_and_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_cast_fi(VIf(Bf8), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_b0Cwd6G3, VIi(Bi1), VOf(Bf8));
    __hv_tabread_if(&sTabread_FpfA4W8F, VIi(Bi0), VOf(Bf0));
    __hv_sub_f(VIf(Bf8), VIf(Bf0), VOf(Bf8));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf8), VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_WGp3ZVEy, VOf(Bf6));
    __hv_mul_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_LL1AiKnI, VIf(Bf6));
    sEnv_process(this, &sEnv_WSJkxnQY, VIf(I0), &sEnv_WSJkxnQY_sendMessage);
    __hv_line_f(&sLine_NN03tJ9d, VOf(Bf6));
    __hv_mul_f(VIf(I0), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf8), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf6), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_DNedV1DX, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_fBXZ33FN, VOf(Bf6));
    __hv_rpole_f(&sRPole_2moeqx0P, VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_5mLWb8uf, VOf(Bf8));
    __hv_rpole_f(&sRPole_jL3QBqLH, VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_381ay5Lr, VIf(Bf8), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_LWHovlTu, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    sEnv_process(this, &sEnv_VqsbOBBu, VIf(I1), &sEnv_VqsbOBBu_sendMessage);
    __hv_line_f(&sLine_6dhZiY64, VOf(Bf6));
    __hv_mul_f(VIf(I1), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf3), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_vq2GJNGH, VOf(Bf3));
    __hv_mul_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_Rqtv37P2, VOf(Bf6));
    __hv_rpole_f(&sRPole_oZj4zQzS, VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_D2vZuaxD, VOf(Bf3));
    __hv_rpole_f(&sRPole_OgrSMOMK, VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_5yzZKohl, VIf(Bf3), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_dd6lIODB, VOf(Bf3));
    __hv_mul_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf8), VIf(Bf3), VOf(Bf6));
    __hv_varwrite_f(&sVarf_ylbjJxZZ, VIf(Bf6));
    __hv_varread_f(&sVarf_vYjZGWeH, VOf(Bf6));
    __hv_mul_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf8), 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f);
    __hv_line_f(&sLine_CDSvVcw5, VOf(Bf9));
    __hv_line_f(&sLine_dbuklFnB, VOf(Bf10));
    __hv_line_f(&sLine_t0nvFS19, VOf(Bf11));
    __hv_line_f(&sLine_uIPggpPT, VOf(Bf12));
    __hv_line_f(&sLine_sJHXCU7c, VOf(Bf13));
    __hv_line_f(&sLine_xlvldnXL, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf5), VIf(Bf13), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf1), VIf(Bf12), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf4), VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf0), VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf2), VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_iEmoiXKB, VOf(Bf9));
    __hv_rpole_f(&sRPole_Ij6JJBXr, VIf(Bf14), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_VH0onM8e, VIf(Bf9), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_Nnoh0nCM, VOf(Bf9));
    __hv_mul_f(VIf(Bf14), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf14), 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f);
    __hv_min_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf9), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf14), VIf(Bf9), VOf(Bf9));
    __hv_line_f(&sLine_OSblXxr0, VOf(Bf14));
    __hv_mul_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_phasor_k_f(&sPhasor_4zCM5eKO, VOf(Bf9));
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
    __hv_tabhead_f(&sTabhead_0isvB8pA, VOf(Bf0));
    __hv_var_k_f_r(VOf(Bf2), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_aFCrZv1Z, VOf(Bf0));
    __hv_mul_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_3pKrx9IR, VOf(Bf9));
    __hv_min_f(VIf(Bf0), VIf(Bf9), VOf(Bf9));
    __hv_zero_f(VOf(Bf0));
    __hv_max_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf2));
    __hv_varread_f(&sVarf_auLJe7A8, VOf(Bf9));
    __hv_zero_f(VOf(Bf11));
    __hv_lt_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_and_f(VIf(Bf9), VIf(Bf11), VOf(Bf11));
    __hv_add_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_cast_fi(VIf(Bf11), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_nseGRee8, VIi(Bi1), VOf(Bf11));
    __hv_tabread_if(&sTabread_cN3GJrkG, VIi(Bi0), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf11), VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf9), VIf(Bf2), VIf(Bf14), VOf(Bf2));
    __hv_varread_f(&sVarf_QxsCpNjs, VOf(Bf9));
    __hv_rpole_f(&sRPole_pcA1agba, VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_0ui7OtKe, VIf(Bf9), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_PektZ6tU, VOf(Bf9));
    __hv_mul_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_phasor_k_f(&sPhasor_qj20STY9, VOf(Bf2));
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
    __hv_tabhead_f(&sTabhead_5va6enwQ, VOf(Bf10));
    __hv_var_k_f_r(VOf(Bf11), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_K4YimH6g, VOf(Bf10));
    __hv_mul_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_5rEXnoHP, VOf(Bf2));
    __hv_min_f(VIf(Bf10), VIf(Bf2), VOf(Bf2));
    __hv_zero_f(VOf(Bf10));
    __hv_max_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf11), VIf(Bf10), VOf(Bf10));
    __hv_floor_f(VIf(Bf10), VOf(Bf11));
    __hv_varread_f(&sVarf_VLgulLnm, VOf(Bf2));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf11), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf11), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_OpP2NFxL, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_xBs8dTGn, VIi(Bi0), VOf(Bf2));
    __hv_sub_f(VIf(Bf4), VIf(Bf2), VOf(Bf4));
    __hv_sub_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_fma_f(VIf(Bf4), VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf2), VIf(Bf11), VIf(Bf14), VOf(Bf11));
    __hv_varread_f(&sVarf_GDbe0OYr, VOf(Bf2));
    __hv_rpole_f(&sRPole_vgBWBBti, VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_dTJGa5Bc, VIf(Bf2), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_nfcNoR4I, VOf(Bf2));
    __hv_mul_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_iy0Lj2gd, VOf(Bf11));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_tabwrite_f(&sTabwrite_06alywv3, VIf(Bf11));
    __hv_varread_f(&sVarf_7RMajP9N, VOf(Bf11));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_tabwrite_f(&sTabwrite_AUeWj0uT, VIf(Bf11));
    __hv_fma_f(VIf(Bf6), VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_bMWg0Sii, VOf(Bf8));
    __hv_rpole_f(&sRPole_JP1uKBAu, VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_UJV9ln2s, VIf(Bf8), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_soYDkk1E, VOf(Bf8));
    __hv_mul_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf8), VIf(O0), VOf(O0));
    __hv_varread_f(&sVarf_M6I3hIiv, VOf(Bf8));
    __hv_mul_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf3), 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f);
    __hv_fma_f(VIf(Bf8), VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_ZV9Hym0P, VOf(Bf3));
    __hv_rpole_f(&sRPole_nZZJsoSP, VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_4GgopS3i, VIf(Bf3), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_Tg0NX1hO, VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf3), VIf(O1), VOf(O1));

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
