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
  numBytes += sBiquad_k_init(&sBiquad_k_Cr791gQK, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  numBytes += sRPole_init(&sRPole_48k4b83e);
  numBytes += sDel1_init(&sDel1_oGs8oacB);
  numBytes += sRPole_init(&sRPole_Y6V9FCve);
  numBytes += sDel1_init(&sDel1_UCuUlERP);
  numBytes += sRPole_init(&sRPole_zrESVpWs);
  numBytes += sDel1_init(&sDel1_2KxNsTfE);
  numBytes += sRPole_init(&sRPole_YPPngHuE);
  numBytes += sRPole_init(&sRPole_ReIwu7QZ);
  numBytes += sRPole_init(&sRPole_ewOP6OHT);
  numBytes += sRPole_init(&sRPole_R7nuJP5W);
  numBytes += sDel1_init(&sDel1_B4tV0Ntk);
  numBytes += sRPole_init(&sRPole_iNMM2Irf);
  numBytes += sLine_init(&sLine_xFr4K8k8);
  numBytes += sLine_init(&sLine_eelzvPqU);
  numBytes += sEnv_init(&sEnv_qrnCR4kH, 256, 512);
  numBytes += sLine_init(&sLine_EpVJnhD0);
  numBytes += sLine_init(&sLine_aH4gyq7T);
  numBytes += sRPole_init(&sRPole_FJhN5a0S);
  numBytes += sTabwrite_init(&sTabwrite_6tigLX68, &hTable_nkI8VXre);
  numBytes += sPhasor_k_init(&sPhasor_yjFGnQd0, 0.0f, sampleRate);
  numBytes += sPhasor_k_init(&sPhasor_8HUJQZw9, 0.0f, sampleRate);
  numBytes += sLine_init(&sLine_PyvdmH2o);
  numBytes += sTabhead_init(&sTabhead_KhOIufAX, &hTable_nkI8VXre);
  numBytes += sTabread_init(&sTabread_4tRuJsNt, &hTable_nkI8VXre, false);
  numBytes += sTabread_init(&sTabread_VTdKrken, &hTable_nkI8VXre, false);
  numBytes += sLine_init(&sLine_lC4SWczV);
  numBytes += sLine_init(&sLine_am1qV0C2);
  numBytes += sTabhead_init(&sTabhead_U4bUbpXW, &hTable_nkI8VXre);
  numBytes += sTabread_init(&sTabread_Qt2KNvjw, &hTable_nkI8VXre, false);
  numBytes += sTabread_init(&sTabread_unNEpsCW, &hTable_nkI8VXre, false);
  numBytes += sLine_init(&sLine_cjgZ3RxD);
  numBytes += sLine_init(&sLine_KyP01aKm);
  numBytes += sTabhead_init(&sTabhead_6bgilb3p, &hTable_nkI8VXre);
  numBytes += sTabread_init(&sTabread_qp2DzHDc, &hTable_nkI8VXre, false);
  numBytes += sTabread_init(&sTabread_aiMPZ2dG, &hTable_nkI8VXre, false);
  numBytes += sLine_init(&sLine_3xeEehsA);
  numBytes += sLine_init(&sLine_1pKg7htv);
  numBytes += sTabhead_init(&sTabhead_KtVse9OF, &hTable_nkI8VXre);
  numBytes += sTabread_init(&sTabread_NJNl5Au1, &hTable_nkI8VXre, false);
  numBytes += sTabread_init(&sTabread_JSd2TBTh, &hTable_nkI8VXre, false);
  numBytes += sLine_init(&sLine_301zR6A0);
  numBytes += sLine_init(&sLine_eUM4NL5k);
  numBytes += sTabhead_init(&sTabhead_TN85huwq, &hTable_nkI8VXre);
  numBytes += sTabread_init(&sTabread_v77IBgaD, &hTable_nkI8VXre, false);
  numBytes += sTabread_init(&sTabread_S6bB7Ujb, &hTable_nkI8VXre, false);
  numBytes += sLine_init(&sLine_poGwC2DX);
  numBytes += sLine_init(&sLine_DlCtcnXu);
  numBytes += sTabhead_init(&sTabhead_GkXDTCGs, &hTable_nkI8VXre);
  numBytes += sTabread_init(&sTabread_5c9w64jE, &hTable_nkI8VXre, false);
  numBytes += sTabread_init(&sTabread_T77uvT3A, &hTable_nkI8VXre, false);
  numBytes += sLine_init(&sLine_azO0Dh2d);
  numBytes += sEnv_init(&sEnv_e0ysfJxt, 256, 512);
  numBytes += sLine_init(&sLine_iNK0kd1a);
  numBytes += sRPole_init(&sRPole_Thp5iTs3);
  numBytes += sRPole_init(&sRPole_7a7xf7nB);
  numBytes += sDel1_init(&sDel1_QZeF20dW);
  numBytes += sEnv_init(&sEnv_2POCDt2p, 256, 512);
  numBytes += sLine_init(&sLine_4QpfEdXE);
  numBytes += sRPole_init(&sRPole_hcVE6nyM);
  numBytes += sRPole_init(&sRPole_z6yoCrRK);
  numBytes += sDel1_init(&sDel1_QdNHGYVO);
  numBytes += sLine_init(&sLine_L7q7FIL2);
  numBytes += sLine_init(&sLine_r3iNu60z);
  numBytes += sLine_init(&sLine_uk7DfyGo);
  numBytes += sLine_init(&sLine_INc6k1N1);
  numBytes += sLine_init(&sLine_uTyqvbrh);
  numBytes += sLine_init(&sLine_IuYhg605);
  numBytes += sRPole_init(&sRPole_C2lDOW9R);
  numBytes += sDel1_init(&sDel1_kxPD1m90);
  numBytes += sLine_init(&sLine_YcrtMO0L);
  numBytes += sPhasor_k_init(&sPhasor_FSFEd9bk, 0.3f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_jijx0Ygx, &hTable_vMLvfRKX);
  numBytes += sTabread_init(&sTabread_vf4sOlWu, &hTable_vMLvfRKX, false);
  numBytes += sTabread_init(&sTabread_fAf2uuT4, &hTable_vMLvfRKX, false);
  numBytes += sRPole_init(&sRPole_ZhLXGUUx);
  numBytes += sDel1_init(&sDel1_6nxlvacz);
  numBytes += sPhasor_k_init(&sPhasor_bcgHfh7K, 0.5f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_Tg6YAX7r, &hTable_NYgcHhGp);
  numBytes += sTabread_init(&sTabread_vpav2D5S, &hTable_NYgcHhGp, false);
  numBytes += sTabread_init(&sTabread_M89uRdMJ, &hTable_NYgcHhGp, false);
  numBytes += sRPole_init(&sRPole_eVvKaMAN);
  numBytes += sDel1_init(&sDel1_f2T1D3fv);
  numBytes += sTabwrite_init(&sTabwrite_Cf44efSy, &hTable_NYgcHhGp);
  numBytes += sTabwrite_init(&sTabwrite_88imfXkm, &hTable_vMLvfRKX);
  numBytes += sRPole_init(&sRPole_1Z0DLRtc);
  numBytes += sDel1_init(&sDel1_Cmd3GL0p);
  numBytes += sRPole_init(&sRPole_dzSOMLCi);
  numBytes += sDel1_init(&sDel1_hiOzU6ls);
  numBytes += cVar_init_s(&cVar_F2Xsgh5b, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_vEZ2UDrF, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_4garT7Hn, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_N6bnKsh3, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_W8h3gPEH, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_uini4nQX, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_NEKuMEeD, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_daRbmc9T, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_8yZHyjto, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_DTEC618O, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_PhzVp7od, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_bOY4E29Q, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_n9iIfd6G, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_aTi8QyK7, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_z6mlryb0, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_JUXfDWfQ, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_KVeErgyu, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_65qqbOr5, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Dhh6Uxg9, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_oeLx8pQM, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_ZV4oAFyP, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_LxnhQd06, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_FXfrZoyJ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_n8kcOb2X, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_D05wnHDw, 0.0f);
  numBytes += cVar_init_f(&cVar_B9iCExGX, 0.0f);
  numBytes += cVar_init_f(&cVar_cnHOFXGQ, 0.0f);
  numBytes += cVar_init_f(&cVar_xzTmmWfD, 0.0f);
  numBytes += cVar_init_f(&cVar_S5cngU6w, 0.0f);
  numBytes += cVar_init_f(&cVar_1fLGwaeJ, 0.0f);
  numBytes += cVar_init_f(&cVar_Zq2r6BWc, 0.0f);
  numBytes += cVar_init_f(&cVar_xvFvkMQ9, 0.0f);
  numBytes += cVar_init_f(&cVar_UKylA7q2, 0.0f);
  numBytes += cVar_init_f(&cVar_EuZ3lH8F, 0.0f);
  numBytes += cVar_init_f(&cVar_pZRw04c6, 0.0f);
  numBytes += cVar_init_f(&cVar_1Rc9zeVG, 0.0f);
  numBytes += cDelay_init(this, &cDelay_WrubTftm, 0.0f);
  numBytes += cDelay_init(this, &cDelay_mwXWubJA, 0.0f);
  numBytes += hTable_init(&hTable_nkI8VXre, 256);
  numBytes += cPack_init(&cPack_HmHGGlwd, 2, 0.0f, 20.0f);
  numBytes += cPack_init(&cPack_WHe03hmR, 2, 0.0f, 1800.0f);
  numBytes += cPack_init(&cPack_aHjML7tJ, 2, 0.0f, 1600.0f);
  numBytes += cPack_init(&cPack_p3nWI5vd, 2, 0.0f, 1300.0f);
  numBytes += cPack_init(&cPack_VDgmIuWy, 2, 0.0f, 1000.0f);
  numBytes += cPack_init(&cPack_HYPZG0Io, 2, 0.0f, 800.0f);
  numBytes += cPack_init(&cPack_hEgG2SvF, 2, 0.0f, 600.0f);
  numBytes += cVar_init_f(&cVar_Va82qvXZ, 10000.0f);
  numBytes += cBinop_init(&cBinop_Qt83FmDz, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_LVvZuEWj, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_6lctTkIi, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_r12keREQ, 27, 1);
  numBytes += cSlice_init(&cSlice_5oYLmRGP, 26, 1);
  numBytes += cSlice_init(&cSlice_TLlS2Uae, 25, 1);
  numBytes += cSlice_init(&cSlice_X1wIDLdb, 24, 1);
  numBytes += cSlice_init(&cSlice_G5addUE7, 23, 1);
  numBytes += cSlice_init(&cSlice_XGrvbTDt, 22, 1);
  numBytes += cSlice_init(&cSlice_G9mZWdqE, 21, 1);
  numBytes += cSlice_init(&cSlice_1VdtVMwJ, 20, 1);
  numBytes += cSlice_init(&cSlice_cJYVVhCX, 19, 1);
  numBytes += cSlice_init(&cSlice_dEoEbY7F, 18, 1);
  numBytes += cSlice_init(&cSlice_XYpP5HtU, 17, 1);
  numBytes += cSlice_init(&cSlice_pRhsLH3u, 16, 1);
  numBytes += cSlice_init(&cSlice_cQz0g3eo, 15, 1);
  numBytes += cSlice_init(&cSlice_jzcVOQLZ, 14, 1);
  numBytes += cSlice_init(&cSlice_zGwUXvv1, 13, 1);
  numBytes += cSlice_init(&cSlice_Nv3qGxSN, 12, 1);
  numBytes += cSlice_init(&cSlice_UvRrj8h5, 11, 1);
  numBytes += cSlice_init(&cSlice_8vePuzAy, 10, 1);
  numBytes += cSlice_init(&cSlice_ruJAuLb8, 9, 1);
  numBytes += cSlice_init(&cSlice_2sgd50tj, 8, 1);
  numBytes += cSlice_init(&cSlice_aPntbgUM, 7, 1);
  numBytes += cSlice_init(&cSlice_EY3oX223, 6, 1);
  numBytes += cSlice_init(&cSlice_IgB5gpdN, 5, 1);
  numBytes += cSlice_init(&cSlice_A0PU8H6y, 4, 1);
  numBytes += cSlice_init(&cSlice_sxylKaZ7, 3, 1);
  numBytes += cSlice_init(&cSlice_AWfmu269, 2, 1);
  numBytes += cSlice_init(&cSlice_WtNQ5fJV, 1, 1);
  numBytes += cSlice_init(&cSlice_yTR3rBOm, 0, 1);
  numBytes += sVarf_init(&sVarf_snYUH0bg, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_bCKJqleF, 0.0f);
  numBytes += cBinop_init(&cBinop_OlUUxFGq, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_zEmBGI0V, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_IUrRv2JH, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_85cnlEq9, 0.0f);
  numBytes += cBinop_init(&cBinop_jdteD8uU, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_QmJf4ghS, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_2MLj7OeY, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_wlZCYli7, 0.0f);
  numBytes += cBinop_init(&cBinop_FlSS2jdt, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_3D5ShS7v, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_XWEf3ojk, 22050.0f);
  numBytes += cBinop_init(&cBinop_Wqs0cflJ, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_zVL5Ptts, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_glJFCrvg, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_KBYnSw0N, 22050.0f);
  numBytes += cBinop_init(&cBinop_KfZuCSvo, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_V8mtRgoR, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_j9eeM13P, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_ZpeIWX8M, 22050.0f);
  numBytes += cBinop_init(&cBinop_hg9wEL1v, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_lNcbtWBe, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_5Y3UKj5r, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_4Nqube6i, 22050.0f);
  numBytes += cVar_init_f(&cVar_V4MQY4eg, 1.0f);
  numBytes += cBinop_init(&cBinop_rvYn9uxu, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_ng8Cru3M, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_TelyXW7Y, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_I2jOcDG6, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_AxzQqMMw, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_aYc7pqnQ, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_CTUupYlv, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_q2QRaybF, 0.0f);
  numBytes += cVar_init_f(&cVar_VI35ktWn, 0.0f);
  numBytes += cVar_init_f(&cVar_Ko3N0oWS, 0.0f);
  numBytes += cVar_init_f(&cVar_HPWKY1E5, 0.0f);
  numBytes += cVar_init_f(&cVar_3NqllOZx, 0.0f);
  numBytes += cVar_init_f(&cVar_7SWzQ8e4, 0.0f);
  numBytes += cSlice_init(&cSlice_c5pXe5fG, 3, 1);
  numBytes += cSlice_init(&cSlice_YTJW0RiS, 2, 1);
  numBytes += cSlice_init(&cSlice_ktWzInGR, 1, 1);
  numBytes += cSlice_init(&cSlice_SJgUlggr, 0, 1);
  numBytes += cPack_init(&cPack_j3GgCISo, 2, 0.0f, 50.0f);
  numBytes += cDelay_init(this, &cDelay_eww010Wi, 0.0f);
  numBytes += cDelay_init(this, &cDelay_9Cybi08d, 0.0f);
  numBytes += hTable_init(&hTable_NYgcHhGp, 256);
  numBytes += cVar_init_f(&cVar_ABLqYtmU, 0.0f);
  numBytes += cVar_init_s(&cVar_gqUYGhc4, "del-1001-delayD");
  numBytes += sVarf_init(&sVarf_1Kd8Y3Lb, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_A4BAAQz9, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Nv3hK4OG, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_ZU8ctGXp, "del-1001-delayC");
  numBytes += sVarf_init(&sVarf_VP0uwlt4, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_B9RvKeCF, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_2FgA2bu1, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_K8Ilx6Ax, 0.0f);
  numBytes += cDelay_init(this, &cDelay_v3XKomru, 0.0f);
  numBytes += hTable_init(&hTable_vMLvfRKX, 256);
  numBytes += sVarf_init(&sVarf_X5CwKrin, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_mQSTPNLu, 3.0f);
  numBytes += cBinop_init(&cBinop_t7fvGxnP, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_zOARqdQh, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_V8RQPl3H, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_sb5ukmzB, 3.0f);
  numBytes += cBinop_init(&cBinop_jCdtk6uu, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_iIEbSKIf, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_TXJ3R1Er, 1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_x1wgkriA, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_8OQCwgZz, 0.0f);
  numBytes += cVar_init_f(&cVar_IXSXFCbo, 0.0f);
  numBytes += cVar_init_f(&cVar_0SBF8VzY, 0.0f);
  numBytes += cPack_init(&cPack_bTCk9AzV, 2, 0.0f, 100.0f);
  numBytes += cPack_init(&cPack_FXBGEJwO, 2, 0.0f, 100.0f);
  numBytes += cVar_init_f(&cVar_EoTKDoRx, 0.0f);
  numBytes += cVar_init_f(&cVar_yu4nZqmE, 0.0f);
  numBytes += cVar_init_f(&cVar_RfJrGZIm, 0.0f);
  numBytes += cBinop_init(&cBinop_sZKqaF4k, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_7E3R8yTB, 0.0f); // __pow
  numBytes += cIf_init(&cIf_yellVKKL, false);
  numBytes += cBinop_init(&cBinop_Z8ghtOdq, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_MW2ImWR8, 74.0f);
  numBytes += cVar_init_f(&cVar_8J2heeWg, 3.0f);
  numBytes += cSlice_init(&cSlice_3p4k5aKz, 1, -1);
  numBytes += cVar_init_f(&cVar_e2KOXYc0, 1.0f);
  numBytes += cSlice_init(&cSlice_8wGQ8BAB, 1, -1);
  numBytes += cVar_init_f(&cVar_Qu1EMYJp, 70.0f);
  numBytes += cBinop_init(&cBinop_vMkiolL4, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_pZsC2Z6O, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_NKeGShEk, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_5MftmI5y, 3000.0f);
  numBytes += cBinop_init(&cBinop_eNgdzd6H, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_lfc8wX6A, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_9DLolxFo, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_i4VlPXFF, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_9Z8LmcPm, 400.0f);
  numBytes += cBinop_init(&cBinop_9fEO4YfW, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_e4zzXJlc, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_iTzRv09Q, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_jrHzAuU6, 30.0f);
  numBytes += cBinop_init(&cBinop_4myM2K9z, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_zTQFpRj1, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_u86tyxC1, false);
  numBytes += cVar_init_f(&cVar_UsvVklyn, 0.0f);
  numBytes += cVar_init_f(&cVar_9Us63wfu, 0.0f);
  numBytes += cPack_init(&cPack_p2Pbel68, 3, 0.0f, 500.0f, 100.0f);
  numBytes += cDelay_init(this, &cDelay_swD8cu9c, 0.0f);
  numBytes += cVar_init_f(&cVar_CORGfGmz, 20.0f);
  numBytes += cBinop_init(&cBinop_YdWwRrYA, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_zshFVqrJ, 0.0f);
  numBytes += cSlice_init(&cSlice_ObMfuqPB, 1, -1);
  numBytes += cSlice_init(&cSlice_VBQ7UR2Q, 1, -1);
  numBytes += cVar_init_f(&cVar_sMXA52i2, 0.0f);
  numBytes += cVar_init_f(&cVar_EUkp2XgO, 20.0f);
  numBytes += cVar_init_f(&cVar_YnRUjQuH, 0.0f);
  numBytes += cVar_init_f(&cVar_MOQe2yAv, 0.0f);
  numBytes += cVar_init_f(&cVar_H61utFG7, 0.0f);
  numBytes += cSlice_init(&cSlice_dfi5TR4d, 1, 1);
  numBytes += cSlice_init(&cSlice_hXLerbxz, 0, 1);
  numBytes += cBinop_init(&cBinop_p5KPqkuO, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Xj4mm3H2, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_fmG1RmTg, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_Xtmrzawx, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_gNuWLs1I, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_o6feysOg, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_xRHccpIc, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_vEjl3rnn, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_uaWQNdas, 0.0f);
  numBytes += cVar_init_f(&cVar_WgHalQh4, 0.0f);
  numBytes += cVar_init_f(&cVar_645sgycz, 0.0f);
  numBytes += cVar_init_f(&cVar_cdV8I871, 0.0f);
  numBytes += cVar_init_f(&cVar_t9CYloj4, 0.0f);
  numBytes += cVar_init_f(&cVar_Gwp8H7S4, 0.0f);
  numBytes += sVarf_init(&sVarf_ErOtN5uC, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_i1umcnL2, 8.0f);
  numBytes += cBinop_init(&cBinop_vnJ5co5v, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_bb859V2n, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_nhRUlxyU, 0.0f);
  numBytes += cVar_init_f(&cVar_c67RlJQC, 0.0f);
  numBytes += cBinop_init(&cBinop_spZ7egwP, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_ObPkDUAJ, 0.0f); // __pow
  numBytes += cIf_init(&cIf_crFrNna3, false);
  numBytes += cBinop_init(&cBinop_u8Q5JbNI, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_RXfZxpj1, 82.0f);
  numBytes += cVar_init_f(&cVar_BLKjViRB, 21.0f);
  numBytes += cSlice_init(&cSlice_4Q6K3FrO, 1, -1);
  numBytes += cVar_init_f(&cVar_DVDpMJoA, 1.0f);
  numBytes += cSlice_init(&cSlice_fv5F41jy, 1, -1);
  numBytes += cVar_init_f(&cVar_3gIPDzdk, 70.0f);
  numBytes += cBinop_init(&cBinop_bkF0CWIK, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_DdfXMreI, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_6XwJXiAJ, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_n6Z6YI58, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_DzPMVxfg, 8.0f);
  numBytes += cBinop_init(&cBinop_loEHs2QN, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_XdCHLXyy, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_XVKHEb9U, 0.0f);
  numBytes += cVar_init_f(&cVar_qHoklGV2, 0.0f);
  numBytes += cBinop_init(&cBinop_696tj98F, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_Hc2Yf9Q3, 0.0f); // __pow
  numBytes += cIf_init(&cIf_BwypUL65, false);
  numBytes += cBinop_init(&cBinop_Jbq1FiJT, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_bCy1p3nY, 82.0f);
  numBytes += cVar_init_f(&cVar_23TkvscY, 21.0f);
  numBytes += cSlice_init(&cSlice_VxjD2DNs, 1, -1);
  numBytes += cVar_init_f(&cVar_nUdFWQZW, 1.0f);
  numBytes += cSlice_init(&cSlice_4O655COM, 1, -1);
  numBytes += cVar_init_f(&cVar_yMOiyNCv, 70.0f);
  numBytes += cBinop_init(&cBinop_1aguB9EC, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_nOLTTrQ2, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_85PkaDSu, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_H3Tuql6i, 10000.0f);
  numBytes += cBinop_init(&cBinop_x9GVrR1h, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_ovUYGGt4, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_SuHx445H, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_ZmlqZhlZ, 10000.0f);
  numBytes += cBinop_init(&cBinop_rkvDPN4q, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_VVbxaAbT, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_78ChnZaJ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_UfOSbOEx, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_vrubrTPS, 20.0f);
  numBytes += cBinop_init(&cBinop_fctt73xL, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_mZy4Vrsj, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_nGNVPNhI, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_ffwsTp5f, 20.0f);
  numBytes += cBinop_init(&cBinop_T5VbVMAL, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_qtHhwdol, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_yzCjzI6m, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_BKVVJeru, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_FWYWrwez, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_HT5xfcad, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_kHgQpedE, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Jt4NO6cQ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_wTrKqz3d, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_X0fApggN, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_yIO0IoO8, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_RXph4e2T, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_065eBm5d, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_UZW3qECu, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_I4NCXGQe, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Cl6MndzX, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_MhOQC0n4, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_zJ7b21Q3, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_fhJqQGCz, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_RhHcRSMk, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_0FEtHc7r, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_GK6pLFcx, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_pRlNYqbT, 0.0f, 0.0f, false);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_Echomatica::~Heavy_Echomatica() {
  sEnv_free(&sEnv_qrnCR4kH);
  sEnv_free(&sEnv_e0ysfJxt);
  sEnv_free(&sEnv_2POCDt2p);
  hTable_free(&hTable_nkI8VXre);
  cPack_free(&cPack_HmHGGlwd);
  cPack_free(&cPack_WHe03hmR);
  cPack_free(&cPack_aHjML7tJ);
  cPack_free(&cPack_p3nWI5vd);
  cPack_free(&cPack_VDgmIuWy);
  cPack_free(&cPack_HYPZG0Io);
  cPack_free(&cPack_hEgG2SvF);
  cPack_free(&cPack_j3GgCISo);
  hTable_free(&hTable_NYgcHhGp);
  hTable_free(&hTable_vMLvfRKX);
  cPack_free(&cPack_bTCk9AzV);
  cPack_free(&cPack_FXBGEJwO);
  cPack_free(&cPack_p2Pbel68);
}

HvTable *Heavy_Echomatica::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0xC7C6279C: return &hTable_nkI8VXre; // del-1001-delayA
    case 0x6F28B8EB: return &hTable_NYgcHhGp; // del-1001-delayD
    case 0xA74180A2: return &hTable_vMLvfRKX; // del-1001-delayC
    default: return nullptr;
  }
}

void Heavy_Echomatica::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0x22C9B907: { // Vari
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_V37l9U4e_sendMessage);
      break;
    }
    case 0xA99A1B1B: { // 1207-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Soxanvzx_sendMessage);
      break;
    }
    case 0x84185EE6: { // 1207-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Pb3Pbam2_sendMessage);
      break;
    }
    case 0x4C0364B1: { // 1285-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1t79Bo0r_sendMessage);
      break;
    }
    case 0xE0EC232D: { // 1285-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_EUvRDnal_sendMessage);
      break;
    }
    case 0xD892F55D: { // 1307-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_HeoGD2k8_sendMessage);
      break;
    }
    case 0xDF5BAE2: { // 1307-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_NAKroBdW_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1CBqhvrV_sendMessage);
      break;
    }
    case 0xE68AB11B: { // chrs
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ib8ukXDE_sendMessage);
      break;
    }
    case 0xBA8CED4E: { // dry
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_OZV5jpkf_sendMessage);
      break;
    }
    case 0x63E722C0: { // echo
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_llBXKCwH_sendMessage);
      break;
    }
    case 0x8FA433B0: { // f1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_HcvgGfLD_sendMessage);
      break;
    }
    case 0xEE0EB120: { // f2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_8Md79Fgu_sendMessage);
      break;
    }
    case 0x4FFCF19F: { // f3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_AHuy6o6E_sendMessage);
      break;
    }
    case 0x2AF9F5EB: { // f4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_6h6Md3QD_sendMessage);
      break;
    }
    case 0xC6F6EBB2: { // f5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_x6x6MRNj_sendMessage);
      break;
    }
    case 0x775D6E5E: { // f6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_2EbAJhrJ_sendMessage);
      break;
    }
    case 0xBB6123FD: { // fdbck_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_GY3JpeeU_sendMessage);
      break;
    }
    case 0xF1E7CD16: { // feedback
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_HiqyrmDu_sendMessage);
      break;
    }
    case 0xC7AF3F72: { // h1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_leFtO1ys_sendMessage);
      break;
    }
    case 0x9BEBB079: { // h2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_GwZREBAb_sendMessage);
      break;
    }
    case 0xAB1137FD: { // h3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4GXNRcq3_sendMessage);
      break;
    }
    case 0x2B4C6DE1: { // h4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9q8hZUgX_sendMessage);
      break;
    }
    case 0x2541E77D: { // h5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_WqHR9P2P_sendMessage);
      break;
    }
    case 0xE7F6D341: { // h6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_qJDtnMVV_sendMessage);
      break;
    }
    case 0x5667A4DA: { // head1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_fOKSSgrD_sendMessage);
      break;
    }
    case 0xAD6B31A5: { // head2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_mVwnEAMo_sendMessage);
      break;
    }
    case 0x8A2BD450: { // head3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_fNVm2f4h_sendMessage);
      break;
    }
    case 0xCF5C829A: { // head4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_tvsg9Ivv_sendMessage);
      break;
    }
    case 0xEE70DFBC: { // head5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_LlYBnCuj_sendMessage);
      break;
    }
    case 0x8E4B9939: { // head6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_WxaGcxSo_sendMessage);
      break;
    }
    case 0x7E24361: { // hp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_skd5hNap_sendMessage);
      break;
    }
    case 0x674D12F6: { // hp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_u3PS4up5_sendMessage);
      break;
    }
    case 0x6A20C3F5: { // hp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_SRccO535_sendMessage);
      break;
    }
    case 0x123E8795: { // lp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Hui7nTPj_sendMessage);
      break;
    }
    case 0x4588BD1: { // lp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_q8LgKxnF_sendMessage);
      break;
    }
    case 0xB7298D49: { // lp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_7j06DmjI_sendMessage);
      break;
    }
    case 0x64BD0F15: { // mf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_838ynrBY_sendMessage);
      break;
    }
    case 0x5A12F82E: { // mg
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_dRd4iT9W_sendMessage);
      break;
    }
    case 0x2C9C49A7: { // mq
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_JImSczYw_sendMessage);
      break;
    }
    case 0xC8D93A6D: { // tapehead_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_dVTdTjnf_sendMessage);
      break;
    }
    case 0xB25D05EB: { // varispeed
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_S9hQaJ8E_sendMessage);
      break;
    }
    case 0x8ADB5B6B: { // varispeed_enable
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_kej153c6_sendMessage);
      break;
    }
    case 0x7BB47B7B: { // wnf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_79SUdohA_sendMessage);
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


void Heavy_Echomatica::cMsg_IqR4ObjN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_uELfZfBF_sendMessage);
}

void Heavy_Echomatica::cSystem_uELfZfBF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_GhLpYplx_sendMessage);
}

void Heavy_Echomatica::cVar_F2Xsgh5b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_s5xFRF3c_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_n4ccLJfj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_BAon9Hpa_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_vEZ2UDrF, m);
}

void Heavy_Echomatica::cBinop_GhLpYplx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_4garT7Hn, m);
}

void Heavy_Echomatica::cMsg_s5xFRF3c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_n4ccLJfj_sendMessage);
}

void Heavy_Echomatica::cBinop_BAon9Hpa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_N6bnKsh3, m);
}

void Heavy_Echomatica::cMsg_YO3rIOQk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BXjLYCum_sendMessage);
}

void Heavy_Echomatica::cSystem_BXjLYCum_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_GEE6FBbv_sendMessage);
}

void Heavy_Echomatica::cVar_W8h3gPEH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WsRgjXff_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_EisKzH7v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_ImkMvJK7_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_uini4nQX, m);
}

void Heavy_Echomatica::cBinop_GEE6FBbv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_NEKuMEeD, m);
}

void Heavy_Echomatica::cMsg_WsRgjXff_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_EisKzH7v_sendMessage);
}

void Heavy_Echomatica::cBinop_ImkMvJK7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_daRbmc9T, m);
}

void Heavy_Echomatica::cMsg_FacEel5H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_XD2Wjh3V_sendMessage);
}

void Heavy_Echomatica::cSystem_XD2Wjh3V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_gpyaQMFj_sendMessage);
}

void Heavy_Echomatica::cVar_8yZHyjto_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FQt6xUuP_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_ONwcQQrl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_1Gk1FGTm_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_DTEC618O, m);
}

void Heavy_Echomatica::cBinop_gpyaQMFj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_PhzVp7od, m);
}

void Heavy_Echomatica::cMsg_FQt6xUuP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ONwcQQrl_sendMessage);
}

void Heavy_Echomatica::cBinop_1Gk1FGTm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_bOY4E29Q, m);
}

void Heavy_Echomatica::cMsg_nPwmONfn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_QXhAnUwy_sendMessage);
}

void Heavy_Echomatica::cSystem_QXhAnUwy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_XMxnVeRg_sendMessage);
}

void Heavy_Echomatica::cVar_n9iIfd6G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wf5Af0XS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_163AN0Kc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_osPa5g5J_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_aTi8QyK7, m);
}

void Heavy_Echomatica::cBinop_XMxnVeRg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_z6mlryb0, m);
}

void Heavy_Echomatica::cMsg_wf5Af0XS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_163AN0Kc_sendMessage);
}

void Heavy_Echomatica::cBinop_osPa5g5J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_JUXfDWfQ, m);
}

void Heavy_Echomatica::cCast_iI5yQVFY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YsO4Q9oq_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_7Tw2vepH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pmMzZ9En_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_wH88uKkr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PjydAYOt_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_JlaWmzjy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xjWNPafg_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_djBGxf2x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_iHWADofs_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_OI7jMdue_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5Hh2GNFv_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_rE4TDv8T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1tadkJqE_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_WbaoYG4F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_aJOVr725_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_G1zKB6O8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Egowp00e_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_P3rifXEC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_R6bwJqH9_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_2jtFXo3u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_T4IDu46W_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_Y4b15r0T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_MFfrcO4P_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_1tKbJcYk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tPczscUG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_3J2IsGFY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ZzFVu5jw_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_UjZu4iJr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Tea3mqQr_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_K9ejGy21_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oYxqPC69_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_nhuLq3EQ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_k2B6xvuE_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_77xdxyuo_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oQlpJwqS_sendMessage);
      break;
    }
    case 0x40400000: { // "3.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iYjgyqAQ_sendMessage);
      break;
    }
    case 0x40800000: { // "4.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3Ctkbrlz_sendMessage);
      break;
    }
    case 0x40A00000: { // "5.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3CJOHINi_sendMessage);
      break;
    }
    case 0x40C00000: { // "6.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_K8zDmJBX_sendMessage);
      break;
    }
    case 0x40E00000: { // "7.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aPjt6nlZ_sendMessage);
      break;
    }
    case 0x41000000: { // "8.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FGylivsv_sendMessage);
      break;
    }
    case 0x41100000: { // "9.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ipIQOPJ8_sendMessage);
      break;
    }
    case 0x41200000: { // "10.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1Yaw0Q9r_sendMessage);
      break;
    }
    case 0x41300000: { // "11.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ttE8Ws4g_sendMessage);
      break;
    }
    case 0x41400000: { // "12.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_H1mSRIYC_sendMessage);
      break;
    }
    case 0x41500000: { // "13.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mnD4hdWY_sendMessage);
      break;
    }
    case 0x41600000: { // "14.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LTgkVBHZ_sendMessage);
      break;
    }
    case 0x41700000: { // "15.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_N5O6ivOw_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_k2B6xvuE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2jtFXo3u_sendMessage);
}

void Heavy_Echomatica::cCast_77xdxyuo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3J2IsGFY_sendMessage);
}

void Heavy_Echomatica::cCast_oQlpJwqS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_G1zKB6O8_sendMessage);
}

void Heavy_Echomatica::cCast_iYjgyqAQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_P3rifXEC_sendMessage);
}

void Heavy_Echomatica::cCast_3Ctkbrlz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1tKbJcYk_sendMessage);
}

void Heavy_Echomatica::cCast_3CJOHINi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Y4b15r0T_sendMessage);
}

void Heavy_Echomatica::cCast_K8zDmJBX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_djBGxf2x_sendMessage);
}

void Heavy_Echomatica::cCast_aPjt6nlZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UjZu4iJr_sendMessage);
}

void Heavy_Echomatica::cCast_FGylivsv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_K9ejGy21_sendMessage);
}

void Heavy_Echomatica::cCast_ipIQOPJ8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OI7jMdue_sendMessage);
}

void Heavy_Echomatica::cCast_1Yaw0Q9r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7Tw2vepH_sendMessage);
}

void Heavy_Echomatica::cCast_ttE8Ws4g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wH88uKkr_sendMessage);
}

void Heavy_Echomatica::cCast_H1mSRIYC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JlaWmzjy_sendMessage);
}

void Heavy_Echomatica::cCast_mnD4hdWY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iI5yQVFY_sendMessage);
}

void Heavy_Echomatica::cCast_LTgkVBHZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WbaoYG4F_sendMessage);
}

void Heavy_Echomatica::cCast_N5O6ivOw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rE4TDv8T_sendMessage);
}

void Heavy_Echomatica::cMsg_Egowp00e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_r12keREQ, 0, m, &cSlice_r12keREQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5oYLmRGP, 0, m, &cSlice_5oYLmRGP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_TLlS2Uae, 0, m, &cSlice_TLlS2Uae_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X1wIDLdb, 0, m, &cSlice_X1wIDLdb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G5addUE7, 0, m, &cSlice_G5addUE7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XGrvbTDt, 0, m, &cSlice_XGrvbTDt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9mZWdqE, 0, m, &cSlice_G9mZWdqE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1VdtVMwJ, 0, m, &cSlice_1VdtVMwJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cJYVVhCX, 0, m, &cSlice_cJYVVhCX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dEoEbY7F, 0, m, &cSlice_dEoEbY7F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XYpP5HtU, 0, m, &cSlice_XYpP5HtU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pRhsLH3u, 0, m, &cSlice_pRhsLH3u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cQz0g3eo, 0, m, &cSlice_cQz0g3eo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jzcVOQLZ, 0, m, &cSlice_jzcVOQLZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGwUXvv1, 0, m, &cSlice_zGwUXvv1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Nv3qGxSN, 0, m, &cSlice_Nv3qGxSN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UvRrj8h5, 0, m, &cSlice_UvRrj8h5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8vePuzAy, 0, m, &cSlice_8vePuzAy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ruJAuLb8, 0, m, &cSlice_ruJAuLb8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2sgd50tj, 0, m, &cSlice_2sgd50tj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aPntbgUM, 0, m, &cSlice_aPntbgUM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EY3oX223, 0, m, &cSlice_EY3oX223_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IgB5gpdN, 0, m, &cSlice_IgB5gpdN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0PU8H6y, 0, m, &cSlice_A0PU8H6y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_sxylKaZ7, 0, m, &cSlice_sxylKaZ7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AWfmu269, 0, m, &cSlice_AWfmu269_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WtNQ5fJV, 0, m, &cSlice_WtNQ5fJV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yTR3rBOm, 0, m, &cSlice_yTR3rBOm_sendMessage);
}

void Heavy_Echomatica::cMsg_ZzFVu5jw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_r12keREQ, 0, m, &cSlice_r12keREQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5oYLmRGP, 0, m, &cSlice_5oYLmRGP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_TLlS2Uae, 0, m, &cSlice_TLlS2Uae_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X1wIDLdb, 0, m, &cSlice_X1wIDLdb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G5addUE7, 0, m, &cSlice_G5addUE7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XGrvbTDt, 0, m, &cSlice_XGrvbTDt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9mZWdqE, 0, m, &cSlice_G9mZWdqE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1VdtVMwJ, 0, m, &cSlice_1VdtVMwJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cJYVVhCX, 0, m, &cSlice_cJYVVhCX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dEoEbY7F, 0, m, &cSlice_dEoEbY7F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XYpP5HtU, 0, m, &cSlice_XYpP5HtU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pRhsLH3u, 0, m, &cSlice_pRhsLH3u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cQz0g3eo, 0, m, &cSlice_cQz0g3eo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jzcVOQLZ, 0, m, &cSlice_jzcVOQLZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGwUXvv1, 0, m, &cSlice_zGwUXvv1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Nv3qGxSN, 0, m, &cSlice_Nv3qGxSN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UvRrj8h5, 0, m, &cSlice_UvRrj8h5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8vePuzAy, 0, m, &cSlice_8vePuzAy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ruJAuLb8, 0, m, &cSlice_ruJAuLb8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2sgd50tj, 0, m, &cSlice_2sgd50tj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aPntbgUM, 0, m, &cSlice_aPntbgUM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EY3oX223, 0, m, &cSlice_EY3oX223_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IgB5gpdN, 0, m, &cSlice_IgB5gpdN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0PU8H6y, 0, m, &cSlice_A0PU8H6y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_sxylKaZ7, 0, m, &cSlice_sxylKaZ7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AWfmu269, 0, m, &cSlice_AWfmu269_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WtNQ5fJV, 0, m, &cSlice_WtNQ5fJV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yTR3rBOm, 0, m, &cSlice_yTR3rBOm_sendMessage);
}

void Heavy_Echomatica::cMsg_T4IDu46W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_r12keREQ, 0, m, &cSlice_r12keREQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5oYLmRGP, 0, m, &cSlice_5oYLmRGP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_TLlS2Uae, 0, m, &cSlice_TLlS2Uae_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X1wIDLdb, 0, m, &cSlice_X1wIDLdb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G5addUE7, 0, m, &cSlice_G5addUE7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XGrvbTDt, 0, m, &cSlice_XGrvbTDt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9mZWdqE, 0, m, &cSlice_G9mZWdqE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1VdtVMwJ, 0, m, &cSlice_1VdtVMwJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cJYVVhCX, 0, m, &cSlice_cJYVVhCX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dEoEbY7F, 0, m, &cSlice_dEoEbY7F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XYpP5HtU, 0, m, &cSlice_XYpP5HtU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pRhsLH3u, 0, m, &cSlice_pRhsLH3u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cQz0g3eo, 0, m, &cSlice_cQz0g3eo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jzcVOQLZ, 0, m, &cSlice_jzcVOQLZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGwUXvv1, 0, m, &cSlice_zGwUXvv1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Nv3qGxSN, 0, m, &cSlice_Nv3qGxSN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UvRrj8h5, 0, m, &cSlice_UvRrj8h5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8vePuzAy, 0, m, &cSlice_8vePuzAy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ruJAuLb8, 0, m, &cSlice_ruJAuLb8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2sgd50tj, 0, m, &cSlice_2sgd50tj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aPntbgUM, 0, m, &cSlice_aPntbgUM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EY3oX223, 0, m, &cSlice_EY3oX223_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IgB5gpdN, 0, m, &cSlice_IgB5gpdN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0PU8H6y, 0, m, &cSlice_A0PU8H6y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_sxylKaZ7, 0, m, &cSlice_sxylKaZ7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AWfmu269, 0, m, &cSlice_AWfmu269_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WtNQ5fJV, 0, m, &cSlice_WtNQ5fJV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yTR3rBOm, 0, m, &cSlice_yTR3rBOm_sendMessage);
}

void Heavy_Echomatica::cMsg_R6bwJqH9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_r12keREQ, 0, m, &cSlice_r12keREQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5oYLmRGP, 0, m, &cSlice_5oYLmRGP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_TLlS2Uae, 0, m, &cSlice_TLlS2Uae_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X1wIDLdb, 0, m, &cSlice_X1wIDLdb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G5addUE7, 0, m, &cSlice_G5addUE7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XGrvbTDt, 0, m, &cSlice_XGrvbTDt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9mZWdqE, 0, m, &cSlice_G9mZWdqE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1VdtVMwJ, 0, m, &cSlice_1VdtVMwJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cJYVVhCX, 0, m, &cSlice_cJYVVhCX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dEoEbY7F, 0, m, &cSlice_dEoEbY7F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XYpP5HtU, 0, m, &cSlice_XYpP5HtU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pRhsLH3u, 0, m, &cSlice_pRhsLH3u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cQz0g3eo, 0, m, &cSlice_cQz0g3eo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jzcVOQLZ, 0, m, &cSlice_jzcVOQLZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGwUXvv1, 0, m, &cSlice_zGwUXvv1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Nv3qGxSN, 0, m, &cSlice_Nv3qGxSN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UvRrj8h5, 0, m, &cSlice_UvRrj8h5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8vePuzAy, 0, m, &cSlice_8vePuzAy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ruJAuLb8, 0, m, &cSlice_ruJAuLb8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2sgd50tj, 0, m, &cSlice_2sgd50tj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aPntbgUM, 0, m, &cSlice_aPntbgUM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EY3oX223, 0, m, &cSlice_EY3oX223_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IgB5gpdN, 0, m, &cSlice_IgB5gpdN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0PU8H6y, 0, m, &cSlice_A0PU8H6y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_sxylKaZ7, 0, m, &cSlice_sxylKaZ7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AWfmu269, 0, m, &cSlice_AWfmu269_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WtNQ5fJV, 0, m, &cSlice_WtNQ5fJV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yTR3rBOm, 0, m, &cSlice_yTR3rBOm_sendMessage);
}

void Heavy_Echomatica::cMsg_tPczscUG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_r12keREQ, 0, m, &cSlice_r12keREQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5oYLmRGP, 0, m, &cSlice_5oYLmRGP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_TLlS2Uae, 0, m, &cSlice_TLlS2Uae_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X1wIDLdb, 0, m, &cSlice_X1wIDLdb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G5addUE7, 0, m, &cSlice_G5addUE7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XGrvbTDt, 0, m, &cSlice_XGrvbTDt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9mZWdqE, 0, m, &cSlice_G9mZWdqE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1VdtVMwJ, 0, m, &cSlice_1VdtVMwJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cJYVVhCX, 0, m, &cSlice_cJYVVhCX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dEoEbY7F, 0, m, &cSlice_dEoEbY7F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XYpP5HtU, 0, m, &cSlice_XYpP5HtU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pRhsLH3u, 0, m, &cSlice_pRhsLH3u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cQz0g3eo, 0, m, &cSlice_cQz0g3eo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jzcVOQLZ, 0, m, &cSlice_jzcVOQLZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGwUXvv1, 0, m, &cSlice_zGwUXvv1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Nv3qGxSN, 0, m, &cSlice_Nv3qGxSN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UvRrj8h5, 0, m, &cSlice_UvRrj8h5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8vePuzAy, 0, m, &cSlice_8vePuzAy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ruJAuLb8, 0, m, &cSlice_ruJAuLb8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2sgd50tj, 0, m, &cSlice_2sgd50tj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aPntbgUM, 0, m, &cSlice_aPntbgUM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EY3oX223, 0, m, &cSlice_EY3oX223_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IgB5gpdN, 0, m, &cSlice_IgB5gpdN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0PU8H6y, 0, m, &cSlice_A0PU8H6y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_sxylKaZ7, 0, m, &cSlice_sxylKaZ7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AWfmu269, 0, m, &cSlice_AWfmu269_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WtNQ5fJV, 0, m, &cSlice_WtNQ5fJV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yTR3rBOm, 0, m, &cSlice_yTR3rBOm_sendMessage);
}

void Heavy_Echomatica::cMsg_MFfrcO4P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_r12keREQ, 0, m, &cSlice_r12keREQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5oYLmRGP, 0, m, &cSlice_5oYLmRGP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_TLlS2Uae, 0, m, &cSlice_TLlS2Uae_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X1wIDLdb, 0, m, &cSlice_X1wIDLdb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G5addUE7, 0, m, &cSlice_G5addUE7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XGrvbTDt, 0, m, &cSlice_XGrvbTDt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9mZWdqE, 0, m, &cSlice_G9mZWdqE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1VdtVMwJ, 0, m, &cSlice_1VdtVMwJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cJYVVhCX, 0, m, &cSlice_cJYVVhCX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dEoEbY7F, 0, m, &cSlice_dEoEbY7F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XYpP5HtU, 0, m, &cSlice_XYpP5HtU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pRhsLH3u, 0, m, &cSlice_pRhsLH3u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cQz0g3eo, 0, m, &cSlice_cQz0g3eo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jzcVOQLZ, 0, m, &cSlice_jzcVOQLZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGwUXvv1, 0, m, &cSlice_zGwUXvv1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Nv3qGxSN, 0, m, &cSlice_Nv3qGxSN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UvRrj8h5, 0, m, &cSlice_UvRrj8h5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8vePuzAy, 0, m, &cSlice_8vePuzAy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ruJAuLb8, 0, m, &cSlice_ruJAuLb8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2sgd50tj, 0, m, &cSlice_2sgd50tj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aPntbgUM, 0, m, &cSlice_aPntbgUM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EY3oX223, 0, m, &cSlice_EY3oX223_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IgB5gpdN, 0, m, &cSlice_IgB5gpdN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0PU8H6y, 0, m, &cSlice_A0PU8H6y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_sxylKaZ7, 0, m, &cSlice_sxylKaZ7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AWfmu269, 0, m, &cSlice_AWfmu269_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WtNQ5fJV, 0, m, &cSlice_WtNQ5fJV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yTR3rBOm, 0, m, &cSlice_yTR3rBOm_sendMessage);
}

void Heavy_Echomatica::cMsg_iHWADofs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_r12keREQ, 0, m, &cSlice_r12keREQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5oYLmRGP, 0, m, &cSlice_5oYLmRGP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_TLlS2Uae, 0, m, &cSlice_TLlS2Uae_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X1wIDLdb, 0, m, &cSlice_X1wIDLdb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G5addUE7, 0, m, &cSlice_G5addUE7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XGrvbTDt, 0, m, &cSlice_XGrvbTDt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9mZWdqE, 0, m, &cSlice_G9mZWdqE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1VdtVMwJ, 0, m, &cSlice_1VdtVMwJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cJYVVhCX, 0, m, &cSlice_cJYVVhCX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dEoEbY7F, 0, m, &cSlice_dEoEbY7F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XYpP5HtU, 0, m, &cSlice_XYpP5HtU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pRhsLH3u, 0, m, &cSlice_pRhsLH3u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cQz0g3eo, 0, m, &cSlice_cQz0g3eo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jzcVOQLZ, 0, m, &cSlice_jzcVOQLZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGwUXvv1, 0, m, &cSlice_zGwUXvv1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Nv3qGxSN, 0, m, &cSlice_Nv3qGxSN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UvRrj8h5, 0, m, &cSlice_UvRrj8h5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8vePuzAy, 0, m, &cSlice_8vePuzAy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ruJAuLb8, 0, m, &cSlice_ruJAuLb8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2sgd50tj, 0, m, &cSlice_2sgd50tj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aPntbgUM, 0, m, &cSlice_aPntbgUM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EY3oX223, 0, m, &cSlice_EY3oX223_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IgB5gpdN, 0, m, &cSlice_IgB5gpdN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0PU8H6y, 0, m, &cSlice_A0PU8H6y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_sxylKaZ7, 0, m, &cSlice_sxylKaZ7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AWfmu269, 0, m, &cSlice_AWfmu269_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WtNQ5fJV, 0, m, &cSlice_WtNQ5fJV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yTR3rBOm, 0, m, &cSlice_yTR3rBOm_sendMessage);
}

void Heavy_Echomatica::cMsg_Tea3mqQr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_r12keREQ, 0, m, &cSlice_r12keREQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5oYLmRGP, 0, m, &cSlice_5oYLmRGP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_TLlS2Uae, 0, m, &cSlice_TLlS2Uae_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X1wIDLdb, 0, m, &cSlice_X1wIDLdb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G5addUE7, 0, m, &cSlice_G5addUE7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XGrvbTDt, 0, m, &cSlice_XGrvbTDt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9mZWdqE, 0, m, &cSlice_G9mZWdqE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1VdtVMwJ, 0, m, &cSlice_1VdtVMwJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cJYVVhCX, 0, m, &cSlice_cJYVVhCX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dEoEbY7F, 0, m, &cSlice_dEoEbY7F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XYpP5HtU, 0, m, &cSlice_XYpP5HtU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pRhsLH3u, 0, m, &cSlice_pRhsLH3u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cQz0g3eo, 0, m, &cSlice_cQz0g3eo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jzcVOQLZ, 0, m, &cSlice_jzcVOQLZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGwUXvv1, 0, m, &cSlice_zGwUXvv1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Nv3qGxSN, 0, m, &cSlice_Nv3qGxSN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UvRrj8h5, 0, m, &cSlice_UvRrj8h5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8vePuzAy, 0, m, &cSlice_8vePuzAy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ruJAuLb8, 0, m, &cSlice_ruJAuLb8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2sgd50tj, 0, m, &cSlice_2sgd50tj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aPntbgUM, 0, m, &cSlice_aPntbgUM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EY3oX223, 0, m, &cSlice_EY3oX223_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IgB5gpdN, 0, m, &cSlice_IgB5gpdN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0PU8H6y, 0, m, &cSlice_A0PU8H6y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_sxylKaZ7, 0, m, &cSlice_sxylKaZ7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AWfmu269, 0, m, &cSlice_AWfmu269_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WtNQ5fJV, 0, m, &cSlice_WtNQ5fJV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yTR3rBOm, 0, m, &cSlice_yTR3rBOm_sendMessage);
}

void Heavy_Echomatica::cMsg_oYxqPC69_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_r12keREQ, 0, m, &cSlice_r12keREQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5oYLmRGP, 0, m, &cSlice_5oYLmRGP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_TLlS2Uae, 0, m, &cSlice_TLlS2Uae_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X1wIDLdb, 0, m, &cSlice_X1wIDLdb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G5addUE7, 0, m, &cSlice_G5addUE7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XGrvbTDt, 0, m, &cSlice_XGrvbTDt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9mZWdqE, 0, m, &cSlice_G9mZWdqE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1VdtVMwJ, 0, m, &cSlice_1VdtVMwJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cJYVVhCX, 0, m, &cSlice_cJYVVhCX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dEoEbY7F, 0, m, &cSlice_dEoEbY7F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XYpP5HtU, 0, m, &cSlice_XYpP5HtU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pRhsLH3u, 0, m, &cSlice_pRhsLH3u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cQz0g3eo, 0, m, &cSlice_cQz0g3eo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jzcVOQLZ, 0, m, &cSlice_jzcVOQLZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGwUXvv1, 0, m, &cSlice_zGwUXvv1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Nv3qGxSN, 0, m, &cSlice_Nv3qGxSN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UvRrj8h5, 0, m, &cSlice_UvRrj8h5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8vePuzAy, 0, m, &cSlice_8vePuzAy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ruJAuLb8, 0, m, &cSlice_ruJAuLb8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2sgd50tj, 0, m, &cSlice_2sgd50tj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aPntbgUM, 0, m, &cSlice_aPntbgUM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EY3oX223, 0, m, &cSlice_EY3oX223_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IgB5gpdN, 0, m, &cSlice_IgB5gpdN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0PU8H6y, 0, m, &cSlice_A0PU8H6y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_sxylKaZ7, 0, m, &cSlice_sxylKaZ7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AWfmu269, 0, m, &cSlice_AWfmu269_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WtNQ5fJV, 0, m, &cSlice_WtNQ5fJV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yTR3rBOm, 0, m, &cSlice_yTR3rBOm_sendMessage);
}

void Heavy_Echomatica::cMsg_5Hh2GNFv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_r12keREQ, 0, m, &cSlice_r12keREQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5oYLmRGP, 0, m, &cSlice_5oYLmRGP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_TLlS2Uae, 0, m, &cSlice_TLlS2Uae_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X1wIDLdb, 0, m, &cSlice_X1wIDLdb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G5addUE7, 0, m, &cSlice_G5addUE7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XGrvbTDt, 0, m, &cSlice_XGrvbTDt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9mZWdqE, 0, m, &cSlice_G9mZWdqE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1VdtVMwJ, 0, m, &cSlice_1VdtVMwJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cJYVVhCX, 0, m, &cSlice_cJYVVhCX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dEoEbY7F, 0, m, &cSlice_dEoEbY7F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XYpP5HtU, 0, m, &cSlice_XYpP5HtU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pRhsLH3u, 0, m, &cSlice_pRhsLH3u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cQz0g3eo, 0, m, &cSlice_cQz0g3eo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jzcVOQLZ, 0, m, &cSlice_jzcVOQLZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGwUXvv1, 0, m, &cSlice_zGwUXvv1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Nv3qGxSN, 0, m, &cSlice_Nv3qGxSN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UvRrj8h5, 0, m, &cSlice_UvRrj8h5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8vePuzAy, 0, m, &cSlice_8vePuzAy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ruJAuLb8, 0, m, &cSlice_ruJAuLb8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2sgd50tj, 0, m, &cSlice_2sgd50tj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aPntbgUM, 0, m, &cSlice_aPntbgUM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EY3oX223, 0, m, &cSlice_EY3oX223_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IgB5gpdN, 0, m, &cSlice_IgB5gpdN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0PU8H6y, 0, m, &cSlice_A0PU8H6y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_sxylKaZ7, 0, m, &cSlice_sxylKaZ7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AWfmu269, 0, m, &cSlice_AWfmu269_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WtNQ5fJV, 0, m, &cSlice_WtNQ5fJV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yTR3rBOm, 0, m, &cSlice_yTR3rBOm_sendMessage);
}

void Heavy_Echomatica::cMsg_pmMzZ9En_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_r12keREQ, 0, m, &cSlice_r12keREQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5oYLmRGP, 0, m, &cSlice_5oYLmRGP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_TLlS2Uae, 0, m, &cSlice_TLlS2Uae_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X1wIDLdb, 0, m, &cSlice_X1wIDLdb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G5addUE7, 0, m, &cSlice_G5addUE7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XGrvbTDt, 0, m, &cSlice_XGrvbTDt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9mZWdqE, 0, m, &cSlice_G9mZWdqE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1VdtVMwJ, 0, m, &cSlice_1VdtVMwJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cJYVVhCX, 0, m, &cSlice_cJYVVhCX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dEoEbY7F, 0, m, &cSlice_dEoEbY7F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XYpP5HtU, 0, m, &cSlice_XYpP5HtU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pRhsLH3u, 0, m, &cSlice_pRhsLH3u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cQz0g3eo, 0, m, &cSlice_cQz0g3eo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jzcVOQLZ, 0, m, &cSlice_jzcVOQLZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGwUXvv1, 0, m, &cSlice_zGwUXvv1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Nv3qGxSN, 0, m, &cSlice_Nv3qGxSN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UvRrj8h5, 0, m, &cSlice_UvRrj8h5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8vePuzAy, 0, m, &cSlice_8vePuzAy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ruJAuLb8, 0, m, &cSlice_ruJAuLb8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2sgd50tj, 0, m, &cSlice_2sgd50tj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aPntbgUM, 0, m, &cSlice_aPntbgUM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EY3oX223, 0, m, &cSlice_EY3oX223_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IgB5gpdN, 0, m, &cSlice_IgB5gpdN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0PU8H6y, 0, m, &cSlice_A0PU8H6y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_sxylKaZ7, 0, m, &cSlice_sxylKaZ7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AWfmu269, 0, m, &cSlice_AWfmu269_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WtNQ5fJV, 0, m, &cSlice_WtNQ5fJV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yTR3rBOm, 0, m, &cSlice_yTR3rBOm_sendMessage);
}

void Heavy_Echomatica::cMsg_PjydAYOt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_r12keREQ, 0, m, &cSlice_r12keREQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5oYLmRGP, 0, m, &cSlice_5oYLmRGP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_TLlS2Uae, 0, m, &cSlice_TLlS2Uae_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X1wIDLdb, 0, m, &cSlice_X1wIDLdb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G5addUE7, 0, m, &cSlice_G5addUE7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XGrvbTDt, 0, m, &cSlice_XGrvbTDt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9mZWdqE, 0, m, &cSlice_G9mZWdqE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1VdtVMwJ, 0, m, &cSlice_1VdtVMwJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cJYVVhCX, 0, m, &cSlice_cJYVVhCX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dEoEbY7F, 0, m, &cSlice_dEoEbY7F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XYpP5HtU, 0, m, &cSlice_XYpP5HtU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pRhsLH3u, 0, m, &cSlice_pRhsLH3u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cQz0g3eo, 0, m, &cSlice_cQz0g3eo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jzcVOQLZ, 0, m, &cSlice_jzcVOQLZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGwUXvv1, 0, m, &cSlice_zGwUXvv1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Nv3qGxSN, 0, m, &cSlice_Nv3qGxSN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UvRrj8h5, 0, m, &cSlice_UvRrj8h5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8vePuzAy, 0, m, &cSlice_8vePuzAy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ruJAuLb8, 0, m, &cSlice_ruJAuLb8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2sgd50tj, 0, m, &cSlice_2sgd50tj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aPntbgUM, 0, m, &cSlice_aPntbgUM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EY3oX223, 0, m, &cSlice_EY3oX223_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IgB5gpdN, 0, m, &cSlice_IgB5gpdN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0PU8H6y, 0, m, &cSlice_A0PU8H6y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_sxylKaZ7, 0, m, &cSlice_sxylKaZ7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AWfmu269, 0, m, &cSlice_AWfmu269_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WtNQ5fJV, 0, m, &cSlice_WtNQ5fJV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yTR3rBOm, 0, m, &cSlice_yTR3rBOm_sendMessage);
}

void Heavy_Echomatica::cMsg_xjWNPafg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_r12keREQ, 0, m, &cSlice_r12keREQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5oYLmRGP, 0, m, &cSlice_5oYLmRGP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_TLlS2Uae, 0, m, &cSlice_TLlS2Uae_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X1wIDLdb, 0, m, &cSlice_X1wIDLdb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G5addUE7, 0, m, &cSlice_G5addUE7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XGrvbTDt, 0, m, &cSlice_XGrvbTDt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9mZWdqE, 0, m, &cSlice_G9mZWdqE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1VdtVMwJ, 0, m, &cSlice_1VdtVMwJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cJYVVhCX, 0, m, &cSlice_cJYVVhCX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dEoEbY7F, 0, m, &cSlice_dEoEbY7F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XYpP5HtU, 0, m, &cSlice_XYpP5HtU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pRhsLH3u, 0, m, &cSlice_pRhsLH3u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cQz0g3eo, 0, m, &cSlice_cQz0g3eo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jzcVOQLZ, 0, m, &cSlice_jzcVOQLZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGwUXvv1, 0, m, &cSlice_zGwUXvv1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Nv3qGxSN, 0, m, &cSlice_Nv3qGxSN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UvRrj8h5, 0, m, &cSlice_UvRrj8h5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8vePuzAy, 0, m, &cSlice_8vePuzAy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ruJAuLb8, 0, m, &cSlice_ruJAuLb8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2sgd50tj, 0, m, &cSlice_2sgd50tj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aPntbgUM, 0, m, &cSlice_aPntbgUM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EY3oX223, 0, m, &cSlice_EY3oX223_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IgB5gpdN, 0, m, &cSlice_IgB5gpdN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0PU8H6y, 0, m, &cSlice_A0PU8H6y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_sxylKaZ7, 0, m, &cSlice_sxylKaZ7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AWfmu269, 0, m, &cSlice_AWfmu269_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WtNQ5fJV, 0, m, &cSlice_WtNQ5fJV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yTR3rBOm, 0, m, &cSlice_yTR3rBOm_sendMessage);
}

void Heavy_Echomatica::cMsg_YsO4Q9oq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_r12keREQ, 0, m, &cSlice_r12keREQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5oYLmRGP, 0, m, &cSlice_5oYLmRGP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_TLlS2Uae, 0, m, &cSlice_TLlS2Uae_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X1wIDLdb, 0, m, &cSlice_X1wIDLdb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G5addUE7, 0, m, &cSlice_G5addUE7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XGrvbTDt, 0, m, &cSlice_XGrvbTDt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9mZWdqE, 0, m, &cSlice_G9mZWdqE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1VdtVMwJ, 0, m, &cSlice_1VdtVMwJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cJYVVhCX, 0, m, &cSlice_cJYVVhCX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dEoEbY7F, 0, m, &cSlice_dEoEbY7F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XYpP5HtU, 0, m, &cSlice_XYpP5HtU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pRhsLH3u, 0, m, &cSlice_pRhsLH3u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cQz0g3eo, 0, m, &cSlice_cQz0g3eo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jzcVOQLZ, 0, m, &cSlice_jzcVOQLZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGwUXvv1, 0, m, &cSlice_zGwUXvv1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Nv3qGxSN, 0, m, &cSlice_Nv3qGxSN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UvRrj8h5, 0, m, &cSlice_UvRrj8h5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8vePuzAy, 0, m, &cSlice_8vePuzAy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ruJAuLb8, 0, m, &cSlice_ruJAuLb8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2sgd50tj, 0, m, &cSlice_2sgd50tj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aPntbgUM, 0, m, &cSlice_aPntbgUM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EY3oX223, 0, m, &cSlice_EY3oX223_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IgB5gpdN, 0, m, &cSlice_IgB5gpdN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0PU8H6y, 0, m, &cSlice_A0PU8H6y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_sxylKaZ7, 0, m, &cSlice_sxylKaZ7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AWfmu269, 0, m, &cSlice_AWfmu269_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WtNQ5fJV, 0, m, &cSlice_WtNQ5fJV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yTR3rBOm, 0, m, &cSlice_yTR3rBOm_sendMessage);
}

void Heavy_Echomatica::cMsg_aJOVr725_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_r12keREQ, 0, m, &cSlice_r12keREQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5oYLmRGP, 0, m, &cSlice_5oYLmRGP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_TLlS2Uae, 0, m, &cSlice_TLlS2Uae_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X1wIDLdb, 0, m, &cSlice_X1wIDLdb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G5addUE7, 0, m, &cSlice_G5addUE7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XGrvbTDt, 0, m, &cSlice_XGrvbTDt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9mZWdqE, 0, m, &cSlice_G9mZWdqE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1VdtVMwJ, 0, m, &cSlice_1VdtVMwJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cJYVVhCX, 0, m, &cSlice_cJYVVhCX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dEoEbY7F, 0, m, &cSlice_dEoEbY7F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XYpP5HtU, 0, m, &cSlice_XYpP5HtU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pRhsLH3u, 0, m, &cSlice_pRhsLH3u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cQz0g3eo, 0, m, &cSlice_cQz0g3eo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jzcVOQLZ, 0, m, &cSlice_jzcVOQLZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGwUXvv1, 0, m, &cSlice_zGwUXvv1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Nv3qGxSN, 0, m, &cSlice_Nv3qGxSN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UvRrj8h5, 0, m, &cSlice_UvRrj8h5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8vePuzAy, 0, m, &cSlice_8vePuzAy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ruJAuLb8, 0, m, &cSlice_ruJAuLb8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2sgd50tj, 0, m, &cSlice_2sgd50tj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aPntbgUM, 0, m, &cSlice_aPntbgUM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EY3oX223, 0, m, &cSlice_EY3oX223_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IgB5gpdN, 0, m, &cSlice_IgB5gpdN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0PU8H6y, 0, m, &cSlice_A0PU8H6y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_sxylKaZ7, 0, m, &cSlice_sxylKaZ7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AWfmu269, 0, m, &cSlice_AWfmu269_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WtNQ5fJV, 0, m, &cSlice_WtNQ5fJV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yTR3rBOm, 0, m, &cSlice_yTR3rBOm_sendMessage);
}

void Heavy_Echomatica::cMsg_1tadkJqE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_r12keREQ, 0, m, &cSlice_r12keREQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5oYLmRGP, 0, m, &cSlice_5oYLmRGP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_TLlS2Uae, 0, m, &cSlice_TLlS2Uae_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X1wIDLdb, 0, m, &cSlice_X1wIDLdb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G5addUE7, 0, m, &cSlice_G5addUE7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XGrvbTDt, 0, m, &cSlice_XGrvbTDt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9mZWdqE, 0, m, &cSlice_G9mZWdqE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1VdtVMwJ, 0, m, &cSlice_1VdtVMwJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cJYVVhCX, 0, m, &cSlice_cJYVVhCX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dEoEbY7F, 0, m, &cSlice_dEoEbY7F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XYpP5HtU, 0, m, &cSlice_XYpP5HtU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_pRhsLH3u, 0, m, &cSlice_pRhsLH3u_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cQz0g3eo, 0, m, &cSlice_cQz0g3eo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jzcVOQLZ, 0, m, &cSlice_jzcVOQLZ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zGwUXvv1, 0, m, &cSlice_zGwUXvv1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Nv3qGxSN, 0, m, &cSlice_Nv3qGxSN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UvRrj8h5, 0, m, &cSlice_UvRrj8h5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8vePuzAy, 0, m, &cSlice_8vePuzAy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ruJAuLb8, 0, m, &cSlice_ruJAuLb8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2sgd50tj, 0, m, &cSlice_2sgd50tj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aPntbgUM, 0, m, &cSlice_aPntbgUM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EY3oX223, 0, m, &cSlice_EY3oX223_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_IgB5gpdN, 0, m, &cSlice_IgB5gpdN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0PU8H6y, 0, m, &cSlice_A0PU8H6y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_sxylKaZ7, 0, m, &cSlice_sxylKaZ7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AWfmu269, 0, m, &cSlice_AWfmu269_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WtNQ5fJV, 0, m, &cSlice_WtNQ5fJV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yTR3rBOm, 0, m, &cSlice_yTR3rBOm_sendMessage);
}

void Heavy_Echomatica::cMsg_nPu8mj5g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_nfMLXhZt_sendMessage);
}

void Heavy_Echomatica::cSystem_nfMLXhZt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_lW2aAUQ4_sendMessage);
}

void Heavy_Echomatica::cVar_KVeErgyu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ruVO0Jwl_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_JqYNi8Fh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_cO8Tu2Cm_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_65qqbOr5, m);
}

void Heavy_Echomatica::cBinop_lW2aAUQ4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Dhh6Uxg9, m);
}

void Heavy_Echomatica::cMsg_ruVO0Jwl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_JqYNi8Fh_sendMessage);
}

void Heavy_Echomatica::cBinop_cO8Tu2Cm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_oeLx8pQM, m);
}

void Heavy_Echomatica::cMsg_gJ5hSktW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_stKfmxNC_sendMessage);
}

void Heavy_Echomatica::cSystem_stKfmxNC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_tkAyLlgr_sendMessage);
}

void Heavy_Echomatica::cVar_ZV4oAFyP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_iRhgLRwL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_Gvmtitid_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_VBFBNVHX_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_LxnhQd06, m);
}

void Heavy_Echomatica::cBinop_tkAyLlgr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_FXfrZoyJ, m);
}

void Heavy_Echomatica::cMsg_iRhgLRwL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Gvmtitid_sendMessage);
}

void Heavy_Echomatica::cBinop_VBFBNVHX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_n8kcOb2X, m);
}

void Heavy_Echomatica::cVar_D05wnHDw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_B9iCExGX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_cnHOFXGQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_xzTmmWfD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_S5cngU6w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_1fLGwaeJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_Zq2r6BWc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_xvFvkMQ9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_UKylA7q2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_EuZ3lH8F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_pZRw04c6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_1Rc9zeVG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cMsg_ct7xYBn4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_08tI39lq_sendMessage);
}

void Heavy_Echomatica::cSystem_08tI39lq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_yITLG9hc_sendMessage);
}

void Heavy_Echomatica::cDelay_WrubTftm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_WrubTftm, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_mwXWubJA, 0, m, &cDelay_mwXWubJA_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_WrubTftm, 0, m, &cDelay_WrubTftm_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_6tigLX68, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_mwXWubJA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_mwXWubJA, m);
  cMsg_mUnHYs05_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_JEhdo30b_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_HZmVXnze_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_O6oPww3l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ryCuMqt7_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_nkI8VXre_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BduPCf3a_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_WrubTftm, 2, m, &cDelay_WrubTftm_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DhdW1aMT_sendMessage);
}

void Heavy_Echomatica::cMsg_ryCuMqt7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_nkI8VXre, 0, m, &hTable_nkI8VXre_sendMessage);
}

void Heavy_Echomatica::cBinop_yITLG9hc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5000.0f, 0, m, &cBinop_O6oPww3l_sendMessage);
}

void Heavy_Echomatica::cMsg_mUnHYs05_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_nkI8VXre, 0, m, &hTable_nkI8VXre_sendMessage);
}

void Heavy_Echomatica::cCast_DhdW1aMT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_WrubTftm, 0, m, &cDelay_WrubTftm_sendMessage);
}

void Heavy_Echomatica::cMsg_BduPCf3a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_mwXWubJA, 2, m, &cDelay_mwXWubJA_sendMessage);
}

void Heavy_Echomatica::cMsg_HZmVXnze_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_6tigLX68, 1, m, NULL);
}

void Heavy_Echomatica::cPack_HmHGGlwd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_YcrtMO0L, 0, m, NULL);
}

void Heavy_Echomatica::cPack_WHe03hmR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_PyvdmH2o, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_q2QRaybF, 0, m, &cVar_q2QRaybF_sendMessage);
}

void Heavy_Echomatica::cPack_aHjML7tJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_DlCtcnXu, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_VI35ktWn, 0, m, &cVar_VI35ktWn_sendMessage);
}

void Heavy_Echomatica::cPack_p3nWI5vd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_am1qV0C2, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_HPWKY1E5, 0, m, &cVar_HPWKY1E5_sendMessage);
}

void Heavy_Echomatica::cPack_VDgmIuWy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_eUM4NL5k, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_3NqllOZx, 0, m, &cVar_3NqllOZx_sendMessage);
}

void Heavy_Echomatica::cPack_HYPZG0Io_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_KyP01aKm, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_7SWzQ8e4, 0, m, &cVar_7SWzQ8e4_sendMessage);
}

void Heavy_Echomatica::cPack_hEgG2SvF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_1pKg7htv, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_Ko3N0oWS, 0, m, &cVar_Ko3N0oWS_sendMessage);
}

void Heavy_Echomatica::cVar_Va82qvXZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Qt83FmDz, HV_BINOP_MULTIPLY, 0, m, &cBinop_Qt83FmDz_sendMessage);
}

void Heavy_Echomatica::cMsg_WRrkYBtg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_MEv7kLYv_sendMessage);
}

void Heavy_Echomatica::cSystem_MEv7kLYv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zwxBU6Ez_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_Qt83FmDz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_0odlLZlX_sendMessage);
}

void Heavy_Echomatica::cBinop_DbrUh8W3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Qt83FmDz, HV_BINOP_MULTIPLY, 1, m, &cBinop_Qt83FmDz_sendMessage);
}

void Heavy_Echomatica::cMsg_zwxBU6Ez_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_DbrUh8W3_sendMessage);
}

void Heavy_Echomatica::cBinop_0odlLZlX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_dtC9e35g_sendMessage);
}

void Heavy_Echomatica::cBinop_dtC9e35g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_ERRq387Z_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_6lctTkIi, m);
}

void Heavy_Echomatica::cBinop_ERRq387Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_LVvZuEWj, m);
}

void Heavy_Echomatica::cSlice_r12keREQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_8vPoWo8C_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_5oYLmRGP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_0NcYFX0k_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_TLlS2Uae_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ksNcjn9v_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_X1wIDLdb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Wb3ClGMW_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_G5addUE7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_6LbJsCZC_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_XGrvbTDt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_jVXj30A3_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_G9mZWdqE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_gd1RjKnB_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_1VdtVMwJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_P43LCs7k_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_cJYVVhCX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_LsAtFdIQ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_dEoEbY7F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_3uMgPzkQ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_XYpP5HtU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_2jaG2jDU_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_pRhsLH3u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_l16tresF_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_cQz0g3eo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_XBt6zefB_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_jzcVOQLZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_B9taY4NZ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_zGwUXvv1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_YfUp3OHL_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_Nv3qGxSN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_59iiscQ6_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_UvRrj8h5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Fjt1MimN_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_8vePuzAy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_diJZAA7P_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_ruJAuLb8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_OlYtflVK_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_2sgd50tj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_gVEQWtAy_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_aPntbgUM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_F0O0d0QN_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_EY3oX223_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_mjKR2wnb_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_IgB5gpdN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_nwbPc4xu_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_A0PU8H6y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_PhwNfBni_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_sxylKaZ7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Fi741jOt_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_AWfmu269_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_NVuphVk3_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_WtNQ5fJV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_SKuBC0Z8_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_yTR3rBOm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_5jxfQuHF_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_WH5ctrPT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_gwYWLt4D_sendMessage);
}

void Heavy_Echomatica::cBinop_gwYWLt4D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_LaE9McMK_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_kQVfHS6K_sendMessage);
}

void Heavy_Echomatica::cVar_bCKJqleF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_hmeUivr4_sendMessage);
}

void Heavy_Echomatica::cMsg_LvN090U9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_qH3pvDd8_sendMessage);
}

void Heavy_Echomatica::cSystem_qH3pvDd8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OlUUxFGq, HV_BINOP_DIVIDE, 1, m, &cBinop_OlUUxFGq_sendMessage);
}

void Heavy_Echomatica::cBinop_LaE9McMK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_A4vLJ44p_sendMessage);
}

void Heavy_Echomatica::cBinop_A4vLJ44p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_zEmBGI0V, m);
}

void Heavy_Echomatica::cMsg_3lZ2fzJd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_cVt8tViX_sendMessage);
}

void Heavy_Echomatica::cBinop_cVt8tViX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_WH5ctrPT_sendMessage);
}

void Heavy_Echomatica::cBinop_kQVfHS6K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_snYUH0bg, m);
}

void Heavy_Echomatica::cBinop_hmeUivr4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_SHgnBFFR_sendMessage);
}

void Heavy_Echomatica::cBinop_SHgnBFFR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OlUUxFGq, HV_BINOP_DIVIDE, 0, m, &cBinop_OlUUxFGq_sendMessage);
}

void Heavy_Echomatica::cBinop_OlUUxFGq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3lZ2fzJd_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_Gm3EFsIE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_4mkzhzu9_sendMessage);
}

void Heavy_Echomatica::cBinop_4mkzhzu9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_7PrUuXZU_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_0agJ5gty_sendMessage);
}

void Heavy_Echomatica::cVar_85cnlEq9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_3vdeKpFS_sendMessage);
}

void Heavy_Echomatica::cMsg_iDv2koFn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_XWvQ1at7_sendMessage);
}

void Heavy_Echomatica::cSystem_XWvQ1at7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jdteD8uU, HV_BINOP_DIVIDE, 1, m, &cBinop_jdteD8uU_sendMessage);
}

void Heavy_Echomatica::cBinop_7PrUuXZU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_qS417DQC_sendMessage);
}

void Heavy_Echomatica::cBinop_qS417DQC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_QmJf4ghS, m);
}

void Heavy_Echomatica::cMsg_wxCOfcOd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_ORmYJUy9_sendMessage);
}

void Heavy_Echomatica::cBinop_ORmYJUy9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_Gm3EFsIE_sendMessage);
}

void Heavy_Echomatica::cBinop_0agJ5gty_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_IUrRv2JH, m);
}

void Heavy_Echomatica::cBinop_3vdeKpFS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_Ogp6A2OA_sendMessage);
}

void Heavy_Echomatica::cBinop_Ogp6A2OA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jdteD8uU, HV_BINOP_DIVIDE, 0, m, &cBinop_jdteD8uU_sendMessage);
}

void Heavy_Echomatica::cBinop_jdteD8uU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wxCOfcOd_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_RPjg939q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_TCCsZzVq_sendMessage);
}

void Heavy_Echomatica::cBinop_TCCsZzVq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_KfoFeHdf_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_GoDwxP50_sendMessage);
}

void Heavy_Echomatica::cVar_wlZCYli7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_cSgaZ9IY_sendMessage);
}

void Heavy_Echomatica::cMsg_C0Z0whyE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_TkoJuEH1_sendMessage);
}

void Heavy_Echomatica::cSystem_TkoJuEH1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FlSS2jdt, HV_BINOP_DIVIDE, 1, m, &cBinop_FlSS2jdt_sendMessage);
}

void Heavy_Echomatica::cBinop_KfoFeHdf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_rKD2Entx_sendMessage);
}

void Heavy_Echomatica::cBinop_rKD2Entx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_3D5ShS7v, m);
}

void Heavy_Echomatica::cMsg_0EXPr0IP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_gjeP5zW8_sendMessage);
}

void Heavy_Echomatica::cBinop_gjeP5zW8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_RPjg939q_sendMessage);
}

void Heavy_Echomatica::cBinop_GoDwxP50_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_2MLj7OeY, m);
}

void Heavy_Echomatica::cBinop_cSgaZ9IY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_iI4elsTv_sendMessage);
}

void Heavy_Echomatica::cBinop_iI4elsTv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FlSS2jdt, HV_BINOP_DIVIDE, 0, m, &cBinop_FlSS2jdt_sendMessage);
}

void Heavy_Echomatica::cBinop_FlSS2jdt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0EXPr0IP_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_XWEf3ojk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Wqs0cflJ, HV_BINOP_MULTIPLY, 0, m, &cBinop_Wqs0cflJ_sendMessage);
}

void Heavy_Echomatica::cMsg_QILVe5Bs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ggO2fW17_sendMessage);
}

void Heavy_Echomatica::cSystem_ggO2fW17_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_iuONS655_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_Wqs0cflJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_azcToRr5_sendMessage);
}

void Heavy_Echomatica::cBinop_kSaK2gki_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Wqs0cflJ, HV_BINOP_MULTIPLY, 1, m, &cBinop_Wqs0cflJ_sendMessage);
}

void Heavy_Echomatica::cMsg_iuONS655_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_kSaK2gki_sendMessage);
}

void Heavy_Echomatica::cBinop_azcToRr5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_j7kUF0RP_sendMessage);
}

void Heavy_Echomatica::cBinop_j7kUF0RP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_KiTvMv0b_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_glJFCrvg, m);
}

void Heavy_Echomatica::cBinop_KiTvMv0b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_zVL5Ptts, m);
}

void Heavy_Echomatica::cVar_KBYnSw0N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KfZuCSvo, HV_BINOP_MULTIPLY, 0, m, &cBinop_KfZuCSvo_sendMessage);
}

void Heavy_Echomatica::cMsg_v6agFa5G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_fiQUtQac_sendMessage);
}

void Heavy_Echomatica::cSystem_fiQUtQac_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_atPTFrHl_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_KfZuCSvo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_UmpVOsW5_sendMessage);
}

void Heavy_Echomatica::cBinop_e7MrBL5Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KfZuCSvo, HV_BINOP_MULTIPLY, 1, m, &cBinop_KfZuCSvo_sendMessage);
}

void Heavy_Echomatica::cMsg_atPTFrHl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_e7MrBL5Q_sendMessage);
}

void Heavy_Echomatica::cBinop_UmpVOsW5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_JPcXP2mC_sendMessage);
}

void Heavy_Echomatica::cBinop_JPcXP2mC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_K4rkuIEA_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_j9eeM13P, m);
}

void Heavy_Echomatica::cBinop_K4rkuIEA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_V8mtRgoR, m);
}

void Heavy_Echomatica::cVar_ZpeIWX8M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hg9wEL1v, HV_BINOP_MULTIPLY, 0, m, &cBinop_hg9wEL1v_sendMessage);
}

void Heavy_Echomatica::cMsg_vzpn5epe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_uUWFB0vX_sendMessage);
}

void Heavy_Echomatica::cSystem_uUWFB0vX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wZqOtbFp_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_hg9wEL1v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_WMYIzIx7_sendMessage);
}

void Heavy_Echomatica::cBinop_zruB39X2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hg9wEL1v, HV_BINOP_MULTIPLY, 1, m, &cBinop_hg9wEL1v_sendMessage);
}

void Heavy_Echomatica::cMsg_wZqOtbFp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_zruB39X2_sendMessage);
}

void Heavy_Echomatica::cBinop_WMYIzIx7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_cI2fB5Uu_sendMessage);
}

void Heavy_Echomatica::cBinop_cI2fB5Uu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_IDAemSBT_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_5Y3UKj5r, m);
}

void Heavy_Echomatica::cBinop_IDAemSBT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_lNcbtWBe, m);
}

void Heavy_Echomatica::cMsg_hSCbmRe2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_cSiN9HEz_sendMessage);
}

void Heavy_Echomatica::cSystem_cSiN9HEz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rvYn9uxu, HV_BINOP_DIVIDE, 1, m, &cBinop_rvYn9uxu_sendMessage);
}

void Heavy_Echomatica::cVar_4Nqube6i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_OZOdIBlp_sendMessage);
}

void Heavy_Echomatica::cVar_V4MQY4eg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.001f, 0, m, &cBinop_BsfH1Ufc_sendMessage);
}

void Heavy_Echomatica::cUnop_4DKpnLZd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_1N7zPR65_sendMessage);
}

void Heavy_Echomatica::cBinop_rvYn9uxu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_I2jOcDG6, HV_BINOP_MULTIPLY, 1, m, &cBinop_I2jOcDG6_sendMessage);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_4DKpnLZd_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ng8Cru3M, HV_BINOP_DIVIDE, 0, m, &cBinop_ng8Cru3M_sendMessage);
}

void Heavy_Echomatica::cBinop_OZOdIBlp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rvYn9uxu, HV_BINOP_DIVIDE, 0, m, &cBinop_rvYn9uxu_sendMessage);
}

void Heavy_Echomatica::cBinop_ng8Cru3M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_8xPPSk2e_sendMessage);
}

void Heavy_Echomatica::cBinop_j0ew9POk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_T2m6PFEn_sendMessage);
}

void Heavy_Echomatica::cBinop_T2m6PFEn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_5JXPOVOT_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_TelyXW7Y, HV_BINOP_MULTIPLY, 0, m, &cBinop_TelyXW7Y_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_I2jOcDG6, HV_BINOP_MULTIPLY, 0, m, &cBinop_I2jOcDG6_sendMessage);
}

void Heavy_Echomatica::cBinop_1N7zPR65_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TelyXW7Y, HV_BINOP_MULTIPLY, 1, m, &cBinop_TelyXW7Y_sendMessage);
}

void Heavy_Echomatica::cBinop_TelyXW7Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_xnsi00n3_sendMessage);
}

void Heavy_Echomatica::cCast_sqDPnILY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4Nqube6i, 0, m, &cVar_4Nqube6i_sendMessage);
}

void Heavy_Echomatica::cBinop_5dZHbSfo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_2dr1oQoz_sendMessage);
}

void Heavy_Echomatica::cBinop_2dr1oQoz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_Cr791gQK, 5, m);
}

void Heavy_Echomatica::cBinop_xnsi00n3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_Cr791gQK, 4, m);
}

void Heavy_Echomatica::cBinop_cfG0oTnc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aYc7pqnQ, HV_BINOP_MULTIPLY, 0, m, &cBinop_aYc7pqnQ_sendMessage);
}

void Heavy_Echomatica::cBinop_I2jOcDG6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AxzQqMMw, HV_BINOP_ADD, 1, m, &cBinop_AxzQqMMw_sendMessage);
}

void Heavy_Echomatica::cBinop_5JXPOVOT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_5dZHbSfo_sendMessage);
}

void Heavy_Echomatica::cBinop_AxzQqMMw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aYc7pqnQ, HV_BINOP_MULTIPLY, 1, m, &cBinop_aYc7pqnQ_sendMessage);
}

void Heavy_Echomatica::cBinop_aYc7pqnQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_Cr791gQK, 1, m);
}

void Heavy_Echomatica::cBinop_BsfH1Ufc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ng8Cru3M, HV_BINOP_DIVIDE, 1, m, &cBinop_ng8Cru3M_sendMessage);
}

void Heavy_Echomatica::cBinop_8xPPSk2e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_j0ew9POk_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_AxzQqMMw, HV_BINOP_ADD, 0, m, &cBinop_AxzQqMMw_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_cfG0oTnc_sendMessage);
}

void Heavy_Echomatica::cVar_q2QRaybF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_VI35ktWn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_Ko3N0oWS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_HPWKY1E5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_3NqllOZx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_7SWzQ8e4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cSlice_c5pXe5fG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_pRlNYqbT, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_YTJW0RiS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_8HUJQZw9, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_ktWzInGR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_GK6pLFcx, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_SJgUlggr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_yjFGnQd0, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSwitchcase_5YO3HEWb_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZfhHkndJ_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VFDZxo7X_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_ZfhHkndJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Osv7QT8r_sendMessage);
}

void Heavy_Echomatica::cPack_j3GgCISo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_xFr4K8k8, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_DQB4W7md_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_MEOdHknz_sendMessage);
}

void Heavy_Echomatica::cSystem_MEOdHknz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_PAFEcEGr_sendMessage);
}

void Heavy_Echomatica::cDelay_eww010Wi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_eww010Wi, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_9Cybi08d, 0, m, &cDelay_9Cybi08d_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_eww010Wi, 0, m, &cDelay_eww010Wi_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_Cf44efSy, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_9Cybi08d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_9Cybi08d, m);
  cMsg_xcUebDpi_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_DKl1iL4B_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_ujTapPiB_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_YzRpFljC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Mwghy8fy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_NYgcHhGp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_djVzI5ZA_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_eww010Wi, 2, m, &cDelay_eww010Wi_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YHzv1HLU_sendMessage);
}

void Heavy_Echomatica::cMsg_Mwghy8fy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_NYgcHhGp, 0, m, &hTable_NYgcHhGp_sendMessage);
}

void Heavy_Echomatica::cBinop_PAFEcEGr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 40.0f, 0, m, &cBinop_YzRpFljC_sendMessage);
}

void Heavy_Echomatica::cMsg_xcUebDpi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_NYgcHhGp, 0, m, &hTable_NYgcHhGp_sendMessage);
}

void Heavy_Echomatica::cCast_YHzv1HLU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_eww010Wi, 0, m, &cDelay_eww010Wi_sendMessage);
}

void Heavy_Echomatica::cMsg_djVzI5ZA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_9Cybi08d, 2, m, &cDelay_9Cybi08d_sendMessage);
}

void Heavy_Echomatica::cMsg_ujTapPiB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_Cf44efSy, 1, m, NULL);
}

void Heavy_Echomatica::cVar_ABLqYtmU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_TXJ3R1Er, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_x1wgkriA, m);
}

void Heavy_Echomatica::cMsg_5YwdYQ7R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_zbHoxw7y_sendMessage);
}

void Heavy_Echomatica::cSystem_zbHoxw7y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Z8jUoPGD_sendMessage);
}

void Heavy_Echomatica::cVar_gqUYGhc4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SYDIzV7i_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_b9MFrpQU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_40f49PbZ_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_1Kd8Y3Lb, m);
}

void Heavy_Echomatica::cBinop_Z8jUoPGD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_A4BAAQz9, m);
}

void Heavy_Echomatica::cMsg_SYDIzV7i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_b9MFrpQU_sendMessage);
}

void Heavy_Echomatica::cBinop_40f49PbZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Nv3hK4OG, m);
}

void Heavy_Echomatica::cMsg_YiX3hFZ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_R3DuhAOQ_sendMessage);
}

void Heavy_Echomatica::cSystem_R3DuhAOQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_9am7usGk_sendMessage);
}

void Heavy_Echomatica::cVar_ZU8ctGXp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zltqJphy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_kDbKwd5Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_hu5EtMyp_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_VP0uwlt4, m);
}

void Heavy_Echomatica::cBinop_9am7usGk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_B9RvKeCF, m);
}

void Heavy_Echomatica::cMsg_zltqJphy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_kDbKwd5Y_sendMessage);
}

void Heavy_Echomatica::cBinop_hu5EtMyp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_2FgA2bu1, m);
}

void Heavy_Echomatica::cMsg_H9VWKZLf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_kK90UeKY_sendMessage);
}

void Heavy_Echomatica::cSystem_kK90UeKY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_De1vfAiN_sendMessage);
}

void Heavy_Echomatica::cDelay_K8Ilx6Ax_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_K8Ilx6Ax, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_v3XKomru, 0, m, &cDelay_v3XKomru_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_K8Ilx6Ax, 0, m, &cDelay_K8Ilx6Ax_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_88imfXkm, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_v3XKomru_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_v3XKomru, m);
  cMsg_edgQgT6k_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_FuXYG9QT_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_gA5CzEnS_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_ApUhqkjj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_j7ZFoqZF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_vMLvfRKX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pukbC4Ho_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_K8Ilx6Ax, 2, m, &cDelay_K8Ilx6Ax_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Qfzvbe7Q_sendMessage);
}

void Heavy_Echomatica::cMsg_j7ZFoqZF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_vMLvfRKX, 0, m, &hTable_vMLvfRKX_sendMessage);
}

void Heavy_Echomatica::cBinop_De1vfAiN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 30.0f, 0, m, &cBinop_ApUhqkjj_sendMessage);
}

void Heavy_Echomatica::cMsg_edgQgT6k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_vMLvfRKX, 0, m, &hTable_vMLvfRKX_sendMessage);
}

void Heavy_Echomatica::cCast_Qfzvbe7Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_K8Ilx6Ax, 0, m, &cDelay_K8Ilx6Ax_sendMessage);
}

void Heavy_Echomatica::cMsg_pukbC4Ho_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_v3XKomru, 2, m, &cDelay_v3XKomru_sendMessage);
}

void Heavy_Echomatica::cMsg_gA5CzEnS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_88imfXkm, 1, m, NULL);
}

void Heavy_Echomatica::cBinop_32OK7ZF6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_i5Tyy6el_sendMessage);
}

void Heavy_Echomatica::cBinop_i5Tyy6el_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_p1UPGCCb_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_w317CDQh_sendMessage);
}

void Heavy_Echomatica::cVar_mQSTPNLu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_qCNnxSci_sendMessage);
}

void Heavy_Echomatica::cMsg_XF19QjMz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_PJi1E0KK_sendMessage);
}

void Heavy_Echomatica::cSystem_PJi1E0KK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_t7fvGxnP, HV_BINOP_DIVIDE, 1, m, &cBinop_t7fvGxnP_sendMessage);
}

void Heavy_Echomatica::cBinop_p1UPGCCb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_zEJB81Ds_sendMessage);
}

void Heavy_Echomatica::cBinop_zEJB81Ds_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_zOARqdQh, m);
}

void Heavy_Echomatica::cMsg_DMu5IFci_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Hhy8ZvQS_sendMessage);
}

void Heavy_Echomatica::cBinop_Hhy8ZvQS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_32OK7ZF6_sendMessage);
}

void Heavy_Echomatica::cBinop_w317CDQh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_X5CwKrin, m);
}

void Heavy_Echomatica::cBinop_qCNnxSci_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_RdBR4QD7_sendMessage);
}

void Heavy_Echomatica::cBinop_RdBR4QD7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_t7fvGxnP, HV_BINOP_DIVIDE, 0, m, &cBinop_t7fvGxnP_sendMessage);
}

void Heavy_Echomatica::cBinop_t7fvGxnP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DMu5IFci_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_rBF6Y1wH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_FtiKf4KJ_sendMessage);
}

void Heavy_Echomatica::cBinop_FtiKf4KJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_zrIRgilt_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_Iq5JYXiv_sendMessage);
}

void Heavy_Echomatica::cVar_sb5ukmzB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_U5TUCumA_sendMessage);
}

void Heavy_Echomatica::cMsg_goW13m8r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_HHRLcLsT_sendMessage);
}

void Heavy_Echomatica::cSystem_HHRLcLsT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jCdtk6uu, HV_BINOP_DIVIDE, 1, m, &cBinop_jCdtk6uu_sendMessage);
}

void Heavy_Echomatica::cBinop_zrIRgilt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_aomgHxOx_sendMessage);
}

void Heavy_Echomatica::cBinop_aomgHxOx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_iIEbSKIf, m);
}

void Heavy_Echomatica::cMsg_jed8wcJV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_n9F4upeH_sendMessage);
}

void Heavy_Echomatica::cBinop_n9F4upeH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_rBF6Y1wH_sendMessage);
}

void Heavy_Echomatica::cBinop_Iq5JYXiv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_V8RQPl3H, m);
}

void Heavy_Echomatica::cBinop_U5TUCumA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_AnB7d0fY_sendMessage);
}

void Heavy_Echomatica::cBinop_AnB7d0fY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jCdtk6uu, HV_BINOP_DIVIDE, 0, m, &cBinop_jCdtk6uu_sendMessage);
}

void Heavy_Echomatica::cBinop_jCdtk6uu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jed8wcJV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_8OQCwgZz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_FXBGEJwO, 0, m, &cPack_FXBGEJwO_sendMessage);
}

void Heavy_Echomatica::cVar_IXSXFCbo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_bTCk9AzV, 0, m, &cPack_bTCk9AzV_sendMessage);
}

void Heavy_Echomatica::cVar_0SBF8VzY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_E1VRdh20_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cPack_bTCk9AzV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_eelzvPqU, 0, m, NULL);
}

void Heavy_Echomatica::cPack_FXBGEJwO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_aH4gyq7T, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_E1VRdh20_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Vb4MS8N5_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NBbuDuj1_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_11BiDOrD_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_Vb4MS8N5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FSHgpUdr_sendMessage(_c, 0, m);
  cMsg_64AGRV1I_sendMessage(_c, 0, m);
  cMsg_tKA3apq5_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_NBbuDuj1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FSHgpUdr_sendMessage(_c, 0, m);
  cMsg_64AGRV1I_sendMessage(_c, 0, m);
  cMsg_kYYQmw9p_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_11BiDOrD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fWnnnKDX_sendMessage(_c, 0, m);
  cMsg_hy2ejWvO_sendMessage(_c, 0, m);
  cMsg_kYYQmw9p_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_EoTKDoRx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_7xcuYtYQ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_yu4nZqmE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vMkiolL4, HV_BINOP_DIVIDE, 0, m, &cBinop_vMkiolL4_sendMessage);
}

void Heavy_Echomatica::cVar_RfJrGZIm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Z8ghtOdq, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_Z8ghtOdq_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_yellVKKL, 0, m, &cIf_yellVKKL_sendMessage);
}

void Heavy_Echomatica::sEnv_qrnCR4kH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_P93lYbAU_sendMessage);
}

void Heavy_Echomatica::cBinop_sZKqaF4k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_3xIPpgxv_sendMessage);
}

void Heavy_Echomatica::cBinop_3xIPpgxv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2S8VxoTz_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RQRBHNmZ_sendMessage);
}

void Heavy_Echomatica::cCast_2S8VxoTz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7E3R8yTB, HV_BINOP_POW, 1, m, &cBinop_7E3R8yTB_sendMessage);
}

void Heavy_Echomatica::cCast_RQRBHNmZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Dqys5tyz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_Dqys5tyz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_7E3R8yTB, HV_BINOP_POW, 0, m, &cBinop_7E3R8yTB_sendMessage);
}

void Heavy_Echomatica::cBinop_7E3R8yTB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_gJgPn7my_sendMessage);
}

void Heavy_Echomatica::cIf_yellVKKL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_sZKqaF4k, HV_BINOP_SUBTRACT, 0, m, &cBinop_sZKqaF4k_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_pZsC2Z6O, HV_BINOP_SUBTRACT, 0, m, &cBinop_pZsC2Z6O_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_Z8ghtOdq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_yellVKKL, 1, m, &cIf_yellVKKL_sendMessage);
}

void Heavy_Echomatica::cVar_MW2ImWR8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1Cg9EOpF_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_0m9pX85i_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AxD7DURy_sendMessage);
}

void Heavy_Echomatica::cVar_8J2heeWg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_NlteWHD8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_icGC2fcH_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_PMqzE2DT_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_3p4k5aKz, 0, m, &cSlice_3p4k5aKz_sendMessage);
      break;
    }
    default: {
      cSwitchcase_UoK5JAx0_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_3p4k5aKz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_8crza9nK_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_8crza9nK_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_e2KOXYc0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_8crza9nK_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_8crza9nK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Soxanvzx_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_UoK5JAx0_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_8wGQ8BAB, 0, m, &cSlice_8wGQ8BAB_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_8wGQ8BAB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_NOZm611H_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_NOZm611H_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_Qu1EMYJp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_NOZm611H_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_NOZm611H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Pb3Pbam2_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_icGC2fcH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_yu4nZqmE, 0, m, &cVar_yu4nZqmE_sendMessage);
}

void Heavy_Echomatica::cCast_NlteWHD8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vMkiolL4, HV_BINOP_DIVIDE, 1, m, &cBinop_vMkiolL4_sendMessage);
}

void Heavy_Echomatica::cBinop_vMkiolL4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NKeGShEk, HV_BINOP_ADD, 0, m, &cBinop_NKeGShEk_sendMessage);
}

void Heavy_Echomatica::cBinop_pZsC2Z6O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_yu4nZqmE, 0, m, &cVar_yu4nZqmE_sendMessage);
}

void Heavy_Echomatica::cCast_1Cg9EOpF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gnIpzYxE_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oLjJKD27_sendMessage);
}

void Heavy_Echomatica::cCast_0m9pX85i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Z8ghtOdq, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_Z8ghtOdq_sendMessage);
}

void Heavy_Echomatica::cCast_AxD7DURy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RfJrGZIm, 0, m, &cVar_RfJrGZIm_sendMessage);
}

void Heavy_Echomatica::cBinop_NKeGShEk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sZKqaF4k, HV_BINOP_SUBTRACT, 0, m, &cBinop_sZKqaF4k_sendMessage);
}

void Heavy_Echomatica::cCast_VUVP6Gc9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_MW2ImWR8, 0, m, &cVar_MW2ImWR8_sendMessage);
}

void Heavy_Echomatica::cCast_3aIRRYuu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8J2heeWg, 0, m, &cVar_8J2heeWg_sendMessage);
}

void Heavy_Echomatica::cCast_V3CtBHgk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sZKqaF4k, HV_BINOP_SUBTRACT, 1, m, &cBinop_sZKqaF4k_sendMessage);
}

void Heavy_Echomatica::cCast_cDAa12BM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RfJrGZIm, 0, m, &cVar_RfJrGZIm_sendMessage);
}

void Heavy_Echomatica::cBinop_gJgPn7my_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KxPHk2KM_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_oLjJKD27_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pZsC2Z6O, HV_BINOP_SUBTRACT, 1, m, &cBinop_pZsC2Z6O_sendMessage);
}

void Heavy_Echomatica::cCast_gnIpzYxE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NKeGShEk, HV_BINOP_ADD, 1, m, &cBinop_NKeGShEk_sendMessage);
}

void Heavy_Echomatica::cBinop_P93lYbAU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_V3CtBHgk_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_cDAa12BM_sendMessage);
}

void Heavy_Echomatica::cMsg_KxPHk2KM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_EpVJnhD0, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_FSHgpUdr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_IXSXFCbo, 0, m, &cVar_IXSXFCbo_sendMessage);
}

void Heavy_Echomatica::cMsg_64AGRV1I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_8OQCwgZz, 0, m, &cVar_8OQCwgZz_sendMessage);
}

void Heavy_Echomatica::cMsg_fWnnnKDX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_IXSXFCbo, 0, m, &cVar_IXSXFCbo_sendMessage);
}

void Heavy_Echomatica::cMsg_hy2ejWvO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_8OQCwgZz, 0, m, &cVar_8OQCwgZz_sendMessage);
}

void Heavy_Echomatica::cSend_7xcuYtYQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ib8ukXDE_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_tKA3apq5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_EoTKDoRx, 0, m, &cVar_EoTKDoRx_sendMessage);
}

void Heavy_Echomatica::cMsg_kYYQmw9p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_EoTKDoRx, 0, m, &cVar_EoTKDoRx_sendMessage);
}

void Heavy_Echomatica::cVar_5MftmI5y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eNgdzd6H, HV_BINOP_MULTIPLY, 0, m, &cBinop_eNgdzd6H_sendMessage);
}

void Heavy_Echomatica::cMsg_5gT4z3we_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_wrRWsPkU_sendMessage);
}

void Heavy_Echomatica::cSystem_wrRWsPkU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xaLwSlT2_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_eNgdzd6H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_cpOD8lZH_sendMessage);
}

void Heavy_Echomatica::cBinop_bcWY0WTo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eNgdzd6H, HV_BINOP_MULTIPLY, 1, m, &cBinop_eNgdzd6H_sendMessage);
}

void Heavy_Echomatica::cMsg_xaLwSlT2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_bcWY0WTo_sendMessage);
}

void Heavy_Echomatica::cBinop_cpOD8lZH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_7rbSvo3m_sendMessage);
}

void Heavy_Echomatica::cBinop_7rbSvo3m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_PI6JvuU9_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_9DLolxFo, m);
}

void Heavy_Echomatica::cBinop_PI6JvuU9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_lfc8wX6A, m);
}

void Heavy_Echomatica::cBinop_j2r4eUD3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_KjoKbKR3_sendMessage);
}

void Heavy_Echomatica::cBinop_KjoKbKR3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_B1I8Zpa4_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_SNxCpJ9l_sendMessage);
}

void Heavy_Echomatica::cVar_9Z8LmcPm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_aWf4Q3UK_sendMessage);
}

void Heavy_Echomatica::cMsg_qSrDM3yP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_vrwIG7K7_sendMessage);
}

void Heavy_Echomatica::cSystem_vrwIG7K7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9fEO4YfW, HV_BINOP_DIVIDE, 1, m, &cBinop_9fEO4YfW_sendMessage);
}

void Heavy_Echomatica::cBinop_B1I8Zpa4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_ejlNt19t_sendMessage);
}

void Heavy_Echomatica::cBinop_ejlNt19t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_e4zzXJlc, m);
}

void Heavy_Echomatica::cMsg_nQL8As9x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_ofJkKen2_sendMessage);
}

void Heavy_Echomatica::cBinop_ofJkKen2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_j2r4eUD3_sendMessage);
}

void Heavy_Echomatica::cBinop_SNxCpJ9l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_i4VlPXFF, m);
}

void Heavy_Echomatica::cBinop_aWf4Q3UK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_v2FzgXIq_sendMessage);
}

void Heavy_Echomatica::cBinop_v2FzgXIq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9fEO4YfW, HV_BINOP_DIVIDE, 0, m, &cBinop_9fEO4YfW_sendMessage);
}

void Heavy_Echomatica::cBinop_9fEO4YfW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nQL8As9x_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_DWh7C0rv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_RRanQee1_sendMessage);
}

void Heavy_Echomatica::cBinop_RRanQee1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_EOQDu2Z9_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_cQzIz5pG_sendMessage);
}

void Heavy_Echomatica::cVar_jrHzAuU6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_YWpWFVte_sendMessage);
}

void Heavy_Echomatica::cMsg_kTVzYoYN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BYmfQscc_sendMessage);
}

void Heavy_Echomatica::cSystem_BYmfQscc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4myM2K9z, HV_BINOP_DIVIDE, 1, m, &cBinop_4myM2K9z_sendMessage);
}

void Heavy_Echomatica::cBinop_EOQDu2Z9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_BlDJuPti_sendMessage);
}

void Heavy_Echomatica::cBinop_BlDJuPti_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_zTQFpRj1, m);
}

void Heavy_Echomatica::cMsg_DD2DETaf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Ky68qP8n_sendMessage);
}

void Heavy_Echomatica::cBinop_Ky68qP8n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_DWh7C0rv_sendMessage);
}

void Heavy_Echomatica::cBinop_cQzIz5pG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_iTzRv09Q, m);
}

void Heavy_Echomatica::cBinop_YWpWFVte_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_DWQZvj3b_sendMessage);
}

void Heavy_Echomatica::cBinop_DWQZvj3b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4myM2K9z, HV_BINOP_DIVIDE, 0, m, &cBinop_4myM2K9z_sendMessage);
}

void Heavy_Echomatica::cBinop_4myM2K9z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DD2DETaf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cIf_u86tyxC1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_UsvVklyn, 0, m, &cVar_UsvVklyn_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_UsvVklyn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_065eBm5d, HV_BINOP_MULTIPLY, 0, m, &cBinop_065eBm5d_sendMessage);
}

void Heavy_Echomatica::cVar_9Us63wfu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_u86tyxC1, 0, m, &cIf_u86tyxC1_sendMessage);
}

void Heavy_Echomatica::cPack_p2Pbel68_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_HsBLimMG_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_VUxz5RlP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_E6gp9Zd7_sendMessage);
}

void Heavy_Echomatica::cSystem_E6gp9Zd7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Xj4mm3H2, HV_BINOP_MULTIPLY, 1, m, &cBinop_Xj4mm3H2_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_p5KPqkuO, HV_BINOP_MULTIPLY, 1, m, &cBinop_p5KPqkuO_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_FiWTjuQW_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cMsg_eVIllJwZ_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_eVIllJwZ_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AwVr5XmG_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cDelay_swD8cu9c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_swD8cu9c, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_swD8cu9c, 0, m, &cDelay_swD8cu9c_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_zshFVqrJ, 0, m, &cVar_zshFVqrJ_sendMessage);
}

void Heavy_Echomatica::cCast_AwVr5XmG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_eVIllJwZ_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_swD8cu9c, 0, m, &cDelay_swD8cu9c_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_zshFVqrJ, 0, m, &cVar_zshFVqrJ_sendMessage);
}

void Heavy_Echomatica::cMsg_oYjSqjcz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ZjE811gw_sendMessage);
}

void Heavy_Echomatica::cSystem_ZjE811gw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_EmnNBgSn_sendMessage);
}

void Heavy_Echomatica::cVar_CORGfGmz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YdWwRrYA, HV_BINOP_MULTIPLY, 0, m, &cBinop_YdWwRrYA_sendMessage);
}

void Heavy_Echomatica::cMsg_eVIllJwZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_swD8cu9c, 0, m, &cDelay_swD8cu9c_sendMessage);
}

void Heavy_Echomatica::cBinop_Z7byTTFY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_swD8cu9c, 2, m, &cDelay_swD8cu9c_sendMessage);
}

void Heavy_Echomatica::cBinop_EmnNBgSn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YdWwRrYA, HV_BINOP_MULTIPLY, 1, m, &cBinop_YdWwRrYA_sendMessage);
}

void Heavy_Echomatica::cBinop_YdWwRrYA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_Z7byTTFY_sendMessage);
}

void Heavy_Echomatica::cVar_zshFVqrJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fmG1RmTg, HV_BINOP_SUBTRACT, 0, m, &cBinop_fmG1RmTg_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_a0WXb5J4_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_RE0nrgl2_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GhPDzKmn_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sYgopTbr_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_GhPDzKmn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_H61utFG7, 0, m, &cVar_H61utFG7_sendMessage);
}

void Heavy_Echomatica::cCast_sYgopTbr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Nw1VdYAU_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_s7aPmzK7_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_HsBLimMG_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ObMfuqPB, 0, m, &cSlice_ObMfuqPB_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_VBQ7UR2Q, 0, m, &cSlice_VBQ7UR2Q_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZuLuCVw4_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_dfi5TR4d, 0, m, &cSlice_dfi5TR4d_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_hXLerbxz, 0, m, &cSlice_hXLerbxz_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gWADtSz3_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0xJVtv38_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_ObMfuqPB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_uiXuoCkT_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_uiXuoCkT_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_VBQ7UR2Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JhfXgAPd_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oHMmym0u_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JhfXgAPd_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oHMmym0u_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_sMXA52i2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_V4y83PEa_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VPohZ31A_sendMessage);
}

void Heavy_Echomatica::cVar_EUkp2XgO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_JWQy5kFq_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_JWQy5kFq_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tbcNS66z_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_Xj4mm3H2, HV_BINOP_MULTIPLY, 0, m, &cBinop_Xj4mm3H2_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_gNuWLs1I, HV_BINOP_DIVIDE, 1, m, &cBinop_gNuWLs1I_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_CORGfGmz, 0, m, &cVar_CORGfGmz_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_tbcNS66z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gelbblxu_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_YnRUjQuH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vEjl3rnn, HV_BINOP_SUBTRACT, 1, m, &cBinop_vEjl3rnn_sendMessage);
}

void Heavy_Echomatica::cVar_MOQe2yAv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_H61utFG7, 0, m, &cVar_H61utFG7_sendMessage);
}

void Heavy_Echomatica::cVar_H61utFG7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Xtmrzawx, HV_BINOP_ADD, 0, m, &cBinop_Xtmrzawx_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_xRHccpIc, HV_BINOP_ADD, 0, m, &cBinop_xRHccpIc_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1HcoLDSt_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_twplkRwa_sendMessage);
}

void Heavy_Echomatica::cSlice_dfi5TR4d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_V4y83PEa_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VPohZ31A_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_hXLerbxz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YRuwFJvy_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hBcQe2m5_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_FolnXsbN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_zshFVqrJ, 1, m, &cVar_zshFVqrJ_sendMessage);
}

void Heavy_Echomatica::cBinop_p5KPqkuO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_FolnXsbN_sendMessage);
}

void Heavy_Echomatica::cBinop_Xj4mm3H2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_jd8ad8i2_sendMessage);
}

void Heavy_Echomatica::cBinop_jd8ad8i2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fmG1RmTg, HV_BINOP_SUBTRACT, 1, m, &cBinop_fmG1RmTg_sendMessage);
}

void Heavy_Echomatica::cBinop_fmG1RmTg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_zshFVqrJ, 1, m, &cVar_zshFVqrJ_sendMessage);
}

void Heavy_Echomatica::cMsg_X0zwepcA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_FiWTjuQW_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_tl2WFbfh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_FiWTjuQW_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_xRHccpIc, HV_BINOP_ADD, 1, m, &cBinop_xRHccpIc_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Xtmrzawx, HV_BINOP_ADD, 1, m, &cBinop_Xtmrzawx_sendMessage);
}

void Heavy_Echomatica::cBinop_a0WXb5J4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_RE0nrgl2_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_Xtmrzawx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_H61utFG7, 1, m, &cVar_H61utFG7_sendMessage);
}

void Heavy_Echomatica::cBinop_gNuWLs1I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_o6feysOg, HV_BINOP_DIVIDE, 1, m, &cBinop_o6feysOg_sendMessage);
}

void Heavy_Echomatica::cBinop_o6feysOg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xRHccpIc, HV_BINOP_ADD, 1, m, &cBinop_xRHccpIc_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Xtmrzawx, HV_BINOP_ADD, 1, m, &cBinop_Xtmrzawx_sendMessage);
}

void Heavy_Echomatica::cCast_V4y83PEa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_p5KPqkuO, HV_BINOP_MULTIPLY, 0, m, &cBinop_p5KPqkuO_sendMessage);
}

void Heavy_Echomatica::cCast_VPohZ31A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gNuWLs1I, HV_BINOP_DIVIDE, 0, m, &cBinop_gNuWLs1I_sendMessage);
}

void Heavy_Echomatica::cCast_hBcQe2m5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vEjl3rnn, HV_BINOP_SUBTRACT, 0, m, &cBinop_vEjl3rnn_sendMessage);
}

void Heavy_Echomatica::cCast_YRuwFJvy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_MOQe2yAv, 1, m, &cVar_MOQe2yAv_sendMessage);
}

void Heavy_Echomatica::cCast_Nw1VdYAU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tl2WFbfh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_s7aPmzK7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_MOQe2yAv, 0, m, &cVar_MOQe2yAv_sendMessage);
}

void Heavy_Echomatica::cBinop_xRHccpIc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YnRUjQuH, 0, m, &cVar_YnRUjQuH_sendMessage);
}

void Heavy_Echomatica::cMsg_uiXuoCkT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_FiWTjuQW_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_LetepbAe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_sMXA52i2, 1, m, &cVar_sMXA52i2_sendMessage);
}

void Heavy_Echomatica::cMsg_gelbblxu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Xj4mm3H2, HV_BINOP_MULTIPLY, 0, m, &cBinop_Xj4mm3H2_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_gNuWLs1I, HV_BINOP_DIVIDE, 1, m, &cBinop_gNuWLs1I_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_CORGfGmz, 0, m, &cVar_CORGfGmz_sendMessage);
}

void Heavy_Echomatica::cCast_JhfXgAPd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uiXuoCkT_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_oHMmym0u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TKGNHnPU_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_xRHccpIc, HV_BINOP_ADD, 0, m, &cBinop_xRHccpIc_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_H61utFG7, 1, m, &cVar_H61utFG7_sendMessage);
}

void Heavy_Echomatica::cBinop_vEjl3rnn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_o6feysOg, HV_BINOP_DIVIDE, 0, m, &cBinop_o6feysOg_sendMessage);
}

void Heavy_Echomatica::cCast_TKGNHnPU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tl2WFbfh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_gWADtSz3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_X0zwepcA_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_0xJVtv38_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LetepbAe_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_ZuLuCVw4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_sMXA52i2, 0, m, &cVar_sMXA52i2_sendMessage);
}

void Heavy_Echomatica::cVar_uaWQNdas_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UZW3qECu, HV_BINOP_MULTIPLY, 0, m, &cBinop_UZW3qECu_sendMessage);
}

void Heavy_Echomatica::cVar_WgHalQh4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_I4NCXGQe, HV_BINOP_MULTIPLY, 0, m, &cBinop_I4NCXGQe_sendMessage);
}

void Heavy_Echomatica::cVar_645sgycz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Cl6MndzX, HV_BINOP_MULTIPLY, 0, m, &cBinop_Cl6MndzX_sendMessage);
}

void Heavy_Echomatica::cVar_cdV8I871_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MhOQC0n4, HV_BINOP_MULTIPLY, 0, m, &cBinop_MhOQC0n4_sendMessage);
}

void Heavy_Echomatica::cVar_t9CYloj4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zJ7b21Q3, HV_BINOP_MULTIPLY, 0, m, &cBinop_zJ7b21Q3_sendMessage);
}

void Heavy_Echomatica::cVar_Gwp8H7S4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fhJqQGCz, HV_BINOP_MULTIPLY, 0, m, &cBinop_fhJqQGCz_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_bY97kvlr_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_93sVKZIH_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ElugFOWK_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_93sVKZIH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ARlYqmIl_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zsPKeBqy_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vu9RQYxp_sendMessage);
}

void Heavy_Echomatica::cCast_ElugFOWK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Z1R2NyHp_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IoUVRuqJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bL6nTlc9_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_89hvuw0c_sendMessage);
}

void Heavy_Echomatica::cBinop_j51fVv2O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_dgLF2gLq_sendMessage);
}

void Heavy_Echomatica::cBinop_dgLF2gLq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Gym0QGrn_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_T925Yzqr_sendMessage);
}

void Heavy_Echomatica::cVar_i1umcnL2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_JksSgOCL_sendMessage);
}

void Heavy_Echomatica::cMsg_1zTLoEMB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_FUN3iwNo_sendMessage);
}

void Heavy_Echomatica::cSystem_FUN3iwNo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vnJ5co5v, HV_BINOP_DIVIDE, 1, m, &cBinop_vnJ5co5v_sendMessage);
}

void Heavy_Echomatica::cBinop_Gym0QGrn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_pAHpUrXU_sendMessage);
}

void Heavy_Echomatica::cBinop_pAHpUrXU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_bb859V2n, m);
}

void Heavy_Echomatica::cMsg_9fO8zoih_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Er1tk0XC_sendMessage);
}

void Heavy_Echomatica::cBinop_Er1tk0XC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_j51fVv2O_sendMessage);
}

void Heavy_Echomatica::cBinop_T925Yzqr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ErOtN5uC, m);
}

void Heavy_Echomatica::cBinop_JksSgOCL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_zGYOGbWd_sendMessage);
}

void Heavy_Echomatica::cBinop_zGYOGbWd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vnJ5co5v, HV_BINOP_DIVIDE, 0, m, &cBinop_vnJ5co5v_sendMessage);
}

void Heavy_Echomatica::cBinop_vnJ5co5v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9fO8zoih_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_nhRUlxyU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bkF0CWIK, HV_BINOP_DIVIDE, 0, m, &cBinop_bkF0CWIK_sendMessage);
}

void Heavy_Echomatica::cVar_c67RlJQC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_u8Q5JbNI, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_u8Q5JbNI_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_crFrNna3, 0, m, &cIf_crFrNna3_sendMessage);
}

void Heavy_Echomatica::sEnv_e0ysfJxt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_dDQB0eKR_sendMessage);
}

void Heavy_Echomatica::cBinop_spZ7egwP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_eavWhtcX_sendMessage);
}

void Heavy_Echomatica::cBinop_eavWhtcX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_v7qgOC0u_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3JNrxO44_sendMessage);
}

void Heavy_Echomatica::cCast_v7qgOC0u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ObPkDUAJ, HV_BINOP_POW, 1, m, &cBinop_ObPkDUAJ_sendMessage);
}

void Heavy_Echomatica::cCast_3JNrxO44_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3ZePpc41_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_3ZePpc41_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ObPkDUAJ, HV_BINOP_POW, 0, m, &cBinop_ObPkDUAJ_sendMessage);
}

void Heavy_Echomatica::cBinop_ObPkDUAJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_xnKhqYJc_sendMessage);
}

void Heavy_Echomatica::cIf_crFrNna3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_spZ7egwP, HV_BINOP_SUBTRACT, 0, m, &cBinop_spZ7egwP_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_DdfXMreI, HV_BINOP_SUBTRACT, 0, m, &cBinop_DdfXMreI_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_u8Q5JbNI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_crFrNna3, 1, m, &cIf_crFrNna3_sendMessage);
}

void Heavy_Echomatica::cVar_RXfZxpj1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_t4c8NGA3_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_i9elHt6H_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ov5IOgs9_sendMessage);
}

void Heavy_Echomatica::cVar_BLKjViRB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2VRcnRUs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mtM5aaQf_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_zj7sqGJj_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_4Q6K3FrO, 0, m, &cSlice_4Q6K3FrO_sendMessage);
      break;
    }
    default: {
      cSwitchcase_UjfabCD9_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_4Q6K3FrO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_zzPcKWdM_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_zzPcKWdM_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_DVDpMJoA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_zzPcKWdM_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_zzPcKWdM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_1t79Bo0r_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_UjfabCD9_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_fv5F41jy, 0, m, &cSlice_fv5F41jy_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_fv5F41jy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_cnMBNTCb_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_cnMBNTCb_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_3gIPDzdk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_cnMBNTCb_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_cnMBNTCb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_EUvRDnal_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_2VRcnRUs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bkF0CWIK, HV_BINOP_DIVIDE, 1, m, &cBinop_bkF0CWIK_sendMessage);
}

void Heavy_Echomatica::cCast_mtM5aaQf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_nhRUlxyU, 0, m, &cVar_nhRUlxyU_sendMessage);
}

void Heavy_Echomatica::cBinop_bkF0CWIK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6XwJXiAJ, HV_BINOP_ADD, 0, m, &cBinop_6XwJXiAJ_sendMessage);
}

void Heavy_Echomatica::cBinop_DdfXMreI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_nhRUlxyU, 0, m, &cVar_nhRUlxyU_sendMessage);
}

void Heavy_Echomatica::cCast_t4c8NGA3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jzldeDlN_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_P8pVa0Ad_sendMessage);
}

void Heavy_Echomatica::cCast_ov5IOgs9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_c67RlJQC, 0, m, &cVar_c67RlJQC_sendMessage);
}

void Heavy_Echomatica::cCast_i9elHt6H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_u8Q5JbNI, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_u8Q5JbNI_sendMessage);
}

void Heavy_Echomatica::cBinop_6XwJXiAJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_spZ7egwP, HV_BINOP_SUBTRACT, 0, m, &cBinop_spZ7egwP_sendMessage);
}

void Heavy_Echomatica::cCast_RkmEBbN6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BLKjViRB, 0, m, &cVar_BLKjViRB_sendMessage);
}

void Heavy_Echomatica::cCast_eF2690E6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RXfZxpj1, 0, m, &cVar_RXfZxpj1_sendMessage);
}

void Heavy_Echomatica::cCast_DNEREEnD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_c67RlJQC, 0, m, &cVar_c67RlJQC_sendMessage);
}

void Heavy_Echomatica::cCast_0ALlPwbU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_spZ7egwP, HV_BINOP_SUBTRACT, 1, m, &cBinop_spZ7egwP_sendMessage);
}

void Heavy_Echomatica::cBinop_xnKhqYJc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1l7MrKTz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_jzldeDlN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6XwJXiAJ, HV_BINOP_ADD, 1, m, &cBinop_6XwJXiAJ_sendMessage);
}

void Heavy_Echomatica::cCast_P8pVa0Ad_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DdfXMreI, HV_BINOP_SUBTRACT, 1, m, &cBinop_DdfXMreI_sendMessage);
}

void Heavy_Echomatica::cBinop_dDQB0eKR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_0ALlPwbU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_DNEREEnD_sendMessage);
}

void Heavy_Echomatica::cMsg_1l7MrKTz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_iNK0kd1a, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_molirroT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_VevJHN9a_sendMessage);
}

void Heavy_Echomatica::cBinop_VevJHN9a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_vCKn7ajF_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_fRpOS1A2_sendMessage);
}

void Heavy_Echomatica::cVar_DzPMVxfg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_LI1vjUIW_sendMessage);
}

void Heavy_Echomatica::cMsg_BCuLAzzk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_LyXYp36J_sendMessage);
}

void Heavy_Echomatica::cSystem_LyXYp36J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_loEHs2QN, HV_BINOP_DIVIDE, 1, m, &cBinop_loEHs2QN_sendMessage);
}

void Heavy_Echomatica::cBinop_vCKn7ajF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_1x64zwut_sendMessage);
}

void Heavy_Echomatica::cBinop_1x64zwut_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_XdCHLXyy, m);
}

void Heavy_Echomatica::cMsg_ieyzvF1f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_bjsmv07g_sendMessage);
}

void Heavy_Echomatica::cBinop_bjsmv07g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_molirroT_sendMessage);
}

void Heavy_Echomatica::cBinop_fRpOS1A2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_n6Z6YI58, m);
}

void Heavy_Echomatica::cBinop_LI1vjUIW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_xgA55hkD_sendMessage);
}

void Heavy_Echomatica::cBinop_xgA55hkD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_loEHs2QN, HV_BINOP_DIVIDE, 0, m, &cBinop_loEHs2QN_sendMessage);
}

void Heavy_Echomatica::cBinop_loEHs2QN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ieyzvF1f_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_XVKHEb9U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1aguB9EC, HV_BINOP_DIVIDE, 0, m, &cBinop_1aguB9EC_sendMessage);
}

void Heavy_Echomatica::cVar_qHoklGV2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Jbq1FiJT, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_Jbq1FiJT_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_BwypUL65, 0, m, &cIf_BwypUL65_sendMessage);
}

void Heavy_Echomatica::sEnv_2POCDt2p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_9IMVuN3j_sendMessage);
}

void Heavy_Echomatica::cBinop_696tj98F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_J8K3BsnZ_sendMessage);
}

void Heavy_Echomatica::cBinop_J8K3BsnZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bgyMiLyU_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ivw5FxNW_sendMessage);
}

void Heavy_Echomatica::cCast_bgyMiLyU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Hc2Yf9Q3, HV_BINOP_POW, 1, m, &cBinop_Hc2Yf9Q3_sendMessage);
}

void Heavy_Echomatica::cCast_ivw5FxNW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FwK7SXCi_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_FwK7SXCi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Hc2Yf9Q3, HV_BINOP_POW, 0, m, &cBinop_Hc2Yf9Q3_sendMessage);
}

void Heavy_Echomatica::cBinop_Hc2Yf9Q3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_oTSgrj8V_sendMessage);
}

void Heavy_Echomatica::cIf_BwypUL65_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_696tj98F, HV_BINOP_SUBTRACT, 0, m, &cBinop_696tj98F_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_nOLTTrQ2, HV_BINOP_SUBTRACT, 0, m, &cBinop_nOLTTrQ2_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_Jbq1FiJT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_BwypUL65, 1, m, &cIf_BwypUL65_sendMessage);
}

void Heavy_Echomatica::cVar_bCy1p3nY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tzNRm8TU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_BOMtIp2J_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ImXy7opf_sendMessage);
}

void Heavy_Echomatica::cVar_23TkvscY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mDnfEEhC_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_whEWtDLD_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_XY4FzyHR_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_VxjD2DNs, 0, m, &cSlice_VxjD2DNs_sendMessage);
      break;
    }
    default: {
      cSwitchcase_hpyfW6qx_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_VxjD2DNs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_65jhK92S_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_65jhK92S_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_nUdFWQZW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_65jhK92S_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_65jhK92S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_HeoGD2k8_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_hpyfW6qx_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_4O655COM, 0, m, &cSlice_4O655COM_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_4O655COM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_d6NOLqAg_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_d6NOLqAg_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_yMOiyNCv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_d6NOLqAg_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_d6NOLqAg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_NAKroBdW_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_mDnfEEhC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1aguB9EC, HV_BINOP_DIVIDE, 1, m, &cBinop_1aguB9EC_sendMessage);
}

void Heavy_Echomatica::cCast_whEWtDLD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_XVKHEb9U, 0, m, &cVar_XVKHEb9U_sendMessage);
}

void Heavy_Echomatica::cBinop_1aguB9EC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_85PkaDSu, HV_BINOP_ADD, 0, m, &cBinop_85PkaDSu_sendMessage);
}

void Heavy_Echomatica::cBinop_nOLTTrQ2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_XVKHEb9U, 0, m, &cVar_XVKHEb9U_sendMessage);
}

void Heavy_Echomatica::cCast_BOMtIp2J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Jbq1FiJT, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_Jbq1FiJT_sendMessage);
}

void Heavy_Echomatica::cCast_tzNRm8TU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4pQyuX69_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_vYyjsGqj_sendMessage);
}

void Heavy_Echomatica::cCast_ImXy7opf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_qHoklGV2, 0, m, &cVar_qHoklGV2_sendMessage);
}

void Heavy_Echomatica::cBinop_85PkaDSu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_696tj98F, HV_BINOP_SUBTRACT, 0, m, &cBinop_696tj98F_sendMessage);
}

void Heavy_Echomatica::cCast_tLDFGbla_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_23TkvscY, 0, m, &cVar_23TkvscY_sendMessage);
}

void Heavy_Echomatica::cCast_gc7265rQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bCy1p3nY, 0, m, &cVar_bCy1p3nY_sendMessage);
}

void Heavy_Echomatica::cCast_VoAnzjxE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_696tj98F, HV_BINOP_SUBTRACT, 1, m, &cBinop_696tj98F_sendMessage);
}

void Heavy_Echomatica::cCast_kyUBdeLD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_qHoklGV2, 0, m, &cVar_qHoklGV2_sendMessage);
}

void Heavy_Echomatica::cBinop_oTSgrj8V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vHhXCPMz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_4pQyuX69_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_85PkaDSu, HV_BINOP_ADD, 1, m, &cBinop_85PkaDSu_sendMessage);
}

void Heavy_Echomatica::cCast_vYyjsGqj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nOLTTrQ2, HV_BINOP_SUBTRACT, 1, m, &cBinop_nOLTTrQ2_sendMessage);
}

void Heavy_Echomatica::cBinop_9IMVuN3j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VoAnzjxE_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kyUBdeLD_sendMessage);
}

void Heavy_Echomatica::cMsg_vHhXCPMz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_4QpfEdXE, 0, m, NULL);
}

void Heavy_Echomatica::cVar_H3Tuql6i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_x9GVrR1h, HV_BINOP_MULTIPLY, 0, m, &cBinop_x9GVrR1h_sendMessage);
}

void Heavy_Echomatica::cMsg_LSMnE9q3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_sKAgFIdF_sendMessage);
}

void Heavy_Echomatica::cSystem_sKAgFIdF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_T0AQPYo5_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_x9GVrR1h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_IqcCvl7P_sendMessage);
}

void Heavy_Echomatica::cBinop_t6jXDr4g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_x9GVrR1h, HV_BINOP_MULTIPLY, 1, m, &cBinop_x9GVrR1h_sendMessage);
}

void Heavy_Echomatica::cMsg_T0AQPYo5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_t6jXDr4g_sendMessage);
}

void Heavy_Echomatica::cBinop_IqcCvl7P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_TwRCNuD7_sendMessage);
}

void Heavy_Echomatica::cBinop_TwRCNuD7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_E0L4W3A3_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_SuHx445H, m);
}

void Heavy_Echomatica::cBinop_E0L4W3A3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ovUYGGt4, m);
}

void Heavy_Echomatica::cVar_ZmlqZhlZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rkvDPN4q, HV_BINOP_MULTIPLY, 0, m, &cBinop_rkvDPN4q_sendMessage);
}

void Heavy_Echomatica::cMsg_b3wNWfoK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_LTVmA9bz_sendMessage);
}

void Heavy_Echomatica::cSystem_LTVmA9bz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dDjGR2y0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_rkvDPN4q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_gCtdZmwV_sendMessage);
}

void Heavy_Echomatica::cBinop_65Kd6ZnI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rkvDPN4q, HV_BINOP_MULTIPLY, 1, m, &cBinop_rkvDPN4q_sendMessage);
}

void Heavy_Echomatica::cMsg_dDjGR2y0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_65Kd6ZnI_sendMessage);
}

void Heavy_Echomatica::cBinop_gCtdZmwV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_TgyuZX1m_sendMessage);
}

void Heavy_Echomatica::cBinop_TgyuZX1m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_rUz7jMce_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_78ChnZaJ, m);
}

void Heavy_Echomatica::cBinop_rUz7jMce_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_VVbxaAbT, m);
}

void Heavy_Echomatica::cBinop_7hXXCKHc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_NhQHab1h_sendMessage);
}

void Heavy_Echomatica::cBinop_NhQHab1h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_SJlWGh60_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_LFgeLDGW_sendMessage);
}

void Heavy_Echomatica::cVar_vrubrTPS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_m3VGJBIG_sendMessage);
}

void Heavy_Echomatica::cMsg_4yEQbN7z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_sGLMfhR4_sendMessage);
}

void Heavy_Echomatica::cSystem_sGLMfhR4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fctt73xL, HV_BINOP_DIVIDE, 1, m, &cBinop_fctt73xL_sendMessage);
}

void Heavy_Echomatica::cBinop_SJlWGh60_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_YRi4h92X_sendMessage);
}

void Heavy_Echomatica::cBinop_YRi4h92X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_mZy4Vrsj, m);
}

void Heavy_Echomatica::cMsg_7ZPx3fr8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_TyeDWSuY_sendMessage);
}

void Heavy_Echomatica::cBinop_TyeDWSuY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_7hXXCKHc_sendMessage);
}

void Heavy_Echomatica::cBinop_LFgeLDGW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_UfOSbOEx, m);
}

void Heavy_Echomatica::cBinop_m3VGJBIG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_DRX3hXiU_sendMessage);
}

void Heavy_Echomatica::cBinop_DRX3hXiU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fctt73xL, HV_BINOP_DIVIDE, 0, m, &cBinop_fctt73xL_sendMessage);
}

void Heavy_Echomatica::cBinop_fctt73xL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7ZPx3fr8_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_KP1gQzTD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_yPbqLgcI_sendMessage);
}

void Heavy_Echomatica::cBinop_yPbqLgcI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_rW0fMBKs_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_DeydT1UW_sendMessage);
}

void Heavy_Echomatica::cVar_ffwsTp5f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_wFeCyt66_sendMessage);
}

void Heavy_Echomatica::cMsg_tznbKMqF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_DzMUgCC8_sendMessage);
}

void Heavy_Echomatica::cSystem_DzMUgCC8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_T5VbVMAL, HV_BINOP_DIVIDE, 1, m, &cBinop_T5VbVMAL_sendMessage);
}

void Heavy_Echomatica::cBinop_rW0fMBKs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_X0mvoZaZ_sendMessage);
}

void Heavy_Echomatica::cBinop_X0mvoZaZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_qtHhwdol, m);
}

void Heavy_Echomatica::cMsg_mfIkG55h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_xv2se0V1_sendMessage);
}

void Heavy_Echomatica::cBinop_xv2se0V1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_KP1gQzTD_sendMessage);
}

void Heavy_Echomatica::cBinop_DeydT1UW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_nGNVPNhI, m);
}

void Heavy_Echomatica::cBinop_wFeCyt66_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_1IUJfZVQ_sendMessage);
}

void Heavy_Echomatica::cBinop_1IUJfZVQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_T5VbVMAL, HV_BINOP_DIVIDE, 0, m, &cBinop_T5VbVMAL_sendMessage);
}

void Heavy_Echomatica::cBinop_T5VbVMAL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mfIkG55h_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_5jxfQuHF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_WxaGcxSo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_SKuBC0Z8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_LlYBnCuj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_NVuphVk3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_tvsg9Ivv_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_Fi741jOt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_fNVm2f4h_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_PhwNfBni_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_mVwnEAMo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_nwbPc4xu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_fOKSSgrD_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_mjKR2wnb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_qJDtnMVV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_F0O0d0QN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_WqHR9P2P_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_gVEQWtAy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_9q8hZUgX_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_OlYtflVK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_4GXNRcq3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_diJZAA7P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_GwZREBAb_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_Fjt1MimN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_leFtO1ys_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_59iiscQ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_2EbAJhrJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_YfUp3OHL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_x6x6MRNj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_B9taY4NZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_6h6Md3QD_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_XBt6zefB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_AHuy6o6E_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_l16tresF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_8Md79Fgu_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_2jaG2jDU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_HcvgGfLD_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_3uMgPzkQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_79SUdohA_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_LsAtFdIQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_skd5hNap_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_P43LCs7k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_u3PS4up5_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_gd1RjKnB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_SRccO535_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_jVXj30A3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Hui7nTPj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_6LbJsCZC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_q8LgKxnF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_Wb3ClGMW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_7j06DmjI_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_ksNcjn9v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_dRd4iT9W_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_0NcYFX0k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_838ynrBY_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_8vPoWo8C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_JImSczYw_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_EF9wgxsC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.01f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_c5pXe5fG, 0, m, &cSlice_c5pXe5fG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YTJW0RiS, 0, m, &cSlice_YTJW0RiS_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ktWzInGR, 0, m, &cSlice_ktWzInGR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SJgUlggr, 0, m, &cSlice_SJgUlggr_sendMessage);
}

void Heavy_Echomatica::cCast_Osv7QT8r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EF9wgxsC_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_VFDZxo7X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hkwywZAo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_hkwywZAo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.2f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_c5pXe5fG, 0, m, &cSlice_c5pXe5fG_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YTJW0RiS, 0, m, &cSlice_YTJW0RiS_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ktWzInGR, 0, m, &cSlice_ktWzInGR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SJgUlggr, 0, m, &cSlice_SJgUlggr_sendMessage);
}

void Heavy_Echomatica::cMsg_NSIuwgEy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_065eBm5d, HV_BINOP_MULTIPLY, 1, m, &cBinop_065eBm5d_sendMessage);
}

void Heavy_Echomatica::cBinop_065eBm5d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_bDwPhZtp_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_8FIggGfV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_UsvVklyn, 0, m, &cVar_UsvVklyn_sendMessage);
}

void Heavy_Echomatica::cMsg_5toyv7Ks_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_u86tyxC1, 1, m, &cIf_u86tyxC1_sendMessage);
}

void Heavy_Echomatica::cMsg_t2UISrOU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_u86tyxC1, 1, m, &cIf_u86tyxC1_sendMessage);
}

void Heavy_Echomatica::cSend_bDwPhZtp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_V37l9U4e_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_UZW3qECu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_hEgG2SvF, 0, m, &cPack_hEgG2SvF_sendMessage);
}

void Heavy_Echomatica::cBinop_I4NCXGQe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_WHe03hmR, 0, m, &cPack_WHe03hmR_sendMessage);
}

void Heavy_Echomatica::cBinop_Cl6MndzX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_aHjML7tJ, 0, m, &cPack_aHjML7tJ_sendMessage);
}

void Heavy_Echomatica::cBinop_MhOQC0n4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_p3nWI5vd, 0, m, &cPack_p3nWI5vd_sendMessage);
}

void Heavy_Echomatica::cBinop_zJ7b21Q3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_VDgmIuWy, 0, m, &cPack_VDgmIuWy_sendMessage);
}

void Heavy_Echomatica::cBinop_fhJqQGCz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_HYPZG0Io, 0, m, &cPack_HYPZG0Io_sendMessage);
}

void Heavy_Echomatica::cCast_QLBHrGrL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UZW3qECu, HV_BINOP_MULTIPLY, 1, m, &cBinop_UZW3qECu_sendMessage);
}

void Heavy_Echomatica::cCast_hSBHL6Qx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uaWQNdas, 0, m, &cVar_uaWQNdas_sendMessage);
}

void Heavy_Echomatica::cCast_KIHY17N5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fhJqQGCz, HV_BINOP_MULTIPLY, 1, m, &cBinop_fhJqQGCz_sendMessage);
}

void Heavy_Echomatica::cCast_9vrjonm7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Gwp8H7S4, 0, m, &cVar_Gwp8H7S4_sendMessage);
}

void Heavy_Echomatica::cCast_qwFhCLnT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zJ7b21Q3, HV_BINOP_MULTIPLY, 1, m, &cBinop_zJ7b21Q3_sendMessage);
}

void Heavy_Echomatica::cCast_6HaJLCr4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_t9CYloj4, 0, m, &cVar_t9CYloj4_sendMessage);
}

void Heavy_Echomatica::cCast_zWH7oPLn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MhOQC0n4, HV_BINOP_MULTIPLY, 1, m, &cBinop_MhOQC0n4_sendMessage);
}

void Heavy_Echomatica::cCast_9Y51Q5VG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cdV8I871, 0, m, &cVar_cdV8I871_sendMessage);
}

void Heavy_Echomatica::cCast_jHvC0mxB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Cl6MndzX, HV_BINOP_MULTIPLY, 1, m, &cBinop_Cl6MndzX_sendMessage);
}

void Heavy_Echomatica::cCast_1rYOLIRN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_645sgycz, 0, m, &cVar_645sgycz_sendMessage);
}

void Heavy_Echomatica::cCast_kzyCiBnj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WgHalQh4, 0, m, &cVar_WgHalQh4_sendMessage);
}

void Heavy_Echomatica::cCast_n3Vc9iNo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_I4NCXGQe, HV_BINOP_MULTIPLY, 1, m, &cBinop_I4NCXGQe_sendMessage);
}

void Heavy_Echomatica::cBinop_RhHcRSMk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aJgoDIZE_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FXvUf4Pc_sendMessage);
}

void Heavy_Echomatica::cMsg_L6xDeBVH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.5f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_RhHcRSMk, HV_BINOP_MULTIPLY, 1, m, &cBinop_RhHcRSMk_sendMessage);
}

void Heavy_Echomatica::cCast_twplkRwa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RhHcRSMk, HV_BINOP_MULTIPLY, 0, m, &cBinop_RhHcRSMk_sendMessage);
}

void Heavy_Echomatica::cCast_1HcoLDSt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_L6xDeBVH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_p1x4SAI2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_0FEtHc7r, HV_BINOP_ADD, 1, m, &cBinop_0FEtHc7r_sendMessage);
}

void Heavy_Echomatica::cBinop_0FEtHc7r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9Us63wfu, 0, m, &cVar_9Us63wfu_sendMessage);
}

void Heavy_Echomatica::cCast_FXvUf4Pc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0FEtHc7r, HV_BINOP_ADD, 0, m, &cBinop_0FEtHc7r_sendMessage);
}

void Heavy_Echomatica::cCast_aJgoDIZE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_p1x4SAI2_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_ARlYqmIl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_t2UISrOU_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_zsPKeBqy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NSIuwgEy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_vu9RQYxp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8FIggGfV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_Z1R2NyHp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5toyv7Ks_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_IoUVRuqJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NSIuwgEy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_89hvuw0c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_065eBm5d, HV_BINOP_MULTIPLY, 0, m, &cBinop_065eBm5d_sendMessage);
}

void Heavy_Echomatica::cCast_bL6nTlc9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9Us63wfu, 0, m, &cVar_9Us63wfu_sendMessage);
}

void Heavy_Echomatica::cReceive_1CBqhvrV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_e2KOXYc0, 0, m, &cVar_e2KOXYc0_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Qu1EMYJp, 0, m, &cVar_Qu1EMYJp_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_DVDpMJoA, 0, m, &cVar_DVDpMJoA_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_3gIPDzdk, 0, m, &cVar_3gIPDzdk_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_nUdFWQZW, 0, m, &cVar_nUdFWQZW_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_yMOiyNCv, 0, m, &cVar_yMOiyNCv_sendMessage);
  cMsg_DQB4W7md_sendMessage(_c, 0, m);
  cMsg_H9VWKZLf_sendMessage(_c, 0, m);
  cMsg_XF19QjMz_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_mQSTPNLu, 0, m, &cVar_mQSTPNLu_sendMessage);
  cMsg_goW13m8r_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_sb5ukmzB, 0, m, &cVar_sb5ukmzB_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3aIRRYuu_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VUVP6Gc9_sendMessage);
  cMsg_oYjSqjcz_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_CORGfGmz, 0, m, &cVar_CORGfGmz_sendMessage);
  cMsg_1zTLoEMB_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_i1umcnL2, 0, m, &cVar_i1umcnL2_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RkmEBbN6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eF2690E6_sendMessage);
  cMsg_BCuLAzzk_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_DzPMVxfg, 0, m, &cVar_DzPMVxfg_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tLDFGbla_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gc7265rQ_sendMessage);
  cMsg_LSMnE9q3_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_H3Tuql6i, 0, m, &cVar_H3Tuql6i_sendMessage);
  cMsg_b3wNWfoK_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ZmlqZhlZ, 0, m, &cVar_ZmlqZhlZ_sendMessage);
  cMsg_ct7xYBn4_sendMessage(_c, 0, m);
  cMsg_WRrkYBtg_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Va82qvXZ, 0, m, &cVar_Va82qvXZ_sendMessage);
  cMsg_LvN090U9_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_bCKJqleF, 0, m, &cVar_bCKJqleF_sendMessage);
  cMsg_iDv2koFn_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_85cnlEq9, 0, m, &cVar_85cnlEq9_sendMessage);
  cMsg_C0Z0whyE_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_wlZCYli7, 0, m, &cVar_wlZCYli7_sendMessage);
  cMsg_QILVe5Bs_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_XWEf3ojk, 0, m, &cVar_XWEf3ojk_sendMessage);
  cMsg_v6agFa5G_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_KBYnSw0N, 0, m, &cVar_KBYnSw0N_sendMessage);
  cMsg_vzpn5epe_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ZpeIWX8M, 0, m, &cVar_ZpeIWX8M_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_V4MQY4eg, 0, m, &cVar_V4MQY4eg_sendMessage);
  cMsg_hSCbmRe2_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_4Nqube6i, 0, m, &cVar_4Nqube6i_sendMessage);
  cMsg_5gT4z3we_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_5MftmI5y, 0, m, &cVar_5MftmI5y_sendMessage);
  cMsg_qSrDM3yP_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_9Z8LmcPm, 0, m, &cVar_9Z8LmcPm_sendMessage);
  cMsg_kTVzYoYN_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_jrHzAuU6, 0, m, &cVar_jrHzAuU6_sendMessage);
  cMsg_VUxz5RlP_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_YnRUjQuH, 0, m, &cVar_YnRUjQuH_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_EUkp2XgO, 0, m, &cVar_EUkp2XgO_sendMessage);
  cMsg_4yEQbN7z_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_vrubrTPS, 0, m, &cVar_vrubrTPS_sendMessage);
  cMsg_tznbKMqF_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ffwsTp5f, 0, m, &cVar_ffwsTp5f_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_F2Xsgh5b, 0, m, &cVar_F2Xsgh5b_sendMessage);
  cMsg_IqR4ObjN_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_W8h3gPEH, 0, m, &cVar_W8h3gPEH_sendMessage);
  cMsg_YO3rIOQk_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_8yZHyjto, 0, m, &cVar_8yZHyjto_sendMessage);
  cMsg_FacEel5H_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_n9iIfd6G, 0, m, &cVar_n9iIfd6G_sendMessage);
  cMsg_nPwmONfn_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_KVeErgyu, 0, m, &cVar_KVeErgyu_sendMessage);
  cMsg_nPu8mj5g_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ZV4oAFyP, 0, m, &cVar_ZV4oAFyP_sendMessage);
  cMsg_gJ5hSktW_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_gqUYGhc4, 0, m, &cVar_gqUYGhc4_sendMessage);
  cMsg_5YwdYQ7R_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ZU8ctGXp, 0, m, &cVar_ZU8ctGXp_sendMessage);
  cMsg_YiX3hFZ6_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cReceive_dVTdTjnf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_nhuLq3EQ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_WxaGcxSo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WgHalQh4, 0, m, &cVar_WgHalQh4_sendMessage);
}

void Heavy_Echomatica::cReceive_LlYBnCuj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_645sgycz, 0, m, &cVar_645sgycz_sendMessage);
}

void Heavy_Echomatica::cReceive_tvsg9Ivv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cdV8I871, 0, m, &cVar_cdV8I871_sendMessage);
}

void Heavy_Echomatica::cReceive_fNVm2f4h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_t9CYloj4, 0, m, &cVar_t9CYloj4_sendMessage);
}

void Heavy_Echomatica::cReceive_mVwnEAMo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Gwp8H7S4, 0, m, &cVar_Gwp8H7S4_sendMessage);
}

void Heavy_Echomatica::cReceive_fOKSSgrD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uaWQNdas, 0, m, &cVar_uaWQNdas_sendMessage);
}

void Heavy_Echomatica::cReceive_qJDtnMVV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_L7q7FIL2, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_D05wnHDw, 0, m, &cVar_D05wnHDw_sendMessage);
}

void Heavy_Echomatica::cReceive_WqHR9P2P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_r3iNu60z, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_cnHOFXGQ, 0, m, &cVar_cnHOFXGQ_sendMessage);
}

void Heavy_Echomatica::cReceive_9q8hZUgX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_uk7DfyGo, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_S5cngU6w, 0, m, &cVar_S5cngU6w_sendMessage);
}

void Heavy_Echomatica::cReceive_4GXNRcq3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_INc6k1N1, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_Zq2r6BWc, 0, m, &cVar_Zq2r6BWc_sendMessage);
}

void Heavy_Echomatica::cReceive_GwZREBAb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_uTyqvbrh, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_UKylA7q2, 0, m, &cVar_UKylA7q2_sendMessage);
}

void Heavy_Echomatica::cReceive_leFtO1ys_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_IuYhg605, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_pZRw04c6, 0, m, &cVar_pZRw04c6_sendMessage);
}

void Heavy_Echomatica::cReceive_2EbAJhrJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_lC4SWczV, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_B9iCExGX, 0, m, &cVar_B9iCExGX_sendMessage);
}

void Heavy_Echomatica::cReceive_x6x6MRNj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_azO0Dh2d, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_xzTmmWfD, 0, m, &cVar_xzTmmWfD_sendMessage);
}

void Heavy_Echomatica::cReceive_6h6Md3QD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_cjgZ3RxD, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_1fLGwaeJ, 0, m, &cVar_1fLGwaeJ_sendMessage);
}

void Heavy_Echomatica::cReceive_AHuy6o6E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_poGwC2DX, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_xvFvkMQ9, 0, m, &cVar_xvFvkMQ9_sendMessage);
}

void Heavy_Echomatica::cReceive_8Md79Fgu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_3xeEehsA, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_EuZ3lH8F, 0, m, &cVar_EuZ3lH8F_sendMessage);
}

void Heavy_Echomatica::cReceive_HcvgGfLD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_301zR6A0, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_1Rc9zeVG, 0, m, &cVar_1Rc9zeVG_sendMessage);
}

void Heavy_Echomatica::cReceive_V37l9U4e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_n3Vc9iNo_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kzyCiBnj_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jHvC0mxB_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1rYOLIRN_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zWH7oPLn_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9Y51Q5VG_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qwFhCLnT_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6HaJLCr4_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_KIHY17N5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9vrjonm7_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_QLBHrGrL_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hSBHL6Qx_sendMessage);
}

void Heavy_Echomatica::cReceive_79SUdohA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_5YO3HEWb_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_skd5hNap_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bCKJqleF, 0, m, &cVar_bCKJqleF_sendMessage);
}

void Heavy_Echomatica::cReceive_u3PS4up5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_85cnlEq9, 0, m, &cVar_85cnlEq9_sendMessage);
}

void Heavy_Echomatica::cReceive_SRccO535_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wlZCYli7, 0, m, &cVar_wlZCYli7_sendMessage);
}

void Heavy_Echomatica::cReceive_Hui7nTPj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_XWEf3ojk, 0, m, &cVar_XWEf3ojk_sendMessage);
}

void Heavy_Echomatica::cReceive_q8LgKxnF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_KBYnSw0N, 0, m, &cVar_KBYnSw0N_sendMessage);
}

void Heavy_Echomatica::cReceive_7j06DmjI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ZpeIWX8M, 0, m, &cVar_ZpeIWX8M_sendMessage);
}

void Heavy_Echomatica::cReceive_dRd4iT9W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_CTUupYlv, m);
}

void Heavy_Echomatica::cReceive_838ynrBY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4Nqube6i, 0, m, &cVar_4Nqube6i_sendMessage);
}

void Heavy_Echomatica::cReceive_JImSczYw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_V4MQY4eg, 0, m, &cVar_V4MQY4eg_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sqDPnILY_sendMessage);
}

void Heavy_Echomatica::cReceive_ib8ukXDE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ABLqYtmU, 0, m, &cVar_ABLqYtmU_sendMessage);
}

void Heavy_Echomatica::cReceive_GY3JpeeU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_E1VRdh20_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_Soxanvzx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_NlteWHD8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_icGC2fcH_sendMessage);
}

void Heavy_Echomatica::cReceive_Pb3Pbam2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1Cg9EOpF_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_0m9pX85i_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AxD7DURy_sendMessage);
}

void Heavy_Echomatica::cReceive_HiqyrmDu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_j3GgCISo, 0, m, &cPack_j3GgCISo_sendMessage);
}

void Heavy_Echomatica::cReceive_OZV5jpkf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_yzCjzI6m, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_BKVVJeru, m);
}

void Heavy_Echomatica::cReceive_llBXKCwH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_HmHGGlwd, 0, m, &cPack_HmHGGlwd_sendMessage);
}

void Heavy_Echomatica::cReceive_kej153c6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_bY97kvlr_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_S9hQaJ8E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_p2Pbel68, 0, m, &cPack_p2Pbel68_sendMessage);
}

void Heavy_Echomatica::cReceive_1t79Bo0r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2VRcnRUs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mtM5aaQf_sendMessage);
}

void Heavy_Echomatica::cReceive_EUvRDnal_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_t4c8NGA3_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_i9elHt6H_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ov5IOgs9_sendMessage);
}

void Heavy_Echomatica::cReceive_HeoGD2k8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mDnfEEhC_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_whEWtDLD_sendMessage);
}

void Heavy_Echomatica::cReceive_NAKroBdW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tzNRm8TU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_BOMtIp2J_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ImXy7opf_sendMessage);
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
    __hv_varread_f(&sVarf_RXph4e2T, VOf(Bf0));
    __hv_biquad_k_f(&sBiquad_k_Cr791gQK, VIf(Bf0), VOf(Bf1));
    __hv_varread_f(&sVarf_CTUupYlv, VOf(Bf2));
    __hv_varread_f(&sVarf_snYUH0bg, VOf(Bf3));
    __hv_rpole_f(&sRPole_48k4b83e, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_oGs8oacB, VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_zEmBGI0V, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_IUrRv2JH, VOf(Bf0));
    __hv_rpole_f(&sRPole_Y6V9FCve, VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_UCuUlERP, VIf(Bf0), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_QmJf4ghS, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_2MLj7OeY, VOf(Bf3));
    __hv_rpole_f(&sRPole_zrESVpWs, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_2KxNsTfE, VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_3D5ShS7v, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_glJFCrvg, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_zVL5Ptts, VOf(Bf3));
    __hv_rpole_f(&sRPole_YPPngHuE, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_j9eeM13P, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_V8mtRgoR, VOf(Bf3));
    __hv_rpole_f(&sRPole_ReIwu7QZ, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_5Y3UKj5r, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_lNcbtWBe, VOf(Bf3));
    __hv_rpole_f(&sRPole_ewOP6OHT, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf1), VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_HT5xfcad, VOf(Bf2));
    __hv_varread_f(&sVarf_kHgQpedE, VOf(Bf1));
    __hv_varread_f(&sVarf_Jt4NO6cQ, VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_wTrKqz3d, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_X0fApggN, VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_yIO0IoO8, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_i4VlPXFF, VOf(Bf2));
    __hv_rpole_f(&sRPole_R7nuJP5W, VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_B4tV0Ntk, VIf(Bf2), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_e4zzXJlc, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_9DLolxFo, VOf(Bf1));
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_lfc8wX6A, VOf(Bf2));
    __hv_rpole_f(&sRPole_iNMM2Irf, VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f);
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_xFr4K8k8, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_eelzvPqU, VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    sEnv_process(this, &sEnv_qrnCR4kH, VIf(Bf0), &sEnv_qrnCR4kH_sendMessage);
    __hv_line_f(&sLine_EpVJnhD0, VOf(Bf4));
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
    __hv_line_f(&sLine_aH4gyq7T, VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf2), VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_6lctTkIi, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_LVvZuEWj, VOf(Bf5));
    __hv_rpole_f(&sRPole_FJhN5a0S, VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_tabwrite_f(&sTabwrite_6tigLX68, VIf(Bf5));
    __hv_phasor_k_f(&sPhasor_yjFGnQd0, VOf(Bf5));
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
    __hv_varread_f(&sVarf_GK6pLFcx, VOf(Bf2));
    __hv_phasor_k_f(&sPhasor_8HUJQZw9, VOf(Bf5));
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
    __hv_varread_f(&sVarf_pRlNYqbT, VOf(Bf6));
    __hv_mul_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf3), VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_FWYWrwez, VIf(Bf6));
    __hv_line_f(&sLine_PyvdmH2o, VOf(Bf6));
    __hv_varread_f(&sVarf_FWYWrwez, VOf(Bf2));
    __hv_add_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_tabhead_f(&sTabhead_KhOIufAX, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_4garT7Hn, VOf(Bf6));
    __hv_mul_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_N6bnKsh3, VOf(Bf2));
    __hv_min_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_vEZ2UDrF, VOf(Bf2));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_4tRuJsNt, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_VTdKrken, VIi(Bi0), VOf(Bf2));
    __hv_sub_f(VIf(Bf4), VIf(Bf2), VOf(Bf4));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf4), VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_lC4SWczV, VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_HT5xfcad, VIf(Bf3));
    __hv_line_f(&sLine_am1qV0C2, VOf(Bf3));
    __hv_varread_f(&sVarf_FWYWrwez, VOf(Bf4));
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_tabhead_f(&sTabhead_U4bUbpXW, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_z6mlryb0, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_JUXfDWfQ, VOf(Bf4));
    __hv_min_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_aTi8QyK7, VOf(Bf4));
    __hv_zero_f(VOf(Bf5));
    __hv_lt_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_cast_fi(VIf(Bf5), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_Qt2KNvjw, VIi(Bi1), VOf(Bf5));
    __hv_tabread_if(&sTabread_unNEpsCW, VIi(Bi0), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf5));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf5), VIf(Bf6), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_cjgZ3RxD, VOf(Bf6));
    __hv_mul_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_kHgQpedE, VIf(Bf6));
    __hv_line_f(&sLine_KyP01aKm, VOf(Bf6));
    __hv_varread_f(&sVarf_FWYWrwez, VOf(Bf5));
    __hv_add_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_tabhead_f(&sTabhead_6bgilb3p, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_PhzVp7od, VOf(Bf6));
    __hv_mul_f(VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_bOY4E29Q, VOf(Bf5));
    __hv_min_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_DTEC618O, VOf(Bf5));
    __hv_zero_f(VOf(Bf7));
    __hv_lt_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_and_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_cast_fi(VIf(Bf7), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_qp2DzHDc, VIi(Bi1), VOf(Bf7));
    __hv_tabread_if(&sTabread_aiMPZ2dG, VIi(Bi0), VOf(Bf5));
    __hv_sub_f(VIf(Bf7), VIf(Bf5), VOf(Bf7));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf7), VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_3xeEehsA, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_Jt4NO6cQ, VIf(Bf3));
    __hv_line_f(&sLine_1pKg7htv, VOf(Bf3));
    __hv_varread_f(&sVarf_FWYWrwez, VOf(Bf7));
    __hv_add_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_tabhead_f(&sTabhead_KtVse9OF, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_NEKuMEeD, VOf(Bf3));
    __hv_mul_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_daRbmc9T, VOf(Bf7));
    __hv_min_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_uini4nQX, VOf(Bf7));
    __hv_zero_f(VOf(Bf1));
    __hv_lt_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_and_f(VIf(Bf7), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_cast_fi(VIf(Bf1), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_NJNl5Au1, VIi(Bi1), VOf(Bf1));
    __hv_tabread_if(&sTabread_JSd2TBTh, VIi(Bi0), VOf(Bf7));
    __hv_sub_f(VIf(Bf1), VIf(Bf7), VOf(Bf1));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf1), VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_301zR6A0, VOf(Bf6));
    __hv_mul_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_wTrKqz3d, VIf(Bf6));
    __hv_line_f(&sLine_eUM4NL5k, VOf(Bf6));
    __hv_varread_f(&sVarf_FWYWrwez, VOf(Bf1));
    __hv_add_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_tabhead_f(&sTabhead_TN85huwq, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_Dhh6Uxg9, VOf(Bf6));
    __hv_mul_f(VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_oeLx8pQM, VOf(Bf1));
    __hv_min_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_65qqbOr5, VOf(Bf1));
    __hv_zero_f(VOf(Bf0));
    __hv_lt_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_and_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_cast_fi(VIf(Bf0), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_v77IBgaD, VIi(Bi1), VOf(Bf0));
    __hv_tabread_if(&sTabread_S6bB7Ujb, VIi(Bi0), VOf(Bf1));
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf0));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf0), VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_poGwC2DX, VOf(Bf3));
    __hv_mul_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_X0fApggN, VIf(Bf3));
    __hv_line_f(&sLine_DlCtcnXu, VOf(Bf3));
    __hv_varread_f(&sVarf_FWYWrwez, VOf(Bf0));
    __hv_add_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_tabhead_f(&sTabhead_GkXDTCGs, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_FXfrZoyJ, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_n8kcOb2X, VOf(Bf0));
    __hv_min_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_LxnhQd06, VOf(Bf0));
    __hv_zero_f(VOf(Bf8));
    __hv_lt_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_and_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_cast_fi(VIf(Bf8), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_5c9w64jE, VIi(Bi1), VOf(Bf8));
    __hv_tabread_if(&sTabread_T77uvT3A, VIi(Bi0), VOf(Bf0));
    __hv_sub_f(VIf(Bf8), VIf(Bf0), VOf(Bf8));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf8), VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_azO0Dh2d, VOf(Bf6));
    __hv_mul_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_yIO0IoO8, VIf(Bf6));
    sEnv_process(this, &sEnv_e0ysfJxt, VIf(I0), &sEnv_e0ysfJxt_sendMessage);
    __hv_line_f(&sLine_iNK0kd1a, VOf(Bf6));
    __hv_mul_f(VIf(I0), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf8), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf6), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_SuHx445H, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_ovUYGGt4, VOf(Bf6));
    __hv_rpole_f(&sRPole_Thp5iTs3, VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_ErOtN5uC, VOf(Bf8));
    __hv_rpole_f(&sRPole_7a7xf7nB, VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_QZeF20dW, VIf(Bf8), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_bb859V2n, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    sEnv_process(this, &sEnv_2POCDt2p, VIf(I1), &sEnv_2POCDt2p_sendMessage);
    __hv_line_f(&sLine_4QpfEdXE, VOf(Bf6));
    __hv_mul_f(VIf(I1), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf3), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_78ChnZaJ, VOf(Bf3));
    __hv_mul_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_VVbxaAbT, VOf(Bf6));
    __hv_rpole_f(&sRPole_hcVE6nyM, VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_n6Z6YI58, VOf(Bf3));
    __hv_rpole_f(&sRPole_z6yoCrRK, VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_QdNHGYVO, VIf(Bf3), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_XdCHLXyy, VOf(Bf3));
    __hv_mul_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf8), VIf(Bf3), VOf(Bf6));
    __hv_varwrite_f(&sVarf_RXph4e2T, VIf(Bf6));
    __hv_varread_f(&sVarf_yzCjzI6m, VOf(Bf6));
    __hv_mul_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf3), 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f);
    __hv_line_f(&sLine_L7q7FIL2, VOf(Bf9));
    __hv_line_f(&sLine_r3iNu60z, VOf(Bf10));
    __hv_line_f(&sLine_uk7DfyGo, VOf(Bf11));
    __hv_line_f(&sLine_INc6k1N1, VOf(Bf12));
    __hv_line_f(&sLine_uTyqvbrh, VOf(Bf13));
    __hv_line_f(&sLine_IuYhg605, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf5), VIf(Bf13), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf1), VIf(Bf12), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf4), VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf0), VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf2), VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_iTzRv09Q, VOf(Bf9));
    __hv_rpole_f(&sRPole_C2lDOW9R, VIf(Bf14), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_kxPD1m90, VIf(Bf9), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_zTQFpRj1, VOf(Bf9));
    __hv_mul_f(VIf(Bf14), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf14), 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f);
    __hv_min_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf9), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf14), VIf(Bf9), VOf(Bf9));
    __hv_line_f(&sLine_YcrtMO0L, VOf(Bf14));
    __hv_mul_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_phasor_k_f(&sPhasor_FSFEd9bk, VOf(Bf9));
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
    __hv_tabhead_f(&sTabhead_jijx0Ygx, VOf(Bf0));
    __hv_var_k_f_r(VOf(Bf2), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_B9RvKeCF, VOf(Bf0));
    __hv_mul_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_2FgA2bu1, VOf(Bf9));
    __hv_min_f(VIf(Bf0), VIf(Bf9), VOf(Bf9));
    __hv_zero_f(VOf(Bf0));
    __hv_max_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf2));
    __hv_varread_f(&sVarf_VP0uwlt4, VOf(Bf9));
    __hv_zero_f(VOf(Bf11));
    __hv_lt_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_and_f(VIf(Bf9), VIf(Bf11), VOf(Bf11));
    __hv_add_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_cast_fi(VIf(Bf11), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_vf4sOlWu, VIi(Bi1), VOf(Bf11));
    __hv_tabread_if(&sTabread_fAf2uuT4, VIi(Bi0), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf11), VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf9), VIf(Bf2), VIf(Bf14), VOf(Bf2));
    __hv_varread_f(&sVarf_X5CwKrin, VOf(Bf9));
    __hv_rpole_f(&sRPole_ZhLXGUUx, VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_6nxlvacz, VIf(Bf9), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_zOARqdQh, VOf(Bf9));
    __hv_mul_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_phasor_k_f(&sPhasor_bcgHfh7K, VOf(Bf2));
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
    __hv_tabhead_f(&sTabhead_Tg6YAX7r, VOf(Bf10));
    __hv_var_k_f_r(VOf(Bf11), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_A4BAAQz9, VOf(Bf10));
    __hv_mul_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_Nv3hK4OG, VOf(Bf2));
    __hv_min_f(VIf(Bf10), VIf(Bf2), VOf(Bf2));
    __hv_zero_f(VOf(Bf10));
    __hv_max_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf11), VIf(Bf10), VOf(Bf10));
    __hv_floor_f(VIf(Bf10), VOf(Bf11));
    __hv_varread_f(&sVarf_1Kd8Y3Lb, VOf(Bf2));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf11), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf11), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_vpav2D5S, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_M89uRdMJ, VIi(Bi0), VOf(Bf2));
    __hv_sub_f(VIf(Bf4), VIf(Bf2), VOf(Bf4));
    __hv_sub_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_fma_f(VIf(Bf4), VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf2), VIf(Bf11), VIf(Bf14), VOf(Bf11));
    __hv_varread_f(&sVarf_V8RQPl3H, VOf(Bf2));
    __hv_rpole_f(&sRPole_eVvKaMAN, VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_f2T1D3fv, VIf(Bf2), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_iIEbSKIf, VOf(Bf2));
    __hv_mul_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_x1wgkriA, VOf(Bf11));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_tabwrite_f(&sTabwrite_Cf44efSy, VIf(Bf11));
    __hv_varread_f(&sVarf_TXJ3R1Er, VOf(Bf11));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_tabwrite_f(&sTabwrite_88imfXkm, VIf(Bf11));
    __hv_fma_f(VIf(Bf6), VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_nGNVPNhI, VOf(Bf3));
    __hv_rpole_f(&sRPole_1Z0DLRtc, VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_Cmd3GL0p, VIf(Bf3), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_qtHhwdol, VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf3), VIf(O1), VOf(O1));
    __hv_varread_f(&sVarf_BKVVJeru, VOf(Bf3));
    __hv_mul_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf8), 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f);
    __hv_fma_f(VIf(Bf3), VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_UfOSbOEx, VOf(Bf8));
    __hv_rpole_f(&sRPole_dzSOMLCi, VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_hiOzU6ls, VIf(Bf8), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_mZy4Vrsj, VOf(Bf8));
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
