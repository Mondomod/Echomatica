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
  numBytes += sEnv_init(&sEnv_wSvbPmnD, 256, 512);
  numBytes += sLine_init(&sLine_fjUyzYnR);
  numBytes += sRPole_init(&sRPole_oIh7vVoY);
  numBytes += sRPole_init(&sRPole_dMjRymjW);
  numBytes += sDel1_init(&sDel1_55unfHhU);
  numBytes += sEnv_init(&sEnv_u9so36cG, 256, 512);
  numBytes += sLine_init(&sLine_A6EAOQGx);
  numBytes += sRPole_init(&sRPole_xDzmjVUY);
  numBytes += sRPole_init(&sRPole_iVDVhGsV);
  numBytes += sDel1_init(&sDel1_ucdMbydt);
  numBytes += sRPole_init(&sRPole_cUBy096E);
  numBytes += sDel1_init(&sDel1_gSxvsnKG);
  numBytes += sRPole_init(&sRPole_6Ybz5je6);
  numBytes += sLine_init(&sLine_tvEJyAqM);
  numBytes += sLine_init(&sLine_cVVujEoH);
  numBytes += sEnv_init(&sEnv_dMeV86Nb, 256, 512);
  numBytes += sLine_init(&sLine_LS0Yppmz);
  numBytes += sLine_init(&sLine_qTR6am9n);
  numBytes += sRPole_init(&sRPole_W9TNJ3Lb);
  numBytes += sRPole_init(&sRPole_7ZU9VqSr);
  numBytes += sDel1_init(&sDel1_szKRRRCi);
  numBytes += sTabwrite_init(&sTabwrite_azqLx5IQ, &hTable_m55vYkAO);
  numBytes += sPhasor_k_init(&sPhasor_KVdwatXl, 0.0f, sampleRate);
  numBytes += sPhasor_k_init(&sPhasor_eFEulve9, 0.0f, sampleRate);
  numBytes += sLine_init(&sLine_rKlYj1jw);
  numBytes += sTabhead_init(&sTabhead_MSwCejcS, &hTable_m55vYkAO);
  numBytes += sTabread_init(&sTabread_5Puyv7AD, &hTable_m55vYkAO, false);
  numBytes += sTabread_init(&sTabread_yn82ZOGE, &hTable_m55vYkAO, false);
  numBytes += sLine_init(&sLine_ufvUfXpU);
  numBytes += sLine_init(&sLine_FLPDyT57);
  numBytes += sTabhead_init(&sTabhead_StvFEUrd, &hTable_m55vYkAO);
  numBytes += sTabread_init(&sTabread_ZUkjP1fE, &hTable_m55vYkAO, false);
  numBytes += sTabread_init(&sTabread_uE7hnPUC, &hTable_m55vYkAO, false);
  numBytes += sLine_init(&sLine_wicXOxse);
  numBytes += sLine_init(&sLine_tC2hW0gt);
  numBytes += sTabhead_init(&sTabhead_h9z0db56, &hTable_m55vYkAO);
  numBytes += sTabread_init(&sTabread_gDGWZXEM, &hTable_m55vYkAO, false);
  numBytes += sTabread_init(&sTabread_dhhqamVC, &hTable_m55vYkAO, false);
  numBytes += sLine_init(&sLine_DPwUF9BB);
  numBytes += sLine_init(&sLine_4AT8ifm7);
  numBytes += sTabhead_init(&sTabhead_gqxgvkzF, &hTable_m55vYkAO);
  numBytes += sTabread_init(&sTabread_2gEaJzUS, &hTable_m55vYkAO, false);
  numBytes += sTabread_init(&sTabread_9e0jCF2d, &hTable_m55vYkAO, false);
  numBytes += sLine_init(&sLine_l9qqoL04);
  numBytes += sLine_init(&sLine_wuFFEQhS);
  numBytes += sTabhead_init(&sTabhead_0MGLJ9rg, &hTable_m55vYkAO);
  numBytes += sTabread_init(&sTabread_OAJjuzrC, &hTable_m55vYkAO, false);
  numBytes += sTabread_init(&sTabread_xbEMx9TA, &hTable_m55vYkAO, false);
  numBytes += sLine_init(&sLine_zj2OiMlV);
  numBytes += sLine_init(&sLine_B9cxZFu3);
  numBytes += sTabhead_init(&sTabhead_Vc1kDIwJ, &hTable_m55vYkAO);
  numBytes += sTabread_init(&sTabread_Oa48EYXB, &hTable_m55vYkAO, false);
  numBytes += sTabread_init(&sTabread_bTc8dObh, &hTable_m55vYkAO, false);
  numBytes += sLine_init(&sLine_FeRkq8pI);
  numBytes += sLine_init(&sLine_b2gCYgT2);
  numBytes += sLine_init(&sLine_RiC8zTbE);
  numBytes += sLine_init(&sLine_s1GOhFWW);
  numBytes += sLine_init(&sLine_rjk28ScM);
  numBytes += sLine_init(&sLine_Xe5JzeBn);
  numBytes += sLine_init(&sLine_s9X1UT0X);
  numBytes += sBiquad_k_init(&sBiquad_k_VaXPBNXi, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  numBytes += sRPole_init(&sRPole_ves4PBwp);
  numBytes += sDel1_init(&sDel1_BKo0rBSK);
  numBytes += sRPole_init(&sRPole_2oT7GPgC);
  numBytes += sDel1_init(&sDel1_Azwz073d);
  numBytes += sRPole_init(&sRPole_Ze9tWEjS);
  numBytes += sDel1_init(&sDel1_o4Q7u0Gq);
  numBytes += sRPole_init(&sRPole_PW2i5FzV);
  numBytes += sRPole_init(&sRPole_HKw5HbN1);
  numBytes += sRPole_init(&sRPole_IuoyodEr);
  numBytes += sRPole_init(&sRPole_0EljYl0T);
  numBytes += sDel1_init(&sDel1_Ji5IA4fL);
  numBytes += sLine_init(&sLine_NhB9qldl);
  numBytes += sLine_init(&sLine_twVoqKIz);
  numBytes += sLine_init(&sLine_uKnYIZ6a);
  numBytes += sLine_init(&sLine_2PY6hYHs);
  numBytes += sLine_init(&sLine_Y7EqV7UN);
  numBytes += sBiquad_init(&sBiquad_s_Jm6QdPmv);
  numBytes += sLine_init(&sLine_SDpgQAeP);
  numBytes += sPhasor_k_init(&sPhasor_CEXDqaJy, 0.3f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_YUM2f72g, &hTable_BKNvfENA);
  numBytes += sTabread_init(&sTabread_mE5QGflb, &hTable_BKNvfENA, false);
  numBytes += sTabread_init(&sTabread_peIrM0Zb, &hTable_BKNvfENA, false);
  numBytes += sRPole_init(&sRPole_Nun4nKkR);
  numBytes += sDel1_init(&sDel1_Obz1nAC6);
  numBytes += sPhasor_k_init(&sPhasor_WeIZn1RD, 0.5f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_vsd1jbtj, &hTable_CAJe2eiV);
  numBytes += sTabread_init(&sTabread_j7F4trEk, &hTable_CAJe2eiV, false);
  numBytes += sTabread_init(&sTabread_7Xz5nS0k, &hTable_CAJe2eiV, false);
  numBytes += sRPole_init(&sRPole_jS9cbQkl);
  numBytes += sDel1_init(&sDel1_CVDp40Dn);
  numBytes += sTabwrite_init(&sTabwrite_kWRtgKVV, &hTable_CAJe2eiV);
  numBytes += sTabwrite_init(&sTabwrite_Bf0FeRb9, &hTable_BKNvfENA);
  numBytes += sRPole_init(&sRPole_Cz4BvDet);
  numBytes += sDel1_init(&sDel1_4Ru4q54G);
  numBytes += sRPole_init(&sRPole_vAp8xGOI);
  numBytes += sDel1_init(&sDel1_2JDrhFEb);
  numBytes += cVar_init_s(&cVar_9scEJLwS, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_GQpCFWaO, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_OcEx0jS4, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_sopfkuQh, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_heZKMDad, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_rsNkF3L3, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_czTMsURW, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_pA6ve512, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_ZMBVbhlm, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_7QWjNlyy, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_F2ef8yrx, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ceJKkn9i, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_O4aWVtuB, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_Cc8o34kv, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_gq8aiJ5C, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_JKnqiEcQ, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_L9e6zJzy, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_t7xSLxL3, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_yOWxsKa7, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_3JMyss4p, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_tdeN0VlK, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_T08tTFMl, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_nPpngNTF, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_CZET0kOx, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_AIcG264R, 0.0f);
  numBytes += cVar_init_f(&cVar_CIME7gTe, 0.0f);
  numBytes += cVar_init_f(&cVar_jsAlW0Mg, 0.0f);
  numBytes += cVar_init_f(&cVar_BBD7C0re, 0.0f);
  numBytes += cVar_init_f(&cVar_bsplcBBK, 0.0f);
  numBytes += cVar_init_f(&cVar_80ccxR7l, 0.0f);
  numBytes += cVar_init_f(&cVar_Yk22GEC2, 0.0f);
  numBytes += cVar_init_f(&cVar_zYh9tqmZ, 0.0f);
  numBytes += cVar_init_f(&cVar_uMsupKUS, 0.0f);
  numBytes += cVar_init_f(&cVar_uA2rV1kq, 0.0f);
  numBytes += cVar_init_f(&cVar_94KwggPv, 0.0f);
  numBytes += cVar_init_f(&cVar_LfXbcx15, 0.0f);
  numBytes += cPack_init(&cPack_4OscoNMN, 2, 0.0f, 20.0f);
  numBytes += cPack_init(&cPack_f8LOHdmo, 2, 0.0f, 1800.0f);
  numBytes += cPack_init(&cPack_0MJsdY1r, 2, 0.0f, 1600.0f);
  numBytes += cPack_init(&cPack_Owy0BfDq, 2, 0.0f, 1300.0f);
  numBytes += cPack_init(&cPack_lS7vxpJF, 2, 0.0f, 1000.0f);
  numBytes += cPack_init(&cPack_sB1GdJJa, 2, 0.0f, 800.0f);
  numBytes += cPack_init(&cPack_1HU99Vn5, 2, 0.0f, 600.0f);
  numBytes += cSlice_init(&cSlice_Wirvq6Pt, 27, 1);
  numBytes += cSlice_init(&cSlice_u16OhjvA, 26, 1);
  numBytes += cSlice_init(&cSlice_6BExNoAC, 25, 1);
  numBytes += cSlice_init(&cSlice_RuARfPNz, 24, 1);
  numBytes += cSlice_init(&cSlice_cdxc0H8w, 23, 1);
  numBytes += cSlice_init(&cSlice_Y2aweEFK, 22, 1);
  numBytes += cSlice_init(&cSlice_OFZRsXq8, 21, 1);
  numBytes += cSlice_init(&cSlice_tSJxbBM2, 20, 1);
  numBytes += cSlice_init(&cSlice_Jd6V8wt4, 19, 1);
  numBytes += cSlice_init(&cSlice_zJnAoOZX, 18, 1);
  numBytes += cSlice_init(&cSlice_NGQNUQ4y, 17, 1);
  numBytes += cSlice_init(&cSlice_lKVMzKZC, 16, 1);
  numBytes += cSlice_init(&cSlice_VtO03Mie, 15, 1);
  numBytes += cSlice_init(&cSlice_LrtaceOJ, 14, 1);
  numBytes += cSlice_init(&cSlice_Yp28u89r, 13, 1);
  numBytes += cSlice_init(&cSlice_vRZ7SWEz, 12, 1);
  numBytes += cSlice_init(&cSlice_2Lrm8p5q, 11, 1);
  numBytes += cSlice_init(&cSlice_ot39o3g6, 10, 1);
  numBytes += cSlice_init(&cSlice_Fmsv22wU, 9, 1);
  numBytes += cSlice_init(&cSlice_NdnS00sF, 8, 1);
  numBytes += cSlice_init(&cSlice_mWV7kVMo, 7, 1);
  numBytes += cSlice_init(&cSlice_L0NHuLqA, 6, 1);
  numBytes += cSlice_init(&cSlice_GwDP907s, 5, 1);
  numBytes += cSlice_init(&cSlice_lMfmOOpl, 4, 1);
  numBytes += cSlice_init(&cSlice_LXV0DGvE, 3, 1);
  numBytes += cSlice_init(&cSlice_SNzYLb4L, 2, 1);
  numBytes += cSlice_init(&cSlice_JeLX4MEf, 1, 1);
  numBytes += cSlice_init(&cSlice_XZMzPS0o, 0, 1);
  numBytes += cVar_init_f(&cVar_HbRUyEl4, 0.0f);
  numBytes += cVar_init_f(&cVar_jPrWqm3r, 0.0f);
  numBytes += cVar_init_f(&cVar_XfP5W71l, 0.0f);
  numBytes += cVar_init_f(&cVar_IqveCp34, 0.0f);
  numBytes += cVar_init_f(&cVar_gMGwA7F2, 0.0f);
  numBytes += cVar_init_f(&cVar_ss6mGzZm, 0.0f);
  numBytes += cSlice_init(&cSlice_x8bjNZ1R, 3, 1);
  numBytes += cSlice_init(&cSlice_4KnWp3kK, 2, 1);
  numBytes += cSlice_init(&cSlice_mH1qaEtY, 1, 1);
  numBytes += cSlice_init(&cSlice_Te66LhXO, 0, 1);
  numBytes += cPack_init(&cPack_wpnyWgYs, 2, 0.0f, 50.0f);
  numBytes += cDelay_init(this, &cDelay_vLUzopah, 0.0f);
  numBytes += cDelay_init(this, &cDelay_UeNilWqC, 0.0f);
  numBytes += hTable_init(&hTable_CAJe2eiV, 256);
  numBytes += cVar_init_f(&cVar_WIwgX3kB, 0.0f);
  numBytes += cVar_init_s(&cVar_U1WbDs1P, "del-1001-delayD");
  numBytes += sVarf_init(&sVarf_YAWBIR7K, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_fbCcSGpC, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_wt2j3INJ, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_bU3fHH7k, "del-1001-delayC");
  numBytes += sVarf_init(&sVarf_mBmBgYZK, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_07bLsIMu, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Z042hBUw, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_conS2Gef, 0.0f);
  numBytes += cDelay_init(this, &cDelay_yd5BXb9B, 0.0f);
  numBytes += hTable_init(&hTable_BKNvfENA, 256);
  numBytes += sVarf_init(&sVarf_rokonNzQ, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_CPl2falG, 3.0f);
  numBytes += cBinop_init(&cBinop_q1X33x0R, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_Ork0fvEj, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_t3nM6M5x, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_VXHKSj23, 3.0f);
  numBytes += cBinop_init(&cBinop_M5eyIl8b, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_Q2r6IQR9, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_kFyr8ppy, 1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_H8of5zWs, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_M70cbfaN, 0.0f);
  numBytes += cVar_init_f(&cVar_3YzsYzgp, 0.0f);
  numBytes += cVar_init_f(&cVar_ZkwhBBmz, 0.0f);
  numBytes += cPack_init(&cPack_MwzoB2cU, 2, 0.0f, 100.0f);
  numBytes += cPack_init(&cPack_OpWHbWnV, 2, 0.0f, 100.0f);
  numBytes += cVar_init_f(&cVar_eHXhUecw, 0.0f);
  numBytes += cVar_init_f(&cVar_BLhPB6Sh, 0.0f);
  numBytes += cVar_init_f(&cVar_G0gPgpgx, 0.0f);
  numBytes += cBinop_init(&cBinop_fbt5d9v5, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_XMtJ43Zh, 0.0f); // __pow
  numBytes += cIf_init(&cIf_OxBQZ3kB, false);
  numBytes += cBinop_init(&cBinop_Sa6UXa4R, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_QLbSJQ7a, 74.0f);
  numBytes += cVar_init_f(&cVar_xllQLBID, 3.0f);
  numBytes += cSlice_init(&cSlice_TUvz9hYy, 1, -1);
  numBytes += cVar_init_f(&cVar_6bxJSJH1, 1.0f);
  numBytes += cSlice_init(&cSlice_sW3IpGRj, 1, -1);
  numBytes += cVar_init_f(&cVar_MIvotvbK, 70.0f);
  numBytes += cBinop_init(&cBinop_k3I4vSFz, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_BmAIts1m, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_96jQHEFq, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_Czv8sr0P, 3000.0f);
  numBytes += cBinop_init(&cBinop_Lrq4s2Sy, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_i93kfeN2, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_6efABy4O, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_RPnHJJIl, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_uV24xN7j, 400.0f);
  numBytes += cBinop_init(&cBinop_ny0CIqxK, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_6l6to0Fm, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_v5HY1wzt, false);
  numBytes += cVar_init_f(&cVar_pcaqmHKY, 0.0f);
  numBytes += cVar_init_f(&cVar_dWLIXALq, 0.0f);
  numBytes += cPack_init(&cPack_4Q7rVNmX, 3, 0.0f, 500.0f, 100.0f);
  numBytes += cDelay_init(this, &cDelay_lOwTvEF3, 0.0f);
  numBytes += cVar_init_f(&cVar_Of6XM2tX, 20.0f);
  numBytes += cBinop_init(&cBinop_HxTHfbQL, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_l62cWaE0, 0.0f);
  numBytes += cSlice_init(&cSlice_XAoSQawG, 1, -1);
  numBytes += cSlice_init(&cSlice_7sx6ZBRK, 1, -1);
  numBytes += cVar_init_f(&cVar_aWkQrBEq, 0.0f);
  numBytes += cVar_init_f(&cVar_OwuCfpm4, 20.0f);
  numBytes += cVar_init_f(&cVar_S2bGtVkT, 0.0f);
  numBytes += cVar_init_f(&cVar_cP7EsY5r, 0.0f);
  numBytes += cVar_init_f(&cVar_pmu05zmU, 0.0f);
  numBytes += cSlice_init(&cSlice_SH4YouZ3, 1, 1);
  numBytes += cSlice_init(&cSlice_jWRxdE60, 0, 1);
  numBytes += cBinop_init(&cBinop_H9g228Tx, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_bBRIUQvw, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Kpzs6zBt, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_jduijx4G, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_9R2GdmgY, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_vO6ahpnp, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_XVc7wYj3, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_rvNuz07y, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_8Hg05fHO, 0.0f);
  numBytes += cVar_init_f(&cVar_bsApJFuw, 0.0f);
  numBytes += cVar_init_f(&cVar_pdtyxVyl, 0.0f);
  numBytes += cVar_init_f(&cVar_LxaVtsby, 0.0f);
  numBytes += cVar_init_f(&cVar_aYCWoSLW, 0.0f);
  numBytes += cVar_init_f(&cVar_4is2papD, 0.0f);
  numBytes += sVarf_init(&sVarf_MzsEll6K, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_dqLtr0Pm, 8.0f);
  numBytes += cBinop_init(&cBinop_YfFtWFfl, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_83z098Zr, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_7CVb86y6, 0.0f);
  numBytes += cVar_init_f(&cVar_9d1EK1iT, 0.0f);
  numBytes += cBinop_init(&cBinop_Z5vCMXpT, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_PcrP7SDs, 0.0f); // __pow
  numBytes += cIf_init(&cIf_3PdEF57q, false);
  numBytes += cBinop_init(&cBinop_iu6ubLwk, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_b8VFlYSG, 82.0f);
  numBytes += cVar_init_f(&cVar_YCv79qMM, 21.0f);
  numBytes += cSlice_init(&cSlice_eXooaHxO, 1, -1);
  numBytes += cVar_init_f(&cVar_oCBxxC7a, 1.0f);
  numBytes += cSlice_init(&cSlice_8MLhB1mt, 1, -1);
  numBytes += cVar_init_f(&cVar_3xBi906c, 70.0f);
  numBytes += cBinop_init(&cBinop_I0QZglAY, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_zi3qYBUD, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_Gkef019m, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_se3DLVtm, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_oZyydMGF, 8.0f);
  numBytes += cBinop_init(&cBinop_v3zxtAtU, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_XZqKMdgF, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_3VymcY2T, 0.0f);
  numBytes += cVar_init_f(&cVar_FWAoVFJT, 0.0f);
  numBytes += cBinop_init(&cBinop_MrZgZlYu, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_38DC2TPJ, 0.0f); // __pow
  numBytes += cIf_init(&cIf_VfQycWva, false);
  numBytes += cBinop_init(&cBinop_0kGDwWTC, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_ijnWWc9o, 82.0f);
  numBytes += cVar_init_f(&cVar_vkfYajQQ, 21.0f);
  numBytes += cSlice_init(&cSlice_0csQ3Uor, 1, -1);
  numBytes += cVar_init_f(&cVar_cw0v1Jvw, 1.0f);
  numBytes += cSlice_init(&cSlice_RHHDZbXu, 1, -1);
  numBytes += cVar_init_f(&cVar_OIDvSzvM, 70.0f);
  numBytes += cBinop_init(&cBinop_cyHFbsUd, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_jdkygP5N, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_SZvAiPvF, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_71Jy1nCX, 10000.0f);
  numBytes += cBinop_init(&cBinop_gvylopt0, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_1ok2bNM8, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_2UWsYz3g, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_JQRYW8D1, 10000.0f);
  numBytes += cBinop_init(&cBinop_EMRbu90f, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_9COn9nbN, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_G5kSomrL, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_NDUUqI5Y, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_dBtw7vQ8, 20.0f);
  numBytes += cBinop_init(&cBinop_nu019zEU, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_Be67nMHP, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_6vXy2TJA, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_4cdMJhg7, 20.0f);
  numBytes += cBinop_init(&cBinop_mlm83aMt, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_Lk2l68VT, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_8Lz5wp2D, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_m5T2PD2w, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_kouQK48Y, 0.0f);
  numBytes += cDelay_init(this, &cDelay_spCeXzaz, 0.0f);
  numBytes += hTable_init(&hTable_m55vYkAO, 256);
  numBytes += cVar_init_f(&cVar_rmC0pcpE, 0.0f);
  numBytes += cVar_init_f(&cVar_JsZaDDzv, 0.0f);
  numBytes += cVar_init_f(&cVar_lvN8ky1E, 1.0f);
  numBytes += cVar_init_f(&cVar_rYMBHGZT, 0.0f);
  numBytes += sVarf_init(&sVarf_tDUBxMYG, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_kRDwWnMm, 0.0f);
  numBytes += cBinop_init(&cBinop_OdjoPLuP, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_TlqZ9JVE, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_zZkoTcjX, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_F7JKOt55, 0.0f);
  numBytes += cBinop_init(&cBinop_gZvghTuy, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_ZsO3Jbwh, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_eEUsdCis, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_Samx1kia, 0.0f);
  numBytes += cBinop_init(&cBinop_ZfZxYlS8, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_alU2NAWZ, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_oz2kESQV, 22050.0f);
  numBytes += cBinop_init(&cBinop_JCEgJy8i, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_7Q1HP9H1, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_SKrpfxxb, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_g1TuieG9, 22050.0f);
  numBytes += cBinop_init(&cBinop_d45q052I, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_fjDHU3va, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_1jT3SfgP, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_0kqoIrDF, 22050.0f);
  numBytes += cBinop_init(&cBinop_SVcFY6Ci, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_N1WO6cQL, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_TLULYrlF, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_euJFzSsm, 22050.0f);
  numBytes += cVar_init_f(&cVar_xiuB3Ge8, 1.0f);
  numBytes += cBinop_init(&cBinop_sfEGriam, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_l4VjB6G1, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_FTAFjPZ7, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ipfxEYS3, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_aH4IxUOr, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_ch244tia, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_KKwbYGpg, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_yfspzzgt, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_GlPDJxgY, 30.0f);
  numBytes += cBinop_init(&cBinop_X0xPddad, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_8aUHwMQg, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_5si4TPtQ, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_ywKtlrR8, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_mAUZs12v, 0.0f);
  numBytes += cBinop_init(&cBinop_QI3PrBJx, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_CUaiDwuZ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_5ZdBTTTt, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_NqmCxIHB, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_zlnsgC9e, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_P1YGG9JH, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_mEVgXjh0, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_nCtAMYbA, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_gZrMpxog, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_mTdWkmsP, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_dixsqqPL, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_6gV08eBT, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_S1NUDCvZ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_teWNz5Y8, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_KuUy2WWV, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_LK6aivvF, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_fkSoRhLu, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_FwwwWUXO, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_lay4ByVX, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_Fy7e3mHc, 4500.0f);
  numBytes += cVar_init_f(&cVar_pXGBtI49, 20.0f);
  numBytes += cVar_init_f(&cVar_10Lfd2TW, -8.0f);
  numBytes += cBinop_init(&cBinop_NrLOzJAa, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_sWT6cu2F, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Ju35qA2o, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_mOqEF2g4, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_OE4l5EsW, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_vuSA4yOi, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_PeJeMFS0, 0.0f); // __pow
  numBytes += cBinop_init(&cBinop_i4QUYR5j, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_8rl6p0u2, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_9koFn2WU, 20.0f);
  numBytes += cBinop_init(&cBinop_XPfl9Yyl, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_4JoJn54V, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_5wiKKINA, 8000.0f);
  numBytes += cBinop_init(&cBinop_QJS2wRHi, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_cbtykbmQ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_CO8AlERX, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_TIIHpRLl, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_gGKH2VZb, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_6Vos4R3C, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_exYH8uxp, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_3eC8WJod, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_WooywmRL, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_vePDsiuG, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_fE99OeJV, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_7HoDbJ7F, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_TtE08ZSS, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_yJWN3QXE, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_PwEjlfBc, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_6q2fcEyF, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_F4T6Rn4q, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_6iHmOk1p, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_FUbPaQqv, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_sBxPzxB6, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_m9IRRXc3, 0.0f, 0.0f, false);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_Echomatica::~Heavy_Echomatica() {
  sEnv_free(&sEnv_wSvbPmnD);
  sEnv_free(&sEnv_u9so36cG);
  sEnv_free(&sEnv_dMeV86Nb);
  cPack_free(&cPack_4OscoNMN);
  cPack_free(&cPack_f8LOHdmo);
  cPack_free(&cPack_0MJsdY1r);
  cPack_free(&cPack_Owy0BfDq);
  cPack_free(&cPack_lS7vxpJF);
  cPack_free(&cPack_sB1GdJJa);
  cPack_free(&cPack_1HU99Vn5);
  cPack_free(&cPack_wpnyWgYs);
  hTable_free(&hTable_CAJe2eiV);
  hTable_free(&hTable_BKNvfENA);
  cPack_free(&cPack_MwzoB2cU);
  cPack_free(&cPack_OpWHbWnV);
  cPack_free(&cPack_4Q7rVNmX);
  hTable_free(&hTable_m55vYkAO);
}

HvTable *Heavy_Echomatica::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0x6F28B8EB: return &hTable_CAJe2eiV; // del-1001-delayD
    case 0xA74180A2: return &hTable_BKNvfENA; // del-1001-delayC
    case 0xC7C6279C: return &hTable_m55vYkAO; // del-1001-delayA
    default: return nullptr;
  }
}

void Heavy_Echomatica::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0x22C9B907: { // Vari
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_N79CVlmf_sendMessage);
      break;
    }
    case 0xBC81AC40: { // 1148-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_obSzHi47_sendMessage);
      break;
    }
    case 0xA048D52F: { // 1148-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_nATMaRM7_sendMessage);
      break;
    }
    case 0xA2B0A880: { // 1218-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_GnIUoy7N_sendMessage);
      break;
    }
    case 0xE351C9CC: { // 1218-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_J0Hei47D_sendMessage);
      break;
    }
    case 0xE091EC31: { // 1240-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_8lSeKS84_sendMessage);
      break;
    }
    case 0xAE9102A0: { // 1240-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_fLYUttuq_sendMessage);
      break;
    }
    case 0x613FB00D: { // 1381-A
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9yESnNH2_sendMessage);
      break;
    }
    case 0x84B978CE: { // 1381-sqrtA-alpha-2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_IPlT8mkd_sendMessage);
      break;
    }
    case 0xD75E56F: { // 1381-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Jj8yv0S5_sendMessage);
      break;
    }
    case 0xA720EEDB: { // 1381-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_6N9xLBXI_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_QqjVnmaX_sendMessage);
      break;
    }
    case 0xE68AB11B: { // chrs
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_BsZT2RLi_sendMessage);
      break;
    }
    case 0xBA8CED4E: { // dry
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_0VgFMeGI_sendMessage);
      break;
    }
    case 0x63E722C0: { // echo
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_OVfYvDPR_sendMessage);
      break;
    }
    case 0x8FA433B0: { // f1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_I2sHltMT_sendMessage);
      break;
    }
    case 0xEE0EB120: { // f2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_8eMhT8aa_sendMessage);
      break;
    }
    case 0x4FFCF19F: { // f3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_8dT7M7aK_sendMessage);
      break;
    }
    case 0x2AF9F5EB: { // f4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_tn6J0CiS_sendMessage);
      break;
    }
    case 0xC6F6EBB2: { // f5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1VjxrxFG_sendMessage);
      break;
    }
    case 0x775D6E5E: { // f6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_KUE9jY3f_sendMessage);
      break;
    }
    case 0xBB6123FD: { // fdbck_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_TRy5FmLN_sendMessage);
      break;
    }
    case 0xF1E7CD16: { // feedback
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_fdmIsffu_sendMessage);
      break;
    }
    case 0xC7AF3F72: { // h1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9Xwn0dRj_sendMessage);
      break;
    }
    case 0x9BEBB079: { // h2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_eGB70Nji_sendMessage);
      break;
    }
    case 0xAB1137FD: { // h3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_JLEaW9jT_sendMessage);
      break;
    }
    case 0x2B4C6DE1: { // h4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Pw7NRJ45_sendMessage);
      break;
    }
    case 0x2541E77D: { // h5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Iyf0ASLY_sendMessage);
      break;
    }
    case 0xE7F6D341: { // h6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_j4w5JEGp_sendMessage);
      break;
    }
    case 0x5667A4DA: { // head1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ebsjQpYy_sendMessage);
      break;
    }
    case 0xAD6B31A5: { // head2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_dz7qPftU_sendMessage);
      break;
    }
    case 0x8A2BD450: { // head3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_7nEvcOaG_sendMessage);
      break;
    }
    case 0xCF5C829A: { // head4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_AvEdRpi0_sendMessage);
      break;
    }
    case 0xEE70DFBC: { // head5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_u08jHewH_sendMessage);
      break;
    }
    case 0x8E4B9939: { // head6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_EFjHPnrV_sendMessage);
      break;
    }
    case 0x7E24361: { // hp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_tSlF2EG5_sendMessage);
      break;
    }
    case 0x674D12F6: { // hp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Mleno4xn_sendMessage);
      break;
    }
    case 0x6A20C3F5: { // hp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Fv8Z90YD_sendMessage);
      break;
    }
    case 0x123E8795: { // lp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_v1S81AsT_sendMessage);
      break;
    }
    case 0x4588BD1: { // lp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_VUKHFd68_sendMessage);
      break;
    }
    case 0xB7298D49: { // lp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_i8Zh0Wqo_sendMessage);
      break;
    }
    case 0x64BD0F15: { // mf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_aUPCf3sj_sendMessage);
      break;
    }
    case 0x5A12F82E: { // mg
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9ooJmTGT_sendMessage);
      break;
    }
    case 0x2C9C49A7: { // mq
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9d9xnKuV_sendMessage);
      break;
    }
    case 0xC8D93A6D: { // tapehead_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Ey6sVghx_sendMessage);
      break;
    }
    case 0xB25D05EB: { // varispeed
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ciYL7AB3_sendMessage);
      break;
    }
    case 0x8ADB5B6B: { // varispeed_enable
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_gTx72UZm_sendMessage);
      break;
    }
    case 0x7BB47B7B: { // wnf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Jlcaycy3_sendMessage);
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


void Heavy_Echomatica::cMsg_oV56hsRU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_pY7a5D7Q_sendMessage);
}

void Heavy_Echomatica::cSystem_pY7a5D7Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_0dMXDCaR_sendMessage);
}

void Heavy_Echomatica::cVar_9scEJLwS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cLpVjnZo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_Zb5Pav2Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_Kb5r0663_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_GQpCFWaO, m);
}

void Heavy_Echomatica::cBinop_0dMXDCaR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_OcEx0jS4, m);
}

void Heavy_Echomatica::cMsg_cLpVjnZo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Zb5Pav2Q_sendMessage);
}

void Heavy_Echomatica::cBinop_Kb5r0663_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_sopfkuQh, m);
}

void Heavy_Echomatica::cMsg_H8Iru6ZO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ikOqIgny_sendMessage);
}

void Heavy_Echomatica::cSystem_ikOqIgny_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_UTZW4Xyq_sendMessage);
}

void Heavy_Echomatica::cVar_heZKMDad_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ulIPTWsx_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_RVrAEk0a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_h8EKyU8R_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_rsNkF3L3, m);
}

void Heavy_Echomatica::cBinop_UTZW4Xyq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_czTMsURW, m);
}

void Heavy_Echomatica::cMsg_ulIPTWsx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_RVrAEk0a_sendMessage);
}

void Heavy_Echomatica::cBinop_h8EKyU8R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_pA6ve512, m);
}

void Heavy_Echomatica::cMsg_JPg79Z7Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_7OdCPq9t_sendMessage);
}

void Heavy_Echomatica::cSystem_7OdCPq9t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_35u1OZ5c_sendMessage);
}

void Heavy_Echomatica::cVar_ZMBVbhlm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_k86m9Am2_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_YnLCWxEN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_s1buxCXq_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_7QWjNlyy, m);
}

void Heavy_Echomatica::cBinop_35u1OZ5c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_F2ef8yrx, m);
}

void Heavy_Echomatica::cMsg_k86m9Am2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_YnLCWxEN_sendMessage);
}

void Heavy_Echomatica::cBinop_s1buxCXq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ceJKkn9i, m);
}

void Heavy_Echomatica::cMsg_0zLjSn3u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_PNYaCdpn_sendMessage);
}

void Heavy_Echomatica::cSystem_PNYaCdpn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Me9sJ8Eu_sendMessage);
}

void Heavy_Echomatica::cVar_O4aWVtuB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_d0nQX0Xk_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_K3k67Loa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_PNpoiCdL_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Cc8o34kv, m);
}

void Heavy_Echomatica::cBinop_Me9sJ8Eu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_gq8aiJ5C, m);
}

void Heavy_Echomatica::cMsg_d0nQX0Xk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_K3k67Loa_sendMessage);
}

void Heavy_Echomatica::cBinop_PNpoiCdL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_JKnqiEcQ, m);
}

void Heavy_Echomatica::cCast_2i2s8L2V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DDs8OH5W_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_nwEXXdu5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FJ056kdL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_gBtTmIcx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_scIEJe9h_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_ngtfg5EC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gCS6PvhG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_VZes6lzQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_RGI775xJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_PGLUpv8v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gMCGFkWv_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_mAyC6Pix_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_u08JfWpH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_WfezkdJo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Wz7y5lrb_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_80iQH2lz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_lZrGyIUT_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_Fyng7ydG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NfaTobqX_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_U0RlPuWO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FXmxzVBj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_bEOrkNDn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tlD0nbXW_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_ou3T5gFg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sOYwYPra_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_Kiz7kSXS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8Cqy3KgV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_NPCnWExg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_a8s9pajb_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_IfFUOUa0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_10Cm21El_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_2IMYkxmw_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Th42xeVu_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_l6IDoVkj_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Hl3jwymS_sendMessage);
      break;
    }
    case 0x40400000: { // "3.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_s6VmOvXI_sendMessage);
      break;
    }
    case 0x40800000: { // "4.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_R8pAkcyW_sendMessage);
      break;
    }
    case 0x40A00000: { // "5.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Lb7KBNQx_sendMessage);
      break;
    }
    case 0x40C00000: { // "6.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jPTALklo_sendMessage);
      break;
    }
    case 0x40E00000: { // "7.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YirhiKEI_sendMessage);
      break;
    }
    case 0x41000000: { // "8.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7Pw6hcbq_sendMessage);
      break;
    }
    case 0x41100000: { // "9.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SGQ6EPOV_sendMessage);
      break;
    }
    case 0x41200000: { // "10.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yVWgOy0R_sendMessage);
      break;
    }
    case 0x41300000: { // "11.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XbRmy19w_sendMessage);
      break;
    }
    case 0x41400000: { // "12.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eYRmSTmf_sendMessage);
      break;
    }
    case 0x41500000: { // "13.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7x0s2BOz_sendMessage);
      break;
    }
    case 0x41600000: { // "14.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aBd6RBea_sendMessage);
      break;
    }
    case 0x41700000: { // "15.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uVzyIfZw_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_Th42xeVu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_U0RlPuWO_sendMessage);
}

void Heavy_Echomatica::cCast_l6IDoVkj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Kiz7kSXS_sendMessage);
}

void Heavy_Echomatica::cCast_Hl3jwymS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_80iQH2lz_sendMessage);
}

void Heavy_Echomatica::cCast_s6VmOvXI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Fyng7ydG_sendMessage);
}

void Heavy_Echomatica::cCast_R8pAkcyW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ou3T5gFg_sendMessage);
}

void Heavy_Echomatica::cCast_Lb7KBNQx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bEOrkNDn_sendMessage);
}

void Heavy_Echomatica::cCast_jPTALklo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VZes6lzQ_sendMessage);
}

void Heavy_Echomatica::cCast_YirhiKEI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NPCnWExg_sendMessage);
}

void Heavy_Echomatica::cCast_7Pw6hcbq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IfFUOUa0_sendMessage);
}

void Heavy_Echomatica::cCast_SGQ6EPOV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PGLUpv8v_sendMessage);
}

void Heavy_Echomatica::cCast_yVWgOy0R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nwEXXdu5_sendMessage);
}

void Heavy_Echomatica::cCast_XbRmy19w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gBtTmIcx_sendMessage);
}

void Heavy_Echomatica::cCast_eYRmSTmf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ngtfg5EC_sendMessage);
}

void Heavy_Echomatica::cCast_7x0s2BOz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2i2s8L2V_sendMessage);
}

void Heavy_Echomatica::cCast_aBd6RBea_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WfezkdJo_sendMessage);
}

void Heavy_Echomatica::cCast_uVzyIfZw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mAyC6Pix_sendMessage);
}

void Heavy_Echomatica::cMsg_lZrGyIUT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wirvq6Pt, 0, m, &cSlice_Wirvq6Pt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_u16OhjvA, 0, m, &cSlice_u16OhjvA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6BExNoAC, 0, m, &cSlice_6BExNoAC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RuARfPNz, 0, m, &cSlice_RuARfPNz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cdxc0H8w, 0, m, &cSlice_cdxc0H8w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Y2aweEFK, 0, m, &cSlice_Y2aweEFK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OFZRsXq8, 0, m, &cSlice_OFZRsXq8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tSJxbBM2, 0, m, &cSlice_tSJxbBM2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Jd6V8wt4, 0, m, &cSlice_Jd6V8wt4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zJnAoOZX, 0, m, &cSlice_zJnAoOZX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NGQNUQ4y, 0, m, &cSlice_NGQNUQ4y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lKVMzKZC, 0, m, &cSlice_lKVMzKZC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VtO03Mie, 0, m, &cSlice_VtO03Mie_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LrtaceOJ, 0, m, &cSlice_LrtaceOJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yp28u89r, 0, m, &cSlice_Yp28u89r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vRZ7SWEz, 0, m, &cSlice_vRZ7SWEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Lrm8p5q, 0, m, &cSlice_2Lrm8p5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ot39o3g6, 0, m, &cSlice_ot39o3g6_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fmsv22wU, 0, m, &cSlice_Fmsv22wU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NdnS00sF, 0, m, &cSlice_NdnS00sF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mWV7kVMo, 0, m, &cSlice_mWV7kVMo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L0NHuLqA, 0, m, &cSlice_L0NHuLqA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GwDP907s, 0, m, &cSlice_GwDP907s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lMfmOOpl, 0, m, &cSlice_lMfmOOpl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LXV0DGvE, 0, m, &cSlice_LXV0DGvE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SNzYLb4L, 0, m, &cSlice_SNzYLb4L_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JeLX4MEf, 0, m, &cSlice_JeLX4MEf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XZMzPS0o, 0, m, &cSlice_XZMzPS0o_sendMessage);
}

void Heavy_Echomatica::cMsg_8Cqy3KgV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wirvq6Pt, 0, m, &cSlice_Wirvq6Pt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_u16OhjvA, 0, m, &cSlice_u16OhjvA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6BExNoAC, 0, m, &cSlice_6BExNoAC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RuARfPNz, 0, m, &cSlice_RuARfPNz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cdxc0H8w, 0, m, &cSlice_cdxc0H8w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Y2aweEFK, 0, m, &cSlice_Y2aweEFK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OFZRsXq8, 0, m, &cSlice_OFZRsXq8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tSJxbBM2, 0, m, &cSlice_tSJxbBM2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Jd6V8wt4, 0, m, &cSlice_Jd6V8wt4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zJnAoOZX, 0, m, &cSlice_zJnAoOZX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NGQNUQ4y, 0, m, &cSlice_NGQNUQ4y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lKVMzKZC, 0, m, &cSlice_lKVMzKZC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VtO03Mie, 0, m, &cSlice_VtO03Mie_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LrtaceOJ, 0, m, &cSlice_LrtaceOJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yp28u89r, 0, m, &cSlice_Yp28u89r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vRZ7SWEz, 0, m, &cSlice_vRZ7SWEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Lrm8p5q, 0, m, &cSlice_2Lrm8p5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ot39o3g6, 0, m, &cSlice_ot39o3g6_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fmsv22wU, 0, m, &cSlice_Fmsv22wU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NdnS00sF, 0, m, &cSlice_NdnS00sF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mWV7kVMo, 0, m, &cSlice_mWV7kVMo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L0NHuLqA, 0, m, &cSlice_L0NHuLqA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GwDP907s, 0, m, &cSlice_GwDP907s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lMfmOOpl, 0, m, &cSlice_lMfmOOpl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LXV0DGvE, 0, m, &cSlice_LXV0DGvE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SNzYLb4L, 0, m, &cSlice_SNzYLb4L_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JeLX4MEf, 0, m, &cSlice_JeLX4MEf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XZMzPS0o, 0, m, &cSlice_XZMzPS0o_sendMessage);
}

void Heavy_Echomatica::cMsg_FXmxzVBj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wirvq6Pt, 0, m, &cSlice_Wirvq6Pt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_u16OhjvA, 0, m, &cSlice_u16OhjvA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6BExNoAC, 0, m, &cSlice_6BExNoAC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RuARfPNz, 0, m, &cSlice_RuARfPNz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cdxc0H8w, 0, m, &cSlice_cdxc0H8w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Y2aweEFK, 0, m, &cSlice_Y2aweEFK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OFZRsXq8, 0, m, &cSlice_OFZRsXq8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tSJxbBM2, 0, m, &cSlice_tSJxbBM2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Jd6V8wt4, 0, m, &cSlice_Jd6V8wt4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zJnAoOZX, 0, m, &cSlice_zJnAoOZX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NGQNUQ4y, 0, m, &cSlice_NGQNUQ4y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lKVMzKZC, 0, m, &cSlice_lKVMzKZC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VtO03Mie, 0, m, &cSlice_VtO03Mie_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LrtaceOJ, 0, m, &cSlice_LrtaceOJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yp28u89r, 0, m, &cSlice_Yp28u89r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vRZ7SWEz, 0, m, &cSlice_vRZ7SWEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Lrm8p5q, 0, m, &cSlice_2Lrm8p5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ot39o3g6, 0, m, &cSlice_ot39o3g6_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fmsv22wU, 0, m, &cSlice_Fmsv22wU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NdnS00sF, 0, m, &cSlice_NdnS00sF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mWV7kVMo, 0, m, &cSlice_mWV7kVMo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L0NHuLqA, 0, m, &cSlice_L0NHuLqA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GwDP907s, 0, m, &cSlice_GwDP907s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lMfmOOpl, 0, m, &cSlice_lMfmOOpl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LXV0DGvE, 0, m, &cSlice_LXV0DGvE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SNzYLb4L, 0, m, &cSlice_SNzYLb4L_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JeLX4MEf, 0, m, &cSlice_JeLX4MEf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XZMzPS0o, 0, m, &cSlice_XZMzPS0o_sendMessage);
}

void Heavy_Echomatica::cMsg_NfaTobqX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wirvq6Pt, 0, m, &cSlice_Wirvq6Pt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_u16OhjvA, 0, m, &cSlice_u16OhjvA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6BExNoAC, 0, m, &cSlice_6BExNoAC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RuARfPNz, 0, m, &cSlice_RuARfPNz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cdxc0H8w, 0, m, &cSlice_cdxc0H8w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Y2aweEFK, 0, m, &cSlice_Y2aweEFK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OFZRsXq8, 0, m, &cSlice_OFZRsXq8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tSJxbBM2, 0, m, &cSlice_tSJxbBM2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Jd6V8wt4, 0, m, &cSlice_Jd6V8wt4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zJnAoOZX, 0, m, &cSlice_zJnAoOZX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NGQNUQ4y, 0, m, &cSlice_NGQNUQ4y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lKVMzKZC, 0, m, &cSlice_lKVMzKZC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VtO03Mie, 0, m, &cSlice_VtO03Mie_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LrtaceOJ, 0, m, &cSlice_LrtaceOJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yp28u89r, 0, m, &cSlice_Yp28u89r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vRZ7SWEz, 0, m, &cSlice_vRZ7SWEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Lrm8p5q, 0, m, &cSlice_2Lrm8p5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ot39o3g6, 0, m, &cSlice_ot39o3g6_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fmsv22wU, 0, m, &cSlice_Fmsv22wU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NdnS00sF, 0, m, &cSlice_NdnS00sF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mWV7kVMo, 0, m, &cSlice_mWV7kVMo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L0NHuLqA, 0, m, &cSlice_L0NHuLqA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GwDP907s, 0, m, &cSlice_GwDP907s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lMfmOOpl, 0, m, &cSlice_lMfmOOpl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LXV0DGvE, 0, m, &cSlice_LXV0DGvE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SNzYLb4L, 0, m, &cSlice_SNzYLb4L_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JeLX4MEf, 0, m, &cSlice_JeLX4MEf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XZMzPS0o, 0, m, &cSlice_XZMzPS0o_sendMessage);
}

void Heavy_Echomatica::cMsg_sOYwYPra_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wirvq6Pt, 0, m, &cSlice_Wirvq6Pt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_u16OhjvA, 0, m, &cSlice_u16OhjvA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6BExNoAC, 0, m, &cSlice_6BExNoAC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RuARfPNz, 0, m, &cSlice_RuARfPNz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cdxc0H8w, 0, m, &cSlice_cdxc0H8w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Y2aweEFK, 0, m, &cSlice_Y2aweEFK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OFZRsXq8, 0, m, &cSlice_OFZRsXq8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tSJxbBM2, 0, m, &cSlice_tSJxbBM2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Jd6V8wt4, 0, m, &cSlice_Jd6V8wt4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zJnAoOZX, 0, m, &cSlice_zJnAoOZX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NGQNUQ4y, 0, m, &cSlice_NGQNUQ4y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lKVMzKZC, 0, m, &cSlice_lKVMzKZC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VtO03Mie, 0, m, &cSlice_VtO03Mie_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LrtaceOJ, 0, m, &cSlice_LrtaceOJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yp28u89r, 0, m, &cSlice_Yp28u89r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vRZ7SWEz, 0, m, &cSlice_vRZ7SWEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Lrm8p5q, 0, m, &cSlice_2Lrm8p5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ot39o3g6, 0, m, &cSlice_ot39o3g6_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fmsv22wU, 0, m, &cSlice_Fmsv22wU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NdnS00sF, 0, m, &cSlice_NdnS00sF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mWV7kVMo, 0, m, &cSlice_mWV7kVMo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L0NHuLqA, 0, m, &cSlice_L0NHuLqA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GwDP907s, 0, m, &cSlice_GwDP907s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lMfmOOpl, 0, m, &cSlice_lMfmOOpl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LXV0DGvE, 0, m, &cSlice_LXV0DGvE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SNzYLb4L, 0, m, &cSlice_SNzYLb4L_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JeLX4MEf, 0, m, &cSlice_JeLX4MEf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XZMzPS0o, 0, m, &cSlice_XZMzPS0o_sendMessage);
}

void Heavy_Echomatica::cMsg_tlD0nbXW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wirvq6Pt, 0, m, &cSlice_Wirvq6Pt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_u16OhjvA, 0, m, &cSlice_u16OhjvA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6BExNoAC, 0, m, &cSlice_6BExNoAC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RuARfPNz, 0, m, &cSlice_RuARfPNz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cdxc0H8w, 0, m, &cSlice_cdxc0H8w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Y2aweEFK, 0, m, &cSlice_Y2aweEFK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OFZRsXq8, 0, m, &cSlice_OFZRsXq8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tSJxbBM2, 0, m, &cSlice_tSJxbBM2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Jd6V8wt4, 0, m, &cSlice_Jd6V8wt4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zJnAoOZX, 0, m, &cSlice_zJnAoOZX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NGQNUQ4y, 0, m, &cSlice_NGQNUQ4y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lKVMzKZC, 0, m, &cSlice_lKVMzKZC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VtO03Mie, 0, m, &cSlice_VtO03Mie_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LrtaceOJ, 0, m, &cSlice_LrtaceOJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yp28u89r, 0, m, &cSlice_Yp28u89r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vRZ7SWEz, 0, m, &cSlice_vRZ7SWEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Lrm8p5q, 0, m, &cSlice_2Lrm8p5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ot39o3g6, 0, m, &cSlice_ot39o3g6_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fmsv22wU, 0, m, &cSlice_Fmsv22wU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NdnS00sF, 0, m, &cSlice_NdnS00sF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mWV7kVMo, 0, m, &cSlice_mWV7kVMo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L0NHuLqA, 0, m, &cSlice_L0NHuLqA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GwDP907s, 0, m, &cSlice_GwDP907s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lMfmOOpl, 0, m, &cSlice_lMfmOOpl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LXV0DGvE, 0, m, &cSlice_LXV0DGvE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SNzYLb4L, 0, m, &cSlice_SNzYLb4L_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JeLX4MEf, 0, m, &cSlice_JeLX4MEf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XZMzPS0o, 0, m, &cSlice_XZMzPS0o_sendMessage);
}

void Heavy_Echomatica::cMsg_RGI775xJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wirvq6Pt, 0, m, &cSlice_Wirvq6Pt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_u16OhjvA, 0, m, &cSlice_u16OhjvA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6BExNoAC, 0, m, &cSlice_6BExNoAC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RuARfPNz, 0, m, &cSlice_RuARfPNz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cdxc0H8w, 0, m, &cSlice_cdxc0H8w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Y2aweEFK, 0, m, &cSlice_Y2aweEFK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OFZRsXq8, 0, m, &cSlice_OFZRsXq8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tSJxbBM2, 0, m, &cSlice_tSJxbBM2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Jd6V8wt4, 0, m, &cSlice_Jd6V8wt4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zJnAoOZX, 0, m, &cSlice_zJnAoOZX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NGQNUQ4y, 0, m, &cSlice_NGQNUQ4y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lKVMzKZC, 0, m, &cSlice_lKVMzKZC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VtO03Mie, 0, m, &cSlice_VtO03Mie_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LrtaceOJ, 0, m, &cSlice_LrtaceOJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yp28u89r, 0, m, &cSlice_Yp28u89r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vRZ7SWEz, 0, m, &cSlice_vRZ7SWEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Lrm8p5q, 0, m, &cSlice_2Lrm8p5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ot39o3g6, 0, m, &cSlice_ot39o3g6_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fmsv22wU, 0, m, &cSlice_Fmsv22wU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NdnS00sF, 0, m, &cSlice_NdnS00sF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mWV7kVMo, 0, m, &cSlice_mWV7kVMo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L0NHuLqA, 0, m, &cSlice_L0NHuLqA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GwDP907s, 0, m, &cSlice_GwDP907s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lMfmOOpl, 0, m, &cSlice_lMfmOOpl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LXV0DGvE, 0, m, &cSlice_LXV0DGvE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SNzYLb4L, 0, m, &cSlice_SNzYLb4L_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JeLX4MEf, 0, m, &cSlice_JeLX4MEf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XZMzPS0o, 0, m, &cSlice_XZMzPS0o_sendMessage);
}

void Heavy_Echomatica::cMsg_a8s9pajb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wirvq6Pt, 0, m, &cSlice_Wirvq6Pt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_u16OhjvA, 0, m, &cSlice_u16OhjvA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6BExNoAC, 0, m, &cSlice_6BExNoAC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RuARfPNz, 0, m, &cSlice_RuARfPNz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cdxc0H8w, 0, m, &cSlice_cdxc0H8w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Y2aweEFK, 0, m, &cSlice_Y2aweEFK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OFZRsXq8, 0, m, &cSlice_OFZRsXq8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tSJxbBM2, 0, m, &cSlice_tSJxbBM2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Jd6V8wt4, 0, m, &cSlice_Jd6V8wt4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zJnAoOZX, 0, m, &cSlice_zJnAoOZX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NGQNUQ4y, 0, m, &cSlice_NGQNUQ4y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lKVMzKZC, 0, m, &cSlice_lKVMzKZC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VtO03Mie, 0, m, &cSlice_VtO03Mie_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LrtaceOJ, 0, m, &cSlice_LrtaceOJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yp28u89r, 0, m, &cSlice_Yp28u89r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vRZ7SWEz, 0, m, &cSlice_vRZ7SWEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Lrm8p5q, 0, m, &cSlice_2Lrm8p5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ot39o3g6, 0, m, &cSlice_ot39o3g6_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fmsv22wU, 0, m, &cSlice_Fmsv22wU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NdnS00sF, 0, m, &cSlice_NdnS00sF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mWV7kVMo, 0, m, &cSlice_mWV7kVMo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L0NHuLqA, 0, m, &cSlice_L0NHuLqA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GwDP907s, 0, m, &cSlice_GwDP907s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lMfmOOpl, 0, m, &cSlice_lMfmOOpl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LXV0DGvE, 0, m, &cSlice_LXV0DGvE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SNzYLb4L, 0, m, &cSlice_SNzYLb4L_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JeLX4MEf, 0, m, &cSlice_JeLX4MEf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XZMzPS0o, 0, m, &cSlice_XZMzPS0o_sendMessage);
}

void Heavy_Echomatica::cMsg_10Cm21El_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wirvq6Pt, 0, m, &cSlice_Wirvq6Pt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_u16OhjvA, 0, m, &cSlice_u16OhjvA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6BExNoAC, 0, m, &cSlice_6BExNoAC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RuARfPNz, 0, m, &cSlice_RuARfPNz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cdxc0H8w, 0, m, &cSlice_cdxc0H8w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Y2aweEFK, 0, m, &cSlice_Y2aweEFK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OFZRsXq8, 0, m, &cSlice_OFZRsXq8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tSJxbBM2, 0, m, &cSlice_tSJxbBM2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Jd6V8wt4, 0, m, &cSlice_Jd6V8wt4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zJnAoOZX, 0, m, &cSlice_zJnAoOZX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NGQNUQ4y, 0, m, &cSlice_NGQNUQ4y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lKVMzKZC, 0, m, &cSlice_lKVMzKZC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VtO03Mie, 0, m, &cSlice_VtO03Mie_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LrtaceOJ, 0, m, &cSlice_LrtaceOJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yp28u89r, 0, m, &cSlice_Yp28u89r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vRZ7SWEz, 0, m, &cSlice_vRZ7SWEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Lrm8p5q, 0, m, &cSlice_2Lrm8p5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ot39o3g6, 0, m, &cSlice_ot39o3g6_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fmsv22wU, 0, m, &cSlice_Fmsv22wU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NdnS00sF, 0, m, &cSlice_NdnS00sF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mWV7kVMo, 0, m, &cSlice_mWV7kVMo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L0NHuLqA, 0, m, &cSlice_L0NHuLqA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GwDP907s, 0, m, &cSlice_GwDP907s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lMfmOOpl, 0, m, &cSlice_lMfmOOpl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LXV0DGvE, 0, m, &cSlice_LXV0DGvE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SNzYLb4L, 0, m, &cSlice_SNzYLb4L_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JeLX4MEf, 0, m, &cSlice_JeLX4MEf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XZMzPS0o, 0, m, &cSlice_XZMzPS0o_sendMessage);
}

void Heavy_Echomatica::cMsg_gMCGFkWv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wirvq6Pt, 0, m, &cSlice_Wirvq6Pt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_u16OhjvA, 0, m, &cSlice_u16OhjvA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6BExNoAC, 0, m, &cSlice_6BExNoAC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RuARfPNz, 0, m, &cSlice_RuARfPNz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cdxc0H8w, 0, m, &cSlice_cdxc0H8w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Y2aweEFK, 0, m, &cSlice_Y2aweEFK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OFZRsXq8, 0, m, &cSlice_OFZRsXq8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tSJxbBM2, 0, m, &cSlice_tSJxbBM2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Jd6V8wt4, 0, m, &cSlice_Jd6V8wt4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zJnAoOZX, 0, m, &cSlice_zJnAoOZX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NGQNUQ4y, 0, m, &cSlice_NGQNUQ4y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lKVMzKZC, 0, m, &cSlice_lKVMzKZC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VtO03Mie, 0, m, &cSlice_VtO03Mie_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LrtaceOJ, 0, m, &cSlice_LrtaceOJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yp28u89r, 0, m, &cSlice_Yp28u89r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vRZ7SWEz, 0, m, &cSlice_vRZ7SWEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Lrm8p5q, 0, m, &cSlice_2Lrm8p5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ot39o3g6, 0, m, &cSlice_ot39o3g6_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fmsv22wU, 0, m, &cSlice_Fmsv22wU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NdnS00sF, 0, m, &cSlice_NdnS00sF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mWV7kVMo, 0, m, &cSlice_mWV7kVMo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L0NHuLqA, 0, m, &cSlice_L0NHuLqA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GwDP907s, 0, m, &cSlice_GwDP907s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lMfmOOpl, 0, m, &cSlice_lMfmOOpl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LXV0DGvE, 0, m, &cSlice_LXV0DGvE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SNzYLb4L, 0, m, &cSlice_SNzYLb4L_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JeLX4MEf, 0, m, &cSlice_JeLX4MEf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XZMzPS0o, 0, m, &cSlice_XZMzPS0o_sendMessage);
}

void Heavy_Echomatica::cMsg_FJ056kdL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wirvq6Pt, 0, m, &cSlice_Wirvq6Pt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_u16OhjvA, 0, m, &cSlice_u16OhjvA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6BExNoAC, 0, m, &cSlice_6BExNoAC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RuARfPNz, 0, m, &cSlice_RuARfPNz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cdxc0H8w, 0, m, &cSlice_cdxc0H8w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Y2aweEFK, 0, m, &cSlice_Y2aweEFK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OFZRsXq8, 0, m, &cSlice_OFZRsXq8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tSJxbBM2, 0, m, &cSlice_tSJxbBM2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Jd6V8wt4, 0, m, &cSlice_Jd6V8wt4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zJnAoOZX, 0, m, &cSlice_zJnAoOZX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NGQNUQ4y, 0, m, &cSlice_NGQNUQ4y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lKVMzKZC, 0, m, &cSlice_lKVMzKZC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VtO03Mie, 0, m, &cSlice_VtO03Mie_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LrtaceOJ, 0, m, &cSlice_LrtaceOJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yp28u89r, 0, m, &cSlice_Yp28u89r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vRZ7SWEz, 0, m, &cSlice_vRZ7SWEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Lrm8p5q, 0, m, &cSlice_2Lrm8p5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ot39o3g6, 0, m, &cSlice_ot39o3g6_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fmsv22wU, 0, m, &cSlice_Fmsv22wU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NdnS00sF, 0, m, &cSlice_NdnS00sF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mWV7kVMo, 0, m, &cSlice_mWV7kVMo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L0NHuLqA, 0, m, &cSlice_L0NHuLqA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GwDP907s, 0, m, &cSlice_GwDP907s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lMfmOOpl, 0, m, &cSlice_lMfmOOpl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LXV0DGvE, 0, m, &cSlice_LXV0DGvE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SNzYLb4L, 0, m, &cSlice_SNzYLb4L_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JeLX4MEf, 0, m, &cSlice_JeLX4MEf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XZMzPS0o, 0, m, &cSlice_XZMzPS0o_sendMessage);
}

void Heavy_Echomatica::cMsg_scIEJe9h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wirvq6Pt, 0, m, &cSlice_Wirvq6Pt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_u16OhjvA, 0, m, &cSlice_u16OhjvA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6BExNoAC, 0, m, &cSlice_6BExNoAC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RuARfPNz, 0, m, &cSlice_RuARfPNz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cdxc0H8w, 0, m, &cSlice_cdxc0H8w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Y2aweEFK, 0, m, &cSlice_Y2aweEFK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OFZRsXq8, 0, m, &cSlice_OFZRsXq8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tSJxbBM2, 0, m, &cSlice_tSJxbBM2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Jd6V8wt4, 0, m, &cSlice_Jd6V8wt4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zJnAoOZX, 0, m, &cSlice_zJnAoOZX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NGQNUQ4y, 0, m, &cSlice_NGQNUQ4y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lKVMzKZC, 0, m, &cSlice_lKVMzKZC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VtO03Mie, 0, m, &cSlice_VtO03Mie_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LrtaceOJ, 0, m, &cSlice_LrtaceOJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yp28u89r, 0, m, &cSlice_Yp28u89r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vRZ7SWEz, 0, m, &cSlice_vRZ7SWEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Lrm8p5q, 0, m, &cSlice_2Lrm8p5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ot39o3g6, 0, m, &cSlice_ot39o3g6_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fmsv22wU, 0, m, &cSlice_Fmsv22wU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NdnS00sF, 0, m, &cSlice_NdnS00sF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mWV7kVMo, 0, m, &cSlice_mWV7kVMo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L0NHuLqA, 0, m, &cSlice_L0NHuLqA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GwDP907s, 0, m, &cSlice_GwDP907s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lMfmOOpl, 0, m, &cSlice_lMfmOOpl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LXV0DGvE, 0, m, &cSlice_LXV0DGvE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SNzYLb4L, 0, m, &cSlice_SNzYLb4L_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JeLX4MEf, 0, m, &cSlice_JeLX4MEf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XZMzPS0o, 0, m, &cSlice_XZMzPS0o_sendMessage);
}

void Heavy_Echomatica::cMsg_gCS6PvhG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wirvq6Pt, 0, m, &cSlice_Wirvq6Pt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_u16OhjvA, 0, m, &cSlice_u16OhjvA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6BExNoAC, 0, m, &cSlice_6BExNoAC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RuARfPNz, 0, m, &cSlice_RuARfPNz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cdxc0H8w, 0, m, &cSlice_cdxc0H8w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Y2aweEFK, 0, m, &cSlice_Y2aweEFK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OFZRsXq8, 0, m, &cSlice_OFZRsXq8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tSJxbBM2, 0, m, &cSlice_tSJxbBM2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Jd6V8wt4, 0, m, &cSlice_Jd6V8wt4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zJnAoOZX, 0, m, &cSlice_zJnAoOZX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NGQNUQ4y, 0, m, &cSlice_NGQNUQ4y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lKVMzKZC, 0, m, &cSlice_lKVMzKZC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VtO03Mie, 0, m, &cSlice_VtO03Mie_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LrtaceOJ, 0, m, &cSlice_LrtaceOJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yp28u89r, 0, m, &cSlice_Yp28u89r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vRZ7SWEz, 0, m, &cSlice_vRZ7SWEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Lrm8p5q, 0, m, &cSlice_2Lrm8p5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ot39o3g6, 0, m, &cSlice_ot39o3g6_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fmsv22wU, 0, m, &cSlice_Fmsv22wU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NdnS00sF, 0, m, &cSlice_NdnS00sF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mWV7kVMo, 0, m, &cSlice_mWV7kVMo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L0NHuLqA, 0, m, &cSlice_L0NHuLqA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GwDP907s, 0, m, &cSlice_GwDP907s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lMfmOOpl, 0, m, &cSlice_lMfmOOpl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LXV0DGvE, 0, m, &cSlice_LXV0DGvE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SNzYLb4L, 0, m, &cSlice_SNzYLb4L_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JeLX4MEf, 0, m, &cSlice_JeLX4MEf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XZMzPS0o, 0, m, &cSlice_XZMzPS0o_sendMessage);
}

void Heavy_Echomatica::cMsg_DDs8OH5W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wirvq6Pt, 0, m, &cSlice_Wirvq6Pt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_u16OhjvA, 0, m, &cSlice_u16OhjvA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6BExNoAC, 0, m, &cSlice_6BExNoAC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RuARfPNz, 0, m, &cSlice_RuARfPNz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cdxc0H8w, 0, m, &cSlice_cdxc0H8w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Y2aweEFK, 0, m, &cSlice_Y2aweEFK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OFZRsXq8, 0, m, &cSlice_OFZRsXq8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tSJxbBM2, 0, m, &cSlice_tSJxbBM2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Jd6V8wt4, 0, m, &cSlice_Jd6V8wt4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zJnAoOZX, 0, m, &cSlice_zJnAoOZX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NGQNUQ4y, 0, m, &cSlice_NGQNUQ4y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lKVMzKZC, 0, m, &cSlice_lKVMzKZC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VtO03Mie, 0, m, &cSlice_VtO03Mie_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LrtaceOJ, 0, m, &cSlice_LrtaceOJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yp28u89r, 0, m, &cSlice_Yp28u89r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vRZ7SWEz, 0, m, &cSlice_vRZ7SWEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Lrm8p5q, 0, m, &cSlice_2Lrm8p5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ot39o3g6, 0, m, &cSlice_ot39o3g6_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fmsv22wU, 0, m, &cSlice_Fmsv22wU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NdnS00sF, 0, m, &cSlice_NdnS00sF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mWV7kVMo, 0, m, &cSlice_mWV7kVMo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L0NHuLqA, 0, m, &cSlice_L0NHuLqA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GwDP907s, 0, m, &cSlice_GwDP907s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lMfmOOpl, 0, m, &cSlice_lMfmOOpl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LXV0DGvE, 0, m, &cSlice_LXV0DGvE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SNzYLb4L, 0, m, &cSlice_SNzYLb4L_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JeLX4MEf, 0, m, &cSlice_JeLX4MEf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XZMzPS0o, 0, m, &cSlice_XZMzPS0o_sendMessage);
}

void Heavy_Echomatica::cMsg_Wz7y5lrb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wirvq6Pt, 0, m, &cSlice_Wirvq6Pt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_u16OhjvA, 0, m, &cSlice_u16OhjvA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6BExNoAC, 0, m, &cSlice_6BExNoAC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RuARfPNz, 0, m, &cSlice_RuARfPNz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cdxc0H8w, 0, m, &cSlice_cdxc0H8w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Y2aweEFK, 0, m, &cSlice_Y2aweEFK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OFZRsXq8, 0, m, &cSlice_OFZRsXq8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tSJxbBM2, 0, m, &cSlice_tSJxbBM2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Jd6V8wt4, 0, m, &cSlice_Jd6V8wt4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zJnAoOZX, 0, m, &cSlice_zJnAoOZX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NGQNUQ4y, 0, m, &cSlice_NGQNUQ4y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lKVMzKZC, 0, m, &cSlice_lKVMzKZC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VtO03Mie, 0, m, &cSlice_VtO03Mie_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LrtaceOJ, 0, m, &cSlice_LrtaceOJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yp28u89r, 0, m, &cSlice_Yp28u89r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vRZ7SWEz, 0, m, &cSlice_vRZ7SWEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Lrm8p5q, 0, m, &cSlice_2Lrm8p5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ot39o3g6, 0, m, &cSlice_ot39o3g6_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fmsv22wU, 0, m, &cSlice_Fmsv22wU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NdnS00sF, 0, m, &cSlice_NdnS00sF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mWV7kVMo, 0, m, &cSlice_mWV7kVMo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L0NHuLqA, 0, m, &cSlice_L0NHuLqA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GwDP907s, 0, m, &cSlice_GwDP907s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lMfmOOpl, 0, m, &cSlice_lMfmOOpl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LXV0DGvE, 0, m, &cSlice_LXV0DGvE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SNzYLb4L, 0, m, &cSlice_SNzYLb4L_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JeLX4MEf, 0, m, &cSlice_JeLX4MEf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XZMzPS0o, 0, m, &cSlice_XZMzPS0o_sendMessage);
}

void Heavy_Echomatica::cMsg_u08JfWpH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_Wirvq6Pt, 0, m, &cSlice_Wirvq6Pt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_u16OhjvA, 0, m, &cSlice_u16OhjvA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6BExNoAC, 0, m, &cSlice_6BExNoAC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RuARfPNz, 0, m, &cSlice_RuARfPNz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_cdxc0H8w, 0, m, &cSlice_cdxc0H8w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Y2aweEFK, 0, m, &cSlice_Y2aweEFK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OFZRsXq8, 0, m, &cSlice_OFZRsXq8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_tSJxbBM2, 0, m, &cSlice_tSJxbBM2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Jd6V8wt4, 0, m, &cSlice_Jd6V8wt4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zJnAoOZX, 0, m, &cSlice_zJnAoOZX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NGQNUQ4y, 0, m, &cSlice_NGQNUQ4y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lKVMzKZC, 0, m, &cSlice_lKVMzKZC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VtO03Mie, 0, m, &cSlice_VtO03Mie_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LrtaceOJ, 0, m, &cSlice_LrtaceOJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Yp28u89r, 0, m, &cSlice_Yp28u89r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vRZ7SWEz, 0, m, &cSlice_vRZ7SWEz_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2Lrm8p5q, 0, m, &cSlice_2Lrm8p5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ot39o3g6, 0, m, &cSlice_ot39o3g6_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Fmsv22wU, 0, m, &cSlice_Fmsv22wU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NdnS00sF, 0, m, &cSlice_NdnS00sF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mWV7kVMo, 0, m, &cSlice_mWV7kVMo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L0NHuLqA, 0, m, &cSlice_L0NHuLqA_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_GwDP907s, 0, m, &cSlice_GwDP907s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lMfmOOpl, 0, m, &cSlice_lMfmOOpl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LXV0DGvE, 0, m, &cSlice_LXV0DGvE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SNzYLb4L, 0, m, &cSlice_SNzYLb4L_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JeLX4MEf, 0, m, &cSlice_JeLX4MEf_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XZMzPS0o, 0, m, &cSlice_XZMzPS0o_sendMessage);
}

void Heavy_Echomatica::cMsg_cCzAEfGG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_l2Hihzqz_sendMessage);
}

void Heavy_Echomatica::cSystem_l2Hihzqz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_on6ZtMph_sendMessage);
}

void Heavy_Echomatica::cVar_L9e6zJzy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BVM7Zr1g_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_n8CnvCJZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_FeAetMFt_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_t7xSLxL3, m);
}

void Heavy_Echomatica::cBinop_on6ZtMph_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_yOWxsKa7, m);
}

void Heavy_Echomatica::cMsg_BVM7Zr1g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_n8CnvCJZ_sendMessage);
}

void Heavy_Echomatica::cBinop_FeAetMFt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_3JMyss4p, m);
}

void Heavy_Echomatica::cMsg_PZNkGdnQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_uJEkTFkQ_sendMessage);
}

void Heavy_Echomatica::cSystem_uJEkTFkQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_bzXuTE4F_sendMessage);
}

void Heavy_Echomatica::cVar_tdeN0VlK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dtdlcChg_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_5rIVyzL3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_vf8oswas_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_T08tTFMl, m);
}

void Heavy_Echomatica::cBinop_bzXuTE4F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_nPpngNTF, m);
}

void Heavy_Echomatica::cMsg_dtdlcChg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_5rIVyzL3_sendMessage);
}

void Heavy_Echomatica::cBinop_vf8oswas_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_CZET0kOx, m);
}

void Heavy_Echomatica::cVar_AIcG264R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_CIME7gTe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_jsAlW0Mg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_BBD7C0re_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_bsplcBBK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_80ccxR7l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_Yk22GEC2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_zYh9tqmZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_uMsupKUS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_uA2rV1kq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_94KwggPv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_LfXbcx15_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cPack_4OscoNMN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_SDpgQAeP, 0, m, NULL);
}

void Heavy_Echomatica::cPack_f8LOHdmo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_rKlYj1jw, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_HbRUyEl4, 0, m, &cVar_HbRUyEl4_sendMessage);
}

void Heavy_Echomatica::cPack_0MJsdY1r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_B9cxZFu3, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_jPrWqm3r, 0, m, &cVar_jPrWqm3r_sendMessage);
}

void Heavy_Echomatica::cPack_Owy0BfDq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_FLPDyT57, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_IqveCp34, 0, m, &cVar_IqveCp34_sendMessage);
}

void Heavy_Echomatica::cPack_lS7vxpJF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_wuFFEQhS, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_gMGwA7F2, 0, m, &cVar_gMGwA7F2_sendMessage);
}

void Heavy_Echomatica::cPack_sB1GdJJa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_tC2hW0gt, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_ss6mGzZm, 0, m, &cVar_ss6mGzZm_sendMessage);
}

void Heavy_Echomatica::cPack_1HU99Vn5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_4AT8ifm7, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_XfP5W71l, 0, m, &cVar_XfP5W71l_sendMessage);
}

void Heavy_Echomatica::cSlice_Wirvq6Pt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_5htpcdMf_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_u16OhjvA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_2rJHUSBA_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_6BExNoAC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_fuJUp0Sd_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_RuARfPNz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_8xzC9qXk_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_cdxc0H8w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_RFM3Q3Zg_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_Y2aweEFK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_3fcMqTih_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_OFZRsXq8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_R6DZCq03_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_tSJxbBM2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_WP6HBS4o_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_Jd6V8wt4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_x7H1Cyy4_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_zJnAoOZX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_kOIYb4ET_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_NGQNUQ4y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_kgKsuo0p_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_lKVMzKZC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_VCJMvWYE_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_VtO03Mie_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_J2VzJvGS_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_LrtaceOJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_OQE95mlE_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_Yp28u89r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_p8gpfmD3_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_vRZ7SWEz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ED1Tw9uE_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_2Lrm8p5q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_A6T4Ssts_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_ot39o3g6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_e7PFHtEv_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_Fmsv22wU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_nviMYKn6_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_NdnS00sF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_qS8PAsDn_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_mWV7kVMo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_3c0oXZny_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_L0NHuLqA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Kqbdgn1u_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_GwDP907s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_FmeXY8mT_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_lMfmOOpl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Ca7ZVmy6_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_LXV0DGvE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_uE93Nsp9_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_SNzYLb4L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_6eVrZJNd_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_JeLX4MEf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_X2GNgjXm_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_XZMzPS0o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_hROYStqK_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_HbRUyEl4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_jPrWqm3r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_XfP5W71l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_IqveCp34_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_gMGwA7F2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_ss6mGzZm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cSlice_x8bjNZ1R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_m9IRRXc3, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_4KnWp3kK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_eFEulve9, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_mH1qaEtY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_sBxPzxB6, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_Te66LhXO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_KVdwatXl, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSwitchcase_KVp81Jz8_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6XPHceio_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bZqtR1Av_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_6XPHceio_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cNYEGJ7z_sendMessage);
}

void Heavy_Echomatica::cPack_wpnyWgYs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_tvEJyAqM, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_GccAbcjZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Hg6ZGgHH_sendMessage);
}

void Heavy_Echomatica::cSystem_Hg6ZGgHH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_gXTeEIyA_sendMessage);
}

void Heavy_Echomatica::cDelay_vLUzopah_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_vLUzopah, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_UeNilWqC, 0, m, &cDelay_UeNilWqC_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_vLUzopah, 0, m, &cDelay_vLUzopah_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_kWRtgKVV, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_UeNilWqC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_UeNilWqC, m);
  cMsg_fNhT2Mid_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_F5UKYhdz_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_Ynn16ldE_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_NmPdKJA0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_RVzcugpl_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_CAJe2eiV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mztVWB5a_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_vLUzopah, 2, m, &cDelay_vLUzopah_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fc6b0uOE_sendMessage);
}

void Heavy_Echomatica::cMsg_RVzcugpl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_CAJe2eiV, 0, m, &hTable_CAJe2eiV_sendMessage);
}

void Heavy_Echomatica::cBinop_gXTeEIyA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 40.0f, 0, m, &cBinop_NmPdKJA0_sendMessage);
}

void Heavy_Echomatica::cMsg_fNhT2Mid_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_CAJe2eiV, 0, m, &hTable_CAJe2eiV_sendMessage);
}

void Heavy_Echomatica::cCast_fc6b0uOE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_vLUzopah, 0, m, &cDelay_vLUzopah_sendMessage);
}

void Heavy_Echomatica::cMsg_mztVWB5a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_UeNilWqC, 2, m, &cDelay_UeNilWqC_sendMessage);
}

void Heavy_Echomatica::cMsg_Ynn16ldE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_kWRtgKVV, 1, m, NULL);
}

void Heavy_Echomatica::cVar_WIwgX3kB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_kFyr8ppy, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_H8of5zWs, m);
}

void Heavy_Echomatica::cMsg_N8KHjv5G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_9VHCve9g_sendMessage);
}

void Heavy_Echomatica::cSystem_9VHCve9g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_TegNi2Oa_sendMessage);
}

void Heavy_Echomatica::cVar_U1WbDs1P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_79uAbjQo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_X22gJAPz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_LcTXETZa_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_YAWBIR7K, m);
}

void Heavy_Echomatica::cBinop_TegNi2Oa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_fbCcSGpC, m);
}

void Heavy_Echomatica::cMsg_79uAbjQo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_X22gJAPz_sendMessage);
}

void Heavy_Echomatica::cBinop_LcTXETZa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_wt2j3INJ, m);
}

void Heavy_Echomatica::cMsg_iXj4HcHd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_kcZWY1pO_sendMessage);
}

void Heavy_Echomatica::cSystem_kcZWY1pO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_GdQWdACV_sendMessage);
}

void Heavy_Echomatica::cVar_bU3fHH7k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_W5RnDsp6_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_ErqGMx26_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_zr4zTd7D_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_mBmBgYZK, m);
}

void Heavy_Echomatica::cBinop_GdQWdACV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_07bLsIMu, m);
}

void Heavy_Echomatica::cMsg_W5RnDsp6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ErqGMx26_sendMessage);
}

void Heavy_Echomatica::cBinop_zr4zTd7D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Z042hBUw, m);
}

void Heavy_Echomatica::cMsg_2LSlpxos_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_qM36tZA6_sendMessage);
}

void Heavy_Echomatica::cSystem_qM36tZA6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_sCVkL179_sendMessage);
}

void Heavy_Echomatica::cDelay_conS2Gef_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_conS2Gef, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_yd5BXb9B, 0, m, &cDelay_yd5BXb9B_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_conS2Gef, 0, m, &cDelay_conS2Gef_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_Bf0FeRb9, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_yd5BXb9B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_yd5BXb9B, m);
  cMsg_8qxqkOxQ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_CBymSgCd_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_1u2hkTfH_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_Cb5zHZ9C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tXacbCRz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_BKNvfENA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ey3EFOdM_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_conS2Gef, 2, m, &cDelay_conS2Gef_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_A5G6pQyq_sendMessage);
}

void Heavy_Echomatica::cMsg_tXacbCRz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_BKNvfENA, 0, m, &hTable_BKNvfENA_sendMessage);
}

void Heavy_Echomatica::cBinop_sCVkL179_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 30.0f, 0, m, &cBinop_Cb5zHZ9C_sendMessage);
}

void Heavy_Echomatica::cMsg_8qxqkOxQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_BKNvfENA, 0, m, &hTable_BKNvfENA_sendMessage);
}

void Heavy_Echomatica::cCast_A5G6pQyq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_conS2Gef, 0, m, &cDelay_conS2Gef_sendMessage);
}

void Heavy_Echomatica::cMsg_ey3EFOdM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_yd5BXb9B, 2, m, &cDelay_yd5BXb9B_sendMessage);
}

void Heavy_Echomatica::cMsg_1u2hkTfH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_Bf0FeRb9, 1, m, NULL);
}

void Heavy_Echomatica::cBinop_2Pg9nHAY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_u1VbSLE3_sendMessage);
}

void Heavy_Echomatica::cBinop_u1VbSLE3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_7QIscZWb_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_ktE7DOHL_sendMessage);
}

void Heavy_Echomatica::cVar_CPl2falG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_X5pO7NwF_sendMessage);
}

void Heavy_Echomatica::cMsg_l3dBnHfH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_bhvOfGWH_sendMessage);
}

void Heavy_Echomatica::cSystem_bhvOfGWH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_q1X33x0R, HV_BINOP_DIVIDE, 1, m, &cBinop_q1X33x0R_sendMessage);
}

void Heavy_Echomatica::cBinop_7QIscZWb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_0pIwIcuU_sendMessage);
}

void Heavy_Echomatica::cBinop_0pIwIcuU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Ork0fvEj, m);
}

void Heavy_Echomatica::cMsg_c9b2IfAx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_oj6aK09H_sendMessage);
}

void Heavy_Echomatica::cBinop_oj6aK09H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_2Pg9nHAY_sendMessage);
}

void Heavy_Echomatica::cBinop_ktE7DOHL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_rokonNzQ, m);
}

void Heavy_Echomatica::cBinop_X5pO7NwF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_yG4OVKGO_sendMessage);
}

void Heavy_Echomatica::cBinop_yG4OVKGO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_q1X33x0R, HV_BINOP_DIVIDE, 0, m, &cBinop_q1X33x0R_sendMessage);
}

void Heavy_Echomatica::cBinop_q1X33x0R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_c9b2IfAx_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_S64WYX9p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_wYDV9oXR_sendMessage);
}

void Heavy_Echomatica::cBinop_wYDV9oXR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_kJWt87ri_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_rhVhYFxV_sendMessage);
}

void Heavy_Echomatica::cVar_VXHKSj23_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_Cb1fV5MZ_sendMessage);
}

void Heavy_Echomatica::cMsg_gKrOorEg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_5uLuJU0z_sendMessage);
}

void Heavy_Echomatica::cSystem_5uLuJU0z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_M5eyIl8b, HV_BINOP_DIVIDE, 1, m, &cBinop_M5eyIl8b_sendMessage);
}

void Heavy_Echomatica::cBinop_kJWt87ri_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_cegmpZwN_sendMessage);
}

void Heavy_Echomatica::cBinop_cegmpZwN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Q2r6IQR9, m);
}

void Heavy_Echomatica::cMsg_KLsqrDdo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_0BE2XhWd_sendMessage);
}

void Heavy_Echomatica::cBinop_0BE2XhWd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_S64WYX9p_sendMessage);
}

void Heavy_Echomatica::cBinop_rhVhYFxV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_t3nM6M5x, m);
}

void Heavy_Echomatica::cBinop_Cb1fV5MZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_u5dSe2Kx_sendMessage);
}

void Heavy_Echomatica::cBinop_u5dSe2Kx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_M5eyIl8b, HV_BINOP_DIVIDE, 0, m, &cBinop_M5eyIl8b_sendMessage);
}

void Heavy_Echomatica::cBinop_M5eyIl8b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KLsqrDdo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_M70cbfaN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_OpWHbWnV, 0, m, &cPack_OpWHbWnV_sendMessage);
}

void Heavy_Echomatica::cVar_3YzsYzgp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_MwzoB2cU, 0, m, &cPack_MwzoB2cU_sendMessage);
}

void Heavy_Echomatica::cVar_ZkwhBBmz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_gxEQuaiC_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cPack_MwzoB2cU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_cVVujEoH, 0, m, NULL);
}

void Heavy_Echomatica::cPack_OpWHbWnV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_qTR6am9n, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_gxEQuaiC_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uKQvlb8H_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_z2t6Norn_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QXZDc8Cm_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_uKQvlb8H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XaNOxRP6_sendMessage(_c, 0, m);
  cMsg_dU2mO207_sendMessage(_c, 0, m);
  cMsg_1XQJQIo1_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_z2t6Norn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XaNOxRP6_sendMessage(_c, 0, m);
  cMsg_dU2mO207_sendMessage(_c, 0, m);
  cMsg_jt4UYPFh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_QXZDc8Cm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_prO0xi8e_sendMessage(_c, 0, m);
  cMsg_H7xqbcgK_sendMessage(_c, 0, m);
  cMsg_jt4UYPFh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_eHXhUecw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_HT1af0CQ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_BLhPB6Sh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_k3I4vSFz, HV_BINOP_DIVIDE, 0, m, &cBinop_k3I4vSFz_sendMessage);
}

void Heavy_Echomatica::cVar_G0gPgpgx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Sa6UXa4R, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_Sa6UXa4R_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_OxBQZ3kB, 0, m, &cIf_OxBQZ3kB_sendMessage);
}

void Heavy_Echomatica::sEnv_dMeV86Nb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_3EPPVW3S_sendMessage);
}

void Heavy_Echomatica::cBinop_fbt5d9v5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_hTgoxjfJ_sendMessage);
}

void Heavy_Echomatica::cBinop_hTgoxjfJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VLBUcxT2_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Ah6W0ae8_sendMessage);
}

void Heavy_Echomatica::cCast_Ah6W0ae8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gX7FajEl_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_VLBUcxT2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XMtJ43Zh, HV_BINOP_POW, 1, m, &cBinop_XMtJ43Zh_sendMessage);
}

void Heavy_Echomatica::cMsg_gX7FajEl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_XMtJ43Zh, HV_BINOP_POW, 0, m, &cBinop_XMtJ43Zh_sendMessage);
}

void Heavy_Echomatica::cBinop_XMtJ43Zh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_Xm14bVKK_sendMessage);
}

void Heavy_Echomatica::cIf_OxBQZ3kB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_fbt5d9v5, HV_BINOP_SUBTRACT, 0, m, &cBinop_fbt5d9v5_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_BmAIts1m, HV_BINOP_SUBTRACT, 0, m, &cBinop_BmAIts1m_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_Sa6UXa4R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_OxBQZ3kB, 1, m, &cIf_OxBQZ3kB_sendMessage);
}

void Heavy_Echomatica::cVar_QLbSJQ7a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_utosVvrj_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iLVABUNM_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TAi8W1pl_sendMessage);
}

void Heavy_Echomatica::cVar_xllQLBID_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fv2rIWrD_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uckOnt6w_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_xC90JbMy_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_TUvz9hYy, 0, m, &cSlice_TUvz9hYy_sendMessage);
      break;
    }
    default: {
      cSwitchcase_7FEJVJTn_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_TUvz9hYy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ZVvB3p5b_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_ZVvB3p5b_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_6bxJSJH1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_ZVvB3p5b_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_ZVvB3p5b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_obSzHi47_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_7FEJVJTn_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_sW3IpGRj, 0, m, &cSlice_sW3IpGRj_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_sW3IpGRj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_kSu2zkpa_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_kSu2zkpa_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_MIvotvbK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_kSu2zkpa_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_kSu2zkpa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_nATMaRM7_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_fv2rIWrD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_k3I4vSFz, HV_BINOP_DIVIDE, 1, m, &cBinop_k3I4vSFz_sendMessage);
}

void Heavy_Echomatica::cCast_uckOnt6w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BLhPB6Sh, 0, m, &cVar_BLhPB6Sh_sendMessage);
}

void Heavy_Echomatica::cBinop_k3I4vSFz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_96jQHEFq, HV_BINOP_ADD, 0, m, &cBinop_96jQHEFq_sendMessage);
}

void Heavy_Echomatica::cBinop_BmAIts1m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BLhPB6Sh, 0, m, &cVar_BLhPB6Sh_sendMessage);
}

void Heavy_Echomatica::cCast_TAi8W1pl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_G0gPgpgx, 0, m, &cVar_G0gPgpgx_sendMessage);
}

void Heavy_Echomatica::cCast_utosVvrj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_00sumBQf_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5zi6kYN4_sendMessage);
}

void Heavy_Echomatica::cCast_iLVABUNM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Sa6UXa4R, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_Sa6UXa4R_sendMessage);
}

void Heavy_Echomatica::cBinop_96jQHEFq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fbt5d9v5, HV_BINOP_SUBTRACT, 0, m, &cBinop_fbt5d9v5_sendMessage);
}

void Heavy_Echomatica::cCast_ttSSWSvz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_QLbSJQ7a, 0, m, &cVar_QLbSJQ7a_sendMessage);
}

void Heavy_Echomatica::cCast_jauNCPSi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xllQLBID, 0, m, &cVar_xllQLBID_sendMessage);
}

void Heavy_Echomatica::cCast_yqc4KYxS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fbt5d9v5, HV_BINOP_SUBTRACT, 1, m, &cBinop_fbt5d9v5_sendMessage);
}

void Heavy_Echomatica::cCast_9o08cFxV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_G0gPgpgx, 0, m, &cVar_G0gPgpgx_sendMessage);
}

void Heavy_Echomatica::cBinop_Xm14bVKK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qFxF7udY_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_5zi6kYN4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BmAIts1m, HV_BINOP_SUBTRACT, 1, m, &cBinop_BmAIts1m_sendMessage);
}

void Heavy_Echomatica::cCast_00sumBQf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_96jQHEFq, HV_BINOP_ADD, 1, m, &cBinop_96jQHEFq_sendMessage);
}

void Heavy_Echomatica::cBinop_3EPPVW3S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yqc4KYxS_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_9o08cFxV_sendMessage);
}

void Heavy_Echomatica::cMsg_qFxF7udY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_LS0Yppmz, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_XaNOxRP6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_3YzsYzgp, 0, m, &cVar_3YzsYzgp_sendMessage);
}

void Heavy_Echomatica::cMsg_dU2mO207_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_M70cbfaN, 0, m, &cVar_M70cbfaN_sendMessage);
}

void Heavy_Echomatica::cMsg_prO0xi8e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_3YzsYzgp, 0, m, &cVar_3YzsYzgp_sendMessage);
}

void Heavy_Echomatica::cMsg_H7xqbcgK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_M70cbfaN, 0, m, &cVar_M70cbfaN_sendMessage);
}

void Heavy_Echomatica::cSend_HT1af0CQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_BsZT2RLi_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_1XQJQIo1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_eHXhUecw, 0, m, &cVar_eHXhUecw_sendMessage);
}

void Heavy_Echomatica::cMsg_jt4UYPFh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_eHXhUecw, 0, m, &cVar_eHXhUecw_sendMessage);
}

void Heavy_Echomatica::cVar_Czv8sr0P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Lrq4s2Sy, HV_BINOP_MULTIPLY, 0, m, &cBinop_Lrq4s2Sy_sendMessage);
}

void Heavy_Echomatica::cMsg_Yll0OmfT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_jRkjAhuk_sendMessage);
}

void Heavy_Echomatica::cSystem_jRkjAhuk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_aXsHzmES_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_Lrq4s2Sy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_6HOlos3U_sendMessage);
}

void Heavy_Echomatica::cBinop_nYL4kP0R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Lrq4s2Sy, HV_BINOP_MULTIPLY, 1, m, &cBinop_Lrq4s2Sy_sendMessage);
}

void Heavy_Echomatica::cMsg_aXsHzmES_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_nYL4kP0R_sendMessage);
}

void Heavy_Echomatica::cBinop_6HOlos3U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_vAFLRxTU_sendMessage);
}

void Heavy_Echomatica::cBinop_vAFLRxTU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_ib6JCxgs_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_6efABy4O, m);
}

void Heavy_Echomatica::cBinop_ib6JCxgs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_i93kfeN2, m);
}

void Heavy_Echomatica::cBinop_MIB25FNM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_9FvtNVgE_sendMessage);
}

void Heavy_Echomatica::cBinop_9FvtNVgE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_aumVNn03_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_heev5m9C_sendMessage);
}

void Heavy_Echomatica::cVar_uV24xN7j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_dNV1QgVl_sendMessage);
}

void Heavy_Echomatica::cMsg_xn4GwjN3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_umzYgTRT_sendMessage);
}

void Heavy_Echomatica::cSystem_umzYgTRT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ny0CIqxK, HV_BINOP_DIVIDE, 1, m, &cBinop_ny0CIqxK_sendMessage);
}

void Heavy_Echomatica::cBinop_aumVNn03_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_w5qeNiRV_sendMessage);
}

void Heavy_Echomatica::cBinop_w5qeNiRV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_6l6to0Fm, m);
}

void Heavy_Echomatica::cMsg_g8ZNy46O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_C15xh4ls_sendMessage);
}

void Heavy_Echomatica::cBinop_C15xh4ls_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_MIB25FNM_sendMessage);
}

void Heavy_Echomatica::cBinop_heev5m9C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_RPnHJJIl, m);
}

void Heavy_Echomatica::cBinop_dNV1QgVl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_xb0DjMJs_sendMessage);
}

void Heavy_Echomatica::cBinop_xb0DjMJs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ny0CIqxK, HV_BINOP_DIVIDE, 0, m, &cBinop_ny0CIqxK_sendMessage);
}

void Heavy_Echomatica::cBinop_ny0CIqxK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_g8ZNy46O_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cIf_v5HY1wzt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_pcaqmHKY, 0, m, &cVar_pcaqmHKY_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_pcaqmHKY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fE99OeJV, HV_BINOP_MULTIPLY, 0, m, &cBinop_fE99OeJV_sendMessage);
}

void Heavy_Echomatica::cVar_dWLIXALq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_v5HY1wzt, 0, m, &cIf_v5HY1wzt_sendMessage);
}

void Heavy_Echomatica::cPack_4Q7rVNmX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ile0jwQ5_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_7fnHsV2O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_2q9aWeQS_sendMessage);
}

void Heavy_Echomatica::cSystem_2q9aWeQS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bBRIUQvw, HV_BINOP_MULTIPLY, 1, m, &cBinop_bBRIUQvw_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_H9g228Tx, HV_BINOP_MULTIPLY, 1, m, &cBinop_H9g228Tx_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_7AgELH2e_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cMsg_x11vOQP0_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_x11vOQP0_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lbH5G9ma_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cDelay_lOwTvEF3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_lOwTvEF3, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_lOwTvEF3, 0, m, &cDelay_lOwTvEF3_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_l62cWaE0, 0, m, &cVar_l62cWaE0_sendMessage);
}

void Heavy_Echomatica::cCast_lbH5G9ma_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_x11vOQP0_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_lOwTvEF3, 0, m, &cDelay_lOwTvEF3_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_l62cWaE0, 0, m, &cVar_l62cWaE0_sendMessage);
}

void Heavy_Echomatica::cMsg_s9UGYu1f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ELwEU83r_sendMessage);
}

void Heavy_Echomatica::cSystem_ELwEU83r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_G8tzDuQd_sendMessage);
}

void Heavy_Echomatica::cVar_Of6XM2tX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HxTHfbQL, HV_BINOP_MULTIPLY, 0, m, &cBinop_HxTHfbQL_sendMessage);
}

void Heavy_Echomatica::cMsg_x11vOQP0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_lOwTvEF3, 0, m, &cDelay_lOwTvEF3_sendMessage);
}

void Heavy_Echomatica::cBinop_p7hkjD91_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_lOwTvEF3, 2, m, &cDelay_lOwTvEF3_sendMessage);
}

void Heavy_Echomatica::cBinop_G8tzDuQd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HxTHfbQL, HV_BINOP_MULTIPLY, 1, m, &cBinop_HxTHfbQL_sendMessage);
}

void Heavy_Echomatica::cBinop_HxTHfbQL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_p7hkjD91_sendMessage);
}

void Heavy_Echomatica::cVar_l62cWaE0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Kpzs6zBt, HV_BINOP_SUBTRACT, 0, m, &cBinop_Kpzs6zBt_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_UkOQ9Rxc_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_V6joOGOh_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_K8oL6fDy_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VxruEC6J_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_K8oL6fDy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_pmu05zmU, 0, m, &cVar_pmu05zmU_sendMessage);
}

void Heavy_Echomatica::cCast_VxruEC6J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_k4fVnfvO_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uSp1foz7_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_ile0jwQ5_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_XAoSQawG, 0, m, &cSlice_XAoSQawG_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_7sx6ZBRK, 0, m, &cSlice_7sx6ZBRK_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wF5XTxdS_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_SH4YouZ3, 0, m, &cSlice_SH4YouZ3_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_jWRxdE60, 0, m, &cSlice_jWRxdE60_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_S6wflFBO_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bSLGYmGw_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_XAoSQawG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_aJqOEbWA_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_aJqOEbWA_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_7sx6ZBRK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7QUOox8e_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FqyNAzlD_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7QUOox8e_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FqyNAzlD_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_aWkQrBEq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AwmC57EZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VOOlOVkC_sendMessage);
}

void Heavy_Echomatica::cVar_OwuCfpm4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_CfXGcAYa_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_CfXGcAYa_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hNGDbh7s_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_bBRIUQvw, HV_BINOP_MULTIPLY, 0, m, &cBinop_bBRIUQvw_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_9R2GdmgY, HV_BINOP_DIVIDE, 1, m, &cBinop_9R2GdmgY_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_Of6XM2tX, 0, m, &cVar_Of6XM2tX_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_hNGDbh7s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wWBWZPis_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_S2bGtVkT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rvNuz07y, HV_BINOP_SUBTRACT, 1, m, &cBinop_rvNuz07y_sendMessage);
}

void Heavy_Echomatica::cVar_cP7EsY5r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_pmu05zmU, 0, m, &cVar_pmu05zmU_sendMessage);
}

void Heavy_Echomatica::cVar_pmu05zmU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jduijx4G, HV_BINOP_ADD, 0, m, &cBinop_jduijx4G_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_XVc7wYj3, HV_BINOP_ADD, 0, m, &cBinop_XVc7wYj3_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BAlB5sJK_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xkMcVUNd_sendMessage);
}

void Heavy_Echomatica::cSlice_SH4YouZ3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AwmC57EZ_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VOOlOVkC_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_jWRxdE60_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GzT7x5FQ_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oifhxRtE_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_6JaVTNyr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_l62cWaE0, 1, m, &cVar_l62cWaE0_sendMessage);
}

void Heavy_Echomatica::cBinop_H9g228Tx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_6JaVTNyr_sendMessage);
}

void Heavy_Echomatica::cBinop_bBRIUQvw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_dUT59TDH_sendMessage);
}

void Heavy_Echomatica::cBinop_dUT59TDH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Kpzs6zBt, HV_BINOP_SUBTRACT, 1, m, &cBinop_Kpzs6zBt_sendMessage);
}

void Heavy_Echomatica::cBinop_Kpzs6zBt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_l62cWaE0, 1, m, &cVar_l62cWaE0_sendMessage);
}

void Heavy_Echomatica::cMsg_HvTGDIQS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_7AgELH2e_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_DYBBUqeJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_7AgELH2e_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_XVc7wYj3, HV_BINOP_ADD, 1, m, &cBinop_XVc7wYj3_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_jduijx4G, HV_BINOP_ADD, 1, m, &cBinop_jduijx4G_sendMessage);
}

void Heavy_Echomatica::cBinop_UkOQ9Rxc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_V6joOGOh_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_jduijx4G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_pmu05zmU, 1, m, &cVar_pmu05zmU_sendMessage);
}

void Heavy_Echomatica::cBinop_9R2GdmgY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vO6ahpnp, HV_BINOP_DIVIDE, 1, m, &cBinop_vO6ahpnp_sendMessage);
}

void Heavy_Echomatica::cBinop_vO6ahpnp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XVc7wYj3, HV_BINOP_ADD, 1, m, &cBinop_XVc7wYj3_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_jduijx4G, HV_BINOP_ADD, 1, m, &cBinop_jduijx4G_sendMessage);
}

void Heavy_Echomatica::cCast_VOOlOVkC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9R2GdmgY, HV_BINOP_DIVIDE, 0, m, &cBinop_9R2GdmgY_sendMessage);
}

void Heavy_Echomatica::cCast_AwmC57EZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_H9g228Tx, HV_BINOP_MULTIPLY, 0, m, &cBinop_H9g228Tx_sendMessage);
}

void Heavy_Echomatica::cCast_GzT7x5FQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cP7EsY5r, 1, m, &cVar_cP7EsY5r_sendMessage);
}

void Heavy_Echomatica::cCast_oifhxRtE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rvNuz07y, HV_BINOP_SUBTRACT, 0, m, &cBinop_rvNuz07y_sendMessage);
}

void Heavy_Echomatica::cCast_k4fVnfvO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DYBBUqeJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_uSp1foz7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cP7EsY5r, 0, m, &cVar_cP7EsY5r_sendMessage);
}

void Heavy_Echomatica::cBinop_XVc7wYj3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_S2bGtVkT, 0, m, &cVar_S2bGtVkT_sendMessage);
}

void Heavy_Echomatica::cMsg_aJqOEbWA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_7AgELH2e_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_JFvfCfT5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_aWkQrBEq, 1, m, &cVar_aWkQrBEq_sendMessage);
}

void Heavy_Echomatica::cMsg_wWBWZPis_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_bBRIUQvw, HV_BINOP_MULTIPLY, 0, m, &cBinop_bBRIUQvw_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_9R2GdmgY, HV_BINOP_DIVIDE, 1, m, &cBinop_9R2GdmgY_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Of6XM2tX, 0, m, &cVar_Of6XM2tX_sendMessage);
}

void Heavy_Echomatica::cCast_FqyNAzlD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ICV8bAKd_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_XVc7wYj3, HV_BINOP_ADD, 0, m, &cBinop_XVc7wYj3_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_pmu05zmU, 1, m, &cVar_pmu05zmU_sendMessage);
}

void Heavy_Echomatica::cCast_7QUOox8e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_aJqOEbWA_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_rvNuz07y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vO6ahpnp, HV_BINOP_DIVIDE, 0, m, &cBinop_vO6ahpnp_sendMessage);
}

void Heavy_Echomatica::cCast_ICV8bAKd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DYBBUqeJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_bSLGYmGw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JFvfCfT5_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_wF5XTxdS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_aWkQrBEq, 0, m, &cVar_aWkQrBEq_sendMessage);
}

void Heavy_Echomatica::cCast_S6wflFBO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HvTGDIQS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_8Hg05fHO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7HoDbJ7F, HV_BINOP_MULTIPLY, 0, m, &cBinop_7HoDbJ7F_sendMessage);
}

void Heavy_Echomatica::cVar_bsApJFuw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TtE08ZSS, HV_BINOP_MULTIPLY, 0, m, &cBinop_TtE08ZSS_sendMessage);
}

void Heavy_Echomatica::cVar_pdtyxVyl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yJWN3QXE, HV_BINOP_MULTIPLY, 0, m, &cBinop_yJWN3QXE_sendMessage);
}

void Heavy_Echomatica::cVar_LxaVtsby_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PwEjlfBc, HV_BINOP_MULTIPLY, 0, m, &cBinop_PwEjlfBc_sendMessage);
}

void Heavy_Echomatica::cVar_aYCWoSLW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6q2fcEyF, HV_BINOP_MULTIPLY, 0, m, &cBinop_6q2fcEyF_sendMessage);
}

void Heavy_Echomatica::cVar_4is2papD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_F4T6Rn4q, HV_BINOP_MULTIPLY, 0, m, &cBinop_F4T6Rn4q_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_DMKapvJi_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sWpFC3qg_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ej15A3Zg_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_sWpFC3qg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dqPZtltc_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3aRdFq7U_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ePfbj8CD_sendMessage);
}

void Heavy_Echomatica::cCast_ej15A3Zg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FUuTCNq0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_O1sq1RJL_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2ZIlwSat_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BrAAwew3_sendMessage);
}

void Heavy_Echomatica::cBinop_Vwxq6AbE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_T07jILpk_sendMessage);
}

void Heavy_Echomatica::cBinop_T07jILpk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_WHoeYmbR_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_1vTg3Fan_sendMessage);
}

void Heavy_Echomatica::cVar_dqLtr0Pm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_aOk1J9Vk_sendMessage);
}

void Heavy_Echomatica::cMsg_0Cp8MQuH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Hw6AiRPP_sendMessage);
}

void Heavy_Echomatica::cSystem_Hw6AiRPP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YfFtWFfl, HV_BINOP_DIVIDE, 1, m, &cBinop_YfFtWFfl_sendMessage);
}

void Heavy_Echomatica::cBinop_WHoeYmbR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_NzltE663_sendMessage);
}

void Heavy_Echomatica::cBinop_NzltE663_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_83z098Zr, m);
}

void Heavy_Echomatica::cMsg_ULVtDWsX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Imjw04ZA_sendMessage);
}

void Heavy_Echomatica::cBinop_Imjw04ZA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_Vwxq6AbE_sendMessage);
}

void Heavy_Echomatica::cBinop_1vTg3Fan_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_MzsEll6K, m);
}

void Heavy_Echomatica::cBinop_aOk1J9Vk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_yCPcC9Qs_sendMessage);
}

void Heavy_Echomatica::cBinop_yCPcC9Qs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YfFtWFfl, HV_BINOP_DIVIDE, 0, m, &cBinop_YfFtWFfl_sendMessage);
}

void Heavy_Echomatica::cBinop_YfFtWFfl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ULVtDWsX_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_7CVb86y6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_I0QZglAY, HV_BINOP_DIVIDE, 0, m, &cBinop_I0QZglAY_sendMessage);
}

void Heavy_Echomatica::cVar_9d1EK1iT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iu6ubLwk, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_iu6ubLwk_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_3PdEF57q, 0, m, &cIf_3PdEF57q_sendMessage);
}

void Heavy_Echomatica::sEnv_wSvbPmnD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_ir6aWp9h_sendMessage);
}

void Heavy_Echomatica::cBinop_Z5vCMXpT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_kspv7YS2_sendMessage);
}

void Heavy_Echomatica::cBinop_kspv7YS2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_uUTR0rMm_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0A7cAgGG_sendMessage);
}

void Heavy_Echomatica::cCast_uUTR0rMm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PcrP7SDs, HV_BINOP_POW, 1, m, &cBinop_PcrP7SDs_sendMessage);
}

void Heavy_Echomatica::cCast_0A7cAgGG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QPBFcMrm_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_QPBFcMrm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_PcrP7SDs, HV_BINOP_POW, 0, m, &cBinop_PcrP7SDs_sendMessage);
}

void Heavy_Echomatica::cBinop_PcrP7SDs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_47dfVqlw_sendMessage);
}

void Heavy_Echomatica::cIf_3PdEF57q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_Z5vCMXpT, HV_BINOP_SUBTRACT, 0, m, &cBinop_Z5vCMXpT_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_zi3qYBUD, HV_BINOP_SUBTRACT, 0, m, &cBinop_zi3qYBUD_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_iu6ubLwk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_3PdEF57q, 1, m, &cIf_3PdEF57q_sendMessage);
}

void Heavy_Echomatica::cVar_b8VFlYSG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_NFAiic8U_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_S2DIhrlO_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_h1dSJgZ1_sendMessage);
}

void Heavy_Echomatica::cVar_YCv79qMM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_8sVzuZ0F_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HwpybTRB_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_rMnaaBM9_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_eXooaHxO, 0, m, &cSlice_eXooaHxO_sendMessage);
      break;
    }
    default: {
      cSwitchcase_8FeWKI7D_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_eXooaHxO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_PP10vhwg_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_PP10vhwg_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_oCBxxC7a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_PP10vhwg_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_PP10vhwg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_GnIUoy7N_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_8FeWKI7D_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_8MLhB1mt, 0, m, &cSlice_8MLhB1mt_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_8MLhB1mt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_mbJ3ZVvO_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_mbJ3ZVvO_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_3xBi906c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_mbJ3ZVvO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_mbJ3ZVvO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_J0Hei47D_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_HwpybTRB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_7CVb86y6, 0, m, &cVar_7CVb86y6_sendMessage);
}

void Heavy_Echomatica::cCast_8sVzuZ0F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_I0QZglAY, HV_BINOP_DIVIDE, 1, m, &cBinop_I0QZglAY_sendMessage);
}

void Heavy_Echomatica::cBinop_I0QZglAY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Gkef019m, HV_BINOP_ADD, 0, m, &cBinop_Gkef019m_sendMessage);
}

void Heavy_Echomatica::cBinop_zi3qYBUD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_7CVb86y6, 0, m, &cVar_7CVb86y6_sendMessage);
}

void Heavy_Echomatica::cCast_NFAiic8U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_KafRqlX1_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_EOxiK7Gi_sendMessage);
}

void Heavy_Echomatica::cCast_S2DIhrlO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iu6ubLwk, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_iu6ubLwk_sendMessage);
}

void Heavy_Echomatica::cCast_h1dSJgZ1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9d1EK1iT, 0, m, &cVar_9d1EK1iT_sendMessage);
}

void Heavy_Echomatica::cBinop_Gkef019m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Z5vCMXpT, HV_BINOP_SUBTRACT, 0, m, &cBinop_Z5vCMXpT_sendMessage);
}

void Heavy_Echomatica::cCast_pb6UnPR8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YCv79qMM, 0, m, &cVar_YCv79qMM_sendMessage);
}

void Heavy_Echomatica::cCast_6Xjblqoe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_b8VFlYSG, 0, m, &cVar_b8VFlYSG_sendMessage);
}

void Heavy_Echomatica::cCast_ousIxEKd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Z5vCMXpT, HV_BINOP_SUBTRACT, 1, m, &cBinop_Z5vCMXpT_sendMessage);
}

void Heavy_Echomatica::cCast_MCuksvRw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9d1EK1iT, 0, m, &cVar_9d1EK1iT_sendMessage);
}

void Heavy_Echomatica::cBinop_47dfVqlw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xL2zHC2K_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_EOxiK7Gi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zi3qYBUD, HV_BINOP_SUBTRACT, 1, m, &cBinop_zi3qYBUD_sendMessage);
}

void Heavy_Echomatica::cCast_KafRqlX1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Gkef019m, HV_BINOP_ADD, 1, m, &cBinop_Gkef019m_sendMessage);
}

void Heavy_Echomatica::cBinop_ir6aWp9h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ousIxEKd_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_MCuksvRw_sendMessage);
}

void Heavy_Echomatica::cMsg_xL2zHC2K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_fjUyzYnR, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_Sk31Ipvm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_BZtXT8Nw_sendMessage);
}

void Heavy_Echomatica::cBinop_BZtXT8Nw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_byDyah3J_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_MTslqFHU_sendMessage);
}

void Heavy_Echomatica::cVar_oZyydMGF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_195vtHwU_sendMessage);
}

void Heavy_Echomatica::cMsg_vZlt6Rii_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_a6bSfbal_sendMessage);
}

void Heavy_Echomatica::cSystem_a6bSfbal_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_v3zxtAtU, HV_BINOP_DIVIDE, 1, m, &cBinop_v3zxtAtU_sendMessage);
}

void Heavy_Echomatica::cBinop_byDyah3J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_Q2XAOnpC_sendMessage);
}

void Heavy_Echomatica::cBinop_Q2XAOnpC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_XZqKMdgF, m);
}

void Heavy_Echomatica::cMsg_595z3oIR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_87FHj2Yk_sendMessage);
}

void Heavy_Echomatica::cBinop_87FHj2Yk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_Sk31Ipvm_sendMessage);
}

void Heavy_Echomatica::cBinop_MTslqFHU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_se3DLVtm, m);
}

void Heavy_Echomatica::cBinop_195vtHwU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_1tCO8eUJ_sendMessage);
}

void Heavy_Echomatica::cBinop_1tCO8eUJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_v3zxtAtU, HV_BINOP_DIVIDE, 0, m, &cBinop_v3zxtAtU_sendMessage);
}

void Heavy_Echomatica::cBinop_v3zxtAtU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_595z3oIR_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_3VymcY2T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cyHFbsUd, HV_BINOP_DIVIDE, 0, m, &cBinop_cyHFbsUd_sendMessage);
}

void Heavy_Echomatica::cVar_FWAoVFJT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0kGDwWTC, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_0kGDwWTC_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_VfQycWva, 0, m, &cIf_VfQycWva_sendMessage);
}

void Heavy_Echomatica::sEnv_u9so36cG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_vfO2VluZ_sendMessage);
}

void Heavy_Echomatica::cBinop_MrZgZlYu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_ckx58jWP_sendMessage);
}

void Heavy_Echomatica::cBinop_ckx58jWP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TPP7Gb6W_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_esOnY9IZ_sendMessage);
}

void Heavy_Echomatica::cCast_esOnY9IZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rHtrFIfH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_TPP7Gb6W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_38DC2TPJ, HV_BINOP_POW, 1, m, &cBinop_38DC2TPJ_sendMessage);
}

void Heavy_Echomatica::cMsg_rHtrFIfH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_38DC2TPJ, HV_BINOP_POW, 0, m, &cBinop_38DC2TPJ_sendMessage);
}

void Heavy_Echomatica::cBinop_38DC2TPJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_hKpBqRFW_sendMessage);
}

void Heavy_Echomatica::cIf_VfQycWva_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_MrZgZlYu, HV_BINOP_SUBTRACT, 0, m, &cBinop_MrZgZlYu_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_jdkygP5N, HV_BINOP_SUBTRACT, 0, m, &cBinop_jdkygP5N_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_0kGDwWTC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_VfQycWva, 1, m, &cIf_VfQycWva_sendMessage);
}

void Heavy_Echomatica::cVar_ijnWWc9o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Dt75Ugfw_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ttjpAYcO_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cuAO2zFG_sendMessage);
}

void Heavy_Echomatica::cVar_vkfYajQQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VbsGDidK_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0ELhOSgd_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_JQoP6uvk_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_0csQ3Uor, 0, m, &cSlice_0csQ3Uor_sendMessage);
      break;
    }
    default: {
      cSwitchcase_8fvKeKoX_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_0csQ3Uor_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_QsuPxNqn_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_QsuPxNqn_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_cw0v1Jvw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_QsuPxNqn_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_QsuPxNqn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_8lSeKS84_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_8fvKeKoX_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_RHHDZbXu, 0, m, &cSlice_RHHDZbXu_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_RHHDZbXu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_YQM0wQ0D_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_YQM0wQ0D_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_OIDvSzvM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_YQM0wQ0D_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_YQM0wQ0D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_fLYUttuq_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_VbsGDidK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cyHFbsUd, HV_BINOP_DIVIDE, 1, m, &cBinop_cyHFbsUd_sendMessage);
}

void Heavy_Echomatica::cCast_0ELhOSgd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3VymcY2T, 0, m, &cVar_3VymcY2T_sendMessage);
}

void Heavy_Echomatica::cBinop_cyHFbsUd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SZvAiPvF, HV_BINOP_ADD, 0, m, &cBinop_SZvAiPvF_sendMessage);
}

void Heavy_Echomatica::cBinop_jdkygP5N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3VymcY2T, 0, m, &cVar_3VymcY2T_sendMessage);
}

void Heavy_Echomatica::cCast_Dt75Ugfw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_MG3G44RN_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_llyJAz6x_sendMessage);
}

void Heavy_Echomatica::cCast_cuAO2zFG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FWAoVFJT, 0, m, &cVar_FWAoVFJT_sendMessage);
}

void Heavy_Echomatica::cCast_ttjpAYcO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0kGDwWTC, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_0kGDwWTC_sendMessage);
}

void Heavy_Echomatica::cBinop_SZvAiPvF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MrZgZlYu, HV_BINOP_SUBTRACT, 0, m, &cBinop_MrZgZlYu_sendMessage);
}

void Heavy_Echomatica::cCast_xqAz4xVu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ijnWWc9o, 0, m, &cVar_ijnWWc9o_sendMessage);
}

void Heavy_Echomatica::cCast_TuPhFZBC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vkfYajQQ, 0, m, &cVar_vkfYajQQ_sendMessage);
}

void Heavy_Echomatica::cCast_UUmECiVM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MrZgZlYu, HV_BINOP_SUBTRACT, 1, m, &cBinop_MrZgZlYu_sendMessage);
}

void Heavy_Echomatica::cCast_4IwIyc8k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FWAoVFJT, 0, m, &cVar_FWAoVFJT_sendMessage);
}

void Heavy_Echomatica::cBinop_hKpBqRFW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xEt5b4vN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_MG3G44RN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SZvAiPvF, HV_BINOP_ADD, 1, m, &cBinop_SZvAiPvF_sendMessage);
}

void Heavy_Echomatica::cCast_llyJAz6x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jdkygP5N, HV_BINOP_SUBTRACT, 1, m, &cBinop_jdkygP5N_sendMessage);
}

void Heavy_Echomatica::cBinop_vfO2VluZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_UUmECiVM_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4IwIyc8k_sendMessage);
}

void Heavy_Echomatica::cMsg_xEt5b4vN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_A6EAOQGx, 0, m, NULL);
}

void Heavy_Echomatica::cVar_71Jy1nCX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gvylopt0, HV_BINOP_MULTIPLY, 0, m, &cBinop_gvylopt0_sendMessage);
}

void Heavy_Echomatica::cMsg_aw112pSl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_auKWxxIU_sendMessage);
}

void Heavy_Echomatica::cSystem_auKWxxIU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FL6ADY3Z_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_gvylopt0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_9cxL18sX_sendMessage);
}

void Heavy_Echomatica::cBinop_nk5oqraY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gvylopt0, HV_BINOP_MULTIPLY, 1, m, &cBinop_gvylopt0_sendMessage);
}

void Heavy_Echomatica::cMsg_FL6ADY3Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_nk5oqraY_sendMessage);
}

void Heavy_Echomatica::cBinop_9cxL18sX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_46w0xFa8_sendMessage);
}

void Heavy_Echomatica::cBinop_46w0xFa8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_RIf64QQn_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_2UWsYz3g, m);
}

void Heavy_Echomatica::cBinop_RIf64QQn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_1ok2bNM8, m);
}

void Heavy_Echomatica::cVar_JQRYW8D1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EMRbu90f, HV_BINOP_MULTIPLY, 0, m, &cBinop_EMRbu90f_sendMessage);
}

void Heavy_Echomatica::cMsg_G9QEKn73_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_m2ERiDD4_sendMessage);
}

void Heavy_Echomatica::cSystem_m2ERiDD4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wtD8CbNW_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_EMRbu90f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_NtDFAQ4H_sendMessage);
}

void Heavy_Echomatica::cBinop_0jfmcrJH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EMRbu90f, HV_BINOP_MULTIPLY, 1, m, &cBinop_EMRbu90f_sendMessage);
}

void Heavy_Echomatica::cMsg_wtD8CbNW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_0jfmcrJH_sendMessage);
}

void Heavy_Echomatica::cBinop_NtDFAQ4H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_YbPkvpk1_sendMessage);
}

void Heavy_Echomatica::cBinop_YbPkvpk1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_YiqbybXU_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_G5kSomrL, m);
}

void Heavy_Echomatica::cBinop_YiqbybXU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_9COn9nbN, m);
}

void Heavy_Echomatica::cBinop_6VbRxXe7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_7zEOlSJ5_sendMessage);
}

void Heavy_Echomatica::cBinop_7zEOlSJ5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_ELSNGaMt_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_ICOFKwae_sendMessage);
}

void Heavy_Echomatica::cVar_dBtw7vQ8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_AKFz4nt2_sendMessage);
}

void Heavy_Echomatica::cMsg_ClXvG3gd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_DnDQraIK_sendMessage);
}

void Heavy_Echomatica::cSystem_DnDQraIK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nu019zEU, HV_BINOP_DIVIDE, 1, m, &cBinop_nu019zEU_sendMessage);
}

void Heavy_Echomatica::cBinop_ELSNGaMt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_HoATUNtk_sendMessage);
}

void Heavy_Echomatica::cBinop_HoATUNtk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Be67nMHP, m);
}

void Heavy_Echomatica::cMsg_JCVC9plN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_UCLQzCY3_sendMessage);
}

void Heavy_Echomatica::cBinop_UCLQzCY3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_6VbRxXe7_sendMessage);
}

void Heavy_Echomatica::cBinop_ICOFKwae_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_NDUUqI5Y, m);
}

void Heavy_Echomatica::cBinop_AKFz4nt2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_KHveFAXk_sendMessage);
}

void Heavy_Echomatica::cBinop_KHveFAXk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nu019zEU, HV_BINOP_DIVIDE, 0, m, &cBinop_nu019zEU_sendMessage);
}

void Heavy_Echomatica::cBinop_nu019zEU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JCVC9plN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_DHasb3K2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_5oY4WUvn_sendMessage);
}

void Heavy_Echomatica::cBinop_5oY4WUvn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_tPywTX8K_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_UmlSJjOy_sendMessage);
}

void Heavy_Echomatica::cVar_4cdMJhg7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_6uh2NqDY_sendMessage);
}

void Heavy_Echomatica::cMsg_M9y99SFX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BdYGcoGU_sendMessage);
}

void Heavy_Echomatica::cSystem_BdYGcoGU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mlm83aMt, HV_BINOP_DIVIDE, 1, m, &cBinop_mlm83aMt_sendMessage);
}

void Heavy_Echomatica::cBinop_tPywTX8K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_Ba0JbeHE_sendMessage);
}

void Heavy_Echomatica::cBinop_Ba0JbeHE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Lk2l68VT, m);
}

void Heavy_Echomatica::cMsg_KxKIJZZ2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_8WMtKtGE_sendMessage);
}

void Heavy_Echomatica::cBinop_8WMtKtGE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_DHasb3K2_sendMessage);
}

void Heavy_Echomatica::cBinop_UmlSJjOy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_6vXy2TJA, m);
}

void Heavy_Echomatica::cBinop_6uh2NqDY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_AXqJp3OA_sendMessage);
}

void Heavy_Echomatica::cBinop_AXqJp3OA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mlm83aMt, HV_BINOP_DIVIDE, 0, m, &cBinop_mlm83aMt_sendMessage);
}

void Heavy_Echomatica::cBinop_mlm83aMt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KxKIJZZ2_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_wdGr6rs8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_NlpusD38_sendMessage);
}

void Heavy_Echomatica::cSystem_NlpusD38_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_zkBWbEHE_sendMessage);
}

void Heavy_Echomatica::cDelay_kouQK48Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_kouQK48Y, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_spCeXzaz, 0, m, &cDelay_spCeXzaz_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_kouQK48Y, 0, m, &cDelay_kouQK48Y_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_azqLx5IQ, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_spCeXzaz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_spCeXzaz, m);
  cMsg_fnjPwMm1_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_Sr3n9ev8_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_gbbX0xqy_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_BnteqDLZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_MFDfK8HP_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_m55vYkAO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GjHCPJAA_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_kouQK48Y, 2, m, &cDelay_kouQK48Y_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UiZ4dHbC_sendMessage);
}

void Heavy_Echomatica::cMsg_MFDfK8HP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_m55vYkAO, 0, m, &hTable_m55vYkAO_sendMessage);
}

void Heavy_Echomatica::cBinop_zkBWbEHE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_BnteqDLZ_sendMessage);
}

void Heavy_Echomatica::cMsg_fnjPwMm1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_m55vYkAO, 0, m, &hTable_m55vYkAO_sendMessage);
}

void Heavy_Echomatica::cCast_UiZ4dHbC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_kouQK48Y, 0, m, &cDelay_kouQK48Y_sendMessage);
}

void Heavy_Echomatica::cMsg_GjHCPJAA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_spCeXzaz, 2, m, &cDelay_spCeXzaz_sendMessage);
}

void Heavy_Echomatica::cMsg_gbbX0xqy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_azqLx5IQ, 1, m, NULL);
}

void Heavy_Echomatica::cVar_rmC0pcpE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_4OscoNMN, 0, m, &cPack_4OscoNMN_sendMessage);
}

void Heavy_Echomatica::cVar_JsZaDDzv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_wpnyWgYs, 0, m, &cPack_wpnyWgYs_sendMessage);
}

void Heavy_Echomatica::cVar_lvN8ky1E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_3uQqD97w_sendMessage);
  cSwitchcase_DMKapvJi_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_3uQqD97w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_lvN8ky1E, 1, m, &cVar_lvN8ky1E_sendMessage);
}

void Heavy_Echomatica::cVar_rYMBHGZT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_4Q7rVNmX, 0, m, &cPack_4Q7rVNmX_sendMessage);
}

void Heavy_Echomatica::cBinop_khubHl31_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_o4uPRXUn_sendMessage);
}

void Heavy_Echomatica::cBinop_o4uPRXUn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_bre8M9lh_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_pblt90YW_sendMessage);
}

void Heavy_Echomatica::cVar_kRDwWnMm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_J8hvj3Rm_sendMessage);
}

void Heavy_Echomatica::cMsg_JqUkKkJV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_m3gVNSnd_sendMessage);
}

void Heavy_Echomatica::cSystem_m3gVNSnd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OdjoPLuP, HV_BINOP_DIVIDE, 1, m, &cBinop_OdjoPLuP_sendMessage);
}

void Heavy_Echomatica::cBinop_bre8M9lh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_IPmpSrUO_sendMessage);
}

void Heavy_Echomatica::cBinop_IPmpSrUO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_TlqZ9JVE, m);
}

void Heavy_Echomatica::cMsg_ZEvBz1gF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_3Zvkb759_sendMessage);
}

void Heavy_Echomatica::cBinop_3Zvkb759_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_khubHl31_sendMessage);
}

void Heavy_Echomatica::cBinop_pblt90YW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_tDUBxMYG, m);
}

void Heavy_Echomatica::cBinop_J8hvj3Rm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_TfFMzUAK_sendMessage);
}

void Heavy_Echomatica::cBinop_TfFMzUAK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OdjoPLuP, HV_BINOP_DIVIDE, 0, m, &cBinop_OdjoPLuP_sendMessage);
}

void Heavy_Echomatica::cBinop_OdjoPLuP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ZEvBz1gF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_zu0Id5bg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_PzcQtYoY_sendMessage);
}

void Heavy_Echomatica::cBinop_PzcQtYoY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_QIh1usKQ_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_ou5g7o4E_sendMessage);
}

void Heavy_Echomatica::cVar_F7JKOt55_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_C2IoucF3_sendMessage);
}

void Heavy_Echomatica::cMsg_dZQBGDCN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_vNN0h0XP_sendMessage);
}

void Heavy_Echomatica::cSystem_vNN0h0XP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gZvghTuy, HV_BINOP_DIVIDE, 1, m, &cBinop_gZvghTuy_sendMessage);
}

void Heavy_Echomatica::cBinop_QIh1usKQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_0AwBAi8Q_sendMessage);
}

void Heavy_Echomatica::cBinop_0AwBAi8Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ZsO3Jbwh, m);
}

void Heavy_Echomatica::cMsg_DjUssm1n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_dElS5pnT_sendMessage);
}

void Heavy_Echomatica::cBinop_dElS5pnT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_zu0Id5bg_sendMessage);
}

void Heavy_Echomatica::cBinop_ou5g7o4E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_zZkoTcjX, m);
}

void Heavy_Echomatica::cBinop_C2IoucF3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_aWG8KUsW_sendMessage);
}

void Heavy_Echomatica::cBinop_aWG8KUsW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gZvghTuy, HV_BINOP_DIVIDE, 0, m, &cBinop_gZvghTuy_sendMessage);
}

void Heavy_Echomatica::cBinop_gZvghTuy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DjUssm1n_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_d7Mj0YWk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_OwgDGlPx_sendMessage);
}

void Heavy_Echomatica::cBinop_OwgDGlPx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_FrU7zPLl_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_GzoJnHnH_sendMessage);
}

void Heavy_Echomatica::cVar_Samx1kia_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_vSnD1Dau_sendMessage);
}

void Heavy_Echomatica::cMsg_LnMtXqzg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_u6KwS3RJ_sendMessage);
}

void Heavy_Echomatica::cSystem_u6KwS3RJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZfZxYlS8, HV_BINOP_DIVIDE, 1, m, &cBinop_ZfZxYlS8_sendMessage);
}

void Heavy_Echomatica::cBinop_FrU7zPLl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_qFaeyfw8_sendMessage);
}

void Heavy_Echomatica::cBinop_qFaeyfw8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_alU2NAWZ, m);
}

void Heavy_Echomatica::cMsg_7bF9w2AL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_OlRM7VmK_sendMessage);
}

void Heavy_Echomatica::cBinop_OlRM7VmK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_d7Mj0YWk_sendMessage);
}

void Heavy_Echomatica::cBinop_GzoJnHnH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_eEUsdCis, m);
}

void Heavy_Echomatica::cBinop_vSnD1Dau_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_tT5E7XkU_sendMessage);
}

void Heavy_Echomatica::cBinop_tT5E7XkU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZfZxYlS8, HV_BINOP_DIVIDE, 0, m, &cBinop_ZfZxYlS8_sendMessage);
}

void Heavy_Echomatica::cBinop_ZfZxYlS8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7bF9w2AL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_oz2kESQV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JCEgJy8i, HV_BINOP_MULTIPLY, 0, m, &cBinop_JCEgJy8i_sendMessage);
}

void Heavy_Echomatica::cMsg_hJyt0Z3S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_sjjpETwJ_sendMessage);
}

void Heavy_Echomatica::cSystem_sjjpETwJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_s6ncKdkC_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_JCEgJy8i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_RAQvz1sw_sendMessage);
}

void Heavy_Echomatica::cBinop_papx9DoK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JCEgJy8i, HV_BINOP_MULTIPLY, 1, m, &cBinop_JCEgJy8i_sendMessage);
}

void Heavy_Echomatica::cMsg_s6ncKdkC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_papx9DoK_sendMessage);
}

void Heavy_Echomatica::cBinop_RAQvz1sw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_dEo1U7Ed_sendMessage);
}

void Heavy_Echomatica::cBinop_dEo1U7Ed_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_xkyevOEf_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_SKrpfxxb, m);
}

void Heavy_Echomatica::cBinop_xkyevOEf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_7Q1HP9H1, m);
}

void Heavy_Echomatica::cVar_g1TuieG9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_d45q052I, HV_BINOP_MULTIPLY, 0, m, &cBinop_d45q052I_sendMessage);
}

void Heavy_Echomatica::cMsg_kWQ4rXYn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Am8QqhOC_sendMessage);
}

void Heavy_Echomatica::cSystem_Am8QqhOC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YQelSQah_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_d45q052I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_EZT5khJ9_sendMessage);
}

void Heavy_Echomatica::cBinop_p77O7kiF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_d45q052I, HV_BINOP_MULTIPLY, 1, m, &cBinop_d45q052I_sendMessage);
}

void Heavy_Echomatica::cMsg_YQelSQah_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_p77O7kiF_sendMessage);
}

void Heavy_Echomatica::cBinop_EZT5khJ9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_iv1N1Swu_sendMessage);
}

void Heavy_Echomatica::cBinop_iv1N1Swu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_9k5xtkwI_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_1jT3SfgP, m);
}

void Heavy_Echomatica::cBinop_9k5xtkwI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_fjDHU3va, m);
}

void Heavy_Echomatica::cVar_0kqoIrDF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SVcFY6Ci, HV_BINOP_MULTIPLY, 0, m, &cBinop_SVcFY6Ci_sendMessage);
}

void Heavy_Echomatica::cMsg_1QsJjuyw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_6cnKjsm8_sendMessage);
}

void Heavy_Echomatica::cSystem_6cnKjsm8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zpPkNphk_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_SVcFY6Ci_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_hCJUcYKr_sendMessage);
}

void Heavy_Echomatica::cBinop_VO2g7tcB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SVcFY6Ci, HV_BINOP_MULTIPLY, 1, m, &cBinop_SVcFY6Ci_sendMessage);
}

void Heavy_Echomatica::cMsg_zpPkNphk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_VO2g7tcB_sendMessage);
}

void Heavy_Echomatica::cBinop_hCJUcYKr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_lYN9RESf_sendMessage);
}

void Heavy_Echomatica::cBinop_lYN9RESf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_2dZwbrMW_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_TLULYrlF, m);
}

void Heavy_Echomatica::cBinop_2dZwbrMW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_N1WO6cQL, m);
}

void Heavy_Echomatica::cMsg_ebDyCAxB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Ygaa2SKQ_sendMessage);
}

void Heavy_Echomatica::cSystem_Ygaa2SKQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sfEGriam, HV_BINOP_DIVIDE, 1, m, &cBinop_sfEGriam_sendMessage);
}

void Heavy_Echomatica::cVar_euJFzSsm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_K4bK4lZT_sendMessage);
}

void Heavy_Echomatica::cVar_xiuB3Ge8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.001f, 0, m, &cBinop_ySBOnLh7_sendMessage);
}

void Heavy_Echomatica::cUnop_qILDaONb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_Pmgaljjl_sendMessage);
}

void Heavy_Echomatica::cBinop_sfEGriam_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ipfxEYS3, HV_BINOP_MULTIPLY, 1, m, &cBinop_ipfxEYS3_sendMessage);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_qILDaONb_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_l4VjB6G1, HV_BINOP_DIVIDE, 0, m, &cBinop_l4VjB6G1_sendMessage);
}

void Heavy_Echomatica::cBinop_K4bK4lZT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sfEGriam, HV_BINOP_DIVIDE, 0, m, &cBinop_sfEGriam_sendMessage);
}

void Heavy_Echomatica::cBinop_l4VjB6G1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_QFo9nmzh_sendMessage);
}

void Heavy_Echomatica::cBinop_rJPCMvra_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_vdn2ZooY_sendMessage);
}

void Heavy_Echomatica::cBinop_vdn2ZooY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_15Qshfjd_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_FTAFjPZ7, HV_BINOP_MULTIPLY, 0, m, &cBinop_FTAFjPZ7_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ipfxEYS3, HV_BINOP_MULTIPLY, 0, m, &cBinop_ipfxEYS3_sendMessage);
}

void Heavy_Echomatica::cBinop_Pmgaljjl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FTAFjPZ7, HV_BINOP_MULTIPLY, 1, m, &cBinop_FTAFjPZ7_sendMessage);
}

void Heavy_Echomatica::cBinop_FTAFjPZ7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_NWK8w8Pm_sendMessage);
}

void Heavy_Echomatica::cCast_6g6ZNdIT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_euJFzSsm, 0, m, &cVar_euJFzSsm_sendMessage);
}

void Heavy_Echomatica::cBinop_P5nXXYPX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_w3bbZx4A_sendMessage);
}

void Heavy_Echomatica::cBinop_w3bbZx4A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_VaXPBNXi, 5, m);
}

void Heavy_Echomatica::cBinop_NWK8w8Pm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_VaXPBNXi, 4, m);
}

void Heavy_Echomatica::cBinop_x9X1HdRA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ch244tia, HV_BINOP_MULTIPLY, 0, m, &cBinop_ch244tia_sendMessage);
}

void Heavy_Echomatica::cBinop_ipfxEYS3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aH4IxUOr, HV_BINOP_ADD, 1, m, &cBinop_aH4IxUOr_sendMessage);
}

void Heavy_Echomatica::cBinop_15Qshfjd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_P5nXXYPX_sendMessage);
}

void Heavy_Echomatica::cBinop_aH4IxUOr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ch244tia, HV_BINOP_MULTIPLY, 1, m, &cBinop_ch244tia_sendMessage);
}

void Heavy_Echomatica::cBinop_ch244tia_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_VaXPBNXi, 1, m);
}

void Heavy_Echomatica::cBinop_ySBOnLh7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_l4VjB6G1, HV_BINOP_DIVIDE, 1, m, &cBinop_l4VjB6G1_sendMessage);
}

void Heavy_Echomatica::cBinop_QFo9nmzh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_rJPCMvra_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_aH4IxUOr, HV_BINOP_ADD, 0, m, &cBinop_aH4IxUOr_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_x9X1HdRA_sendMessage);
}

void Heavy_Echomatica::cBinop_ovlYD0lr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_FKSumFkj_sendMessage);
}

void Heavy_Echomatica::cBinop_FKSumFkj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_sxiLr8dM_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_XkXDrtPa_sendMessage);
}

void Heavy_Echomatica::cVar_GlPDJxgY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_3v3ZKGBZ_sendMessage);
}

void Heavy_Echomatica::cMsg_7fy3GrqS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Mdlc0ATs_sendMessage);
}

void Heavy_Echomatica::cSystem_Mdlc0ATs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_X0xPddad, HV_BINOP_DIVIDE, 1, m, &cBinop_X0xPddad_sendMessage);
}

void Heavy_Echomatica::cBinop_sxiLr8dM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_8X9nfGMK_sendMessage);
}

void Heavy_Echomatica::cBinop_8X9nfGMK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_8aUHwMQg, m);
}

void Heavy_Echomatica::cMsg_CFu1o5Om_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_rKaCVSUJ_sendMessage);
}

void Heavy_Echomatica::cBinop_rKaCVSUJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_ovlYD0lr_sendMessage);
}

void Heavy_Echomatica::cBinop_XkXDrtPa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_yfspzzgt, m);
}

void Heavy_Echomatica::cBinop_3v3ZKGBZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_knoehBT7_sendMessage);
}

void Heavy_Echomatica::cBinop_knoehBT7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_X0xPddad, HV_BINOP_DIVIDE, 0, m, &cBinop_X0xPddad_sendMessage);
}

void Heavy_Echomatica::cBinop_X0xPddad_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CFu1o5Om_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_dZzEX5Jo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_NhB9qldl, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_Zw034NBh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_twVoqKIz, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_04EoEkwp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_uKnYIZ6a, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_YeUpjHl3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_2PY6hYHs, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_zZPOPpnh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Y7EqV7UN, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_5H8ll4YM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_xVgwQjoh_sendMessage);
}

void Heavy_Echomatica::cSystem_xVgwQjoh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5si4TPtQ, HV_BINOP_DIVIDE, 1, m, &cBinop_5si4TPtQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mAmk2gXk_sendMessage);
}

void Heavy_Echomatica::cUnop_CK4QSXpi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_nDIVoaw9_sendMessage);
}

void Heavy_Echomatica::cMsg_XApbVeqc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_CK4QSXpi_sendMessage);
}

void Heavy_Echomatica::cBinop_nDIVoaw9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5si4TPtQ, HV_BINOP_DIVIDE, 0, m, &cBinop_5si4TPtQ_sendMessage);
}

void Heavy_Echomatica::cCast_mAmk2gXk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XApbVeqc_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_5si4TPtQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ywKtlrR8, HV_BINOP_MULTIPLY, 1, m, &cBinop_ywKtlrR8_sendMessage);
}

void Heavy_Echomatica::cBinop_ywKtlrR8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mcml7w8d_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jqOxaEHN_sendMessage);
}

void Heavy_Echomatica::cUnop_lzJYLobx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_GU22TWmF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cUnop_lQRzKHA2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_bEjzufm0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_Bn2WNa7v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_TnIP4QDg_sendMessage);
}

void Heavy_Echomatica::cBinop_TnIP4QDg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ywKtlrR8, HV_BINOP_MULTIPLY, 0, m, &cBinop_ywKtlrR8_sendMessage);
}

void Heavy_Echomatica::cBinop_v8FQKxj6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_mpNLVCHL_sendMessage);
}

void Heavy_Echomatica::cBinop_mpNLVCHL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WjYXbnwR_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_mAUZs12v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ODTv16j6_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_6lABsgx4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QI3PrBJx, HV_BINOP_MULTIPLY, 1, m, &cBinop_QI3PrBJx_sendMessage);
}

void Heavy_Echomatica::cBinop_QI3PrBJx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5ZdBTTTt, HV_BINOP_ADD, 0, m, &cBinop_5ZdBTTTt_sendMessage);
}

void Heavy_Echomatica::cBinop_7sFyGUM6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5ZdBTTTt, HV_BINOP_ADD, 1, m, &cBinop_5ZdBTTTt_sendMessage);
}

void Heavy_Echomatica::cCast_ywvhB4Jn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_6lABsgx4_sendMessage);
}

void Heavy_Echomatica::cCast_xMnXMDYw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CUaiDwuZ, HV_BINOP_MULTIPLY, 1, m, &cBinop_CUaiDwuZ_sendMessage);
}

void Heavy_Echomatica::cCast_Tes7CiGj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_7sFyGUM6_sendMessage);
}

void Heavy_Echomatica::cBinop_CUaiDwuZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sWT6cu2F, HV_BINOP_MULTIPLY, 1, m, &cBinop_sWT6cu2F_sendMessage);
}

void Heavy_Echomatica::cBinop_5ZdBTTTt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NqmCxIHB, HV_BINOP_ADD, 0, m, &cBinop_NqmCxIHB_sendMessage);
}

void Heavy_Echomatica::cBinop_NqmCxIHB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CUaiDwuZ, HV_BINOP_MULTIPLY, 0, m, &cBinop_CUaiDwuZ_sendMessage);
}

void Heavy_Echomatica::cBinop_SHZbjdOg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mEVgXjh0, HV_BINOP_ADD, 1, m, &cBinop_mEVgXjh0_sendMessage);
}

void Heavy_Echomatica::cBinop_cU9fFZXI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zlnsgC9e, HV_BINOP_MULTIPLY, 1, m, &cBinop_zlnsgC9e_sendMessage);
}

void Heavy_Echomatica::cBinop_zlnsgC9e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mEVgXjh0, HV_BINOP_ADD, 0, m, &cBinop_mEVgXjh0_sendMessage);
}

void Heavy_Echomatica::cCast_JrSU8x8c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_cU9fFZXI_sendMessage);
}

void Heavy_Echomatica::cCast_yTSv5mWL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_aCAFLt68_sendMessage);
}

void Heavy_Echomatica::cCast_wCennvTQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_SHZbjdOg_sendMessage);
}

void Heavy_Echomatica::cBinop_P1YGG9JH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ju35qA2o, HV_BINOP_MULTIPLY, 1, m, &cBinop_Ju35qA2o_sendMessage);
}

void Heavy_Echomatica::cBinop_mEVgXjh0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_P1YGG9JH, HV_BINOP_MULTIPLY, 0, m, &cBinop_P1YGG9JH_sendMessage);
}

void Heavy_Echomatica::cBinop_aCAFLt68_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_P1YGG9JH, HV_BINOP_MULTIPLY, 1, m, &cBinop_P1YGG9JH_sendMessage);
}

void Heavy_Echomatica::cBinop_o4qmWyBs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nCtAMYbA, HV_BINOP_MULTIPLY, 1, m, &cBinop_nCtAMYbA_sendMessage);
}

void Heavy_Echomatica::cBinop_nCtAMYbA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gZrMpxog, HV_BINOP_ADD, 0, m, &cBinop_gZrMpxog_sendMessage);
}

void Heavy_Echomatica::cBinop_gZrMpxog_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mTdWkmsP, HV_BINOP_SUBTRACT, 0, m, &cBinop_mTdWkmsP_sendMessage);
}

void Heavy_Echomatica::cBinop_KRGG9q7k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gZrMpxog, HV_BINOP_ADD, 1, m, &cBinop_gZrMpxog_sendMessage);
}

void Heavy_Echomatica::cBinop_mTdWkmsP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dixsqqPL, HV_BINOP_MULTIPLY, 0, m, &cBinop_dixsqqPL_sendMessage);
}

void Heavy_Echomatica::cCast_45uYOePD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_KRGG9q7k_sendMessage);
}

void Heavy_Echomatica::cCast_yD19K5Mx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dixsqqPL, HV_BINOP_MULTIPLY, 1, m, &cBinop_dixsqqPL_sendMessage);
}

void Heavy_Echomatica::cCast_t3gMdnHy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_o4qmWyBs_sendMessage);
}

void Heavy_Echomatica::cBinop_dixsqqPL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mOqEF2g4, HV_BINOP_MULTIPLY, 1, m, &cBinop_mOqEF2g4_sendMessage);
}

void Heavy_Echomatica::cBinop_AasGmPhD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6gV08eBT, HV_BINOP_ADD, 1, m, &cBinop_6gV08eBT_sendMessage);
}

void Heavy_Echomatica::cBinop_6gV08eBT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_W6waSIvo_sendMessage);
}

void Heavy_Echomatica::cBinop_bltpOTQF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_nDBMh1qY_sendMessage);
}

void Heavy_Echomatica::cBinop_S1NUDCvZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6gV08eBT, HV_BINOP_ADD, 0, m, &cBinop_6gV08eBT_sendMessage);
}

void Heavy_Echomatica::cCast_C5n7UeTC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_bltpOTQF_sendMessage);
}

void Heavy_Echomatica::cCast_rtpPIOjz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_AasGmPhD_sendMessage);
}

void Heavy_Echomatica::cBinop_W6waSIvo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OE4l5EsW, HV_BINOP_MULTIPLY, 1, m, &cBinop_OE4l5EsW_sendMessage);
}

void Heavy_Echomatica::cBinop_nDBMh1qY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_S1NUDCvZ, HV_BINOP_MULTIPLY, 1, m, &cBinop_S1NUDCvZ_sendMessage);
}

void Heavy_Echomatica::cBinop_jf2mVK0o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_brM8lUk9_sendMessage);
}

void Heavy_Echomatica::cBinop_teWNz5Y8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KuUy2WWV, HV_BINOP_ADD, 0, m, &cBinop_KuUy2WWV_sendMessage);
}

void Heavy_Echomatica::cBinop_KuUy2WWV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LK6aivvF, HV_BINOP_SUBTRACT, 0, m, &cBinop_LK6aivvF_sendMessage);
}

void Heavy_Echomatica::cBinop_nAUp7niK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KuUy2WWV, HV_BINOP_ADD, 1, m, &cBinop_KuUy2WWV_sendMessage);
}

void Heavy_Echomatica::cCast_Npnc1zBl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_nAUp7niK_sendMessage);
}

void Heavy_Echomatica::cCast_Wleixtnq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_jf2mVK0o_sendMessage);
}

void Heavy_Echomatica::cBinop_LK6aivvF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vuSA4yOi, HV_BINOP_MULTIPLY, 1, m, &cBinop_vuSA4yOi_sendMessage);
}

void Heavy_Echomatica::cBinop_brM8lUk9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_teWNz5Y8, HV_BINOP_MULTIPLY, 1, m, &cBinop_teWNz5Y8_sendMessage);
}

void Heavy_Echomatica::cBinop_y22DpDgV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, -24.0f, 0, m, &cBinop_jwZk4cO9_sendMessage);
}

void Heavy_Echomatica::cBinop_jwZk4cO9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_NtwPPPyd_sendMessage);
}

void Heavy_Echomatica::cBinop_L0WbUl3t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_RnYvsNBS_sendMessage);
}

void Heavy_Echomatica::cBinop_fkSoRhLu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FwwwWUXO, HV_BINOP_ADD, 0, m, &cBinop_FwwwWUXO_sendMessage);
}

void Heavy_Echomatica::cBinop_FwwwWUXO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lay4ByVX, HV_BINOP_ADD, 0, m, &cBinop_lay4ByVX_sendMessage);
}

void Heavy_Echomatica::cBinop_naNEk6Zk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FwwwWUXO, HV_BINOP_ADD, 1, m, &cBinop_FwwwWUXO_sendMessage);
}

void Heavy_Echomatica::cCast_S8vvdtqH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_naNEk6Zk_sendMessage);
}

void Heavy_Echomatica::cCast_8cSIjLpZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_L0WbUl3t_sendMessage);
}

void Heavy_Echomatica::cBinop_lay4ByVX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mAUZs12v, 1, m, &cVar_mAUZs12v_sendMessage);
}

void Heavy_Echomatica::cBinop_RnYvsNBS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fkSoRhLu, HV_BINOP_MULTIPLY, 1, m, &cBinop_fkSoRhLu_sendMessage);
}

void Heavy_Echomatica::cVar_Fy7e3mHc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hwIsCthm_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_Bn2WNa7v_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Vpm0xVvg_sendMessage);
}

void Heavy_Echomatica::cVar_pXGBtI49_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_v8FQKxj6_sendMessage);
}

void Heavy_Echomatica::cVar_10Lfd2TW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 24.0f, 0, m, &cBinop_y22DpDgV_sendMessage);
}

void Heavy_Echomatica::cUnop_uoAbBieh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_elu213Sf_sendMessage);
}

void Heavy_Echomatica::cCast_jqOxaEHN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_lQRzKHA2_sendMessage);
}

void Heavy_Echomatica::cCast_mcml7w8d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_lzJYLobx_sendMessage);
}

void Heavy_Echomatica::cSend_GU22TWmF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_6N9xLBXI_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_bEjzufm0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Jj8yv0S5_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_2INW8DjH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cMsg_WjYXbnwR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_bhV3nYFP_sendMessage);
}

void Heavy_Echomatica::cBinop_bhV3nYFP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NrLOzJAa, HV_BINOP_MULTIPLY, 1, m, &cBinop_NrLOzJAa_sendMessage);
}

void Heavy_Echomatica::cBinop_NrLOzJAa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_fLoLjszd_sendMessage);
}

void Heavy_Echomatica::cBinop_fLoLjszd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fPyq1bJg_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LkmSiwKx_sendMessage);
}

void Heavy_Echomatica::cMsg_ODTv16j6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_wy1Gwd9v_sendMessage);
}

void Heavy_Echomatica::cBinop_wy1Gwd9v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yt53KJ4G_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4bC7cZkk_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1pvZjvEj_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7GBXvqaD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XRmq6tgT_sendMessage);
}

void Heavy_Echomatica::cBinop_sWT6cu2F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dZzEX5Jo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_Ju35qA2o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Zw034NBh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_mOqEF2g4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_04EoEkwp_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_OE4l5EsW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YeUpjHl3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_vuSA4yOi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zZPOPpnh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_HJosnd8c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Fy7e3mHc, 0, m, &cVar_Fy7e3mHc_sendMessage);
}

void Heavy_Echomatica::cCast_DKHoePAb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_pXGBtI49, 1, m, &cVar_pXGBtI49_sendMessage);
}

void Heavy_Echomatica::cCast_Vpm0xVvg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mAUZs12v, 0, m, &cVar_mAUZs12v_sendMessage);
}

void Heavy_Echomatica::cCast_hwIsCthm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_pXGBtI49, 0, m, &cVar_pXGBtI49_sendMessage);
}

void Heavy_Echomatica::cSend_cT7QhRq7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_9yESnNH2_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_NtwPPPyd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_c6xvAKSc_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hQ5D8QMC_sendMessage);
}

void Heavy_Echomatica::cCast_c6xvAKSc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PeJeMFS0, HV_BINOP_POW, 1, m, &cBinop_PeJeMFS0_sendMessage);
}

void Heavy_Echomatica::cCast_hQ5D8QMC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zN6Lv6G0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_zN6Lv6G0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_PeJeMFS0, HV_BINOP_POW, 0, m, &cBinop_PeJeMFS0_sendMessage);
}

void Heavy_Echomatica::cBinop_PeJeMFS0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_uJGtwNpG_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4LL7lxYT_sendMessage);
}

void Heavy_Echomatica::cCast_UPQGj9cV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Fy7e3mHc, 0, m, &cVar_Fy7e3mHc_sendMessage);
}

void Heavy_Echomatica::cCast_72Zy3khH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_10Lfd2TW, 0, m, &cVar_10Lfd2TW_sendMessage);
}

void Heavy_Echomatica::cCast_0ZhE1nfy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Fy7e3mHc, 0, m, &cVar_Fy7e3mHc_sendMessage);
}

void Heavy_Echomatica::cCast_dzAMVsyG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_10Lfd2TW, 0, m, &cVar_10Lfd2TW_sendMessage);
}

void Heavy_Echomatica::cBinop_elu213Sf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_i4QUYR5j, HV_BINOP_MULTIPLY, 1, m, &cBinop_i4QUYR5j_sendMessage);
}

void Heavy_Echomatica::cBinop_i4QUYR5j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_DpXKMu8i_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_fPyq1bJg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_2INW8DjH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_LkmSiwKx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_i4QUYR5j, HV_BINOP_MULTIPLY, 0, m, &cBinop_i4QUYR5j_sendMessage);
}

void Heavy_Echomatica::cCast_1pvZjvEj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mOqEF2g4, HV_BINOP_MULTIPLY, 0, m, &cBinop_mOqEF2g4_sendMessage);
}

void Heavy_Echomatica::cCast_yt53KJ4G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vuSA4yOi, HV_BINOP_MULTIPLY, 0, m, &cBinop_vuSA4yOi_sendMessage);
}

void Heavy_Echomatica::cCast_XRmq6tgT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sWT6cu2F, HV_BINOP_MULTIPLY, 0, m, &cBinop_sWT6cu2F_sendMessage);
}

void Heavy_Echomatica::cCast_7GBXvqaD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ju35qA2o, HV_BINOP_MULTIPLY, 0, m, &cBinop_Ju35qA2o_sendMessage);
}

void Heavy_Echomatica::cCast_4bC7cZkk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OE4l5EsW, HV_BINOP_MULTIPLY, 0, m, &cBinop_OE4l5EsW_sendMessage);
}

void Heavy_Echomatica::cCast_4LL7lxYT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SQRT, m, &cUnop_uoAbBieh_sendMessage);
}

void Heavy_Echomatica::cCast_uJGtwNpG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_cT7QhRq7_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_DpXKMu8i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IPlT8mkd_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_Q5JWVGFy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_xmriBdTc_sendMessage);
}

void Heavy_Echomatica::cBinop_xmriBdTc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_S0iONTiV_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_VdbJ1R8b_sendMessage);
}

void Heavy_Echomatica::cVar_9koFn2WU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_dx2JON1V_sendMessage);
}

void Heavy_Echomatica::cMsg_ysitCBQn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_UEXgpOUE_sendMessage);
}

void Heavy_Echomatica::cSystem_UEXgpOUE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XPfl9Yyl, HV_BINOP_DIVIDE, 1, m, &cBinop_XPfl9Yyl_sendMessage);
}

void Heavy_Echomatica::cBinop_S0iONTiV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_20MzTGJq_sendMessage);
}

void Heavy_Echomatica::cBinop_20MzTGJq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_4JoJn54V, m);
}

void Heavy_Echomatica::cMsg_tGE3w9Xn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_XKCBVTEd_sendMessage);
}

void Heavy_Echomatica::cBinop_XKCBVTEd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_Q5JWVGFy_sendMessage);
}

void Heavy_Echomatica::cBinop_VdbJ1R8b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_8rl6p0u2, m);
}

void Heavy_Echomatica::cBinop_dx2JON1V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_nc58AOgC_sendMessage);
}

void Heavy_Echomatica::cBinop_nc58AOgC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XPfl9Yyl, HV_BINOP_DIVIDE, 0, m, &cBinop_XPfl9Yyl_sendMessage);
}

void Heavy_Echomatica::cBinop_XPfl9Yyl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tGE3w9Xn_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_5wiKKINA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QJS2wRHi, HV_BINOP_MULTIPLY, 0, m, &cBinop_QJS2wRHi_sendMessage);
}

void Heavy_Echomatica::cMsg_huit5EP6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BtP9q0em_sendMessage);
}

void Heavy_Echomatica::cSystem_BtP9q0em_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EF4ciRXG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_QJS2wRHi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_oPB8jlaz_sendMessage);
}

void Heavy_Echomatica::cBinop_pBTZkq9x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QJS2wRHi, HV_BINOP_MULTIPLY, 1, m, &cBinop_QJS2wRHi_sendMessage);
}

void Heavy_Echomatica::cMsg_EF4ciRXG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_pBTZkq9x_sendMessage);
}

void Heavy_Echomatica::cBinop_oPB8jlaz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_0Y9F74w0_sendMessage);
}

void Heavy_Echomatica::cBinop_0Y9F74w0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_izJpYBKL_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_CO8AlERX, m);
}

void Heavy_Echomatica::cBinop_izJpYBKL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_cbtykbmQ, m);
}

void Heavy_Echomatica::cSend_hROYStqK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_EFjHPnrV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_X2GNgjXm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_u08jHewH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_6eVrZJNd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_AvEdRpi0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_uE93Nsp9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_7nEvcOaG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_Ca7ZVmy6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_dz7qPftU_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_FmeXY8mT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ebsjQpYy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_Kqbdgn1u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_j4w5JEGp_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_3c0oXZny_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Iyf0ASLY_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_qS8PAsDn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Pw7NRJ45_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_nviMYKn6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_JLEaW9jT_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_e7PFHtEv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_eGB70Nji_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_A6T4Ssts_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_9Xwn0dRj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_ED1Tw9uE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_KUE9jY3f_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_p8gpfmD3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_1VjxrxFG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_OQE95mlE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_tn6J0CiS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_J2VzJvGS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_8dT7M7aK_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_VCJMvWYE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_8eMhT8aa_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_kgKsuo0p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_I2sHltMT_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_kOIYb4ET_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Jlcaycy3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_x7H1Cyy4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_tSlF2EG5_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_WP6HBS4o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Mleno4xn_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_R6DZCq03_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Fv8Z90YD_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_3fcMqTih_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_v1S81AsT_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_RFM3Q3Zg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_VUKHFd68_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_8xzC9qXk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_i8Zh0Wqo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_fuJUp0Sd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_9ooJmTGT_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_2rJHUSBA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_aUPCf3sj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_5htpcdMf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_9d9xnKuV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_6396bOkj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.01f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_x8bjNZ1R, 0, m, &cSlice_x8bjNZ1R_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4KnWp3kK, 0, m, &cSlice_4KnWp3kK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mH1qaEtY, 0, m, &cSlice_mH1qaEtY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Te66LhXO, 0, m, &cSlice_Te66LhXO_sendMessage);
}

void Heavy_Echomatica::cCast_cNYEGJ7z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6396bOkj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_bZqtR1Av_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8AaksWaO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_8AaksWaO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.2f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_x8bjNZ1R, 0, m, &cSlice_x8bjNZ1R_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4KnWp3kK, 0, m, &cSlice_4KnWp3kK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mH1qaEtY, 0, m, &cSlice_mH1qaEtY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Te66LhXO, 0, m, &cSlice_Te66LhXO_sendMessage);
}

void Heavy_Echomatica::cMsg_GWc03cAU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_fE99OeJV, HV_BINOP_MULTIPLY, 1, m, &cBinop_fE99OeJV_sendMessage);
}

void Heavy_Echomatica::cBinop_fE99OeJV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_tzKwdPHa_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_EVydlb1q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_pcaqmHKY, 0, m, &cVar_pcaqmHKY_sendMessage);
}

void Heavy_Echomatica::cMsg_3Ih5aEjb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_v5HY1wzt, 1, m, &cIf_v5HY1wzt_sendMessage);
}

void Heavy_Echomatica::cMsg_wRjTINWN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_v5HY1wzt, 1, m, &cIf_v5HY1wzt_sendMessage);
}

void Heavy_Echomatica::cSend_tzKwdPHa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_N79CVlmf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_7HoDbJ7F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_1HU99Vn5, 0, m, &cPack_1HU99Vn5_sendMessage);
}

void Heavy_Echomatica::cBinop_TtE08ZSS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_f8LOHdmo, 0, m, &cPack_f8LOHdmo_sendMessage);
}

void Heavy_Echomatica::cBinop_yJWN3QXE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_0MJsdY1r, 0, m, &cPack_0MJsdY1r_sendMessage);
}

void Heavy_Echomatica::cBinop_PwEjlfBc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Owy0BfDq, 0, m, &cPack_Owy0BfDq_sendMessage);
}

void Heavy_Echomatica::cBinop_6q2fcEyF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_lS7vxpJF, 0, m, &cPack_lS7vxpJF_sendMessage);
}

void Heavy_Echomatica::cBinop_F4T6Rn4q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_sB1GdJJa, 0, m, &cPack_sB1GdJJa_sendMessage);
}

void Heavy_Echomatica::cCast_LqVtbXkI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7HoDbJ7F, HV_BINOP_MULTIPLY, 1, m, &cBinop_7HoDbJ7F_sendMessage);
}

void Heavy_Echomatica::cCast_auVjOGE1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8Hg05fHO, 0, m, &cVar_8Hg05fHO_sendMessage);
}

void Heavy_Echomatica::cCast_2K1xkcXD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4is2papD, 0, m, &cVar_4is2papD_sendMessage);
}

void Heavy_Echomatica::cCast_XM1NFG5J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_F4T6Rn4q, HV_BINOP_MULTIPLY, 1, m, &cBinop_F4T6Rn4q_sendMessage);
}

void Heavy_Echomatica::cCast_k23uqdVn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_aYCWoSLW, 0, m, &cVar_aYCWoSLW_sendMessage);
}

void Heavy_Echomatica::cCast_HfNDfe2z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6q2fcEyF, HV_BINOP_MULTIPLY, 1, m, &cBinop_6q2fcEyF_sendMessage);
}

void Heavy_Echomatica::cCast_cuzjWCo6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_LxaVtsby, 0, m, &cVar_LxaVtsby_sendMessage);
}

void Heavy_Echomatica::cCast_Itu7t4GF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PwEjlfBc, HV_BINOP_MULTIPLY, 1, m, &cBinop_PwEjlfBc_sendMessage);
}

void Heavy_Echomatica::cCast_guhfjJpa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_pdtyxVyl, 0, m, &cVar_pdtyxVyl_sendMessage);
}

void Heavy_Echomatica::cCast_7SdMvuJP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yJWN3QXE, HV_BINOP_MULTIPLY, 1, m, &cBinop_yJWN3QXE_sendMessage);
}

void Heavy_Echomatica::cCast_bFFQw2al_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TtE08ZSS, HV_BINOP_MULTIPLY, 1, m, &cBinop_TtE08ZSS_sendMessage);
}

void Heavy_Echomatica::cCast_XLLWTqud_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bsApJFuw, 0, m, &cVar_bsApJFuw_sendMessage);
}

void Heavy_Echomatica::cBinop_6iHmOk1p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_E5FJAiDc_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_aKU5BDFO_sendMessage);
}

void Heavy_Echomatica::cMsg_0z1ri8kO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.5f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_6iHmOk1p, HV_BINOP_MULTIPLY, 1, m, &cBinop_6iHmOk1p_sendMessage);
}

void Heavy_Echomatica::cCast_xkMcVUNd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6iHmOk1p, HV_BINOP_MULTIPLY, 0, m, &cBinop_6iHmOk1p_sendMessage);
}

void Heavy_Echomatica::cCast_BAlB5sJK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0z1ri8kO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_qVUG54Qd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_FUbPaQqv, HV_BINOP_ADD, 1, m, &cBinop_FUbPaQqv_sendMessage);
}

void Heavy_Echomatica::cBinop_FUbPaQqv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_dWLIXALq, 0, m, &cVar_dWLIXALq_sendMessage);
}

void Heavy_Echomatica::cCast_E5FJAiDc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qVUG54Qd_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_aKU5BDFO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FUbPaQqv, HV_BINOP_ADD, 0, m, &cBinop_FUbPaQqv_sendMessage);
}

void Heavy_Echomatica::cCast_dqPZtltc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wRjTINWN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_ePfbj8CD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EVydlb1q_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_3aRdFq7U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GWc03cAU_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_BrAAwew3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fE99OeJV, HV_BINOP_MULTIPLY, 0, m, &cBinop_fE99OeJV_sendMessage);
}

void Heavy_Echomatica::cCast_FUuTCNq0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3Ih5aEjb_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_2ZIlwSat_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_dWLIXALq, 0, m, &cVar_dWLIXALq_sendMessage);
}

void Heavy_Echomatica::cCast_O1sq1RJL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GWc03cAU_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cReceive_QqjVnmaX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5H8ll4YM_sendMessage(_c, 0, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dzAMVsyG_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0ZhE1nfy_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_6bxJSJH1, 0, m, &cVar_6bxJSJH1_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_MIvotvbK, 0, m, &cVar_MIvotvbK_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_oCBxxC7a, 0, m, &cVar_oCBxxC7a_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_3xBi906c, 0, m, &cVar_3xBi906c_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_cw0v1Jvw, 0, m, &cVar_cw0v1Jvw_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_OIDvSzvM, 0, m, &cVar_OIDvSzvM_sendMessage);
  cMsg_GccAbcjZ_sendMessage(_c, 0, m);
  cMsg_2LSlpxos_sendMessage(_c, 0, m);
  cMsg_l3dBnHfH_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_CPl2falG, 0, m, &cVar_CPl2falG_sendMessage);
  cMsg_gKrOorEg_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_VXHKSj23, 0, m, &cVar_VXHKSj23_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jauNCPSi_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ttSSWSvz_sendMessage);
  cMsg_s9UGYu1f_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Of6XM2tX, 0, m, &cVar_Of6XM2tX_sendMessage);
  cMsg_0Cp8MQuH_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_dqLtr0Pm, 0, m, &cVar_dqLtr0Pm_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pb6UnPR8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6Xjblqoe_sendMessage);
  cMsg_vZlt6Rii_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_oZyydMGF, 0, m, &cVar_oZyydMGF_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TuPhFZBC_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xqAz4xVu_sendMessage);
  cMsg_aw112pSl_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_71Jy1nCX, 0, m, &cVar_71Jy1nCX_sendMessage);
  cMsg_G9QEKn73_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_JQRYW8D1, 0, m, &cVar_JQRYW8D1_sendMessage);
  cMsg_JqUkKkJV_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_kRDwWnMm, 0, m, &cVar_kRDwWnMm_sendMessage);
  cMsg_dZQBGDCN_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_F7JKOt55, 0, m, &cVar_F7JKOt55_sendMessage);
  cMsg_LnMtXqzg_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Samx1kia, 0, m, &cVar_Samx1kia_sendMessage);
  cMsg_hJyt0Z3S_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_oz2kESQV, 0, m, &cVar_oz2kESQV_sendMessage);
  cMsg_kWQ4rXYn_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_g1TuieG9, 0, m, &cVar_g1TuieG9_sendMessage);
  cMsg_1QsJjuyw_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_0kqoIrDF, 0, m, &cVar_0kqoIrDF_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_xiuB3Ge8, 0, m, &cVar_xiuB3Ge8_sendMessage);
  cMsg_ebDyCAxB_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_euJFzSsm, 0, m, &cVar_euJFzSsm_sendMessage);
  cMsg_7fy3GrqS_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_GlPDJxgY, 0, m, &cVar_GlPDJxgY_sendMessage);
  cMsg_Yll0OmfT_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Czv8sr0P, 0, m, &cVar_Czv8sr0P_sendMessage);
  cMsg_xn4GwjN3_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_uV24xN7j, 0, m, &cVar_uV24xN7j_sendMessage);
  cMsg_7fnHsV2O_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_S2bGtVkT, 0, m, &cVar_S2bGtVkT_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_OwuCfpm4, 0, m, &cVar_OwuCfpm4_sendMessage);
  cMsg_ClXvG3gd_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_dBtw7vQ8, 0, m, &cVar_dBtw7vQ8_sendMessage);
  cMsg_M9y99SFX_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_4cdMJhg7, 0, m, &cVar_4cdMJhg7_sendMessage);
  cMsg_wdGr6rs8_sendMessage(_c, 0, m);
  cMsg_ysitCBQn_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_9koFn2WU, 0, m, &cVar_9koFn2WU_sendMessage);
  cMsg_huit5EP6_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_5wiKKINA, 0, m, &cVar_5wiKKINA_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_9scEJLwS, 0, m, &cVar_9scEJLwS_sendMessage);
  cMsg_oV56hsRU_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_heZKMDad, 0, m, &cVar_heZKMDad_sendMessage);
  cMsg_H8Iru6ZO_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ZMBVbhlm, 0, m, &cVar_ZMBVbhlm_sendMessage);
  cMsg_JPg79Z7Z_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_O4aWVtuB, 0, m, &cVar_O4aWVtuB_sendMessage);
  cMsg_0zLjSn3u_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_L9e6zJzy, 0, m, &cVar_L9e6zJzy_sendMessage);
  cMsg_cCzAEfGG_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_tdeN0VlK, 0, m, &cVar_tdeN0VlK_sendMessage);
  cMsg_PZNkGdnQ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_U1WbDs1P, 0, m, &cVar_U1WbDs1P_sendMessage);
  cMsg_N8KHjv5G_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_bU3fHH7k, 0, m, &cVar_bU3fHH7k_sendMessage);
  cMsg_iXj4HcHd_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cReceive_Ey6sVghx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_2IMYkxmw_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_EFjHPnrV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bsApJFuw, 0, m, &cVar_bsApJFuw_sendMessage);
}

void Heavy_Echomatica::cReceive_u08jHewH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_pdtyxVyl, 0, m, &cVar_pdtyxVyl_sendMessage);
}

void Heavy_Echomatica::cReceive_AvEdRpi0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_LxaVtsby, 0, m, &cVar_LxaVtsby_sendMessage);
}

void Heavy_Echomatica::cReceive_7nEvcOaG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_aYCWoSLW, 0, m, &cVar_aYCWoSLW_sendMessage);
}

void Heavy_Echomatica::cReceive_dz7qPftU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4is2papD, 0, m, &cVar_4is2papD_sendMessage);
}

void Heavy_Echomatica::cReceive_ebsjQpYy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8Hg05fHO, 0, m, &cVar_8Hg05fHO_sendMessage);
}

void Heavy_Echomatica::cReceive_j4w5JEGp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_b2gCYgT2, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_AIcG264R, 0, m, &cVar_AIcG264R_sendMessage);
}

void Heavy_Echomatica::cReceive_Iyf0ASLY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_RiC8zTbE, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_jsAlW0Mg, 0, m, &cVar_jsAlW0Mg_sendMessage);
}

void Heavy_Echomatica::cReceive_Pw7NRJ45_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_s1GOhFWW, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_bsplcBBK, 0, m, &cVar_bsplcBBK_sendMessage);
}

void Heavy_Echomatica::cReceive_JLEaW9jT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_rjk28ScM, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_Yk22GEC2, 0, m, &cVar_Yk22GEC2_sendMessage);
}

void Heavy_Echomatica::cReceive_eGB70Nji_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Xe5JzeBn, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_uMsupKUS, 0, m, &cVar_uMsupKUS_sendMessage);
}

void Heavy_Echomatica::cReceive_9Xwn0dRj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_s9X1UT0X, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_94KwggPv, 0, m, &cVar_94KwggPv_sendMessage);
}

void Heavy_Echomatica::cReceive_KUE9jY3f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_ufvUfXpU, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_CIME7gTe, 0, m, &cVar_CIME7gTe_sendMessage);
}

void Heavy_Echomatica::cReceive_1VjxrxFG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_FeRkq8pI, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_BBD7C0re, 0, m, &cVar_BBD7C0re_sendMessage);
}

void Heavy_Echomatica::cReceive_tn6J0CiS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_wicXOxse, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_80ccxR7l, 0, m, &cVar_80ccxR7l_sendMessage);
}

void Heavy_Echomatica::cReceive_8dT7M7aK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_zj2OiMlV, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_zYh9tqmZ, 0, m, &cVar_zYh9tqmZ_sendMessage);
}

void Heavy_Echomatica::cReceive_8eMhT8aa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_DPwUF9BB, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_uA2rV1kq, 0, m, &cVar_uA2rV1kq_sendMessage);
}

void Heavy_Echomatica::cReceive_I2sHltMT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_l9qqoL04, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_LfXbcx15, 0, m, &cVar_LfXbcx15_sendMessage);
}

void Heavy_Echomatica::cReceive_N79CVlmf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bFFQw2al_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XLLWTqud_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7SdMvuJP_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_guhfjJpa_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Itu7t4GF_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cuzjWCo6_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_HfNDfe2z_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_k23uqdVn_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XM1NFG5J_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2K1xkcXD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LqVtbXkI_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_auVjOGE1_sendMessage);
}

void Heavy_Echomatica::cReceive_Jlcaycy3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_KVp81Jz8_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_tSlF2EG5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_kRDwWnMm, 0, m, &cVar_kRDwWnMm_sendMessage);
}

void Heavy_Echomatica::cReceive_Mleno4xn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_F7JKOt55, 0, m, &cVar_F7JKOt55_sendMessage);
}

void Heavy_Echomatica::cReceive_Fv8Z90YD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Samx1kia, 0, m, &cVar_Samx1kia_sendMessage);
}

void Heavy_Echomatica::cReceive_v1S81AsT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_oz2kESQV, 0, m, &cVar_oz2kESQV_sendMessage);
}

void Heavy_Echomatica::cReceive_VUKHFd68_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_g1TuieG9, 0, m, &cVar_g1TuieG9_sendMessage);
}

void Heavy_Echomatica::cReceive_i8Zh0Wqo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0kqoIrDF, 0, m, &cVar_0kqoIrDF_sendMessage);
}

void Heavy_Echomatica::cReceive_9ooJmTGT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_KKwbYGpg, m);
}

void Heavy_Echomatica::cReceive_aUPCf3sj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_euJFzSsm, 0, m, &cVar_euJFzSsm_sendMessage);
}

void Heavy_Echomatica::cReceive_9d9xnKuV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xiuB3Ge8, 0, m, &cVar_xiuB3Ge8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6g6ZNdIT_sendMessage);
}

void Heavy_Echomatica::cReceive_BsZT2RLi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WIwgX3kB, 0, m, &cVar_WIwgX3kB_sendMessage);
}

void Heavy_Echomatica::cReceive_TRy5FmLN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_gxEQuaiC_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_obSzHi47_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fv2rIWrD_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uckOnt6w_sendMessage);
}

void Heavy_Echomatica::cReceive_nATMaRM7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_utosVvrj_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iLVABUNM_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TAi8W1pl_sendMessage);
}

void Heavy_Echomatica::cReceive_fdmIsffu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_wpnyWgYs, 0, m, &cPack_wpnyWgYs_sendMessage);
}

void Heavy_Echomatica::cReceive_0VgFMeGI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_8Lz5wp2D, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_m5T2PD2w, m);
}

void Heavy_Echomatica::cReceive_OVfYvDPR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_4OscoNMN, 0, m, &cPack_4OscoNMN_sendMessage);
}

void Heavy_Echomatica::cReceive_gTx72UZm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_DMKapvJi_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_ciYL7AB3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_4Q7rVNmX, 0, m, &cPack_4Q7rVNmX_sendMessage);
}

void Heavy_Echomatica::cReceive_GnIUoy7N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_8sVzuZ0F_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HwpybTRB_sendMessage);
}

void Heavy_Echomatica::cReceive_J0Hei47D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_NFAiic8U_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_S2DIhrlO_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_h1dSJgZ1_sendMessage);
}

void Heavy_Echomatica::cReceive_8lSeKS84_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VbsGDidK_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0ELhOSgd_sendMessage);
}

void Heavy_Echomatica::cReceive_fLYUttuq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Dt75Ugfw_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ttjpAYcO_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cuAO2zFG_sendMessage);
}

void Heavy_Echomatica::cReceive_6N9xLBXI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NrLOzJAa, HV_BINOP_MULTIPLY, 0, m, &cBinop_NrLOzJAa_sendMessage);
}

void Heavy_Echomatica::cReceive_Jj8yv0S5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QI3PrBJx, HV_BINOP_MULTIPLY, 0, m, &cBinop_QI3PrBJx_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_zlnsgC9e, HV_BINOP_MULTIPLY, 0, m, &cBinop_zlnsgC9e_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_nCtAMYbA, HV_BINOP_MULTIPLY, 0, m, &cBinop_nCtAMYbA_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_S1NUDCvZ, HV_BINOP_MULTIPLY, 0, m, &cBinop_S1NUDCvZ_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_teWNz5Y8, HV_BINOP_MULTIPLY, 0, m, &cBinop_teWNz5Y8_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_fkSoRhLu, HV_BINOP_MULTIPLY, 0, m, &cBinop_fkSoRhLu_sendMessage);
}

void Heavy_Echomatica::cReceive_9yESnNH2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xMnXMDYw_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Tes7CiGj_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ywvhB4Jn_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yTSv5mWL_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wCennvTQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JrSU8x8c_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yD19K5Mx_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_45uYOePD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_t3gMdnHy_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rtpPIOjz_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_C5n7UeTC_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Npnc1zBl_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Wleixtnq_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_S8vvdtqH_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_8cSIjLpZ_sendMessage);
}

void Heavy_Echomatica::cReceive_IPlT8mkd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NqmCxIHB, HV_BINOP_ADD, 1, m, &cBinop_NqmCxIHB_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_mTdWkmsP, HV_BINOP_SUBTRACT, 1, m, &cBinop_mTdWkmsP_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_LK6aivvF, HV_BINOP_SUBTRACT, 1, m, &cBinop_LK6aivvF_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_lay4ByVX, HV_BINOP_ADD, 1, m, &cBinop_lay4ByVX_sendMessage);
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
    sEnv_process(this, &sEnv_wSvbPmnD, VIf(I0), &sEnv_wSvbPmnD_sendMessage);
    __hv_line_f(&sLine_fjUyzYnR, VOf(Bf0));
    __hv_mul_f(VIf(I0), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_2UWsYz3g, VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_1ok2bNM8, VOf(Bf0));
    __hv_rpole_f(&sRPole_oIh7vVoY, VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_MzsEll6K, VOf(Bf1));
    __hv_rpole_f(&sRPole_dMjRymjW, VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_55unfHhU, VIf(Bf1), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_83z098Zr, VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    sEnv_process(this, &sEnv_u9so36cG, VIf(I1), &sEnv_u9so36cG_sendMessage);
    __hv_line_f(&sLine_A6EAOQGx, VOf(Bf0));
    __hv_mul_f(VIf(I1), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf2), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_G5kSomrL, VOf(Bf2));
    __hv_mul_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_9COn9nbN, VOf(Bf0));
    __hv_rpole_f(&sRPole_xDzmjVUY, VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_se3DLVtm, VOf(Bf2));
    __hv_rpole_f(&sRPole_iVDVhGsV, VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_ucdMbydt, VIf(Bf2), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_XZqKMdgF, VOf(Bf2));
    __hv_mul_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf1), VIf(Bf2), VOf(Bf0));
    __hv_varread_f(&sVarf_gGKH2VZb, VOf(Bf3));
    __hv_varread_f(&sVarf_6Vos4R3C, VOf(Bf4));
    __hv_varread_f(&sVarf_exYH8uxp, VOf(Bf5));
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_3eC8WJod, VOf(Bf4));
    __hv_add_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_WooywmRL, VOf(Bf5));
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_vePDsiuG, VOf(Bf4));
    __hv_add_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_RPnHJJIl, VOf(Bf3));
    __hv_rpole_f(&sRPole_cUBy096E, VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_gSxvsnKG, VIf(Bf3), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_6l6to0Fm, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_6efABy4O, VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_i93kfeN2, VOf(Bf3));
    __hv_rpole_f(&sRPole_6Ybz5je6, VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f);
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_tvEJyAqM, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_cVVujEoH, VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    sEnv_process(this, &sEnv_dMeV86Nb, VIf(Bf5), &sEnv_dMeV86Nb_sendMessage);
    __hv_line_f(&sLine_LS0Yppmz, VOf(Bf6));
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
    __hv_line_f(&sLine_qTR6am9n, VOf(Bf7));
    __hv_mul_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf3), VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_CO8AlERX, VOf(Bf0));
    __hv_mul_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_cbtykbmQ, VOf(Bf7));
    __hv_rpole_f(&sRPole_W9TNJ3Lb, VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_8rl6p0u2, VOf(Bf0));
    __hv_rpole_f(&sRPole_7ZU9VqSr, VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_szKRRRCi, VIf(Bf0), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_4JoJn54V, VOf(Bf0));
    __hv_mul_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_tabwrite_f(&sTabwrite_azqLx5IQ, VIf(Bf0));
    __hv_phasor_k_f(&sPhasor_KVdwatXl, VOf(Bf0));
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
    __hv_varread_f(&sVarf_sBxPzxB6, VOf(Bf3));
    __hv_phasor_k_f(&sPhasor_eFEulve9, VOf(Bf0));
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
    __hv_varread_f(&sVarf_m9IRRXc3, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf7), VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_varwrite_f(&sVarf_TIIHpRLl, VIf(Bf8));
    __hv_line_f(&sLine_rKlYj1jw, VOf(Bf8));
    __hv_varread_f(&sVarf_TIIHpRLl, VOf(Bf3));
    __hv_add_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_tabhead_f(&sTabhead_MSwCejcS, VOf(Bf8));
    __hv_var_k_f_r(VOf(Bf7), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_OcEx0jS4, VOf(Bf8));
    __hv_mul_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_sopfkuQh, VOf(Bf3));
    __hv_min_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_zero_f(VOf(Bf8));
    __hv_max_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_floor_f(VIf(Bf8), VOf(Bf7));
    __hv_varread_f(&sVarf_GQpCFWaO, VOf(Bf3));
    __hv_zero_f(VOf(Bf6));
    __hv_lt_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_and_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_cast_fi(VIf(Bf6), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_5Puyv7AD, VIi(Bi1), VOf(Bf6));
    __hv_tabread_if(&sTabread_yn82ZOGE, VIi(Bi0), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf6));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf6), VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_ufvUfXpU, VOf(Bf7));
    __hv_mul_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_varwrite_f(&sVarf_gGKH2VZb, VIf(Bf7));
    __hv_line_f(&sLine_FLPDyT57, VOf(Bf7));
    __hv_varread_f(&sVarf_TIIHpRLl, VOf(Bf6));
    __hv_add_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_tabhead_f(&sTabhead_StvFEUrd, VOf(Bf7));
    __hv_var_k_f_r(VOf(Bf8), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_gq8aiJ5C, VOf(Bf7));
    __hv_mul_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_JKnqiEcQ, VOf(Bf6));
    __hv_min_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_zero_f(VOf(Bf7));
    __hv_max_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_floor_f(VIf(Bf7), VOf(Bf8));
    __hv_varread_f(&sVarf_Cc8o34kv, VOf(Bf6));
    __hv_zero_f(VOf(Bf0));
    __hv_lt_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_and_f(VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_cast_fi(VIf(Bf0), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_ZUkjP1fE, VIi(Bi1), VOf(Bf0));
    __hv_tabread_if(&sTabread_uE7hnPUC, VIi(Bi0), VOf(Bf6));
    __hv_sub_f(VIf(Bf0), VIf(Bf6), VOf(Bf0));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf0), VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_line_f(&sLine_wicXOxse, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_varwrite_f(&sVarf_6Vos4R3C, VIf(Bf8));
    __hv_line_f(&sLine_tC2hW0gt, VOf(Bf8));
    __hv_varread_f(&sVarf_TIIHpRLl, VOf(Bf0));
    __hv_add_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_tabhead_f(&sTabhead_h9z0db56, VOf(Bf8));
    __hv_var_k_f_r(VOf(Bf7), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_F2ef8yrx, VOf(Bf8));
    __hv_mul_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_ceJKkn9i, VOf(Bf0));
    __hv_min_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf8));
    __hv_max_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_floor_f(VIf(Bf8), VOf(Bf7));
    __hv_varread_f(&sVarf_7QWjNlyy, VOf(Bf0));
    __hv_zero_f(VOf(Bf9));
    __hv_lt_f(VIf(Bf7), VIf(Bf9), VOf(Bf9));
    __hv_and_f(VIf(Bf0), VIf(Bf9), VOf(Bf9));
    __hv_add_f(VIf(Bf7), VIf(Bf9), VOf(Bf9));
    __hv_cast_fi(VIf(Bf9), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_gDGWZXEM, VIi(Bi1), VOf(Bf9));
    __hv_tabread_if(&sTabread_dhhqamVC, VIi(Bi0), VOf(Bf0));
    __hv_sub_f(VIf(Bf9), VIf(Bf0), VOf(Bf9));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf9), VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_DPwUF9BB, VOf(Bf7));
    __hv_mul_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varwrite_f(&sVarf_exYH8uxp, VIf(Bf7));
    __hv_line_f(&sLine_4AT8ifm7, VOf(Bf7));
    __hv_varread_f(&sVarf_TIIHpRLl, VOf(Bf9));
    __hv_add_f(VIf(Bf7), VIf(Bf9), VOf(Bf9));
    __hv_tabhead_f(&sTabhead_gqxgvkzF, VOf(Bf7));
    __hv_var_k_f_r(VOf(Bf8), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_czTMsURW, VOf(Bf7));
    __hv_mul_f(VIf(Bf9), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_pA6ve512, VOf(Bf9));
    __hv_min_f(VIf(Bf7), VIf(Bf9), VOf(Bf9));
    __hv_zero_f(VOf(Bf7));
    __hv_max_f(VIf(Bf9), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_floor_f(VIf(Bf7), VOf(Bf8));
    __hv_varread_f(&sVarf_rsNkF3L3, VOf(Bf9));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf9), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_2gEaJzUS, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_9e0jCF2d, VIi(Bi0), VOf(Bf9));
    __hv_sub_f(VIf(Bf4), VIf(Bf9), VOf(Bf4));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf4), VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_line_f(&sLine_l9qqoL04, VOf(Bf8));
    __hv_mul_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_varwrite_f(&sVarf_3eC8WJod, VIf(Bf8));
    __hv_line_f(&sLine_wuFFEQhS, VOf(Bf8));
    __hv_varread_f(&sVarf_TIIHpRLl, VOf(Bf4));
    __hv_add_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_tabhead_f(&sTabhead_0MGLJ9rg, VOf(Bf8));
    __hv_var_k_f_r(VOf(Bf7), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_yOWxsKa7, VOf(Bf8));
    __hv_mul_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_3JMyss4p, VOf(Bf4));
    __hv_min_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_zero_f(VOf(Bf8));
    __hv_max_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_floor_f(VIf(Bf8), VOf(Bf7));
    __hv_varread_f(&sVarf_t7xSLxL3, VOf(Bf4));
    __hv_zero_f(VOf(Bf5));
    __hv_lt_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_cast_fi(VIf(Bf5), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_OAJjuzrC, VIi(Bi1), VOf(Bf5));
    __hv_tabread_if(&sTabread_xbEMx9TA, VIi(Bi0), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf5));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf5), VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_zj2OiMlV, VOf(Bf7));
    __hv_mul_f(VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_varwrite_f(&sVarf_WooywmRL, VIf(Bf7));
    __hv_line_f(&sLine_B9cxZFu3, VOf(Bf7));
    __hv_varread_f(&sVarf_TIIHpRLl, VOf(Bf5));
    __hv_add_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_tabhead_f(&sTabhead_Vc1kDIwJ, VOf(Bf7));
    __hv_var_k_f_r(VOf(Bf8), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_nPpngNTF, VOf(Bf7));
    __hv_mul_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_CZET0kOx, VOf(Bf5));
    __hv_min_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf7));
    __hv_max_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_floor_f(VIf(Bf7), VOf(Bf8));
    __hv_varread_f(&sVarf_T08tTFMl, VOf(Bf5));
    __hv_zero_f(VOf(Bf10));
    __hv_lt_f(VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_and_f(VIf(Bf5), VIf(Bf10), VOf(Bf10));
    __hv_add_f(VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_cast_fi(VIf(Bf10), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_Oa48EYXB, VIi(Bi1), VOf(Bf10));
    __hv_tabread_if(&sTabread_bTc8dObh, VIi(Bi0), VOf(Bf5));
    __hv_sub_f(VIf(Bf10), VIf(Bf5), VOf(Bf10));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf10), VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_FeRkq8pI, VOf(Bf8));
    __hv_mul_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_varwrite_f(&sVarf_vePDsiuG, VIf(Bf8));
    __hv_varread_f(&sVarf_8Lz5wp2D, VOf(Bf8));
    __hv_mul_f(VIf(Bf2), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf2), 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f);
    __hv_line_f(&sLine_b2gCYgT2, VOf(Bf10));
    __hv_line_f(&sLine_RiC8zTbE, VOf(Bf7));
    __hv_line_f(&sLine_s1GOhFWW, VOf(Bf11));
    __hv_line_f(&sLine_rjk28ScM, VOf(Bf12));
    __hv_line_f(&sLine_Xe5JzeBn, VOf(Bf13));
    __hv_line_f(&sLine_s9X1UT0X, VOf(Bf14));
    __hv_mul_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf0), VIf(Bf13), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf4), VIf(Bf12), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf6), VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf5), VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf3), VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_biquad_k_f(&sBiquad_k_VaXPBNXi, VIf(Bf14), VOf(Bf10));
    __hv_varread_f(&sVarf_KKwbYGpg, VOf(Bf3));
    __hv_varread_f(&sVarf_tDUBxMYG, VOf(Bf7));
    __hv_rpole_f(&sRPole_ves4PBwp, VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_BKo0rBSK, VIf(Bf7), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_TlqZ9JVE, VOf(Bf7));
    __hv_mul_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_zZkoTcjX, VOf(Bf14));
    __hv_rpole_f(&sRPole_2oT7GPgC, VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_Azwz073d, VIf(Bf14), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_ZsO3Jbwh, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_eEUsdCis, VOf(Bf7));
    __hv_rpole_f(&sRPole_Ze9tWEjS, VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_o4Q7u0Gq, VIf(Bf7), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_alU2NAWZ, VOf(Bf7));
    __hv_mul_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_SKrpfxxb, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_7Q1HP9H1, VOf(Bf7));
    __hv_rpole_f(&sRPole_PW2i5FzV, VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_1jT3SfgP, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_fjDHU3va, VOf(Bf7));
    __hv_rpole_f(&sRPole_HKw5HbN1, VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_TLULYrlF, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_N1WO6cQL, VOf(Bf7));
    __hv_rpole_f(&sRPole_IuoyodEr, VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf10), VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_yfspzzgt, VOf(Bf3));
    __hv_rpole_f(&sRPole_0EljYl0T, VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_Ji5IA4fL, VIf(Bf3), VOf(Bf10));
    __hv_mul_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_8aUHwMQg, VOf(Bf3));
    __hv_mul_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_NhB9qldl, VOf(Bf7));
    __hv_line_f(&sLine_twVoqKIz, VOf(Bf10));
    __hv_line_f(&sLine_uKnYIZ6a, VOf(Bf14));
    __hv_line_f(&sLine_2PY6hYHs, VOf(Bf5));
    __hv_line_f(&sLine_Y7EqV7UN, VOf(Bf11));
    __hv_biquad_f(&sBiquad_s_Jm6QdPmv, VIf(Bf3), VIf(Bf7), VIf(Bf10), VIf(Bf14), VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf5), 0.8f, 0.8f, 0.8f, 0.8f, 0.8f, 0.8f, 0.8f, 0.8f);
    __hv_mul_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf11), 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f);
    __hv_min_f(VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf5), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_SDpgQAeP, VOf(Bf11));
    __hv_mul_f(VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_phasor_k_f(&sPhasor_CEXDqaJy, VOf(Bf5));
    __hv_var_k_f(VOf(Bf14), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf5), VIf(Bf14), VOf(Bf14));
    __hv_abs_f(VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf5), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf14), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf14), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf5), VIf(Bf14), VOf(Bf14));
    __hv_mul_f(VIf(Bf14), VIf(Bf14), VOf(Bf5));
    __hv_mul_f(VIf(Bf14), VIf(Bf5), VOf(Bf10));
    __hv_mul_f(VIf(Bf10), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf7), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf3), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf10), VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf5), VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf7), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_var_k_f(VOf(Bf5), 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f);
    __hv_fma_f(VIf(Bf14), VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_tabhead_f(&sTabhead_YUM2f72g, VOf(Bf7));
    __hv_var_k_f_r(VOf(Bf14), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_07bLsIMu, VOf(Bf7));
    __hv_mul_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_Z042hBUw, VOf(Bf5));
    __hv_min_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf7));
    __hv_max_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_floor_f(VIf(Bf7), VOf(Bf14));
    __hv_varread_f(&sVarf_mBmBgYZK, VOf(Bf5));
    __hv_zero_f(VOf(Bf3));
    __hv_lt_f(VIf(Bf14), VIf(Bf3), VOf(Bf3));
    __hv_and_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf14), VIf(Bf3), VOf(Bf3));
    __hv_cast_fi(VIf(Bf3), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_mE5QGflb, VIi(Bi1), VOf(Bf3));
    __hv_tabread_if(&sTabread_peIrM0Zb, VIi(Bi0), VOf(Bf5));
    __hv_sub_f(VIf(Bf3), VIf(Bf5), VOf(Bf3));
    __hv_sub_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf3), VIf(Bf14), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf14), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf5), VIf(Bf14), VIf(Bf11), VOf(Bf14));
    __hv_varread_f(&sVarf_rokonNzQ, VOf(Bf5));
    __hv_rpole_f(&sRPole_Nun4nKkR, VIf(Bf14), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_Obz1nAC6, VIf(Bf5), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf5), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_Ork0fvEj, VOf(Bf5));
    __hv_mul_f(VIf(Bf14), VIf(Bf5), VOf(Bf5));
    __hv_phasor_k_f(&sPhasor_WeIZn1RD, VOf(Bf14));
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
    __hv_tabhead_f(&sTabhead_vsd1jbtj, VOf(Bf10));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf10), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_fbCcSGpC, VOf(Bf10));
    __hv_mul_f(VIf(Bf14), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_wt2j3INJ, VOf(Bf14));
    __hv_min_f(VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_zero_f(VOf(Bf10));
    __hv_max_f(VIf(Bf14), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf3), VIf(Bf10), VOf(Bf10));
    __hv_floor_f(VIf(Bf10), VOf(Bf3));
    __hv_varread_f(&sVarf_YAWBIR7K, VOf(Bf14));
    __hv_zero_f(VOf(Bf6));
    __hv_lt_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_and_f(VIf(Bf14), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_cast_fi(VIf(Bf6), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_j7F4trEk, VIi(Bi1), VOf(Bf6));
    __hv_tabread_if(&sTabread_7Xz5nS0k, VIi(Bi0), VOf(Bf14));
    __hv_sub_f(VIf(Bf6), VIf(Bf14), VOf(Bf6));
    __hv_sub_f(VIf(Bf10), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf6), VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf14), VIf(Bf3), VIf(Bf11), VOf(Bf3));
    __hv_varread_f(&sVarf_t3nM6M5x, VOf(Bf14));
    __hv_rpole_f(&sRPole_jS9cbQkl, VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_CVDp40Dn, VIf(Bf14), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf14), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_Q2r6IQR9, VOf(Bf14));
    __hv_mul_f(VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_H8of5zWs, VOf(Bf3));
    __hv_mul_f(VIf(Bf11), VIf(Bf3), VOf(Bf3));
    __hv_tabwrite_f(&sTabwrite_kWRtgKVV, VIf(Bf3));
    __hv_varread_f(&sVarf_kFyr8ppy, VOf(Bf3));
    __hv_mul_f(VIf(Bf11), VIf(Bf3), VOf(Bf3));
    __hv_tabwrite_f(&sTabwrite_Bf0FeRb9, VIf(Bf3));
    __hv_fma_f(VIf(Bf8), VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_6vXy2TJA, VOf(Bf2));
    __hv_rpole_f(&sRPole_Cz4BvDet, VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_4Ru4q54G, VIf(Bf2), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_Lk2l68VT, VOf(Bf2));
    __hv_mul_f(VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf2), VIf(O1), VOf(O1));
    __hv_varread_f(&sVarf_m5T2PD2w, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f);
    __hv_fma_f(VIf(Bf2), VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_NDUUqI5Y, VOf(Bf1));
    __hv_rpole_f(&sRPole_vAp8xGOI, VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_2JDrhFEb, VIf(Bf1), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_Be67nMHP, VOf(Bf1));
    __hv_mul_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
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
