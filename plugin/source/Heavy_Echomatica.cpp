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
  numBytes += sEnv_init(&sEnv_pPaCea0Q, 256, 512);
  numBytes += sLine_init(&sLine_5tk03qwI);
  numBytes += sRPole_init(&sRPole_0ygceulJ);
  numBytes += sRPole_init(&sRPole_Y2JueFVI);
  numBytes += sDel1_init(&sDel1_KihLJLw4);
  numBytes += sEnv_init(&sEnv_G8elQIR9, 256, 512);
  numBytes += sLine_init(&sLine_9WuE321A);
  numBytes += sRPole_init(&sRPole_wx8pb3qZ);
  numBytes += sRPole_init(&sRPole_g8WjzaGx);
  numBytes += sDel1_init(&sDel1_nQQ3n6IK);
  numBytes += sRPole_init(&sRPole_e7ROxvGz);
  numBytes += sDel1_init(&sDel1_7gdJ3hAA);
  numBytes += sRPole_init(&sRPole_73TIe37y);
  numBytes += sLine_init(&sLine_lXqN4iRI);
  numBytes += sLine_init(&sLine_IfnzQLhe);
  numBytes += sEnv_init(&sEnv_4vd7z8vn, 256, 512);
  numBytes += sLine_init(&sLine_5FHCitB4);
  numBytes += sLine_init(&sLine_GH0JicYq);
  numBytes += sRPole_init(&sRPole_qivqNba2);
  numBytes += sRPole_init(&sRPole_zlBL9vVL);
  numBytes += sDel1_init(&sDel1_c5IPp58X);
  numBytes += sTabwrite_init(&sTabwrite_3ryDsFXD, &hTable_KlX2iAPQ);
  numBytes += sPhasor_k_init(&sPhasor_aPnpsauH, 0.0f, sampleRate);
  numBytes += sPhasor_k_init(&sPhasor_nIzgogvN, 0.0f, sampleRate);
  numBytes += sLine_init(&sLine_QtdEKLsF);
  numBytes += sTabhead_init(&sTabhead_8UZVrfMU, &hTable_KlX2iAPQ);
  numBytes += sTabread_init(&sTabread_BbKOIM25, &hTable_KlX2iAPQ, false);
  numBytes += sTabread_init(&sTabread_s8qNR4Jq, &hTable_KlX2iAPQ, false);
  numBytes += sLine_init(&sLine_pK46mNVM);
  numBytes += sLine_init(&sLine_PzN6ZMEJ);
  numBytes += sTabhead_init(&sTabhead_Az7MaNLm, &hTable_KlX2iAPQ);
  numBytes += sTabread_init(&sTabread_RiSuRn7I, &hTable_KlX2iAPQ, false);
  numBytes += sTabread_init(&sTabread_U0KHma9n, &hTable_KlX2iAPQ, false);
  numBytes += sLine_init(&sLine_Wuq5QTjK);
  numBytes += sLine_init(&sLine_RQR5barZ);
  numBytes += sTabhead_init(&sTabhead_LkWvesFU, &hTable_KlX2iAPQ);
  numBytes += sTabread_init(&sTabread_wuN66Sqn, &hTable_KlX2iAPQ, false);
  numBytes += sTabread_init(&sTabread_wpFfVHH6, &hTable_KlX2iAPQ, false);
  numBytes += sLine_init(&sLine_Gjp13e1h);
  numBytes += sLine_init(&sLine_NWk3dnAI);
  numBytes += sTabhead_init(&sTabhead_RnN1yOYM, &hTable_KlX2iAPQ);
  numBytes += sTabread_init(&sTabread_7tXYrROZ, &hTable_KlX2iAPQ, false);
  numBytes += sTabread_init(&sTabread_LPypKicd, &hTable_KlX2iAPQ, false);
  numBytes += sLine_init(&sLine_3ALeQLQv);
  numBytes += sLine_init(&sLine_J3QnOEuz);
  numBytes += sTabhead_init(&sTabhead_XT24Cwgt, &hTable_KlX2iAPQ);
  numBytes += sTabread_init(&sTabread_74ss9Hfg, &hTable_KlX2iAPQ, false);
  numBytes += sTabread_init(&sTabread_ORQcunzq, &hTable_KlX2iAPQ, false);
  numBytes += sLine_init(&sLine_fZ3YLsoG);
  numBytes += sLine_init(&sLine_LmtXGUwF);
  numBytes += sTabhead_init(&sTabhead_LUoFInNN, &hTable_KlX2iAPQ);
  numBytes += sTabread_init(&sTabread_YcFYxIO3, &hTable_KlX2iAPQ, false);
  numBytes += sTabread_init(&sTabread_YhrzFgVz, &hTable_KlX2iAPQ, false);
  numBytes += sLine_init(&sLine_s1FBgWMT);
  numBytes += sLine_init(&sLine_dC7kt0HP);
  numBytes += sLine_init(&sLine_WuwPGekv);
  numBytes += sLine_init(&sLine_Sle7BZQB);
  numBytes += sLine_init(&sLine_ZIMEdO1m);
  numBytes += sLine_init(&sLine_J5GDmO4u);
  numBytes += sLine_init(&sLine_KxSA6zVM);
  numBytes += sBiquad_k_init(&sBiquad_k_yxBojdDZ, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  numBytes += sRPole_init(&sRPole_eKWdO144);
  numBytes += sDel1_init(&sDel1_b8oApPDi);
  numBytes += sRPole_init(&sRPole_RLrzni5y);
  numBytes += sDel1_init(&sDel1_5g9rYSmR);
  numBytes += sRPole_init(&sRPole_fWh222C8);
  numBytes += sDel1_init(&sDel1_vtWnVq2q);
  numBytes += sRPole_init(&sRPole_gtc4Xofv);
  numBytes += sRPole_init(&sRPole_QuIIAchg);
  numBytes += sRPole_init(&sRPole_BQZQgzuC);
  numBytes += sRPole_init(&sRPole_PUOj4U0I);
  numBytes += sDel1_init(&sDel1_5m2cmZEg);
  numBytes += sLine_init(&sLine_jZ2gfeCD);
  numBytes += sLine_init(&sLine_Tk0EguYy);
  numBytes += sLine_init(&sLine_EABxDxdb);
  numBytes += sLine_init(&sLine_CHmxVxNv);
  numBytes += sLine_init(&sLine_ga7zaPCl);
  numBytes += sBiquad_init(&sBiquad_s_U5u8kRTo);
  numBytes += sLine_init(&sLine_bWVtzwst);
  numBytes += sPhasor_k_init(&sPhasor_usa4Ub64, 0.3f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_vvRWqwFx, &hTable_qokxQ0Sq);
  numBytes += sTabread_init(&sTabread_Ib1wsXtX, &hTable_qokxQ0Sq, false);
  numBytes += sTabread_init(&sTabread_Gy3m90ZN, &hTable_qokxQ0Sq, false);
  numBytes += sRPole_init(&sRPole_CzXl33Qs);
  numBytes += sDel1_init(&sDel1_U9BsPYrW);
  numBytes += sPhasor_k_init(&sPhasor_bRVuog3r, 0.5f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_8LHPwofh, &hTable_92uuwKZ0);
  numBytes += sTabread_init(&sTabread_J7ZS2uL0, &hTable_92uuwKZ0, false);
  numBytes += sTabread_init(&sTabread_c6tkiKCb, &hTable_92uuwKZ0, false);
  numBytes += sRPole_init(&sRPole_BJVtIODN);
  numBytes += sDel1_init(&sDel1_suarc26x);
  numBytes += sTabwrite_init(&sTabwrite_N7dD3VPo, &hTable_92uuwKZ0);
  numBytes += sTabwrite_init(&sTabwrite_LquqiFHr, &hTable_qokxQ0Sq);
  numBytes += sRPole_init(&sRPole_aJYpWFzg);
  numBytes += sDel1_init(&sDel1_Qw8yRPim);
  numBytes += sRPole_init(&sRPole_7ARP26sY);
  numBytes += sDel1_init(&sDel1_ZaDG8kYY);
  numBytes += cVar_init_s(&cVar_ZBX0vijZ, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_VW82Vnhn, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_rZ7Dq93T, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_NVshsTO4, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_K7dny3oR, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_Boiwkg60, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ifktVI4W, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_rCSHX2Lo, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_zsLDU8e1, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_tonOgKlu, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_mGb7jy5Y, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_cUcjz8Sa, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_oaLaAl6J, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_EpSii69K, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_e2aWaPZA, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_fL7wpECJ, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_5zlwclED, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_9eKTMVPs, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_XJjNCGDZ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_tg9hu2iB, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_Wo9b06xU, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_MeLM0WI3, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_eCuV2tNd, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_gOhapywr, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_jg0NimEu, 0.0f);
  numBytes += cVar_init_f(&cVar_1mrw22e2, 0.0f);
  numBytes += cVar_init_f(&cVar_Vehw1ryD, 0.0f);
  numBytes += cVar_init_f(&cVar_ZKz43ch9, 0.0f);
  numBytes += cVar_init_f(&cVar_pKfgscKv, 0.0f);
  numBytes += cVar_init_f(&cVar_DSSbwCxD, 0.0f);
  numBytes += cVar_init_f(&cVar_BsamKs5A, 0.0f);
  numBytes += cVar_init_f(&cVar_8wdtTQiJ, 0.0f);
  numBytes += cVar_init_f(&cVar_xjRNSjs8, 0.0f);
  numBytes += cVar_init_f(&cVar_au4GVUkh, 0.0f);
  numBytes += cVar_init_f(&cVar_0y0oe6O8, 0.0f);
  numBytes += cVar_init_f(&cVar_JNMPZZWZ, 0.0f);
  numBytes += cPack_init(&cPack_3MCPxygc, 2, 0.0f, 20.0f);
  numBytes += cPack_init(&cPack_RsXppPG2, 2, 0.0f, 1800.0f);
  numBytes += cPack_init(&cPack_aUzhieVF, 2, 0.0f, 1600.0f);
  numBytes += cPack_init(&cPack_58q6hkkJ, 2, 0.0f, 1300.0f);
  numBytes += cPack_init(&cPack_4W8qBkvx, 2, 0.0f, 1000.0f);
  numBytes += cPack_init(&cPack_xzcakM8Z, 2, 0.0f, 800.0f);
  numBytes += cPack_init(&cPack_im0ljOOB, 2, 0.0f, 600.0f);
  numBytes += cSlice_init(&cSlice_jjbL9fcg, 27, 1);
  numBytes += cSlice_init(&cSlice_SFc0ngZg, 26, 1);
  numBytes += cSlice_init(&cSlice_MZ5RDQFT, 25, 1);
  numBytes += cSlice_init(&cSlice_tEO8Cwmj, 24, 1);
  numBytes += cSlice_init(&cSlice_i09AmKEz, 23, 1);
  numBytes += cSlice_init(&cSlice_3SJgP6Is, 22, 1);
  numBytes += cSlice_init(&cSlice_7AggxtAp, 21, 1);
  numBytes += cSlice_init(&cSlice_Rhp2Nee8, 20, 1);
  numBytes += cSlice_init(&cSlice_KXJQss8c, 19, 1);
  numBytes += cSlice_init(&cSlice_LvMRfudm, 18, 1);
  numBytes += cSlice_init(&cSlice_WLuoSGHf, 17, 1);
  numBytes += cSlice_init(&cSlice_eCjzGlE9, 16, 1);
  numBytes += cSlice_init(&cSlice_almH7dZA, 15, 1);
  numBytes += cSlice_init(&cSlice_FznAyo4M, 14, 1);
  numBytes += cSlice_init(&cSlice_XLZUH8SM, 13, 1);
  numBytes += cSlice_init(&cSlice_CaCAELeI, 12, 1);
  numBytes += cSlice_init(&cSlice_l38REkUR, 11, 1);
  numBytes += cSlice_init(&cSlice_vDJooBx9, 10, 1);
  numBytes += cSlice_init(&cSlice_rtAl3abs, 9, 1);
  numBytes += cSlice_init(&cSlice_S1HdMiGl, 8, 1);
  numBytes += cSlice_init(&cSlice_nqMMylH4, 7, 1);
  numBytes += cSlice_init(&cSlice_ATGqo0q8, 6, 1);
  numBytes += cSlice_init(&cSlice_uqKwPqlp, 5, 1);
  numBytes += cSlice_init(&cSlice_LJP381Cp, 4, 1);
  numBytes += cSlice_init(&cSlice_aKOg1CIV, 3, 1);
  numBytes += cSlice_init(&cSlice_oqH76OE4, 2, 1);
  numBytes += cSlice_init(&cSlice_kOBUNfIa, 1, 1);
  numBytes += cSlice_init(&cSlice_2juoramR, 0, 1);
  numBytes += cVar_init_f(&cVar_TtEA5uFP, 0.0f);
  numBytes += cVar_init_f(&cVar_Lc5L8MxG, 0.0f);
  numBytes += cVar_init_f(&cVar_FVoyvxrl, 0.0f);
  numBytes += cVar_init_f(&cVar_GUaUGrqP, 0.0f);
  numBytes += cVar_init_f(&cVar_PXSh8J7u, 0.0f);
  numBytes += cVar_init_f(&cVar_1BeYt82i, 0.0f);
  numBytes += cSlice_init(&cSlice_cIaO77nr, 3, 1);
  numBytes += cSlice_init(&cSlice_4glTvNqq, 2, 1);
  numBytes += cSlice_init(&cSlice_DfUfn540, 1, 1);
  numBytes += cSlice_init(&cSlice_bo3jF87b, 0, 1);
  numBytes += cPack_init(&cPack_DvKb09qL, 2, 0.0f, 50.0f);
  numBytes += cDelay_init(this, &cDelay_QmSzw3ad, 0.0f);
  numBytes += cDelay_init(this, &cDelay_wwd9EeW8, 0.0f);
  numBytes += hTable_init(&hTable_92uuwKZ0, 256);
  numBytes += cVar_init_f(&cVar_jorD5DYR, 0.0f);
  numBytes += cVar_init_s(&cVar_V1VNdvGj, "del-1001-delayD");
  numBytes += sVarf_init(&sVarf_pTOYQr7z, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_oAqTNnCZ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_31FviNCc, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_YV7h3KRS, "del-1001-delayC");
  numBytes += sVarf_init(&sVarf_6EM0f99h, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_H0FNVmNT, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_oKrFTgkJ, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_5RSUNf8v, 0.0f);
  numBytes += cDelay_init(this, &cDelay_MRILLDFp, 0.0f);
  numBytes += hTable_init(&hTable_qokxQ0Sq, 256);
  numBytes += sVarf_init(&sVarf_qeije7bC, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_7JcVfSsG, 3.0f);
  numBytes += cBinop_init(&cBinop_8LDbrdJD, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_YTHoNWjB, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_rJZdbKVW, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_Oz0DRgtX, 3.0f);
  numBytes += cBinop_init(&cBinop_WVrdbk84, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_FVjAgBzt, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_h8Dw5Ur0, 1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_hmpd9foS, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_y0h6WMYQ, 0.0f);
  numBytes += cVar_init_f(&cVar_dIVUMNVk, 0.0f);
  numBytes += cVar_init_f(&cVar_Qwk9UEfo, 0.0f);
  numBytes += cPack_init(&cPack_gCiBhjJO, 2, 0.0f, 100.0f);
  numBytes += cPack_init(&cPack_mb6ZyVTd, 2, 0.0f, 100.0f);
  numBytes += cVar_init_f(&cVar_CGQ5hRI6, 0.0f);
  numBytes += cVar_init_f(&cVar_9aZRLMhz, 0.0f);
  numBytes += cVar_init_f(&cVar_ZZ9K7w23, 0.0f);
  numBytes += cBinop_init(&cBinop_rCcskG72, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_iwiiDS8I, 0.0f); // __pow
  numBytes += cIf_init(&cIf_PhqT9nf0, false);
  numBytes += cBinop_init(&cBinop_Ah029XCL, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_fDBFAMgj, 74.0f);
  numBytes += cVar_init_f(&cVar_3JMVzACb, 3.0f);
  numBytes += cSlice_init(&cSlice_mbzQ7Hys, 1, -1);
  numBytes += cVar_init_f(&cVar_X8v5yRxE, 1.0f);
  numBytes += cSlice_init(&cSlice_BizQxcMn, 1, -1);
  numBytes += cVar_init_f(&cVar_yK9ArSdb, 70.0f);
  numBytes += cBinop_init(&cBinop_28IMXdcX, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_NLrYRUIS, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_QIIA8QzU, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_vVbyX7Ns, 3000.0f);
  numBytes += cBinop_init(&cBinop_Qtx3eU5a, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_wMRFy9cR, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_qPrMF0IE, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_IyCFlqbs, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_6qmZHq6D, 400.0f);
  numBytes += cBinop_init(&cBinop_y9bW8hbk, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_cMKh3Va3, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_zIWqfNtG, false);
  numBytes += cVar_init_f(&cVar_AkXfnyjj, 0.0f);
  numBytes += cVar_init_f(&cVar_vqutBfUj, 0.0f);
  numBytes += cPack_init(&cPack_yn5QnQLr, 3, 0.0f, 500.0f, 100.0f);
  numBytes += cDelay_init(this, &cDelay_1yyjdzWp, 0.0f);
  numBytes += cVar_init_f(&cVar_YxhxlgHP, 20.0f);
  numBytes += cBinop_init(&cBinop_SI7tQJlr, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_rTlXGVja, 0.0f);
  numBytes += cSlice_init(&cSlice_n3oaCrzN, 1, -1);
  numBytes += cSlice_init(&cSlice_dm5nOGlO, 1, -1);
  numBytes += cVar_init_f(&cVar_v3jDn0ej, 0.0f);
  numBytes += cVar_init_f(&cVar_7AE5iZFa, 20.0f);
  numBytes += cVar_init_f(&cVar_7zltO9UF, 0.0f);
  numBytes += cVar_init_f(&cVar_oh97udZp, 0.0f);
  numBytes += cVar_init_f(&cVar_tIYfeK9x, 0.0f);
  numBytes += cSlice_init(&cSlice_ld56HVhr, 1, 1);
  numBytes += cSlice_init(&cSlice_1rQCwGYx, 0, 1);
  numBytes += cBinop_init(&cBinop_wZwrJfIC, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_dbGiEvlj, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_TJgP8PL4, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_8B1MWrWp, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_MNrWkRg3, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_bXqPyUZQ, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_DJgM9tsg, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_9dXXLNMb, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_qR5RIC19, 0.0f);
  numBytes += cVar_init_f(&cVar_xZ2po1Y0, 0.0f);
  numBytes += cVar_init_f(&cVar_3ju0D3ym, 0.0f);
  numBytes += cVar_init_f(&cVar_aOcf58dG, 0.0f);
  numBytes += cVar_init_f(&cVar_zYPboFb8, 0.0f);
  numBytes += cVar_init_f(&cVar_phsN5h8x, 0.0f);
  numBytes += sVarf_init(&sVarf_wCTuSVuu, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_GA6lAdyk, 8.0f);
  numBytes += cBinop_init(&cBinop_4Ihhti7T, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_LtmKoumS, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_CgLhJgoZ, 0.0f);
  numBytes += cVar_init_f(&cVar_V7705zhv, 0.0f);
  numBytes += cBinop_init(&cBinop_vNbZ8f1f, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_IHCsvMSp, 0.0f); // __pow
  numBytes += cIf_init(&cIf_NptQtf5n, false);
  numBytes += cBinop_init(&cBinop_3lUZGe9S, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_3UGafTvM, 82.0f);
  numBytes += cVar_init_f(&cVar_n0qdykUf, 21.0f);
  numBytes += cSlice_init(&cSlice_ATnBocE5, 1, -1);
  numBytes += cVar_init_f(&cVar_11ruDsH8, 1.0f);
  numBytes += cSlice_init(&cSlice_Lop9Fhva, 1, -1);
  numBytes += cVar_init_f(&cVar_FA7DGMnf, 70.0f);
  numBytes += cBinop_init(&cBinop_Tdqh6gMJ, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_qn81jUzO, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_iYtVRI00, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_l60Eph7U, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_AIPrZKLj, 8.0f);
  numBytes += cBinop_init(&cBinop_MvUjflak, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_dhwHxgEr, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_pJvNsAun, 0.0f);
  numBytes += cVar_init_f(&cVar_YHNz9eUQ, 0.0f);
  numBytes += cBinop_init(&cBinop_YUHOWSdo, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_6tL9RlrZ, 0.0f); // __pow
  numBytes += cIf_init(&cIf_qdtMNG8o, false);
  numBytes += cBinop_init(&cBinop_JEdPIJGn, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_FwWIkWDy, 82.0f);
  numBytes += cVar_init_f(&cVar_QkNHCfQC, 21.0f);
  numBytes += cSlice_init(&cSlice_plBPOsEl, 1, -1);
  numBytes += cVar_init_f(&cVar_t00779JR, 1.0f);
  numBytes += cSlice_init(&cSlice_gT9s0Mul, 1, -1);
  numBytes += cVar_init_f(&cVar_dKzvbFul, 70.0f);
  numBytes += cBinop_init(&cBinop_YdBsT4a3, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_qwm89V91, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_BRG0zOBJ, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_oRuz6YmX, 10000.0f);
  numBytes += cBinop_init(&cBinop_BMrYRwsD, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_4rnzEJBM, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_oUdZ6kti, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_45ZSTNji, 10000.0f);
  numBytes += cBinop_init(&cBinop_jTBbBDvF, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_gwsF1rja, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_61c9Rwrh, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_gD4Iszoa, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_pbCayt9e, 20.0f);
  numBytes += cBinop_init(&cBinop_JLrBN3Ku, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_3BTUiJoT, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Ou65T15S, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_NjISllS4, 20.0f);
  numBytes += cBinop_init(&cBinop_3N9YY8Hj, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_PPqyASav, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_6MTxQjC5, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_yW89w0j5, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_2yEfAsrE, 0.0f);
  numBytes += cDelay_init(this, &cDelay_yaPHCuqT, 0.0f);
  numBytes += hTable_init(&hTable_KlX2iAPQ, 256);
  numBytes += cVar_init_f(&cVar_t4m6f9wB, 0.0f);
  numBytes += cVar_init_f(&cVar_PoPR0Vow, 0.0f);
  numBytes += cVar_init_f(&cVar_jz7T5mKM, 1.0f);
  numBytes += cVar_init_f(&cVar_nuyJPRoa, 0.0f);
  numBytes += sVarf_init(&sVarf_lATAph7W, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_FF7ZUiX2, 0.0f);
  numBytes += cBinop_init(&cBinop_9j14yTkF, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_IwMkmTnY, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_qJVPXv5S, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_mIv7Kxfa, 0.0f);
  numBytes += cBinop_init(&cBinop_QWWUfhoR, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_DGh3OCUz, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_8a76m6cE, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_U9bsdn9M, 0.0f);
  numBytes += cBinop_init(&cBinop_9fZrQEDm, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_t4SY5cF2, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_OrvGI8kJ, 22050.0f);
  numBytes += cBinop_init(&cBinop_ySUtyDhj, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_hzKF4Wjp, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Qe9bKwoQ, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_TKeO55Hq, 22050.0f);
  numBytes += cBinop_init(&cBinop_HnF1M8FC, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_xsQTUgwN, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_8FcMercI, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_w6mr0nEq, 22050.0f);
  numBytes += cBinop_init(&cBinop_8LoFiLbH, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_BpT9fg9x, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Ik2dr6KP, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_8Ekdq3zx, 22050.0f);
  numBytes += cVar_init_f(&cVar_suet93HZ, 1.0f);
  numBytes += cBinop_init(&cBinop_4uuXdVZQ, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_ficoLHFV, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_90JDznGu, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_U4ZOV1yM, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_XzxtVIrd, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_3zoBRA9m, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_EnBrlJPy, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Ug1gVG80, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_6z7YJCe6, 30.0f);
  numBytes += cBinop_init(&cBinop_oB9AXhVa, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_nIwX9piK, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_aUGOnwhf, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_n8JVCwN1, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_FTWRJhwo, 0.0f);
  numBytes += cBinop_init(&cBinop_vxpQzxvh, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_dDfh8ZLW, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_izj9NrKD, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_gOQCnlCE, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_wdpX2yOn, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ctZgfpPU, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_GGLNTLaF, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_SSoLiQZk, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_mrkDHjOA, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_GQeBvP0d, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_p6laT1NV, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_wcjyKyY5, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_VythjB1n, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_9Y8iYECP, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_2f20jRuT, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_QPeicZrt, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_rquH9Nd6, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_6po9KaIF, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_4ptwcW2J, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_Xa8A0yWz, 4500.0f);
  numBytes += cVar_init_f(&cVar_mLn9ZU7U, 20.0f);
  numBytes += cVar_init_f(&cVar_kNMLNRQp, -8.0f);
  numBytes += cBinop_init(&cBinop_gtTXDqyR, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_wSjffKq0, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_qGgTj4h6, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_t1hgJXZK, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_jeGJoJfl, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ZjSp5M5v, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_smtFpTFo, 0.0f); // __pow
  numBytes += cBinop_init(&cBinop_RJSmP8vt, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_vnz8ba5z, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_i1xjKyEv, 20.0f);
  numBytes += cBinop_init(&cBinop_4kLmo9Wf, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_oznP1bfM, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_mvA39Q4e, 8000.0f);
  numBytes += cBinop_init(&cBinop_xYfJ5Eq5, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_Ezuf8H8w, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_psfl2LK7, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_CF0dQMXH, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_4iiDnMuo, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_1j2Et6jC, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_YXPl5FZ8, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_RcFRPioC, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Kf08D4tK, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_2nDZOFRo, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_rVRMmezu, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ggqvOpj6, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ROGXNKfn, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_yL0G8we6, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_4aJAznFg, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_gc047pvq, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_JDbaqRLO, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_UDsfUiVA, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_GrvvJFvH, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_CL1J2NGd, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_lwuISAIn, 0.0f, 0.0f, false);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_Echomatica::~Heavy_Echomatica() {
  sEnv_free(&sEnv_pPaCea0Q);
  sEnv_free(&sEnv_G8elQIR9);
  sEnv_free(&sEnv_4vd7z8vn);
  cPack_free(&cPack_3MCPxygc);
  cPack_free(&cPack_RsXppPG2);
  cPack_free(&cPack_aUzhieVF);
  cPack_free(&cPack_58q6hkkJ);
  cPack_free(&cPack_4W8qBkvx);
  cPack_free(&cPack_xzcakM8Z);
  cPack_free(&cPack_im0ljOOB);
  cPack_free(&cPack_DvKb09qL);
  hTable_free(&hTable_92uuwKZ0);
  hTable_free(&hTable_qokxQ0Sq);
  cPack_free(&cPack_gCiBhjJO);
  cPack_free(&cPack_mb6ZyVTd);
  cPack_free(&cPack_yn5QnQLr);
  hTable_free(&hTable_KlX2iAPQ);
}

HvTable *Heavy_Echomatica::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0x6F28B8EB: return &hTable_92uuwKZ0; // del-1001-delayD
    case 0xA74180A2: return &hTable_qokxQ0Sq; // del-1001-delayC
    case 0xC7C6279C: return &hTable_KlX2iAPQ; // del-1001-delayA
    default: return nullptr;
  }
}

void Heavy_Echomatica::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0x22C9B907: { // Vari
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_RxTbkp3o_sendMessage);
      break;
    }
    case 0xBC81AC40: { // 1148-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_gapv4GQA_sendMessage);
      break;
    }
    case 0xA048D52F: { // 1148-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_uLORcr45_sendMessage);
      break;
    }
    case 0xA2B0A880: { // 1218-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_5nunucmi_sendMessage);
      break;
    }
    case 0xE351C9CC: { // 1218-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_g2BDPDFV_sendMessage);
      break;
    }
    case 0xE091EC31: { // 1240-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_MxIo00vL_sendMessage);
      break;
    }
    case 0xAE9102A0: { // 1240-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_BlmO6P8t_sendMessage);
      break;
    }
    case 0x613FB00D: { // 1381-A
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_znTxvnLE_sendMessage);
      break;
    }
    case 0x84B978CE: { // 1381-sqrtA-alpha-2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_l8EXQpjY_sendMessage);
      break;
    }
    case 0xD75E56F: { // 1381-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_oUhDq6Oi_sendMessage);
      break;
    }
    case 0xA720EEDB: { // 1381-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_m2O7X6KD_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ewwpZIJu_sendMessage);
      break;
    }
    case 0xE68AB11B: { // chrs
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_hL4kD74N_sendMessage);
      break;
    }
    case 0xBA8CED4E: { // dry
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ksqSnZ9n_sendMessage);
      break;
    }
    case 0x63E722C0: { // echo
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_e930eMGa_sendMessage);
      break;
    }
    case 0x8FA433B0: { // f1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_LnKEUcx4_sendMessage);
      break;
    }
    case 0xEE0EB120: { // f2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_gOSPxtdh_sendMessage);
      break;
    }
    case 0x4FFCF19F: { // f3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_bBhwQgxU_sendMessage);
      break;
    }
    case 0x2AF9F5EB: { // f4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_J2RHWxLK_sendMessage);
      break;
    }
    case 0xC6F6EBB2: { // f5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_vPERjo7n_sendMessage);
      break;
    }
    case 0x775D6E5E: { // f6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_WnfI3dDu_sendMessage);
      break;
    }
    case 0xBB6123FD: { // fdbck_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_wCACvMtB_sendMessage);
      break;
    }
    case 0xF1E7CD16: { // feedback
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_8DPz5x3r_sendMessage);
      break;
    }
    case 0xC7AF3F72: { // h1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_0vKihRTX_sendMessage);
      break;
    }
    case 0x9BEBB079: { // h2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_qEH6SOej_sendMessage);
      break;
    }
    case 0xAB1137FD: { // h3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_XNIBjck6_sendMessage);
      break;
    }
    case 0x2B4C6DE1: { // h4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_swCg5UQd_sendMessage);
      break;
    }
    case 0x2541E77D: { // h5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_2ayxV1qK_sendMessage);
      break;
    }
    case 0xE7F6D341: { // h6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_QjiENGh7_sendMessage);
      break;
    }
    case 0x5667A4DA: { // head1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_R86ZGuyh_sendMessage);
      break;
    }
    case 0xAD6B31A5: { // head2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_jbYANENB_sendMessage);
      break;
    }
    case 0x8A2BD450: { // head3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_FPNPIKFL_sendMessage);
      break;
    }
    case 0xCF5C829A: { // head4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_spqnjU0T_sendMessage);
      break;
    }
    case 0xEE70DFBC: { // head5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_NuN2oEQK_sendMessage);
      break;
    }
    case 0x8E4B9939: { // head6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ELngckYR_sendMessage);
      break;
    }
    case 0x7E24361: { // hp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_TcqKnyim_sendMessage);
      break;
    }
    case 0x674D12F6: { // hp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_hAWboubS_sendMessage);
      break;
    }
    case 0x6A20C3F5: { // hp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_sJmWkrXq_sendMessage);
      break;
    }
    case 0x123E8795: { // lp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_3OmbRRyY_sendMessage);
      break;
    }
    case 0x4588BD1: { // lp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_GwynIRG3_sendMessage);
      break;
    }
    case 0xB7298D49: { // lp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_vetXD7Vd_sendMessage);
      break;
    }
    case 0x64BD0F15: { // mf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_yXTnuxbf_sendMessage);
      break;
    }
    case 0x5A12F82E: { // mg
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_DcdXiS8R_sendMessage);
      break;
    }
    case 0x2C9C49A7: { // mq
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_dxvUogR3_sendMessage);
      break;
    }
    case 0xC8D93A6D: { // tapehead_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_vhtz7tBc_sendMessage);
      break;
    }
    case 0xB25D05EB: { // varispeed
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_d4MEMx31_sendMessage);
      break;
    }
    case 0x8ADB5B6B: { // varispeed_enable
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_hXgNJXUl_sendMessage);
      break;
    }
    case 0x7BB47B7B: { // wnf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_rlp9pvVl_sendMessage);
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


void Heavy_Echomatica::cMsg_w09P6w92_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_kBXlHBfy_sendMessage);
}

void Heavy_Echomatica::cSystem_kBXlHBfy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Xad3nzPq_sendMessage);
}

void Heavy_Echomatica::cVar_ZBX0vijZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_b2x44DVa_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_yBZ2PkJN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_FknmLx9d_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_VW82Vnhn, m);
}

void Heavy_Echomatica::cBinop_Xad3nzPq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_rZ7Dq93T, m);
}

void Heavy_Echomatica::cMsg_b2x44DVa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_yBZ2PkJN_sendMessage);
}

void Heavy_Echomatica::cBinop_FknmLx9d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_NVshsTO4, m);
}

void Heavy_Echomatica::cMsg_k8HveDxw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_jRryWCPD_sendMessage);
}

void Heavy_Echomatica::cSystem_jRryWCPD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_lyUn3Ew6_sendMessage);
}

void Heavy_Echomatica::cVar_K7dny3oR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SjFHo2Ub_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_At6aobGG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_Bcf7PJuP_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Boiwkg60, m);
}

void Heavy_Echomatica::cBinop_lyUn3Ew6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ifktVI4W, m);
}

void Heavy_Echomatica::cMsg_SjFHo2Ub_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_At6aobGG_sendMessage);
}

void Heavy_Echomatica::cBinop_Bcf7PJuP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_rCSHX2Lo, m);
}

void Heavy_Echomatica::cMsg_uLYPI983_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_7mbthbfG_sendMessage);
}

void Heavy_Echomatica::cSystem_7mbthbfG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_nz4fVsdn_sendMessage);
}

void Heavy_Echomatica::cVar_zsLDU8e1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qbsNMeNL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_SMBm5Zg2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_cepSySrl_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_tonOgKlu, m);
}

void Heavy_Echomatica::cBinop_nz4fVsdn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_mGb7jy5Y, m);
}

void Heavy_Echomatica::cMsg_qbsNMeNL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_SMBm5Zg2_sendMessage);
}

void Heavy_Echomatica::cBinop_cepSySrl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_cUcjz8Sa, m);
}

void Heavy_Echomatica::cMsg_x8VKJF2L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Rx6mf2JG_sendMessage);
}

void Heavy_Echomatica::cSystem_Rx6mf2JG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_2Fbb93st_sendMessage);
}

void Heavy_Echomatica::cVar_oaLaAl6J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3N9bOZus_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_FN3at4Dv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_JEBWkODj_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_EpSii69K, m);
}

void Heavy_Echomatica::cBinop_2Fbb93st_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_e2aWaPZA, m);
}

void Heavy_Echomatica::cMsg_3N9bOZus_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_FN3at4Dv_sendMessage);
}

void Heavy_Echomatica::cBinop_JEBWkODj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_fL7wpECJ, m);
}

void Heavy_Echomatica::cCast_FeIkJjZk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LGYA5LfH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_71y2IGVC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_T1AgmYOo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_0SUniuUK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_w9kdYV3n_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_LTARca0g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_t9ucE5Tv_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_en6kJPMe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FtUPki1M_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_YtNr35W4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VEdZp7KO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_EGY8pRB8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_N4LsNAZs_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_ws4gZtCA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9z10GhSN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_KHnUs1XT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YciJf6pl_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_rkRcqMOY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2MoCeuJc_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_1PuPVVcO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zyDPvylz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_ea0Vsg2H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_z6gbLMwk_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_C9QGQ0QF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_s0QBkfQn_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_qqs4dW6I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_voP7swPS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_fpcZwdC2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6vPiQOuD_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_7HphLCWO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QuM2THtQ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_DN8ATu5N_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vueIZZy5_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0l0VZMg1_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xMtmurHe_sendMessage);
      break;
    }
    case 0x40400000: { // "3.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FdRrZE3E_sendMessage);
      break;
    }
    case 0x40800000: { // "4.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_41vqQBgL_sendMessage);
      break;
    }
    case 0x40A00000: { // "5.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rXBFF4LE_sendMessage);
      break;
    }
    case 0x40C00000: { // "6.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_acaqoHXz_sendMessage);
      break;
    }
    case 0x40E00000: { // "7.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3rRncwBK_sendMessage);
      break;
    }
    case 0x41000000: { // "8.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_slx4Avsc_sendMessage);
      break;
    }
    case 0x41100000: { // "9.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_73X40igN_sendMessage);
      break;
    }
    case 0x41200000: { // "10.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SB8ABYSx_sendMessage);
      break;
    }
    case 0x41300000: { // "11.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AmGT6m08_sendMessage);
      break;
    }
    case 0x41400000: { // "12.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FpPWzK8V_sendMessage);
      break;
    }
    case 0x41500000: { // "13.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dNgkbOqo_sendMessage);
      break;
    }
    case 0x41600000: { // "14.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mj8pc2IQ_sendMessage);
      break;
    }
    case 0x41700000: { // "15.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2HkOj1Et_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_vueIZZy5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1PuPVVcO_sendMessage);
}

void Heavy_Echomatica::cCast_0l0VZMg1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qqs4dW6I_sendMessage);
}

void Heavy_Echomatica::cCast_xMtmurHe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KHnUs1XT_sendMessage);
}

void Heavy_Echomatica::cCast_FdRrZE3E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rkRcqMOY_sendMessage);
}

void Heavy_Echomatica::cCast_41vqQBgL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_C9QGQ0QF_sendMessage);
}

void Heavy_Echomatica::cCast_rXBFF4LE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ea0Vsg2H_sendMessage);
}

void Heavy_Echomatica::cCast_acaqoHXz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_en6kJPMe_sendMessage);
}

void Heavy_Echomatica::cCast_3rRncwBK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fpcZwdC2_sendMessage);
}

void Heavy_Echomatica::cCast_slx4Avsc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7HphLCWO_sendMessage);
}

void Heavy_Echomatica::cCast_73X40igN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YtNr35W4_sendMessage);
}

void Heavy_Echomatica::cCast_SB8ABYSx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_71y2IGVC_sendMessage);
}

void Heavy_Echomatica::cCast_AmGT6m08_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0SUniuUK_sendMessage);
}

void Heavy_Echomatica::cCast_FpPWzK8V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LTARca0g_sendMessage);
}

void Heavy_Echomatica::cCast_dNgkbOqo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FeIkJjZk_sendMessage);
}

void Heavy_Echomatica::cCast_mj8pc2IQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ws4gZtCA_sendMessage);
}

void Heavy_Echomatica::cCast_2HkOj1Et_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EGY8pRB8_sendMessage);
}

void Heavy_Echomatica::cMsg_YciJf6pl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_jjbL9fcg, 0, m, &cSlice_jjbL9fcg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SFc0ngZg, 0, m, &cSlice_SFc0ngZg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MZ5RDQFT, 0, m, &cSlice_MZ5RDQFT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tEO8Cwmj, 0, m, &cSlice_tEO8Cwmj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_i09AmKEz, 0, m, &cSlice_i09AmKEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3SJgP6Is, 0, m, &cSlice_3SJgP6Is_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7AggxtAp, 0, m, &cSlice_7AggxtAp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rhp2Nee8, 0, m, &cSlice_Rhp2Nee8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KXJQss8c, 0, m, &cSlice_KXJQss8c_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LvMRfudm, 0, m, &cSlice_LvMRfudm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WLuoSGHf, 0, m, &cSlice_WLuoSGHf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eCjzGlE9, 0, m, &cSlice_eCjzGlE9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_almH7dZA, 0, m, &cSlice_almH7dZA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FznAyo4M, 0, m, &cSlice_FznAyo4M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XLZUH8SM, 0, m, &cSlice_XLZUH8SM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_CaCAELeI, 0, m, &cSlice_CaCAELeI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l38REkUR, 0, m, &cSlice_l38REkUR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vDJooBx9, 0, m, &cSlice_vDJooBx9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtAl3abs, 0, m, &cSlice_rtAl3abs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S1HdMiGl, 0, m, &cSlice_S1HdMiGl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nqMMylH4, 0, m, &cSlice_nqMMylH4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ATGqo0q8, 0, m, &cSlice_ATGqo0q8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uqKwPqlp, 0, m, &cSlice_uqKwPqlp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LJP381Cp, 0, m, &cSlice_LJP381Cp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aKOg1CIV, 0, m, &cSlice_aKOg1CIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oqH76OE4, 0, m, &cSlice_oqH76OE4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kOBUNfIa, 0, m, &cSlice_kOBUNfIa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2juoramR, 0, m, &cSlice_2juoramR_sendMessage);
}

void Heavy_Echomatica::cMsg_voP7swPS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_jjbL9fcg, 0, m, &cSlice_jjbL9fcg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SFc0ngZg, 0, m, &cSlice_SFc0ngZg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MZ5RDQFT, 0, m, &cSlice_MZ5RDQFT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tEO8Cwmj, 0, m, &cSlice_tEO8Cwmj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_i09AmKEz, 0, m, &cSlice_i09AmKEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3SJgP6Is, 0, m, &cSlice_3SJgP6Is_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7AggxtAp, 0, m, &cSlice_7AggxtAp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rhp2Nee8, 0, m, &cSlice_Rhp2Nee8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KXJQss8c, 0, m, &cSlice_KXJQss8c_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LvMRfudm, 0, m, &cSlice_LvMRfudm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WLuoSGHf, 0, m, &cSlice_WLuoSGHf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eCjzGlE9, 0, m, &cSlice_eCjzGlE9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_almH7dZA, 0, m, &cSlice_almH7dZA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FznAyo4M, 0, m, &cSlice_FznAyo4M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XLZUH8SM, 0, m, &cSlice_XLZUH8SM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_CaCAELeI, 0, m, &cSlice_CaCAELeI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l38REkUR, 0, m, &cSlice_l38REkUR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vDJooBx9, 0, m, &cSlice_vDJooBx9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtAl3abs, 0, m, &cSlice_rtAl3abs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S1HdMiGl, 0, m, &cSlice_S1HdMiGl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nqMMylH4, 0, m, &cSlice_nqMMylH4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ATGqo0q8, 0, m, &cSlice_ATGqo0q8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uqKwPqlp, 0, m, &cSlice_uqKwPqlp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LJP381Cp, 0, m, &cSlice_LJP381Cp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aKOg1CIV, 0, m, &cSlice_aKOg1CIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oqH76OE4, 0, m, &cSlice_oqH76OE4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kOBUNfIa, 0, m, &cSlice_kOBUNfIa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2juoramR, 0, m, &cSlice_2juoramR_sendMessage);
}

void Heavy_Echomatica::cMsg_zyDPvylz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_jjbL9fcg, 0, m, &cSlice_jjbL9fcg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SFc0ngZg, 0, m, &cSlice_SFc0ngZg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MZ5RDQFT, 0, m, &cSlice_MZ5RDQFT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tEO8Cwmj, 0, m, &cSlice_tEO8Cwmj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_i09AmKEz, 0, m, &cSlice_i09AmKEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3SJgP6Is, 0, m, &cSlice_3SJgP6Is_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7AggxtAp, 0, m, &cSlice_7AggxtAp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rhp2Nee8, 0, m, &cSlice_Rhp2Nee8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KXJQss8c, 0, m, &cSlice_KXJQss8c_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LvMRfudm, 0, m, &cSlice_LvMRfudm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WLuoSGHf, 0, m, &cSlice_WLuoSGHf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eCjzGlE9, 0, m, &cSlice_eCjzGlE9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_almH7dZA, 0, m, &cSlice_almH7dZA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FznAyo4M, 0, m, &cSlice_FznAyo4M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XLZUH8SM, 0, m, &cSlice_XLZUH8SM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_CaCAELeI, 0, m, &cSlice_CaCAELeI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l38REkUR, 0, m, &cSlice_l38REkUR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vDJooBx9, 0, m, &cSlice_vDJooBx9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtAl3abs, 0, m, &cSlice_rtAl3abs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S1HdMiGl, 0, m, &cSlice_S1HdMiGl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nqMMylH4, 0, m, &cSlice_nqMMylH4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ATGqo0q8, 0, m, &cSlice_ATGqo0q8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uqKwPqlp, 0, m, &cSlice_uqKwPqlp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LJP381Cp, 0, m, &cSlice_LJP381Cp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aKOg1CIV, 0, m, &cSlice_aKOg1CIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oqH76OE4, 0, m, &cSlice_oqH76OE4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kOBUNfIa, 0, m, &cSlice_kOBUNfIa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2juoramR, 0, m, &cSlice_2juoramR_sendMessage);
}

void Heavy_Echomatica::cMsg_2MoCeuJc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_jjbL9fcg, 0, m, &cSlice_jjbL9fcg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SFc0ngZg, 0, m, &cSlice_SFc0ngZg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MZ5RDQFT, 0, m, &cSlice_MZ5RDQFT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tEO8Cwmj, 0, m, &cSlice_tEO8Cwmj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_i09AmKEz, 0, m, &cSlice_i09AmKEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3SJgP6Is, 0, m, &cSlice_3SJgP6Is_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7AggxtAp, 0, m, &cSlice_7AggxtAp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rhp2Nee8, 0, m, &cSlice_Rhp2Nee8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KXJQss8c, 0, m, &cSlice_KXJQss8c_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LvMRfudm, 0, m, &cSlice_LvMRfudm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WLuoSGHf, 0, m, &cSlice_WLuoSGHf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eCjzGlE9, 0, m, &cSlice_eCjzGlE9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_almH7dZA, 0, m, &cSlice_almH7dZA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FznAyo4M, 0, m, &cSlice_FznAyo4M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XLZUH8SM, 0, m, &cSlice_XLZUH8SM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_CaCAELeI, 0, m, &cSlice_CaCAELeI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l38REkUR, 0, m, &cSlice_l38REkUR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vDJooBx9, 0, m, &cSlice_vDJooBx9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtAl3abs, 0, m, &cSlice_rtAl3abs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S1HdMiGl, 0, m, &cSlice_S1HdMiGl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nqMMylH4, 0, m, &cSlice_nqMMylH4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ATGqo0q8, 0, m, &cSlice_ATGqo0q8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uqKwPqlp, 0, m, &cSlice_uqKwPqlp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LJP381Cp, 0, m, &cSlice_LJP381Cp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aKOg1CIV, 0, m, &cSlice_aKOg1CIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oqH76OE4, 0, m, &cSlice_oqH76OE4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kOBUNfIa, 0, m, &cSlice_kOBUNfIa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2juoramR, 0, m, &cSlice_2juoramR_sendMessage);
}

void Heavy_Echomatica::cMsg_s0QBkfQn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_jjbL9fcg, 0, m, &cSlice_jjbL9fcg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SFc0ngZg, 0, m, &cSlice_SFc0ngZg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MZ5RDQFT, 0, m, &cSlice_MZ5RDQFT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tEO8Cwmj, 0, m, &cSlice_tEO8Cwmj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_i09AmKEz, 0, m, &cSlice_i09AmKEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3SJgP6Is, 0, m, &cSlice_3SJgP6Is_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7AggxtAp, 0, m, &cSlice_7AggxtAp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rhp2Nee8, 0, m, &cSlice_Rhp2Nee8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KXJQss8c, 0, m, &cSlice_KXJQss8c_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LvMRfudm, 0, m, &cSlice_LvMRfudm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WLuoSGHf, 0, m, &cSlice_WLuoSGHf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eCjzGlE9, 0, m, &cSlice_eCjzGlE9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_almH7dZA, 0, m, &cSlice_almH7dZA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FznAyo4M, 0, m, &cSlice_FznAyo4M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XLZUH8SM, 0, m, &cSlice_XLZUH8SM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_CaCAELeI, 0, m, &cSlice_CaCAELeI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l38REkUR, 0, m, &cSlice_l38REkUR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vDJooBx9, 0, m, &cSlice_vDJooBx9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtAl3abs, 0, m, &cSlice_rtAl3abs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S1HdMiGl, 0, m, &cSlice_S1HdMiGl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nqMMylH4, 0, m, &cSlice_nqMMylH4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ATGqo0q8, 0, m, &cSlice_ATGqo0q8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uqKwPqlp, 0, m, &cSlice_uqKwPqlp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LJP381Cp, 0, m, &cSlice_LJP381Cp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aKOg1CIV, 0, m, &cSlice_aKOg1CIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oqH76OE4, 0, m, &cSlice_oqH76OE4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kOBUNfIa, 0, m, &cSlice_kOBUNfIa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2juoramR, 0, m, &cSlice_2juoramR_sendMessage);
}

void Heavy_Echomatica::cMsg_z6gbLMwk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_jjbL9fcg, 0, m, &cSlice_jjbL9fcg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SFc0ngZg, 0, m, &cSlice_SFc0ngZg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MZ5RDQFT, 0, m, &cSlice_MZ5RDQFT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tEO8Cwmj, 0, m, &cSlice_tEO8Cwmj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_i09AmKEz, 0, m, &cSlice_i09AmKEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3SJgP6Is, 0, m, &cSlice_3SJgP6Is_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7AggxtAp, 0, m, &cSlice_7AggxtAp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rhp2Nee8, 0, m, &cSlice_Rhp2Nee8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KXJQss8c, 0, m, &cSlice_KXJQss8c_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LvMRfudm, 0, m, &cSlice_LvMRfudm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WLuoSGHf, 0, m, &cSlice_WLuoSGHf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eCjzGlE9, 0, m, &cSlice_eCjzGlE9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_almH7dZA, 0, m, &cSlice_almH7dZA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FznAyo4M, 0, m, &cSlice_FznAyo4M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XLZUH8SM, 0, m, &cSlice_XLZUH8SM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_CaCAELeI, 0, m, &cSlice_CaCAELeI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l38REkUR, 0, m, &cSlice_l38REkUR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vDJooBx9, 0, m, &cSlice_vDJooBx9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtAl3abs, 0, m, &cSlice_rtAl3abs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S1HdMiGl, 0, m, &cSlice_S1HdMiGl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nqMMylH4, 0, m, &cSlice_nqMMylH4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ATGqo0q8, 0, m, &cSlice_ATGqo0q8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uqKwPqlp, 0, m, &cSlice_uqKwPqlp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LJP381Cp, 0, m, &cSlice_LJP381Cp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aKOg1CIV, 0, m, &cSlice_aKOg1CIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oqH76OE4, 0, m, &cSlice_oqH76OE4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kOBUNfIa, 0, m, &cSlice_kOBUNfIa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2juoramR, 0, m, &cSlice_2juoramR_sendMessage);
}

void Heavy_Echomatica::cMsg_FtUPki1M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_jjbL9fcg, 0, m, &cSlice_jjbL9fcg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SFc0ngZg, 0, m, &cSlice_SFc0ngZg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MZ5RDQFT, 0, m, &cSlice_MZ5RDQFT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tEO8Cwmj, 0, m, &cSlice_tEO8Cwmj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_i09AmKEz, 0, m, &cSlice_i09AmKEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3SJgP6Is, 0, m, &cSlice_3SJgP6Is_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7AggxtAp, 0, m, &cSlice_7AggxtAp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rhp2Nee8, 0, m, &cSlice_Rhp2Nee8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KXJQss8c, 0, m, &cSlice_KXJQss8c_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LvMRfudm, 0, m, &cSlice_LvMRfudm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WLuoSGHf, 0, m, &cSlice_WLuoSGHf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eCjzGlE9, 0, m, &cSlice_eCjzGlE9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_almH7dZA, 0, m, &cSlice_almH7dZA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FznAyo4M, 0, m, &cSlice_FznAyo4M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XLZUH8SM, 0, m, &cSlice_XLZUH8SM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_CaCAELeI, 0, m, &cSlice_CaCAELeI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l38REkUR, 0, m, &cSlice_l38REkUR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vDJooBx9, 0, m, &cSlice_vDJooBx9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtAl3abs, 0, m, &cSlice_rtAl3abs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S1HdMiGl, 0, m, &cSlice_S1HdMiGl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nqMMylH4, 0, m, &cSlice_nqMMylH4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ATGqo0q8, 0, m, &cSlice_ATGqo0q8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uqKwPqlp, 0, m, &cSlice_uqKwPqlp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LJP381Cp, 0, m, &cSlice_LJP381Cp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aKOg1CIV, 0, m, &cSlice_aKOg1CIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oqH76OE4, 0, m, &cSlice_oqH76OE4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kOBUNfIa, 0, m, &cSlice_kOBUNfIa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2juoramR, 0, m, &cSlice_2juoramR_sendMessage);
}

void Heavy_Echomatica::cMsg_6vPiQOuD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_jjbL9fcg, 0, m, &cSlice_jjbL9fcg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SFc0ngZg, 0, m, &cSlice_SFc0ngZg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MZ5RDQFT, 0, m, &cSlice_MZ5RDQFT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tEO8Cwmj, 0, m, &cSlice_tEO8Cwmj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_i09AmKEz, 0, m, &cSlice_i09AmKEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3SJgP6Is, 0, m, &cSlice_3SJgP6Is_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7AggxtAp, 0, m, &cSlice_7AggxtAp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rhp2Nee8, 0, m, &cSlice_Rhp2Nee8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KXJQss8c, 0, m, &cSlice_KXJQss8c_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LvMRfudm, 0, m, &cSlice_LvMRfudm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WLuoSGHf, 0, m, &cSlice_WLuoSGHf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eCjzGlE9, 0, m, &cSlice_eCjzGlE9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_almH7dZA, 0, m, &cSlice_almH7dZA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FznAyo4M, 0, m, &cSlice_FznAyo4M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XLZUH8SM, 0, m, &cSlice_XLZUH8SM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_CaCAELeI, 0, m, &cSlice_CaCAELeI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l38REkUR, 0, m, &cSlice_l38REkUR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vDJooBx9, 0, m, &cSlice_vDJooBx9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtAl3abs, 0, m, &cSlice_rtAl3abs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S1HdMiGl, 0, m, &cSlice_S1HdMiGl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nqMMylH4, 0, m, &cSlice_nqMMylH4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ATGqo0q8, 0, m, &cSlice_ATGqo0q8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uqKwPqlp, 0, m, &cSlice_uqKwPqlp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LJP381Cp, 0, m, &cSlice_LJP381Cp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aKOg1CIV, 0, m, &cSlice_aKOg1CIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oqH76OE4, 0, m, &cSlice_oqH76OE4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kOBUNfIa, 0, m, &cSlice_kOBUNfIa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2juoramR, 0, m, &cSlice_2juoramR_sendMessage);
}

void Heavy_Echomatica::cMsg_QuM2THtQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_jjbL9fcg, 0, m, &cSlice_jjbL9fcg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SFc0ngZg, 0, m, &cSlice_SFc0ngZg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MZ5RDQFT, 0, m, &cSlice_MZ5RDQFT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tEO8Cwmj, 0, m, &cSlice_tEO8Cwmj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_i09AmKEz, 0, m, &cSlice_i09AmKEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3SJgP6Is, 0, m, &cSlice_3SJgP6Is_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7AggxtAp, 0, m, &cSlice_7AggxtAp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rhp2Nee8, 0, m, &cSlice_Rhp2Nee8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KXJQss8c, 0, m, &cSlice_KXJQss8c_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LvMRfudm, 0, m, &cSlice_LvMRfudm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WLuoSGHf, 0, m, &cSlice_WLuoSGHf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eCjzGlE9, 0, m, &cSlice_eCjzGlE9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_almH7dZA, 0, m, &cSlice_almH7dZA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FznAyo4M, 0, m, &cSlice_FznAyo4M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XLZUH8SM, 0, m, &cSlice_XLZUH8SM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_CaCAELeI, 0, m, &cSlice_CaCAELeI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l38REkUR, 0, m, &cSlice_l38REkUR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vDJooBx9, 0, m, &cSlice_vDJooBx9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtAl3abs, 0, m, &cSlice_rtAl3abs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S1HdMiGl, 0, m, &cSlice_S1HdMiGl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nqMMylH4, 0, m, &cSlice_nqMMylH4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ATGqo0q8, 0, m, &cSlice_ATGqo0q8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uqKwPqlp, 0, m, &cSlice_uqKwPqlp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LJP381Cp, 0, m, &cSlice_LJP381Cp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aKOg1CIV, 0, m, &cSlice_aKOg1CIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oqH76OE4, 0, m, &cSlice_oqH76OE4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kOBUNfIa, 0, m, &cSlice_kOBUNfIa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2juoramR, 0, m, &cSlice_2juoramR_sendMessage);
}

void Heavy_Echomatica::cMsg_VEdZp7KO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_jjbL9fcg, 0, m, &cSlice_jjbL9fcg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SFc0ngZg, 0, m, &cSlice_SFc0ngZg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MZ5RDQFT, 0, m, &cSlice_MZ5RDQFT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tEO8Cwmj, 0, m, &cSlice_tEO8Cwmj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_i09AmKEz, 0, m, &cSlice_i09AmKEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3SJgP6Is, 0, m, &cSlice_3SJgP6Is_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7AggxtAp, 0, m, &cSlice_7AggxtAp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rhp2Nee8, 0, m, &cSlice_Rhp2Nee8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KXJQss8c, 0, m, &cSlice_KXJQss8c_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LvMRfudm, 0, m, &cSlice_LvMRfudm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WLuoSGHf, 0, m, &cSlice_WLuoSGHf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eCjzGlE9, 0, m, &cSlice_eCjzGlE9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_almH7dZA, 0, m, &cSlice_almH7dZA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FznAyo4M, 0, m, &cSlice_FznAyo4M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XLZUH8SM, 0, m, &cSlice_XLZUH8SM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_CaCAELeI, 0, m, &cSlice_CaCAELeI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l38REkUR, 0, m, &cSlice_l38REkUR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vDJooBx9, 0, m, &cSlice_vDJooBx9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtAl3abs, 0, m, &cSlice_rtAl3abs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S1HdMiGl, 0, m, &cSlice_S1HdMiGl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nqMMylH4, 0, m, &cSlice_nqMMylH4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ATGqo0q8, 0, m, &cSlice_ATGqo0q8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uqKwPqlp, 0, m, &cSlice_uqKwPqlp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LJP381Cp, 0, m, &cSlice_LJP381Cp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aKOg1CIV, 0, m, &cSlice_aKOg1CIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oqH76OE4, 0, m, &cSlice_oqH76OE4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kOBUNfIa, 0, m, &cSlice_kOBUNfIa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2juoramR, 0, m, &cSlice_2juoramR_sendMessage);
}

void Heavy_Echomatica::cMsg_T1AgmYOo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_jjbL9fcg, 0, m, &cSlice_jjbL9fcg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SFc0ngZg, 0, m, &cSlice_SFc0ngZg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MZ5RDQFT, 0, m, &cSlice_MZ5RDQFT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tEO8Cwmj, 0, m, &cSlice_tEO8Cwmj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_i09AmKEz, 0, m, &cSlice_i09AmKEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3SJgP6Is, 0, m, &cSlice_3SJgP6Is_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7AggxtAp, 0, m, &cSlice_7AggxtAp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rhp2Nee8, 0, m, &cSlice_Rhp2Nee8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KXJQss8c, 0, m, &cSlice_KXJQss8c_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LvMRfudm, 0, m, &cSlice_LvMRfudm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WLuoSGHf, 0, m, &cSlice_WLuoSGHf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eCjzGlE9, 0, m, &cSlice_eCjzGlE9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_almH7dZA, 0, m, &cSlice_almH7dZA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FznAyo4M, 0, m, &cSlice_FznAyo4M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XLZUH8SM, 0, m, &cSlice_XLZUH8SM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_CaCAELeI, 0, m, &cSlice_CaCAELeI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l38REkUR, 0, m, &cSlice_l38REkUR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vDJooBx9, 0, m, &cSlice_vDJooBx9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtAl3abs, 0, m, &cSlice_rtAl3abs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S1HdMiGl, 0, m, &cSlice_S1HdMiGl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nqMMylH4, 0, m, &cSlice_nqMMylH4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ATGqo0q8, 0, m, &cSlice_ATGqo0q8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uqKwPqlp, 0, m, &cSlice_uqKwPqlp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LJP381Cp, 0, m, &cSlice_LJP381Cp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aKOg1CIV, 0, m, &cSlice_aKOg1CIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oqH76OE4, 0, m, &cSlice_oqH76OE4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kOBUNfIa, 0, m, &cSlice_kOBUNfIa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2juoramR, 0, m, &cSlice_2juoramR_sendMessage);
}

void Heavy_Echomatica::cMsg_w9kdYV3n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_jjbL9fcg, 0, m, &cSlice_jjbL9fcg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SFc0ngZg, 0, m, &cSlice_SFc0ngZg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MZ5RDQFT, 0, m, &cSlice_MZ5RDQFT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tEO8Cwmj, 0, m, &cSlice_tEO8Cwmj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_i09AmKEz, 0, m, &cSlice_i09AmKEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3SJgP6Is, 0, m, &cSlice_3SJgP6Is_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7AggxtAp, 0, m, &cSlice_7AggxtAp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rhp2Nee8, 0, m, &cSlice_Rhp2Nee8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KXJQss8c, 0, m, &cSlice_KXJQss8c_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LvMRfudm, 0, m, &cSlice_LvMRfudm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WLuoSGHf, 0, m, &cSlice_WLuoSGHf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eCjzGlE9, 0, m, &cSlice_eCjzGlE9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_almH7dZA, 0, m, &cSlice_almH7dZA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FznAyo4M, 0, m, &cSlice_FznAyo4M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XLZUH8SM, 0, m, &cSlice_XLZUH8SM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_CaCAELeI, 0, m, &cSlice_CaCAELeI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l38REkUR, 0, m, &cSlice_l38REkUR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vDJooBx9, 0, m, &cSlice_vDJooBx9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtAl3abs, 0, m, &cSlice_rtAl3abs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S1HdMiGl, 0, m, &cSlice_S1HdMiGl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nqMMylH4, 0, m, &cSlice_nqMMylH4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ATGqo0q8, 0, m, &cSlice_ATGqo0q8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uqKwPqlp, 0, m, &cSlice_uqKwPqlp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LJP381Cp, 0, m, &cSlice_LJP381Cp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aKOg1CIV, 0, m, &cSlice_aKOg1CIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oqH76OE4, 0, m, &cSlice_oqH76OE4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kOBUNfIa, 0, m, &cSlice_kOBUNfIa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2juoramR, 0, m, &cSlice_2juoramR_sendMessage);
}

void Heavy_Echomatica::cMsg_t9ucE5Tv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_jjbL9fcg, 0, m, &cSlice_jjbL9fcg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SFc0ngZg, 0, m, &cSlice_SFc0ngZg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MZ5RDQFT, 0, m, &cSlice_MZ5RDQFT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tEO8Cwmj, 0, m, &cSlice_tEO8Cwmj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_i09AmKEz, 0, m, &cSlice_i09AmKEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3SJgP6Is, 0, m, &cSlice_3SJgP6Is_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7AggxtAp, 0, m, &cSlice_7AggxtAp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rhp2Nee8, 0, m, &cSlice_Rhp2Nee8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KXJQss8c, 0, m, &cSlice_KXJQss8c_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LvMRfudm, 0, m, &cSlice_LvMRfudm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WLuoSGHf, 0, m, &cSlice_WLuoSGHf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eCjzGlE9, 0, m, &cSlice_eCjzGlE9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_almH7dZA, 0, m, &cSlice_almH7dZA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FznAyo4M, 0, m, &cSlice_FznAyo4M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XLZUH8SM, 0, m, &cSlice_XLZUH8SM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_CaCAELeI, 0, m, &cSlice_CaCAELeI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l38REkUR, 0, m, &cSlice_l38REkUR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vDJooBx9, 0, m, &cSlice_vDJooBx9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtAl3abs, 0, m, &cSlice_rtAl3abs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S1HdMiGl, 0, m, &cSlice_S1HdMiGl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nqMMylH4, 0, m, &cSlice_nqMMylH4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ATGqo0q8, 0, m, &cSlice_ATGqo0q8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uqKwPqlp, 0, m, &cSlice_uqKwPqlp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LJP381Cp, 0, m, &cSlice_LJP381Cp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aKOg1CIV, 0, m, &cSlice_aKOg1CIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oqH76OE4, 0, m, &cSlice_oqH76OE4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kOBUNfIa, 0, m, &cSlice_kOBUNfIa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2juoramR, 0, m, &cSlice_2juoramR_sendMessage);
}

void Heavy_Echomatica::cMsg_LGYA5LfH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_jjbL9fcg, 0, m, &cSlice_jjbL9fcg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SFc0ngZg, 0, m, &cSlice_SFc0ngZg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MZ5RDQFT, 0, m, &cSlice_MZ5RDQFT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tEO8Cwmj, 0, m, &cSlice_tEO8Cwmj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_i09AmKEz, 0, m, &cSlice_i09AmKEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3SJgP6Is, 0, m, &cSlice_3SJgP6Is_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7AggxtAp, 0, m, &cSlice_7AggxtAp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rhp2Nee8, 0, m, &cSlice_Rhp2Nee8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KXJQss8c, 0, m, &cSlice_KXJQss8c_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LvMRfudm, 0, m, &cSlice_LvMRfudm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WLuoSGHf, 0, m, &cSlice_WLuoSGHf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eCjzGlE9, 0, m, &cSlice_eCjzGlE9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_almH7dZA, 0, m, &cSlice_almH7dZA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FznAyo4M, 0, m, &cSlice_FznAyo4M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XLZUH8SM, 0, m, &cSlice_XLZUH8SM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_CaCAELeI, 0, m, &cSlice_CaCAELeI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l38REkUR, 0, m, &cSlice_l38REkUR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vDJooBx9, 0, m, &cSlice_vDJooBx9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtAl3abs, 0, m, &cSlice_rtAl3abs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S1HdMiGl, 0, m, &cSlice_S1HdMiGl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nqMMylH4, 0, m, &cSlice_nqMMylH4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ATGqo0q8, 0, m, &cSlice_ATGqo0q8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uqKwPqlp, 0, m, &cSlice_uqKwPqlp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LJP381Cp, 0, m, &cSlice_LJP381Cp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aKOg1CIV, 0, m, &cSlice_aKOg1CIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oqH76OE4, 0, m, &cSlice_oqH76OE4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kOBUNfIa, 0, m, &cSlice_kOBUNfIa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2juoramR, 0, m, &cSlice_2juoramR_sendMessage);
}

void Heavy_Echomatica::cMsg_9z10GhSN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_jjbL9fcg, 0, m, &cSlice_jjbL9fcg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SFc0ngZg, 0, m, &cSlice_SFc0ngZg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MZ5RDQFT, 0, m, &cSlice_MZ5RDQFT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tEO8Cwmj, 0, m, &cSlice_tEO8Cwmj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_i09AmKEz, 0, m, &cSlice_i09AmKEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3SJgP6Is, 0, m, &cSlice_3SJgP6Is_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7AggxtAp, 0, m, &cSlice_7AggxtAp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rhp2Nee8, 0, m, &cSlice_Rhp2Nee8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KXJQss8c, 0, m, &cSlice_KXJQss8c_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LvMRfudm, 0, m, &cSlice_LvMRfudm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WLuoSGHf, 0, m, &cSlice_WLuoSGHf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eCjzGlE9, 0, m, &cSlice_eCjzGlE9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_almH7dZA, 0, m, &cSlice_almH7dZA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FznAyo4M, 0, m, &cSlice_FznAyo4M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XLZUH8SM, 0, m, &cSlice_XLZUH8SM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_CaCAELeI, 0, m, &cSlice_CaCAELeI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l38REkUR, 0, m, &cSlice_l38REkUR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vDJooBx9, 0, m, &cSlice_vDJooBx9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtAl3abs, 0, m, &cSlice_rtAl3abs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S1HdMiGl, 0, m, &cSlice_S1HdMiGl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nqMMylH4, 0, m, &cSlice_nqMMylH4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ATGqo0q8, 0, m, &cSlice_ATGqo0q8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uqKwPqlp, 0, m, &cSlice_uqKwPqlp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LJP381Cp, 0, m, &cSlice_LJP381Cp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aKOg1CIV, 0, m, &cSlice_aKOg1CIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oqH76OE4, 0, m, &cSlice_oqH76OE4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kOBUNfIa, 0, m, &cSlice_kOBUNfIa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2juoramR, 0, m, &cSlice_2juoramR_sendMessage);
}

void Heavy_Echomatica::cMsg_N4LsNAZs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_jjbL9fcg, 0, m, &cSlice_jjbL9fcg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SFc0ngZg, 0, m, &cSlice_SFc0ngZg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MZ5RDQFT, 0, m, &cSlice_MZ5RDQFT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tEO8Cwmj, 0, m, &cSlice_tEO8Cwmj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_i09AmKEz, 0, m, &cSlice_i09AmKEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3SJgP6Is, 0, m, &cSlice_3SJgP6Is_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7AggxtAp, 0, m, &cSlice_7AggxtAp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rhp2Nee8, 0, m, &cSlice_Rhp2Nee8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KXJQss8c, 0, m, &cSlice_KXJQss8c_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LvMRfudm, 0, m, &cSlice_LvMRfudm_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WLuoSGHf, 0, m, &cSlice_WLuoSGHf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eCjzGlE9, 0, m, &cSlice_eCjzGlE9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_almH7dZA, 0, m, &cSlice_almH7dZA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FznAyo4M, 0, m, &cSlice_FznAyo4M_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XLZUH8SM, 0, m, &cSlice_XLZUH8SM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_CaCAELeI, 0, m, &cSlice_CaCAELeI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l38REkUR, 0, m, &cSlice_l38REkUR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vDJooBx9, 0, m, &cSlice_vDJooBx9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtAl3abs, 0, m, &cSlice_rtAl3abs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_S1HdMiGl, 0, m, &cSlice_S1HdMiGl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nqMMylH4, 0, m, &cSlice_nqMMylH4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ATGqo0q8, 0, m, &cSlice_ATGqo0q8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uqKwPqlp, 0, m, &cSlice_uqKwPqlp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LJP381Cp, 0, m, &cSlice_LJP381Cp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_aKOg1CIV, 0, m, &cSlice_aKOg1CIV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oqH76OE4, 0, m, &cSlice_oqH76OE4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kOBUNfIa, 0, m, &cSlice_kOBUNfIa_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2juoramR, 0, m, &cSlice_2juoramR_sendMessage);
}

void Heavy_Echomatica::cMsg_4myvEV1I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_hOBIZoz4_sendMessage);
}

void Heavy_Echomatica::cSystem_hOBIZoz4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_D7B6FtQ7_sendMessage);
}

void Heavy_Echomatica::cVar_5zlwclED_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_f0B3N47h_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_NkpPF5mS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_txOamFUu_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_9eKTMVPs, m);
}

void Heavy_Echomatica::cBinop_D7B6FtQ7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_XJjNCGDZ, m);
}

void Heavy_Echomatica::cMsg_f0B3N47h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_NkpPF5mS_sendMessage);
}

void Heavy_Echomatica::cBinop_txOamFUu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_tg9hu2iB, m);
}

void Heavy_Echomatica::cMsg_GeprWJyf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_JjoxxZ5W_sendMessage);
}

void Heavy_Echomatica::cSystem_JjoxxZ5W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Zfgifl5p_sendMessage);
}

void Heavy_Echomatica::cVar_Wo9b06xU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ouEiA1w4_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_I41oMHPr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_cfoYhkk3_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_MeLM0WI3, m);
}

void Heavy_Echomatica::cBinop_Zfgifl5p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_eCuV2tNd, m);
}

void Heavy_Echomatica::cMsg_ouEiA1w4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_I41oMHPr_sendMessage);
}

void Heavy_Echomatica::cBinop_cfoYhkk3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_gOhapywr, m);
}

void Heavy_Echomatica::cVar_jg0NimEu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_1mrw22e2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_Vehw1ryD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_ZKz43ch9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_pKfgscKv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_DSSbwCxD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_BsamKs5A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_8wdtTQiJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_xjRNSjs8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_au4GVUkh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_0y0oe6O8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_JNMPZZWZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cPack_3MCPxygc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_bWVtzwst, 0, m, NULL);
}

void Heavy_Echomatica::cPack_RsXppPG2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_QtdEKLsF, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_TtEA5uFP, 0, m, &cVar_TtEA5uFP_sendMessage);
}

void Heavy_Echomatica::cPack_aUzhieVF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_LmtXGUwF, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_Lc5L8MxG, 0, m, &cVar_Lc5L8MxG_sendMessage);
}

void Heavy_Echomatica::cPack_58q6hkkJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_PzN6ZMEJ, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_GUaUGrqP, 0, m, &cVar_GUaUGrqP_sendMessage);
}

void Heavy_Echomatica::cPack_4W8qBkvx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_J3QnOEuz, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_PXSh8J7u, 0, m, &cVar_PXSh8J7u_sendMessage);
}

void Heavy_Echomatica::cPack_xzcakM8Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_RQR5barZ, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_1BeYt82i, 0, m, &cVar_1BeYt82i_sendMessage);
}

void Heavy_Echomatica::cPack_im0ljOOB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_NWk3dnAI, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_FVoyvxrl, 0, m, &cVar_FVoyvxrl_sendMessage);
}

void Heavy_Echomatica::cSlice_jjbL9fcg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_w5uuuB5m_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_SFc0ngZg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_JnnvOYL1_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_MZ5RDQFT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_FA7gvUVU_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_tEO8Cwmj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_SXBckWqQ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_i09AmKEz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_0n8nkQ0t_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_3SJgP6Is_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_hrQnJuGl_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_7AggxtAp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_fO0o7jE0_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_Rhp2Nee8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_hcDqzl4d_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_KXJQss8c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_gB7XMjWc_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_LvMRfudm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_iznlznej_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_WLuoSGHf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_imCvfufC_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_eCjzGlE9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_SsFyrsAN_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_almH7dZA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_B2elIEIe_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_FznAyo4M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_kpTxAuhL_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_XLZUH8SM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_eCcJPQoD_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_CaCAELeI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_iwR9UECE_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_l38REkUR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_5L3xCMlt_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_vDJooBx9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ET3KaVlY_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_rtAl3abs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_M4NoJhww_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_S1HdMiGl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_rYU4rZ0v_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_nqMMylH4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Tauvyv10_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_ATGqo0q8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_dLUWteMF_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_uqKwPqlp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_I8LuTE4z_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_LJP381Cp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_wAJcwqdO_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_aKOg1CIV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_zxdSYOXv_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_oqH76OE4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_JFgFmDgR_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_kOBUNfIa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_UQ4KiY4H_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_2juoramR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_lJ1UnlwJ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_TtEA5uFP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_Lc5L8MxG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_FVoyvxrl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_GUaUGrqP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_PXSh8J7u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_1BeYt82i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cSlice_cIaO77nr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_lwuISAIn, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_4glTvNqq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_nIzgogvN, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_DfUfn540_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_CL1J2NGd, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_bo3jF87b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_aPnpsauH, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSwitchcase_q6AMiB2t_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZZ8nXvMg_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SDE2eBJC_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_ZZ8nXvMg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uu63lxyW_sendMessage);
}

void Heavy_Echomatica::cPack_DvKb09qL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_lXqN4iRI, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_gxduQGgc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_VO0zjZGk_sendMessage);
}

void Heavy_Echomatica::cSystem_VO0zjZGk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_uXMHqyHO_sendMessage);
}

void Heavy_Echomatica::cDelay_QmSzw3ad_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_QmSzw3ad, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_wwd9EeW8, 0, m, &cDelay_wwd9EeW8_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_QmSzw3ad, 0, m, &cDelay_QmSzw3ad_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_N7dD3VPo, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_wwd9EeW8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_wwd9EeW8, m);
  cMsg_0jkLUMu4_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_5yhUVjO5_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_lbZ9ZnIM_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_0NBVKoiX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ODF2jxQ4_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_92uuwKZ0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_RGDlecUe_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_QmSzw3ad, 2, m, &cDelay_QmSzw3ad_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_S53cJfmg_sendMessage);
}

void Heavy_Echomatica::cMsg_ODF2jxQ4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_92uuwKZ0, 0, m, &hTable_92uuwKZ0_sendMessage);
}

void Heavy_Echomatica::cBinop_uXMHqyHO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 40.0f, 0, m, &cBinop_0NBVKoiX_sendMessage);
}

void Heavy_Echomatica::cMsg_0jkLUMu4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_92uuwKZ0, 0, m, &hTable_92uuwKZ0_sendMessage);
}

void Heavy_Echomatica::cCast_S53cJfmg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_QmSzw3ad, 0, m, &cDelay_QmSzw3ad_sendMessage);
}

void Heavy_Echomatica::cMsg_RGDlecUe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_wwd9EeW8, 2, m, &cDelay_wwd9EeW8_sendMessage);
}

void Heavy_Echomatica::cMsg_lbZ9ZnIM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_N7dD3VPo, 1, m, NULL);
}

void Heavy_Echomatica::cVar_jorD5DYR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_h8Dw5Ur0, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_hmpd9foS, m);
}

void Heavy_Echomatica::cMsg_A7HFVsPW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_IuOHIqyP_sendMessage);
}

void Heavy_Echomatica::cSystem_IuOHIqyP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_FI7C0mm8_sendMessage);
}

void Heavy_Echomatica::cVar_V1VNdvGj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ZyqDZTJ8_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_PZ8ik9OM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_Of5fmhTl_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_pTOYQr7z, m);
}

void Heavy_Echomatica::cBinop_FI7C0mm8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_oAqTNnCZ, m);
}

void Heavy_Echomatica::cMsg_ZyqDZTJ8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_PZ8ik9OM_sendMessage);
}

void Heavy_Echomatica::cBinop_Of5fmhTl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_31FviNCc, m);
}

void Heavy_Echomatica::cMsg_TgjJ2NFI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_pMQ155tl_sendMessage);
}

void Heavy_Echomatica::cSystem_pMQ155tl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_pRFqvCD9_sendMessage);
}

void Heavy_Echomatica::cVar_YV7h3KRS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Pn1gy0TF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_nflhF6bd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_FcNd79ni_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_6EM0f99h, m);
}

void Heavy_Echomatica::cBinop_pRFqvCD9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_H0FNVmNT, m);
}

void Heavy_Echomatica::cMsg_Pn1gy0TF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_nflhF6bd_sendMessage);
}

void Heavy_Echomatica::cBinop_FcNd79ni_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_oKrFTgkJ, m);
}

void Heavy_Echomatica::cMsg_SXFeWhMB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_8WZsFcyp_sendMessage);
}

void Heavy_Echomatica::cSystem_8WZsFcyp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_es8cTf1q_sendMessage);
}

void Heavy_Echomatica::cDelay_5RSUNf8v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_5RSUNf8v, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_MRILLDFp, 0, m, &cDelay_MRILLDFp_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_5RSUNf8v, 0, m, &cDelay_5RSUNf8v_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_LquqiFHr, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_MRILLDFp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_MRILLDFp, m);
  cMsg_eZdZPGPk_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_yKrggwuY_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_t4FTj6sn_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_4uTLZhm8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7R4jYu8x_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_qokxQ0Sq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_E2mD6boV_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_5RSUNf8v, 2, m, &cDelay_5RSUNf8v_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fyPzKtAC_sendMessage);
}

void Heavy_Echomatica::cMsg_7R4jYu8x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_qokxQ0Sq, 0, m, &hTable_qokxQ0Sq_sendMessage);
}

void Heavy_Echomatica::cBinop_es8cTf1q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 30.0f, 0, m, &cBinop_4uTLZhm8_sendMessage);
}

void Heavy_Echomatica::cMsg_eZdZPGPk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_qokxQ0Sq, 0, m, &hTable_qokxQ0Sq_sendMessage);
}

void Heavy_Echomatica::cCast_fyPzKtAC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_5RSUNf8v, 0, m, &cDelay_5RSUNf8v_sendMessage);
}

void Heavy_Echomatica::cMsg_E2mD6boV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_MRILLDFp, 2, m, &cDelay_MRILLDFp_sendMessage);
}

void Heavy_Echomatica::cMsg_t4FTj6sn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_LquqiFHr, 1, m, NULL);
}

void Heavy_Echomatica::cBinop_MA6ZBW7i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_36HLKhxO_sendMessage);
}

void Heavy_Echomatica::cBinop_36HLKhxO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_fEha41g0_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_9g333XBK_sendMessage);
}

void Heavy_Echomatica::cVar_7JcVfSsG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_hSmlXXlK_sendMessage);
}

void Heavy_Echomatica::cMsg_oVboFS2j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_NNvETNUq_sendMessage);
}

void Heavy_Echomatica::cSystem_NNvETNUq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8LDbrdJD, HV_BINOP_DIVIDE, 1, m, &cBinop_8LDbrdJD_sendMessage);
}

void Heavy_Echomatica::cBinop_fEha41g0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_wx43YoH4_sendMessage);
}

void Heavy_Echomatica::cBinop_wx43YoH4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_YTHoNWjB, m);
}

void Heavy_Echomatica::cMsg_BYQQcPSV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_mRZkb1OR_sendMessage);
}

void Heavy_Echomatica::cBinop_mRZkb1OR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_MA6ZBW7i_sendMessage);
}

void Heavy_Echomatica::cBinop_9g333XBK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_qeije7bC, m);
}

void Heavy_Echomatica::cBinop_hSmlXXlK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_8W46OYla_sendMessage);
}

void Heavy_Echomatica::cBinop_8W46OYla_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8LDbrdJD, HV_BINOP_DIVIDE, 0, m, &cBinop_8LDbrdJD_sendMessage);
}

void Heavy_Echomatica::cBinop_8LDbrdJD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BYQQcPSV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_ujdwV6Ks_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_fbeowFIP_sendMessage);
}

void Heavy_Echomatica::cBinop_fbeowFIP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_IRzkEOoU_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_MLKkXjCJ_sendMessage);
}

void Heavy_Echomatica::cVar_Oz0DRgtX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_xxbVYl83_sendMessage);
}

void Heavy_Echomatica::cMsg_5ADqvitC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_K2aqmtsq_sendMessage);
}

void Heavy_Echomatica::cSystem_K2aqmtsq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WVrdbk84, HV_BINOP_DIVIDE, 1, m, &cBinop_WVrdbk84_sendMessage);
}

void Heavy_Echomatica::cBinop_IRzkEOoU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_iy9Mhre9_sendMessage);
}

void Heavy_Echomatica::cBinop_iy9Mhre9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_FVjAgBzt, m);
}

void Heavy_Echomatica::cMsg_sxvjFZRK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_HN6Q0I3E_sendMessage);
}

void Heavy_Echomatica::cBinop_HN6Q0I3E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_ujdwV6Ks_sendMessage);
}

void Heavy_Echomatica::cBinop_MLKkXjCJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_rJZdbKVW, m);
}

void Heavy_Echomatica::cBinop_xxbVYl83_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_BTwQavel_sendMessage);
}

void Heavy_Echomatica::cBinop_BTwQavel_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WVrdbk84, HV_BINOP_DIVIDE, 0, m, &cBinop_WVrdbk84_sendMessage);
}

void Heavy_Echomatica::cBinop_WVrdbk84_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sxvjFZRK_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_y0h6WMYQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_mb6ZyVTd, 0, m, &cPack_mb6ZyVTd_sendMessage);
}

void Heavy_Echomatica::cVar_dIVUMNVk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_gCiBhjJO, 0, m, &cPack_gCiBhjJO_sendMessage);
}

void Heavy_Echomatica::cVar_Qwk9UEfo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_RddoCZg6_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cPack_gCiBhjJO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_IfnzQLhe, 0, m, NULL);
}

void Heavy_Echomatica::cPack_mb6ZyVTd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_GH0JicYq, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_RddoCZg6_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BW3XNOHl_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rKlYNO4G_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2Qw6jptH_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_BW3XNOHl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XvaZSkJi_sendMessage(_c, 0, m);
  cMsg_UwHXPcYL_sendMessage(_c, 0, m);
  cMsg_wYLWOZ4r_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_rKlYNO4G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XvaZSkJi_sendMessage(_c, 0, m);
  cMsg_UwHXPcYL_sendMessage(_c, 0, m);
  cMsg_2aF3lchx_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_2Qw6jptH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FeO4ZKyX_sendMessage(_c, 0, m);
  cMsg_LOIB5rdT_sendMessage(_c, 0, m);
  cMsg_2aF3lchx_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_CGQ5hRI6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_XKMJuasx_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_9aZRLMhz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_28IMXdcX, HV_BINOP_DIVIDE, 0, m, &cBinop_28IMXdcX_sendMessage);
}

void Heavy_Echomatica::cVar_ZZ9K7w23_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ah029XCL, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_Ah029XCL_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_PhqT9nf0, 0, m, &cIf_PhqT9nf0_sendMessage);
}

void Heavy_Echomatica::sEnv_4vd7z8vn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_QqiQiZD0_sendMessage);
}

void Heavy_Echomatica::cBinop_rCcskG72_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_QxOKgp4b_sendMessage);
}

void Heavy_Echomatica::cBinop_QxOKgp4b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YCnA797f_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KcHRYiXb_sendMessage);
}

void Heavy_Echomatica::cCast_KcHRYiXb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0i199Gsq_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_YCnA797f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iwiiDS8I, HV_BINOP_POW, 1, m, &cBinop_iwiiDS8I_sendMessage);
}

void Heavy_Echomatica::cMsg_0i199Gsq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_iwiiDS8I, HV_BINOP_POW, 0, m, &cBinop_iwiiDS8I_sendMessage);
}

void Heavy_Echomatica::cBinop_iwiiDS8I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_wsTdB9No_sendMessage);
}

void Heavy_Echomatica::cIf_PhqT9nf0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_rCcskG72, HV_BINOP_SUBTRACT, 0, m, &cBinop_rCcskG72_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_NLrYRUIS, HV_BINOP_SUBTRACT, 0, m, &cBinop_NLrYRUIS_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_Ah029XCL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_PhqT9nf0, 1, m, &cIf_PhqT9nf0_sendMessage);
}

void Heavy_Echomatica::cVar_fDBFAMgj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_0oIMlI1A_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yyYt04g8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5rrDyO2i_sendMessage);
}

void Heavy_Echomatica::cVar_3JMVzACb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2thVmhz1_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xYvfKoMp_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_qQ8u7Vxg_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_mbzQ7Hys, 0, m, &cSlice_mbzQ7Hys_sendMessage);
      break;
    }
    default: {
      cSwitchcase_n44Spzj3_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_mbzQ7Hys_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_PvkXIifN_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_PvkXIifN_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_X8v5yRxE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_PvkXIifN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_PvkXIifN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_gapv4GQA_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_n44Spzj3_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_BizQxcMn, 0, m, &cSlice_BizQxcMn_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_BizQxcMn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_rVl1Sbkc_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_rVl1Sbkc_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_yK9ArSdb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_rVl1Sbkc_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_rVl1Sbkc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_uLORcr45_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_2thVmhz1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_28IMXdcX, HV_BINOP_DIVIDE, 1, m, &cBinop_28IMXdcX_sendMessage);
}

void Heavy_Echomatica::cCast_xYvfKoMp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9aZRLMhz, 0, m, &cVar_9aZRLMhz_sendMessage);
}

void Heavy_Echomatica::cBinop_28IMXdcX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QIIA8QzU, HV_BINOP_ADD, 0, m, &cBinop_QIIA8QzU_sendMessage);
}

void Heavy_Echomatica::cBinop_NLrYRUIS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9aZRLMhz, 0, m, &cVar_9aZRLMhz_sendMessage);
}

void Heavy_Echomatica::cCast_yyYt04g8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ah029XCL, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_Ah029XCL_sendMessage);
}

void Heavy_Echomatica::cCast_5rrDyO2i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ZZ9K7w23, 0, m, &cVar_ZZ9K7w23_sendMessage);
}

void Heavy_Echomatica::cCast_0oIMlI1A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_eXx5fHfz_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_blhdSGUX_sendMessage);
}

void Heavy_Echomatica::cBinop_QIIA8QzU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rCcskG72, HV_BINOP_SUBTRACT, 0, m, &cBinop_rCcskG72_sendMessage);
}

void Heavy_Echomatica::cCast_eUu9N0N3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3JMVzACb, 0, m, &cVar_3JMVzACb_sendMessage);
}

void Heavy_Echomatica::cCast_D8CAjL3t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fDBFAMgj, 0, m, &cVar_fDBFAMgj_sendMessage);
}

void Heavy_Echomatica::cCast_nr09pNxh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rCcskG72, HV_BINOP_SUBTRACT, 1, m, &cBinop_rCcskG72_sendMessage);
}

void Heavy_Echomatica::cCast_1b3aPUS7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ZZ9K7w23, 0, m, &cVar_ZZ9K7w23_sendMessage);
}

void Heavy_Echomatica::cBinop_wsTdB9No_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_yLY83QAO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_blhdSGUX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NLrYRUIS, HV_BINOP_SUBTRACT, 1, m, &cBinop_NLrYRUIS_sendMessage);
}

void Heavy_Echomatica::cCast_eXx5fHfz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QIIA8QzU, HV_BINOP_ADD, 1, m, &cBinop_QIIA8QzU_sendMessage);
}

void Heavy_Echomatica::cBinop_QqiQiZD0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_nr09pNxh_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1b3aPUS7_sendMessage);
}

void Heavy_Echomatica::cMsg_yLY83QAO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_5FHCitB4, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_XvaZSkJi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_dIVUMNVk, 0, m, &cVar_dIVUMNVk_sendMessage);
}

void Heavy_Echomatica::cMsg_UwHXPcYL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_y0h6WMYQ, 0, m, &cVar_y0h6WMYQ_sendMessage);
}

void Heavy_Echomatica::cMsg_FeO4ZKyX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_dIVUMNVk, 0, m, &cVar_dIVUMNVk_sendMessage);
}

void Heavy_Echomatica::cMsg_LOIB5rdT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_y0h6WMYQ, 0, m, &cVar_y0h6WMYQ_sendMessage);
}

void Heavy_Echomatica::cSend_XKMJuasx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_hL4kD74N_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_wYLWOZ4r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_CGQ5hRI6, 0, m, &cVar_CGQ5hRI6_sendMessage);
}

void Heavy_Echomatica::cMsg_2aF3lchx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_CGQ5hRI6, 0, m, &cVar_CGQ5hRI6_sendMessage);
}

void Heavy_Echomatica::cVar_vVbyX7Ns_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Qtx3eU5a, HV_BINOP_MULTIPLY, 0, m, &cBinop_Qtx3eU5a_sendMessage);
}

void Heavy_Echomatica::cMsg_9F2WZvvf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_VcJa5Q6U_sendMessage);
}

void Heavy_Echomatica::cSystem_VcJa5Q6U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_x3dZOSfD_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_Qtx3eU5a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_k8NukCP3_sendMessage);
}

void Heavy_Echomatica::cBinop_5k43ZKdO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Qtx3eU5a, HV_BINOP_MULTIPLY, 1, m, &cBinop_Qtx3eU5a_sendMessage);
}

void Heavy_Echomatica::cMsg_x3dZOSfD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_5k43ZKdO_sendMessage);
}

void Heavy_Echomatica::cBinop_k8NukCP3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_Z5wRUzdE_sendMessage);
}

void Heavy_Echomatica::cBinop_Z5wRUzdE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_dg41lcxX_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_qPrMF0IE, m);
}

void Heavy_Echomatica::cBinop_dg41lcxX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_wMRFy9cR, m);
}

void Heavy_Echomatica::cBinop_h9yhRBiG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_NcpmGRue_sendMessage);
}

void Heavy_Echomatica::cBinop_NcpmGRue_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Q8FvSGOp_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_G3cNjW6P_sendMessage);
}

void Heavy_Echomatica::cVar_6qmZHq6D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_swux4yab_sendMessage);
}

void Heavy_Echomatica::cMsg_HGqp8rbw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_qe6w0hQU_sendMessage);
}

void Heavy_Echomatica::cSystem_qe6w0hQU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_y9bW8hbk, HV_BINOP_DIVIDE, 1, m, &cBinop_y9bW8hbk_sendMessage);
}

void Heavy_Echomatica::cBinop_Q8FvSGOp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_o27kdnCk_sendMessage);
}

void Heavy_Echomatica::cBinop_o27kdnCk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_cMKh3Va3, m);
}

void Heavy_Echomatica::cMsg_gJ2QUgcw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_pN3corN9_sendMessage);
}

void Heavy_Echomatica::cBinop_pN3corN9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_h9yhRBiG_sendMessage);
}

void Heavy_Echomatica::cBinop_G3cNjW6P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_IyCFlqbs, m);
}

void Heavy_Echomatica::cBinop_swux4yab_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_DTW92O4q_sendMessage);
}

void Heavy_Echomatica::cBinop_DTW92O4q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_y9bW8hbk, HV_BINOP_DIVIDE, 0, m, &cBinop_y9bW8hbk_sendMessage);
}

void Heavy_Echomatica::cBinop_y9bW8hbk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gJ2QUgcw_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cIf_zIWqfNtG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_AkXfnyjj, 0, m, &cVar_AkXfnyjj_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_AkXfnyjj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rVRMmezu, HV_BINOP_MULTIPLY, 0, m, &cBinop_rVRMmezu_sendMessage);
}

void Heavy_Echomatica::cVar_vqutBfUj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_zIWqfNtG, 0, m, &cIf_zIWqfNtG_sendMessage);
}

void Heavy_Echomatica::cPack_yn5QnQLr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_AFMQ7YLQ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_GEVfS85d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_8vtwivnI_sendMessage);
}

void Heavy_Echomatica::cSystem_8vtwivnI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dbGiEvlj, HV_BINOP_MULTIPLY, 1, m, &cBinop_dbGiEvlj_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_wZwrJfIC, HV_BINOP_MULTIPLY, 1, m, &cBinop_wZwrJfIC_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_teZSZLiO_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cMsg_iFIjWlbF_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_iFIjWlbF_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DLMvIfvR_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cDelay_1yyjdzWp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_1yyjdzWp, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_1yyjdzWp, 0, m, &cDelay_1yyjdzWp_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_rTlXGVja, 0, m, &cVar_rTlXGVja_sendMessage);
}

void Heavy_Echomatica::cCast_DLMvIfvR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_iFIjWlbF_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_1yyjdzWp, 0, m, &cDelay_1yyjdzWp_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_rTlXGVja, 0, m, &cVar_rTlXGVja_sendMessage);
}

void Heavy_Echomatica::cMsg_Ya3zABKM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_XPLra6Vj_sendMessage);
}

void Heavy_Echomatica::cSystem_XPLra6Vj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_hbefjrsA_sendMessage);
}

void Heavy_Echomatica::cVar_YxhxlgHP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SI7tQJlr, HV_BINOP_MULTIPLY, 0, m, &cBinop_SI7tQJlr_sendMessage);
}

void Heavy_Echomatica::cMsg_iFIjWlbF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_1yyjdzWp, 0, m, &cDelay_1yyjdzWp_sendMessage);
}

void Heavy_Echomatica::cBinop_l13oS4Ho_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_1yyjdzWp, 2, m, &cDelay_1yyjdzWp_sendMessage);
}

void Heavy_Echomatica::cBinop_hbefjrsA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SI7tQJlr, HV_BINOP_MULTIPLY, 1, m, &cBinop_SI7tQJlr_sendMessage);
}

void Heavy_Echomatica::cBinop_SI7tQJlr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_l13oS4Ho_sendMessage);
}

void Heavy_Echomatica::cVar_rTlXGVja_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TJgP8PL4, HV_BINOP_SUBTRACT, 0, m, &cBinop_TJgP8PL4_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_uZZOHg1e_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_HqfwO8Hh_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qeHURjHk_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_viRjhNgC_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_qeHURjHk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tIYfeK9x, 0, m, &cVar_tIYfeK9x_sendMessage);
}

void Heavy_Echomatica::cCast_viRjhNgC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UIevrM12_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DYkpYL4O_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_AFMQ7YLQ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_n3oaCrzN, 0, m, &cSlice_n3oaCrzN_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_dm5nOGlO, 0, m, &cSlice_dm5nOGlO_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_02mQME9N_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_ld56HVhr, 0, m, &cSlice_ld56HVhr_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_1rQCwGYx, 0, m, &cSlice_1rQCwGYx_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_r3bLzOdt_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5IP4jdDa_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_n3oaCrzN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_wqE3XNYq_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_wqE3XNYq_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_dm5nOGlO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xhPSFs5r_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YisvrJTD_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xhPSFs5r_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YisvrJTD_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_v3jDn0ej_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LsjWj8af_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zdYHtJxL_sendMessage);
}

void Heavy_Echomatica::cVar_7AE5iZFa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_yXO3DL3F_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_yXO3DL3F_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2t3Mwzp7_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_dbGiEvlj, HV_BINOP_MULTIPLY, 0, m, &cBinop_dbGiEvlj_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_MNrWkRg3, HV_BINOP_DIVIDE, 1, m, &cBinop_MNrWkRg3_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_YxhxlgHP, 0, m, &cVar_YxhxlgHP_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_2t3Mwzp7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ienaKArt_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_7zltO9UF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9dXXLNMb, HV_BINOP_SUBTRACT, 1, m, &cBinop_9dXXLNMb_sendMessage);
}

void Heavy_Echomatica::cVar_oh97udZp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tIYfeK9x, 0, m, &cVar_tIYfeK9x_sendMessage);
}

void Heavy_Echomatica::cVar_tIYfeK9x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8B1MWrWp, HV_BINOP_ADD, 0, m, &cBinop_8B1MWrWp_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_DJgM9tsg, HV_BINOP_ADD, 0, m, &cBinop_DJgM9tsg_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sXyjk8nZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sirHab0b_sendMessage);
}

void Heavy_Echomatica::cSlice_ld56HVhr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LsjWj8af_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zdYHtJxL_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_1rQCwGYx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_J3n0dmvK_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_I898R9u9_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_u4QcJUaC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rTlXGVja, 1, m, &cVar_rTlXGVja_sendMessage);
}

void Heavy_Echomatica::cBinop_wZwrJfIC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_u4QcJUaC_sendMessage);
}

void Heavy_Echomatica::cBinop_dbGiEvlj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_uqZM1cwk_sendMessage);
}

void Heavy_Echomatica::cBinop_uqZM1cwk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TJgP8PL4, HV_BINOP_SUBTRACT, 1, m, &cBinop_TJgP8PL4_sendMessage);
}

void Heavy_Echomatica::cBinop_TJgP8PL4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rTlXGVja, 1, m, &cVar_rTlXGVja_sendMessage);
}

void Heavy_Echomatica::cMsg_OOfL6yzu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_teZSZLiO_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_Y6ZOVSDy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_teZSZLiO_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_DJgM9tsg, HV_BINOP_ADD, 1, m, &cBinop_DJgM9tsg_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_8B1MWrWp, HV_BINOP_ADD, 1, m, &cBinop_8B1MWrWp_sendMessage);
}

void Heavy_Echomatica::cBinop_uZZOHg1e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_HqfwO8Hh_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_8B1MWrWp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tIYfeK9x, 1, m, &cVar_tIYfeK9x_sendMessage);
}

void Heavy_Echomatica::cBinop_MNrWkRg3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bXqPyUZQ, HV_BINOP_DIVIDE, 1, m, &cBinop_bXqPyUZQ_sendMessage);
}

void Heavy_Echomatica::cBinop_bXqPyUZQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DJgM9tsg, HV_BINOP_ADD, 1, m, &cBinop_DJgM9tsg_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_8B1MWrWp, HV_BINOP_ADD, 1, m, &cBinop_8B1MWrWp_sendMessage);
}

void Heavy_Echomatica::cCast_zdYHtJxL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MNrWkRg3, HV_BINOP_DIVIDE, 0, m, &cBinop_MNrWkRg3_sendMessage);
}

void Heavy_Echomatica::cCast_LsjWj8af_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wZwrJfIC, HV_BINOP_MULTIPLY, 0, m, &cBinop_wZwrJfIC_sendMessage);
}

void Heavy_Echomatica::cCast_I898R9u9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9dXXLNMb, HV_BINOP_SUBTRACT, 0, m, &cBinop_9dXXLNMb_sendMessage);
}

void Heavy_Echomatica::cCast_J3n0dmvK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_oh97udZp, 1, m, &cVar_oh97udZp_sendMessage);
}

void Heavy_Echomatica::cCast_DYkpYL4O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_oh97udZp, 0, m, &cVar_oh97udZp_sendMessage);
}

void Heavy_Echomatica::cCast_UIevrM12_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Y6ZOVSDy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_DJgM9tsg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_7zltO9UF, 0, m, &cVar_7zltO9UF_sendMessage);
}

void Heavy_Echomatica::cMsg_wqE3XNYq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_teZSZLiO_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_rd7Pbufe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_v3jDn0ej, 1, m, &cVar_v3jDn0ej_sendMessage);
}

void Heavy_Echomatica::cMsg_ienaKArt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_dbGiEvlj, HV_BINOP_MULTIPLY, 0, m, &cBinop_dbGiEvlj_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_MNrWkRg3, HV_BINOP_DIVIDE, 1, m, &cBinop_MNrWkRg3_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_YxhxlgHP, 0, m, &cVar_YxhxlgHP_sendMessage);
}

void Heavy_Echomatica::cCast_xhPSFs5r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wqE3XNYq_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_YisvrJTD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1w9qmVIn_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_DJgM9tsg, HV_BINOP_ADD, 0, m, &cBinop_DJgM9tsg_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_tIYfeK9x, 1, m, &cVar_tIYfeK9x_sendMessage);
}

void Heavy_Echomatica::cBinop_9dXXLNMb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bXqPyUZQ, HV_BINOP_DIVIDE, 0, m, &cBinop_bXqPyUZQ_sendMessage);
}

void Heavy_Echomatica::cCast_1w9qmVIn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Y6ZOVSDy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_r3bLzOdt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OOfL6yzu_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_02mQME9N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_v3jDn0ej, 0, m, &cVar_v3jDn0ej_sendMessage);
}

void Heavy_Echomatica::cCast_5IP4jdDa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rd7Pbufe_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_qR5RIC19_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ggqvOpj6, HV_BINOP_MULTIPLY, 0, m, &cBinop_ggqvOpj6_sendMessage);
}

void Heavy_Echomatica::cVar_xZ2po1Y0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ROGXNKfn, HV_BINOP_MULTIPLY, 0, m, &cBinop_ROGXNKfn_sendMessage);
}

void Heavy_Echomatica::cVar_3ju0D3ym_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yL0G8we6, HV_BINOP_MULTIPLY, 0, m, &cBinop_yL0G8we6_sendMessage);
}

void Heavy_Echomatica::cVar_aOcf58dG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4aJAznFg, HV_BINOP_MULTIPLY, 0, m, &cBinop_4aJAznFg_sendMessage);
}

void Heavy_Echomatica::cVar_zYPboFb8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gc047pvq, HV_BINOP_MULTIPLY, 0, m, &cBinop_gc047pvq_sendMessage);
}

void Heavy_Echomatica::cVar_phsN5h8x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JDbaqRLO, HV_BINOP_MULTIPLY, 0, m, &cBinop_JDbaqRLO_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_xScPtvWC_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NPfG61uB_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7g400GDP_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_NPfG61uB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0eqjyKiN_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RG2IZuLe_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BIUYtwPr_sendMessage);
}

void Heavy_Echomatica::cCast_7g400GDP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WAeXXJ27_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zxsdt3Oq_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LTmwrpru_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Jf83EW1m_sendMessage);
}

void Heavy_Echomatica::cBinop_w4JLfeiz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_Ptjc4Cda_sendMessage);
}

void Heavy_Echomatica::cBinop_Ptjc4Cda_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_y1ZgP0UE_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_O19wnIqT_sendMessage);
}

void Heavy_Echomatica::cVar_GA6lAdyk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_SoGld535_sendMessage);
}

void Heavy_Echomatica::cMsg_HkFotSgt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_TNiOpVYY_sendMessage);
}

void Heavy_Echomatica::cSystem_TNiOpVYY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4Ihhti7T, HV_BINOP_DIVIDE, 1, m, &cBinop_4Ihhti7T_sendMessage);
}

void Heavy_Echomatica::cBinop_y1ZgP0UE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_JCFX1hQI_sendMessage);
}

void Heavy_Echomatica::cBinop_JCFX1hQI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_LtmKoumS, m);
}

void Heavy_Echomatica::cMsg_aXI8SdD7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_f1cR1UCB_sendMessage);
}

void Heavy_Echomatica::cBinop_f1cR1UCB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_w4JLfeiz_sendMessage);
}

void Heavy_Echomatica::cBinop_O19wnIqT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_wCTuSVuu, m);
}

void Heavy_Echomatica::cBinop_SoGld535_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_4IDvL0Is_sendMessage);
}

void Heavy_Echomatica::cBinop_4IDvL0Is_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4Ihhti7T, HV_BINOP_DIVIDE, 0, m, &cBinop_4Ihhti7T_sendMessage);
}

void Heavy_Echomatica::cBinop_4Ihhti7T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_aXI8SdD7_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_CgLhJgoZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Tdqh6gMJ, HV_BINOP_DIVIDE, 0, m, &cBinop_Tdqh6gMJ_sendMessage);
}

void Heavy_Echomatica::cVar_V7705zhv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3lUZGe9S, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_3lUZGe9S_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_NptQtf5n, 0, m, &cIf_NptQtf5n_sendMessage);
}

void Heavy_Echomatica::sEnv_pPaCea0Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_D6Jk5ncG_sendMessage);
}

void Heavy_Echomatica::cBinop_vNbZ8f1f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_p25rPzvr_sendMessage);
}

void Heavy_Echomatica::cBinop_p25rPzvr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PffgwHva_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_w2LT5UdJ_sendMessage);
}

void Heavy_Echomatica::cCast_w2LT5UdJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HdA81pVx_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_PffgwHva_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IHCsvMSp, HV_BINOP_POW, 1, m, &cBinop_IHCsvMSp_sendMessage);
}

void Heavy_Echomatica::cMsg_HdA81pVx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_IHCsvMSp, HV_BINOP_POW, 0, m, &cBinop_IHCsvMSp_sendMessage);
}

void Heavy_Echomatica::cBinop_IHCsvMSp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_xWklJaZx_sendMessage);
}

void Heavy_Echomatica::cIf_NptQtf5n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_vNbZ8f1f, HV_BINOP_SUBTRACT, 0, m, &cBinop_vNbZ8f1f_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_qn81jUzO, HV_BINOP_SUBTRACT, 0, m, &cBinop_qn81jUzO_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_3lUZGe9S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_NptQtf5n, 1, m, &cIf_NptQtf5n_sendMessage);
}

void Heavy_Echomatica::cVar_3UGafTvM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xbxxJjkp_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_crG4F42N_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9StKCyPt_sendMessage);
}

void Heavy_Echomatica::cVar_n0qdykUf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oYj34ONm_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CBWk81qS_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_58hEtQcq_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ATnBocE5, 0, m, &cSlice_ATnBocE5_sendMessage);
      break;
    }
    default: {
      cSwitchcase_uh0CiQg9_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_ATnBocE5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_IHa6iynE_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_IHa6iynE_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_11ruDsH8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_IHa6iynE_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_IHa6iynE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_5nunucmi_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_uh0CiQg9_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Lop9Fhva, 0, m, &cSlice_Lop9Fhva_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_Lop9Fhva_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_8vWSIKyY_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_8vWSIKyY_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_FA7DGMnf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_8vWSIKyY_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_8vWSIKyY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_g2BDPDFV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_oYj34ONm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Tdqh6gMJ, HV_BINOP_DIVIDE, 1, m, &cBinop_Tdqh6gMJ_sendMessage);
}

void Heavy_Echomatica::cCast_CBWk81qS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_CgLhJgoZ, 0, m, &cVar_CgLhJgoZ_sendMessage);
}

void Heavy_Echomatica::cBinop_Tdqh6gMJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iYtVRI00, HV_BINOP_ADD, 0, m, &cBinop_iYtVRI00_sendMessage);
}

void Heavy_Echomatica::cBinop_qn81jUzO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_CgLhJgoZ, 0, m, &cVar_CgLhJgoZ_sendMessage);
}

void Heavy_Echomatica::cCast_xbxxJjkp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_8GSEGYAM_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_8F7R56EC_sendMessage);
}

void Heavy_Echomatica::cCast_crG4F42N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3lUZGe9S, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_3lUZGe9S_sendMessage);
}

void Heavy_Echomatica::cCast_9StKCyPt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_V7705zhv, 0, m, &cVar_V7705zhv_sendMessage);
}

void Heavy_Echomatica::cBinop_iYtVRI00_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vNbZ8f1f, HV_BINOP_SUBTRACT, 0, m, &cBinop_vNbZ8f1f_sendMessage);
}

void Heavy_Echomatica::cCast_lM7BZ7i1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3UGafTvM, 0, m, &cVar_3UGafTvM_sendMessage);
}

void Heavy_Echomatica::cCast_GSUWOaWr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_n0qdykUf, 0, m, &cVar_n0qdykUf_sendMessage);
}

void Heavy_Echomatica::cCast_iIr0zQQD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_V7705zhv, 0, m, &cVar_V7705zhv_sendMessage);
}

void Heavy_Echomatica::cCast_Q6uq00ku_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vNbZ8f1f, HV_BINOP_SUBTRACT, 1, m, &cBinop_vNbZ8f1f_sendMessage);
}

void Heavy_Echomatica::cBinop_xWklJaZx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_kAPolbv2_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_8F7R56EC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qn81jUzO, HV_BINOP_SUBTRACT, 1, m, &cBinop_qn81jUzO_sendMessage);
}

void Heavy_Echomatica::cCast_8GSEGYAM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iYtVRI00, HV_BINOP_ADD, 1, m, &cBinop_iYtVRI00_sendMessage);
}

void Heavy_Echomatica::cBinop_D6Jk5ncG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Q6uq00ku_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iIr0zQQD_sendMessage);
}

void Heavy_Echomatica::cMsg_kAPolbv2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_5tk03qwI, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_225mBZxD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_VzFS1xAj_sendMessage);
}

void Heavy_Echomatica::cBinop_VzFS1xAj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_i8si9Jsk_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_fuQrHZtk_sendMessage);
}

void Heavy_Echomatica::cVar_AIPrZKLj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_MFeuDMPQ_sendMessage);
}

void Heavy_Echomatica::cMsg_xnKLY0EW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_RJqBVlSF_sendMessage);
}

void Heavy_Echomatica::cSystem_RJqBVlSF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MvUjflak, HV_BINOP_DIVIDE, 1, m, &cBinop_MvUjflak_sendMessage);
}

void Heavy_Echomatica::cBinop_i8si9Jsk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_GMuFJ2C2_sendMessage);
}

void Heavy_Echomatica::cBinop_GMuFJ2C2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_dhwHxgEr, m);
}

void Heavy_Echomatica::cMsg_nGppfgPk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_e9iWt4E2_sendMessage);
}

void Heavy_Echomatica::cBinop_e9iWt4E2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_225mBZxD_sendMessage);
}

void Heavy_Echomatica::cBinop_fuQrHZtk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_l60Eph7U, m);
}

void Heavy_Echomatica::cBinop_MFeuDMPQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_acN35lSR_sendMessage);
}

void Heavy_Echomatica::cBinop_acN35lSR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MvUjflak, HV_BINOP_DIVIDE, 0, m, &cBinop_MvUjflak_sendMessage);
}

void Heavy_Echomatica::cBinop_MvUjflak_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nGppfgPk_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_pJvNsAun_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YdBsT4a3, HV_BINOP_DIVIDE, 0, m, &cBinop_YdBsT4a3_sendMessage);
}

void Heavy_Echomatica::cVar_YHNz9eUQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JEdPIJGn, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_JEdPIJGn_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_qdtMNG8o, 0, m, &cIf_qdtMNG8o_sendMessage);
}

void Heavy_Echomatica::sEnv_G8elQIR9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_GaW971E5_sendMessage);
}

void Heavy_Echomatica::cBinop_YUHOWSdo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_46uU5I2M_sendMessage);
}

void Heavy_Echomatica::cBinop_46uU5I2M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qSQlVX8V_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7FRV74Fh_sendMessage);
}

void Heavy_Echomatica::cCast_7FRV74Fh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ENCcfoPM_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_qSQlVX8V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6tL9RlrZ, HV_BINOP_POW, 1, m, &cBinop_6tL9RlrZ_sendMessage);
}

void Heavy_Echomatica::cMsg_ENCcfoPM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_6tL9RlrZ, HV_BINOP_POW, 0, m, &cBinop_6tL9RlrZ_sendMessage);
}

void Heavy_Echomatica::cBinop_6tL9RlrZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_4cSyND1e_sendMessage);
}

void Heavy_Echomatica::cIf_qdtMNG8o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_YUHOWSdo, HV_BINOP_SUBTRACT, 0, m, &cBinop_YUHOWSdo_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_qwm89V91, HV_BINOP_SUBTRACT, 0, m, &cBinop_qwm89V91_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_JEdPIJGn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_qdtMNG8o, 1, m, &cIf_qdtMNG8o_sendMessage);
}

void Heavy_Echomatica::cVar_FwWIkWDy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sf5cUk7d_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oC71fRi5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GjyTkMD8_sendMessage);
}

void Heavy_Echomatica::cVar_QkNHCfQC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JvMvQbYq_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CPAgAg9n_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_1UjVBZE3_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_plBPOsEl, 0, m, &cSlice_plBPOsEl_sendMessage);
      break;
    }
    default: {
      cSwitchcase_vq1CPImr_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_plBPOsEl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_awIG1bYv_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_awIG1bYv_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_t00779JR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_awIG1bYv_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_awIG1bYv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_MxIo00vL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_vq1CPImr_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_gT9s0Mul, 0, m, &cSlice_gT9s0Mul_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_gT9s0Mul_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_kJaOU5qJ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_kJaOU5qJ_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_dKzvbFul_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_kJaOU5qJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_kJaOU5qJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_BlmO6P8t_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_CPAgAg9n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_pJvNsAun, 0, m, &cVar_pJvNsAun_sendMessage);
}

void Heavy_Echomatica::cCast_JvMvQbYq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YdBsT4a3, HV_BINOP_DIVIDE, 1, m, &cBinop_YdBsT4a3_sendMessage);
}

void Heavy_Echomatica::cBinop_YdBsT4a3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BRG0zOBJ, HV_BINOP_ADD, 0, m, &cBinop_BRG0zOBJ_sendMessage);
}

void Heavy_Echomatica::cBinop_qwm89V91_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_pJvNsAun, 0, m, &cVar_pJvNsAun_sendMessage);
}

void Heavy_Echomatica::cCast_GjyTkMD8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YHNz9eUQ, 0, m, &cVar_YHNz9eUQ_sendMessage);
}

void Heavy_Echomatica::cCast_oC71fRi5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JEdPIJGn, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_JEdPIJGn_sendMessage);
}

void Heavy_Echomatica::cCast_sf5cUk7d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_RuxRaVDL_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_pcpjDRir_sendMessage);
}

void Heavy_Echomatica::cBinop_BRG0zOBJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YUHOWSdo, HV_BINOP_SUBTRACT, 0, m, &cBinop_YUHOWSdo_sendMessage);
}

void Heavy_Echomatica::cCast_BwLJlOwK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_QkNHCfQC, 0, m, &cVar_QkNHCfQC_sendMessage);
}

void Heavy_Echomatica::cCast_40TAq0R3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FwWIkWDy, 0, m, &cVar_FwWIkWDy_sendMessage);
}

void Heavy_Echomatica::cCast_eGMhek4W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YUHOWSdo, HV_BINOP_SUBTRACT, 1, m, &cBinop_YUHOWSdo_sendMessage);
}

void Heavy_Echomatica::cCast_yiHP4JSZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YHNz9eUQ, 0, m, &cVar_YHNz9eUQ_sendMessage);
}

void Heavy_Echomatica::cBinop_4cSyND1e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9X7Bgwod_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_pcpjDRir_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qwm89V91, HV_BINOP_SUBTRACT, 1, m, &cBinop_qwm89V91_sendMessage);
}

void Heavy_Echomatica::cCast_RuxRaVDL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BRG0zOBJ, HV_BINOP_ADD, 1, m, &cBinop_BRG0zOBJ_sendMessage);
}

void Heavy_Echomatica::cBinop_GaW971E5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_eGMhek4W_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yiHP4JSZ_sendMessage);
}

void Heavy_Echomatica::cMsg_9X7Bgwod_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_9WuE321A, 0, m, NULL);
}

void Heavy_Echomatica::cVar_oRuz6YmX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BMrYRwsD, HV_BINOP_MULTIPLY, 0, m, &cBinop_BMrYRwsD_sendMessage);
}

void Heavy_Echomatica::cMsg_tJA1JIAi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_JTEgIPg1_sendMessage);
}

void Heavy_Echomatica::cSystem_JTEgIPg1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nG4xQlAm_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_BMrYRwsD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_1gXTKYZD_sendMessage);
}

void Heavy_Echomatica::cBinop_GAyaZayp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BMrYRwsD, HV_BINOP_MULTIPLY, 1, m, &cBinop_BMrYRwsD_sendMessage);
}

void Heavy_Echomatica::cMsg_nG4xQlAm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_GAyaZayp_sendMessage);
}

void Heavy_Echomatica::cBinop_1gXTKYZD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_ahinPvWw_sendMessage);
}

void Heavy_Echomatica::cBinop_ahinPvWw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_lw96cyX6_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_oUdZ6kti, m);
}

void Heavy_Echomatica::cBinop_lw96cyX6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_4rnzEJBM, m);
}

void Heavy_Echomatica::cVar_45ZSTNji_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jTBbBDvF, HV_BINOP_MULTIPLY, 0, m, &cBinop_jTBbBDvF_sendMessage);
}

void Heavy_Echomatica::cMsg_3hcLn0qL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_rwoHrT0O_sendMessage);
}

void Heavy_Echomatica::cSystem_rwoHrT0O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TZF9S88n_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_jTBbBDvF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_wXK8FQeS_sendMessage);
}

void Heavy_Echomatica::cBinop_bVjCLuhJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jTBbBDvF, HV_BINOP_MULTIPLY, 1, m, &cBinop_jTBbBDvF_sendMessage);
}

void Heavy_Echomatica::cMsg_TZF9S88n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_bVjCLuhJ_sendMessage);
}

void Heavy_Echomatica::cBinop_wXK8FQeS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_xcUpxsmo_sendMessage);
}

void Heavy_Echomatica::cBinop_xcUpxsmo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_BIFsFxJ9_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_61c9Rwrh, m);
}

void Heavy_Echomatica::cBinop_BIFsFxJ9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_gwsF1rja, m);
}

void Heavy_Echomatica::cBinop_5O16sMCp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_kAeo90rr_sendMessage);
}

void Heavy_Echomatica::cBinop_kAeo90rr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_O8TGlb4g_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_lXYzW9Oi_sendMessage);
}

void Heavy_Echomatica::cVar_pbCayt9e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_FfaTRTnc_sendMessage);
}

void Heavy_Echomatica::cMsg_k6H4zYtF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_RdCUGVpr_sendMessage);
}

void Heavy_Echomatica::cSystem_RdCUGVpr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JLrBN3Ku, HV_BINOP_DIVIDE, 1, m, &cBinop_JLrBN3Ku_sendMessage);
}

void Heavy_Echomatica::cBinop_O8TGlb4g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_LgRYkj5E_sendMessage);
}

void Heavy_Echomatica::cBinop_LgRYkj5E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_3BTUiJoT, m);
}

void Heavy_Echomatica::cMsg_ocFYrDZQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_QbrJzCQh_sendMessage);
}

void Heavy_Echomatica::cBinop_QbrJzCQh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_5O16sMCp_sendMessage);
}

void Heavy_Echomatica::cBinop_lXYzW9Oi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_gD4Iszoa, m);
}

void Heavy_Echomatica::cBinop_FfaTRTnc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_UNHXxKRq_sendMessage);
}

void Heavy_Echomatica::cBinop_UNHXxKRq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JLrBN3Ku, HV_BINOP_DIVIDE, 0, m, &cBinop_JLrBN3Ku_sendMessage);
}

void Heavy_Echomatica::cBinop_JLrBN3Ku_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ocFYrDZQ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_hkndShxg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_Nz3A8jYy_sendMessage);
}

void Heavy_Echomatica::cBinop_Nz3A8jYy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_1KkTw9eH_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_GOd2ZDiH_sendMessage);
}

void Heavy_Echomatica::cVar_NjISllS4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_8OgttZju_sendMessage);
}

void Heavy_Echomatica::cMsg_e8jEjGgV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_RKhM1V4B_sendMessage);
}

void Heavy_Echomatica::cSystem_RKhM1V4B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3N9YY8Hj, HV_BINOP_DIVIDE, 1, m, &cBinop_3N9YY8Hj_sendMessage);
}

void Heavy_Echomatica::cBinop_1KkTw9eH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_Kdj9rGNo_sendMessage);
}

void Heavy_Echomatica::cBinop_Kdj9rGNo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_PPqyASav, m);
}

void Heavy_Echomatica::cMsg_6ZMGLeJy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_utCCGXvs_sendMessage);
}

void Heavy_Echomatica::cBinop_utCCGXvs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_hkndShxg_sendMessage);
}

void Heavy_Echomatica::cBinop_GOd2ZDiH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Ou65T15S, m);
}

void Heavy_Echomatica::cBinop_8OgttZju_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_OLiSHMT7_sendMessage);
}

void Heavy_Echomatica::cBinop_OLiSHMT7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3N9YY8Hj, HV_BINOP_DIVIDE, 0, m, &cBinop_3N9YY8Hj_sendMessage);
}

void Heavy_Echomatica::cBinop_3N9YY8Hj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6ZMGLeJy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_qRXNYRqn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_5OyJjn0X_sendMessage);
}

void Heavy_Echomatica::cSystem_5OyJjn0X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_HMOWM44k_sendMessage);
}

void Heavy_Echomatica::cDelay_2yEfAsrE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_2yEfAsrE, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_yaPHCuqT, 0, m, &cDelay_yaPHCuqT_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_2yEfAsrE, 0, m, &cDelay_2yEfAsrE_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_3ryDsFXD, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_yaPHCuqT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_yaPHCuqT, m);
  cMsg_sV7P5mZF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_LMfq6dUE_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_IZgj5VQJ_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_w4g27dtv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uxAKYrCB_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_KlX2iAPQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_iIDfJlHH_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_2yEfAsrE, 2, m, &cDelay_2yEfAsrE_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AW1mb5S2_sendMessage);
}

void Heavy_Echomatica::cMsg_uxAKYrCB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_KlX2iAPQ, 0, m, &hTable_KlX2iAPQ_sendMessage);
}

void Heavy_Echomatica::cBinop_HMOWM44k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_w4g27dtv_sendMessage);
}

void Heavy_Echomatica::cMsg_sV7P5mZF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_KlX2iAPQ, 0, m, &hTable_KlX2iAPQ_sendMessage);
}

void Heavy_Echomatica::cCast_AW1mb5S2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_2yEfAsrE, 0, m, &cDelay_2yEfAsrE_sendMessage);
}

void Heavy_Echomatica::cMsg_iIDfJlHH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_yaPHCuqT, 2, m, &cDelay_yaPHCuqT_sendMessage);
}

void Heavy_Echomatica::cMsg_IZgj5VQJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_3ryDsFXD, 1, m, NULL);
}

void Heavy_Echomatica::cVar_t4m6f9wB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_3MCPxygc, 0, m, &cPack_3MCPxygc_sendMessage);
}

void Heavy_Echomatica::cVar_PoPR0Vow_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_DvKb09qL, 0, m, &cPack_DvKb09qL_sendMessage);
}

void Heavy_Echomatica::cVar_jz7T5mKM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_AzA63r5O_sendMessage);
  cSwitchcase_xScPtvWC_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_AzA63r5O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jz7T5mKM, 1, m, &cVar_jz7T5mKM_sendMessage);
}

void Heavy_Echomatica::cVar_nuyJPRoa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_yn5QnQLr, 0, m, &cPack_yn5QnQLr_sendMessage);
}

void Heavy_Echomatica::cBinop_zXwnTOuH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_KZrg5VdX_sendMessage);
}

void Heavy_Echomatica::cBinop_KZrg5VdX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_HBoPrPP2_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_fV8AYNzD_sendMessage);
}

void Heavy_Echomatica::cVar_FF7ZUiX2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_N7Kv31bs_sendMessage);
}

void Heavy_Echomatica::cMsg_eDg7T2Dn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_SgbLPZjF_sendMessage);
}

void Heavy_Echomatica::cSystem_SgbLPZjF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9j14yTkF, HV_BINOP_DIVIDE, 1, m, &cBinop_9j14yTkF_sendMessage);
}

void Heavy_Echomatica::cBinop_HBoPrPP2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_66XAOY6J_sendMessage);
}

void Heavy_Echomatica::cBinop_66XAOY6J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_IwMkmTnY, m);
}

void Heavy_Echomatica::cMsg_IoLY9YAQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_smONGemW_sendMessage);
}

void Heavy_Echomatica::cBinop_smONGemW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_zXwnTOuH_sendMessage);
}

void Heavy_Echomatica::cBinop_fV8AYNzD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_lATAph7W, m);
}

void Heavy_Echomatica::cBinop_N7Kv31bs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_dbvZ9Ki0_sendMessage);
}

void Heavy_Echomatica::cBinop_dbvZ9Ki0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9j14yTkF, HV_BINOP_DIVIDE, 0, m, &cBinop_9j14yTkF_sendMessage);
}

void Heavy_Echomatica::cBinop_9j14yTkF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IoLY9YAQ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_7xLsP1VO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_caov54Sw_sendMessage);
}

void Heavy_Echomatica::cBinop_caov54Sw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_IosbsWlT_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_PAOa9ZK6_sendMessage);
}

void Heavy_Echomatica::cVar_mIv7Kxfa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_wsu5IUZl_sendMessage);
}

void Heavy_Echomatica::cMsg_XYLxP53A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_kdLpZHIr_sendMessage);
}

void Heavy_Echomatica::cSystem_kdLpZHIr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QWWUfhoR, HV_BINOP_DIVIDE, 1, m, &cBinop_QWWUfhoR_sendMessage);
}

void Heavy_Echomatica::cBinop_IosbsWlT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_9TvUoo6Z_sendMessage);
}

void Heavy_Echomatica::cBinop_9TvUoo6Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_DGh3OCUz, m);
}

void Heavy_Echomatica::cMsg_vCIMWabX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_cUeq4tJZ_sendMessage);
}

void Heavy_Echomatica::cBinop_cUeq4tJZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_7xLsP1VO_sendMessage);
}

void Heavy_Echomatica::cBinop_PAOa9ZK6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_qJVPXv5S, m);
}

void Heavy_Echomatica::cBinop_wsu5IUZl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_gg98thYM_sendMessage);
}

void Heavy_Echomatica::cBinop_gg98thYM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QWWUfhoR, HV_BINOP_DIVIDE, 0, m, &cBinop_QWWUfhoR_sendMessage);
}

void Heavy_Echomatica::cBinop_QWWUfhoR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vCIMWabX_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_KAbPQgQF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_IA0Ng9ke_sendMessage);
}

void Heavy_Echomatica::cBinop_IA0Ng9ke_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_85wq7FmF_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_MxLkxCZa_sendMessage);
}

void Heavy_Echomatica::cVar_U9bsdn9M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_ZspbgYkm_sendMessage);
}

void Heavy_Echomatica::cMsg_mc5Fcxbj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_fKI9G0Bd_sendMessage);
}

void Heavy_Echomatica::cSystem_fKI9G0Bd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9fZrQEDm, HV_BINOP_DIVIDE, 1, m, &cBinop_9fZrQEDm_sendMessage);
}

void Heavy_Echomatica::cBinop_85wq7FmF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_K4pAzlLt_sendMessage);
}

void Heavy_Echomatica::cBinop_K4pAzlLt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_t4SY5cF2, m);
}

void Heavy_Echomatica::cMsg_dD5APpcw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_k6mJHfNX_sendMessage);
}

void Heavy_Echomatica::cBinop_k6mJHfNX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_KAbPQgQF_sendMessage);
}

void Heavy_Echomatica::cBinop_MxLkxCZa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_8a76m6cE, m);
}

void Heavy_Echomatica::cBinop_ZspbgYkm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_AGIR4gPS_sendMessage);
}

void Heavy_Echomatica::cBinop_AGIR4gPS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9fZrQEDm, HV_BINOP_DIVIDE, 0, m, &cBinop_9fZrQEDm_sendMessage);
}

void Heavy_Echomatica::cBinop_9fZrQEDm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dD5APpcw_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_OrvGI8kJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ySUtyDhj, HV_BINOP_MULTIPLY, 0, m, &cBinop_ySUtyDhj_sendMessage);
}

void Heavy_Echomatica::cMsg_miBIvySa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_QfdkK6Pn_sendMessage);
}

void Heavy_Echomatica::cSystem_QfdkK6Pn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_36fqvuYE_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_ySUtyDhj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_uocZAQKX_sendMessage);
}

void Heavy_Echomatica::cBinop_aRVf4fqe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ySUtyDhj, HV_BINOP_MULTIPLY, 1, m, &cBinop_ySUtyDhj_sendMessage);
}

void Heavy_Echomatica::cMsg_36fqvuYE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_aRVf4fqe_sendMessage);
}

void Heavy_Echomatica::cBinop_uocZAQKX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_Gy8qieqf_sendMessage);
}

void Heavy_Echomatica::cBinop_Gy8qieqf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_w8IOr8ve_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Qe9bKwoQ, m);
}

void Heavy_Echomatica::cBinop_w8IOr8ve_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_hzKF4Wjp, m);
}

void Heavy_Echomatica::cVar_TKeO55Hq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HnF1M8FC, HV_BINOP_MULTIPLY, 0, m, &cBinop_HnF1M8FC_sendMessage);
}

void Heavy_Echomatica::cMsg_BUniidBX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_aa9hE6vx_sendMessage);
}

void Heavy_Echomatica::cSystem_aa9hE6vx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_RdmynOtH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_HnF1M8FC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_7aLdGzEG_sendMessage);
}

void Heavy_Echomatica::cBinop_wTW48J8R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HnF1M8FC, HV_BINOP_MULTIPLY, 1, m, &cBinop_HnF1M8FC_sendMessage);
}

void Heavy_Echomatica::cMsg_RdmynOtH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_wTW48J8R_sendMessage);
}

void Heavy_Echomatica::cBinop_7aLdGzEG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_Xp1T9q3R_sendMessage);
}

void Heavy_Echomatica::cBinop_Xp1T9q3R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_FBivedcX_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_8FcMercI, m);
}

void Heavy_Echomatica::cBinop_FBivedcX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_xsQTUgwN, m);
}

void Heavy_Echomatica::cVar_w6mr0nEq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8LoFiLbH, HV_BINOP_MULTIPLY, 0, m, &cBinop_8LoFiLbH_sendMessage);
}

void Heavy_Echomatica::cMsg_pEmiNNEv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Vtv6MDQP_sendMessage);
}

void Heavy_Echomatica::cSystem_Vtv6MDQP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_INwJOr9W_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_8LoFiLbH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_pgwVrU1C_sendMessage);
}

void Heavy_Echomatica::cBinop_e8XTgcFh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8LoFiLbH, HV_BINOP_MULTIPLY, 1, m, &cBinop_8LoFiLbH_sendMessage);
}

void Heavy_Echomatica::cMsg_INwJOr9W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_e8XTgcFh_sendMessage);
}

void Heavy_Echomatica::cBinop_pgwVrU1C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_YTdBB6FD_sendMessage);
}

void Heavy_Echomatica::cBinop_YTdBB6FD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_S3tiPfty_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Ik2dr6KP, m);
}

void Heavy_Echomatica::cBinop_S3tiPfty_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_BpT9fg9x, m);
}

void Heavy_Echomatica::cMsg_OZytNgIv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_i4WNneqD_sendMessage);
}

void Heavy_Echomatica::cSystem_i4WNneqD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4uuXdVZQ, HV_BINOP_DIVIDE, 1, m, &cBinop_4uuXdVZQ_sendMessage);
}

void Heavy_Echomatica::cVar_8Ekdq3zx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_UpQ0gaxw_sendMessage);
}

void Heavy_Echomatica::cVar_suet93HZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.001f, 0, m, &cBinop_3ufNHWoh_sendMessage);
}

void Heavy_Echomatica::cUnop_oNYttZPq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_n7yAPQgg_sendMessage);
}

void Heavy_Echomatica::cBinop_4uuXdVZQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_U4ZOV1yM, HV_BINOP_MULTIPLY, 1, m, &cBinop_U4ZOV1yM_sendMessage);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_oNYttZPq_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ficoLHFV, HV_BINOP_DIVIDE, 0, m, &cBinop_ficoLHFV_sendMessage);
}

void Heavy_Echomatica::cBinop_UpQ0gaxw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4uuXdVZQ, HV_BINOP_DIVIDE, 0, m, &cBinop_4uuXdVZQ_sendMessage);
}

void Heavy_Echomatica::cBinop_ficoLHFV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_nfJyxaaC_sendMessage);
}

void Heavy_Echomatica::cBinop_AsJzOJ4K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_FFJ9Kvn5_sendMessage);
}

void Heavy_Echomatica::cBinop_FFJ9Kvn5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_vnrZiHoq_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_90JDznGu, HV_BINOP_MULTIPLY, 0, m, &cBinop_90JDznGu_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_U4ZOV1yM, HV_BINOP_MULTIPLY, 0, m, &cBinop_U4ZOV1yM_sendMessage);
}

void Heavy_Echomatica::cBinop_n7yAPQgg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_90JDznGu, HV_BINOP_MULTIPLY, 1, m, &cBinop_90JDznGu_sendMessage);
}

void Heavy_Echomatica::cBinop_90JDznGu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_L7vFrP7F_sendMessage);
}

void Heavy_Echomatica::cCast_uhWeUTjP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8Ekdq3zx, 0, m, &cVar_8Ekdq3zx_sendMessage);
}

void Heavy_Echomatica::cBinop_KUaBzvas_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_I0HhpLpl_sendMessage);
}

void Heavy_Echomatica::cBinop_I0HhpLpl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_yxBojdDZ, 5, m);
}

void Heavy_Echomatica::cBinop_L7vFrP7F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_yxBojdDZ, 4, m);
}

void Heavy_Echomatica::cBinop_tohQV5Gz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3zoBRA9m, HV_BINOP_MULTIPLY, 0, m, &cBinop_3zoBRA9m_sendMessage);
}

void Heavy_Echomatica::cBinop_U4ZOV1yM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XzxtVIrd, HV_BINOP_ADD, 1, m, &cBinop_XzxtVIrd_sendMessage);
}

void Heavy_Echomatica::cBinop_vnrZiHoq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_KUaBzvas_sendMessage);
}

void Heavy_Echomatica::cBinop_XzxtVIrd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3zoBRA9m, HV_BINOP_MULTIPLY, 1, m, &cBinop_3zoBRA9m_sendMessage);
}

void Heavy_Echomatica::cBinop_3zoBRA9m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_yxBojdDZ, 1, m);
}

void Heavy_Echomatica::cBinop_3ufNHWoh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ficoLHFV, HV_BINOP_DIVIDE, 1, m, &cBinop_ficoLHFV_sendMessage);
}

void Heavy_Echomatica::cBinop_nfJyxaaC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_AsJzOJ4K_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_XzxtVIrd, HV_BINOP_ADD, 0, m, &cBinop_XzxtVIrd_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_tohQV5Gz_sendMessage);
}

void Heavy_Echomatica::cBinop_PgqNiMRZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_aFG6JCUi_sendMessage);
}

void Heavy_Echomatica::cBinop_aFG6JCUi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_skByyEyx_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_2pOTJMQv_sendMessage);
}

void Heavy_Echomatica::cVar_6z7YJCe6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_V3QQw77W_sendMessage);
}

void Heavy_Echomatica::cMsg_0ZmU1I4K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_m0sLn6li_sendMessage);
}

void Heavy_Echomatica::cSystem_m0sLn6li_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oB9AXhVa, HV_BINOP_DIVIDE, 1, m, &cBinop_oB9AXhVa_sendMessage);
}

void Heavy_Echomatica::cBinop_skByyEyx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_HWfTGt3c_sendMessage);
}

void Heavy_Echomatica::cBinop_HWfTGt3c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_nIwX9piK, m);
}

void Heavy_Echomatica::cMsg_o1ROgtJz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_jcLWADdn_sendMessage);
}

void Heavy_Echomatica::cBinop_jcLWADdn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_PgqNiMRZ_sendMessage);
}

void Heavy_Echomatica::cBinop_2pOTJMQv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Ug1gVG80, m);
}

void Heavy_Echomatica::cBinop_V3QQw77W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_o8C1xyM7_sendMessage);
}

void Heavy_Echomatica::cBinop_o8C1xyM7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oB9AXhVa, HV_BINOP_DIVIDE, 0, m, &cBinop_oB9AXhVa_sendMessage);
}

void Heavy_Echomatica::cBinop_oB9AXhVa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_o1ROgtJz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_uYsuZDvX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_jZ2gfeCD, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_eSYhtTUE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Tk0EguYy, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_rq2FSeLH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_EABxDxdb, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_An70pfbO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_CHmxVxNv, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_6LPVWuo8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_ga7zaPCl, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_CRK1M9Pp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_9ctxP7hX_sendMessage);
}

void Heavy_Echomatica::cSystem_9ctxP7hX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aUGOnwhf, HV_BINOP_DIVIDE, 1, m, &cBinop_aUGOnwhf_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JocDAw2f_sendMessage);
}

void Heavy_Echomatica::cUnop_qNo3oN50_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_uo6OU4vm_sendMessage);
}

void Heavy_Echomatica::cMsg_usyIxfXp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_qNo3oN50_sendMessage);
}

void Heavy_Echomatica::cBinop_uo6OU4vm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aUGOnwhf, HV_BINOP_DIVIDE, 0, m, &cBinop_aUGOnwhf_sendMessage);
}

void Heavy_Echomatica::cCast_JocDAw2f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_usyIxfXp_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_aUGOnwhf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_n8JVCwN1, HV_BINOP_MULTIPLY, 1, m, &cBinop_n8JVCwN1_sendMessage);
}

void Heavy_Echomatica::cBinop_n8JVCwN1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_pUTjfMHl_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Cs3nL3zJ_sendMessage);
}

void Heavy_Echomatica::cUnop_Vvs7UkqM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_c9qitR0G_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cUnop_oBrrxE0j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_YIQHn2W2_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_esT5oINX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_yM0XviWa_sendMessage);
}

void Heavy_Echomatica::cBinop_yM0XviWa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_n8JVCwN1, HV_BINOP_MULTIPLY, 0, m, &cBinop_n8JVCwN1_sendMessage);
}

void Heavy_Echomatica::cBinop_ulrivMpb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_fIG9sgVf_sendMessage);
}

void Heavy_Echomatica::cBinop_fIG9sgVf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_29ViRYkM_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_FTWRJhwo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QizQstPM_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_psbvfoTS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vxpQzxvh, HV_BINOP_MULTIPLY, 1, m, &cBinop_vxpQzxvh_sendMessage);
}

void Heavy_Echomatica::cBinop_vxpQzxvh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_izj9NrKD, HV_BINOP_ADD, 0, m, &cBinop_izj9NrKD_sendMessage);
}

void Heavy_Echomatica::cBinop_EZZTE1HH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_izj9NrKD, HV_BINOP_ADD, 1, m, &cBinop_izj9NrKD_sendMessage);
}

void Heavy_Echomatica::cCast_0tJ75WJn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dDfh8ZLW, HV_BINOP_MULTIPLY, 1, m, &cBinop_dDfh8ZLW_sendMessage);
}

void Heavy_Echomatica::cCast_hKq0jG6l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_EZZTE1HH_sendMessage);
}

void Heavy_Echomatica::cCast_zDfC36f3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_psbvfoTS_sendMessage);
}

void Heavy_Echomatica::cBinop_dDfh8ZLW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wSjffKq0, HV_BINOP_MULTIPLY, 1, m, &cBinop_wSjffKq0_sendMessage);
}

void Heavy_Echomatica::cBinop_izj9NrKD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gOQCnlCE, HV_BINOP_ADD, 0, m, &cBinop_gOQCnlCE_sendMessage);
}

void Heavy_Echomatica::cBinop_gOQCnlCE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dDfh8ZLW, HV_BINOP_MULTIPLY, 0, m, &cBinop_dDfh8ZLW_sendMessage);
}

void Heavy_Echomatica::cBinop_TyrbcHfF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GGLNTLaF, HV_BINOP_ADD, 1, m, &cBinop_GGLNTLaF_sendMessage);
}

void Heavy_Echomatica::cBinop_YRcdXR9a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wdpX2yOn, HV_BINOP_MULTIPLY, 1, m, &cBinop_wdpX2yOn_sendMessage);
}

void Heavy_Echomatica::cBinop_wdpX2yOn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GGLNTLaF, HV_BINOP_ADD, 0, m, &cBinop_GGLNTLaF_sendMessage);
}

void Heavy_Echomatica::cCast_6bbjGLBc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_TyrbcHfF_sendMessage);
}

void Heavy_Echomatica::cCast_kEa8LZ0n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_sTeEup4O_sendMessage);
}

void Heavy_Echomatica::cCast_fcKKhiQi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_YRcdXR9a_sendMessage);
}

void Heavy_Echomatica::cBinop_ctZgfpPU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qGgTj4h6, HV_BINOP_MULTIPLY, 1, m, &cBinop_qGgTj4h6_sendMessage);
}

void Heavy_Echomatica::cBinop_GGLNTLaF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ctZgfpPU, HV_BINOP_MULTIPLY, 0, m, &cBinop_ctZgfpPU_sendMessage);
}

void Heavy_Echomatica::cBinop_sTeEup4O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ctZgfpPU, HV_BINOP_MULTIPLY, 1, m, &cBinop_ctZgfpPU_sendMessage);
}

void Heavy_Echomatica::cBinop_uSphpJKK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SSoLiQZk, HV_BINOP_MULTIPLY, 1, m, &cBinop_SSoLiQZk_sendMessage);
}

void Heavy_Echomatica::cBinop_SSoLiQZk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mrkDHjOA, HV_BINOP_ADD, 0, m, &cBinop_mrkDHjOA_sendMessage);
}

void Heavy_Echomatica::cBinop_mrkDHjOA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GQeBvP0d, HV_BINOP_SUBTRACT, 0, m, &cBinop_GQeBvP0d_sendMessage);
}

void Heavy_Echomatica::cBinop_3hUhUVll_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mrkDHjOA, HV_BINOP_ADD, 1, m, &cBinop_mrkDHjOA_sendMessage);
}

void Heavy_Echomatica::cBinop_GQeBvP0d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_p6laT1NV, HV_BINOP_MULTIPLY, 0, m, &cBinop_p6laT1NV_sendMessage);
}

void Heavy_Echomatica::cCast_S96XgNn3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_p6laT1NV, HV_BINOP_MULTIPLY, 1, m, &cBinop_p6laT1NV_sendMessage);
}

void Heavy_Echomatica::cCast_c6MmHmcJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_3hUhUVll_sendMessage);
}

void Heavy_Echomatica::cCast_4HR49XQR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_uSphpJKK_sendMessage);
}

void Heavy_Echomatica::cBinop_p6laT1NV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_t1hgJXZK, HV_BINOP_MULTIPLY, 1, m, &cBinop_t1hgJXZK_sendMessage);
}

void Heavy_Echomatica::cBinop_wRL2KZRl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wcjyKyY5, HV_BINOP_ADD, 1, m, &cBinop_wcjyKyY5_sendMessage);
}

void Heavy_Echomatica::cBinop_wcjyKyY5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_rCW1en7q_sendMessage);
}

void Heavy_Echomatica::cBinop_Y3ioeoWF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_8aQwUS7d_sendMessage);
}

void Heavy_Echomatica::cBinop_VythjB1n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wcjyKyY5, HV_BINOP_ADD, 0, m, &cBinop_wcjyKyY5_sendMessage);
}

void Heavy_Echomatica::cCast_sRfhtLaB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_wRL2KZRl_sendMessage);
}

void Heavy_Echomatica::cCast_1grNQulX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Y3ioeoWF_sendMessage);
}

void Heavy_Echomatica::cBinop_rCW1en7q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jeGJoJfl, HV_BINOP_MULTIPLY, 1, m, &cBinop_jeGJoJfl_sendMessage);
}

void Heavy_Echomatica::cBinop_8aQwUS7d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VythjB1n, HV_BINOP_MULTIPLY, 1, m, &cBinop_VythjB1n_sendMessage);
}

void Heavy_Echomatica::cBinop_5vQsJwrv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_KWbrq57S_sendMessage);
}

void Heavy_Echomatica::cBinop_9Y8iYECP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2f20jRuT, HV_BINOP_ADD, 0, m, &cBinop_2f20jRuT_sendMessage);
}

void Heavy_Echomatica::cBinop_2f20jRuT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QPeicZrt, HV_BINOP_SUBTRACT, 0, m, &cBinop_QPeicZrt_sendMessage);
}

void Heavy_Echomatica::cBinop_uXv52L1V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2f20jRuT, HV_BINOP_ADD, 1, m, &cBinop_2f20jRuT_sendMessage);
}

void Heavy_Echomatica::cCast_AQwgqpeH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_5vQsJwrv_sendMessage);
}

void Heavy_Echomatica::cCast_l1WOq1Zn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_uXv52L1V_sendMessage);
}

void Heavy_Echomatica::cBinop_QPeicZrt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZjSp5M5v, HV_BINOP_MULTIPLY, 1, m, &cBinop_ZjSp5M5v_sendMessage);
}

void Heavy_Echomatica::cBinop_KWbrq57S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9Y8iYECP, HV_BINOP_MULTIPLY, 1, m, &cBinop_9Y8iYECP_sendMessage);
}

void Heavy_Echomatica::cBinop_KhY72brw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, -24.0f, 0, m, &cBinop_cjSgyeaS_sendMessage);
}

void Heavy_Echomatica::cBinop_cjSgyeaS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_1qnY4hVn_sendMessage);
}

void Heavy_Echomatica::cBinop_8FOuSZ6L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_wkbTapOK_sendMessage);
}

void Heavy_Echomatica::cBinop_rquH9Nd6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6po9KaIF, HV_BINOP_ADD, 0, m, &cBinop_6po9KaIF_sendMessage);
}

void Heavy_Echomatica::cBinop_6po9KaIF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4ptwcW2J, HV_BINOP_ADD, 0, m, &cBinop_4ptwcW2J_sendMessage);
}

void Heavy_Echomatica::cBinop_rh3IR4Kj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6po9KaIF, HV_BINOP_ADD, 1, m, &cBinop_6po9KaIF_sendMessage);
}

void Heavy_Echomatica::cCast_H0gbwzbi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_rh3IR4Kj_sendMessage);
}

void Heavy_Echomatica::cCast_kkKKv136_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_8FOuSZ6L_sendMessage);
}

void Heavy_Echomatica::cBinop_4ptwcW2J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FTWRJhwo, 1, m, &cVar_FTWRJhwo_sendMessage);
}

void Heavy_Echomatica::cBinop_wkbTapOK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rquH9Nd6, HV_BINOP_MULTIPLY, 1, m, &cBinop_rquH9Nd6_sendMessage);
}

void Heavy_Echomatica::cVar_Xa8A0yWz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_W78la6eR_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_esT5oINX_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cUuMlRWp_sendMessage);
}

void Heavy_Echomatica::cVar_mLn9ZU7U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_ulrivMpb_sendMessage);
}

void Heavy_Echomatica::cVar_kNMLNRQp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 24.0f, 0, m, &cBinop_KhY72brw_sendMessage);
}

void Heavy_Echomatica::cUnop_Aki2SBsI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_LEOeeaLL_sendMessage);
}

void Heavy_Echomatica::cCast_pUTjfMHl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_Vvs7UkqM_sendMessage);
}

void Heavy_Echomatica::cCast_Cs3nL3zJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_oBrrxE0j_sendMessage);
}

void Heavy_Echomatica::cSend_c9qitR0G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_m2O7X6KD_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_YIQHn2W2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_oUhDq6Oi_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_ydO0TidX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cMsg_29ViRYkM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_5T3oErY1_sendMessage);
}

void Heavy_Echomatica::cBinop_5T3oErY1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gtTXDqyR, HV_BINOP_MULTIPLY, 1, m, &cBinop_gtTXDqyR_sendMessage);
}

void Heavy_Echomatica::cBinop_gtTXDqyR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_VhW0coCt_sendMessage);
}

void Heavy_Echomatica::cBinop_VhW0coCt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dLgh1Oyo_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dYPpVBrb_sendMessage);
}

void Heavy_Echomatica::cMsg_QizQstPM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_FQ67hPX2_sendMessage);
}

void Heavy_Echomatica::cBinop_FQ67hPX2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3Rf7DkPm_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ziyacaSK_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5I25OOpr_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_471DT4WY_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_MY8xUgQe_sendMessage);
}

void Heavy_Echomatica::cBinop_wSjffKq0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uYsuZDvX_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_qGgTj4h6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_eSYhtTUE_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_t1hgJXZK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rq2FSeLH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_jeGJoJfl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_An70pfbO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_ZjSp5M5v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6LPVWuo8_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_VgjvAZNd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mLn9ZU7U, 1, m, &cVar_mLn9ZU7U_sendMessage);
}

void Heavy_Echomatica::cCast_T42IvKpp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Xa8A0yWz, 0, m, &cVar_Xa8A0yWz_sendMessage);
}

void Heavy_Echomatica::cCast_W78la6eR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mLn9ZU7U, 0, m, &cVar_mLn9ZU7U_sendMessage);
}

void Heavy_Echomatica::cCast_cUuMlRWp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FTWRJhwo, 0, m, &cVar_FTWRJhwo_sendMessage);
}

void Heavy_Echomatica::cSend_1aOMRAoW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_znTxvnLE_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_1qnY4hVn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XxY2HeJX_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_x0mmradR_sendMessage);
}

void Heavy_Echomatica::cCast_XxY2HeJX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_smtFpTFo, HV_BINOP_POW, 1, m, &cBinop_smtFpTFo_sendMessage);
}

void Heavy_Echomatica::cCast_x0mmradR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JY2gtlHD_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_JY2gtlHD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_smtFpTFo, HV_BINOP_POW, 0, m, &cBinop_smtFpTFo_sendMessage);
}

void Heavy_Echomatica::cBinop_smtFpTFo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_r5ZppjkX_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LRNToKRK_sendMessage);
}

void Heavy_Echomatica::cCast_1fmUDhpH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Xa8A0yWz, 0, m, &cVar_Xa8A0yWz_sendMessage);
}

void Heavy_Echomatica::cCast_ZoUgzD3Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_kNMLNRQp, 0, m, &cVar_kNMLNRQp_sendMessage);
}

void Heavy_Echomatica::cCast_vFoC9eYd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Xa8A0yWz, 0, m, &cVar_Xa8A0yWz_sendMessage);
}

void Heavy_Echomatica::cCast_7f9sNEQS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_kNMLNRQp, 0, m, &cVar_kNMLNRQp_sendMessage);
}

void Heavy_Echomatica::cBinop_LEOeeaLL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RJSmP8vt, HV_BINOP_MULTIPLY, 1, m, &cBinop_RJSmP8vt_sendMessage);
}

void Heavy_Echomatica::cBinop_RJSmP8vt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_FEDOa74u_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_dYPpVBrb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RJSmP8vt, HV_BINOP_MULTIPLY, 0, m, &cBinop_RJSmP8vt_sendMessage);
}

void Heavy_Echomatica::cCast_dLgh1Oyo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_ydO0TidX_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_471DT4WY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qGgTj4h6, HV_BINOP_MULTIPLY, 0, m, &cBinop_qGgTj4h6_sendMessage);
}

void Heavy_Echomatica::cCast_ziyacaSK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jeGJoJfl, HV_BINOP_MULTIPLY, 0, m, &cBinop_jeGJoJfl_sendMessage);
}

void Heavy_Echomatica::cCast_5I25OOpr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_t1hgJXZK, HV_BINOP_MULTIPLY, 0, m, &cBinop_t1hgJXZK_sendMessage);
}

void Heavy_Echomatica::cCast_MY8xUgQe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wSjffKq0, HV_BINOP_MULTIPLY, 0, m, &cBinop_wSjffKq0_sendMessage);
}

void Heavy_Echomatica::cCast_3Rf7DkPm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZjSp5M5v, HV_BINOP_MULTIPLY, 0, m, &cBinop_ZjSp5M5v_sendMessage);
}

void Heavy_Echomatica::cCast_r5ZppjkX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_1aOMRAoW_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_LRNToKRK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SQRT, m, &cUnop_Aki2SBsI_sendMessage);
}

void Heavy_Echomatica::cSend_FEDOa74u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_l8EXQpjY_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_sEkiWIn6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_54uKwSNG_sendMessage);
}

void Heavy_Echomatica::cBinop_54uKwSNG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_84BuGbO5_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_3jF2G6P1_sendMessage);
}

void Heavy_Echomatica::cVar_i1xjKyEv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_aicHH8Qv_sendMessage);
}

void Heavy_Echomatica::cMsg_9zefGZTu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_FfC9HTMm_sendMessage);
}

void Heavy_Echomatica::cSystem_FfC9HTMm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4kLmo9Wf, HV_BINOP_DIVIDE, 1, m, &cBinop_4kLmo9Wf_sendMessage);
}

void Heavy_Echomatica::cBinop_84BuGbO5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_RYKofftx_sendMessage);
}

void Heavy_Echomatica::cBinop_RYKofftx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_oznP1bfM, m);
}

void Heavy_Echomatica::cMsg_phgNKYIQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_PafaN4sl_sendMessage);
}

void Heavy_Echomatica::cBinop_PafaN4sl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_sEkiWIn6_sendMessage);
}

void Heavy_Echomatica::cBinop_3jF2G6P1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_vnz8ba5z, m);
}

void Heavy_Echomatica::cBinop_aicHH8Qv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_BUCAiKkB_sendMessage);
}

void Heavy_Echomatica::cBinop_BUCAiKkB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4kLmo9Wf, HV_BINOP_DIVIDE, 0, m, &cBinop_4kLmo9Wf_sendMessage);
}

void Heavy_Echomatica::cBinop_4kLmo9Wf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_phgNKYIQ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_mvA39Q4e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xYfJ5Eq5, HV_BINOP_MULTIPLY, 0, m, &cBinop_xYfJ5Eq5_sendMessage);
}

void Heavy_Echomatica::cMsg_2ZHCZbgc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ABpetwqo_sendMessage);
}

void Heavy_Echomatica::cSystem_ABpetwqo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YvJ7LnLU_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_xYfJ5Eq5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_SFKMB2Pm_sendMessage);
}

void Heavy_Echomatica::cBinop_DB7RzeP8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xYfJ5Eq5, HV_BINOP_MULTIPLY, 1, m, &cBinop_xYfJ5Eq5_sendMessage);
}

void Heavy_Echomatica::cMsg_YvJ7LnLU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_DB7RzeP8_sendMessage);
}

void Heavy_Echomatica::cBinop_SFKMB2Pm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_iHSZJKAX_sendMessage);
}

void Heavy_Echomatica::cBinop_iHSZJKAX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_Qlt8zOpb_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_psfl2LK7, m);
}

void Heavy_Echomatica::cBinop_Qlt8zOpb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Ezuf8H8w, m);
}

void Heavy_Echomatica::cSend_lJ1UnlwJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ELngckYR_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_UQ4KiY4H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_NuN2oEQK_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_JFgFmDgR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_spqnjU0T_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_zxdSYOXv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_FPNPIKFL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_wAJcwqdO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jbYANENB_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_I8LuTE4z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_R86ZGuyh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_dLUWteMF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_QjiENGh7_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_Tauvyv10_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_2ayxV1qK_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_rYU4rZ0v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_swCg5UQd_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_M4NoJhww_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_XNIBjck6_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_ET3KaVlY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_qEH6SOej_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_5L3xCMlt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_0vKihRTX_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_iwR9UECE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_WnfI3dDu_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_eCcJPQoD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_vPERjo7n_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_kpTxAuhL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_J2RHWxLK_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_B2elIEIe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_bBhwQgxU_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_SsFyrsAN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_gOSPxtdh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_imCvfufC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_LnKEUcx4_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_iznlznej_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_rlp9pvVl_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_gB7XMjWc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_TcqKnyim_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_hcDqzl4d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_hAWboubS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_fO0o7jE0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_sJmWkrXq_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_hrQnJuGl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_3OmbRRyY_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_0n8nkQ0t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_GwynIRG3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_SXBckWqQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_vetXD7Vd_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_FA7gvUVU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_DcdXiS8R_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_JnnvOYL1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_yXTnuxbf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_w5uuuB5m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_dxvUogR3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_CjMIv69p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.01f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cIaO77nr, 0, m, &cSlice_cIaO77nr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4glTvNqq, 0, m, &cSlice_4glTvNqq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DfUfn540, 0, m, &cSlice_DfUfn540_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bo3jF87b, 0, m, &cSlice_bo3jF87b_sendMessage);
}

void Heavy_Echomatica::cCast_uu63lxyW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CjMIv69p_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_SDE2eBJC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Dbekq8o9_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_Dbekq8o9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.2f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cIaO77nr, 0, m, &cSlice_cIaO77nr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4glTvNqq, 0, m, &cSlice_4glTvNqq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DfUfn540, 0, m, &cSlice_DfUfn540_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bo3jF87b, 0, m, &cSlice_bo3jF87b_sendMessage);
}

void Heavy_Echomatica::cMsg_jL7jPfAw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_rVRMmezu, HV_BINOP_MULTIPLY, 1, m, &cBinop_rVRMmezu_sendMessage);
}

void Heavy_Echomatica::cBinop_rVRMmezu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_J91LkCqN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_uJ8VHmWu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_AkXfnyjj, 0, m, &cVar_AkXfnyjj_sendMessage);
}

void Heavy_Echomatica::cMsg_25lYKDAH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_zIWqfNtG, 1, m, &cIf_zIWqfNtG_sendMessage);
}

void Heavy_Echomatica::cMsg_XbqRo2Qu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_zIWqfNtG, 1, m, &cIf_zIWqfNtG_sendMessage);
}

void Heavy_Echomatica::cSend_J91LkCqN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_RxTbkp3o_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_ggqvOpj6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_im0ljOOB, 0, m, &cPack_im0ljOOB_sendMessage);
}

void Heavy_Echomatica::cBinop_ROGXNKfn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_RsXppPG2, 0, m, &cPack_RsXppPG2_sendMessage);
}

void Heavy_Echomatica::cBinop_yL0G8we6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_aUzhieVF, 0, m, &cPack_aUzhieVF_sendMessage);
}

void Heavy_Echomatica::cBinop_4aJAznFg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_58q6hkkJ, 0, m, &cPack_58q6hkkJ_sendMessage);
}

void Heavy_Echomatica::cBinop_gc047pvq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_4W8qBkvx, 0, m, &cPack_4W8qBkvx_sendMessage);
}

void Heavy_Echomatica::cBinop_JDbaqRLO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_xzcakM8Z, 0, m, &cPack_xzcakM8Z_sendMessage);
}

void Heavy_Echomatica::cCast_yy1exKmU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_qR5RIC19, 0, m, &cVar_qR5RIC19_sendMessage);
}

void Heavy_Echomatica::cCast_EBUi6LHb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ggqvOpj6, HV_BINOP_MULTIPLY, 1, m, &cBinop_ggqvOpj6_sendMessage);
}

void Heavy_Echomatica::cCast_hDYq2yaY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_phsN5h8x, 0, m, &cVar_phsN5h8x_sendMessage);
}

void Heavy_Echomatica::cCast_IInHo9tI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JDbaqRLO, HV_BINOP_MULTIPLY, 1, m, &cBinop_JDbaqRLO_sendMessage);
}

void Heavy_Echomatica::cCast_y8l7lcBP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gc047pvq, HV_BINOP_MULTIPLY, 1, m, &cBinop_gc047pvq_sendMessage);
}

void Heavy_Echomatica::cCast_Gdx5Cj4J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_zYPboFb8, 0, m, &cVar_zYPboFb8_sendMessage);
}

void Heavy_Echomatica::cCast_YlNBjEcH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4aJAznFg, HV_BINOP_MULTIPLY, 1, m, &cBinop_4aJAznFg_sendMessage);
}

void Heavy_Echomatica::cCast_LMDc3Hg4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_aOcf58dG, 0, m, &cVar_aOcf58dG_sendMessage);
}

void Heavy_Echomatica::cCast_D7Jp9nh2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yL0G8we6, HV_BINOP_MULTIPLY, 1, m, &cBinop_yL0G8we6_sendMessage);
}

void Heavy_Echomatica::cCast_crR29erX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3ju0D3ym, 0, m, &cVar_3ju0D3ym_sendMessage);
}

void Heavy_Echomatica::cCast_SO359sRz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xZ2po1Y0, 0, m, &cVar_xZ2po1Y0_sendMessage);
}

void Heavy_Echomatica::cCast_IEA4mS85_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ROGXNKfn, HV_BINOP_MULTIPLY, 1, m, &cBinop_ROGXNKfn_sendMessage);
}

void Heavy_Echomatica::cBinop_UDsfUiVA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BgZ562Pg_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_OwiUvx0d_sendMessage);
}

void Heavy_Echomatica::cMsg_MxpaNkmg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.5f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_UDsfUiVA, HV_BINOP_MULTIPLY, 1, m, &cBinop_UDsfUiVA_sendMessage);
}

void Heavy_Echomatica::cCast_sirHab0b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UDsfUiVA, HV_BINOP_MULTIPLY, 0, m, &cBinop_UDsfUiVA_sendMessage);
}

void Heavy_Echomatica::cCast_sXyjk8nZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_MxpaNkmg_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_S0fYqBGV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_GrvvJFvH, HV_BINOP_ADD, 1, m, &cBinop_GrvvJFvH_sendMessage);
}

void Heavy_Echomatica::cBinop_GrvvJFvH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vqutBfUj, 0, m, &cVar_vqutBfUj_sendMessage);
}

void Heavy_Echomatica::cCast_OwiUvx0d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GrvvJFvH, HV_BINOP_ADD, 0, m, &cBinop_GrvvJFvH_sendMessage);
}

void Heavy_Echomatica::cCast_BgZ562Pg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_S0fYqBGV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_BIUYtwPr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uJ8VHmWu_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_RG2IZuLe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jL7jPfAw_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_0eqjyKiN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XbqRo2Qu_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_zxsdt3Oq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jL7jPfAw_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_WAeXXJ27_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_25lYKDAH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_LTmwrpru_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vqutBfUj, 0, m, &cVar_vqutBfUj_sendMessage);
}

void Heavy_Echomatica::cCast_Jf83EW1m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rVRMmezu, HV_BINOP_MULTIPLY, 0, m, &cBinop_rVRMmezu_sendMessage);
}

void Heavy_Echomatica::cReceive_ewwpZIJu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CRK1M9Pp_sendMessage(_c, 0, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7f9sNEQS_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vFoC9eYd_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_X8v5yRxE, 0, m, &cVar_X8v5yRxE_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_yK9ArSdb, 0, m, &cVar_yK9ArSdb_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_11ruDsH8, 0, m, &cVar_11ruDsH8_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_FA7DGMnf, 0, m, &cVar_FA7DGMnf_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_t00779JR, 0, m, &cVar_t00779JR_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_dKzvbFul, 0, m, &cVar_dKzvbFul_sendMessage);
  cMsg_gxduQGgc_sendMessage(_c, 0, m);
  cMsg_SXFeWhMB_sendMessage(_c, 0, m);
  cMsg_oVboFS2j_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_7JcVfSsG, 0, m, &cVar_7JcVfSsG_sendMessage);
  cMsg_5ADqvitC_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Oz0DRgtX, 0, m, &cVar_Oz0DRgtX_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eUu9N0N3_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_D8CAjL3t_sendMessage);
  cMsg_Ya3zABKM_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_YxhxlgHP, 0, m, &cVar_YxhxlgHP_sendMessage);
  cMsg_HkFotSgt_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_GA6lAdyk, 0, m, &cVar_GA6lAdyk_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GSUWOaWr_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lM7BZ7i1_sendMessage);
  cMsg_xnKLY0EW_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_AIPrZKLj, 0, m, &cVar_AIPrZKLj_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BwLJlOwK_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_40TAq0R3_sendMessage);
  cMsg_tJA1JIAi_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_oRuz6YmX, 0, m, &cVar_oRuz6YmX_sendMessage);
  cMsg_3hcLn0qL_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_45ZSTNji, 0, m, &cVar_45ZSTNji_sendMessage);
  cMsg_eDg7T2Dn_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_FF7ZUiX2, 0, m, &cVar_FF7ZUiX2_sendMessage);
  cMsg_XYLxP53A_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_mIv7Kxfa, 0, m, &cVar_mIv7Kxfa_sendMessage);
  cMsg_mc5Fcxbj_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_U9bsdn9M, 0, m, &cVar_U9bsdn9M_sendMessage);
  cMsg_miBIvySa_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_OrvGI8kJ, 0, m, &cVar_OrvGI8kJ_sendMessage);
  cMsg_BUniidBX_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_TKeO55Hq, 0, m, &cVar_TKeO55Hq_sendMessage);
  cMsg_pEmiNNEv_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_w6mr0nEq, 0, m, &cVar_w6mr0nEq_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_suet93HZ, 0, m, &cVar_suet93HZ_sendMessage);
  cMsg_OZytNgIv_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_8Ekdq3zx, 0, m, &cVar_8Ekdq3zx_sendMessage);
  cMsg_0ZmU1I4K_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_6z7YJCe6, 0, m, &cVar_6z7YJCe6_sendMessage);
  cMsg_9F2WZvvf_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_vVbyX7Ns, 0, m, &cVar_vVbyX7Ns_sendMessage);
  cMsg_HGqp8rbw_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_6qmZHq6D, 0, m, &cVar_6qmZHq6D_sendMessage);
  cMsg_GEVfS85d_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_7zltO9UF, 0, m, &cVar_7zltO9UF_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_7AE5iZFa, 0, m, &cVar_7AE5iZFa_sendMessage);
  cMsg_k6H4zYtF_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_pbCayt9e, 0, m, &cVar_pbCayt9e_sendMessage);
  cMsg_e8jEjGgV_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_NjISllS4, 0, m, &cVar_NjISllS4_sendMessage);
  cMsg_qRXNYRqn_sendMessage(_c, 0, m);
  cMsg_9zefGZTu_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_i1xjKyEv, 0, m, &cVar_i1xjKyEv_sendMessage);
  cMsg_2ZHCZbgc_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_mvA39Q4e, 0, m, &cVar_mvA39Q4e_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ZBX0vijZ, 0, m, &cVar_ZBX0vijZ_sendMessage);
  cMsg_w09P6w92_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_K7dny3oR, 0, m, &cVar_K7dny3oR_sendMessage);
  cMsg_k8HveDxw_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_zsLDU8e1, 0, m, &cVar_zsLDU8e1_sendMessage);
  cMsg_uLYPI983_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_oaLaAl6J, 0, m, &cVar_oaLaAl6J_sendMessage);
  cMsg_x8VKJF2L_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_5zlwclED, 0, m, &cVar_5zlwclED_sendMessage);
  cMsg_4myvEV1I_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Wo9b06xU, 0, m, &cVar_Wo9b06xU_sendMessage);
  cMsg_GeprWJyf_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_V1VNdvGj, 0, m, &cVar_V1VNdvGj_sendMessage);
  cMsg_A7HFVsPW_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_YV7h3KRS, 0, m, &cVar_YV7h3KRS_sendMessage);
  cMsg_TgjJ2NFI_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cReceive_vhtz7tBc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_DN8ATu5N_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_ELngckYR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xZ2po1Y0, 0, m, &cVar_xZ2po1Y0_sendMessage);
}

void Heavy_Echomatica::cReceive_NuN2oEQK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3ju0D3ym, 0, m, &cVar_3ju0D3ym_sendMessage);
}

void Heavy_Echomatica::cReceive_spqnjU0T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_aOcf58dG, 0, m, &cVar_aOcf58dG_sendMessage);
}

void Heavy_Echomatica::cReceive_FPNPIKFL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_zYPboFb8, 0, m, &cVar_zYPboFb8_sendMessage);
}

void Heavy_Echomatica::cReceive_jbYANENB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_phsN5h8x, 0, m, &cVar_phsN5h8x_sendMessage);
}

void Heavy_Echomatica::cReceive_R86ZGuyh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_qR5RIC19, 0, m, &cVar_qR5RIC19_sendMessage);
}

void Heavy_Echomatica::cReceive_QjiENGh7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_dC7kt0HP, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_jg0NimEu, 0, m, &cVar_jg0NimEu_sendMessage);
}

void Heavy_Echomatica::cReceive_2ayxV1qK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_WuwPGekv, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_Vehw1ryD, 0, m, &cVar_Vehw1ryD_sendMessage);
}

void Heavy_Echomatica::cReceive_swCg5UQd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Sle7BZQB, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_pKfgscKv, 0, m, &cVar_pKfgscKv_sendMessage);
}

void Heavy_Echomatica::cReceive_XNIBjck6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_ZIMEdO1m, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_BsamKs5A, 0, m, &cVar_BsamKs5A_sendMessage);
}

void Heavy_Echomatica::cReceive_qEH6SOej_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_J5GDmO4u, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_xjRNSjs8, 0, m, &cVar_xjRNSjs8_sendMessage);
}

void Heavy_Echomatica::cReceive_0vKihRTX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_KxSA6zVM, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_0y0oe6O8, 0, m, &cVar_0y0oe6O8_sendMessage);
}

void Heavy_Echomatica::cReceive_WnfI3dDu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_pK46mNVM, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_1mrw22e2, 0, m, &cVar_1mrw22e2_sendMessage);
}

void Heavy_Echomatica::cReceive_vPERjo7n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_s1FBgWMT, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_ZKz43ch9, 0, m, &cVar_ZKz43ch9_sendMessage);
}

void Heavy_Echomatica::cReceive_J2RHWxLK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Wuq5QTjK, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_DSSbwCxD, 0, m, &cVar_DSSbwCxD_sendMessage);
}

void Heavy_Echomatica::cReceive_bBhwQgxU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_fZ3YLsoG, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_8wdtTQiJ, 0, m, &cVar_8wdtTQiJ_sendMessage);
}

void Heavy_Echomatica::cReceive_gOSPxtdh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Gjp13e1h, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_au4GVUkh, 0, m, &cVar_au4GVUkh_sendMessage);
}

void Heavy_Echomatica::cReceive_LnKEUcx4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_3ALeQLQv, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_JNMPZZWZ, 0, m, &cVar_JNMPZZWZ_sendMessage);
}

void Heavy_Echomatica::cReceive_RxTbkp3o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_IEA4mS85_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SO359sRz_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_D7Jp9nh2_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_crR29erX_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YlNBjEcH_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LMDc3Hg4_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_y8l7lcBP_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Gdx5Cj4J_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_IInHo9tI_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hDYq2yaY_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_EBUi6LHb_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yy1exKmU_sendMessage);
}

void Heavy_Echomatica::cReceive_rlp9pvVl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_q6AMiB2t_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_TcqKnyim_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FF7ZUiX2, 0, m, &cVar_FF7ZUiX2_sendMessage);
}

void Heavy_Echomatica::cReceive_hAWboubS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mIv7Kxfa, 0, m, &cVar_mIv7Kxfa_sendMessage);
}

void Heavy_Echomatica::cReceive_sJmWkrXq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_U9bsdn9M, 0, m, &cVar_U9bsdn9M_sendMessage);
}

void Heavy_Echomatica::cReceive_3OmbRRyY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OrvGI8kJ, 0, m, &cVar_OrvGI8kJ_sendMessage);
}

void Heavy_Echomatica::cReceive_GwynIRG3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TKeO55Hq, 0, m, &cVar_TKeO55Hq_sendMessage);
}

void Heavy_Echomatica::cReceive_vetXD7Vd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_w6mr0nEq, 0, m, &cVar_w6mr0nEq_sendMessage);
}

void Heavy_Echomatica::cReceive_DcdXiS8R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_EnBrlJPy, m);
}

void Heavy_Echomatica::cReceive_yXTnuxbf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8Ekdq3zx, 0, m, &cVar_8Ekdq3zx_sendMessage);
}

void Heavy_Echomatica::cReceive_dxvUogR3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_suet93HZ, 0, m, &cVar_suet93HZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uhWeUTjP_sendMessage);
}

void Heavy_Echomatica::cReceive_hL4kD74N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jorD5DYR, 0, m, &cVar_jorD5DYR_sendMessage);
}

void Heavy_Echomatica::cReceive_wCACvMtB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_RddoCZg6_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_gapv4GQA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2thVmhz1_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xYvfKoMp_sendMessage);
}

void Heavy_Echomatica::cReceive_uLORcr45_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_0oIMlI1A_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yyYt04g8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5rrDyO2i_sendMessage);
}

void Heavy_Echomatica::cReceive_8DPz5x3r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_DvKb09qL, 0, m, &cPack_DvKb09qL_sendMessage);
}

void Heavy_Echomatica::cReceive_ksqSnZ9n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_6MTxQjC5, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_yW89w0j5, m);
}

void Heavy_Echomatica::cReceive_e930eMGa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_3MCPxygc, 0, m, &cPack_3MCPxygc_sendMessage);
}

void Heavy_Echomatica::cReceive_hXgNJXUl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_xScPtvWC_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_d4MEMx31_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_yn5QnQLr, 0, m, &cPack_yn5QnQLr_sendMessage);
}

void Heavy_Echomatica::cReceive_5nunucmi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oYj34ONm_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CBWk81qS_sendMessage);
}

void Heavy_Echomatica::cReceive_g2BDPDFV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xbxxJjkp_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_crG4F42N_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9StKCyPt_sendMessage);
}

void Heavy_Echomatica::cReceive_MxIo00vL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JvMvQbYq_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CPAgAg9n_sendMessage);
}

void Heavy_Echomatica::cReceive_BlmO6P8t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sf5cUk7d_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oC71fRi5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GjyTkMD8_sendMessage);
}

void Heavy_Echomatica::cReceive_m2O7X6KD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gtTXDqyR, HV_BINOP_MULTIPLY, 0, m, &cBinop_gtTXDqyR_sendMessage);
}

void Heavy_Echomatica::cReceive_oUhDq6Oi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vxpQzxvh, HV_BINOP_MULTIPLY, 0, m, &cBinop_vxpQzxvh_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_wdpX2yOn, HV_BINOP_MULTIPLY, 0, m, &cBinop_wdpX2yOn_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_SSoLiQZk, HV_BINOP_MULTIPLY, 0, m, &cBinop_SSoLiQZk_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_VythjB1n, HV_BINOP_MULTIPLY, 0, m, &cBinop_VythjB1n_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_9Y8iYECP, HV_BINOP_MULTIPLY, 0, m, &cBinop_9Y8iYECP_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_rquH9Nd6, HV_BINOP_MULTIPLY, 0, m, &cBinop_rquH9Nd6_sendMessage);
}

void Heavy_Echomatica::cReceive_znTxvnLE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_0tJ75WJn_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hKq0jG6l_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zDfC36f3_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kEa8LZ0n_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6bbjGLBc_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fcKKhiQi_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_S96XgNn3_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_c6MmHmcJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4HR49XQR_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sRfhtLaB_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1grNQulX_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_l1WOq1Zn_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AQwgqpeH_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_H0gbwzbi_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kkKKv136_sendMessage);
}

void Heavy_Echomatica::cReceive_l8EXQpjY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gOQCnlCE, HV_BINOP_ADD, 1, m, &cBinop_gOQCnlCE_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_GQeBvP0d, HV_BINOP_SUBTRACT, 1, m, &cBinop_GQeBvP0d_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_QPeicZrt, HV_BINOP_SUBTRACT, 1, m, &cBinop_QPeicZrt_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_4ptwcW2J, HV_BINOP_ADD, 1, m, &cBinop_4ptwcW2J_sendMessage);
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
    sEnv_process(this, &sEnv_pPaCea0Q, VIf(I0), &sEnv_pPaCea0Q_sendMessage);
    __hv_line_f(&sLine_5tk03qwI, VOf(Bf0));
    __hv_mul_f(VIf(I0), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_oUdZ6kti, VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_4rnzEJBM, VOf(Bf0));
    __hv_rpole_f(&sRPole_0ygceulJ, VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_wCTuSVuu, VOf(Bf1));
    __hv_rpole_f(&sRPole_Y2JueFVI, VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_KihLJLw4, VIf(Bf1), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_LtmKoumS, VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    sEnv_process(this, &sEnv_G8elQIR9, VIf(I1), &sEnv_G8elQIR9_sendMessage);
    __hv_line_f(&sLine_9WuE321A, VOf(Bf0));
    __hv_mul_f(VIf(I1), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf2), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_61c9Rwrh, VOf(Bf2));
    __hv_mul_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_gwsF1rja, VOf(Bf0));
    __hv_rpole_f(&sRPole_wx8pb3qZ, VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_l60Eph7U, VOf(Bf2));
    __hv_rpole_f(&sRPole_g8WjzaGx, VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_nQQ3n6IK, VIf(Bf2), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_dhwHxgEr, VOf(Bf2));
    __hv_mul_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf1), VIf(Bf2), VOf(Bf0));
    __hv_varread_f(&sVarf_4iiDnMuo, VOf(Bf3));
    __hv_varread_f(&sVarf_1j2Et6jC, VOf(Bf4));
    __hv_varread_f(&sVarf_YXPl5FZ8, VOf(Bf5));
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_RcFRPioC, VOf(Bf4));
    __hv_add_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_Kf08D4tK, VOf(Bf5));
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_2nDZOFRo, VOf(Bf4));
    __hv_add_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_IyCFlqbs, VOf(Bf3));
    __hv_rpole_f(&sRPole_e7ROxvGz, VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_7gdJ3hAA, VIf(Bf3), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_cMKh3Va3, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_qPrMF0IE, VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_wMRFy9cR, VOf(Bf3));
    __hv_rpole_f(&sRPole_73TIe37y, VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f);
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_lXqN4iRI, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_IfnzQLhe, VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    sEnv_process(this, &sEnv_4vd7z8vn, VIf(Bf5), &sEnv_4vd7z8vn_sendMessage);
    __hv_line_f(&sLine_5FHCitB4, VOf(Bf6));
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
    __hv_line_f(&sLine_GH0JicYq, VOf(Bf7));
    __hv_mul_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf3), VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_psfl2LK7, VOf(Bf0));
    __hv_mul_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_Ezuf8H8w, VOf(Bf7));
    __hv_rpole_f(&sRPole_qivqNba2, VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_vnz8ba5z, VOf(Bf0));
    __hv_rpole_f(&sRPole_zlBL9vVL, VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_c5IPp58X, VIf(Bf0), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_oznP1bfM, VOf(Bf0));
    __hv_mul_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_tabwrite_f(&sTabwrite_3ryDsFXD, VIf(Bf0));
    __hv_phasor_k_f(&sPhasor_aPnpsauH, VOf(Bf0));
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
    __hv_varread_f(&sVarf_CL1J2NGd, VOf(Bf3));
    __hv_phasor_k_f(&sPhasor_nIzgogvN, VOf(Bf0));
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
    __hv_varread_f(&sVarf_lwuISAIn, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf7), VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_varwrite_f(&sVarf_CF0dQMXH, VIf(Bf8));
    __hv_line_f(&sLine_QtdEKLsF, VOf(Bf8));
    __hv_varread_f(&sVarf_CF0dQMXH, VOf(Bf3));
    __hv_add_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_tabhead_f(&sTabhead_8UZVrfMU, VOf(Bf8));
    __hv_var_k_f_r(VOf(Bf7), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_rZ7Dq93T, VOf(Bf8));
    __hv_mul_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_NVshsTO4, VOf(Bf3));
    __hv_min_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_zero_f(VOf(Bf8));
    __hv_max_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_floor_f(VIf(Bf8), VOf(Bf7));
    __hv_varread_f(&sVarf_VW82Vnhn, VOf(Bf3));
    __hv_zero_f(VOf(Bf6));
    __hv_lt_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_and_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_cast_fi(VIf(Bf6), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_BbKOIM25, VIi(Bi1), VOf(Bf6));
    __hv_tabread_if(&sTabread_s8qNR4Jq, VIi(Bi0), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf6));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf6), VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_pK46mNVM, VOf(Bf7));
    __hv_mul_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_varwrite_f(&sVarf_4iiDnMuo, VIf(Bf7));
    __hv_line_f(&sLine_PzN6ZMEJ, VOf(Bf7));
    __hv_varread_f(&sVarf_CF0dQMXH, VOf(Bf6));
    __hv_add_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_tabhead_f(&sTabhead_Az7MaNLm, VOf(Bf7));
    __hv_var_k_f_r(VOf(Bf8), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_e2aWaPZA, VOf(Bf7));
    __hv_mul_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_fL7wpECJ, VOf(Bf6));
    __hv_min_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_zero_f(VOf(Bf7));
    __hv_max_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_floor_f(VIf(Bf7), VOf(Bf8));
    __hv_varread_f(&sVarf_EpSii69K, VOf(Bf6));
    __hv_zero_f(VOf(Bf0));
    __hv_lt_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_and_f(VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_cast_fi(VIf(Bf0), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_RiSuRn7I, VIi(Bi1), VOf(Bf0));
    __hv_tabread_if(&sTabread_U0KHma9n, VIi(Bi0), VOf(Bf6));
    __hv_sub_f(VIf(Bf0), VIf(Bf6), VOf(Bf0));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf0), VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_line_f(&sLine_Wuq5QTjK, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_varwrite_f(&sVarf_1j2Et6jC, VIf(Bf8));
    __hv_line_f(&sLine_RQR5barZ, VOf(Bf8));
    __hv_varread_f(&sVarf_CF0dQMXH, VOf(Bf0));
    __hv_add_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_tabhead_f(&sTabhead_LkWvesFU, VOf(Bf8));
    __hv_var_k_f_r(VOf(Bf7), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_mGb7jy5Y, VOf(Bf8));
    __hv_mul_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_cUcjz8Sa, VOf(Bf0));
    __hv_min_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf8));
    __hv_max_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_floor_f(VIf(Bf8), VOf(Bf7));
    __hv_varread_f(&sVarf_tonOgKlu, VOf(Bf0));
    __hv_zero_f(VOf(Bf9));
    __hv_lt_f(VIf(Bf7), VIf(Bf9), VOf(Bf9));
    __hv_and_f(VIf(Bf0), VIf(Bf9), VOf(Bf9));
    __hv_add_f(VIf(Bf7), VIf(Bf9), VOf(Bf9));
    __hv_cast_fi(VIf(Bf9), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_wuN66Sqn, VIi(Bi1), VOf(Bf9));
    __hv_tabread_if(&sTabread_wpFfVHH6, VIi(Bi0), VOf(Bf0));
    __hv_sub_f(VIf(Bf9), VIf(Bf0), VOf(Bf9));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf9), VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_Gjp13e1h, VOf(Bf7));
    __hv_mul_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varwrite_f(&sVarf_YXPl5FZ8, VIf(Bf7));
    __hv_line_f(&sLine_NWk3dnAI, VOf(Bf7));
    __hv_varread_f(&sVarf_CF0dQMXH, VOf(Bf9));
    __hv_add_f(VIf(Bf7), VIf(Bf9), VOf(Bf9));
    __hv_tabhead_f(&sTabhead_RnN1yOYM, VOf(Bf7));
    __hv_var_k_f_r(VOf(Bf8), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_ifktVI4W, VOf(Bf7));
    __hv_mul_f(VIf(Bf9), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_rCSHX2Lo, VOf(Bf9));
    __hv_min_f(VIf(Bf7), VIf(Bf9), VOf(Bf9));
    __hv_zero_f(VOf(Bf7));
    __hv_max_f(VIf(Bf9), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_floor_f(VIf(Bf7), VOf(Bf8));
    __hv_varread_f(&sVarf_Boiwkg60, VOf(Bf9));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf9), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_7tXYrROZ, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_LPypKicd, VIi(Bi0), VOf(Bf9));
    __hv_sub_f(VIf(Bf4), VIf(Bf9), VOf(Bf4));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf4), VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_line_f(&sLine_3ALeQLQv, VOf(Bf8));
    __hv_mul_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_varwrite_f(&sVarf_RcFRPioC, VIf(Bf8));
    __hv_line_f(&sLine_J3QnOEuz, VOf(Bf8));
    __hv_varread_f(&sVarf_CF0dQMXH, VOf(Bf4));
    __hv_add_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_tabhead_f(&sTabhead_XT24Cwgt, VOf(Bf8));
    __hv_var_k_f_r(VOf(Bf7), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_XJjNCGDZ, VOf(Bf8));
    __hv_mul_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_tg9hu2iB, VOf(Bf4));
    __hv_min_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_zero_f(VOf(Bf8));
    __hv_max_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_floor_f(VIf(Bf8), VOf(Bf7));
    __hv_varread_f(&sVarf_9eKTMVPs, VOf(Bf4));
    __hv_zero_f(VOf(Bf5));
    __hv_lt_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_cast_fi(VIf(Bf5), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_74ss9Hfg, VIi(Bi1), VOf(Bf5));
    __hv_tabread_if(&sTabread_ORQcunzq, VIi(Bi0), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf5));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf5), VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_fZ3YLsoG, VOf(Bf7));
    __hv_mul_f(VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_varwrite_f(&sVarf_Kf08D4tK, VIf(Bf7));
    __hv_line_f(&sLine_LmtXGUwF, VOf(Bf7));
    __hv_varread_f(&sVarf_CF0dQMXH, VOf(Bf5));
    __hv_add_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_tabhead_f(&sTabhead_LUoFInNN, VOf(Bf7));
    __hv_var_k_f_r(VOf(Bf8), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_eCuV2tNd, VOf(Bf7));
    __hv_mul_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_gOhapywr, VOf(Bf5));
    __hv_min_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf7));
    __hv_max_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_floor_f(VIf(Bf7), VOf(Bf8));
    __hv_varread_f(&sVarf_MeLM0WI3, VOf(Bf5));
    __hv_zero_f(VOf(Bf10));
    __hv_lt_f(VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_and_f(VIf(Bf5), VIf(Bf10), VOf(Bf10));
    __hv_add_f(VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_cast_fi(VIf(Bf10), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_YcFYxIO3, VIi(Bi1), VOf(Bf10));
    __hv_tabread_if(&sTabread_YhrzFgVz, VIi(Bi0), VOf(Bf5));
    __hv_sub_f(VIf(Bf10), VIf(Bf5), VOf(Bf10));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf10), VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_s1FBgWMT, VOf(Bf8));
    __hv_mul_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_varwrite_f(&sVarf_2nDZOFRo, VIf(Bf8));
    __hv_varread_f(&sVarf_6MTxQjC5, VOf(Bf8));
    __hv_mul_f(VIf(Bf2), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf2), 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f);
    __hv_line_f(&sLine_dC7kt0HP, VOf(Bf10));
    __hv_line_f(&sLine_WuwPGekv, VOf(Bf7));
    __hv_line_f(&sLine_Sle7BZQB, VOf(Bf11));
    __hv_line_f(&sLine_ZIMEdO1m, VOf(Bf12));
    __hv_line_f(&sLine_J5GDmO4u, VOf(Bf13));
    __hv_line_f(&sLine_KxSA6zVM, VOf(Bf14));
    __hv_mul_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf0), VIf(Bf13), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf4), VIf(Bf12), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf6), VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf5), VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf3), VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_biquad_k_f(&sBiquad_k_yxBojdDZ, VIf(Bf14), VOf(Bf10));
    __hv_varread_f(&sVarf_EnBrlJPy, VOf(Bf3));
    __hv_varread_f(&sVarf_lATAph7W, VOf(Bf7));
    __hv_rpole_f(&sRPole_eKWdO144, VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_b8oApPDi, VIf(Bf7), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_IwMkmTnY, VOf(Bf7));
    __hv_mul_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_qJVPXv5S, VOf(Bf14));
    __hv_rpole_f(&sRPole_RLrzni5y, VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_5g9rYSmR, VIf(Bf14), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_DGh3OCUz, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_8a76m6cE, VOf(Bf7));
    __hv_rpole_f(&sRPole_fWh222C8, VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_vtWnVq2q, VIf(Bf7), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_t4SY5cF2, VOf(Bf7));
    __hv_mul_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_Qe9bKwoQ, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_hzKF4Wjp, VOf(Bf7));
    __hv_rpole_f(&sRPole_gtc4Xofv, VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_8FcMercI, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_xsQTUgwN, VOf(Bf7));
    __hv_rpole_f(&sRPole_QuIIAchg, VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_Ik2dr6KP, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_BpT9fg9x, VOf(Bf7));
    __hv_rpole_f(&sRPole_BQZQgzuC, VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf10), VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_Ug1gVG80, VOf(Bf3));
    __hv_rpole_f(&sRPole_PUOj4U0I, VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_5m2cmZEg, VIf(Bf3), VOf(Bf10));
    __hv_mul_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_nIwX9piK, VOf(Bf3));
    __hv_mul_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_jZ2gfeCD, VOf(Bf7));
    __hv_line_f(&sLine_Tk0EguYy, VOf(Bf10));
    __hv_line_f(&sLine_EABxDxdb, VOf(Bf14));
    __hv_line_f(&sLine_CHmxVxNv, VOf(Bf5));
    __hv_line_f(&sLine_ga7zaPCl, VOf(Bf11));
    __hv_biquad_f(&sBiquad_s_U5u8kRTo, VIf(Bf3), VIf(Bf7), VIf(Bf10), VIf(Bf14), VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf5), 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f);
    __hv_min_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf11), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_line_f(&sLine_bWVtzwst, VOf(Bf5));
    __hv_mul_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_phasor_k_f(&sPhasor_usa4Ub64, VOf(Bf11));
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
    __hv_tabhead_f(&sTabhead_vvRWqwFx, VOf(Bf7));
    __hv_var_k_f_r(VOf(Bf14), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_H0FNVmNT, VOf(Bf7));
    __hv_mul_f(VIf(Bf11), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_oKrFTgkJ, VOf(Bf11));
    __hv_min_f(VIf(Bf7), VIf(Bf11), VOf(Bf11));
    __hv_zero_f(VOf(Bf7));
    __hv_max_f(VIf(Bf11), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_floor_f(VIf(Bf7), VOf(Bf14));
    __hv_varread_f(&sVarf_6EM0f99h, VOf(Bf11));
    __hv_zero_f(VOf(Bf3));
    __hv_lt_f(VIf(Bf14), VIf(Bf3), VOf(Bf3));
    __hv_and_f(VIf(Bf11), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf14), VIf(Bf3), VOf(Bf3));
    __hv_cast_fi(VIf(Bf3), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_Ib1wsXtX, VIi(Bi1), VOf(Bf3));
    __hv_tabread_if(&sTabread_Gy3m90ZN, VIi(Bi0), VOf(Bf11));
    __hv_sub_f(VIf(Bf3), VIf(Bf11), VOf(Bf3));
    __hv_sub_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf3), VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf14), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf11), VIf(Bf14), VIf(Bf5), VOf(Bf14));
    __hv_varread_f(&sVarf_qeije7bC, VOf(Bf11));
    __hv_rpole_f(&sRPole_CzXl33Qs, VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_U9BsPYrW, VIf(Bf11), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_YTHoNWjB, VOf(Bf11));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_phasor_k_f(&sPhasor_bRVuog3r, VOf(Bf14));
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
    __hv_tabhead_f(&sTabhead_8LHPwofh, VOf(Bf10));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf10), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_oAqTNnCZ, VOf(Bf10));
    __hv_mul_f(VIf(Bf14), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_31FviNCc, VOf(Bf14));
    __hv_min_f(VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_zero_f(VOf(Bf10));
    __hv_max_f(VIf(Bf14), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf3), VIf(Bf10), VOf(Bf10));
    __hv_floor_f(VIf(Bf10), VOf(Bf3));
    __hv_varread_f(&sVarf_pTOYQr7z, VOf(Bf14));
    __hv_zero_f(VOf(Bf6));
    __hv_lt_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_and_f(VIf(Bf14), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_cast_fi(VIf(Bf6), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_J7ZS2uL0, VIi(Bi1), VOf(Bf6));
    __hv_tabread_if(&sTabread_c6tkiKCb, VIi(Bi0), VOf(Bf14));
    __hv_sub_f(VIf(Bf6), VIf(Bf14), VOf(Bf6));
    __hv_sub_f(VIf(Bf10), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf6), VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf14), VIf(Bf3), VIf(Bf5), VOf(Bf3));
    __hv_varread_f(&sVarf_rJZdbKVW, VOf(Bf14));
    __hv_rpole_f(&sRPole_BJVtIODN, VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_suarc26x, VIf(Bf14), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf14), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_FVjAgBzt, VOf(Bf14));
    __hv_mul_f(VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_hmpd9foS, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_tabwrite_f(&sTabwrite_N7dD3VPo, VIf(Bf3));
    __hv_varread_f(&sVarf_h8Dw5Ur0, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_tabwrite_f(&sTabwrite_LquqiFHr, VIf(Bf3));
    __hv_fma_f(VIf(Bf8), VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_Ou65T15S, VOf(Bf2));
    __hv_rpole_f(&sRPole_aJYpWFzg, VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_Qw8yRPim, VIf(Bf2), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_PPqyASav, VOf(Bf2));
    __hv_mul_f(VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf2), VIf(O1), VOf(O1));
    __hv_varread_f(&sVarf_yW89w0j5, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f);
    __hv_fma_f(VIf(Bf2), VIf(Bf1), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_gD4Iszoa, VOf(Bf1));
    __hv_rpole_f(&sRPole_7ARP26sY, VIf(Bf11), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_ZaDG8kYY, VIf(Bf1), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf1), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_3BTUiJoT, VOf(Bf1));
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
