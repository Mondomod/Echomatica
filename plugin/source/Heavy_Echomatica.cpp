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
  numBytes += sBiquad_k_init(&sBiquad_k_CnFFakxe, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  numBytes += sRPole_init(&sRPole_7EfI2ftN);
  numBytes += sDel1_init(&sDel1_vqOfmr5t);
  numBytes += sRPole_init(&sRPole_fam8wi5c);
  numBytes += sDel1_init(&sDel1_NavhqXRv);
  numBytes += sRPole_init(&sRPole_VfWXWBbs);
  numBytes += sDel1_init(&sDel1_tAoukkvp);
  numBytes += sRPole_init(&sRPole_4hBpAVkV);
  numBytes += sRPole_init(&sRPole_mfQ3wuhI);
  numBytes += sRPole_init(&sRPole_ev4sF63c);
  numBytes += sRPole_init(&sRPole_CRCmhDd5);
  numBytes += sDel1_init(&sDel1_xWAIh3xw);
  numBytes += sRPole_init(&sRPole_Nauv6Ixy);
  numBytes += sLine_init(&sLine_pw3m5Egq);
  numBytes += sLine_init(&sLine_e7iGbWmD);
  numBytes += sEnv_init(&sEnv_dhtryBzQ, 256, 512);
  numBytes += sLine_init(&sLine_1nzWzdY4);
  numBytes += sLine_init(&sLine_aBciIX5T);
  numBytes += sRPole_init(&sRPole_f1zp2PRY);
  numBytes += sTabwrite_init(&sTabwrite_rYlTTMco, &hTable_b3JFMxCy);
  numBytes += sPhasor_k_init(&sPhasor_5ePvV3z8, 0.0f, sampleRate);
  numBytes += sPhasor_k_init(&sPhasor_mX1lNapS, 0.0f, sampleRate);
  numBytes += sLine_init(&sLine_hljQ9oLE);
  numBytes += sTabhead_init(&sTabhead_pOv3dohr, &hTable_b3JFMxCy);
  numBytes += sTabread_init(&sTabread_oI3Jc0eZ, &hTable_b3JFMxCy, false);
  numBytes += sTabread_init(&sTabread_6pVcL3iN, &hTable_b3JFMxCy, false);
  numBytes += sLine_init(&sLine_MRGhgrUH);
  numBytes += sLine_init(&sLine_Z9VpDYU9);
  numBytes += sTabhead_init(&sTabhead_aJ0TxjlF, &hTable_b3JFMxCy);
  numBytes += sTabread_init(&sTabread_m1cE1jXQ, &hTable_b3JFMxCy, false);
  numBytes += sTabread_init(&sTabread_shtuM67B, &hTable_b3JFMxCy, false);
  numBytes += sLine_init(&sLine_e8SaK36w);
  numBytes += sLine_init(&sLine_95Tiw3iI);
  numBytes += sTabhead_init(&sTabhead_6eEI6cSp, &hTable_b3JFMxCy);
  numBytes += sTabread_init(&sTabread_p3Mbgwef, &hTable_b3JFMxCy, false);
  numBytes += sTabread_init(&sTabread_xnwez5Dv, &hTable_b3JFMxCy, false);
  numBytes += sLine_init(&sLine_CWxjyyeP);
  numBytes += sLine_init(&sLine_fFNq6BZS);
  numBytes += sTabhead_init(&sTabhead_oBesJqvY, &hTable_b3JFMxCy);
  numBytes += sTabread_init(&sTabread_UUKmzLgL, &hTable_b3JFMxCy, false);
  numBytes += sTabread_init(&sTabread_p49aCN97, &hTable_b3JFMxCy, false);
  numBytes += sLine_init(&sLine_mOh2rUh0);
  numBytes += sLine_init(&sLine_NuMzN8Th);
  numBytes += sTabhead_init(&sTabhead_Cn16d7Ng, &hTable_b3JFMxCy);
  numBytes += sTabread_init(&sTabread_fHujMgWS, &hTable_b3JFMxCy, false);
  numBytes += sTabread_init(&sTabread_6VQTcYQ8, &hTable_b3JFMxCy, false);
  numBytes += sLine_init(&sLine_qcpK9xAF);
  numBytes += sLine_init(&sLine_Xk0vlQbg);
  numBytes += sTabhead_init(&sTabhead_9fDs6mUZ, &hTable_b3JFMxCy);
  numBytes += sTabread_init(&sTabread_jnKYWh2q, &hTable_b3JFMxCy, false);
  numBytes += sTabread_init(&sTabread_1EFv9ani, &hTable_b3JFMxCy, false);
  numBytes += sLine_init(&sLine_rxwtzkxe);
  numBytes += sEnv_init(&sEnv_nWj3FZ1B, 256, 512);
  numBytes += sLine_init(&sLine_XZ8SjpNI);
  numBytes += sRPole_init(&sRPole_OY66HwqJ);
  numBytes += sRPole_init(&sRPole_RxdYCGbr);
  numBytes += sDel1_init(&sDel1_6hSXTMAU);
  numBytes += sEnv_init(&sEnv_dh0r6Ivy, 256, 512);
  numBytes += sLine_init(&sLine_FiEMq0GX);
  numBytes += sRPole_init(&sRPole_WaH4lr3S);
  numBytes += sRPole_init(&sRPole_4GurPkVr);
  numBytes += sDel1_init(&sDel1_B598ZDCa);
  numBytes += sLine_init(&sLine_Ql4HO5SL);
  numBytes += sLine_init(&sLine_lE3KBHkH);
  numBytes += sLine_init(&sLine_G1DRKKLQ);
  numBytes += sLine_init(&sLine_w9yI8sbB);
  numBytes += sLine_init(&sLine_98ODG1eY);
  numBytes += sLine_init(&sLine_JTX0iX7Z);
  numBytes += sRPole_init(&sRPole_VLchsne0);
  numBytes += sDel1_init(&sDel1_0exTXggJ);
  numBytes += sLine_init(&sLine_OTuEndfN);
  numBytes += sPhasor_k_init(&sPhasor_nVNZCGJo, 0.3f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_1M2Khlbo, &hTable_XhJedqsk);
  numBytes += sTabread_init(&sTabread_Ny7vqOa3, &hTable_XhJedqsk, false);
  numBytes += sTabread_init(&sTabread_IK8ZcK2X, &hTable_XhJedqsk, false);
  numBytes += sRPole_init(&sRPole_ekju5d3U);
  numBytes += sDel1_init(&sDel1_7NvxKfe1);
  numBytes += sPhasor_k_init(&sPhasor_3E4Jrz4v, 0.5f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_4x3VpUCe, &hTable_apbTTPZW);
  numBytes += sTabread_init(&sTabread_bj59R8SX, &hTable_apbTTPZW, false);
  numBytes += sTabread_init(&sTabread_lJlio3Jw, &hTable_apbTTPZW, false);
  numBytes += sRPole_init(&sRPole_G9JTkX5w);
  numBytes += sDel1_init(&sDel1_bEaY1waO);
  numBytes += sTabwrite_init(&sTabwrite_Lapkd5Oa, &hTable_apbTTPZW);
  numBytes += sTabwrite_init(&sTabwrite_043mx18j, &hTable_XhJedqsk);
  numBytes += sRPole_init(&sRPole_xCYhCVFq);
  numBytes += sDel1_init(&sDel1_g01e6cbt);
  numBytes += sRPole_init(&sRPole_MieBd2H9);
  numBytes += sDel1_init(&sDel1_9LwMPfAl);
  numBytes += cVar_init_s(&cVar_esBvTAzg, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_TW04Z9lf, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_DFBUrwUV, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_zpNQQOLd, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_rKgluzVi, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_ZcbpTscK, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_MICEO8XP, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_7M58OInq, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_ecqBO5lH, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_9o3wyTlt, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_UGD0xLxq, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_y9cuexUz, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_vLUEduEE, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_KbcIEzrU, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_XwvQBMDQ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_We2FSzY3, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_UrKxCJfu, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_3hfvWkAP, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_eKsdqDcJ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_IHgdfppD, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_F6Fobx2a, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_OpBH5klo, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_dUNdizSV, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_OqM3Un9M, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_O9zjM8pO, 0.0f);
  numBytes += cVar_init_f(&cVar_7EH4vCqc, 0.0f);
  numBytes += cVar_init_f(&cVar_yFrJrO2x, 0.0f);
  numBytes += cVar_init_f(&cVar_nMX4aILj, 0.0f);
  numBytes += cVar_init_f(&cVar_7z3veNiY, 0.0f);
  numBytes += cVar_init_f(&cVar_jXrGywHj, 0.0f);
  numBytes += cVar_init_f(&cVar_u1OZJikr, 0.0f);
  numBytes += cVar_init_f(&cVar_BAeUYI9U, 0.0f);
  numBytes += cVar_init_f(&cVar_BNX7YXMA, 0.0f);
  numBytes += cVar_init_f(&cVar_bhndsavR, 0.0f);
  numBytes += cVar_init_f(&cVar_BjXL8R4m, 0.0f);
  numBytes += cVar_init_f(&cVar_KuWJ52FL, 0.0f);
  numBytes += cPack_init(&cPack_zB1GwfMx, 2, 0.0f, 20.0f);
  numBytes += cPack_init(&cPack_ArveiZ9D, 2, 0.0f, 1800.0f);
  numBytes += cPack_init(&cPack_jmDo3ca5, 2, 0.0f, 1600.0f);
  numBytes += cPack_init(&cPack_EqDtSjck, 2, 0.0f, 1300.0f);
  numBytes += cPack_init(&cPack_roOhJNQe, 2, 0.0f, 1000.0f);
  numBytes += cPack_init(&cPack_omHyr0QP, 2, 0.0f, 800.0f);
  numBytes += cPack_init(&cPack_MZVUycww, 2, 0.0f, 600.0f);
  numBytes += cSlice_init(&cSlice_HTK15QYU, 27, 1);
  numBytes += cSlice_init(&cSlice_PeXlxVFi, 26, 1);
  numBytes += cSlice_init(&cSlice_Pkp2lVzN, 25, 1);
  numBytes += cSlice_init(&cSlice_xo21VxHa, 24, 1);
  numBytes += cSlice_init(&cSlice_Pc6H6SJb, 23, 1);
  numBytes += cSlice_init(&cSlice_VhuG3ijx, 22, 1);
  numBytes += cSlice_init(&cSlice_eDNdJljF, 21, 1);
  numBytes += cSlice_init(&cSlice_WwzzouaW, 20, 1);
  numBytes += cSlice_init(&cSlice_v4UJcclm, 19, 1);
  numBytes += cSlice_init(&cSlice_62Dakjyw, 18, 1);
  numBytes += cSlice_init(&cSlice_IO1126DB, 17, 1);
  numBytes += cSlice_init(&cSlice_tZxFM0MW, 16, 1);
  numBytes += cSlice_init(&cSlice_JmM36W01, 15, 1);
  numBytes += cSlice_init(&cSlice_6AHimlBb, 14, 1);
  numBytes += cSlice_init(&cSlice_kdP721Su, 13, 1);
  numBytes += cSlice_init(&cSlice_waVCGzC5, 12, 1);
  numBytes += cSlice_init(&cSlice_fuVIyD53, 11, 1);
  numBytes += cSlice_init(&cSlice_KnDD5pBF, 10, 1);
  numBytes += cSlice_init(&cSlice_0I0DRPDW, 9, 1);
  numBytes += cSlice_init(&cSlice_lNzy6rxA, 8, 1);
  numBytes += cSlice_init(&cSlice_S72DqaSR, 7, 1);
  numBytes += cSlice_init(&cSlice_5wiIBqxC, 6, 1);
  numBytes += cSlice_init(&cSlice_GlMOmn9j, 5, 1);
  numBytes += cSlice_init(&cSlice_aZmrr6Zm, 4, 1);
  numBytes += cSlice_init(&cSlice_ZSQdt4bg, 3, 1);
  numBytes += cSlice_init(&cSlice_8xopM96j, 2, 1);
  numBytes += cSlice_init(&cSlice_rJGOKwpC, 1, 1);
  numBytes += cSlice_init(&cSlice_YQtnfnud, 0, 1);
  numBytes += sVarf_init(&sVarf_eFlhMNhk, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_a5uddtDz, 0.0f);
  numBytes += cBinop_init(&cBinop_cI8AcoN5, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_soIEQKjt, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_5hNNGedt, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_kSUxxkLl, 0.0f);
  numBytes += cBinop_init(&cBinop_vtXNX8w3, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_xgr8kGqc, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_bA9Wetsm, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_UeOqnSRQ, 0.0f);
  numBytes += cBinop_init(&cBinop_v1YG01SZ, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_GTc12BOz, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_mPKqpkmM, 22050.0f);
  numBytes += cBinop_init(&cBinop_9OTElhq2, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_O5K4zFbN, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_HNW2Abze, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_YEC3ef7L, 22050.0f);
  numBytes += cBinop_init(&cBinop_jP4Lg9Dv, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_66DfvFWQ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_srvrge5D, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_msZP9Kni, 22050.0f);
  numBytes += cBinop_init(&cBinop_Iq1o4lIk, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_gbQxf4MF, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_TZMUyNuu, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_gUfQa0Ow, 22050.0f);
  numBytes += cVar_init_f(&cVar_wm3Bncre, 1.0f);
  numBytes += cBinop_init(&cBinop_EYvv0ajV, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_WrKTX3uE, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_HBmFV6EM, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_LIrUx2X7, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_0lyZnZS5, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_AaBuLb6v, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_5x1g6MYh, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_u3f0FIAN, 0.0f);
  numBytes += cVar_init_f(&cVar_eRYYIoH0, 0.0f);
  numBytes += cVar_init_f(&cVar_fxWv72hN, 0.0f);
  numBytes += cVar_init_f(&cVar_Yp1DgwnD, 0.0f);
  numBytes += cVar_init_f(&cVar_SjDJ7lBW, 0.0f);
  numBytes += cVar_init_f(&cVar_2pvxhnUP, 0.0f);
  numBytes += cSlice_init(&cSlice_YKCRXnU5, 3, 1);
  numBytes += cSlice_init(&cSlice_NJDyeTBt, 2, 1);
  numBytes += cSlice_init(&cSlice_dvAJjb2o, 1, 1);
  numBytes += cSlice_init(&cSlice_7h9p8fCu, 0, 1);
  numBytes += cPack_init(&cPack_Ry43KsPz, 2, 0.0f, 50.0f);
  numBytes += cDelay_init(this, &cDelay_LHOkFhrM, 0.0f);
  numBytes += cDelay_init(this, &cDelay_nx7Wysuh, 0.0f);
  numBytes += hTable_init(&hTable_apbTTPZW, 256);
  numBytes += cVar_init_f(&cVar_tCaaMBe1, 0.0f);
  numBytes += cVar_init_s(&cVar_YfF2qoKQ, "del-1001-delayD");
  numBytes += sVarf_init(&sVarf_pvHA4OJ0, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_vuzk5poa, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_01Zb3FfK, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_bPbE0tyG, "del-1001-delayC");
  numBytes += sVarf_init(&sVarf_gqIgJBu4, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_5E6nYVeG, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_kpDAO8qS, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_uayX8nTj, 0.0f);
  numBytes += cDelay_init(this, &cDelay_RkCVIXTB, 0.0f);
  numBytes += hTable_init(&hTable_XhJedqsk, 256);
  numBytes += sVarf_init(&sVarf_Y3WzRmvf, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_8eZurph1, 3.0f);
  numBytes += cBinop_init(&cBinop_aCeOlSHg, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_iegmmZ1t, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_pPjobTfX, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_1Kfd1UXC, 3.0f);
  numBytes += cBinop_init(&cBinop_kwxyFjNY, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_iN5OQo6p, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_rYHrArRV, 1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_kMfi16qf, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_ElacULhp, 0.0f);
  numBytes += cVar_init_f(&cVar_2b68knjh, 0.0f);
  numBytes += cVar_init_f(&cVar_KOheMq4n, 0.0f);
  numBytes += cPack_init(&cPack_P8vCwAbw, 2, 0.0f, 100.0f);
  numBytes += cPack_init(&cPack_oZcuMssd, 2, 0.0f, 100.0f);
  numBytes += cVar_init_f(&cVar_duWNHi8k, 0.0f);
  numBytes += cVar_init_f(&cVar_SDYSKUvk, 0.0f);
  numBytes += cVar_init_f(&cVar_usBXk3Me, 0.0f);
  numBytes += cBinop_init(&cBinop_Kegdrj2x, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_Yq6kMTgw, 0.0f); // __pow
  numBytes += cIf_init(&cIf_vmdghITg, false);
  numBytes += cBinop_init(&cBinop_SfiRPvMv, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_SNNL0eAy, 74.0f);
  numBytes += cVar_init_f(&cVar_HueuYc6s, 3.0f);
  numBytes += cSlice_init(&cSlice_7gMGLXAS, 1, -1);
  numBytes += cVar_init_f(&cVar_Z3gsYp4d, 1.0f);
  numBytes += cSlice_init(&cSlice_BppRh8VV, 1, -1);
  numBytes += cVar_init_f(&cVar_xFMSL0pI, 70.0f);
  numBytes += cBinop_init(&cBinop_N2dDU1sF, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_xPORRsr7, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_8ZFXwRSh, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_sPYYuxYy, 3000.0f);
  numBytes += cBinop_init(&cBinop_1baymfZU, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_HATWDr17, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Tho98HOV, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_2MMA9bpj, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_5YmfgbLR, 400.0f);
  numBytes += cBinop_init(&cBinop_CkhdF30C, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_mFguFwa2, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_MVLxs5SP, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_ViPnacYz, 30.0f);
  numBytes += cBinop_init(&cBinop_p6IXBgNi, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_xDbMTbgU, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_bUdgkz5A, false);
  numBytes += cVar_init_f(&cVar_xeGR77cH, 0.0f);
  numBytes += cVar_init_f(&cVar_73sGSSy8, 0.0f);
  numBytes += cPack_init(&cPack_H5Vtc6u8, 3, 0.0f, 500.0f, 100.0f);
  numBytes += cDelay_init(this, &cDelay_YCjucQzM, 0.0f);
  numBytes += cVar_init_f(&cVar_pXJw5Wc4, 20.0f);
  numBytes += cBinop_init(&cBinop_GMkAoCnm, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_SnHo89xo, 0.0f);
  numBytes += cSlice_init(&cSlice_XyePs8Ou, 1, -1);
  numBytes += cSlice_init(&cSlice_ummact4x, 1, -1);
  numBytes += cVar_init_f(&cVar_TFonpskz, 0.0f);
  numBytes += cVar_init_f(&cVar_h1KccUji, 20.0f);
  numBytes += cVar_init_f(&cVar_F9m4NX5Q, 0.0f);
  numBytes += cVar_init_f(&cVar_5SWepp8O, 0.0f);
  numBytes += cVar_init_f(&cVar_YsdZFWvD, 0.0f);
  numBytes += cSlice_init(&cSlice_qPAcEDrH, 1, 1);
  numBytes += cSlice_init(&cSlice_IpOw6uWI, 0, 1);
  numBytes += cBinop_init(&cBinop_eUmLfRwb, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Se9ithdL, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_TSeUG8pq, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_cIQnQCh6, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_GDC4kzEm, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_VayszkYN, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_zmKjosQ6, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_ala19Vw0, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_RM1fOTSi, 0.0f);
  numBytes += cVar_init_f(&cVar_J4x6l1dv, 0.0f);
  numBytes += cVar_init_f(&cVar_vqZ16piH, 0.0f);
  numBytes += cVar_init_f(&cVar_3EiwtQNF, 0.0f);
  numBytes += cVar_init_f(&cVar_WiHVKswG, 0.0f);
  numBytes += cVar_init_f(&cVar_OmpVZAiN, 0.0f);
  numBytes += sVarf_init(&sVarf_dRLXCpJO, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_pZnqA34i, 8.0f);
  numBytes += cBinop_init(&cBinop_0K0DFgGo, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_Ek2CJCcl, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_3o3QPZc3, 0.0f);
  numBytes += cVar_init_f(&cVar_sOTGhXD4, 0.0f);
  numBytes += cBinop_init(&cBinop_Jxvo3aC2, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_yX19gRKQ, 0.0f); // __pow
  numBytes += cIf_init(&cIf_XI8PV4BP, false);
  numBytes += cBinop_init(&cBinop_C4CfSQMV, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_T8onFYGY, 82.0f);
  numBytes += cVar_init_f(&cVar_Gt7OFusf, 21.0f);
  numBytes += cSlice_init(&cSlice_BVUv4jfx, 1, -1);
  numBytes += cVar_init_f(&cVar_VYfvgVJF, 1.0f);
  numBytes += cSlice_init(&cSlice_JO0Qlry4, 1, -1);
  numBytes += cVar_init_f(&cVar_giUCKMNA, 70.0f);
  numBytes += cBinop_init(&cBinop_H7Mf4gPi, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_GXGw3grf, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_JJQU7Riu, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_x1l23zCT, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_f7XnlrCi, 8.0f);
  numBytes += cBinop_init(&cBinop_SQvX53o5, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_kZLet5zG, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_4RW0tsFG, 0.0f);
  numBytes += cVar_init_f(&cVar_gVvo9nZG, 0.0f);
  numBytes += cBinop_init(&cBinop_lLolLFc5, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_QzMifOA7, 0.0f); // __pow
  numBytes += cIf_init(&cIf_MRvtQdze, false);
  numBytes += cBinop_init(&cBinop_uzCo8ki9, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_idLxxWsG, 82.0f);
  numBytes += cVar_init_f(&cVar_xW1VSjA2, 21.0f);
  numBytes += cSlice_init(&cSlice_jRvU6H6R, 1, -1);
  numBytes += cVar_init_f(&cVar_sbvawwHt, 1.0f);
  numBytes += cSlice_init(&cSlice_Gx0yQoYW, 1, -1);
  numBytes += cVar_init_f(&cVar_JBBp28MY, 70.0f);
  numBytes += cBinop_init(&cBinop_PlhJHff3, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_RJ1EOJok, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_kDEDASmD, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_f9JSBrFZ, 10000.0f);
  numBytes += cBinop_init(&cBinop_Y1dpaMbZ, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_okhm4Urt, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_AGA612t8, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_YEDao0nn, 10000.0f);
  numBytes += cBinop_init(&cBinop_Nvr1mXb7, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_FwsMggs2, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_rmG3Zf65, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Cm1OIQvy, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_mM9RKXDP, 20.0f);
  numBytes += cBinop_init(&cBinop_isCZwe0P, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_LzJCOt9w, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_M5bKIu6F, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_hGPPvKsP, 20.0f);
  numBytes += cBinop_init(&cBinop_ByF4CeX1, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_EYMnqdDh, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_7p8VSc6m, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_o3fhoLxg, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_Hxc6jFzM, 0.0f);
  numBytes += cDelay_init(this, &cDelay_C0XMG4gA, 0.0f);
  numBytes += hTable_init(&hTable_b3JFMxCy, 256);
  numBytes += cVar_init_f(&cVar_hd8MVZGX, 8000.0f);
  numBytes += cBinop_init(&cBinop_f8yIMDkN, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_HliSQb5B, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_sKB1ZL77, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_GH6PJkDT, 0.0f);
  numBytes += cVar_init_f(&cVar_sAAvSKkP, 0.0f);
  numBytes += cVar_init_f(&cVar_RIfUwf50, 1.0f);
  numBytes += cVar_init_f(&cVar_xEr6JHTs, 0.0f);
  numBytes += sVarf_init(&sVarf_tsKsN8Bj, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_vc2SEHrU, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ONtOqo71, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_QADPjs8f, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_kVirrXrj, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_45jcZdCT, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_rUUWZd9q, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_V8gtiYrI, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_tne0ImVF, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ROnFGSwN, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_4M2y18db, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_0dQdAdKI, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Ic1u3Qv8, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_DAgoUxaN, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_mzUWWQ55, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_W6z5FNph, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_QeYO86yt, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_k3U8u8m9, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_6C4m6sFx, 0.0f, 0.0f, false);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_Echomatica::~Heavy_Echomatica() {
  sEnv_free(&sEnv_dhtryBzQ);
  sEnv_free(&sEnv_nWj3FZ1B);
  sEnv_free(&sEnv_dh0r6Ivy);
  cPack_free(&cPack_zB1GwfMx);
  cPack_free(&cPack_ArveiZ9D);
  cPack_free(&cPack_jmDo3ca5);
  cPack_free(&cPack_EqDtSjck);
  cPack_free(&cPack_roOhJNQe);
  cPack_free(&cPack_omHyr0QP);
  cPack_free(&cPack_MZVUycww);
  cPack_free(&cPack_Ry43KsPz);
  hTable_free(&hTable_apbTTPZW);
  hTable_free(&hTable_XhJedqsk);
  cPack_free(&cPack_P8vCwAbw);
  cPack_free(&cPack_oZcuMssd);
  cPack_free(&cPack_H5Vtc6u8);
  hTable_free(&hTable_b3JFMxCy);
}

HvTable *Heavy_Echomatica::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0x6F28B8EB: return &hTable_apbTTPZW; // del-1001-delayD
    case 0xA74180A2: return &hTable_XhJedqsk; // del-1001-delayC
    case 0xC7C6279C: return &hTable_b3JFMxCy; // del-1001-delayA
    default: return nullptr;
  }
}

void Heavy_Echomatica::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0x22C9B907: { // Vari
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_xn2iErqJ_sendMessage);
      break;
    }
    case 0xD137AA79: { // 1198-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_zAlgbc7F_sendMessage);
      break;
    }
    case 0x88303B1D: { // 1198-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Lc3HGNlF_sendMessage);
      break;
    }
    case 0x41773AF7: { // 1276-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_d7R6KhK1_sendMessage);
      break;
    }
    case 0xDEB10149: { // 1276-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_wntTLggL_sendMessage);
      break;
    }
    case 0x9DF6835D: { // 1298-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_qqeOEPsK_sendMessage);
      break;
    }
    case 0xA9789206: { // 1298-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Hgt2KqlT_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_RXKOZSTg_sendMessage);
      break;
    }
    case 0xE68AB11B: { // chrs
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_DWG1moIs_sendMessage);
      break;
    }
    case 0xBA8CED4E: { // dry
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_vkZb7ryo_sendMessage);
      break;
    }
    case 0x63E722C0: { // echo
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ZF8IwEOH_sendMessage);
      break;
    }
    case 0x8FA433B0: { // f1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1wJJ7qcp_sendMessage);
      break;
    }
    case 0xEE0EB120: { // f2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_SMC7mGfd_sendMessage);
      break;
    }
    case 0x4FFCF19F: { // f3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_MfJvSxGS_sendMessage);
      break;
    }
    case 0x2AF9F5EB: { // f4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_OFeBFdxb_sendMessage);
      break;
    }
    case 0xC6F6EBB2: { // f5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_vS4Gc7cO_sendMessage);
      break;
    }
    case 0x775D6E5E: { // f6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_llXsTiIa_sendMessage);
      break;
    }
    case 0xBB6123FD: { // fdbck_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_lQ6d954a_sendMessage);
      break;
    }
    case 0xF1E7CD16: { // feedback
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4zPueXKX_sendMessage);
      break;
    }
    case 0xC7AF3F72: { // h1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ikfP9FHo_sendMessage);
      break;
    }
    case 0x9BEBB079: { // h2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_aUOgaEzx_sendMessage);
      break;
    }
    case 0xAB1137FD: { // h3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_dQAjrWNw_sendMessage);
      break;
    }
    case 0x2B4C6DE1: { // h4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_lh4LO6db_sendMessage);
      break;
    }
    case 0x2541E77D: { // h5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_mHGOnRdA_sendMessage);
      break;
    }
    case 0xE7F6D341: { // h6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_vkBVDjJp_sendMessage);
      break;
    }
    case 0x5667A4DA: { // head1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_J226nyMh_sendMessage);
      break;
    }
    case 0xAD6B31A5: { // head2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_6Fj0eZtF_sendMessage);
      break;
    }
    case 0x8A2BD450: { // head3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_7QqyxtUh_sendMessage);
      break;
    }
    case 0xCF5C829A: { // head4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_T7zsn907_sendMessage);
      break;
    }
    case 0xEE70DFBC: { // head5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_dKSmFBTL_sendMessage);
      break;
    }
    case 0x8E4B9939: { // head6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_fQqKYvGD_sendMessage);
      break;
    }
    case 0x7E24361: { // hp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_qDraa7l0_sendMessage);
      break;
    }
    case 0x674D12F6: { // hp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_T9XP370s_sendMessage);
      break;
    }
    case 0x6A20C3F5: { // hp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_xtyxLulO_sendMessage);
      break;
    }
    case 0x123E8795: { // lp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_fytsAVBS_sendMessage);
      break;
    }
    case 0x4588BD1: { // lp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_u4en3ASz_sendMessage);
      break;
    }
    case 0xB7298D49: { // lp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_znV2Hg06_sendMessage);
      break;
    }
    case 0x64BD0F15: { // mf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_kYT5etVo_sendMessage);
      break;
    }
    case 0x5A12F82E: { // mg
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_IcMN7E4X_sendMessage);
      break;
    }
    case 0x2C9C49A7: { // mq
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_mlWXwAcL_sendMessage);
      break;
    }
    case 0xC8D93A6D: { // tapehead_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_BfrTvVXq_sendMessage);
      break;
    }
    case 0xB25D05EB: { // varispeed
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_dTu1I042_sendMessage);
      break;
    }
    case 0x8ADB5B6B: { // varispeed_enable
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_bTeBy8wo_sendMessage);
      break;
    }
    case 0x7BB47B7B: { // wnf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_dxpobZW0_sendMessage);
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


void Heavy_Echomatica::cMsg_M3GufVOC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_KNOXM2dH_sendMessage);
}

void Heavy_Echomatica::cSystem_KNOXM2dH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_EXm6CtEC_sendMessage);
}

void Heavy_Echomatica::cVar_esBvTAzg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_g4LsRdUP_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_csCxdvDn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_YFp2Nd6W_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_TW04Z9lf, m);
}

void Heavy_Echomatica::cBinop_EXm6CtEC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_DFBUrwUV, m);
}

void Heavy_Echomatica::cMsg_g4LsRdUP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_csCxdvDn_sendMessage);
}

void Heavy_Echomatica::cBinop_YFp2Nd6W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_zpNQQOLd, m);
}

void Heavy_Echomatica::cMsg_j8mXDdr0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_O7VjrtBe_sendMessage);
}

void Heavy_Echomatica::cSystem_O7VjrtBe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_yD6UncC2_sendMessage);
}

void Heavy_Echomatica::cVar_rKgluzVi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sP98sBZE_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_WAbv7iPx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_wCugRzVT_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_ZcbpTscK, m);
}

void Heavy_Echomatica::cBinop_yD6UncC2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_MICEO8XP, m);
}

void Heavy_Echomatica::cMsg_sP98sBZE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_WAbv7iPx_sendMessage);
}

void Heavy_Echomatica::cBinop_wCugRzVT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_7M58OInq, m);
}

void Heavy_Echomatica::cMsg_eQ20b8k1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_pDBoOM6d_sendMessage);
}

void Heavy_Echomatica::cSystem_pDBoOM6d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_cEKagUo8_sendMessage);
}

void Heavy_Echomatica::cVar_ecqBO5lH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OhjyWyUi_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_tuKdU5Ls_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_HHsIFTzn_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_9o3wyTlt, m);
}

void Heavy_Echomatica::cBinop_cEKagUo8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_UGD0xLxq, m);
}

void Heavy_Echomatica::cMsg_OhjyWyUi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_tuKdU5Ls_sendMessage);
}

void Heavy_Echomatica::cBinop_HHsIFTzn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_y9cuexUz, m);
}

void Heavy_Echomatica::cMsg_W1jMOeMK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_nSmg0BA2_sendMessage);
}

void Heavy_Echomatica::cSystem_nSmg0BA2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_sZC4SPEo_sendMessage);
}

void Heavy_Echomatica::cVar_vLUEduEE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5Yumjbq3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_TGKRVfaM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_Kzo3ga8K_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_KbcIEzrU, m);
}

void Heavy_Echomatica::cBinop_sZC4SPEo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_XwvQBMDQ, m);
}

void Heavy_Echomatica::cMsg_5Yumjbq3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_TGKRVfaM_sendMessage);
}

void Heavy_Echomatica::cBinop_Kzo3ga8K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_We2FSzY3, m);
}

void Heavy_Echomatica::cCast_9evlSizL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QpKVfAyS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_gApYqLAm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uVbc1wjz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_6oxXL5n5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oXC1nbPs_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_MGAKjrGy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qbmcIMl4_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_Nn8rAaTb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ub295lGD_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_3Mwes9bO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zhNDcKh0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_n0MwXsMb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VJInMj36_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_WTAbcGmD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HDlLIjA3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_GpcfZbyJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5Gplf357_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_SkodDFcr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vMQblF6D_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_O7Eb2Oy9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OtnamZVX_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_yYoW9f8W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_z5ZOTwCY_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_ubVaxxIY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2P8wiwMa_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_9x1WaRLc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rYxO3a0W_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_gfHACEVL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zIpN1VeN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_0RKUoZ8K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ydI5cVFs_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_bjNKWcSf_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AvUXWYbI_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VizFumi8_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4foclgGH_sendMessage);
      break;
    }
    case 0x40400000: { // "3.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_02f1hQsU_sendMessage);
      break;
    }
    case 0x40800000: { // "4.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_p6JU74av_sendMessage);
      break;
    }
    case 0x40A00000: { // "5.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qyKa0lwv_sendMessage);
      break;
    }
    case 0x40C00000: { // "6.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_W7i6bUHn_sendMessage);
      break;
    }
    case 0x40E00000: { // "7.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OWlSfTN8_sendMessage);
      break;
    }
    case 0x41000000: { // "8.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_M4JkDY28_sendMessage);
      break;
    }
    case 0x41100000: { // "9.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_R0aBIxG0_sendMessage);
      break;
    }
    case 0x41200000: { // "10.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_k6qKGy71_sendMessage);
      break;
    }
    case 0x41300000: { // "11.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Qh9hPabR_sendMessage);
      break;
    }
    case 0x41400000: { // "12.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_50G7HS4X_sendMessage);
      break;
    }
    case 0x41500000: { // "13.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_W03hgxex_sendMessage);
      break;
    }
    case 0x41600000: { // "14.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JD5vkucw_sendMessage);
      break;
    }
    case 0x41700000: { // "15.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_X7Q12lIe_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_AvUXWYbI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_O7Eb2Oy9_sendMessage);
}

void Heavy_Echomatica::cCast_VizFumi8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9x1WaRLc_sendMessage);
}

void Heavy_Echomatica::cCast_4foclgGH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GpcfZbyJ_sendMessage);
}

void Heavy_Echomatica::cCast_02f1hQsU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SkodDFcr_sendMessage);
}

void Heavy_Echomatica::cCast_p6JU74av_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ubVaxxIY_sendMessage);
}

void Heavy_Echomatica::cCast_qyKa0lwv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yYoW9f8W_sendMessage);
}

void Heavy_Echomatica::cCast_W7i6bUHn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Nn8rAaTb_sendMessage);
}

void Heavy_Echomatica::cCast_OWlSfTN8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gfHACEVL_sendMessage);
}

void Heavy_Echomatica::cCast_M4JkDY28_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0RKUoZ8K_sendMessage);
}

void Heavy_Echomatica::cCast_R0aBIxG0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3Mwes9bO_sendMessage);
}

void Heavy_Echomatica::cCast_k6qKGy71_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gApYqLAm_sendMessage);
}

void Heavy_Echomatica::cCast_Qh9hPabR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6oxXL5n5_sendMessage);
}

void Heavy_Echomatica::cCast_50G7HS4X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MGAKjrGy_sendMessage);
}

void Heavy_Echomatica::cCast_W03hgxex_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9evlSizL_sendMessage);
}

void Heavy_Echomatica::cCast_JD5vkucw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WTAbcGmD_sendMessage);
}

void Heavy_Echomatica::cCast_X7Q12lIe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_n0MwXsMb_sendMessage);
}

void Heavy_Echomatica::cMsg_5Gplf357_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_HTK15QYU, 0, m, &cSlice_HTK15QYU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PeXlxVFi, 0, m, &cSlice_PeXlxVFi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pkp2lVzN, 0, m, &cSlice_Pkp2lVzN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xo21VxHa, 0, m, &cSlice_xo21VxHa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pc6H6SJb, 0, m, &cSlice_Pc6H6SJb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VhuG3ijx, 0, m, &cSlice_VhuG3ijx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eDNdJljF, 0, m, &cSlice_eDNdJljF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WwzzouaW, 0, m, &cSlice_WwzzouaW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_v4UJcclm, 0, m, &cSlice_v4UJcclm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_62Dakjyw, 0, m, &cSlice_62Dakjyw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IO1126DB, 0, m, &cSlice_IO1126DB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tZxFM0MW, 0, m, &cSlice_tZxFM0MW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JmM36W01, 0, m, &cSlice_JmM36W01_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6AHimlBb, 0, m, &cSlice_6AHimlBb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kdP721Su, 0, m, &cSlice_kdP721Su_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_waVCGzC5, 0, m, &cSlice_waVCGzC5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_fuVIyD53, 0, m, &cSlice_fuVIyD53_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KnDD5pBF, 0, m, &cSlice_KnDD5pBF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0I0DRPDW, 0, m, &cSlice_0I0DRPDW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lNzy6rxA, 0, m, &cSlice_lNzy6rxA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S72DqaSR, 0, m, &cSlice_S72DqaSR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5wiIBqxC, 0, m, &cSlice_5wiIBqxC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GlMOmn9j, 0, m, &cSlice_GlMOmn9j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aZmrr6Zm, 0, m, &cSlice_aZmrr6Zm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZSQdt4bg, 0, m, &cSlice_ZSQdt4bg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8xopM96j, 0, m, &cSlice_8xopM96j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJGOKwpC, 0, m, &cSlice_rJGOKwpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YQtnfnud, 0, m, &cSlice_YQtnfnud_sendMessage);
}

void Heavy_Echomatica::cMsg_rYxO3a0W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_HTK15QYU, 0, m, &cSlice_HTK15QYU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PeXlxVFi, 0, m, &cSlice_PeXlxVFi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pkp2lVzN, 0, m, &cSlice_Pkp2lVzN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xo21VxHa, 0, m, &cSlice_xo21VxHa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pc6H6SJb, 0, m, &cSlice_Pc6H6SJb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VhuG3ijx, 0, m, &cSlice_VhuG3ijx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eDNdJljF, 0, m, &cSlice_eDNdJljF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WwzzouaW, 0, m, &cSlice_WwzzouaW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_v4UJcclm, 0, m, &cSlice_v4UJcclm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_62Dakjyw, 0, m, &cSlice_62Dakjyw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IO1126DB, 0, m, &cSlice_IO1126DB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tZxFM0MW, 0, m, &cSlice_tZxFM0MW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JmM36W01, 0, m, &cSlice_JmM36W01_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6AHimlBb, 0, m, &cSlice_6AHimlBb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kdP721Su, 0, m, &cSlice_kdP721Su_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_waVCGzC5, 0, m, &cSlice_waVCGzC5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_fuVIyD53, 0, m, &cSlice_fuVIyD53_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KnDD5pBF, 0, m, &cSlice_KnDD5pBF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0I0DRPDW, 0, m, &cSlice_0I0DRPDW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lNzy6rxA, 0, m, &cSlice_lNzy6rxA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S72DqaSR, 0, m, &cSlice_S72DqaSR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5wiIBqxC, 0, m, &cSlice_5wiIBqxC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GlMOmn9j, 0, m, &cSlice_GlMOmn9j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aZmrr6Zm, 0, m, &cSlice_aZmrr6Zm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZSQdt4bg, 0, m, &cSlice_ZSQdt4bg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8xopM96j, 0, m, &cSlice_8xopM96j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJGOKwpC, 0, m, &cSlice_rJGOKwpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YQtnfnud, 0, m, &cSlice_YQtnfnud_sendMessage);
}

void Heavy_Echomatica::cMsg_OtnamZVX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_HTK15QYU, 0, m, &cSlice_HTK15QYU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PeXlxVFi, 0, m, &cSlice_PeXlxVFi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pkp2lVzN, 0, m, &cSlice_Pkp2lVzN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xo21VxHa, 0, m, &cSlice_xo21VxHa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pc6H6SJb, 0, m, &cSlice_Pc6H6SJb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VhuG3ijx, 0, m, &cSlice_VhuG3ijx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eDNdJljF, 0, m, &cSlice_eDNdJljF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WwzzouaW, 0, m, &cSlice_WwzzouaW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_v4UJcclm, 0, m, &cSlice_v4UJcclm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_62Dakjyw, 0, m, &cSlice_62Dakjyw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IO1126DB, 0, m, &cSlice_IO1126DB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tZxFM0MW, 0, m, &cSlice_tZxFM0MW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JmM36W01, 0, m, &cSlice_JmM36W01_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6AHimlBb, 0, m, &cSlice_6AHimlBb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kdP721Su, 0, m, &cSlice_kdP721Su_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_waVCGzC5, 0, m, &cSlice_waVCGzC5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_fuVIyD53, 0, m, &cSlice_fuVIyD53_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KnDD5pBF, 0, m, &cSlice_KnDD5pBF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0I0DRPDW, 0, m, &cSlice_0I0DRPDW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lNzy6rxA, 0, m, &cSlice_lNzy6rxA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S72DqaSR, 0, m, &cSlice_S72DqaSR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5wiIBqxC, 0, m, &cSlice_5wiIBqxC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GlMOmn9j, 0, m, &cSlice_GlMOmn9j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aZmrr6Zm, 0, m, &cSlice_aZmrr6Zm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZSQdt4bg, 0, m, &cSlice_ZSQdt4bg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8xopM96j, 0, m, &cSlice_8xopM96j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJGOKwpC, 0, m, &cSlice_rJGOKwpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YQtnfnud, 0, m, &cSlice_YQtnfnud_sendMessage);
}

void Heavy_Echomatica::cMsg_vMQblF6D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_HTK15QYU, 0, m, &cSlice_HTK15QYU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PeXlxVFi, 0, m, &cSlice_PeXlxVFi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pkp2lVzN, 0, m, &cSlice_Pkp2lVzN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xo21VxHa, 0, m, &cSlice_xo21VxHa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pc6H6SJb, 0, m, &cSlice_Pc6H6SJb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VhuG3ijx, 0, m, &cSlice_VhuG3ijx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eDNdJljF, 0, m, &cSlice_eDNdJljF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WwzzouaW, 0, m, &cSlice_WwzzouaW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_v4UJcclm, 0, m, &cSlice_v4UJcclm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_62Dakjyw, 0, m, &cSlice_62Dakjyw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IO1126DB, 0, m, &cSlice_IO1126DB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tZxFM0MW, 0, m, &cSlice_tZxFM0MW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JmM36W01, 0, m, &cSlice_JmM36W01_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6AHimlBb, 0, m, &cSlice_6AHimlBb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kdP721Su, 0, m, &cSlice_kdP721Su_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_waVCGzC5, 0, m, &cSlice_waVCGzC5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_fuVIyD53, 0, m, &cSlice_fuVIyD53_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KnDD5pBF, 0, m, &cSlice_KnDD5pBF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0I0DRPDW, 0, m, &cSlice_0I0DRPDW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lNzy6rxA, 0, m, &cSlice_lNzy6rxA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S72DqaSR, 0, m, &cSlice_S72DqaSR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5wiIBqxC, 0, m, &cSlice_5wiIBqxC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GlMOmn9j, 0, m, &cSlice_GlMOmn9j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aZmrr6Zm, 0, m, &cSlice_aZmrr6Zm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZSQdt4bg, 0, m, &cSlice_ZSQdt4bg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8xopM96j, 0, m, &cSlice_8xopM96j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJGOKwpC, 0, m, &cSlice_rJGOKwpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YQtnfnud, 0, m, &cSlice_YQtnfnud_sendMessage);
}

void Heavy_Echomatica::cMsg_2P8wiwMa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_HTK15QYU, 0, m, &cSlice_HTK15QYU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PeXlxVFi, 0, m, &cSlice_PeXlxVFi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pkp2lVzN, 0, m, &cSlice_Pkp2lVzN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xo21VxHa, 0, m, &cSlice_xo21VxHa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pc6H6SJb, 0, m, &cSlice_Pc6H6SJb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VhuG3ijx, 0, m, &cSlice_VhuG3ijx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eDNdJljF, 0, m, &cSlice_eDNdJljF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WwzzouaW, 0, m, &cSlice_WwzzouaW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_v4UJcclm, 0, m, &cSlice_v4UJcclm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_62Dakjyw, 0, m, &cSlice_62Dakjyw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IO1126DB, 0, m, &cSlice_IO1126DB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tZxFM0MW, 0, m, &cSlice_tZxFM0MW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JmM36W01, 0, m, &cSlice_JmM36W01_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6AHimlBb, 0, m, &cSlice_6AHimlBb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kdP721Su, 0, m, &cSlice_kdP721Su_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_waVCGzC5, 0, m, &cSlice_waVCGzC5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_fuVIyD53, 0, m, &cSlice_fuVIyD53_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KnDD5pBF, 0, m, &cSlice_KnDD5pBF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0I0DRPDW, 0, m, &cSlice_0I0DRPDW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lNzy6rxA, 0, m, &cSlice_lNzy6rxA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S72DqaSR, 0, m, &cSlice_S72DqaSR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5wiIBqxC, 0, m, &cSlice_5wiIBqxC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GlMOmn9j, 0, m, &cSlice_GlMOmn9j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aZmrr6Zm, 0, m, &cSlice_aZmrr6Zm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZSQdt4bg, 0, m, &cSlice_ZSQdt4bg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8xopM96j, 0, m, &cSlice_8xopM96j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJGOKwpC, 0, m, &cSlice_rJGOKwpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YQtnfnud, 0, m, &cSlice_YQtnfnud_sendMessage);
}

void Heavy_Echomatica::cMsg_z5ZOTwCY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_HTK15QYU, 0, m, &cSlice_HTK15QYU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PeXlxVFi, 0, m, &cSlice_PeXlxVFi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pkp2lVzN, 0, m, &cSlice_Pkp2lVzN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xo21VxHa, 0, m, &cSlice_xo21VxHa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pc6H6SJb, 0, m, &cSlice_Pc6H6SJb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VhuG3ijx, 0, m, &cSlice_VhuG3ijx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eDNdJljF, 0, m, &cSlice_eDNdJljF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WwzzouaW, 0, m, &cSlice_WwzzouaW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_v4UJcclm, 0, m, &cSlice_v4UJcclm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_62Dakjyw, 0, m, &cSlice_62Dakjyw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IO1126DB, 0, m, &cSlice_IO1126DB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tZxFM0MW, 0, m, &cSlice_tZxFM0MW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JmM36W01, 0, m, &cSlice_JmM36W01_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6AHimlBb, 0, m, &cSlice_6AHimlBb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kdP721Su, 0, m, &cSlice_kdP721Su_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_waVCGzC5, 0, m, &cSlice_waVCGzC5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_fuVIyD53, 0, m, &cSlice_fuVIyD53_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KnDD5pBF, 0, m, &cSlice_KnDD5pBF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0I0DRPDW, 0, m, &cSlice_0I0DRPDW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lNzy6rxA, 0, m, &cSlice_lNzy6rxA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S72DqaSR, 0, m, &cSlice_S72DqaSR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5wiIBqxC, 0, m, &cSlice_5wiIBqxC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GlMOmn9j, 0, m, &cSlice_GlMOmn9j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aZmrr6Zm, 0, m, &cSlice_aZmrr6Zm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZSQdt4bg, 0, m, &cSlice_ZSQdt4bg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8xopM96j, 0, m, &cSlice_8xopM96j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJGOKwpC, 0, m, &cSlice_rJGOKwpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YQtnfnud, 0, m, &cSlice_YQtnfnud_sendMessage);
}

void Heavy_Echomatica::cMsg_ub295lGD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_HTK15QYU, 0, m, &cSlice_HTK15QYU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PeXlxVFi, 0, m, &cSlice_PeXlxVFi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pkp2lVzN, 0, m, &cSlice_Pkp2lVzN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xo21VxHa, 0, m, &cSlice_xo21VxHa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pc6H6SJb, 0, m, &cSlice_Pc6H6SJb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VhuG3ijx, 0, m, &cSlice_VhuG3ijx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eDNdJljF, 0, m, &cSlice_eDNdJljF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WwzzouaW, 0, m, &cSlice_WwzzouaW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_v4UJcclm, 0, m, &cSlice_v4UJcclm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_62Dakjyw, 0, m, &cSlice_62Dakjyw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IO1126DB, 0, m, &cSlice_IO1126DB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tZxFM0MW, 0, m, &cSlice_tZxFM0MW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JmM36W01, 0, m, &cSlice_JmM36W01_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6AHimlBb, 0, m, &cSlice_6AHimlBb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kdP721Su, 0, m, &cSlice_kdP721Su_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_waVCGzC5, 0, m, &cSlice_waVCGzC5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_fuVIyD53, 0, m, &cSlice_fuVIyD53_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KnDD5pBF, 0, m, &cSlice_KnDD5pBF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0I0DRPDW, 0, m, &cSlice_0I0DRPDW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lNzy6rxA, 0, m, &cSlice_lNzy6rxA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S72DqaSR, 0, m, &cSlice_S72DqaSR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5wiIBqxC, 0, m, &cSlice_5wiIBqxC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GlMOmn9j, 0, m, &cSlice_GlMOmn9j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aZmrr6Zm, 0, m, &cSlice_aZmrr6Zm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZSQdt4bg, 0, m, &cSlice_ZSQdt4bg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8xopM96j, 0, m, &cSlice_8xopM96j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJGOKwpC, 0, m, &cSlice_rJGOKwpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YQtnfnud, 0, m, &cSlice_YQtnfnud_sendMessage);
}

void Heavy_Echomatica::cMsg_zIpN1VeN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_HTK15QYU, 0, m, &cSlice_HTK15QYU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PeXlxVFi, 0, m, &cSlice_PeXlxVFi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pkp2lVzN, 0, m, &cSlice_Pkp2lVzN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xo21VxHa, 0, m, &cSlice_xo21VxHa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pc6H6SJb, 0, m, &cSlice_Pc6H6SJb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VhuG3ijx, 0, m, &cSlice_VhuG3ijx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eDNdJljF, 0, m, &cSlice_eDNdJljF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WwzzouaW, 0, m, &cSlice_WwzzouaW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_v4UJcclm, 0, m, &cSlice_v4UJcclm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_62Dakjyw, 0, m, &cSlice_62Dakjyw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IO1126DB, 0, m, &cSlice_IO1126DB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tZxFM0MW, 0, m, &cSlice_tZxFM0MW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JmM36W01, 0, m, &cSlice_JmM36W01_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6AHimlBb, 0, m, &cSlice_6AHimlBb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kdP721Su, 0, m, &cSlice_kdP721Su_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_waVCGzC5, 0, m, &cSlice_waVCGzC5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_fuVIyD53, 0, m, &cSlice_fuVIyD53_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KnDD5pBF, 0, m, &cSlice_KnDD5pBF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0I0DRPDW, 0, m, &cSlice_0I0DRPDW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lNzy6rxA, 0, m, &cSlice_lNzy6rxA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S72DqaSR, 0, m, &cSlice_S72DqaSR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5wiIBqxC, 0, m, &cSlice_5wiIBqxC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GlMOmn9j, 0, m, &cSlice_GlMOmn9j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aZmrr6Zm, 0, m, &cSlice_aZmrr6Zm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZSQdt4bg, 0, m, &cSlice_ZSQdt4bg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8xopM96j, 0, m, &cSlice_8xopM96j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJGOKwpC, 0, m, &cSlice_rJGOKwpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YQtnfnud, 0, m, &cSlice_YQtnfnud_sendMessage);
}

void Heavy_Echomatica::cMsg_ydI5cVFs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_HTK15QYU, 0, m, &cSlice_HTK15QYU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PeXlxVFi, 0, m, &cSlice_PeXlxVFi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pkp2lVzN, 0, m, &cSlice_Pkp2lVzN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xo21VxHa, 0, m, &cSlice_xo21VxHa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pc6H6SJb, 0, m, &cSlice_Pc6H6SJb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VhuG3ijx, 0, m, &cSlice_VhuG3ijx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eDNdJljF, 0, m, &cSlice_eDNdJljF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WwzzouaW, 0, m, &cSlice_WwzzouaW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_v4UJcclm, 0, m, &cSlice_v4UJcclm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_62Dakjyw, 0, m, &cSlice_62Dakjyw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IO1126DB, 0, m, &cSlice_IO1126DB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tZxFM0MW, 0, m, &cSlice_tZxFM0MW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JmM36W01, 0, m, &cSlice_JmM36W01_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6AHimlBb, 0, m, &cSlice_6AHimlBb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kdP721Su, 0, m, &cSlice_kdP721Su_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_waVCGzC5, 0, m, &cSlice_waVCGzC5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_fuVIyD53, 0, m, &cSlice_fuVIyD53_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KnDD5pBF, 0, m, &cSlice_KnDD5pBF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0I0DRPDW, 0, m, &cSlice_0I0DRPDW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lNzy6rxA, 0, m, &cSlice_lNzy6rxA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S72DqaSR, 0, m, &cSlice_S72DqaSR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5wiIBqxC, 0, m, &cSlice_5wiIBqxC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GlMOmn9j, 0, m, &cSlice_GlMOmn9j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aZmrr6Zm, 0, m, &cSlice_aZmrr6Zm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZSQdt4bg, 0, m, &cSlice_ZSQdt4bg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8xopM96j, 0, m, &cSlice_8xopM96j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJGOKwpC, 0, m, &cSlice_rJGOKwpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YQtnfnud, 0, m, &cSlice_YQtnfnud_sendMessage);
}

void Heavy_Echomatica::cMsg_zhNDcKh0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_HTK15QYU, 0, m, &cSlice_HTK15QYU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PeXlxVFi, 0, m, &cSlice_PeXlxVFi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pkp2lVzN, 0, m, &cSlice_Pkp2lVzN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xo21VxHa, 0, m, &cSlice_xo21VxHa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pc6H6SJb, 0, m, &cSlice_Pc6H6SJb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VhuG3ijx, 0, m, &cSlice_VhuG3ijx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eDNdJljF, 0, m, &cSlice_eDNdJljF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WwzzouaW, 0, m, &cSlice_WwzzouaW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_v4UJcclm, 0, m, &cSlice_v4UJcclm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_62Dakjyw, 0, m, &cSlice_62Dakjyw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IO1126DB, 0, m, &cSlice_IO1126DB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tZxFM0MW, 0, m, &cSlice_tZxFM0MW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JmM36W01, 0, m, &cSlice_JmM36W01_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6AHimlBb, 0, m, &cSlice_6AHimlBb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kdP721Su, 0, m, &cSlice_kdP721Su_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_waVCGzC5, 0, m, &cSlice_waVCGzC5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_fuVIyD53, 0, m, &cSlice_fuVIyD53_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KnDD5pBF, 0, m, &cSlice_KnDD5pBF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0I0DRPDW, 0, m, &cSlice_0I0DRPDW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lNzy6rxA, 0, m, &cSlice_lNzy6rxA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S72DqaSR, 0, m, &cSlice_S72DqaSR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5wiIBqxC, 0, m, &cSlice_5wiIBqxC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GlMOmn9j, 0, m, &cSlice_GlMOmn9j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aZmrr6Zm, 0, m, &cSlice_aZmrr6Zm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZSQdt4bg, 0, m, &cSlice_ZSQdt4bg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8xopM96j, 0, m, &cSlice_8xopM96j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJGOKwpC, 0, m, &cSlice_rJGOKwpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YQtnfnud, 0, m, &cSlice_YQtnfnud_sendMessage);
}

void Heavy_Echomatica::cMsg_uVbc1wjz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_HTK15QYU, 0, m, &cSlice_HTK15QYU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PeXlxVFi, 0, m, &cSlice_PeXlxVFi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pkp2lVzN, 0, m, &cSlice_Pkp2lVzN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xo21VxHa, 0, m, &cSlice_xo21VxHa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pc6H6SJb, 0, m, &cSlice_Pc6H6SJb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VhuG3ijx, 0, m, &cSlice_VhuG3ijx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eDNdJljF, 0, m, &cSlice_eDNdJljF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WwzzouaW, 0, m, &cSlice_WwzzouaW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_v4UJcclm, 0, m, &cSlice_v4UJcclm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_62Dakjyw, 0, m, &cSlice_62Dakjyw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IO1126DB, 0, m, &cSlice_IO1126DB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tZxFM0MW, 0, m, &cSlice_tZxFM0MW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JmM36W01, 0, m, &cSlice_JmM36W01_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6AHimlBb, 0, m, &cSlice_6AHimlBb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kdP721Su, 0, m, &cSlice_kdP721Su_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_waVCGzC5, 0, m, &cSlice_waVCGzC5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_fuVIyD53, 0, m, &cSlice_fuVIyD53_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KnDD5pBF, 0, m, &cSlice_KnDD5pBF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0I0DRPDW, 0, m, &cSlice_0I0DRPDW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lNzy6rxA, 0, m, &cSlice_lNzy6rxA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S72DqaSR, 0, m, &cSlice_S72DqaSR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5wiIBqxC, 0, m, &cSlice_5wiIBqxC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GlMOmn9j, 0, m, &cSlice_GlMOmn9j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aZmrr6Zm, 0, m, &cSlice_aZmrr6Zm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZSQdt4bg, 0, m, &cSlice_ZSQdt4bg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8xopM96j, 0, m, &cSlice_8xopM96j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJGOKwpC, 0, m, &cSlice_rJGOKwpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YQtnfnud, 0, m, &cSlice_YQtnfnud_sendMessage);
}

void Heavy_Echomatica::cMsg_oXC1nbPs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_HTK15QYU, 0, m, &cSlice_HTK15QYU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PeXlxVFi, 0, m, &cSlice_PeXlxVFi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pkp2lVzN, 0, m, &cSlice_Pkp2lVzN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xo21VxHa, 0, m, &cSlice_xo21VxHa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pc6H6SJb, 0, m, &cSlice_Pc6H6SJb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VhuG3ijx, 0, m, &cSlice_VhuG3ijx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eDNdJljF, 0, m, &cSlice_eDNdJljF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WwzzouaW, 0, m, &cSlice_WwzzouaW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_v4UJcclm, 0, m, &cSlice_v4UJcclm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_62Dakjyw, 0, m, &cSlice_62Dakjyw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IO1126DB, 0, m, &cSlice_IO1126DB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tZxFM0MW, 0, m, &cSlice_tZxFM0MW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JmM36W01, 0, m, &cSlice_JmM36W01_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6AHimlBb, 0, m, &cSlice_6AHimlBb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kdP721Su, 0, m, &cSlice_kdP721Su_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_waVCGzC5, 0, m, &cSlice_waVCGzC5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_fuVIyD53, 0, m, &cSlice_fuVIyD53_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KnDD5pBF, 0, m, &cSlice_KnDD5pBF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0I0DRPDW, 0, m, &cSlice_0I0DRPDW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lNzy6rxA, 0, m, &cSlice_lNzy6rxA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S72DqaSR, 0, m, &cSlice_S72DqaSR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5wiIBqxC, 0, m, &cSlice_5wiIBqxC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GlMOmn9j, 0, m, &cSlice_GlMOmn9j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aZmrr6Zm, 0, m, &cSlice_aZmrr6Zm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZSQdt4bg, 0, m, &cSlice_ZSQdt4bg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8xopM96j, 0, m, &cSlice_8xopM96j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJGOKwpC, 0, m, &cSlice_rJGOKwpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YQtnfnud, 0, m, &cSlice_YQtnfnud_sendMessage);
}

void Heavy_Echomatica::cMsg_qbmcIMl4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_HTK15QYU, 0, m, &cSlice_HTK15QYU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PeXlxVFi, 0, m, &cSlice_PeXlxVFi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pkp2lVzN, 0, m, &cSlice_Pkp2lVzN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xo21VxHa, 0, m, &cSlice_xo21VxHa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pc6H6SJb, 0, m, &cSlice_Pc6H6SJb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VhuG3ijx, 0, m, &cSlice_VhuG3ijx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eDNdJljF, 0, m, &cSlice_eDNdJljF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WwzzouaW, 0, m, &cSlice_WwzzouaW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_v4UJcclm, 0, m, &cSlice_v4UJcclm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_62Dakjyw, 0, m, &cSlice_62Dakjyw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IO1126DB, 0, m, &cSlice_IO1126DB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tZxFM0MW, 0, m, &cSlice_tZxFM0MW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JmM36W01, 0, m, &cSlice_JmM36W01_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6AHimlBb, 0, m, &cSlice_6AHimlBb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kdP721Su, 0, m, &cSlice_kdP721Su_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_waVCGzC5, 0, m, &cSlice_waVCGzC5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_fuVIyD53, 0, m, &cSlice_fuVIyD53_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KnDD5pBF, 0, m, &cSlice_KnDD5pBF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0I0DRPDW, 0, m, &cSlice_0I0DRPDW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lNzy6rxA, 0, m, &cSlice_lNzy6rxA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S72DqaSR, 0, m, &cSlice_S72DqaSR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5wiIBqxC, 0, m, &cSlice_5wiIBqxC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GlMOmn9j, 0, m, &cSlice_GlMOmn9j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aZmrr6Zm, 0, m, &cSlice_aZmrr6Zm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZSQdt4bg, 0, m, &cSlice_ZSQdt4bg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8xopM96j, 0, m, &cSlice_8xopM96j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJGOKwpC, 0, m, &cSlice_rJGOKwpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YQtnfnud, 0, m, &cSlice_YQtnfnud_sendMessage);
}

void Heavy_Echomatica::cMsg_QpKVfAyS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_HTK15QYU, 0, m, &cSlice_HTK15QYU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PeXlxVFi, 0, m, &cSlice_PeXlxVFi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pkp2lVzN, 0, m, &cSlice_Pkp2lVzN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xo21VxHa, 0, m, &cSlice_xo21VxHa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pc6H6SJb, 0, m, &cSlice_Pc6H6SJb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VhuG3ijx, 0, m, &cSlice_VhuG3ijx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eDNdJljF, 0, m, &cSlice_eDNdJljF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WwzzouaW, 0, m, &cSlice_WwzzouaW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_v4UJcclm, 0, m, &cSlice_v4UJcclm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_62Dakjyw, 0, m, &cSlice_62Dakjyw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IO1126DB, 0, m, &cSlice_IO1126DB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tZxFM0MW, 0, m, &cSlice_tZxFM0MW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JmM36W01, 0, m, &cSlice_JmM36W01_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6AHimlBb, 0, m, &cSlice_6AHimlBb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kdP721Su, 0, m, &cSlice_kdP721Su_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_waVCGzC5, 0, m, &cSlice_waVCGzC5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_fuVIyD53, 0, m, &cSlice_fuVIyD53_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KnDD5pBF, 0, m, &cSlice_KnDD5pBF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0I0DRPDW, 0, m, &cSlice_0I0DRPDW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lNzy6rxA, 0, m, &cSlice_lNzy6rxA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S72DqaSR, 0, m, &cSlice_S72DqaSR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5wiIBqxC, 0, m, &cSlice_5wiIBqxC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GlMOmn9j, 0, m, &cSlice_GlMOmn9j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aZmrr6Zm, 0, m, &cSlice_aZmrr6Zm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZSQdt4bg, 0, m, &cSlice_ZSQdt4bg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8xopM96j, 0, m, &cSlice_8xopM96j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJGOKwpC, 0, m, &cSlice_rJGOKwpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YQtnfnud, 0, m, &cSlice_YQtnfnud_sendMessage);
}

void Heavy_Echomatica::cMsg_HDlLIjA3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_HTK15QYU, 0, m, &cSlice_HTK15QYU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PeXlxVFi, 0, m, &cSlice_PeXlxVFi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pkp2lVzN, 0, m, &cSlice_Pkp2lVzN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xo21VxHa, 0, m, &cSlice_xo21VxHa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pc6H6SJb, 0, m, &cSlice_Pc6H6SJb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VhuG3ijx, 0, m, &cSlice_VhuG3ijx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eDNdJljF, 0, m, &cSlice_eDNdJljF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WwzzouaW, 0, m, &cSlice_WwzzouaW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_v4UJcclm, 0, m, &cSlice_v4UJcclm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_62Dakjyw, 0, m, &cSlice_62Dakjyw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IO1126DB, 0, m, &cSlice_IO1126DB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tZxFM0MW, 0, m, &cSlice_tZxFM0MW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JmM36W01, 0, m, &cSlice_JmM36W01_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6AHimlBb, 0, m, &cSlice_6AHimlBb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kdP721Su, 0, m, &cSlice_kdP721Su_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_waVCGzC5, 0, m, &cSlice_waVCGzC5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_fuVIyD53, 0, m, &cSlice_fuVIyD53_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KnDD5pBF, 0, m, &cSlice_KnDD5pBF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0I0DRPDW, 0, m, &cSlice_0I0DRPDW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lNzy6rxA, 0, m, &cSlice_lNzy6rxA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S72DqaSR, 0, m, &cSlice_S72DqaSR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5wiIBqxC, 0, m, &cSlice_5wiIBqxC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GlMOmn9j, 0, m, &cSlice_GlMOmn9j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aZmrr6Zm, 0, m, &cSlice_aZmrr6Zm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZSQdt4bg, 0, m, &cSlice_ZSQdt4bg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8xopM96j, 0, m, &cSlice_8xopM96j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJGOKwpC, 0, m, &cSlice_rJGOKwpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YQtnfnud, 0, m, &cSlice_YQtnfnud_sendMessage);
}

void Heavy_Echomatica::cMsg_VJInMj36_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_HTK15QYU, 0, m, &cSlice_HTK15QYU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PeXlxVFi, 0, m, &cSlice_PeXlxVFi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pkp2lVzN, 0, m, &cSlice_Pkp2lVzN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xo21VxHa, 0, m, &cSlice_xo21VxHa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Pc6H6SJb, 0, m, &cSlice_Pc6H6SJb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VhuG3ijx, 0, m, &cSlice_VhuG3ijx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eDNdJljF, 0, m, &cSlice_eDNdJljF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WwzzouaW, 0, m, &cSlice_WwzzouaW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_v4UJcclm, 0, m, &cSlice_v4UJcclm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_62Dakjyw, 0, m, &cSlice_62Dakjyw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IO1126DB, 0, m, &cSlice_IO1126DB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tZxFM0MW, 0, m, &cSlice_tZxFM0MW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JmM36W01, 0, m, &cSlice_JmM36W01_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6AHimlBb, 0, m, &cSlice_6AHimlBb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kdP721Su, 0, m, &cSlice_kdP721Su_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_waVCGzC5, 0, m, &cSlice_waVCGzC5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_fuVIyD53, 0, m, &cSlice_fuVIyD53_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KnDD5pBF, 0, m, &cSlice_KnDD5pBF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0I0DRPDW, 0, m, &cSlice_0I0DRPDW_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lNzy6rxA, 0, m, &cSlice_lNzy6rxA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S72DqaSR, 0, m, &cSlice_S72DqaSR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5wiIBqxC, 0, m, &cSlice_5wiIBqxC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GlMOmn9j, 0, m, &cSlice_GlMOmn9j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aZmrr6Zm, 0, m, &cSlice_aZmrr6Zm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZSQdt4bg, 0, m, &cSlice_ZSQdt4bg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8xopM96j, 0, m, &cSlice_8xopM96j_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rJGOKwpC, 0, m, &cSlice_rJGOKwpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YQtnfnud, 0, m, &cSlice_YQtnfnud_sendMessage);
}

void Heavy_Echomatica::cMsg_NvAREFT1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Hvtu7pUw_sendMessage);
}

void Heavy_Echomatica::cSystem_Hvtu7pUw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_MdMEorps_sendMessage);
}

void Heavy_Echomatica::cVar_UrKxCJfu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bzfcgPMu_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_H7K9iU4v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_QHtk0Knn_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_3hfvWkAP, m);
}

void Heavy_Echomatica::cBinop_MdMEorps_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_eKsdqDcJ, m);
}

void Heavy_Echomatica::cMsg_bzfcgPMu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_H7K9iU4v_sendMessage);
}

void Heavy_Echomatica::cBinop_QHtk0Knn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_IHgdfppD, m);
}

void Heavy_Echomatica::cMsg_KoQ0vi0i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BLVlOPW2_sendMessage);
}

void Heavy_Echomatica::cSystem_BLVlOPW2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Gd0MJ1cM_sendMessage);
}

void Heavy_Echomatica::cVar_F6Fobx2a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_R6Xpi3Qv_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_6AM2iqSl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_J7Csgy2o_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_OpBH5klo, m);
}

void Heavy_Echomatica::cBinop_Gd0MJ1cM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_dUNdizSV, m);
}

void Heavy_Echomatica::cMsg_R6Xpi3Qv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_6AM2iqSl_sendMessage);
}

void Heavy_Echomatica::cBinop_J7Csgy2o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_OqM3Un9M, m);
}

void Heavy_Echomatica::cVar_O9zjM8pO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_7EH4vCqc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_yFrJrO2x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_nMX4aILj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_7z3veNiY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_jXrGywHj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_u1OZJikr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_BAeUYI9U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_BNX7YXMA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_bhndsavR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_BjXL8R4m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_KuWJ52FL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cPack_zB1GwfMx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_OTuEndfN, 0, m, NULL);
}

void Heavy_Echomatica::cPack_ArveiZ9D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_hljQ9oLE, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_u3f0FIAN, 0, m, &cVar_u3f0FIAN_sendMessage);
}

void Heavy_Echomatica::cPack_jmDo3ca5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Xk0vlQbg, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_eRYYIoH0, 0, m, &cVar_eRYYIoH0_sendMessage);
}

void Heavy_Echomatica::cPack_EqDtSjck_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Z9VpDYU9, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_Yp1DgwnD, 0, m, &cVar_Yp1DgwnD_sendMessage);
}

void Heavy_Echomatica::cPack_roOhJNQe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_NuMzN8Th, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_SjDJ7lBW, 0, m, &cVar_SjDJ7lBW_sendMessage);
}

void Heavy_Echomatica::cPack_omHyr0QP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_95Tiw3iI, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_2pvxhnUP, 0, m, &cVar_2pvxhnUP_sendMessage);
}

void Heavy_Echomatica::cPack_MZVUycww_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_fFNq6BZS, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_fxWv72hN, 0, m, &cVar_fxWv72hN_sendMessage);
}

void Heavy_Echomatica::cSlice_HTK15QYU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_a0UoWe6b_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_PeXlxVFi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_xFKxHwp2_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_Pkp2lVzN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_u4MEl1r8_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_xo21VxHa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_CVKsRm83_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_Pc6H6SJb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_O5rx6azx_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_VhuG3ijx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Je5SNKGn_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_eDNdJljF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_9YBNFqEL_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_WwzzouaW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_uW2pnBgq_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_v4UJcclm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_vMXcbNNX_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_62Dakjyw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_7vji8T9i_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_IO1126DB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_es8Tb0Vv_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_tZxFM0MW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ojDAcGqI_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_JmM36W01_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_40Es05Ml_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_6AHimlBb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_JcH2kTxg_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_kdP721Su_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_cc0W1V7Z_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_waVCGzC5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_lbj6thRM_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_fuVIyD53_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_iWXFhpgf_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_KnDD5pBF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_kRuTS2Cx_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_0I0DRPDW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_x9youFHq_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_lNzy6rxA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_qHEKHxIB_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_S72DqaSR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_EtNwRFz2_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_5wiIBqxC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_QZVlJRTv_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_GlMOmn9j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_WEoXjUqX_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_aZmrr6Zm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_immyeqcA_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_ZSQdt4bg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_MqplvJh8_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_8xopM96j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_mbXKB58P_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_rJGOKwpC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_zAbJs0PM_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_YQtnfnud_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Pb3o1IRJ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_6ECzQuDk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_g1hiW52e_sendMessage);
}

void Heavy_Echomatica::cBinop_g1hiW52e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Mg7cP7wM_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_PCykDAd0_sendMessage);
}

void Heavy_Echomatica::cVar_a5uddtDz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_9kTs2bbc_sendMessage);
}

void Heavy_Echomatica::cMsg_LbyBlTSQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_SP27QtXz_sendMessage);
}

void Heavy_Echomatica::cSystem_SP27QtXz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cI8AcoN5, HV_BINOP_DIVIDE, 1, m, &cBinop_cI8AcoN5_sendMessage);
}

void Heavy_Echomatica::cBinop_Mg7cP7wM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_Z6fYpdwi_sendMessage);
}

void Heavy_Echomatica::cBinop_Z6fYpdwi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_soIEQKjt, m);
}

void Heavy_Echomatica::cMsg_tko8nXy2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_9dZmtgqQ_sendMessage);
}

void Heavy_Echomatica::cBinop_9dZmtgqQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_6ECzQuDk_sendMessage);
}

void Heavy_Echomatica::cBinop_PCykDAd0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_eFlhMNhk, m);
}

void Heavy_Echomatica::cBinop_9kTs2bbc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_cCcvViVn_sendMessage);
}

void Heavy_Echomatica::cBinop_cCcvViVn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cI8AcoN5, HV_BINOP_DIVIDE, 0, m, &cBinop_cI8AcoN5_sendMessage);
}

void Heavy_Echomatica::cBinop_cI8AcoN5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tko8nXy2_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_qQh0O3tW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_W9VE19fB_sendMessage);
}

void Heavy_Echomatica::cBinop_W9VE19fB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_3OIl4mmT_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_Qc77fPQK_sendMessage);
}

void Heavy_Echomatica::cVar_kSUxxkLl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_CIKsbfck_sendMessage);
}

void Heavy_Echomatica::cMsg_64MXd27u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_DrpRy0DM_sendMessage);
}

void Heavy_Echomatica::cSystem_DrpRy0DM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vtXNX8w3, HV_BINOP_DIVIDE, 1, m, &cBinop_vtXNX8w3_sendMessage);
}

void Heavy_Echomatica::cBinop_3OIl4mmT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_XsRXoAth_sendMessage);
}

void Heavy_Echomatica::cBinop_XsRXoAth_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_xgr8kGqc, m);
}

void Heavy_Echomatica::cMsg_TYVbGeNj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Yod9GG4X_sendMessage);
}

void Heavy_Echomatica::cBinop_Yod9GG4X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_qQh0O3tW_sendMessage);
}

void Heavy_Echomatica::cBinop_Qc77fPQK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_5hNNGedt, m);
}

void Heavy_Echomatica::cBinop_CIKsbfck_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_GkZ8HW4g_sendMessage);
}

void Heavy_Echomatica::cBinop_GkZ8HW4g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vtXNX8w3, HV_BINOP_DIVIDE, 0, m, &cBinop_vtXNX8w3_sendMessage);
}

void Heavy_Echomatica::cBinop_vtXNX8w3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TYVbGeNj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_wac0XTOJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_T7wa4TpM_sendMessage);
}

void Heavy_Echomatica::cBinop_T7wa4TpM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_ExvsHgC1_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_BflMXWHN_sendMessage);
}

void Heavy_Echomatica::cVar_UeOqnSRQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_VAHMWHJC_sendMessage);
}

void Heavy_Echomatica::cMsg_gXKMfnHh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_HxuC7wCe_sendMessage);
}

void Heavy_Echomatica::cSystem_HxuC7wCe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_v1YG01SZ, HV_BINOP_DIVIDE, 1, m, &cBinop_v1YG01SZ_sendMessage);
}

void Heavy_Echomatica::cBinop_ExvsHgC1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_hWi73Kfk_sendMessage);
}

void Heavy_Echomatica::cBinop_hWi73Kfk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_GTc12BOz, m);
}

void Heavy_Echomatica::cMsg_n8N1uYbu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_bFwS6vSa_sendMessage);
}

void Heavy_Echomatica::cBinop_bFwS6vSa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_wac0XTOJ_sendMessage);
}

void Heavy_Echomatica::cBinop_BflMXWHN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_bA9Wetsm, m);
}

void Heavy_Echomatica::cBinop_VAHMWHJC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_cQFEAwIV_sendMessage);
}

void Heavy_Echomatica::cBinop_cQFEAwIV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_v1YG01SZ, HV_BINOP_DIVIDE, 0, m, &cBinop_v1YG01SZ_sendMessage);
}

void Heavy_Echomatica::cBinop_v1YG01SZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_n8N1uYbu_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_mPKqpkmM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9OTElhq2, HV_BINOP_MULTIPLY, 0, m, &cBinop_9OTElhq2_sendMessage);
}

void Heavy_Echomatica::cMsg_Ux9EeydJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_aMFCgd9P_sendMessage);
}

void Heavy_Echomatica::cSystem_aMFCgd9P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_b556pbrT_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_9OTElhq2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_o0fpBhu6_sendMessage);
}

void Heavy_Echomatica::cBinop_vccttCGq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9OTElhq2, HV_BINOP_MULTIPLY, 1, m, &cBinop_9OTElhq2_sendMessage);
}

void Heavy_Echomatica::cMsg_b556pbrT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_vccttCGq_sendMessage);
}

void Heavy_Echomatica::cBinop_o0fpBhu6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_mllNBkRO_sendMessage);
}

void Heavy_Echomatica::cBinop_mllNBkRO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_zqbwTMm0_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_HNW2Abze, m);
}

void Heavy_Echomatica::cBinop_zqbwTMm0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_O5K4zFbN, m);
}

void Heavy_Echomatica::cVar_YEC3ef7L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jP4Lg9Dv, HV_BINOP_MULTIPLY, 0, m, &cBinop_jP4Lg9Dv_sendMessage);
}

void Heavy_Echomatica::cMsg_AApytX7P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_bxcRJgml_sendMessage);
}

void Heavy_Echomatica::cSystem_bxcRJgml_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nG0V8egF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_jP4Lg9Dv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_4X1gVD4w_sendMessage);
}

void Heavy_Echomatica::cBinop_j2rXAbKm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jP4Lg9Dv, HV_BINOP_MULTIPLY, 1, m, &cBinop_jP4Lg9Dv_sendMessage);
}

void Heavy_Echomatica::cMsg_nG0V8egF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_j2rXAbKm_sendMessage);
}

void Heavy_Echomatica::cBinop_4X1gVD4w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_jdPPqGNc_sendMessage);
}

void Heavy_Echomatica::cBinop_jdPPqGNc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_5Jimpqxf_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_srvrge5D, m);
}

void Heavy_Echomatica::cBinop_5Jimpqxf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_66DfvFWQ, m);
}

void Heavy_Echomatica::cVar_msZP9Kni_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Iq1o4lIk, HV_BINOP_MULTIPLY, 0, m, &cBinop_Iq1o4lIk_sendMessage);
}

void Heavy_Echomatica::cMsg_xJcRMce1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_dq3trytA_sendMessage);
}

void Heavy_Echomatica::cSystem_dq3trytA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_om4KnPmM_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_Iq1o4lIk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_dh2TC3Dz_sendMessage);
}

void Heavy_Echomatica::cBinop_mDLsH4Yi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Iq1o4lIk, HV_BINOP_MULTIPLY, 1, m, &cBinop_Iq1o4lIk_sendMessage);
}

void Heavy_Echomatica::cMsg_om4KnPmM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_mDLsH4Yi_sendMessage);
}

void Heavy_Echomatica::cBinop_dh2TC3Dz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_D06PqAWk_sendMessage);
}

void Heavy_Echomatica::cBinop_D06PqAWk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_EwHZGQBB_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_TZMUyNuu, m);
}

void Heavy_Echomatica::cBinop_EwHZGQBB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_gbQxf4MF, m);
}

void Heavy_Echomatica::cMsg_j0xJyUOo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_TgiINzIG_sendMessage);
}

void Heavy_Echomatica::cSystem_TgiINzIG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EYvv0ajV, HV_BINOP_DIVIDE, 1, m, &cBinop_EYvv0ajV_sendMessage);
}

void Heavy_Echomatica::cVar_gUfQa0Ow_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_3WpI4wLw_sendMessage);
}

void Heavy_Echomatica::cVar_wm3Bncre_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.001f, 0, m, &cBinop_8sStdlKy_sendMessage);
}

void Heavy_Echomatica::cUnop_Rnh4S7SM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_duqUsWGQ_sendMessage);
}

void Heavy_Echomatica::cBinop_EYvv0ajV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LIrUx2X7, HV_BINOP_MULTIPLY, 1, m, &cBinop_LIrUx2X7_sendMessage);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_Rnh4S7SM_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_WrKTX3uE, HV_BINOP_DIVIDE, 0, m, &cBinop_WrKTX3uE_sendMessage);
}

void Heavy_Echomatica::cBinop_3WpI4wLw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EYvv0ajV, HV_BINOP_DIVIDE, 0, m, &cBinop_EYvv0ajV_sendMessage);
}

void Heavy_Echomatica::cBinop_WrKTX3uE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_XEKJt80j_sendMessage);
}

void Heavy_Echomatica::cBinop_6NhgwpMG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_wWgQTHep_sendMessage);
}

void Heavy_Echomatica::cBinop_wWgQTHep_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_oturleNf_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_HBmFV6EM, HV_BINOP_MULTIPLY, 0, m, &cBinop_HBmFV6EM_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_LIrUx2X7, HV_BINOP_MULTIPLY, 0, m, &cBinop_LIrUx2X7_sendMessage);
}

void Heavy_Echomatica::cBinop_duqUsWGQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HBmFV6EM, HV_BINOP_MULTIPLY, 1, m, &cBinop_HBmFV6EM_sendMessage);
}

void Heavy_Echomatica::cBinop_HBmFV6EM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_v5PSnQaA_sendMessage);
}

void Heavy_Echomatica::cCast_pLSN40O6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_gUfQa0Ow, 0, m, &cVar_gUfQa0Ow_sendMessage);
}

void Heavy_Echomatica::cBinop_uljOrLgZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_7IdCw9co_sendMessage);
}

void Heavy_Echomatica::cBinop_7IdCw9co_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_CnFFakxe, 5, m);
}

void Heavy_Echomatica::cBinop_v5PSnQaA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_CnFFakxe, 4, m);
}

void Heavy_Echomatica::cBinop_ShWAqN4K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AaBuLb6v, HV_BINOP_MULTIPLY, 0, m, &cBinop_AaBuLb6v_sendMessage);
}

void Heavy_Echomatica::cBinop_LIrUx2X7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0lyZnZS5, HV_BINOP_ADD, 1, m, &cBinop_0lyZnZS5_sendMessage);
}

void Heavy_Echomatica::cBinop_oturleNf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_uljOrLgZ_sendMessage);
}

void Heavy_Echomatica::cBinop_0lyZnZS5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AaBuLb6v, HV_BINOP_MULTIPLY, 1, m, &cBinop_AaBuLb6v_sendMessage);
}

void Heavy_Echomatica::cBinop_AaBuLb6v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_CnFFakxe, 1, m);
}

void Heavy_Echomatica::cBinop_8sStdlKy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WrKTX3uE, HV_BINOP_DIVIDE, 1, m, &cBinop_WrKTX3uE_sendMessage);
}

void Heavy_Echomatica::cBinop_XEKJt80j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_6NhgwpMG_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_0lyZnZS5, HV_BINOP_ADD, 0, m, &cBinop_0lyZnZS5_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_ShWAqN4K_sendMessage);
}

void Heavy_Echomatica::cVar_u3f0FIAN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_eRYYIoH0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_fxWv72hN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_Yp1DgwnD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_SjDJ7lBW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_2pvxhnUP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cSlice_YKCRXnU5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_6C4m6sFx, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_NJDyeTBt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_mX1lNapS, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_dvAJjb2o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_k3U8u8m9, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_7h9p8fCu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_5ePvV3z8, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSwitchcase_pBPI226n_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_R2T4Dl4w_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zQUwYXGD_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_R2T4Dl4w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qrJ8lTB6_sendMessage);
}

void Heavy_Echomatica::cPack_Ry43KsPz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_pw3m5Egq, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_NZOYVrxm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_suec6CcK_sendMessage);
}

void Heavy_Echomatica::cSystem_suec6CcK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_zqe8z0or_sendMessage);
}

void Heavy_Echomatica::cDelay_LHOkFhrM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_LHOkFhrM, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_nx7Wysuh, 0, m, &cDelay_nx7Wysuh_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_LHOkFhrM, 0, m, &cDelay_LHOkFhrM_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_Lapkd5Oa, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_nx7Wysuh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_nx7Wysuh, m);
  cMsg_LapakrNc_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_d0MmTeU2_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_hi1dwmlw_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_6dPmPhaY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_iIT6ILC3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_apbTTPZW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0PfmUYAA_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_LHOkFhrM, 2, m, &cDelay_LHOkFhrM_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5ZouhktU_sendMessage);
}

void Heavy_Echomatica::cMsg_iIT6ILC3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_apbTTPZW, 0, m, &hTable_apbTTPZW_sendMessage);
}

void Heavy_Echomatica::cBinop_zqe8z0or_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 40.0f, 0, m, &cBinop_6dPmPhaY_sendMessage);
}

void Heavy_Echomatica::cMsg_LapakrNc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_apbTTPZW, 0, m, &hTable_apbTTPZW_sendMessage);
}

void Heavy_Echomatica::cCast_5ZouhktU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_LHOkFhrM, 0, m, &cDelay_LHOkFhrM_sendMessage);
}

void Heavy_Echomatica::cMsg_0PfmUYAA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_nx7Wysuh, 2, m, &cDelay_nx7Wysuh_sendMessage);
}

void Heavy_Echomatica::cMsg_hi1dwmlw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_Lapkd5Oa, 1, m, NULL);
}

void Heavy_Echomatica::cVar_tCaaMBe1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_rYHrArRV, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_kMfi16qf, m);
}

void Heavy_Echomatica::cMsg_DoeVqpT6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_mqjFaBQO_sendMessage);
}

void Heavy_Echomatica::cSystem_mqjFaBQO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Qol9urGj_sendMessage);
}

void Heavy_Echomatica::cVar_YfF2qoKQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3UYD5Yru_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_Qd82OfQ9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_GQO212Zg_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_pvHA4OJ0, m);
}

void Heavy_Echomatica::cBinop_Qol9urGj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_vuzk5poa, m);
}

void Heavy_Echomatica::cMsg_3UYD5Yru_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Qd82OfQ9_sendMessage);
}

void Heavy_Echomatica::cBinop_GQO212Zg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_01Zb3FfK, m);
}

void Heavy_Echomatica::cMsg_IQArFCmy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_mbt2NoPr_sendMessage);
}

void Heavy_Echomatica::cSystem_mbt2NoPr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Jwg2LkEn_sendMessage);
}

void Heavy_Echomatica::cVar_bPbE0tyG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_78q7hTFe_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_d3rxJTMh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_3Uor20O9_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_gqIgJBu4, m);
}

void Heavy_Echomatica::cBinop_Jwg2LkEn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_5E6nYVeG, m);
}

void Heavy_Echomatica::cMsg_78q7hTFe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_d3rxJTMh_sendMessage);
}

void Heavy_Echomatica::cBinop_3Uor20O9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_kpDAO8qS, m);
}

void Heavy_Echomatica::cMsg_eQClCTbD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_C1oGTLTy_sendMessage);
}

void Heavy_Echomatica::cSystem_C1oGTLTy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_NmppZKxU_sendMessage);
}

void Heavy_Echomatica::cDelay_uayX8nTj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_uayX8nTj, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_RkCVIXTB, 0, m, &cDelay_RkCVIXTB_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_uayX8nTj, 0, m, &cDelay_uayX8nTj_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_043mx18j, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_RkCVIXTB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_RkCVIXTB, m);
  cMsg_DjNcbA1d_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_gAiAREmM_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_Y1kUUVTE_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_pTOmdhH9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qRpchHAN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_XhJedqsk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zl2EWHR8_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_uayX8nTj, 2, m, &cDelay_uayX8nTj_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CJHopJF5_sendMessage);
}

void Heavy_Echomatica::cMsg_qRpchHAN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_XhJedqsk, 0, m, &hTable_XhJedqsk_sendMessage);
}

void Heavy_Echomatica::cBinop_NmppZKxU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 30.0f, 0, m, &cBinop_pTOmdhH9_sendMessage);
}

void Heavy_Echomatica::cMsg_DjNcbA1d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_XhJedqsk, 0, m, &hTable_XhJedqsk_sendMessage);
}

void Heavy_Echomatica::cCast_CJHopJF5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_uayX8nTj, 0, m, &cDelay_uayX8nTj_sendMessage);
}

void Heavy_Echomatica::cMsg_zl2EWHR8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_RkCVIXTB, 2, m, &cDelay_RkCVIXTB_sendMessage);
}

void Heavy_Echomatica::cMsg_Y1kUUVTE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_043mx18j, 1, m, NULL);
}

void Heavy_Echomatica::cBinop_E3oxLgM4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_V311o1zN_sendMessage);
}

void Heavy_Echomatica::cBinop_V311o1zN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_6frVEkV3_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_9yPbYVMJ_sendMessage);
}

void Heavy_Echomatica::cVar_8eZurph1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_5QUad1Fo_sendMessage);
}

void Heavy_Echomatica::cMsg_w7xrrtKG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_eWlKQ0Ue_sendMessage);
}

void Heavy_Echomatica::cSystem_eWlKQ0Ue_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aCeOlSHg, HV_BINOP_DIVIDE, 1, m, &cBinop_aCeOlSHg_sendMessage);
}

void Heavy_Echomatica::cBinop_6frVEkV3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_wgxFhl1T_sendMessage);
}

void Heavy_Echomatica::cBinop_wgxFhl1T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_iegmmZ1t, m);
}

void Heavy_Echomatica::cMsg_Fiv8Xn7c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_AK7PJqAl_sendMessage);
}

void Heavy_Echomatica::cBinop_AK7PJqAl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_E3oxLgM4_sendMessage);
}

void Heavy_Echomatica::cBinop_9yPbYVMJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Y3WzRmvf, m);
}

void Heavy_Echomatica::cBinop_5QUad1Fo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_iMWAJxgB_sendMessage);
}

void Heavy_Echomatica::cBinop_iMWAJxgB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aCeOlSHg, HV_BINOP_DIVIDE, 0, m, &cBinop_aCeOlSHg_sendMessage);
}

void Heavy_Echomatica::cBinop_aCeOlSHg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Fiv8Xn7c_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_GulmU23L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_AAlJ83iD_sendMessage);
}

void Heavy_Echomatica::cBinop_AAlJ83iD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_SR00REhh_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_eaY7VKCk_sendMessage);
}

void Heavy_Echomatica::cVar_1Kfd1UXC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_KsuhY2KZ_sendMessage);
}

void Heavy_Echomatica::cMsg_Z14T88Iy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_kLzAzQiR_sendMessage);
}

void Heavy_Echomatica::cSystem_kLzAzQiR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kwxyFjNY, HV_BINOP_DIVIDE, 1, m, &cBinop_kwxyFjNY_sendMessage);
}

void Heavy_Echomatica::cBinop_SR00REhh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_H4rTL4f0_sendMessage);
}

void Heavy_Echomatica::cBinop_H4rTL4f0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_iN5OQo6p, m);
}

void Heavy_Echomatica::cMsg_6YyGBXIU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_TVfSIPko_sendMessage);
}

void Heavy_Echomatica::cBinop_TVfSIPko_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_GulmU23L_sendMessage);
}

void Heavy_Echomatica::cBinop_eaY7VKCk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_pPjobTfX, m);
}

void Heavy_Echomatica::cBinop_KsuhY2KZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_kxeGB8yD_sendMessage);
}

void Heavy_Echomatica::cBinop_kxeGB8yD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kwxyFjNY, HV_BINOP_DIVIDE, 0, m, &cBinop_kwxyFjNY_sendMessage);
}

void Heavy_Echomatica::cBinop_kwxyFjNY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6YyGBXIU_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_ElacULhp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_oZcuMssd, 0, m, &cPack_oZcuMssd_sendMessage);
}

void Heavy_Echomatica::cVar_2b68knjh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_P8vCwAbw, 0, m, &cPack_P8vCwAbw_sendMessage);
}

void Heavy_Echomatica::cVar_KOheMq4n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_OdQ90iXg_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cPack_P8vCwAbw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_e7iGbWmD, 0, m, NULL);
}

void Heavy_Echomatica::cPack_oZcuMssd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_aBciIX5T, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_OdQ90iXg_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xkIo5L3D_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7c3AAJwH_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5YXRtk4I_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_xkIo5L3D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OMAbsdkT_sendMessage(_c, 0, m);
  cMsg_RTFzlSo7_sendMessage(_c, 0, m);
  cMsg_4v7OEXyU_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_7c3AAJwH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OMAbsdkT_sendMessage(_c, 0, m);
  cMsg_RTFzlSo7_sendMessage(_c, 0, m);
  cMsg_b1nQQcd8_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_5YXRtk4I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Llpthg7I_sendMessage(_c, 0, m);
  cMsg_tuFpCU46_sendMessage(_c, 0, m);
  cMsg_b1nQQcd8_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_duWNHi8k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_IOiP8bLh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_SDYSKUvk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_N2dDU1sF, HV_BINOP_DIVIDE, 0, m, &cBinop_N2dDU1sF_sendMessage);
}

void Heavy_Echomatica::cVar_usBXk3Me_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SfiRPvMv, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_SfiRPvMv_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_vmdghITg, 0, m, &cIf_vmdghITg_sendMessage);
}

void Heavy_Echomatica::sEnv_dhtryBzQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_iVJjCHTS_sendMessage);
}

void Heavy_Echomatica::cBinop_Kegdrj2x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_9XmPt6wF_sendMessage);
}

void Heavy_Echomatica::cBinop_9XmPt6wF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_i37lGSSU_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5EpUbhkz_sendMessage);
}

void Heavy_Echomatica::cCast_5EpUbhkz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_T0Dkwyhr_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_i37lGSSU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Yq6kMTgw, HV_BINOP_POW, 1, m, &cBinop_Yq6kMTgw_sendMessage);
}

void Heavy_Echomatica::cMsg_T0Dkwyhr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Yq6kMTgw, HV_BINOP_POW, 0, m, &cBinop_Yq6kMTgw_sendMessage);
}

void Heavy_Echomatica::cBinop_Yq6kMTgw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_9UZRVtyo_sendMessage);
}

void Heavy_Echomatica::cIf_vmdghITg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_Kegdrj2x, HV_BINOP_SUBTRACT, 0, m, &cBinop_Kegdrj2x_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_xPORRsr7, HV_BINOP_SUBTRACT, 0, m, &cBinop_xPORRsr7_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_SfiRPvMv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_vmdghITg, 1, m, &cIf_vmdghITg_sendMessage);
}

void Heavy_Echomatica::cVar_SNNL0eAy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VdtRAFsD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZraRFbck_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ffCyP7IP_sendMessage);
}

void Heavy_Echomatica::cVar_HueuYc6s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rzSBAA9N_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_l79QXAuT_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_FAplnPS1_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_7gMGLXAS, 0, m, &cSlice_7gMGLXAS_sendMessage);
      break;
    }
    default: {
      cSwitchcase_Xcl59ygj_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_7gMGLXAS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_AOTLL323_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_AOTLL323_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_Z3gsYp4d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_AOTLL323_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_AOTLL323_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_zAlgbc7F_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_Xcl59ygj_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_BppRh8VV, 0, m, &cSlice_BppRh8VV_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_BppRh8VV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_qdhNh3IX_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_qdhNh3IX_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_xFMSL0pI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_qdhNh3IX_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_qdhNh3IX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Lc3HGNlF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_rzSBAA9N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_N2dDU1sF, HV_BINOP_DIVIDE, 1, m, &cBinop_N2dDU1sF_sendMessage);
}

void Heavy_Echomatica::cCast_l79QXAuT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SDYSKUvk, 0, m, &cVar_SDYSKUvk_sendMessage);
}

void Heavy_Echomatica::cBinop_N2dDU1sF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8ZFXwRSh, HV_BINOP_ADD, 0, m, &cBinop_8ZFXwRSh_sendMessage);
}

void Heavy_Echomatica::cBinop_xPORRsr7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SDYSKUvk, 0, m, &cVar_SDYSKUvk_sendMessage);
}

void Heavy_Echomatica::cCast_ffCyP7IP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_usBXk3Me, 0, m, &cVar_usBXk3Me_sendMessage);
}

void Heavy_Echomatica::cCast_VdtRAFsD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FbyoAOSE_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_k4L50eo0_sendMessage);
}

void Heavy_Echomatica::cCast_ZraRFbck_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SfiRPvMv, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_SfiRPvMv_sendMessage);
}

void Heavy_Echomatica::cBinop_8ZFXwRSh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Kegdrj2x, HV_BINOP_SUBTRACT, 0, m, &cBinop_Kegdrj2x_sendMessage);
}

void Heavy_Echomatica::cCast_kWTgH8X1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HueuYc6s, 0, m, &cVar_HueuYc6s_sendMessage);
}

void Heavy_Echomatica::cCast_EvT3DUA2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SNNL0eAy, 0, m, &cVar_SNNL0eAy_sendMessage);
}

void Heavy_Echomatica::cCast_IqTSbzpl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_usBXk3Me, 0, m, &cVar_usBXk3Me_sendMessage);
}

void Heavy_Echomatica::cCast_xdKudCQT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Kegdrj2x, HV_BINOP_SUBTRACT, 1, m, &cBinop_Kegdrj2x_sendMessage);
}

void Heavy_Echomatica::cBinop_9UZRVtyo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_MU4X17d9_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_FbyoAOSE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8ZFXwRSh, HV_BINOP_ADD, 1, m, &cBinop_8ZFXwRSh_sendMessage);
}

void Heavy_Echomatica::cCast_k4L50eo0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xPORRsr7, HV_BINOP_SUBTRACT, 1, m, &cBinop_xPORRsr7_sendMessage);
}

void Heavy_Echomatica::cBinop_iVJjCHTS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xdKudCQT_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_IqTSbzpl_sendMessage);
}

void Heavy_Echomatica::cMsg_MU4X17d9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_1nzWzdY4, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_OMAbsdkT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_2b68knjh, 0, m, &cVar_2b68knjh_sendMessage);
}

void Heavy_Echomatica::cMsg_RTFzlSo7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_ElacULhp, 0, m, &cVar_ElacULhp_sendMessage);
}

void Heavy_Echomatica::cMsg_Llpthg7I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_2b68knjh, 0, m, &cVar_2b68knjh_sendMessage);
}

void Heavy_Echomatica::cMsg_tuFpCU46_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_ElacULhp, 0, m, &cVar_ElacULhp_sendMessage);
}

void Heavy_Echomatica::cSend_IOiP8bLh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_DWG1moIs_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_4v7OEXyU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_duWNHi8k, 0, m, &cVar_duWNHi8k_sendMessage);
}

void Heavy_Echomatica::cMsg_b1nQQcd8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_duWNHi8k, 0, m, &cVar_duWNHi8k_sendMessage);
}

void Heavy_Echomatica::cVar_sPYYuxYy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1baymfZU, HV_BINOP_MULTIPLY, 0, m, &cBinop_1baymfZU_sendMessage);
}

void Heavy_Echomatica::cMsg_jYhGrZfn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_6rlUGK7d_sendMessage);
}

void Heavy_Echomatica::cSystem_6rlUGK7d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_v4c8XupQ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_1baymfZU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_GOZ0Mh62_sendMessage);
}

void Heavy_Echomatica::cBinop_AT7czFvN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1baymfZU, HV_BINOP_MULTIPLY, 1, m, &cBinop_1baymfZU_sendMessage);
}

void Heavy_Echomatica::cMsg_v4c8XupQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_AT7czFvN_sendMessage);
}

void Heavy_Echomatica::cBinop_GOZ0Mh62_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_BHCruEAY_sendMessage);
}

void Heavy_Echomatica::cBinop_BHCruEAY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_qeb8Icpx_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Tho98HOV, m);
}

void Heavy_Echomatica::cBinop_qeb8Icpx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_HATWDr17, m);
}

void Heavy_Echomatica::cBinop_lSsdfvts_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_DW4hqBF6_sendMessage);
}

void Heavy_Echomatica::cBinop_DW4hqBF6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_AxPgknEi_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_NFxDBjCv_sendMessage);
}

void Heavy_Echomatica::cVar_5YmfgbLR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_MONplLI5_sendMessage);
}

void Heavy_Echomatica::cMsg_GtWMnI0J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_hQWVlZiL_sendMessage);
}

void Heavy_Echomatica::cSystem_hQWVlZiL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CkhdF30C, HV_BINOP_DIVIDE, 1, m, &cBinop_CkhdF30C_sendMessage);
}

void Heavy_Echomatica::cBinop_AxPgknEi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_evhuDTJn_sendMessage);
}

void Heavy_Echomatica::cBinop_evhuDTJn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_mFguFwa2, m);
}

void Heavy_Echomatica::cMsg_HTPxBoSN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_BoDYU6Aq_sendMessage);
}

void Heavy_Echomatica::cBinop_BoDYU6Aq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_lSsdfvts_sendMessage);
}

void Heavy_Echomatica::cBinop_NFxDBjCv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_2MMA9bpj, m);
}

void Heavy_Echomatica::cBinop_MONplLI5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_2n7SA3aJ_sendMessage);
}

void Heavy_Echomatica::cBinop_2n7SA3aJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CkhdF30C, HV_BINOP_DIVIDE, 0, m, &cBinop_CkhdF30C_sendMessage);
}

void Heavy_Echomatica::cBinop_CkhdF30C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HTPxBoSN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_iHYS5uD3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_nLhzBAkZ_sendMessage);
}

void Heavy_Echomatica::cBinop_nLhzBAkZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_D7Xdy1X1_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_z1Rq4o2e_sendMessage);
}

void Heavy_Echomatica::cVar_ViPnacYz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_UeiIYvo9_sendMessage);
}

void Heavy_Echomatica::cMsg_omOs8HXB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Nb10L0P8_sendMessage);
}

void Heavy_Echomatica::cSystem_Nb10L0P8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_p6IXBgNi, HV_BINOP_DIVIDE, 1, m, &cBinop_p6IXBgNi_sendMessage);
}

void Heavy_Echomatica::cBinop_D7Xdy1X1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_OcJ8wefx_sendMessage);
}

void Heavy_Echomatica::cBinop_OcJ8wefx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_xDbMTbgU, m);
}

void Heavy_Echomatica::cMsg_hCgoqxsj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_jFuXyZlR_sendMessage);
}

void Heavy_Echomatica::cBinop_jFuXyZlR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_iHYS5uD3_sendMessage);
}

void Heavy_Echomatica::cBinop_z1Rq4o2e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_MVLxs5SP, m);
}

void Heavy_Echomatica::cBinop_UeiIYvo9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_2MhhOxWm_sendMessage);
}

void Heavy_Echomatica::cBinop_2MhhOxWm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_p6IXBgNi, HV_BINOP_DIVIDE, 0, m, &cBinop_p6IXBgNi_sendMessage);
}

void Heavy_Echomatica::cBinop_p6IXBgNi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hCgoqxsj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cIf_bUdgkz5A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_xeGR77cH, 0, m, &cVar_xeGR77cH_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_xeGR77cH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tne0ImVF, HV_BINOP_MULTIPLY, 0, m, &cBinop_tne0ImVF_sendMessage);
}

void Heavy_Echomatica::cVar_73sGSSy8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_bUdgkz5A, 0, m, &cIf_bUdgkz5A_sendMessage);
}

void Heavy_Echomatica::cPack_H5Vtc6u8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_goNmScPh_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_MFVy8gmJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_jWVHsj4D_sendMessage);
}

void Heavy_Echomatica::cSystem_jWVHsj4D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Se9ithdL, HV_BINOP_MULTIPLY, 1, m, &cBinop_Se9ithdL_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_eUmLfRwb, HV_BINOP_MULTIPLY, 1, m, &cBinop_eUmLfRwb_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_S9RZ2bsg_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cMsg_ONBsNyXS_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_ONBsNyXS_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Qd6H0MIn_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cDelay_YCjucQzM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_YCjucQzM, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_YCjucQzM, 0, m, &cDelay_YCjucQzM_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_SnHo89xo, 0, m, &cVar_SnHo89xo_sendMessage);
}

void Heavy_Echomatica::cCast_Qd6H0MIn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ONBsNyXS_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_YCjucQzM, 0, m, &cDelay_YCjucQzM_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_SnHo89xo, 0, m, &cVar_SnHo89xo_sendMessage);
}

void Heavy_Echomatica::cMsg_maCORPgE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_he0VSDwS_sendMessage);
}

void Heavy_Echomatica::cSystem_he0VSDwS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_q7kHxU7E_sendMessage);
}

void Heavy_Echomatica::cVar_pXJw5Wc4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GMkAoCnm, HV_BINOP_MULTIPLY, 0, m, &cBinop_GMkAoCnm_sendMessage);
}

void Heavy_Echomatica::cMsg_ONBsNyXS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_YCjucQzM, 0, m, &cDelay_YCjucQzM_sendMessage);
}

void Heavy_Echomatica::cBinop_vccM0i4u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_YCjucQzM, 2, m, &cDelay_YCjucQzM_sendMessage);
}

void Heavy_Echomatica::cBinop_q7kHxU7E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GMkAoCnm, HV_BINOP_MULTIPLY, 1, m, &cBinop_GMkAoCnm_sendMessage);
}

void Heavy_Echomatica::cBinop_GMkAoCnm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_vccM0i4u_sendMessage);
}

void Heavy_Echomatica::cVar_SnHo89xo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TSeUG8pq, HV_BINOP_SUBTRACT, 0, m, &cBinop_TSeUG8pq_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_Pf823c3R_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_1eM7oAjB_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0dSyKVnG_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8UjtOsOQ_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_0dSyKVnG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YsdZFWvD, 0, m, &cVar_YsdZFWvD_sendMessage);
}

void Heavy_Echomatica::cCast_8UjtOsOQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pcyQ1KGT_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8hDHgh3R_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_goNmScPh_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_XyePs8Ou, 0, m, &cSlice_XyePs8Ou_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ummact4x, 0, m, &cSlice_ummact4x_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hg0lsO5z_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_qPAcEDrH, 0, m, &cSlice_qPAcEDrH_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_IpOw6uWI, 0, m, &cSlice_IpOw6uWI_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_o57ySbbH_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YH6VV1CX_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_XyePs8Ou_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_C2yKjER9_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_C2yKjER9_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_ummact4x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dhkGm521_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2UrCB7Jz_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dhkGm521_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2UrCB7Jz_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_TFonpskz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zrAf6WfM_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Sx8XyU6N_sendMessage);
}

void Heavy_Echomatica::cVar_h1KccUji_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_18nQ7ZVB_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_18nQ7ZVB_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UyteWw0x_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_Se9ithdL, HV_BINOP_MULTIPLY, 0, m, &cBinop_Se9ithdL_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_GDC4kzEm, HV_BINOP_DIVIDE, 1, m, &cBinop_GDC4kzEm_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_pXJw5Wc4, 0, m, &cVar_pXJw5Wc4_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_UyteWw0x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ba0r2fqZ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_F9m4NX5Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ala19Vw0, HV_BINOP_SUBTRACT, 1, m, &cBinop_ala19Vw0_sendMessage);
}

void Heavy_Echomatica::cVar_5SWepp8O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YsdZFWvD, 0, m, &cVar_YsdZFWvD_sendMessage);
}

void Heavy_Echomatica::cVar_YsdZFWvD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cIQnQCh6, HV_BINOP_ADD, 0, m, &cBinop_cIQnQCh6_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_zmKjosQ6, HV_BINOP_ADD, 0, m, &cBinop_zmKjosQ6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WRuI3UvA_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kkclRFKn_sendMessage);
}

void Heavy_Echomatica::cSlice_qPAcEDrH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zrAf6WfM_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Sx8XyU6N_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_IpOw6uWI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_8RqVXEJQ_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_HFdqt9Dr_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_g7Ovt6Tq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SnHo89xo, 1, m, &cVar_SnHo89xo_sendMessage);
}

void Heavy_Echomatica::cBinop_eUmLfRwb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_g7Ovt6Tq_sendMessage);
}

void Heavy_Echomatica::cBinop_Se9ithdL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_fsxSWlR4_sendMessage);
}

void Heavy_Echomatica::cBinop_fsxSWlR4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TSeUG8pq, HV_BINOP_SUBTRACT, 1, m, &cBinop_TSeUG8pq_sendMessage);
}

void Heavy_Echomatica::cBinop_TSeUG8pq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SnHo89xo, 1, m, &cVar_SnHo89xo_sendMessage);
}

void Heavy_Echomatica::cMsg_g8lXhznT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_S9RZ2bsg_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_p4YGUS1K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_S9RZ2bsg_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_zmKjosQ6, HV_BINOP_ADD, 1, m, &cBinop_zmKjosQ6_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_cIQnQCh6, HV_BINOP_ADD, 1, m, &cBinop_cIQnQCh6_sendMessage);
}

void Heavy_Echomatica::cBinop_Pf823c3R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_1eM7oAjB_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_cIQnQCh6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YsdZFWvD, 1, m, &cVar_YsdZFWvD_sendMessage);
}

void Heavy_Echomatica::cBinop_GDC4kzEm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VayszkYN, HV_BINOP_DIVIDE, 1, m, &cBinop_VayszkYN_sendMessage);
}

void Heavy_Echomatica::cBinop_VayszkYN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zmKjosQ6, HV_BINOP_ADD, 1, m, &cBinop_zmKjosQ6_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_cIQnQCh6, HV_BINOP_ADD, 1, m, &cBinop_cIQnQCh6_sendMessage);
}

void Heavy_Echomatica::cCast_Sx8XyU6N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GDC4kzEm, HV_BINOP_DIVIDE, 0, m, &cBinop_GDC4kzEm_sendMessage);
}

void Heavy_Echomatica::cCast_zrAf6WfM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eUmLfRwb, HV_BINOP_MULTIPLY, 0, m, &cBinop_eUmLfRwb_sendMessage);
}

void Heavy_Echomatica::cCast_8RqVXEJQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5SWepp8O, 1, m, &cVar_5SWepp8O_sendMessage);
}

void Heavy_Echomatica::cCast_HFdqt9Dr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ala19Vw0, HV_BINOP_SUBTRACT, 0, m, &cBinop_ala19Vw0_sendMessage);
}

void Heavy_Echomatica::cCast_pcyQ1KGT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_p4YGUS1K_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_8hDHgh3R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5SWepp8O, 0, m, &cVar_5SWepp8O_sendMessage);
}

void Heavy_Echomatica::cBinop_zmKjosQ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_F9m4NX5Q, 0, m, &cVar_F9m4NX5Q_sendMessage);
}

void Heavy_Echomatica::cMsg_C2yKjER9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_S9RZ2bsg_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_X5g8a8r9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_TFonpskz, 1, m, &cVar_TFonpskz_sendMessage);
}

void Heavy_Echomatica::cMsg_ba0r2fqZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Se9ithdL, HV_BINOP_MULTIPLY, 0, m, &cBinop_Se9ithdL_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_GDC4kzEm, HV_BINOP_DIVIDE, 1, m, &cBinop_GDC4kzEm_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_pXJw5Wc4, 0, m, &cVar_pXJw5Wc4_sendMessage);
}

void Heavy_Echomatica::cCast_2UrCB7Jz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ccuRCUnR_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_zmKjosQ6, HV_BINOP_ADD, 0, m, &cBinop_zmKjosQ6_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_YsdZFWvD, 1, m, &cVar_YsdZFWvD_sendMessage);
}

void Heavy_Echomatica::cCast_dhkGm521_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_C2yKjER9_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_ala19Vw0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VayszkYN, HV_BINOP_DIVIDE, 0, m, &cBinop_VayszkYN_sendMessage);
}

void Heavy_Echomatica::cCast_ccuRCUnR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_p4YGUS1K_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_hg0lsO5z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TFonpskz, 0, m, &cVar_TFonpskz_sendMessage);
}

void Heavy_Echomatica::cCast_YH6VV1CX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_X5g8a8r9_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_o57ySbbH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_g8lXhznT_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_RM1fOTSi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ROnFGSwN, HV_BINOP_MULTIPLY, 0, m, &cBinop_ROnFGSwN_sendMessage);
}

void Heavy_Echomatica::cVar_J4x6l1dv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4M2y18db, HV_BINOP_MULTIPLY, 0, m, &cBinop_4M2y18db_sendMessage);
}

void Heavy_Echomatica::cVar_vqZ16piH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0dQdAdKI, HV_BINOP_MULTIPLY, 0, m, &cBinop_0dQdAdKI_sendMessage);
}

void Heavy_Echomatica::cVar_3EiwtQNF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ic1u3Qv8, HV_BINOP_MULTIPLY, 0, m, &cBinop_Ic1u3Qv8_sendMessage);
}

void Heavy_Echomatica::cVar_WiHVKswG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DAgoUxaN, HV_BINOP_MULTIPLY, 0, m, &cBinop_DAgoUxaN_sendMessage);
}

void Heavy_Echomatica::cVar_OmpVZAiN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mzUWWQ55, HV_BINOP_MULTIPLY, 0, m, &cBinop_mzUWWQ55_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_zDiqgm0Q_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mgnmCGHU_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_C9vH9UrI_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_mgnmCGHU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_G2DXwQGF_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4HWgG5Cb_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Xy7jtyi5_sendMessage);
}

void Heavy_Echomatica::cCast_C9vH9UrI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XSUFUOyj_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EOp3IyQh_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1lDk0ZFv_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JXdIWcKd_sendMessage);
}

void Heavy_Echomatica::cBinop_UCCODgJS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_xfK3xHQi_sendMessage);
}

void Heavy_Echomatica::cBinop_xfK3xHQi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_HBdTfzSk_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_m6g9VT1i_sendMessage);
}

void Heavy_Echomatica::cVar_pZnqA34i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_UIE7cS1m_sendMessage);
}

void Heavy_Echomatica::cMsg_vqEzQkx5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_CadctYcs_sendMessage);
}

void Heavy_Echomatica::cSystem_CadctYcs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0K0DFgGo, HV_BINOP_DIVIDE, 1, m, &cBinop_0K0DFgGo_sendMessage);
}

void Heavy_Echomatica::cBinop_HBdTfzSk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_X4hzIykB_sendMessage);
}

void Heavy_Echomatica::cBinop_X4hzIykB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Ek2CJCcl, m);
}

void Heavy_Echomatica::cMsg_JJA2g5k6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_vBpE01Lk_sendMessage);
}

void Heavy_Echomatica::cBinop_vBpE01Lk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_UCCODgJS_sendMessage);
}

void Heavy_Echomatica::cBinop_m6g9VT1i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_dRLXCpJO, m);
}

void Heavy_Echomatica::cBinop_UIE7cS1m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_bxeejDAw_sendMessage);
}

void Heavy_Echomatica::cBinop_bxeejDAw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0K0DFgGo, HV_BINOP_DIVIDE, 0, m, &cBinop_0K0DFgGo_sendMessage);
}

void Heavy_Echomatica::cBinop_0K0DFgGo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JJA2g5k6_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_3o3QPZc3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_H7Mf4gPi, HV_BINOP_DIVIDE, 0, m, &cBinop_H7Mf4gPi_sendMessage);
}

void Heavy_Echomatica::cVar_sOTGhXD4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_C4CfSQMV, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_C4CfSQMV_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_XI8PV4BP, 0, m, &cIf_XI8PV4BP_sendMessage);
}

void Heavy_Echomatica::sEnv_nWj3FZ1B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_ItJEmmO8_sendMessage);
}

void Heavy_Echomatica::cBinop_Jxvo3aC2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_ogD4ImC9_sendMessage);
}

void Heavy_Echomatica::cBinop_ogD4ImC9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_m3OVleUw_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MPSkyJxK_sendMessage);
}

void Heavy_Echomatica::cCast_MPSkyJxK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KMQrDJBq_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_m3OVleUw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yX19gRKQ, HV_BINOP_POW, 1, m, &cBinop_yX19gRKQ_sendMessage);
}

void Heavy_Echomatica::cMsg_KMQrDJBq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_yX19gRKQ, HV_BINOP_POW, 0, m, &cBinop_yX19gRKQ_sendMessage);
}

void Heavy_Echomatica::cBinop_yX19gRKQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_AKj6XPTK_sendMessage);
}

void Heavy_Echomatica::cIf_XI8PV4BP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_Jxvo3aC2, HV_BINOP_SUBTRACT, 0, m, &cBinop_Jxvo3aC2_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_GXGw3grf, HV_BINOP_SUBTRACT, 0, m, &cBinop_GXGw3grf_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_C4CfSQMV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_XI8PV4BP, 1, m, &cIf_XI8PV4BP_sendMessage);
}

void Heavy_Echomatica::cVar_T8onFYGY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qEE2WRKU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_liZ216ZD_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4xxMHaKa_sendMessage);
}

void Heavy_Echomatica::cVar_Gt7OFusf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_UnN5yGgn_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_F01xIpPU_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_ArsOZYx5_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_BVUv4jfx, 0, m, &cSlice_BVUv4jfx_sendMessage);
      break;
    }
    default: {
      cSwitchcase_FAhe4P52_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_BVUv4jfx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_kOn849BS_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_kOn849BS_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_VYfvgVJF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_kOn849BS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_kOn849BS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_d7R6KhK1_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_FAhe4P52_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_JO0Qlry4, 0, m, &cSlice_JO0Qlry4_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_JO0Qlry4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_A6Pdt1An_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_A6Pdt1An_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_giUCKMNA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_A6Pdt1An_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_A6Pdt1An_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_wntTLggL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_F01xIpPU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3o3QPZc3, 0, m, &cVar_3o3QPZc3_sendMessage);
}

void Heavy_Echomatica::cCast_UnN5yGgn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_H7Mf4gPi, HV_BINOP_DIVIDE, 1, m, &cBinop_H7Mf4gPi_sendMessage);
}

void Heavy_Echomatica::cBinop_H7Mf4gPi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JJQU7Riu, HV_BINOP_ADD, 0, m, &cBinop_JJQU7Riu_sendMessage);
}

void Heavy_Echomatica::cBinop_GXGw3grf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3o3QPZc3, 0, m, &cVar_3o3QPZc3_sendMessage);
}

void Heavy_Echomatica::cCast_liZ216ZD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_C4CfSQMV, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_C4CfSQMV_sendMessage);
}

void Heavy_Echomatica::cCast_qEE2WRKU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_aihDnhNi_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_A2BtM8DM_sendMessage);
}

void Heavy_Echomatica::cCast_4xxMHaKa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_sOTGhXD4, 0, m, &cVar_sOTGhXD4_sendMessage);
}

void Heavy_Echomatica::cBinop_JJQU7Riu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Jxvo3aC2, HV_BINOP_SUBTRACT, 0, m, &cBinop_Jxvo3aC2_sendMessage);
}

void Heavy_Echomatica::cCast_YoOjAYAe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_T8onFYGY, 0, m, &cVar_T8onFYGY_sendMessage);
}

void Heavy_Echomatica::cCast_LTF4hngn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Gt7OFusf, 0, m, &cVar_Gt7OFusf_sendMessage);
}

void Heavy_Echomatica::cCast_t0CCnxPV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Jxvo3aC2, HV_BINOP_SUBTRACT, 1, m, &cBinop_Jxvo3aC2_sendMessage);
}

void Heavy_Echomatica::cCast_1gql8Khz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_sOTGhXD4, 0, m, &cVar_sOTGhXD4_sendMessage);
}

void Heavy_Echomatica::cBinop_AKj6XPTK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2UXRVr6L_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_aihDnhNi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JJQU7Riu, HV_BINOP_ADD, 1, m, &cBinop_JJQU7Riu_sendMessage);
}

void Heavy_Echomatica::cCast_A2BtM8DM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GXGw3grf, HV_BINOP_SUBTRACT, 1, m, &cBinop_GXGw3grf_sendMessage);
}

void Heavy_Echomatica::cBinop_ItJEmmO8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_t0CCnxPV_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1gql8Khz_sendMessage);
}

void Heavy_Echomatica::cMsg_2UXRVr6L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_XZ8SjpNI, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_tKPLwmJs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_7qm85jtJ_sendMessage);
}

void Heavy_Echomatica::cBinop_7qm85jtJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_WaTERmTT_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_dUyM4RH7_sendMessage);
}

void Heavy_Echomatica::cVar_f7XnlrCi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_eV1y3NQe_sendMessage);
}

void Heavy_Echomatica::cMsg_jTCbf7CR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_MGZvu2vq_sendMessage);
}

void Heavy_Echomatica::cSystem_MGZvu2vq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SQvX53o5, HV_BINOP_DIVIDE, 1, m, &cBinop_SQvX53o5_sendMessage);
}

void Heavy_Echomatica::cBinop_WaTERmTT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_DuqjHvxN_sendMessage);
}

void Heavy_Echomatica::cBinop_DuqjHvxN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_kZLet5zG, m);
}

void Heavy_Echomatica::cMsg_EWvEuQuy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_jj2zrwM8_sendMessage);
}

void Heavy_Echomatica::cBinop_jj2zrwM8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_tKPLwmJs_sendMessage);
}

void Heavy_Echomatica::cBinop_dUyM4RH7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_x1l23zCT, m);
}

void Heavy_Echomatica::cBinop_eV1y3NQe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_Qi7uT9e4_sendMessage);
}

void Heavy_Echomatica::cBinop_Qi7uT9e4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SQvX53o5, HV_BINOP_DIVIDE, 0, m, &cBinop_SQvX53o5_sendMessage);
}

void Heavy_Echomatica::cBinop_SQvX53o5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EWvEuQuy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_4RW0tsFG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PlhJHff3, HV_BINOP_DIVIDE, 0, m, &cBinop_PlhJHff3_sendMessage);
}

void Heavy_Echomatica::cVar_gVvo9nZG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uzCo8ki9, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_uzCo8ki9_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_MRvtQdze, 0, m, &cIf_MRvtQdze_sendMessage);
}

void Heavy_Echomatica::sEnv_dh0r6Ivy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_J48JvFN5_sendMessage);
}

void Heavy_Echomatica::cBinop_lLolLFc5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_QCdKO19q_sendMessage);
}

void Heavy_Echomatica::cBinop_QCdKO19q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_crwU7SUQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vkTe5DKj_sendMessage);
}

void Heavy_Echomatica::cCast_crwU7SUQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QzMifOA7, HV_BINOP_POW, 1, m, &cBinop_QzMifOA7_sendMessage);
}

void Heavy_Echomatica::cCast_vkTe5DKj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_s7BvzFEL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_s7BvzFEL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_QzMifOA7, HV_BINOP_POW, 0, m, &cBinop_QzMifOA7_sendMessage);
}

void Heavy_Echomatica::cBinop_QzMifOA7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_b5GxclfO_sendMessage);
}

void Heavy_Echomatica::cIf_MRvtQdze_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_lLolLFc5, HV_BINOP_SUBTRACT, 0, m, &cBinop_lLolLFc5_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_RJ1EOJok, HV_BINOP_SUBTRACT, 0, m, &cBinop_RJ1EOJok_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_uzCo8ki9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_MRvtQdze, 1, m, &cIf_MRvtQdze_sendMessage);
}

void Heavy_Echomatica::cVar_idLxxWsG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_91IGDxWO_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sTNgAeRg_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_m9HhN6tc_sendMessage);
}

void Heavy_Echomatica::cVar_xW1VSjA2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xBnK1FAX_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kuSoBN62_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_tgFcE9fl_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_jRvU6H6R, 0, m, &cSlice_jRvU6H6R_sendMessage);
      break;
    }
    default: {
      cSwitchcase_13gn41HM_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_jRvU6H6R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_reHdUx54_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_reHdUx54_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_sbvawwHt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_reHdUx54_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_reHdUx54_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_qqeOEPsK_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_13gn41HM_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Gx0yQoYW, 0, m, &cSlice_Gx0yQoYW_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_Gx0yQoYW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_e4gWzAx7_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_e4gWzAx7_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_JBBp28MY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_e4gWzAx7_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_e4gWzAx7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Hgt2KqlT_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_kuSoBN62_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4RW0tsFG, 0, m, &cVar_4RW0tsFG_sendMessage);
}

void Heavy_Echomatica::cCast_xBnK1FAX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PlhJHff3, HV_BINOP_DIVIDE, 1, m, &cBinop_PlhJHff3_sendMessage);
}

void Heavy_Echomatica::cBinop_PlhJHff3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kDEDASmD, HV_BINOP_ADD, 0, m, &cBinop_kDEDASmD_sendMessage);
}

void Heavy_Echomatica::cBinop_RJ1EOJok_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4RW0tsFG, 0, m, &cVar_4RW0tsFG_sendMessage);
}

void Heavy_Echomatica::cCast_sTNgAeRg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uzCo8ki9, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_uzCo8ki9_sendMessage);
}

void Heavy_Echomatica::cCast_91IGDxWO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gWGRwPwk_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gc8r9z0O_sendMessage);
}

void Heavy_Echomatica::cCast_m9HhN6tc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_gVvo9nZG, 0, m, &cVar_gVvo9nZG_sendMessage);
}

void Heavy_Echomatica::cBinop_kDEDASmD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lLolLFc5, HV_BINOP_SUBTRACT, 0, m, &cBinop_lLolLFc5_sendMessage);
}

void Heavy_Echomatica::cCast_1YcpnY0l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_idLxxWsG, 0, m, &cVar_idLxxWsG_sendMessage);
}

void Heavy_Echomatica::cCast_gjkxQCAC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xW1VSjA2, 0, m, &cVar_xW1VSjA2_sendMessage);
}

void Heavy_Echomatica::cCast_Qknx40z0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_gVvo9nZG, 0, m, &cVar_gVvo9nZG_sendMessage);
}

void Heavy_Echomatica::cCast_yGVn8Vuf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lLolLFc5, HV_BINOP_SUBTRACT, 1, m, &cBinop_lLolLFc5_sendMessage);
}

void Heavy_Echomatica::cBinop_b5GxclfO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cVSvIrv4_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_gWGRwPwk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kDEDASmD, HV_BINOP_ADD, 1, m, &cBinop_kDEDASmD_sendMessage);
}

void Heavy_Echomatica::cCast_gc8r9z0O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RJ1EOJok, HV_BINOP_SUBTRACT, 1, m, &cBinop_RJ1EOJok_sendMessage);
}

void Heavy_Echomatica::cBinop_J48JvFN5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yGVn8Vuf_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Qknx40z0_sendMessage);
}

void Heavy_Echomatica::cMsg_cVSvIrv4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_FiEMq0GX, 0, m, NULL);
}

void Heavy_Echomatica::cVar_f9JSBrFZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Y1dpaMbZ, HV_BINOP_MULTIPLY, 0, m, &cBinop_Y1dpaMbZ_sendMessage);
}

void Heavy_Echomatica::cMsg_seeTDJWN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_mQFFcW1L_sendMessage);
}

void Heavy_Echomatica::cSystem_mQFFcW1L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OvFG6T7x_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_Y1dpaMbZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_XoYf09WK_sendMessage);
}

void Heavy_Echomatica::cBinop_4YkGKwB5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Y1dpaMbZ, HV_BINOP_MULTIPLY, 1, m, &cBinop_Y1dpaMbZ_sendMessage);
}

void Heavy_Echomatica::cMsg_OvFG6T7x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_4YkGKwB5_sendMessage);
}

void Heavy_Echomatica::cBinop_XoYf09WK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_R7qrjQK8_sendMessage);
}

void Heavy_Echomatica::cBinop_R7qrjQK8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_LCgR8pTR_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_AGA612t8, m);
}

void Heavy_Echomatica::cBinop_LCgR8pTR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_okhm4Urt, m);
}

void Heavy_Echomatica::cVar_YEDao0nn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Nvr1mXb7, HV_BINOP_MULTIPLY, 0, m, &cBinop_Nvr1mXb7_sendMessage);
}

void Heavy_Echomatica::cMsg_iTwH02mO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ZvzEpU8S_sendMessage);
}

void Heavy_Echomatica::cSystem_ZvzEpU8S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LCR2d3oK_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_Nvr1mXb7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_MSfOVqe9_sendMessage);
}

void Heavy_Echomatica::cBinop_94PikmPJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Nvr1mXb7, HV_BINOP_MULTIPLY, 1, m, &cBinop_Nvr1mXb7_sendMessage);
}

void Heavy_Echomatica::cMsg_LCR2d3oK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_94PikmPJ_sendMessage);
}

void Heavy_Echomatica::cBinop_MSfOVqe9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_BhG5nnon_sendMessage);
}

void Heavy_Echomatica::cBinop_BhG5nnon_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_AHvrphsU_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_rmG3Zf65, m);
}

void Heavy_Echomatica::cBinop_AHvrphsU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_FwsMggs2, m);
}

void Heavy_Echomatica::cBinop_3iAgrJvR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_LtNBspzQ_sendMessage);
}

void Heavy_Echomatica::cBinop_LtNBspzQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_RRAgqiZF_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_4V6XD3lq_sendMessage);
}

void Heavy_Echomatica::cVar_mM9RKXDP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_vVC4U2W7_sendMessage);
}

void Heavy_Echomatica::cMsg_7SHjVYf2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_MSGJsbH5_sendMessage);
}

void Heavy_Echomatica::cSystem_MSGJsbH5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_isCZwe0P, HV_BINOP_DIVIDE, 1, m, &cBinop_isCZwe0P_sendMessage);
}

void Heavy_Echomatica::cBinop_RRAgqiZF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_zTvhrnIY_sendMessage);
}

void Heavy_Echomatica::cBinop_zTvhrnIY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_LzJCOt9w, m);
}

void Heavy_Echomatica::cMsg_1kb9nWe4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Yw5lnKzN_sendMessage);
}

void Heavy_Echomatica::cBinop_Yw5lnKzN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_3iAgrJvR_sendMessage);
}

void Heavy_Echomatica::cBinop_4V6XD3lq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Cm1OIQvy, m);
}

void Heavy_Echomatica::cBinop_vVC4U2W7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_5N7dW4z6_sendMessage);
}

void Heavy_Echomatica::cBinop_5N7dW4z6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_isCZwe0P, HV_BINOP_DIVIDE, 0, m, &cBinop_isCZwe0P_sendMessage);
}

void Heavy_Echomatica::cBinop_isCZwe0P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1kb9nWe4_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_Lect0i6g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_gS1lweoA_sendMessage);
}

void Heavy_Echomatica::cBinop_gS1lweoA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_tFI45TG7_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_db94SMC3_sendMessage);
}

void Heavy_Echomatica::cVar_hGPPvKsP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_atEFuQHt_sendMessage);
}

void Heavy_Echomatica::cMsg_4ZShe2Y9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_1i9tDwH8_sendMessage);
}

void Heavy_Echomatica::cSystem_1i9tDwH8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ByF4CeX1, HV_BINOP_DIVIDE, 1, m, &cBinop_ByF4CeX1_sendMessage);
}

void Heavy_Echomatica::cBinop_tFI45TG7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_pEO4E9oM_sendMessage);
}

void Heavy_Echomatica::cBinop_pEO4E9oM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_EYMnqdDh, m);
}

void Heavy_Echomatica::cMsg_664NZ4SH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_ahTCbC7s_sendMessage);
}

void Heavy_Echomatica::cBinop_ahTCbC7s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_Lect0i6g_sendMessage);
}

void Heavy_Echomatica::cBinop_db94SMC3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_M5bKIu6F, m);
}

void Heavy_Echomatica::cBinop_atEFuQHt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_rIPVMYMW_sendMessage);
}

void Heavy_Echomatica::cBinop_rIPVMYMW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ByF4CeX1, HV_BINOP_DIVIDE, 0, m, &cBinop_ByF4CeX1_sendMessage);
}

void Heavy_Echomatica::cBinop_ByF4CeX1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_664NZ4SH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_0W1wp0SY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_SkZSNYYM_sendMessage);
}

void Heavy_Echomatica::cSystem_SkZSNYYM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_N5DW1AP0_sendMessage);
}

void Heavy_Echomatica::cDelay_Hxc6jFzM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Hxc6jFzM, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_C0XMG4gA, 0, m, &cDelay_C0XMG4gA_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Hxc6jFzM, 0, m, &cDelay_Hxc6jFzM_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_rYlTTMco, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_C0XMG4gA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_C0XMG4gA, m);
  cMsg_o0lf6rmq_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_0jqrKAzf_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_tDEf961z_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_IuVpSdXl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bpZfWsCX_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_b3JFMxCy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_lddtG5mN_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Hxc6jFzM, 2, m, &cDelay_Hxc6jFzM_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LO80zRFd_sendMessage);
}

void Heavy_Echomatica::cMsg_bpZfWsCX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_b3JFMxCy, 0, m, &hTable_b3JFMxCy_sendMessage);
}

void Heavy_Echomatica::cBinop_N5DW1AP0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_IuVpSdXl_sendMessage);
}

void Heavy_Echomatica::cMsg_o0lf6rmq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_b3JFMxCy, 0, m, &hTable_b3JFMxCy_sendMessage);
}

void Heavy_Echomatica::cCast_LO80zRFd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_Hxc6jFzM, 0, m, &cDelay_Hxc6jFzM_sendMessage);
}

void Heavy_Echomatica::cMsg_lddtG5mN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_C0XMG4gA, 2, m, &cDelay_C0XMG4gA_sendMessage);
}

void Heavy_Echomatica::cMsg_tDEf961z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_rYlTTMco, 1, m, NULL);
}

void Heavy_Echomatica::cVar_hd8MVZGX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_f8yIMDkN, HV_BINOP_MULTIPLY, 0, m, &cBinop_f8yIMDkN_sendMessage);
}

void Heavy_Echomatica::cMsg_jWtp1dN3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_xoKYJU6Q_sendMessage);
}

void Heavy_Echomatica::cSystem_xoKYJU6Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_f1VKUoSK_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_f8yIMDkN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_rlR9bpZf_sendMessage);
}

void Heavy_Echomatica::cBinop_PnQcApfg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_f8yIMDkN, HV_BINOP_MULTIPLY, 1, m, &cBinop_f8yIMDkN_sendMessage);
}

void Heavy_Echomatica::cMsg_f1VKUoSK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_PnQcApfg_sendMessage);
}

void Heavy_Echomatica::cBinop_rlR9bpZf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_4uwGj1AZ_sendMessage);
}

void Heavy_Echomatica::cBinop_4uwGj1AZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_yLSAvCp0_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_sKB1ZL77, m);
}

void Heavy_Echomatica::cBinop_yLSAvCp0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_HliSQb5B, m);
}

void Heavy_Echomatica::cVar_GH6PJkDT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 1.5f, 0, m, &cBinop_l8wlP4Uw_sendMessage);
}

void Heavy_Echomatica::cVar_sAAvSKkP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Ry43KsPz, 0, m, &cPack_Ry43KsPz_sendMessage);
}

void Heavy_Echomatica::cVar_RIfUwf50_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_JjbKfL0k_sendMessage);
  cSwitchcase_zDiqgm0Q_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_JjbKfL0k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RIfUwf50, 1, m, &cVar_RIfUwf50_sendMessage);
}

void Heavy_Echomatica::cUnop_l5GSEBw7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_7A01t8C3_sendMessage);
}

void Heavy_Echomatica::cBinop_25uXdByK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_EXP, m, &cUnop_l5GSEBw7_sendMessage);
}

void Heavy_Echomatica::cBinop_l8wlP4Uw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 87.3365f, 0, m, &cBinop_25uXdByK_sendMessage);
}

void Heavy_Echomatica::cBinop_7A01t8C3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 3.48169f, 0, m, &cBinop_JcnXdQHr_sendMessage);
}

void Heavy_Echomatica::cBinop_JcnXdQHr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_zB1GwfMx, 0, m, &cPack_zB1GwfMx_sendMessage);
}

void Heavy_Echomatica::cVar_xEr6JHTs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_H5Vtc6u8, 0, m, &cPack_H5Vtc6u8_sendMessage);
}

void Heavy_Echomatica::cSend_Pb3o1IRJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_fQqKYvGD_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_zAbJs0PM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_dKSmFBTL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_mbXKB58P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_T7zsn907_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_MqplvJh8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_7QqyxtUh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_immyeqcA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_6Fj0eZtF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_WEoXjUqX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_J226nyMh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_QZVlJRTv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_vkBVDjJp_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_EtNwRFz2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_mHGOnRdA_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_qHEKHxIB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_lh4LO6db_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_x9youFHq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_dQAjrWNw_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_kRuTS2Cx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_aUOgaEzx_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_iWXFhpgf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ikfP9FHo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_lbj6thRM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_llXsTiIa_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_cc0W1V7Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_vS4Gc7cO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_JcH2kTxg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_OFeBFdxb_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_40Es05Ml_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_MfJvSxGS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_ojDAcGqI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_SMC7mGfd_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_es8Tb0Vv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_1wJJ7qcp_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_7vji8T9i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_dxpobZW0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_vMXcbNNX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_qDraa7l0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_uW2pnBgq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_T9XP370s_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_9YBNFqEL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_xtyxLulO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_Je5SNKGn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_fytsAVBS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_O5rx6azx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_u4en3ASz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_CVKsRm83_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_znV2Hg06_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_u4MEl1r8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IcMN7E4X_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_xFKxHwp2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_kYT5etVo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_a0UoWe6b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_mlWXwAcL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_MNeeynDh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.01f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YKCRXnU5, 0, m, &cSlice_YKCRXnU5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NJDyeTBt, 0, m, &cSlice_NJDyeTBt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dvAJjb2o, 0, m, &cSlice_dvAJjb2o_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7h9p8fCu, 0, m, &cSlice_7h9p8fCu_sendMessage);
}

void Heavy_Echomatica::cCast_qrJ8lTB6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_MNeeynDh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_zQUwYXGD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JjjuL926_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_JjjuL926_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.2f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YKCRXnU5, 0, m, &cSlice_YKCRXnU5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NJDyeTBt, 0, m, &cSlice_NJDyeTBt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dvAJjb2o, 0, m, &cSlice_dvAJjb2o_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7h9p8fCu, 0, m, &cSlice_7h9p8fCu_sendMessage);
}

void Heavy_Echomatica::cMsg_HJOCI6nN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_tne0ImVF, HV_BINOP_MULTIPLY, 1, m, &cBinop_tne0ImVF_sendMessage);
}

void Heavy_Echomatica::cBinop_tne0ImVF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_xSP5t8Dp_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_HsXHGdkU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_xeGR77cH, 0, m, &cVar_xeGR77cH_sendMessage);
}

void Heavy_Echomatica::cMsg_LwVBQGi7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_bUdgkz5A, 1, m, &cIf_bUdgkz5A_sendMessage);
}

void Heavy_Echomatica::cMsg_r2dZmIYP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_bUdgkz5A, 1, m, &cIf_bUdgkz5A_sendMessage);
}

void Heavy_Echomatica::cSend_xSP5t8Dp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_xn2iErqJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_ROnFGSwN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_MZVUycww, 0, m, &cPack_MZVUycww_sendMessage);
}

void Heavy_Echomatica::cBinop_4M2y18db_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ArveiZ9D, 0, m, &cPack_ArveiZ9D_sendMessage);
}

void Heavy_Echomatica::cBinop_0dQdAdKI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_jmDo3ca5, 0, m, &cPack_jmDo3ca5_sendMessage);
}

void Heavy_Echomatica::cBinop_Ic1u3Qv8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_EqDtSjck, 0, m, &cPack_EqDtSjck_sendMessage);
}

void Heavy_Echomatica::cBinop_DAgoUxaN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_roOhJNQe, 0, m, &cPack_roOhJNQe_sendMessage);
}

void Heavy_Echomatica::cBinop_mzUWWQ55_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_omHyr0QP, 0, m, &cPack_omHyr0QP_sendMessage);
}

void Heavy_Echomatica::cCast_oriMbapx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ROnFGSwN, HV_BINOP_MULTIPLY, 1, m, &cBinop_ROnFGSwN_sendMessage);
}

void Heavy_Echomatica::cCast_7S45IHnl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RM1fOTSi, 0, m, &cVar_RM1fOTSi_sendMessage);
}

void Heavy_Echomatica::cCast_0YW2I1zq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mzUWWQ55, HV_BINOP_MULTIPLY, 1, m, &cBinop_mzUWWQ55_sendMessage);
}

void Heavy_Echomatica::cCast_QPnR1KR2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OmpVZAiN, 0, m, &cVar_OmpVZAiN_sendMessage);
}

void Heavy_Echomatica::cCast_wEEnlxd8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WiHVKswG, 0, m, &cVar_WiHVKswG_sendMessage);
}

void Heavy_Echomatica::cCast_9woxQ4DF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DAgoUxaN, HV_BINOP_MULTIPLY, 1, m, &cBinop_DAgoUxaN_sendMessage);
}

void Heavy_Echomatica::cCast_7SPzOlnZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3EiwtQNF, 0, m, &cVar_3EiwtQNF_sendMessage);
}

void Heavy_Echomatica::cCast_iIm7fOPI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ic1u3Qv8, HV_BINOP_MULTIPLY, 1, m, &cBinop_Ic1u3Qv8_sendMessage);
}

void Heavy_Echomatica::cCast_MqujXPJy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0dQdAdKI, HV_BINOP_MULTIPLY, 1, m, &cBinop_0dQdAdKI_sendMessage);
}

void Heavy_Echomatica::cCast_tsWNezhv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vqZ16piH, 0, m, &cVar_vqZ16piH_sendMessage);
}

void Heavy_Echomatica::cCast_5flzGRLA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4M2y18db, HV_BINOP_MULTIPLY, 1, m, &cBinop_4M2y18db_sendMessage);
}

void Heavy_Echomatica::cCast_qlj6Ktca_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_J4x6l1dv, 0, m, &cVar_J4x6l1dv_sendMessage);
}

void Heavy_Echomatica::cBinop_W6z5FNph_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NCXEv5lJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_d0kEA1V3_sendMessage);
}

void Heavy_Echomatica::cMsg_cAE55rmG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.5f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_W6z5FNph, HV_BINOP_MULTIPLY, 1, m, &cBinop_W6z5FNph_sendMessage);
}

void Heavy_Echomatica::cCast_WRuI3UvA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cAE55rmG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_kkclRFKn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_W6z5FNph, HV_BINOP_MULTIPLY, 0, m, &cBinop_W6z5FNph_sendMessage);
}

void Heavy_Echomatica::cMsg_w9VbUSk4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_QeYO86yt, HV_BINOP_ADD, 1, m, &cBinop_QeYO86yt_sendMessage);
}

void Heavy_Echomatica::cBinop_QeYO86yt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_73sGSSy8, 0, m, &cVar_73sGSSy8_sendMessage);
}

void Heavy_Echomatica::cCast_d0kEA1V3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QeYO86yt, HV_BINOP_ADD, 0, m, &cBinop_QeYO86yt_sendMessage);
}

void Heavy_Echomatica::cCast_NCXEv5lJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_w9VbUSk4_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_Xy7jtyi5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HsXHGdkU_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_4HWgG5Cb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HJOCI6nN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_G2DXwQGF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_r2dZmIYP_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_1lDk0ZFv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_73sGSSy8, 0, m, &cVar_73sGSSy8_sendMessage);
}

void Heavy_Echomatica::cCast_EOp3IyQh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HJOCI6nN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_XSUFUOyj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LwVBQGi7_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_JXdIWcKd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tne0ImVF, HV_BINOP_MULTIPLY, 0, m, &cBinop_tne0ImVF_sendMessage);
}

void Heavy_Echomatica::cReceive_RXKOZSTg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Z3gsYp4d, 0, m, &cVar_Z3gsYp4d_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_xFMSL0pI, 0, m, &cVar_xFMSL0pI_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_VYfvgVJF, 0, m, &cVar_VYfvgVJF_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_giUCKMNA, 0, m, &cVar_giUCKMNA_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_sbvawwHt, 0, m, &cVar_sbvawwHt_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_JBBp28MY, 0, m, &cVar_JBBp28MY_sendMessage);
  cMsg_NZOYVrxm_sendMessage(_c, 0, m);
  cMsg_eQClCTbD_sendMessage(_c, 0, m);
  cMsg_w7xrrtKG_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_8eZurph1, 0, m, &cVar_8eZurph1_sendMessage);
  cMsg_Z14T88Iy_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_1Kfd1UXC, 0, m, &cVar_1Kfd1UXC_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kWTgH8X1_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EvT3DUA2_sendMessage);
  cMsg_maCORPgE_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_pXJw5Wc4, 0, m, &cVar_pXJw5Wc4_sendMessage);
  cMsg_vqEzQkx5_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_pZnqA34i, 0, m, &cVar_pZnqA34i_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LTF4hngn_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YoOjAYAe_sendMessage);
  cMsg_jTCbf7CR_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_f7XnlrCi, 0, m, &cVar_f7XnlrCi_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gjkxQCAC_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1YcpnY0l_sendMessage);
  cMsg_seeTDJWN_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_f9JSBrFZ, 0, m, &cVar_f9JSBrFZ_sendMessage);
  cMsg_iTwH02mO_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_YEDao0nn, 0, m, &cVar_YEDao0nn_sendMessage);
  cMsg_LbyBlTSQ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_a5uddtDz, 0, m, &cVar_a5uddtDz_sendMessage);
  cMsg_64MXd27u_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_kSUxxkLl, 0, m, &cVar_kSUxxkLl_sendMessage);
  cMsg_gXKMfnHh_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_UeOqnSRQ, 0, m, &cVar_UeOqnSRQ_sendMessage);
  cMsg_Ux9EeydJ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_mPKqpkmM, 0, m, &cVar_mPKqpkmM_sendMessage);
  cMsg_AApytX7P_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_YEC3ef7L, 0, m, &cVar_YEC3ef7L_sendMessage);
  cMsg_xJcRMce1_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_msZP9Kni, 0, m, &cVar_msZP9Kni_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_wm3Bncre, 0, m, &cVar_wm3Bncre_sendMessage);
  cMsg_j0xJyUOo_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_gUfQa0Ow, 0, m, &cVar_gUfQa0Ow_sendMessage);
  cMsg_jYhGrZfn_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_sPYYuxYy, 0, m, &cVar_sPYYuxYy_sendMessage);
  cMsg_GtWMnI0J_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_5YmfgbLR, 0, m, &cVar_5YmfgbLR_sendMessage);
  cMsg_omOs8HXB_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ViPnacYz, 0, m, &cVar_ViPnacYz_sendMessage);
  cMsg_MFVy8gmJ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_F9m4NX5Q, 0, m, &cVar_F9m4NX5Q_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_h1KccUji, 0, m, &cVar_h1KccUji_sendMessage);
  cMsg_7SHjVYf2_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_mM9RKXDP, 0, m, &cVar_mM9RKXDP_sendMessage);
  cMsg_4ZShe2Y9_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_hGPPvKsP, 0, m, &cVar_hGPPvKsP_sendMessage);
  cMsg_0W1wp0SY_sendMessage(_c, 0, m);
  cMsg_jWtp1dN3_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_hd8MVZGX, 0, m, &cVar_hd8MVZGX_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_esBvTAzg, 0, m, &cVar_esBvTAzg_sendMessage);
  cMsg_M3GufVOC_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_rKgluzVi, 0, m, &cVar_rKgluzVi_sendMessage);
  cMsg_j8mXDdr0_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ecqBO5lH, 0, m, &cVar_ecqBO5lH_sendMessage);
  cMsg_eQ20b8k1_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_vLUEduEE, 0, m, &cVar_vLUEduEE_sendMessage);
  cMsg_W1jMOeMK_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_UrKxCJfu, 0, m, &cVar_UrKxCJfu_sendMessage);
  cMsg_NvAREFT1_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_F6Fobx2a, 0, m, &cVar_F6Fobx2a_sendMessage);
  cMsg_KoQ0vi0i_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_YfF2qoKQ, 0, m, &cVar_YfF2qoKQ_sendMessage);
  cMsg_DoeVqpT6_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_bPbE0tyG, 0, m, &cVar_bPbE0tyG_sendMessage);
  cMsg_IQArFCmy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cReceive_BfrTvVXq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_bjNKWcSf_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_fQqKYvGD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_J4x6l1dv, 0, m, &cVar_J4x6l1dv_sendMessage);
}

void Heavy_Echomatica::cReceive_dKSmFBTL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vqZ16piH, 0, m, &cVar_vqZ16piH_sendMessage);
}

void Heavy_Echomatica::cReceive_T7zsn907_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3EiwtQNF, 0, m, &cVar_3EiwtQNF_sendMessage);
}

void Heavy_Echomatica::cReceive_7QqyxtUh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WiHVKswG, 0, m, &cVar_WiHVKswG_sendMessage);
}

void Heavy_Echomatica::cReceive_6Fj0eZtF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OmpVZAiN, 0, m, &cVar_OmpVZAiN_sendMessage);
}

void Heavy_Echomatica::cReceive_J226nyMh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RM1fOTSi, 0, m, &cVar_RM1fOTSi_sendMessage);
}

void Heavy_Echomatica::cReceive_vkBVDjJp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Ql4HO5SL, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_O9zjM8pO, 0, m, &cVar_O9zjM8pO_sendMessage);
}

void Heavy_Echomatica::cReceive_mHGOnRdA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_lE3KBHkH, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_yFrJrO2x, 0, m, &cVar_yFrJrO2x_sendMessage);
}

void Heavy_Echomatica::cReceive_lh4LO6db_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_G1DRKKLQ, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_7z3veNiY, 0, m, &cVar_7z3veNiY_sendMessage);
}

void Heavy_Echomatica::cReceive_dQAjrWNw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_w9yI8sbB, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_u1OZJikr, 0, m, &cVar_u1OZJikr_sendMessage);
}

void Heavy_Echomatica::cReceive_aUOgaEzx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_98ODG1eY, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_BNX7YXMA, 0, m, &cVar_BNX7YXMA_sendMessage);
}

void Heavy_Echomatica::cReceive_ikfP9FHo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_JTX0iX7Z, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_BjXL8R4m, 0, m, &cVar_BjXL8R4m_sendMessage);
}

void Heavy_Echomatica::cReceive_llXsTiIa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_MRGhgrUH, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_7EH4vCqc, 0, m, &cVar_7EH4vCqc_sendMessage);
}

void Heavy_Echomatica::cReceive_vS4Gc7cO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_rxwtzkxe, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_nMX4aILj, 0, m, &cVar_nMX4aILj_sendMessage);
}

void Heavy_Echomatica::cReceive_OFeBFdxb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_e8SaK36w, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_jXrGywHj, 0, m, &cVar_jXrGywHj_sendMessage);
}

void Heavy_Echomatica::cReceive_MfJvSxGS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_qcpK9xAF, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_BAeUYI9U, 0, m, &cVar_BAeUYI9U_sendMessage);
}

void Heavy_Echomatica::cReceive_SMC7mGfd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_CWxjyyeP, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_bhndsavR, 0, m, &cVar_bhndsavR_sendMessage);
}

void Heavy_Echomatica::cReceive_1wJJ7qcp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_mOh2rUh0, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_KuWJ52FL, 0, m, &cVar_KuWJ52FL_sendMessage);
}

void Heavy_Echomatica::cReceive_xn2iErqJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5flzGRLA_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qlj6Ktca_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_MqujXPJy_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tsWNezhv_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iIm7fOPI_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7SPzOlnZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_9woxQ4DF_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wEEnlxd8_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_0YW2I1zq_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QPnR1KR2_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oriMbapx_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7S45IHnl_sendMessage);
}

void Heavy_Echomatica::cReceive_dxpobZW0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_pBPI226n_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_qDraa7l0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_a5uddtDz, 0, m, &cVar_a5uddtDz_sendMessage);
}

void Heavy_Echomatica::cReceive_T9XP370s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_kSUxxkLl, 0, m, &cVar_kSUxxkLl_sendMessage);
}

void Heavy_Echomatica::cReceive_xtyxLulO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_UeOqnSRQ, 0, m, &cVar_UeOqnSRQ_sendMessage);
}

void Heavy_Echomatica::cReceive_fytsAVBS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mPKqpkmM, 0, m, &cVar_mPKqpkmM_sendMessage);
}

void Heavy_Echomatica::cReceive_u4en3ASz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YEC3ef7L, 0, m, &cVar_YEC3ef7L_sendMessage);
}

void Heavy_Echomatica::cReceive_znV2Hg06_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_msZP9Kni, 0, m, &cVar_msZP9Kni_sendMessage);
}

void Heavy_Echomatica::cReceive_IcMN7E4X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_5x1g6MYh, m);
}

void Heavy_Echomatica::cReceive_kYT5etVo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_gUfQa0Ow, 0, m, &cVar_gUfQa0Ow_sendMessage);
}

void Heavy_Echomatica::cReceive_mlWXwAcL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wm3Bncre, 0, m, &cVar_wm3Bncre_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pLSN40O6_sendMessage);
}

void Heavy_Echomatica::cReceive_DWG1moIs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tCaaMBe1, 0, m, &cVar_tCaaMBe1_sendMessage);
}

void Heavy_Echomatica::cReceive_lQ6d954a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_OdQ90iXg_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_zAlgbc7F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rzSBAA9N_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_l79QXAuT_sendMessage);
}

void Heavy_Echomatica::cReceive_Lc3HGNlF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VdtRAFsD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZraRFbck_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ffCyP7IP_sendMessage);
}

void Heavy_Echomatica::cReceive_4zPueXKX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Ry43KsPz, 0, m, &cPack_Ry43KsPz_sendMessage);
}

void Heavy_Echomatica::cReceive_vkZb7ryo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_7p8VSc6m, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_o3fhoLxg, m);
}

void Heavy_Echomatica::cReceive_ZF8IwEOH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 1.5f, 0, m, &cBinop_l8wlP4Uw_sendMessage);
}

void Heavy_Echomatica::cReceive_bTeBy8wo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_zDiqgm0Q_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_dTu1I042_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_H5Vtc6u8, 0, m, &cPack_H5Vtc6u8_sendMessage);
}

void Heavy_Echomatica::cReceive_d7R6KhK1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_UnN5yGgn_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_F01xIpPU_sendMessage);
}

void Heavy_Echomatica::cReceive_wntTLggL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qEE2WRKU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_liZ216ZD_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4xxMHaKa_sendMessage);
}

void Heavy_Echomatica::cReceive_qqeOEPsK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xBnK1FAX_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kuSoBN62_sendMessage);
}

void Heavy_Echomatica::cReceive_Hgt2KqlT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_91IGDxWO_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sTNgAeRg_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_m9HhN6tc_sendMessage);
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
    __hv_varread_f(&sVarf_V8gtiYrI, VOf(Bf0));
    __hv_biquad_k_f(&sBiquad_k_CnFFakxe, VIf(Bf0), VOf(Bf1));
    __hv_varread_f(&sVarf_5x1g6MYh, VOf(Bf2));
    __hv_varread_f(&sVarf_eFlhMNhk, VOf(Bf3));
    __hv_rpole_f(&sRPole_7EfI2ftN, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_vqOfmr5t, VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_soIEQKjt, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_5hNNGedt, VOf(Bf0));
    __hv_rpole_f(&sRPole_fam8wi5c, VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_NavhqXRv, VIf(Bf0), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_xgr8kGqc, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_bA9Wetsm, VOf(Bf3));
    __hv_rpole_f(&sRPole_VfWXWBbs, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_tAoukkvp, VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_GTc12BOz, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_HNW2Abze, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_O5K4zFbN, VOf(Bf3));
    __hv_rpole_f(&sRPole_4hBpAVkV, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_srvrge5D, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_66DfvFWQ, VOf(Bf3));
    __hv_rpole_f(&sRPole_mfQ3wuhI, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_TZMUyNuu, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_gbQxf4MF, VOf(Bf3));
    __hv_rpole_f(&sRPole_ev4sF63c, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf1), VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_vc2SEHrU, VOf(Bf2));
    __hv_varread_f(&sVarf_ONtOqo71, VOf(Bf1));
    __hv_varread_f(&sVarf_QADPjs8f, VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_kVirrXrj, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_45jcZdCT, VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_rUUWZd9q, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_2MMA9bpj, VOf(Bf2));
    __hv_rpole_f(&sRPole_CRCmhDd5, VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_xWAIh3xw, VIf(Bf2), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_mFguFwa2, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_Tho98HOV, VOf(Bf1));
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_HATWDr17, VOf(Bf2));
    __hv_rpole_f(&sRPole_Nauv6Ixy, VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f);
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_pw3m5Egq, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_e7iGbWmD, VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    sEnv_process(this, &sEnv_dhtryBzQ, VIf(Bf0), &sEnv_dhtryBzQ_sendMessage);
    __hv_line_f(&sLine_1nzWzdY4, VOf(Bf4));
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
    __hv_line_f(&sLine_aBciIX5T, VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf2), VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_sKB1ZL77, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_HliSQb5B, VOf(Bf5));
    __hv_rpole_f(&sRPole_f1zp2PRY, VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_tabwrite_f(&sTabwrite_rYlTTMco, VIf(Bf5));
    __hv_phasor_k_f(&sPhasor_5ePvV3z8, VOf(Bf5));
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
    __hv_varread_f(&sVarf_k3U8u8m9, VOf(Bf2));
    __hv_phasor_k_f(&sPhasor_mX1lNapS, VOf(Bf5));
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
    __hv_varread_f(&sVarf_6C4m6sFx, VOf(Bf6));
    __hv_mul_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf3), VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_tsKsN8Bj, VIf(Bf6));
    __hv_line_f(&sLine_hljQ9oLE, VOf(Bf6));
    __hv_varread_f(&sVarf_tsKsN8Bj, VOf(Bf2));
    __hv_add_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_tabhead_f(&sTabhead_pOv3dohr, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_DFBUrwUV, VOf(Bf6));
    __hv_mul_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_zpNQQOLd, VOf(Bf2));
    __hv_min_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_TW04Z9lf, VOf(Bf2));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_oI3Jc0eZ, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_6pVcL3iN, VIi(Bi0), VOf(Bf2));
    __hv_sub_f(VIf(Bf4), VIf(Bf2), VOf(Bf4));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf4), VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_MRGhgrUH, VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_vc2SEHrU, VIf(Bf3));
    __hv_line_f(&sLine_Z9VpDYU9, VOf(Bf3));
    __hv_varread_f(&sVarf_tsKsN8Bj, VOf(Bf4));
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_tabhead_f(&sTabhead_aJ0TxjlF, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_XwvQBMDQ, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_We2FSzY3, VOf(Bf4));
    __hv_min_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_KbcIEzrU, VOf(Bf4));
    __hv_zero_f(VOf(Bf5));
    __hv_lt_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_cast_fi(VIf(Bf5), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_m1cE1jXQ, VIi(Bi1), VOf(Bf5));
    __hv_tabread_if(&sTabread_shtuM67B, VIi(Bi0), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf5));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf5), VIf(Bf6), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_e8SaK36w, VOf(Bf6));
    __hv_mul_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_ONtOqo71, VIf(Bf6));
    __hv_line_f(&sLine_95Tiw3iI, VOf(Bf6));
    __hv_varread_f(&sVarf_tsKsN8Bj, VOf(Bf5));
    __hv_add_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_tabhead_f(&sTabhead_6eEI6cSp, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_UGD0xLxq, VOf(Bf6));
    __hv_mul_f(VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_y9cuexUz, VOf(Bf5));
    __hv_min_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_9o3wyTlt, VOf(Bf5));
    __hv_zero_f(VOf(Bf7));
    __hv_lt_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_and_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_cast_fi(VIf(Bf7), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_p3Mbgwef, VIi(Bi1), VOf(Bf7));
    __hv_tabread_if(&sTabread_xnwez5Dv, VIi(Bi0), VOf(Bf5));
    __hv_sub_f(VIf(Bf7), VIf(Bf5), VOf(Bf7));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf7), VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_CWxjyyeP, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_QADPjs8f, VIf(Bf3));
    __hv_line_f(&sLine_fFNq6BZS, VOf(Bf3));
    __hv_varread_f(&sVarf_tsKsN8Bj, VOf(Bf7));
    __hv_add_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_tabhead_f(&sTabhead_oBesJqvY, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_MICEO8XP, VOf(Bf3));
    __hv_mul_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_7M58OInq, VOf(Bf7));
    __hv_min_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_ZcbpTscK, VOf(Bf7));
    __hv_zero_f(VOf(Bf1));
    __hv_lt_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_and_f(VIf(Bf7), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_cast_fi(VIf(Bf1), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_UUKmzLgL, VIi(Bi1), VOf(Bf1));
    __hv_tabread_if(&sTabread_p49aCN97, VIi(Bi0), VOf(Bf7));
    __hv_sub_f(VIf(Bf1), VIf(Bf7), VOf(Bf1));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf1), VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_mOh2rUh0, VOf(Bf6));
    __hv_mul_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_kVirrXrj, VIf(Bf6));
    __hv_line_f(&sLine_NuMzN8Th, VOf(Bf6));
    __hv_varread_f(&sVarf_tsKsN8Bj, VOf(Bf1));
    __hv_add_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_tabhead_f(&sTabhead_Cn16d7Ng, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_eKsdqDcJ, VOf(Bf6));
    __hv_mul_f(VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_IHgdfppD, VOf(Bf1));
    __hv_min_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_3hfvWkAP, VOf(Bf1));
    __hv_zero_f(VOf(Bf0));
    __hv_lt_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_and_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_cast_fi(VIf(Bf0), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_fHujMgWS, VIi(Bi1), VOf(Bf0));
    __hv_tabread_if(&sTabread_6VQTcYQ8, VIi(Bi0), VOf(Bf1));
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf0));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf0), VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_qcpK9xAF, VOf(Bf3));
    __hv_mul_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_45jcZdCT, VIf(Bf3));
    __hv_line_f(&sLine_Xk0vlQbg, VOf(Bf3));
    __hv_varread_f(&sVarf_tsKsN8Bj, VOf(Bf0));
    __hv_add_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_tabhead_f(&sTabhead_9fDs6mUZ, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_dUNdizSV, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_OqM3Un9M, VOf(Bf0));
    __hv_min_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_OpBH5klo, VOf(Bf0));
    __hv_zero_f(VOf(Bf8));
    __hv_lt_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_and_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_cast_fi(VIf(Bf8), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_jnKYWh2q, VIi(Bi1), VOf(Bf8));
    __hv_tabread_if(&sTabread_1EFv9ani, VIi(Bi0), VOf(Bf0));
    __hv_sub_f(VIf(Bf8), VIf(Bf0), VOf(Bf8));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf8), VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_rxwtzkxe, VOf(Bf6));
    __hv_mul_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_rUUWZd9q, VIf(Bf6));
    sEnv_process(this, &sEnv_nWj3FZ1B, VIf(I0), &sEnv_nWj3FZ1B_sendMessage);
    __hv_line_f(&sLine_XZ8SjpNI, VOf(Bf6));
    __hv_mul_f(VIf(I0), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf8), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf6), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_AGA612t8, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_okhm4Urt, VOf(Bf6));
    __hv_rpole_f(&sRPole_OY66HwqJ, VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_dRLXCpJO, VOf(Bf8));
    __hv_rpole_f(&sRPole_RxdYCGbr, VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_6hSXTMAU, VIf(Bf8), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_Ek2CJCcl, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    sEnv_process(this, &sEnv_dh0r6Ivy, VIf(I1), &sEnv_dh0r6Ivy_sendMessage);
    __hv_line_f(&sLine_FiEMq0GX, VOf(Bf6));
    __hv_mul_f(VIf(I1), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf3), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_rmG3Zf65, VOf(Bf3));
    __hv_mul_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_FwsMggs2, VOf(Bf6));
    __hv_rpole_f(&sRPole_WaH4lr3S, VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_x1l23zCT, VOf(Bf3));
    __hv_rpole_f(&sRPole_4GurPkVr, VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_B598ZDCa, VIf(Bf3), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_kZLet5zG, VOf(Bf3));
    __hv_mul_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf8), VIf(Bf3), VOf(Bf6));
    __hv_varwrite_f(&sVarf_V8gtiYrI, VIf(Bf6));
    __hv_varread_f(&sVarf_7p8VSc6m, VOf(Bf6));
    __hv_mul_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf3), 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f);
    __hv_line_f(&sLine_Ql4HO5SL, VOf(Bf9));
    __hv_line_f(&sLine_lE3KBHkH, VOf(Bf10));
    __hv_line_f(&sLine_G1DRKKLQ, VOf(Bf11));
    __hv_line_f(&sLine_w9yI8sbB, VOf(Bf12));
    __hv_line_f(&sLine_98ODG1eY, VOf(Bf13));
    __hv_line_f(&sLine_JTX0iX7Z, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf5), VIf(Bf13), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf1), VIf(Bf12), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf4), VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf0), VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf2), VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_MVLxs5SP, VOf(Bf9));
    __hv_rpole_f(&sRPole_VLchsne0, VIf(Bf14), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_0exTXggJ, VIf(Bf9), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_xDbMTbgU, VOf(Bf9));
    __hv_mul_f(VIf(Bf14), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf14), 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f);
    __hv_min_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf9), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf14), VIf(Bf9), VOf(Bf9));
    __hv_line_f(&sLine_OTuEndfN, VOf(Bf14));
    __hv_mul_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_phasor_k_f(&sPhasor_nVNZCGJo, VOf(Bf9));
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
    __hv_tabhead_f(&sTabhead_1M2Khlbo, VOf(Bf0));
    __hv_var_k_f_r(VOf(Bf2), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_5E6nYVeG, VOf(Bf0));
    __hv_mul_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_kpDAO8qS, VOf(Bf9));
    __hv_min_f(VIf(Bf0), VIf(Bf9), VOf(Bf9));
    __hv_zero_f(VOf(Bf0));
    __hv_max_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf2));
    __hv_varread_f(&sVarf_gqIgJBu4, VOf(Bf9));
    __hv_zero_f(VOf(Bf11));
    __hv_lt_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_and_f(VIf(Bf9), VIf(Bf11), VOf(Bf11));
    __hv_add_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_cast_fi(VIf(Bf11), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_Ny7vqOa3, VIi(Bi1), VOf(Bf11));
    __hv_tabread_if(&sTabread_IK8ZcK2X, VIi(Bi0), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf11), VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf9), VIf(Bf2), VIf(Bf14), VOf(Bf2));
    __hv_varread_f(&sVarf_Y3WzRmvf, VOf(Bf9));
    __hv_rpole_f(&sRPole_ekju5d3U, VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_7NvxKfe1, VIf(Bf9), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_iegmmZ1t, VOf(Bf9));
    __hv_mul_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_phasor_k_f(&sPhasor_3E4Jrz4v, VOf(Bf2));
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
    __hv_tabhead_f(&sTabhead_4x3VpUCe, VOf(Bf10));
    __hv_var_k_f_r(VOf(Bf11), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_vuzk5poa, VOf(Bf10));
    __hv_mul_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_01Zb3FfK, VOf(Bf2));
    __hv_min_f(VIf(Bf10), VIf(Bf2), VOf(Bf2));
    __hv_zero_f(VOf(Bf10));
    __hv_max_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf11), VIf(Bf10), VOf(Bf10));
    __hv_floor_f(VIf(Bf10), VOf(Bf11));
    __hv_varread_f(&sVarf_pvHA4OJ0, VOf(Bf2));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf11), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf11), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_bj59R8SX, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_lJlio3Jw, VIi(Bi0), VOf(Bf2));
    __hv_sub_f(VIf(Bf4), VIf(Bf2), VOf(Bf4));
    __hv_sub_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_fma_f(VIf(Bf4), VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf2), VIf(Bf11), VIf(Bf14), VOf(Bf11));
    __hv_varread_f(&sVarf_pPjobTfX, VOf(Bf2));
    __hv_rpole_f(&sRPole_G9JTkX5w, VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_bEaY1waO, VIf(Bf2), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_iN5OQo6p, VOf(Bf2));
    __hv_mul_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_kMfi16qf, VOf(Bf11));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_tabwrite_f(&sTabwrite_Lapkd5Oa, VIf(Bf11));
    __hv_varread_f(&sVarf_rYHrArRV, VOf(Bf11));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_tabwrite_f(&sTabwrite_043mx18j, VIf(Bf11));
    __hv_fma_f(VIf(Bf6), VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_M5bKIu6F, VOf(Bf3));
    __hv_rpole_f(&sRPole_xCYhCVFq, VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_g01e6cbt, VIf(Bf3), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_EYMnqdDh, VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf3), VIf(O1), VOf(O1));
    __hv_varread_f(&sVarf_o3fhoLxg, VOf(Bf3));
    __hv_mul_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf8), 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f);
    __hv_fma_f(VIf(Bf3), VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_Cm1OIQvy, VOf(Bf8));
    __hv_rpole_f(&sRPole_MieBd2H9, VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_9LwMPfAl, VIf(Bf8), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_LzJCOt9w, VOf(Bf8));
    __hv_mul_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf8), VIf(O0), VOf(O0));

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
