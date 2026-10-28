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
  numBytes += sBiquad_k_init(&sBiquad_k_93lWa5l2, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  numBytes += sRPole_init(&sRPole_8h90LfZL);
  numBytes += sDel1_init(&sDel1_EbWRxc4m);
  numBytes += sRPole_init(&sRPole_MWfTmLD5);
  numBytes += sDel1_init(&sDel1_tdbCwGS1);
  numBytes += sRPole_init(&sRPole_BXUFc5qn);
  numBytes += sDel1_init(&sDel1_NHnqFg8o);
  numBytes += sRPole_init(&sRPole_Bb25juHC);
  numBytes += sRPole_init(&sRPole_uR84NJ1n);
  numBytes += sRPole_init(&sRPole_CIG0GI4V);
  numBytes += sRPole_init(&sRPole_Bty8KFZI);
  numBytes += sDel1_init(&sDel1_XaNHJB38);
  numBytes += sRPole_init(&sRPole_w7I6IPzw);
  numBytes += sLine_init(&sLine_LAqRl6bA);
  numBytes += sLine_init(&sLine_2CBGyKqW);
  numBytes += sEnv_init(&sEnv_eYS574wC, 256, 512);
  numBytes += sLine_init(&sLine_YBZ5mikJ);
  numBytes += sLine_init(&sLine_iisaskKs);
  numBytes += sRPole_init(&sRPole_zP485GwI);
  numBytes += sTabwrite_init(&sTabwrite_GvmgXTgd, &hTable_nAuTN4MK);
  numBytes += sPhasor_k_init(&sPhasor_wWsXkyhX, 0.0f, sampleRate);
  numBytes += sPhasor_k_init(&sPhasor_zOZSSQcK, 0.0f, sampleRate);
  numBytes += sLine_init(&sLine_GExdUxtG);
  numBytes += sTabhead_init(&sTabhead_xJ0eb41A, &hTable_nAuTN4MK);
  numBytes += sTabread_init(&sTabread_CgBdJ3u0, &hTable_nAuTN4MK, false);
  numBytes += sTabread_init(&sTabread_1pKnGQA3, &hTable_nAuTN4MK, false);
  numBytes += sLine_init(&sLine_KdYJXb8B);
  numBytes += sLine_init(&sLine_RR8tQcCQ);
  numBytes += sTabhead_init(&sTabhead_cijXyhri, &hTable_nAuTN4MK);
  numBytes += sTabread_init(&sTabread_36gd2ZlO, &hTable_nAuTN4MK, false);
  numBytes += sTabread_init(&sTabread_zGmK3DIm, &hTable_nAuTN4MK, false);
  numBytes += sLine_init(&sLine_tRB5TDcU);
  numBytes += sLine_init(&sLine_8HB3zn9f);
  numBytes += sTabhead_init(&sTabhead_C3DnLDcp, &hTable_nAuTN4MK);
  numBytes += sTabread_init(&sTabread_DYaUM3BR, &hTable_nAuTN4MK, false);
  numBytes += sTabread_init(&sTabread_GvarUDQy, &hTable_nAuTN4MK, false);
  numBytes += sLine_init(&sLine_1LZs1PzD);
  numBytes += sLine_init(&sLine_Icv4Vv5I);
  numBytes += sTabhead_init(&sTabhead_O8tdcg19, &hTable_nAuTN4MK);
  numBytes += sTabread_init(&sTabread_jsb1qnsD, &hTable_nAuTN4MK, false);
  numBytes += sTabread_init(&sTabread_cPKl2gPW, &hTable_nAuTN4MK, false);
  numBytes += sLine_init(&sLine_ZKSIiYX2);
  numBytes += sLine_init(&sLine_dpLLDQgd);
  numBytes += sTabhead_init(&sTabhead_5TYSEbaQ, &hTable_nAuTN4MK);
  numBytes += sTabread_init(&sTabread_BbmPS7qV, &hTable_nAuTN4MK, false);
  numBytes += sTabread_init(&sTabread_A97B03ZI, &hTable_nAuTN4MK, false);
  numBytes += sLine_init(&sLine_ToIDSwyN);
  numBytes += sLine_init(&sLine_W6mhXZiG);
  numBytes += sTabhead_init(&sTabhead_VdQLeMM0, &hTable_nAuTN4MK);
  numBytes += sTabread_init(&sTabread_i0Micfsl, &hTable_nAuTN4MK, false);
  numBytes += sTabread_init(&sTabread_gDB4fVaw, &hTable_nAuTN4MK, false);
  numBytes += sLine_init(&sLine_wcpqq8wF);
  numBytes += sEnv_init(&sEnv_d5oOEsl3, 256, 512);
  numBytes += sLine_init(&sLine_kvqcT9dn);
  numBytes += sRPole_init(&sRPole_yxc3wU5O);
  numBytes += sRPole_init(&sRPole_5eBNdFEw);
  numBytes += sDel1_init(&sDel1_zRnL9G8H);
  numBytes += sEnv_init(&sEnv_tnIH6Frb, 256, 512);
  numBytes += sLine_init(&sLine_HJJXCmBz);
  numBytes += sRPole_init(&sRPole_vM0VmBHv);
  numBytes += sRPole_init(&sRPole_VNnKiP0G);
  numBytes += sDel1_init(&sDel1_Pjlwpb5H);
  numBytes += sLine_init(&sLine_Tjn0cMx6);
  numBytes += sLine_init(&sLine_9CIwzgCO);
  numBytes += sLine_init(&sLine_PwkcBY1d);
  numBytes += sLine_init(&sLine_UJxYH0Mv);
  numBytes += sLine_init(&sLine_ckKPZBxS);
  numBytes += sLine_init(&sLine_Au0tUy1n);
  numBytes += sRPole_init(&sRPole_aoSM82Q7);
  numBytes += sDel1_init(&sDel1_d1bVWWyS);
  numBytes += sLine_init(&sLine_aJCJQK5G);
  numBytes += sPhasor_k_init(&sPhasor_E0WUfpcD, 0.3f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_YDeORiEQ, &hTable_oS7E4FLW);
  numBytes += sTabread_init(&sTabread_VmYt212K, &hTable_oS7E4FLW, false);
  numBytes += sTabread_init(&sTabread_y3hq0gyL, &hTable_oS7E4FLW, false);
  numBytes += sRPole_init(&sRPole_zv1q0JG1);
  numBytes += sDel1_init(&sDel1_uJWHoh8F);
  numBytes += sPhasor_k_init(&sPhasor_uDePspxy, 0.5f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_u1M1oQmQ, &hTable_IUJnRarr);
  numBytes += sTabread_init(&sTabread_LivegZPc, &hTable_IUJnRarr, false);
  numBytes += sTabread_init(&sTabread_b5eRTCKH, &hTable_IUJnRarr, false);
  numBytes += sRPole_init(&sRPole_wsSd688U);
  numBytes += sDel1_init(&sDel1_10LNqfXw);
  numBytes += sTabwrite_init(&sTabwrite_0sIe2fpv, &hTable_IUJnRarr);
  numBytes += sTabwrite_init(&sTabwrite_8cN25VSq, &hTable_oS7E4FLW);
  numBytes += sRPole_init(&sRPole_aTqZBKgk);
  numBytes += sDel1_init(&sDel1_f8Cr7xlm);
  numBytes += sRPole_init(&sRPole_GJX7DjBS);
  numBytes += sDel1_init(&sDel1_IuNYf3Li);
  numBytes += cVar_init_s(&cVar_uBF1FzQH, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_GHF288d5, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_exJFoxeD, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_wT0v8HHG, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_PyrhyGxm, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_lqWjdUsB, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_E4ULYZ6h, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_3f7E5juY, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_LKLoo9Qn, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_wpXcJeWU, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_xWsOv0Ff, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_olatqWqv, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_xXlRCHPY, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_MDbEkBad, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_PCWUzQqe, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_XwVjBYZ4, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_BjG6r8Z0, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_COsY2iDJ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_9DLEfrrH, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_LfuiPfXQ, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_mxNb9y75, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_bvY6f5Pn, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_2cPOpjev, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_MUnE0RqN, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_9kmm7Sj3, 0.0f);
  numBytes += cVar_init_f(&cVar_Am939Ua2, 0.0f);
  numBytes += cVar_init_f(&cVar_gKdZR72V, 0.0f);
  numBytes += cVar_init_f(&cVar_wg3yGt1L, 0.0f);
  numBytes += cVar_init_f(&cVar_oN9VNIFz, 0.0f);
  numBytes += cVar_init_f(&cVar_2KQxpSxO, 0.0f);
  numBytes += cVar_init_f(&cVar_uuioPb7n, 0.0f);
  numBytes += cVar_init_f(&cVar_PyHrGY3z, 0.0f);
  numBytes += cVar_init_f(&cVar_oGz4aQF8, 0.0f);
  numBytes += cVar_init_f(&cVar_KqMn7td6, 0.0f);
  numBytes += cVar_init_f(&cVar_QFNI2vb8, 0.0f);
  numBytes += cVar_init_f(&cVar_PT8JjNbE, 0.0f);
  numBytes += cPack_init(&cPack_dUVAcPzb, 2, 0.0f, 20.0f);
  numBytes += cPack_init(&cPack_x4OHZ9Nj, 2, 0.0f, 1800.0f);
  numBytes += cPack_init(&cPack_TgGNaU6W, 2, 0.0f, 1600.0f);
  numBytes += cPack_init(&cPack_cplyn7e0, 2, 0.0f, 1300.0f);
  numBytes += cPack_init(&cPack_aobSIwAZ, 2, 0.0f, 1000.0f);
  numBytes += cPack_init(&cPack_tZg3VD0M, 2, 0.0f, 800.0f);
  numBytes += cPack_init(&cPack_ucgEqz2y, 2, 0.0f, 600.0f);
  numBytes += cVar_init_f(&cVar_XyB1d4Rb, 10000.0f);
  numBytes += cBinop_init(&cBinop_XgqQJpCE, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_88fxwhIk, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_3nOScPIq, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_QVKMW4fj, 27, 1);
  numBytes += cSlice_init(&cSlice_enM89dIy, 26, 1);
  numBytes += cSlice_init(&cSlice_yHqCbJMn, 25, 1);
  numBytes += cSlice_init(&cSlice_VCUAaPlt, 24, 1);
  numBytes += cSlice_init(&cSlice_bGLOGBsE, 23, 1);
  numBytes += cSlice_init(&cSlice_0NZ7thZs, 22, 1);
  numBytes += cSlice_init(&cSlice_0kH9KMrC, 21, 1);
  numBytes += cSlice_init(&cSlice_QwtHy4wi, 20, 1);
  numBytes += cSlice_init(&cSlice_dZ4AoK9l, 19, 1);
  numBytes += cSlice_init(&cSlice_FTT6w6Mu, 18, 1);
  numBytes += cSlice_init(&cSlice_LO5dAw2F, 17, 1);
  numBytes += cSlice_init(&cSlice_ycFQiUzK, 16, 1);
  numBytes += cSlice_init(&cSlice_eGOms3Cw, 15, 1);
  numBytes += cSlice_init(&cSlice_xiwUzNFs, 14, 1);
  numBytes += cSlice_init(&cSlice_nZ3tRUXs, 13, 1);
  numBytes += cSlice_init(&cSlice_mxhANqlt, 12, 1);
  numBytes += cSlice_init(&cSlice_G9usHUHu, 11, 1);
  numBytes += cSlice_init(&cSlice_uRKKLgMh, 10, 1);
  numBytes += cSlice_init(&cSlice_ZgjRauMx, 9, 1);
  numBytes += cSlice_init(&cSlice_zSPD2vgd, 8, 1);
  numBytes += cSlice_init(&cSlice_RSpvMFk7, 7, 1);
  numBytes += cSlice_init(&cSlice_0XNpRmVe, 6, 1);
  numBytes += cSlice_init(&cSlice_m027ckge, 5, 1);
  numBytes += cSlice_init(&cSlice_0SvhbawE, 4, 1);
  numBytes += cSlice_init(&cSlice_L3N9MbKi, 3, 1);
  numBytes += cSlice_init(&cSlice_wNd65hUs, 2, 1);
  numBytes += cSlice_init(&cSlice_8LLWCEOo, 1, 1);
  numBytes += cSlice_init(&cSlice_npUmvmxP, 0, 1);
  numBytes += sVarf_init(&sVarf_NuyCwXwV, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_ZIciW42i, 0.0f);
  numBytes += cBinop_init(&cBinop_Xg7Y06Jg, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_yEGZwcGY, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Obg1Vr3R, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_GmbFS3qz, 0.0f);
  numBytes += cBinop_init(&cBinop_ByBPz2Uz, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_cHvwKeWM, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_FvL5jUhJ, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_nTMealMu, 0.0f);
  numBytes += cBinop_init(&cBinop_BlTn4iNe, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_HjqrkUUR, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_kP9VfP2b, 22050.0f);
  numBytes += cBinop_init(&cBinop_z8DBk5KU, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_HC4Y21KV, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_R4eb87sI, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_hDiOnbKt, 22050.0f);
  numBytes += cBinop_init(&cBinop_inE2Tsau, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_dY9Xf84R, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_xFaZfRen, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_9DemMBNS, 22050.0f);
  numBytes += cBinop_init(&cBinop_QKxxqWKN, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_6glqTQA9, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_rqW0Zbln, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_FP2Hse6t, 22050.0f);
  numBytes += cVar_init_f(&cVar_mwITJGBt, 1.0f);
  numBytes += cBinop_init(&cBinop_ex43bY7Q, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_WrXHe7CY, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_678bYzvB, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_rEP7KzpS, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_pdQskhvN, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_GxK1mjv2, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_ctmbE6lc, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_3MQFpBfD, 0.0f);
  numBytes += cVar_init_f(&cVar_vPixdhze, 0.0f);
  numBytes += cVar_init_f(&cVar_umiZOizj, 0.0f);
  numBytes += cVar_init_f(&cVar_ifL1LPA0, 0.0f);
  numBytes += cVar_init_f(&cVar_9pAC11Nv, 0.0f);
  numBytes += cVar_init_f(&cVar_9Aiu7G33, 0.0f);
  numBytes += cSlice_init(&cSlice_0qOuEeWP, 3, 1);
  numBytes += cSlice_init(&cSlice_fzSpNZ8Q, 2, 1);
  numBytes += cSlice_init(&cSlice_zi76Y08w, 1, 1);
  numBytes += cSlice_init(&cSlice_wYWJvqpK, 0, 1);
  numBytes += cPack_init(&cPack_Y4CBB07c, 2, 0.0f, 50.0f);
  numBytes += cDelay_init(this, &cDelay_0H5IvGA5, 0.0f);
  numBytes += cDelay_init(this, &cDelay_JZ3HDVzi, 0.0f);
  numBytes += hTable_init(&hTable_IUJnRarr, 256);
  numBytes += cVar_init_f(&cVar_M4rRSJku, 0.0f);
  numBytes += cVar_init_s(&cVar_beUGl6x5, "del-1001-delayD");
  numBytes += sVarf_init(&sVarf_hahk0zDf, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_TgXg08S6, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_pTx9A4tV, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_GgVfk48v, "del-1001-delayC");
  numBytes += sVarf_init(&sVarf_tCLbl6Aa, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_5E9Dl6JM, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_2zBuh4mo, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_HwwvLI3w, 0.0f);
  numBytes += cDelay_init(this, &cDelay_qDSoUdOl, 0.0f);
  numBytes += hTable_init(&hTable_oS7E4FLW, 256);
  numBytes += sVarf_init(&sVarf_K5LtP5sk, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_nmmiNqXJ, 3.0f);
  numBytes += cBinop_init(&cBinop_aooPCAbz, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_ed8IJPo0, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_T16ZYoFl, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_ahcp0KVH, 3.0f);
  numBytes += cBinop_init(&cBinop_dMKQoGJi, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_3g9OLE8S, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_kqrvlrjz, 1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_v05dzKYv, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_nErzvAUZ, 0.0f);
  numBytes += cVar_init_f(&cVar_KO3iJSyX, 0.0f);
  numBytes += cVar_init_f(&cVar_hyS3e2Bc, 0.0f);
  numBytes += cPack_init(&cPack_Z1lDyyYb, 2, 0.0f, 100.0f);
  numBytes += cPack_init(&cPack_N1zCJwdd, 2, 0.0f, 100.0f);
  numBytes += cVar_init_f(&cVar_gVq9QZQ6, 0.0f);
  numBytes += cVar_init_f(&cVar_Gki7t2Xr, 0.0f);
  numBytes += cVar_init_f(&cVar_4V8IdQ15, 0.0f);
  numBytes += cBinop_init(&cBinop_E8xF6oVz, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_f1qtLtmt, 0.0f); // __pow
  numBytes += cIf_init(&cIf_3qGJ0wYt, false);
  numBytes += cBinop_init(&cBinop_02mHmdcf, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_HFcy2yDC, 74.0f);
  numBytes += cVar_init_f(&cVar_L4jU2v7R, 3.0f);
  numBytes += cSlice_init(&cSlice_y3Z686OF, 1, -1);
  numBytes += cVar_init_f(&cVar_ZhTGp7Rx, 1.0f);
  numBytes += cSlice_init(&cSlice_KfLWtrH5, 1, -1);
  numBytes += cVar_init_f(&cVar_7JPrtqo6, 70.0f);
  numBytes += cBinop_init(&cBinop_d8WqNbx8, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_O1uRjBcl, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_SOdTYryS, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_IbLmecYj, 3000.0f);
  numBytes += cBinop_init(&cBinop_uO4RbJKS, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_SvcHX92p, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_npHNvPUa, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_KwsN0Wpr, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_1s3Vp4nr, 400.0f);
  numBytes += cBinop_init(&cBinop_ABJqE3bz, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_oiBpd5AX, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_aGuhfUMl, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_K7lzC0oG, 30.0f);
  numBytes += cBinop_init(&cBinop_bL9Y3XN6, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_5LzuIbPI, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_Wt8Xxs98, false);
  numBytes += cVar_init_f(&cVar_gCPYgzWz, 0.0f);
  numBytes += cVar_init_f(&cVar_3BVInNrV, 0.0f);
  numBytes += cPack_init(&cPack_Fqa68gYe, 3, 0.0f, 500.0f, 100.0f);
  numBytes += cDelay_init(this, &cDelay_7z3kn8AE, 0.0f);
  numBytes += cVar_init_f(&cVar_bnBbi2Oq, 20.0f);
  numBytes += cBinop_init(&cBinop_Og6sJ4w7, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_lLpUrnRz, 0.0f);
  numBytes += cSlice_init(&cSlice_h0vHBMoZ, 1, -1);
  numBytes += cSlice_init(&cSlice_s2tQRsow, 1, -1);
  numBytes += cVar_init_f(&cVar_YtXGejOy, 0.0f);
  numBytes += cVar_init_f(&cVar_Wnrarrvq, 20.0f);
  numBytes += cVar_init_f(&cVar_0vmBdShM, 0.0f);
  numBytes += cVar_init_f(&cVar_HpVTnzoj, 0.0f);
  numBytes += cVar_init_f(&cVar_MQqneoXF, 0.0f);
  numBytes += cSlice_init(&cSlice_FULLDwOH, 1, 1);
  numBytes += cSlice_init(&cSlice_ZJ6SKYeV, 0, 1);
  numBytes += cBinop_init(&cBinop_pOza7vpW, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_DlnKTK0h, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_iwUaegLt, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_03QBQ206, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_P1MMCN2P, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_V8gxUcv8, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_KFLuFvaE, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_1IaUnzda, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_2u9W9Qej, 0.0f);
  numBytes += cVar_init_f(&cVar_DNaTTV0T, 0.0f);
  numBytes += cVar_init_f(&cVar_UmYlFbA2, 0.0f);
  numBytes += cVar_init_f(&cVar_JEsFUsVc, 0.0f);
  numBytes += cVar_init_f(&cVar_wEYTtFy2, 0.0f);
  numBytes += cVar_init_f(&cVar_tSThRhGR, 0.0f);
  numBytes += sVarf_init(&sVarf_Sa5KAMtj, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_J9qHpPQs, 8.0f);
  numBytes += cBinop_init(&cBinop_80RgmjXq, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_HJPCg7EU, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_BusxiAQ2, 0.0f);
  numBytes += cVar_init_f(&cVar_fyFdxEkU, 0.0f);
  numBytes += cBinop_init(&cBinop_xvHM4dbZ, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_9XDkRIfL, 0.0f); // __pow
  numBytes += cIf_init(&cIf_Q53GH8mO, false);
  numBytes += cBinop_init(&cBinop_2fhL8pUc, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_uewUKhRm, 82.0f);
  numBytes += cVar_init_f(&cVar_rmZCAsui, 21.0f);
  numBytes += cSlice_init(&cSlice_pXtO9ZPd, 1, -1);
  numBytes += cVar_init_f(&cVar_ZzvEYViK, 1.0f);
  numBytes += cSlice_init(&cSlice_3N9e25in, 1, -1);
  numBytes += cVar_init_f(&cVar_1N6KX8do, 70.0f);
  numBytes += cBinop_init(&cBinop_UfUQZUeW, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_YI5ze2hT, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_h68xQCTq, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_qXpH2dWb, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_uNW8txTB, 8.0f);
  numBytes += cBinop_init(&cBinop_U6XXARVX, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_9M7ngB1y, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_wM5h3mTx, 0.0f);
  numBytes += cVar_init_f(&cVar_jIbrK6gO, 0.0f);
  numBytes += cBinop_init(&cBinop_lMCshTSP, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_J5Swt9wx, 0.0f); // __pow
  numBytes += cIf_init(&cIf_lOF9dLkk, false);
  numBytes += cBinop_init(&cBinop_sMd9hTiC, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_FosdsE00, 82.0f);
  numBytes += cVar_init_f(&cVar_SCAbhwS3, 21.0f);
  numBytes += cSlice_init(&cSlice_YNG9wci2, 1, -1);
  numBytes += cVar_init_f(&cVar_aCZznhrw, 1.0f);
  numBytes += cSlice_init(&cSlice_oRYk5dMX, 1, -1);
  numBytes += cVar_init_f(&cVar_hTot1kJu, 70.0f);
  numBytes += cBinop_init(&cBinop_uZIit7ex, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_ocCCKioo, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_0H9OkrvB, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_TbVx0CHu, 10000.0f);
  numBytes += cBinop_init(&cBinop_9A27fwnA, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_og15qwdE, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_WAQmQfVk, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_btjOkdHO, 10000.0f);
  numBytes += cBinop_init(&cBinop_cqwyw3Br, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_Cae1OZLL, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Fqv0G4Aa, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_d5wh1Yra, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_UeMKUTBI, 20.0f);
  numBytes += cBinop_init(&cBinop_30cuKdzt, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_3edEHHiq, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_KvN3rh5v, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_UkRp1I3t, 20.0f);
  numBytes += cBinop_init(&cBinop_h1YR3u7L, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_yCXdHHLe, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Hj48sePd, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_59KsUZe6, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_t5SLDsV5, 0.0f);
  numBytes += cDelay_init(this, &cDelay_KTEOLLv2, 0.0f);
  numBytes += hTable_init(&hTable_nAuTN4MK, 256);
  numBytes += sVarf_init(&sVarf_OVuvoQ3D, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_7gEVwJSe, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_akR3mmzW, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_8r3U3Jp9, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_9ayjuFHA, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_aMioVZps, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_BejL10qK, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_f5IAe0LW, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_k6VuibQ3, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_BwT1BGBK, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_29Izxm7n, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_oi5JWcjV, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_PR4miYDQ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_vnYyxprt, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_HfUMem3U, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_NRjI4WFr, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_MAHtklSO, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_fJrGO122, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_XYijverr, 0.0f, 0.0f, false);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_Echomatica::~Heavy_Echomatica() {
  sEnv_free(&sEnv_eYS574wC);
  sEnv_free(&sEnv_d5oOEsl3);
  sEnv_free(&sEnv_tnIH6Frb);
  cPack_free(&cPack_dUVAcPzb);
  cPack_free(&cPack_x4OHZ9Nj);
  cPack_free(&cPack_TgGNaU6W);
  cPack_free(&cPack_cplyn7e0);
  cPack_free(&cPack_aobSIwAZ);
  cPack_free(&cPack_tZg3VD0M);
  cPack_free(&cPack_ucgEqz2y);
  cPack_free(&cPack_Y4CBB07c);
  hTable_free(&hTable_IUJnRarr);
  hTable_free(&hTable_oS7E4FLW);
  cPack_free(&cPack_Z1lDyyYb);
  cPack_free(&cPack_N1zCJwdd);
  cPack_free(&cPack_Fqa68gYe);
  hTable_free(&hTable_nAuTN4MK);
}

HvTable *Heavy_Echomatica::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0x6F28B8EB: return &hTable_IUJnRarr; // del-1001-delayD
    case 0xA74180A2: return &hTable_oS7E4FLW; // del-1001-delayC
    case 0xC7C6279C: return &hTable_nAuTN4MK; // del-1001-delayA
    default: return nullptr;
  }
}

void Heavy_Echomatica::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0x22C9B907: { // Vari
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_OxVZh1LJ_sendMessage);
      break;
    }
    case 0xBB03970: { // 1204-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_sqEKAjc0_sendMessage);
      break;
    }
    case 0x7FE37BE4: { // 1204-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ZMn9C8JM_sendMessage);
      break;
    }
    case 0x9F139781: { // 1282-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_TYxxlkGr_sendMessage);
      break;
    }
    case 0xF56FA839: { // 1282-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4iSwWcGF_sendMessage);
      break;
    }
    case 0xE9A9E220: { // 1304-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_07SBL33t_sendMessage);
      break;
    }
    case 0xB6AF536C: { // 1304-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_7r0BF8Mf_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9tYxld0e_sendMessage);
      break;
    }
    case 0xE68AB11B: { // chrs
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_LWtFYfN2_sendMessage);
      break;
    }
    case 0xBA8CED4E: { // dry
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_kZ3TdVjL_sendMessage);
      break;
    }
    case 0x63E722C0: { // echo
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9oAC9WuZ_sendMessage);
      break;
    }
    case 0x8FA433B0: { // f1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_8hAWNI4A_sendMessage);
      break;
    }
    case 0xEE0EB120: { // f2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_8BLUywwQ_sendMessage);
      break;
    }
    case 0x4FFCF19F: { // f3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_XD7Jljl9_sendMessage);
      break;
    }
    case 0x2AF9F5EB: { // f4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_jL0GkOjw_sendMessage);
      break;
    }
    case 0xC6F6EBB2: { // f5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_YIUwwCCS_sendMessage);
      break;
    }
    case 0x775D6E5E: { // f6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_SkHVpm6U_sendMessage);
      break;
    }
    case 0xBB6123FD: { // fdbck_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_a4d2tWoT_sendMessage);
      break;
    }
    case 0xF1E7CD16: { // feedback
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_WH8pZTAX_sendMessage);
      break;
    }
    case 0xC7AF3F72: { // h1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_PcrmRBR9_sendMessage);
      break;
    }
    case 0x9BEBB079: { // h2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_vrbknxZI_sendMessage);
      break;
    }
    case 0xAB1137FD: { // h3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_91XYjRod_sendMessage);
      break;
    }
    case 0x2B4C6DE1: { // h4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_XhbU4RJc_sendMessage);
      break;
    }
    case 0x2541E77D: { // h5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_O02gPXrH_sendMessage);
      break;
    }
    case 0xE7F6D341: { // h6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_XCUjuVbm_sendMessage);
      break;
    }
    case 0x5667A4DA: { // head1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_0a0uX3pY_sendMessage);
      break;
    }
    case 0xAD6B31A5: { // head2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_hHdglsto_sendMessage);
      break;
    }
    case 0x8A2BD450: { // head3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_jX2K0qbC_sendMessage);
      break;
    }
    case 0xCF5C829A: { // head4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_L26cl1gw_sendMessage);
      break;
    }
    case 0xEE70DFBC: { // head5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_6vAPSE4a_sendMessage);
      break;
    }
    case 0x8E4B9939: { // head6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_VLahW6hr_sendMessage);
      break;
    }
    case 0x7E24361: { // hp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1eN7v5MY_sendMessage);
      break;
    }
    case 0x674D12F6: { // hp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Mq6U7YYZ_sendMessage);
      break;
    }
    case 0x6A20C3F5: { // hp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_PlZHfdnV_sendMessage);
      break;
    }
    case 0x123E8795: { // lp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_7ZQQ7ZtN_sendMessage);
      break;
    }
    case 0x4588BD1: { // lp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_XqmVOniv_sendMessage);
      break;
    }
    case 0xB7298D49: { // lp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1cHFBzov_sendMessage);
      break;
    }
    case 0x64BD0F15: { // mf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_oAauLrGy_sendMessage);
      break;
    }
    case 0x5A12F82E: { // mg
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_J57OYhgX_sendMessage);
      break;
    }
    case 0x2C9C49A7: { // mq
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_5pLFzpZF_sendMessage);
      break;
    }
    case 0xC8D93A6D: { // tapehead_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_zCd5MIEq_sendMessage);
      break;
    }
    case 0xB25D05EB: { // varispeed
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_3F129h0z_sendMessage);
      break;
    }
    case 0x8ADB5B6B: { // varispeed_enable
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_b5Lc85e9_sendMessage);
      break;
    }
    case 0x7BB47B7B: { // wnf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_HHhDCgia_sendMessage);
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


void Heavy_Echomatica::cMsg_7WDwAEPm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_s9wePA6O_sendMessage);
}

void Heavy_Echomatica::cSystem_s9wePA6O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_OI6AACDd_sendMessage);
}

void Heavy_Echomatica::cVar_uBF1FzQH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_z1LdMS2N_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_VDUwKUEb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_NZUTF5Vs_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_GHF288d5, m);
}

void Heavy_Echomatica::cBinop_OI6AACDd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_exJFoxeD, m);
}

void Heavy_Echomatica::cMsg_z1LdMS2N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_VDUwKUEb_sendMessage);
}

void Heavy_Echomatica::cBinop_NZUTF5Vs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_wT0v8HHG, m);
}

void Heavy_Echomatica::cMsg_H7Az1y8O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Haaes0JO_sendMessage);
}

void Heavy_Echomatica::cSystem_Haaes0JO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_0bOrl0dH_sendMessage);
}

void Heavy_Echomatica::cVar_PyrhyGxm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_O6A6Ekp6_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_Devf4sGv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_toE6nxuf_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_lqWjdUsB, m);
}

void Heavy_Echomatica::cBinop_0bOrl0dH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_E4ULYZ6h, m);
}

void Heavy_Echomatica::cMsg_O6A6Ekp6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Devf4sGv_sendMessage);
}

void Heavy_Echomatica::cBinop_toE6nxuf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_3f7E5juY, m);
}

void Heavy_Echomatica::cMsg_40DHErAM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_LIPJYvm2_sendMessage);
}

void Heavy_Echomatica::cSystem_LIPJYvm2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_4deWCpEo_sendMessage);
}

void Heavy_Echomatica::cVar_LKLoo9Qn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_z6tHNanq_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_Fcvaw3Bz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_W7fiajut_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_wpXcJeWU, m);
}

void Heavy_Echomatica::cBinop_4deWCpEo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_xWsOv0Ff, m);
}

void Heavy_Echomatica::cMsg_z6tHNanq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Fcvaw3Bz_sendMessage);
}

void Heavy_Echomatica::cBinop_W7fiajut_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_olatqWqv, m);
}

void Heavy_Echomatica::cMsg_kvNwZK0j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_sfJL4T4R_sendMessage);
}

void Heavy_Echomatica::cSystem_sfJL4T4R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_gd3pOpBK_sendMessage);
}

void Heavy_Echomatica::cVar_xXlRCHPY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_weygVejC_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_sx2975oT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_PrNllfRY_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_MDbEkBad, m);
}

void Heavy_Echomatica::cBinop_gd3pOpBK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_PCWUzQqe, m);
}

void Heavy_Echomatica::cMsg_weygVejC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_sx2975oT_sendMessage);
}

void Heavy_Echomatica::cBinop_PrNllfRY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_XwVjBYZ4, m);
}

void Heavy_Echomatica::cCast_TPayXWk1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jNMANHf6_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_zx6TDNcA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_v5UWToQ0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_Tn0jKsn4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_R5dbvQp8_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_ZAhW95ak_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1ZRIpMjC_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_EPaUlsfD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_z4vSlu2L_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_q4DL03kG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bWn9O5Qo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_I3fZ0lIB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dzWHd08M_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_0vg0xJZA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_L88eCkBo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_CZXUGIht_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dpuBF2Aj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_5jeGVPNu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_48LA7noO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_4xSzjGFf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_d5gd43sT_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_rHCQbJit_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5nbBR4uQ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_NTl4ylSl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dEyiptbb_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_IRM7sl2H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Sx80UiMn_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_wyDuguJ8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ZGqnugfv_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_nvv7QwFB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rDOvtCyx_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_mSmHTCra_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cEt4dkqc_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ScSIRUAx_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bbwg83pF_sendMessage);
      break;
    }
    case 0x40400000: { // "3.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JXoPcChf_sendMessage);
      break;
    }
    case 0x40800000: { // "4.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HGFLkOxI_sendMessage);
      break;
    }
    case 0x40A00000: { // "5.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iW2rEXGc_sendMessage);
      break;
    }
    case 0x40C00000: { // "6.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PlsNnWHE_sendMessage);
      break;
    }
    case 0x40E00000: { // "7.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jVOjqWCg_sendMessage);
      break;
    }
    case 0x41000000: { // "8.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_M0O3RifJ_sendMessage);
      break;
    }
    case 0x41100000: { // "9.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xXtZLF3y_sendMessage);
      break;
    }
    case 0x41200000: { // "10.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uCoDZx8s_sendMessage);
      break;
    }
    case 0x41300000: { // "11.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_F9Smdus9_sendMessage);
      break;
    }
    case 0x41400000: { // "12.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_l9In8KSM_sendMessage);
      break;
    }
    case 0x41500000: { // "13.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iNmMPscU_sendMessage);
      break;
    }
    case 0x41600000: { // "14.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0C0uR4a6_sendMessage);
      break;
    }
    case 0x41700000: { // "15.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vkzsPsl4_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_cEt4dkqc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4xSzjGFf_sendMessage);
}

void Heavy_Echomatica::cCast_ScSIRUAx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IRM7sl2H_sendMessage);
}

void Heavy_Echomatica::cCast_bbwg83pF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CZXUGIht_sendMessage);
}

void Heavy_Echomatica::cCast_JXoPcChf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5jeGVPNu_sendMessage);
}

void Heavy_Echomatica::cCast_HGFLkOxI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NTl4ylSl_sendMessage);
}

void Heavy_Echomatica::cCast_iW2rEXGc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rHCQbJit_sendMessage);
}

void Heavy_Echomatica::cCast_PlsNnWHE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EPaUlsfD_sendMessage);
}

void Heavy_Echomatica::cCast_jVOjqWCg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wyDuguJ8_sendMessage);
}

void Heavy_Echomatica::cCast_M0O3RifJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nvv7QwFB_sendMessage);
}

void Heavy_Echomatica::cCast_xXtZLF3y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_q4DL03kG_sendMessage);
}

void Heavy_Echomatica::cCast_uCoDZx8s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zx6TDNcA_sendMessage);
}

void Heavy_Echomatica::cCast_F9Smdus9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Tn0jKsn4_sendMessage);
}

void Heavy_Echomatica::cCast_l9In8KSM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZAhW95ak_sendMessage);
}

void Heavy_Echomatica::cCast_iNmMPscU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TPayXWk1_sendMessage);
}

void Heavy_Echomatica::cCast_0C0uR4a6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0vg0xJZA_sendMessage);
}

void Heavy_Echomatica::cCast_vkzsPsl4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_I3fZ0lIB_sendMessage);
}

void Heavy_Echomatica::cMsg_dpuBF2Aj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_QVKMW4fj, 0, m, &cSlice_QVKMW4fj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_enM89dIy, 0, m, &cSlice_enM89dIy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yHqCbJMn, 0, m, &cSlice_yHqCbJMn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VCUAaPlt, 0, m, &cSlice_VCUAaPlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bGLOGBsE, 0, m, &cSlice_bGLOGBsE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0NZ7thZs, 0, m, &cSlice_0NZ7thZs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0kH9KMrC, 0, m, &cSlice_0kH9KMrC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QwtHy4wi, 0, m, &cSlice_QwtHy4wi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dZ4AoK9l, 0, m, &cSlice_dZ4AoK9l_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FTT6w6Mu, 0, m, &cSlice_FTT6w6Mu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LO5dAw2F, 0, m, &cSlice_LO5dAw2F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ycFQiUzK, 0, m, &cSlice_ycFQiUzK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eGOms3Cw, 0, m, &cSlice_eGOms3Cw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xiwUzNFs, 0, m, &cSlice_xiwUzNFs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nZ3tRUXs, 0, m, &cSlice_nZ3tRUXs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mxhANqlt, 0, m, &cSlice_mxhANqlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9usHUHu, 0, m, &cSlice_G9usHUHu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uRKKLgMh, 0, m, &cSlice_uRKKLgMh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZgjRauMx, 0, m, &cSlice_ZgjRauMx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zSPD2vgd, 0, m, &cSlice_zSPD2vgd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RSpvMFk7, 0, m, &cSlice_RSpvMFk7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0XNpRmVe, 0, m, &cSlice_0XNpRmVe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m027ckge, 0, m, &cSlice_m027ckge_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0SvhbawE, 0, m, &cSlice_0SvhbawE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L3N9MbKi, 0, m, &cSlice_L3N9MbKi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wNd65hUs, 0, m, &cSlice_wNd65hUs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8LLWCEOo, 0, m, &cSlice_8LLWCEOo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_npUmvmxP, 0, m, &cSlice_npUmvmxP_sendMessage);
}

void Heavy_Echomatica::cMsg_Sx80UiMn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_QVKMW4fj, 0, m, &cSlice_QVKMW4fj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_enM89dIy, 0, m, &cSlice_enM89dIy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yHqCbJMn, 0, m, &cSlice_yHqCbJMn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VCUAaPlt, 0, m, &cSlice_VCUAaPlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bGLOGBsE, 0, m, &cSlice_bGLOGBsE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0NZ7thZs, 0, m, &cSlice_0NZ7thZs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0kH9KMrC, 0, m, &cSlice_0kH9KMrC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QwtHy4wi, 0, m, &cSlice_QwtHy4wi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dZ4AoK9l, 0, m, &cSlice_dZ4AoK9l_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FTT6w6Mu, 0, m, &cSlice_FTT6w6Mu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LO5dAw2F, 0, m, &cSlice_LO5dAw2F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ycFQiUzK, 0, m, &cSlice_ycFQiUzK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eGOms3Cw, 0, m, &cSlice_eGOms3Cw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xiwUzNFs, 0, m, &cSlice_xiwUzNFs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nZ3tRUXs, 0, m, &cSlice_nZ3tRUXs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mxhANqlt, 0, m, &cSlice_mxhANqlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9usHUHu, 0, m, &cSlice_G9usHUHu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uRKKLgMh, 0, m, &cSlice_uRKKLgMh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZgjRauMx, 0, m, &cSlice_ZgjRauMx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zSPD2vgd, 0, m, &cSlice_zSPD2vgd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RSpvMFk7, 0, m, &cSlice_RSpvMFk7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0XNpRmVe, 0, m, &cSlice_0XNpRmVe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m027ckge, 0, m, &cSlice_m027ckge_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0SvhbawE, 0, m, &cSlice_0SvhbawE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L3N9MbKi, 0, m, &cSlice_L3N9MbKi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wNd65hUs, 0, m, &cSlice_wNd65hUs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8LLWCEOo, 0, m, &cSlice_8LLWCEOo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_npUmvmxP, 0, m, &cSlice_npUmvmxP_sendMessage);
}

void Heavy_Echomatica::cMsg_d5gd43sT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_QVKMW4fj, 0, m, &cSlice_QVKMW4fj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_enM89dIy, 0, m, &cSlice_enM89dIy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yHqCbJMn, 0, m, &cSlice_yHqCbJMn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VCUAaPlt, 0, m, &cSlice_VCUAaPlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bGLOGBsE, 0, m, &cSlice_bGLOGBsE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0NZ7thZs, 0, m, &cSlice_0NZ7thZs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0kH9KMrC, 0, m, &cSlice_0kH9KMrC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QwtHy4wi, 0, m, &cSlice_QwtHy4wi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dZ4AoK9l, 0, m, &cSlice_dZ4AoK9l_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FTT6w6Mu, 0, m, &cSlice_FTT6w6Mu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LO5dAw2F, 0, m, &cSlice_LO5dAw2F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ycFQiUzK, 0, m, &cSlice_ycFQiUzK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eGOms3Cw, 0, m, &cSlice_eGOms3Cw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xiwUzNFs, 0, m, &cSlice_xiwUzNFs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nZ3tRUXs, 0, m, &cSlice_nZ3tRUXs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mxhANqlt, 0, m, &cSlice_mxhANqlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9usHUHu, 0, m, &cSlice_G9usHUHu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uRKKLgMh, 0, m, &cSlice_uRKKLgMh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZgjRauMx, 0, m, &cSlice_ZgjRauMx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zSPD2vgd, 0, m, &cSlice_zSPD2vgd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RSpvMFk7, 0, m, &cSlice_RSpvMFk7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0XNpRmVe, 0, m, &cSlice_0XNpRmVe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m027ckge, 0, m, &cSlice_m027ckge_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0SvhbawE, 0, m, &cSlice_0SvhbawE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L3N9MbKi, 0, m, &cSlice_L3N9MbKi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wNd65hUs, 0, m, &cSlice_wNd65hUs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8LLWCEOo, 0, m, &cSlice_8LLWCEOo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_npUmvmxP, 0, m, &cSlice_npUmvmxP_sendMessage);
}

void Heavy_Echomatica::cMsg_48LA7noO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_QVKMW4fj, 0, m, &cSlice_QVKMW4fj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_enM89dIy, 0, m, &cSlice_enM89dIy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yHqCbJMn, 0, m, &cSlice_yHqCbJMn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VCUAaPlt, 0, m, &cSlice_VCUAaPlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bGLOGBsE, 0, m, &cSlice_bGLOGBsE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0NZ7thZs, 0, m, &cSlice_0NZ7thZs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0kH9KMrC, 0, m, &cSlice_0kH9KMrC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QwtHy4wi, 0, m, &cSlice_QwtHy4wi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dZ4AoK9l, 0, m, &cSlice_dZ4AoK9l_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FTT6w6Mu, 0, m, &cSlice_FTT6w6Mu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LO5dAw2F, 0, m, &cSlice_LO5dAw2F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ycFQiUzK, 0, m, &cSlice_ycFQiUzK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eGOms3Cw, 0, m, &cSlice_eGOms3Cw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xiwUzNFs, 0, m, &cSlice_xiwUzNFs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nZ3tRUXs, 0, m, &cSlice_nZ3tRUXs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mxhANqlt, 0, m, &cSlice_mxhANqlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9usHUHu, 0, m, &cSlice_G9usHUHu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uRKKLgMh, 0, m, &cSlice_uRKKLgMh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZgjRauMx, 0, m, &cSlice_ZgjRauMx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zSPD2vgd, 0, m, &cSlice_zSPD2vgd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RSpvMFk7, 0, m, &cSlice_RSpvMFk7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0XNpRmVe, 0, m, &cSlice_0XNpRmVe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m027ckge, 0, m, &cSlice_m027ckge_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0SvhbawE, 0, m, &cSlice_0SvhbawE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L3N9MbKi, 0, m, &cSlice_L3N9MbKi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wNd65hUs, 0, m, &cSlice_wNd65hUs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8LLWCEOo, 0, m, &cSlice_8LLWCEOo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_npUmvmxP, 0, m, &cSlice_npUmvmxP_sendMessage);
}

void Heavy_Echomatica::cMsg_dEyiptbb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_QVKMW4fj, 0, m, &cSlice_QVKMW4fj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_enM89dIy, 0, m, &cSlice_enM89dIy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yHqCbJMn, 0, m, &cSlice_yHqCbJMn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VCUAaPlt, 0, m, &cSlice_VCUAaPlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bGLOGBsE, 0, m, &cSlice_bGLOGBsE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0NZ7thZs, 0, m, &cSlice_0NZ7thZs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0kH9KMrC, 0, m, &cSlice_0kH9KMrC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QwtHy4wi, 0, m, &cSlice_QwtHy4wi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dZ4AoK9l, 0, m, &cSlice_dZ4AoK9l_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FTT6w6Mu, 0, m, &cSlice_FTT6w6Mu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LO5dAw2F, 0, m, &cSlice_LO5dAw2F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ycFQiUzK, 0, m, &cSlice_ycFQiUzK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eGOms3Cw, 0, m, &cSlice_eGOms3Cw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xiwUzNFs, 0, m, &cSlice_xiwUzNFs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nZ3tRUXs, 0, m, &cSlice_nZ3tRUXs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mxhANqlt, 0, m, &cSlice_mxhANqlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9usHUHu, 0, m, &cSlice_G9usHUHu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uRKKLgMh, 0, m, &cSlice_uRKKLgMh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZgjRauMx, 0, m, &cSlice_ZgjRauMx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zSPD2vgd, 0, m, &cSlice_zSPD2vgd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RSpvMFk7, 0, m, &cSlice_RSpvMFk7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0XNpRmVe, 0, m, &cSlice_0XNpRmVe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m027ckge, 0, m, &cSlice_m027ckge_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0SvhbawE, 0, m, &cSlice_0SvhbawE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L3N9MbKi, 0, m, &cSlice_L3N9MbKi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wNd65hUs, 0, m, &cSlice_wNd65hUs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8LLWCEOo, 0, m, &cSlice_8LLWCEOo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_npUmvmxP, 0, m, &cSlice_npUmvmxP_sendMessage);
}

void Heavy_Echomatica::cMsg_5nbBR4uQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_QVKMW4fj, 0, m, &cSlice_QVKMW4fj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_enM89dIy, 0, m, &cSlice_enM89dIy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yHqCbJMn, 0, m, &cSlice_yHqCbJMn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VCUAaPlt, 0, m, &cSlice_VCUAaPlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bGLOGBsE, 0, m, &cSlice_bGLOGBsE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0NZ7thZs, 0, m, &cSlice_0NZ7thZs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0kH9KMrC, 0, m, &cSlice_0kH9KMrC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QwtHy4wi, 0, m, &cSlice_QwtHy4wi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dZ4AoK9l, 0, m, &cSlice_dZ4AoK9l_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FTT6w6Mu, 0, m, &cSlice_FTT6w6Mu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LO5dAw2F, 0, m, &cSlice_LO5dAw2F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ycFQiUzK, 0, m, &cSlice_ycFQiUzK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eGOms3Cw, 0, m, &cSlice_eGOms3Cw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xiwUzNFs, 0, m, &cSlice_xiwUzNFs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nZ3tRUXs, 0, m, &cSlice_nZ3tRUXs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mxhANqlt, 0, m, &cSlice_mxhANqlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9usHUHu, 0, m, &cSlice_G9usHUHu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uRKKLgMh, 0, m, &cSlice_uRKKLgMh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZgjRauMx, 0, m, &cSlice_ZgjRauMx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zSPD2vgd, 0, m, &cSlice_zSPD2vgd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RSpvMFk7, 0, m, &cSlice_RSpvMFk7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0XNpRmVe, 0, m, &cSlice_0XNpRmVe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m027ckge, 0, m, &cSlice_m027ckge_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0SvhbawE, 0, m, &cSlice_0SvhbawE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L3N9MbKi, 0, m, &cSlice_L3N9MbKi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wNd65hUs, 0, m, &cSlice_wNd65hUs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8LLWCEOo, 0, m, &cSlice_8LLWCEOo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_npUmvmxP, 0, m, &cSlice_npUmvmxP_sendMessage);
}

void Heavy_Echomatica::cMsg_z4vSlu2L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_QVKMW4fj, 0, m, &cSlice_QVKMW4fj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_enM89dIy, 0, m, &cSlice_enM89dIy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yHqCbJMn, 0, m, &cSlice_yHqCbJMn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VCUAaPlt, 0, m, &cSlice_VCUAaPlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bGLOGBsE, 0, m, &cSlice_bGLOGBsE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0NZ7thZs, 0, m, &cSlice_0NZ7thZs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0kH9KMrC, 0, m, &cSlice_0kH9KMrC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QwtHy4wi, 0, m, &cSlice_QwtHy4wi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dZ4AoK9l, 0, m, &cSlice_dZ4AoK9l_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FTT6w6Mu, 0, m, &cSlice_FTT6w6Mu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LO5dAw2F, 0, m, &cSlice_LO5dAw2F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ycFQiUzK, 0, m, &cSlice_ycFQiUzK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eGOms3Cw, 0, m, &cSlice_eGOms3Cw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xiwUzNFs, 0, m, &cSlice_xiwUzNFs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nZ3tRUXs, 0, m, &cSlice_nZ3tRUXs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mxhANqlt, 0, m, &cSlice_mxhANqlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9usHUHu, 0, m, &cSlice_G9usHUHu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uRKKLgMh, 0, m, &cSlice_uRKKLgMh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZgjRauMx, 0, m, &cSlice_ZgjRauMx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zSPD2vgd, 0, m, &cSlice_zSPD2vgd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RSpvMFk7, 0, m, &cSlice_RSpvMFk7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0XNpRmVe, 0, m, &cSlice_0XNpRmVe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m027ckge, 0, m, &cSlice_m027ckge_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0SvhbawE, 0, m, &cSlice_0SvhbawE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L3N9MbKi, 0, m, &cSlice_L3N9MbKi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wNd65hUs, 0, m, &cSlice_wNd65hUs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8LLWCEOo, 0, m, &cSlice_8LLWCEOo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_npUmvmxP, 0, m, &cSlice_npUmvmxP_sendMessage);
}

void Heavy_Echomatica::cMsg_ZGqnugfv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_QVKMW4fj, 0, m, &cSlice_QVKMW4fj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_enM89dIy, 0, m, &cSlice_enM89dIy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yHqCbJMn, 0, m, &cSlice_yHqCbJMn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VCUAaPlt, 0, m, &cSlice_VCUAaPlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bGLOGBsE, 0, m, &cSlice_bGLOGBsE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0NZ7thZs, 0, m, &cSlice_0NZ7thZs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0kH9KMrC, 0, m, &cSlice_0kH9KMrC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QwtHy4wi, 0, m, &cSlice_QwtHy4wi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dZ4AoK9l, 0, m, &cSlice_dZ4AoK9l_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FTT6w6Mu, 0, m, &cSlice_FTT6w6Mu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LO5dAw2F, 0, m, &cSlice_LO5dAw2F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ycFQiUzK, 0, m, &cSlice_ycFQiUzK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eGOms3Cw, 0, m, &cSlice_eGOms3Cw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xiwUzNFs, 0, m, &cSlice_xiwUzNFs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nZ3tRUXs, 0, m, &cSlice_nZ3tRUXs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mxhANqlt, 0, m, &cSlice_mxhANqlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9usHUHu, 0, m, &cSlice_G9usHUHu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uRKKLgMh, 0, m, &cSlice_uRKKLgMh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZgjRauMx, 0, m, &cSlice_ZgjRauMx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zSPD2vgd, 0, m, &cSlice_zSPD2vgd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RSpvMFk7, 0, m, &cSlice_RSpvMFk7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0XNpRmVe, 0, m, &cSlice_0XNpRmVe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m027ckge, 0, m, &cSlice_m027ckge_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0SvhbawE, 0, m, &cSlice_0SvhbawE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L3N9MbKi, 0, m, &cSlice_L3N9MbKi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wNd65hUs, 0, m, &cSlice_wNd65hUs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8LLWCEOo, 0, m, &cSlice_8LLWCEOo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_npUmvmxP, 0, m, &cSlice_npUmvmxP_sendMessage);
}

void Heavy_Echomatica::cMsg_rDOvtCyx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_QVKMW4fj, 0, m, &cSlice_QVKMW4fj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_enM89dIy, 0, m, &cSlice_enM89dIy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yHqCbJMn, 0, m, &cSlice_yHqCbJMn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VCUAaPlt, 0, m, &cSlice_VCUAaPlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bGLOGBsE, 0, m, &cSlice_bGLOGBsE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0NZ7thZs, 0, m, &cSlice_0NZ7thZs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0kH9KMrC, 0, m, &cSlice_0kH9KMrC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QwtHy4wi, 0, m, &cSlice_QwtHy4wi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dZ4AoK9l, 0, m, &cSlice_dZ4AoK9l_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FTT6w6Mu, 0, m, &cSlice_FTT6w6Mu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LO5dAw2F, 0, m, &cSlice_LO5dAw2F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ycFQiUzK, 0, m, &cSlice_ycFQiUzK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eGOms3Cw, 0, m, &cSlice_eGOms3Cw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xiwUzNFs, 0, m, &cSlice_xiwUzNFs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nZ3tRUXs, 0, m, &cSlice_nZ3tRUXs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mxhANqlt, 0, m, &cSlice_mxhANqlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9usHUHu, 0, m, &cSlice_G9usHUHu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uRKKLgMh, 0, m, &cSlice_uRKKLgMh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZgjRauMx, 0, m, &cSlice_ZgjRauMx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zSPD2vgd, 0, m, &cSlice_zSPD2vgd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RSpvMFk7, 0, m, &cSlice_RSpvMFk7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0XNpRmVe, 0, m, &cSlice_0XNpRmVe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m027ckge, 0, m, &cSlice_m027ckge_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0SvhbawE, 0, m, &cSlice_0SvhbawE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L3N9MbKi, 0, m, &cSlice_L3N9MbKi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wNd65hUs, 0, m, &cSlice_wNd65hUs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8LLWCEOo, 0, m, &cSlice_8LLWCEOo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_npUmvmxP, 0, m, &cSlice_npUmvmxP_sendMessage);
}

void Heavy_Echomatica::cMsg_bWn9O5Qo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_QVKMW4fj, 0, m, &cSlice_QVKMW4fj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_enM89dIy, 0, m, &cSlice_enM89dIy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yHqCbJMn, 0, m, &cSlice_yHqCbJMn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VCUAaPlt, 0, m, &cSlice_VCUAaPlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bGLOGBsE, 0, m, &cSlice_bGLOGBsE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0NZ7thZs, 0, m, &cSlice_0NZ7thZs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0kH9KMrC, 0, m, &cSlice_0kH9KMrC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QwtHy4wi, 0, m, &cSlice_QwtHy4wi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dZ4AoK9l, 0, m, &cSlice_dZ4AoK9l_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FTT6w6Mu, 0, m, &cSlice_FTT6w6Mu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LO5dAw2F, 0, m, &cSlice_LO5dAw2F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ycFQiUzK, 0, m, &cSlice_ycFQiUzK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eGOms3Cw, 0, m, &cSlice_eGOms3Cw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xiwUzNFs, 0, m, &cSlice_xiwUzNFs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nZ3tRUXs, 0, m, &cSlice_nZ3tRUXs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mxhANqlt, 0, m, &cSlice_mxhANqlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9usHUHu, 0, m, &cSlice_G9usHUHu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uRKKLgMh, 0, m, &cSlice_uRKKLgMh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZgjRauMx, 0, m, &cSlice_ZgjRauMx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zSPD2vgd, 0, m, &cSlice_zSPD2vgd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RSpvMFk7, 0, m, &cSlice_RSpvMFk7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0XNpRmVe, 0, m, &cSlice_0XNpRmVe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m027ckge, 0, m, &cSlice_m027ckge_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0SvhbawE, 0, m, &cSlice_0SvhbawE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L3N9MbKi, 0, m, &cSlice_L3N9MbKi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wNd65hUs, 0, m, &cSlice_wNd65hUs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8LLWCEOo, 0, m, &cSlice_8LLWCEOo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_npUmvmxP, 0, m, &cSlice_npUmvmxP_sendMessage);
}

void Heavy_Echomatica::cMsg_v5UWToQ0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_QVKMW4fj, 0, m, &cSlice_QVKMW4fj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_enM89dIy, 0, m, &cSlice_enM89dIy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yHqCbJMn, 0, m, &cSlice_yHqCbJMn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VCUAaPlt, 0, m, &cSlice_VCUAaPlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bGLOGBsE, 0, m, &cSlice_bGLOGBsE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0NZ7thZs, 0, m, &cSlice_0NZ7thZs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0kH9KMrC, 0, m, &cSlice_0kH9KMrC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QwtHy4wi, 0, m, &cSlice_QwtHy4wi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dZ4AoK9l, 0, m, &cSlice_dZ4AoK9l_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FTT6w6Mu, 0, m, &cSlice_FTT6w6Mu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LO5dAw2F, 0, m, &cSlice_LO5dAw2F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ycFQiUzK, 0, m, &cSlice_ycFQiUzK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eGOms3Cw, 0, m, &cSlice_eGOms3Cw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xiwUzNFs, 0, m, &cSlice_xiwUzNFs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nZ3tRUXs, 0, m, &cSlice_nZ3tRUXs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mxhANqlt, 0, m, &cSlice_mxhANqlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9usHUHu, 0, m, &cSlice_G9usHUHu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uRKKLgMh, 0, m, &cSlice_uRKKLgMh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZgjRauMx, 0, m, &cSlice_ZgjRauMx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zSPD2vgd, 0, m, &cSlice_zSPD2vgd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RSpvMFk7, 0, m, &cSlice_RSpvMFk7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0XNpRmVe, 0, m, &cSlice_0XNpRmVe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m027ckge, 0, m, &cSlice_m027ckge_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0SvhbawE, 0, m, &cSlice_0SvhbawE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L3N9MbKi, 0, m, &cSlice_L3N9MbKi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wNd65hUs, 0, m, &cSlice_wNd65hUs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8LLWCEOo, 0, m, &cSlice_8LLWCEOo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_npUmvmxP, 0, m, &cSlice_npUmvmxP_sendMessage);
}

void Heavy_Echomatica::cMsg_R5dbvQp8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_QVKMW4fj, 0, m, &cSlice_QVKMW4fj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_enM89dIy, 0, m, &cSlice_enM89dIy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yHqCbJMn, 0, m, &cSlice_yHqCbJMn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VCUAaPlt, 0, m, &cSlice_VCUAaPlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bGLOGBsE, 0, m, &cSlice_bGLOGBsE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0NZ7thZs, 0, m, &cSlice_0NZ7thZs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0kH9KMrC, 0, m, &cSlice_0kH9KMrC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QwtHy4wi, 0, m, &cSlice_QwtHy4wi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dZ4AoK9l, 0, m, &cSlice_dZ4AoK9l_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FTT6w6Mu, 0, m, &cSlice_FTT6w6Mu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LO5dAw2F, 0, m, &cSlice_LO5dAw2F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ycFQiUzK, 0, m, &cSlice_ycFQiUzK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eGOms3Cw, 0, m, &cSlice_eGOms3Cw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xiwUzNFs, 0, m, &cSlice_xiwUzNFs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nZ3tRUXs, 0, m, &cSlice_nZ3tRUXs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mxhANqlt, 0, m, &cSlice_mxhANqlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9usHUHu, 0, m, &cSlice_G9usHUHu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uRKKLgMh, 0, m, &cSlice_uRKKLgMh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZgjRauMx, 0, m, &cSlice_ZgjRauMx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zSPD2vgd, 0, m, &cSlice_zSPD2vgd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RSpvMFk7, 0, m, &cSlice_RSpvMFk7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0XNpRmVe, 0, m, &cSlice_0XNpRmVe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m027ckge, 0, m, &cSlice_m027ckge_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0SvhbawE, 0, m, &cSlice_0SvhbawE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L3N9MbKi, 0, m, &cSlice_L3N9MbKi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wNd65hUs, 0, m, &cSlice_wNd65hUs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8LLWCEOo, 0, m, &cSlice_8LLWCEOo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_npUmvmxP, 0, m, &cSlice_npUmvmxP_sendMessage);
}

void Heavy_Echomatica::cMsg_1ZRIpMjC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_QVKMW4fj, 0, m, &cSlice_QVKMW4fj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_enM89dIy, 0, m, &cSlice_enM89dIy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yHqCbJMn, 0, m, &cSlice_yHqCbJMn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VCUAaPlt, 0, m, &cSlice_VCUAaPlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bGLOGBsE, 0, m, &cSlice_bGLOGBsE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0NZ7thZs, 0, m, &cSlice_0NZ7thZs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0kH9KMrC, 0, m, &cSlice_0kH9KMrC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QwtHy4wi, 0, m, &cSlice_QwtHy4wi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dZ4AoK9l, 0, m, &cSlice_dZ4AoK9l_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FTT6w6Mu, 0, m, &cSlice_FTT6w6Mu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LO5dAw2F, 0, m, &cSlice_LO5dAw2F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ycFQiUzK, 0, m, &cSlice_ycFQiUzK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eGOms3Cw, 0, m, &cSlice_eGOms3Cw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xiwUzNFs, 0, m, &cSlice_xiwUzNFs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nZ3tRUXs, 0, m, &cSlice_nZ3tRUXs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mxhANqlt, 0, m, &cSlice_mxhANqlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9usHUHu, 0, m, &cSlice_G9usHUHu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uRKKLgMh, 0, m, &cSlice_uRKKLgMh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZgjRauMx, 0, m, &cSlice_ZgjRauMx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zSPD2vgd, 0, m, &cSlice_zSPD2vgd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RSpvMFk7, 0, m, &cSlice_RSpvMFk7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0XNpRmVe, 0, m, &cSlice_0XNpRmVe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m027ckge, 0, m, &cSlice_m027ckge_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0SvhbawE, 0, m, &cSlice_0SvhbawE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L3N9MbKi, 0, m, &cSlice_L3N9MbKi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wNd65hUs, 0, m, &cSlice_wNd65hUs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8LLWCEOo, 0, m, &cSlice_8LLWCEOo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_npUmvmxP, 0, m, &cSlice_npUmvmxP_sendMessage);
}

void Heavy_Echomatica::cMsg_jNMANHf6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_QVKMW4fj, 0, m, &cSlice_QVKMW4fj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_enM89dIy, 0, m, &cSlice_enM89dIy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yHqCbJMn, 0, m, &cSlice_yHqCbJMn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VCUAaPlt, 0, m, &cSlice_VCUAaPlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bGLOGBsE, 0, m, &cSlice_bGLOGBsE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0NZ7thZs, 0, m, &cSlice_0NZ7thZs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0kH9KMrC, 0, m, &cSlice_0kH9KMrC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QwtHy4wi, 0, m, &cSlice_QwtHy4wi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dZ4AoK9l, 0, m, &cSlice_dZ4AoK9l_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FTT6w6Mu, 0, m, &cSlice_FTT6w6Mu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LO5dAw2F, 0, m, &cSlice_LO5dAw2F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ycFQiUzK, 0, m, &cSlice_ycFQiUzK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eGOms3Cw, 0, m, &cSlice_eGOms3Cw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xiwUzNFs, 0, m, &cSlice_xiwUzNFs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nZ3tRUXs, 0, m, &cSlice_nZ3tRUXs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mxhANqlt, 0, m, &cSlice_mxhANqlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9usHUHu, 0, m, &cSlice_G9usHUHu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uRKKLgMh, 0, m, &cSlice_uRKKLgMh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZgjRauMx, 0, m, &cSlice_ZgjRauMx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zSPD2vgd, 0, m, &cSlice_zSPD2vgd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RSpvMFk7, 0, m, &cSlice_RSpvMFk7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0XNpRmVe, 0, m, &cSlice_0XNpRmVe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m027ckge, 0, m, &cSlice_m027ckge_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0SvhbawE, 0, m, &cSlice_0SvhbawE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L3N9MbKi, 0, m, &cSlice_L3N9MbKi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wNd65hUs, 0, m, &cSlice_wNd65hUs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8LLWCEOo, 0, m, &cSlice_8LLWCEOo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_npUmvmxP, 0, m, &cSlice_npUmvmxP_sendMessage);
}

void Heavy_Echomatica::cMsg_L88eCkBo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_QVKMW4fj, 0, m, &cSlice_QVKMW4fj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_enM89dIy, 0, m, &cSlice_enM89dIy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yHqCbJMn, 0, m, &cSlice_yHqCbJMn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VCUAaPlt, 0, m, &cSlice_VCUAaPlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bGLOGBsE, 0, m, &cSlice_bGLOGBsE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0NZ7thZs, 0, m, &cSlice_0NZ7thZs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0kH9KMrC, 0, m, &cSlice_0kH9KMrC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QwtHy4wi, 0, m, &cSlice_QwtHy4wi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dZ4AoK9l, 0, m, &cSlice_dZ4AoK9l_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FTT6w6Mu, 0, m, &cSlice_FTT6w6Mu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LO5dAw2F, 0, m, &cSlice_LO5dAw2F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ycFQiUzK, 0, m, &cSlice_ycFQiUzK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eGOms3Cw, 0, m, &cSlice_eGOms3Cw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xiwUzNFs, 0, m, &cSlice_xiwUzNFs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nZ3tRUXs, 0, m, &cSlice_nZ3tRUXs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mxhANqlt, 0, m, &cSlice_mxhANqlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9usHUHu, 0, m, &cSlice_G9usHUHu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uRKKLgMh, 0, m, &cSlice_uRKKLgMh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZgjRauMx, 0, m, &cSlice_ZgjRauMx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zSPD2vgd, 0, m, &cSlice_zSPD2vgd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RSpvMFk7, 0, m, &cSlice_RSpvMFk7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0XNpRmVe, 0, m, &cSlice_0XNpRmVe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m027ckge, 0, m, &cSlice_m027ckge_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0SvhbawE, 0, m, &cSlice_0SvhbawE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L3N9MbKi, 0, m, &cSlice_L3N9MbKi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wNd65hUs, 0, m, &cSlice_wNd65hUs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8LLWCEOo, 0, m, &cSlice_8LLWCEOo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_npUmvmxP, 0, m, &cSlice_npUmvmxP_sendMessage);
}

void Heavy_Echomatica::cMsg_dzWHd08M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_QVKMW4fj, 0, m, &cSlice_QVKMW4fj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_enM89dIy, 0, m, &cSlice_enM89dIy_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yHqCbJMn, 0, m, &cSlice_yHqCbJMn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_VCUAaPlt, 0, m, &cSlice_VCUAaPlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bGLOGBsE, 0, m, &cSlice_bGLOGBsE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0NZ7thZs, 0, m, &cSlice_0NZ7thZs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0kH9KMrC, 0, m, &cSlice_0kH9KMrC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QwtHy4wi, 0, m, &cSlice_QwtHy4wi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_dZ4AoK9l, 0, m, &cSlice_dZ4AoK9l_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_FTT6w6Mu, 0, m, &cSlice_FTT6w6Mu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LO5dAw2F, 0, m, &cSlice_LO5dAw2F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ycFQiUzK, 0, m, &cSlice_ycFQiUzK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eGOms3Cw, 0, m, &cSlice_eGOms3Cw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xiwUzNFs, 0, m, &cSlice_xiwUzNFs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nZ3tRUXs, 0, m, &cSlice_nZ3tRUXs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_mxhANqlt, 0, m, &cSlice_mxhANqlt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_G9usHUHu, 0, m, &cSlice_G9usHUHu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uRKKLgMh, 0, m, &cSlice_uRKKLgMh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZgjRauMx, 0, m, &cSlice_ZgjRauMx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zSPD2vgd, 0, m, &cSlice_zSPD2vgd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RSpvMFk7, 0, m, &cSlice_RSpvMFk7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0XNpRmVe, 0, m, &cSlice_0XNpRmVe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m027ckge, 0, m, &cSlice_m027ckge_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0SvhbawE, 0, m, &cSlice_0SvhbawE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_L3N9MbKi, 0, m, &cSlice_L3N9MbKi_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wNd65hUs, 0, m, &cSlice_wNd65hUs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8LLWCEOo, 0, m, &cSlice_8LLWCEOo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_npUmvmxP, 0, m, &cSlice_npUmvmxP_sendMessage);
}

void Heavy_Echomatica::cMsg_KkSR7IN5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Md3oWTOn_sendMessage);
}

void Heavy_Echomatica::cSystem_Md3oWTOn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_ktT6sT7m_sendMessage);
}

void Heavy_Echomatica::cVar_BjG6r8Z0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3S7yvZl4_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_ar1VGcsB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_cL5AXmhB_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_COsY2iDJ, m);
}

void Heavy_Echomatica::cBinop_ktT6sT7m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_9DLEfrrH, m);
}

void Heavy_Echomatica::cMsg_3S7yvZl4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ar1VGcsB_sendMessage);
}

void Heavy_Echomatica::cBinop_cL5AXmhB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_LfuiPfXQ, m);
}

void Heavy_Echomatica::cMsg_pXtuTtmv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_tuQjg42a_sendMessage);
}

void Heavy_Echomatica::cSystem_tuQjg42a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_vfrAqzkB_sendMessage);
}

void Heavy_Echomatica::cVar_mxNb9y75_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xHTaZg3h_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_vqalHWhs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_KB1sOT2P_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_bvY6f5Pn, m);
}

void Heavy_Echomatica::cBinop_vfrAqzkB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_2cPOpjev, m);
}

void Heavy_Echomatica::cMsg_xHTaZg3h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_vqalHWhs_sendMessage);
}

void Heavy_Echomatica::cBinop_KB1sOT2P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_MUnE0RqN, m);
}

void Heavy_Echomatica::cVar_9kmm7Sj3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_Am939Ua2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_gKdZR72V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_wg3yGt1L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_oN9VNIFz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_2KQxpSxO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_uuioPb7n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_PyHrGY3z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_oGz4aQF8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_KqMn7td6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_QFNI2vb8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_PT8JjNbE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cPack_dUVAcPzb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_aJCJQK5G, 0, m, NULL);
}

void Heavy_Echomatica::cPack_x4OHZ9Nj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_GExdUxtG, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_3MQFpBfD, 0, m, &cVar_3MQFpBfD_sendMessage);
}

void Heavy_Echomatica::cPack_TgGNaU6W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_W6mhXZiG, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_vPixdhze, 0, m, &cVar_vPixdhze_sendMessage);
}

void Heavy_Echomatica::cPack_cplyn7e0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_RR8tQcCQ, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_ifL1LPA0, 0, m, &cVar_ifL1LPA0_sendMessage);
}

void Heavy_Echomatica::cPack_aobSIwAZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_dpLLDQgd, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_9pAC11Nv, 0, m, &cVar_9pAC11Nv_sendMessage);
}

void Heavy_Echomatica::cPack_tZg3VD0M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_8HB3zn9f, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_9Aiu7G33, 0, m, &cVar_9Aiu7G33_sendMessage);
}

void Heavy_Echomatica::cPack_ucgEqz2y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Icv4Vv5I, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_umiZOizj, 0, m, &cVar_umiZOizj_sendMessage);
}

void Heavy_Echomatica::cVar_XyB1d4Rb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XgqQJpCE, HV_BINOP_MULTIPLY, 0, m, &cBinop_XgqQJpCE_sendMessage);
}

void Heavy_Echomatica::cMsg_ePTNuWnZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Kfnn7p5u_sendMessage);
}

void Heavy_Echomatica::cSystem_Kfnn7p5u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_RODJSreX_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_XgqQJpCE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_tKpgrB2c_sendMessage);
}

void Heavy_Echomatica::cBinop_tXdPO5Y1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XgqQJpCE, HV_BINOP_MULTIPLY, 1, m, &cBinop_XgqQJpCE_sendMessage);
}

void Heavy_Echomatica::cMsg_RODJSreX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_tXdPO5Y1_sendMessage);
}

void Heavy_Echomatica::cBinop_tKpgrB2c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_ypsHz2HO_sendMessage);
}

void Heavy_Echomatica::cBinop_ypsHz2HO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_6dHgM17s_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_3nOScPIq, m);
}

void Heavy_Echomatica::cBinop_6dHgM17s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_88fxwhIk, m);
}

void Heavy_Echomatica::cSlice_QVKMW4fj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_12UF6kLA_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_enM89dIy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_P1J92pkd_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_yHqCbJMn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_5x0Wfq97_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_VCUAaPlt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_1kEvsUfo_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_bGLOGBsE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Td4sNyKO_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_0NZ7thZs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_gFsGqflc_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_0kH9KMrC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_MDEoIjy5_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_QwtHy4wi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_GnElTlKI_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_dZ4AoK9l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_9tQquOym_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_FTT6w6Mu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_1GofiQku_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_LO5dAw2F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_VDI3cRhf_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_ycFQiUzK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_AXky4Ic8_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_eGOms3Cw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_pCZ25oX2_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_xiwUzNFs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ClsqGMzx_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_nZ3tRUXs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_JoDDk1r7_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_mxhANqlt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_fsXjUMQ0_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_G9usHUHu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_WzJsEUXs_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_uRKKLgMh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_rIK1mPLr_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_ZgjRauMx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_IqoMi3od_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_zSPD2vgd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_I3Oz6pXN_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_RSpvMFk7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_r30YyWB8_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_0XNpRmVe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_JH0uQIyH_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_m027ckge_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_8XDHMjg1_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_0SvhbawE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_1PFOYOTZ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_L3N9MbKi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_134f9e39_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_wNd65hUs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_vVYs9nf5_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_8LLWCEOo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_opeIFGZq_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_npUmvmxP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_BN8R3NJV_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_wlwd6err_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_0h4qnMgw_sendMessage);
}

void Heavy_Echomatica::cBinop_0h4qnMgw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_ra3RfwdV_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_DBIPf2eL_sendMessage);
}

void Heavy_Echomatica::cVar_ZIciW42i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_EZy8ynU4_sendMessage);
}

void Heavy_Echomatica::cMsg_gpAZXLbC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_n8QwFlZr_sendMessage);
}

void Heavy_Echomatica::cSystem_n8QwFlZr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Xg7Y06Jg, HV_BINOP_DIVIDE, 1, m, &cBinop_Xg7Y06Jg_sendMessage);
}

void Heavy_Echomatica::cBinop_ra3RfwdV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_oFaSER4P_sendMessage);
}

void Heavy_Echomatica::cBinop_oFaSER4P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_yEGZwcGY, m);
}

void Heavy_Echomatica::cMsg_EiIShrUq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_9SqvJXAb_sendMessage);
}

void Heavy_Echomatica::cBinop_9SqvJXAb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_wlwd6err_sendMessage);
}

void Heavy_Echomatica::cBinop_DBIPf2eL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_NuyCwXwV, m);
}

void Heavy_Echomatica::cBinop_EZy8ynU4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_gUl2wxes_sendMessage);
}

void Heavy_Echomatica::cBinop_gUl2wxes_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Xg7Y06Jg, HV_BINOP_DIVIDE, 0, m, &cBinop_Xg7Y06Jg_sendMessage);
}

void Heavy_Echomatica::cBinop_Xg7Y06Jg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EiIShrUq_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_D53naM5D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_B8vDsLqV_sendMessage);
}

void Heavy_Echomatica::cBinop_B8vDsLqV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_UN72VJjZ_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_Vw11F2vB_sendMessage);
}

void Heavy_Echomatica::cVar_GmbFS3qz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_Ze6VjGtl_sendMessage);
}

void Heavy_Echomatica::cMsg_5IUjrWiT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_DXdBGh3Y_sendMessage);
}

void Heavy_Echomatica::cSystem_DXdBGh3Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ByBPz2Uz, HV_BINOP_DIVIDE, 1, m, &cBinop_ByBPz2Uz_sendMessage);
}

void Heavy_Echomatica::cBinop_UN72VJjZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_Nuu8DO7k_sendMessage);
}

void Heavy_Echomatica::cBinop_Nuu8DO7k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_cHvwKeWM, m);
}

void Heavy_Echomatica::cMsg_usFyT2Ft_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Lb8hXrfZ_sendMessage);
}

void Heavy_Echomatica::cBinop_Lb8hXrfZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_D53naM5D_sendMessage);
}

void Heavy_Echomatica::cBinop_Vw11F2vB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Obg1Vr3R, m);
}

void Heavy_Echomatica::cBinop_Ze6VjGtl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_2t60zVJy_sendMessage);
}

void Heavy_Echomatica::cBinop_2t60zVJy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ByBPz2Uz, HV_BINOP_DIVIDE, 0, m, &cBinop_ByBPz2Uz_sendMessage);
}

void Heavy_Echomatica::cBinop_ByBPz2Uz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_usFyT2Ft_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_qsS5gYXA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_ZVGNuqei_sendMessage);
}

void Heavy_Echomatica::cBinop_ZVGNuqei_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_pohd5sa3_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_MkJXRd9A_sendMessage);
}

void Heavy_Echomatica::cVar_nTMealMu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_0iEuov88_sendMessage);
}

void Heavy_Echomatica::cMsg_PbX71bWk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_EPdqri3n_sendMessage);
}

void Heavy_Echomatica::cSystem_EPdqri3n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BlTn4iNe, HV_BINOP_DIVIDE, 1, m, &cBinop_BlTn4iNe_sendMessage);
}

void Heavy_Echomatica::cBinop_pohd5sa3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_cQ0OyYHf_sendMessage);
}

void Heavy_Echomatica::cBinop_cQ0OyYHf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_HjqrkUUR, m);
}

void Heavy_Echomatica::cMsg_27ixbrTA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_60JbrBoc_sendMessage);
}

void Heavy_Echomatica::cBinop_60JbrBoc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_qsS5gYXA_sendMessage);
}

void Heavy_Echomatica::cBinop_MkJXRd9A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_FvL5jUhJ, m);
}

void Heavy_Echomatica::cBinop_0iEuov88_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_LatfI1HA_sendMessage);
}

void Heavy_Echomatica::cBinop_LatfI1HA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BlTn4iNe, HV_BINOP_DIVIDE, 0, m, &cBinop_BlTn4iNe_sendMessage);
}

void Heavy_Echomatica::cBinop_BlTn4iNe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_27ixbrTA_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_kP9VfP2b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_z8DBk5KU, HV_BINOP_MULTIPLY, 0, m, &cBinop_z8DBk5KU_sendMessage);
}

void Heavy_Echomatica::cMsg_PK1WcLND_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_QNRFNQn3_sendMessage);
}

void Heavy_Echomatica::cSystem_QNRFNQn3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ofLKqhTj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_z8DBk5KU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_PmQjkBqB_sendMessage);
}

void Heavy_Echomatica::cBinop_gCXz0VlI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_z8DBk5KU, HV_BINOP_MULTIPLY, 1, m, &cBinop_z8DBk5KU_sendMessage);
}

void Heavy_Echomatica::cMsg_ofLKqhTj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_gCXz0VlI_sendMessage);
}

void Heavy_Echomatica::cBinop_PmQjkBqB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_ppOAQVx5_sendMessage);
}

void Heavy_Echomatica::cBinop_ppOAQVx5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_KFO09dVM_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_R4eb87sI, m);
}

void Heavy_Echomatica::cBinop_KFO09dVM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_HC4Y21KV, m);
}

void Heavy_Echomatica::cVar_hDiOnbKt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_inE2Tsau, HV_BINOP_MULTIPLY, 0, m, &cBinop_inE2Tsau_sendMessage);
}

void Heavy_Echomatica::cMsg_LQ5NDIm6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_MBZaEme5_sendMessage);
}

void Heavy_Echomatica::cSystem_MBZaEme5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_U5XuA15t_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_inE2Tsau_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_dwGaUK6Q_sendMessage);
}

void Heavy_Echomatica::cBinop_xDaaMtj1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_inE2Tsau, HV_BINOP_MULTIPLY, 1, m, &cBinop_inE2Tsau_sendMessage);
}

void Heavy_Echomatica::cMsg_U5XuA15t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_xDaaMtj1_sendMessage);
}

void Heavy_Echomatica::cBinop_dwGaUK6Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_U5rDwhTJ_sendMessage);
}

void Heavy_Echomatica::cBinop_U5rDwhTJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_uk59QPIb_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_xFaZfRen, m);
}

void Heavy_Echomatica::cBinop_uk59QPIb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_dY9Xf84R, m);
}

void Heavy_Echomatica::cVar_9DemMBNS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QKxxqWKN, HV_BINOP_MULTIPLY, 0, m, &cBinop_QKxxqWKN_sendMessage);
}

void Heavy_Echomatica::cMsg_Bm80M3XZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_6Vi66r0s_sendMessage);
}

void Heavy_Echomatica::cSystem_6Vi66r0s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TC3JgViB_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_QKxxqWKN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_J7iyJyEI_sendMessage);
}

void Heavy_Echomatica::cBinop_mYfKmrTa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QKxxqWKN, HV_BINOP_MULTIPLY, 1, m, &cBinop_QKxxqWKN_sendMessage);
}

void Heavy_Echomatica::cMsg_TC3JgViB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_mYfKmrTa_sendMessage);
}

void Heavy_Echomatica::cBinop_J7iyJyEI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_EMpama5D_sendMessage);
}

void Heavy_Echomatica::cBinop_EMpama5D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_61BxQwsk_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_rqW0Zbln, m);
}

void Heavy_Echomatica::cBinop_61BxQwsk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_6glqTQA9, m);
}

void Heavy_Echomatica::cMsg_iLHewl8y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_nMSKtJGr_sendMessage);
}

void Heavy_Echomatica::cSystem_nMSKtJGr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ex43bY7Q, HV_BINOP_DIVIDE, 1, m, &cBinop_ex43bY7Q_sendMessage);
}

void Heavy_Echomatica::cVar_FP2Hse6t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_rxXyqwHA_sendMessage);
}

void Heavy_Echomatica::cVar_mwITJGBt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.001f, 0, m, &cBinop_1kxIBMam_sendMessage);
}

void Heavy_Echomatica::cUnop_3aEnfj99_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_mvL6vr0N_sendMessage);
}

void Heavy_Echomatica::cBinop_ex43bY7Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rEP7KzpS, HV_BINOP_MULTIPLY, 1, m, &cBinop_rEP7KzpS_sendMessage);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_3aEnfj99_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_WrXHe7CY, HV_BINOP_DIVIDE, 0, m, &cBinop_WrXHe7CY_sendMessage);
}

void Heavy_Echomatica::cBinop_rxXyqwHA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ex43bY7Q, HV_BINOP_DIVIDE, 0, m, &cBinop_ex43bY7Q_sendMessage);
}

void Heavy_Echomatica::cBinop_WrXHe7CY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_NdmJWiac_sendMessage);
}

void Heavy_Echomatica::cBinop_PMTbi49A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_3NIB8E8O_sendMessage);
}

void Heavy_Echomatica::cBinop_3NIB8E8O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_6mCj6AHc_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_678bYzvB, HV_BINOP_MULTIPLY, 0, m, &cBinop_678bYzvB_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_rEP7KzpS, HV_BINOP_MULTIPLY, 0, m, &cBinop_rEP7KzpS_sendMessage);
}

void Heavy_Echomatica::cBinop_mvL6vr0N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_678bYzvB, HV_BINOP_MULTIPLY, 1, m, &cBinop_678bYzvB_sendMessage);
}

void Heavy_Echomatica::cBinop_678bYzvB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_uLM8dtZ9_sendMessage);
}

void Heavy_Echomatica::cCast_b5TJxGQn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FP2Hse6t, 0, m, &cVar_FP2Hse6t_sendMessage);
}

void Heavy_Echomatica::cBinop_88JG2zDH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_lmlVRkea_sendMessage);
}

void Heavy_Echomatica::cBinop_lmlVRkea_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_93lWa5l2, 5, m);
}

void Heavy_Echomatica::cBinop_uLM8dtZ9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_93lWa5l2, 4, m);
}

void Heavy_Echomatica::cBinop_2EeUmQ2j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GxK1mjv2, HV_BINOP_MULTIPLY, 0, m, &cBinop_GxK1mjv2_sendMessage);
}

void Heavy_Echomatica::cBinop_rEP7KzpS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pdQskhvN, HV_BINOP_ADD, 1, m, &cBinop_pdQskhvN_sendMessage);
}

void Heavy_Echomatica::cBinop_6mCj6AHc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_88JG2zDH_sendMessage);
}

void Heavy_Echomatica::cBinop_pdQskhvN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GxK1mjv2, HV_BINOP_MULTIPLY, 1, m, &cBinop_GxK1mjv2_sendMessage);
}

void Heavy_Echomatica::cBinop_GxK1mjv2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_93lWa5l2, 1, m);
}

void Heavy_Echomatica::cBinop_1kxIBMam_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WrXHe7CY, HV_BINOP_DIVIDE, 1, m, &cBinop_WrXHe7CY_sendMessage);
}

void Heavy_Echomatica::cBinop_NdmJWiac_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_PMTbi49A_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_pdQskhvN, HV_BINOP_ADD, 0, m, &cBinop_pdQskhvN_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_2EeUmQ2j_sendMessage);
}

void Heavy_Echomatica::cVar_3MQFpBfD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_vPixdhze_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_umiZOizj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_ifL1LPA0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_9pAC11Nv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_9Aiu7G33_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cSlice_0qOuEeWP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_XYijverr, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_fzSpNZ8Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_zOZSSQcK, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_zi76Y08w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_fJrGO122, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_wYWJvqpK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_wWsXkyhX, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSwitchcase_BwoxAlHT_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_w9UPyqB5_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Qq6VAFIB_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_w9UPyqB5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TRNXKIva_sendMessage);
}

void Heavy_Echomatica::cPack_Y4CBB07c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_LAqRl6bA, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_7IWx7Y5j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_WhtTECWZ_sendMessage);
}

void Heavy_Echomatica::cSystem_WhtTECWZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_hOStI3Jw_sendMessage);
}

void Heavy_Echomatica::cDelay_0H5IvGA5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_0H5IvGA5, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_JZ3HDVzi, 0, m, &cDelay_JZ3HDVzi_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_0H5IvGA5, 0, m, &cDelay_0H5IvGA5_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_0sIe2fpv, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_JZ3HDVzi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_JZ3HDVzi, m);
  cMsg_nNt2uNsc_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_TM2j8Xiw_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_ugPhoHTc_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_inKc7sFb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WZskHTRM_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_IUJnRarr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YPT7xOh4_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_0H5IvGA5, 2, m, &cDelay_0H5IvGA5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rBE4a3qo_sendMessage);
}

void Heavy_Echomatica::cMsg_WZskHTRM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_IUJnRarr, 0, m, &hTable_IUJnRarr_sendMessage);
}

void Heavy_Echomatica::cBinop_hOStI3Jw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 40.0f, 0, m, &cBinop_inKc7sFb_sendMessage);
}

void Heavy_Echomatica::cMsg_nNt2uNsc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_IUJnRarr, 0, m, &hTable_IUJnRarr_sendMessage);
}

void Heavy_Echomatica::cCast_rBE4a3qo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_0H5IvGA5, 0, m, &cDelay_0H5IvGA5_sendMessage);
}

void Heavy_Echomatica::cMsg_YPT7xOh4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_JZ3HDVzi, 2, m, &cDelay_JZ3HDVzi_sendMessage);
}

void Heavy_Echomatica::cMsg_ugPhoHTc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_0sIe2fpv, 1, m, NULL);
}

void Heavy_Echomatica::cVar_M4rRSJku_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_kqrvlrjz, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_v05dzKYv, m);
}

void Heavy_Echomatica::cMsg_GhJLBdB6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_KmjDbeyG_sendMessage);
}

void Heavy_Echomatica::cSystem_KmjDbeyG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_6NCmoYLS_sendMessage);
}

void Heavy_Echomatica::cVar_beUGl6x5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_auWhtQUl_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_4t7IdBnF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_DpXHKGDq_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_hahk0zDf, m);
}

void Heavy_Echomatica::cBinop_6NCmoYLS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_TgXg08S6, m);
}

void Heavy_Echomatica::cMsg_auWhtQUl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_4t7IdBnF_sendMessage);
}

void Heavy_Echomatica::cBinop_DpXHKGDq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_pTx9A4tV, m);
}

void Heavy_Echomatica::cMsg_C8DDgBfI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_KC44Qlg3_sendMessage);
}

void Heavy_Echomatica::cSystem_KC44Qlg3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_vyZz9ERu_sendMessage);
}

void Heavy_Echomatica::cVar_GgVfk48v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Mx5dLDTa_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_6BW1tuXK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_q8XsdudT_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_tCLbl6Aa, m);
}

void Heavy_Echomatica::cBinop_vyZz9ERu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_5E9Dl6JM, m);
}

void Heavy_Echomatica::cMsg_Mx5dLDTa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_6BW1tuXK_sendMessage);
}

void Heavy_Echomatica::cBinop_q8XsdudT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_2zBuh4mo, m);
}

void Heavy_Echomatica::cMsg_g9heK1um_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_JTtlJRkP_sendMessage);
}

void Heavy_Echomatica::cSystem_JTtlJRkP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_c9OhL5xq_sendMessage);
}

void Heavy_Echomatica::cDelay_HwwvLI3w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_HwwvLI3w, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_qDSoUdOl, 0, m, &cDelay_qDSoUdOl_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_HwwvLI3w, 0, m, &cDelay_HwwvLI3w_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_8cN25VSq, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_qDSoUdOl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_qDSoUdOl, m);
  cMsg_bCN1XCC0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_Xh58KVph_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_8CDNvvbo_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_6BiB6sXr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oURZ7xha_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_oS7E4FLW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gU4wE3RB_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_HwwvLI3w, 2, m, &cDelay_HwwvLI3w_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2sD8RtSx_sendMessage);
}

void Heavy_Echomatica::cMsg_oURZ7xha_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_oS7E4FLW, 0, m, &hTable_oS7E4FLW_sendMessage);
}

void Heavy_Echomatica::cBinop_c9OhL5xq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 30.0f, 0, m, &cBinop_6BiB6sXr_sendMessage);
}

void Heavy_Echomatica::cMsg_bCN1XCC0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_oS7E4FLW, 0, m, &hTable_oS7E4FLW_sendMessage);
}

void Heavy_Echomatica::cCast_2sD8RtSx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_HwwvLI3w, 0, m, &cDelay_HwwvLI3w_sendMessage);
}

void Heavy_Echomatica::cMsg_gU4wE3RB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_qDSoUdOl, 2, m, &cDelay_qDSoUdOl_sendMessage);
}

void Heavy_Echomatica::cMsg_8CDNvvbo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_8cN25VSq, 1, m, NULL);
}

void Heavy_Echomatica::cBinop_rAkdADrZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_Eh9AZdgi_sendMessage);
}

void Heavy_Echomatica::cBinop_Eh9AZdgi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_nrvP0oIc_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_7VL97W4Q_sendMessage);
}

void Heavy_Echomatica::cVar_nmmiNqXJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_wyHKfPmc_sendMessage);
}

void Heavy_Echomatica::cMsg_Kl3nzmRV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_QtFSRnzn_sendMessage);
}

void Heavy_Echomatica::cSystem_QtFSRnzn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aooPCAbz, HV_BINOP_DIVIDE, 1, m, &cBinop_aooPCAbz_sendMessage);
}

void Heavy_Echomatica::cBinop_nrvP0oIc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_dGLddSMH_sendMessage);
}

void Heavy_Echomatica::cBinop_dGLddSMH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ed8IJPo0, m);
}

void Heavy_Echomatica::cMsg_YcLVaawY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_54sMJlmK_sendMessage);
}

void Heavy_Echomatica::cBinop_54sMJlmK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_rAkdADrZ_sendMessage);
}

void Heavy_Echomatica::cBinop_7VL97W4Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_K5LtP5sk, m);
}

void Heavy_Echomatica::cBinop_wyHKfPmc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_x4wEVV27_sendMessage);
}

void Heavy_Echomatica::cBinop_x4wEVV27_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aooPCAbz, HV_BINOP_DIVIDE, 0, m, &cBinop_aooPCAbz_sendMessage);
}

void Heavy_Echomatica::cBinop_aooPCAbz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YcLVaawY_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_xYvyhhRY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_l0dYyLPm_sendMessage);
}

void Heavy_Echomatica::cBinop_l0dYyLPm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_aWYACWuB_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_mPmFLAeI_sendMessage);
}

void Heavy_Echomatica::cVar_ahcp0KVH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_t8Zaoxt8_sendMessage);
}

void Heavy_Echomatica::cMsg_h41By6zS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_1GHBZCkg_sendMessage);
}

void Heavy_Echomatica::cSystem_1GHBZCkg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dMKQoGJi, HV_BINOP_DIVIDE, 1, m, &cBinop_dMKQoGJi_sendMessage);
}

void Heavy_Echomatica::cBinop_aWYACWuB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_l2cWbeNT_sendMessage);
}

void Heavy_Echomatica::cBinop_l2cWbeNT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_3g9OLE8S, m);
}

void Heavy_Echomatica::cMsg_sAT8rzww_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_oQDam9a1_sendMessage);
}

void Heavy_Echomatica::cBinop_oQDam9a1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_xYvyhhRY_sendMessage);
}

void Heavy_Echomatica::cBinop_mPmFLAeI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_T16ZYoFl, m);
}

void Heavy_Echomatica::cBinop_t8Zaoxt8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_3hV5fYx7_sendMessage);
}

void Heavy_Echomatica::cBinop_3hV5fYx7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dMKQoGJi, HV_BINOP_DIVIDE, 0, m, &cBinop_dMKQoGJi_sendMessage);
}

void Heavy_Echomatica::cBinop_dMKQoGJi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sAT8rzww_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_nErzvAUZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_N1zCJwdd, 0, m, &cPack_N1zCJwdd_sendMessage);
}

void Heavy_Echomatica::cVar_KO3iJSyX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Z1lDyyYb, 0, m, &cPack_Z1lDyyYb_sendMessage);
}

void Heavy_Echomatica::cVar_hyS3e2Bc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ZNFTengf_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cPack_Z1lDyyYb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_2CBGyKqW, 0, m, NULL);
}

void Heavy_Echomatica::cPack_N1zCJwdd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_iisaskKs, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_ZNFTengf_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0LKm5kNI_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_V7gbKDWH_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_87tZlrCn_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_0LKm5kNI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Wvi5mdhZ_sendMessage(_c, 0, m);
  cMsg_zka32jgZ_sendMessage(_c, 0, m);
  cMsg_tG98p4Ts_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_V7gbKDWH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Wvi5mdhZ_sendMessage(_c, 0, m);
  cMsg_zka32jgZ_sendMessage(_c, 0, m);
  cMsg_0gxZG61L_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_87tZlrCn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hBFC7bKz_sendMessage(_c, 0, m);
  cMsg_XjAH4QlI_sendMessage(_c, 0, m);
  cMsg_0gxZG61L_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_gVq9QZQ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_OuaVv0GQ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_Gki7t2Xr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_d8WqNbx8, HV_BINOP_DIVIDE, 0, m, &cBinop_d8WqNbx8_sendMessage);
}

void Heavy_Echomatica::cVar_4V8IdQ15_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_02mHmdcf, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_02mHmdcf_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_3qGJ0wYt, 0, m, &cIf_3qGJ0wYt_sendMessage);
}

void Heavy_Echomatica::sEnv_eYS574wC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_crmhuEFS_sendMessage);
}

void Heavy_Echomatica::cBinop_E8xF6oVz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_wmXcJgFM_sendMessage);
}

void Heavy_Echomatica::cBinop_wmXcJgFM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_e95jXbG2_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sXn0Ey9l_sendMessage);
}

void Heavy_Echomatica::cCast_e95jXbG2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_f1qtLtmt, HV_BINOP_POW, 1, m, &cBinop_f1qtLtmt_sendMessage);
}

void Heavy_Echomatica::cCast_sXn0Ey9l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vDVU0n3y_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_vDVU0n3y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_f1qtLtmt, HV_BINOP_POW, 0, m, &cBinop_f1qtLtmt_sendMessage);
}

void Heavy_Echomatica::cBinop_f1qtLtmt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_onPj7prH_sendMessage);
}

void Heavy_Echomatica::cIf_3qGJ0wYt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_E8xF6oVz, HV_BINOP_SUBTRACT, 0, m, &cBinop_E8xF6oVz_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_O1uRjBcl, HV_BINOP_SUBTRACT, 0, m, &cBinop_O1uRjBcl_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_02mHmdcf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_3qGJ0wYt, 1, m, &cIf_3qGJ0wYt_sendMessage);
}

void Heavy_Echomatica::cVar_HFcy2yDC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_NYcg30ho_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AUjLb01c_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NXWlYjlL_sendMessage);
}

void Heavy_Echomatica::cVar_L4jU2v7R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_opsCJcSk_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wH7J9WhU_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_YYRCyqmL_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_y3Z686OF, 0, m, &cSlice_y3Z686OF_sendMessage);
      break;
    }
    default: {
      cSwitchcase_ceW1u3Ws_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_y3Z686OF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_93IJr9S5_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_93IJr9S5_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_ZhTGp7Rx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_93IJr9S5_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_93IJr9S5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_sqEKAjc0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_ceW1u3Ws_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_KfLWtrH5, 0, m, &cSlice_KfLWtrH5_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_KfLWtrH5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_XCZvBUfy_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_XCZvBUfy_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_7JPrtqo6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_XCZvBUfy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_XCZvBUfy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ZMn9C8JM_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_wH7J9WhU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Gki7t2Xr, 0, m, &cVar_Gki7t2Xr_sendMessage);
}

void Heavy_Echomatica::cCast_opsCJcSk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_d8WqNbx8, HV_BINOP_DIVIDE, 1, m, &cBinop_d8WqNbx8_sendMessage);
}

void Heavy_Echomatica::cBinop_d8WqNbx8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SOdTYryS, HV_BINOP_ADD, 0, m, &cBinop_SOdTYryS_sendMessage);
}

void Heavy_Echomatica::cBinop_O1uRjBcl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Gki7t2Xr, 0, m, &cVar_Gki7t2Xr_sendMessage);
}

void Heavy_Echomatica::cCast_AUjLb01c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_02mHmdcf, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_02mHmdcf_sendMessage);
}

void Heavy_Echomatica::cCast_NXWlYjlL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4V8IdQ15, 0, m, &cVar_4V8IdQ15_sendMessage);
}

void Heavy_Echomatica::cCast_NYcg30ho_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TPvvRYal_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XODvToiu_sendMessage);
}

void Heavy_Echomatica::cBinop_SOdTYryS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_E8xF6oVz, HV_BINOP_SUBTRACT, 0, m, &cBinop_E8xF6oVz_sendMessage);
}

void Heavy_Echomatica::cCast_cw9PIhI6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HFcy2yDC, 0, m, &cVar_HFcy2yDC_sendMessage);
}

void Heavy_Echomatica::cCast_U7ifNGjH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_L4jU2v7R, 0, m, &cVar_L4jU2v7R_sendMessage);
}

void Heavy_Echomatica::cCast_8SVvYlHn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_E8xF6oVz, HV_BINOP_SUBTRACT, 1, m, &cBinop_E8xF6oVz_sendMessage);
}

void Heavy_Echomatica::cCast_hjG86Osv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4V8IdQ15, 0, m, &cVar_4V8IdQ15_sendMessage);
}

void Heavy_Echomatica::cBinop_onPj7prH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NuJ3OXHA_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_XODvToiu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_O1uRjBcl, HV_BINOP_SUBTRACT, 1, m, &cBinop_O1uRjBcl_sendMessage);
}

void Heavy_Echomatica::cCast_TPvvRYal_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SOdTYryS, HV_BINOP_ADD, 1, m, &cBinop_SOdTYryS_sendMessage);
}

void Heavy_Echomatica::cBinop_crmhuEFS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_8SVvYlHn_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hjG86Osv_sendMessage);
}

void Heavy_Echomatica::cMsg_NuJ3OXHA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_YBZ5mikJ, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_Wvi5mdhZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_KO3iJSyX, 0, m, &cVar_KO3iJSyX_sendMessage);
}

void Heavy_Echomatica::cMsg_zka32jgZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_nErzvAUZ, 0, m, &cVar_nErzvAUZ_sendMessage);
}

void Heavy_Echomatica::cMsg_hBFC7bKz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_KO3iJSyX, 0, m, &cVar_KO3iJSyX_sendMessage);
}

void Heavy_Echomatica::cMsg_XjAH4QlI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_nErzvAUZ, 0, m, &cVar_nErzvAUZ_sendMessage);
}

void Heavy_Echomatica::cSend_OuaVv0GQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_LWtFYfN2_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_tG98p4Ts_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_gVq9QZQ6, 0, m, &cVar_gVq9QZQ6_sendMessage);
}

void Heavy_Echomatica::cMsg_0gxZG61L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_gVq9QZQ6, 0, m, &cVar_gVq9QZQ6_sendMessage);
}

void Heavy_Echomatica::cVar_IbLmecYj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uO4RbJKS, HV_BINOP_MULTIPLY, 0, m, &cBinop_uO4RbJKS_sendMessage);
}

void Heavy_Echomatica::cMsg_J40XNRBG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_0l7zgPzV_sendMessage);
}

void Heavy_Echomatica::cSystem_0l7zgPzV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PHodUhrZ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_uO4RbJKS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_qIw46Ene_sendMessage);
}

void Heavy_Echomatica::cBinop_FSyynt6o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uO4RbJKS, HV_BINOP_MULTIPLY, 1, m, &cBinop_uO4RbJKS_sendMessage);
}

void Heavy_Echomatica::cMsg_PHodUhrZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_FSyynt6o_sendMessage);
}

void Heavy_Echomatica::cBinop_qIw46Ene_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_rYenqqDC_sendMessage);
}

void Heavy_Echomatica::cBinop_rYenqqDC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_IooV9jjb_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_npHNvPUa, m);
}

void Heavy_Echomatica::cBinop_IooV9jjb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_SvcHX92p, m);
}

void Heavy_Echomatica::cBinop_C7EyZQUS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_5AqIkrzp_sendMessage);
}

void Heavy_Echomatica::cBinop_5AqIkrzp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_vFFBkx77_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_aJWyWM0m_sendMessage);
}

void Heavy_Echomatica::cVar_1s3Vp4nr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_6LNyxK21_sendMessage);
}

void Heavy_Echomatica::cMsg_k3cbHjfx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_4nHT7EpD_sendMessage);
}

void Heavy_Echomatica::cSystem_4nHT7EpD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ABJqE3bz, HV_BINOP_DIVIDE, 1, m, &cBinop_ABJqE3bz_sendMessage);
}

void Heavy_Echomatica::cBinop_vFFBkx77_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_4zjVn4BE_sendMessage);
}

void Heavy_Echomatica::cBinop_4zjVn4BE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_oiBpd5AX, m);
}

void Heavy_Echomatica::cMsg_Tx38GefD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Of20dObJ_sendMessage);
}

void Heavy_Echomatica::cBinop_Of20dObJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_C7EyZQUS_sendMessage);
}

void Heavy_Echomatica::cBinop_aJWyWM0m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_KwsN0Wpr, m);
}

void Heavy_Echomatica::cBinop_6LNyxK21_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_YB4kU7yn_sendMessage);
}

void Heavy_Echomatica::cBinop_YB4kU7yn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ABJqE3bz, HV_BINOP_DIVIDE, 0, m, &cBinop_ABJqE3bz_sendMessage);
}

void Heavy_Echomatica::cBinop_ABJqE3bz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Tx38GefD_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_lBWxxibr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_2JvDsaWs_sendMessage);
}

void Heavy_Echomatica::cBinop_2JvDsaWs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_R2UJBJva_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_PBlpcl3Y_sendMessage);
}

void Heavy_Echomatica::cVar_K7lzC0oG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_zAFhCqI1_sendMessage);
}

void Heavy_Echomatica::cMsg_ClBK7eue_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_zICASUIl_sendMessage);
}

void Heavy_Echomatica::cSystem_zICASUIl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bL9Y3XN6, HV_BINOP_DIVIDE, 1, m, &cBinop_bL9Y3XN6_sendMessage);
}

void Heavy_Echomatica::cBinop_R2UJBJva_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_BRyAHzON_sendMessage);
}

void Heavy_Echomatica::cBinop_BRyAHzON_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_5LzuIbPI, m);
}

void Heavy_Echomatica::cMsg_o9fKgbwI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_QL6Ygs2Y_sendMessage);
}

void Heavy_Echomatica::cBinop_QL6Ygs2Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_lBWxxibr_sendMessage);
}

void Heavy_Echomatica::cBinop_PBlpcl3Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_aGuhfUMl, m);
}

void Heavy_Echomatica::cBinop_zAFhCqI1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_cpXCJXj8_sendMessage);
}

void Heavy_Echomatica::cBinop_cpXCJXj8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bL9Y3XN6, HV_BINOP_DIVIDE, 0, m, &cBinop_bL9Y3XN6_sendMessage);
}

void Heavy_Echomatica::cBinop_bL9Y3XN6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_o9fKgbwI_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cIf_Wt8Xxs98_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_gCPYgzWz, 0, m, &cVar_gCPYgzWz_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_gCPYgzWz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_k6VuibQ3, HV_BINOP_MULTIPLY, 0, m, &cBinop_k6VuibQ3_sendMessage);
}

void Heavy_Echomatica::cVar_3BVInNrV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_Wt8Xxs98, 0, m, &cIf_Wt8Xxs98_sendMessage);
}

void Heavy_Echomatica::cPack_Fqa68gYe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_pVDwXf0l_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_CGz9Czpu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_yilLBaw2_sendMessage);
}

void Heavy_Echomatica::cSystem_yilLBaw2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DlnKTK0h, HV_BINOP_MULTIPLY, 1, m, &cBinop_DlnKTK0h_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_pOza7vpW, HV_BINOP_MULTIPLY, 1, m, &cBinop_pOza7vpW_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_lPzQONKW_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cMsg_wAjWMM6i_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_wAjWMM6i_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nV530T5S_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cDelay_7z3kn8AE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_7z3kn8AE, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_7z3kn8AE, 0, m, &cDelay_7z3kn8AE_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_lLpUrnRz, 0, m, &cVar_lLpUrnRz_sendMessage);
}

void Heavy_Echomatica::cCast_nV530T5S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wAjWMM6i_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_7z3kn8AE, 0, m, &cDelay_7z3kn8AE_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_lLpUrnRz, 0, m, &cVar_lLpUrnRz_sendMessage);
}

void Heavy_Echomatica::cMsg_ts89Q775_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_RK3Sap3w_sendMessage);
}

void Heavy_Echomatica::cSystem_RK3Sap3w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_rvsaudUq_sendMessage);
}

void Heavy_Echomatica::cVar_bnBbi2Oq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Og6sJ4w7, HV_BINOP_MULTIPLY, 0, m, &cBinop_Og6sJ4w7_sendMessage);
}

void Heavy_Echomatica::cMsg_wAjWMM6i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_7z3kn8AE, 0, m, &cDelay_7z3kn8AE_sendMessage);
}

void Heavy_Echomatica::cBinop_QL1ahypV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_7z3kn8AE, 2, m, &cDelay_7z3kn8AE_sendMessage);
}

void Heavy_Echomatica::cBinop_rvsaudUq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Og6sJ4w7, HV_BINOP_MULTIPLY, 1, m, &cBinop_Og6sJ4w7_sendMessage);
}

void Heavy_Echomatica::cBinop_Og6sJ4w7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_QL1ahypV_sendMessage);
}

void Heavy_Echomatica::cVar_lLpUrnRz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iwUaegLt, HV_BINOP_SUBTRACT, 0, m, &cBinop_iwUaegLt_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_hmRfa2dQ_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_3Z6dyJaR_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PPTV9Z2v_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GMs0c45X_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_PPTV9Z2v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_MQqneoXF, 0, m, &cVar_MQqneoXF_sendMessage);
}

void Heavy_Echomatica::cCast_GMs0c45X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gsFvGmCf_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XFia9d13_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_pVDwXf0l_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_h0vHBMoZ, 0, m, &cSlice_h0vHBMoZ_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_s2tQRsow, 0, m, &cSlice_s2tQRsow_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JXanP7Eu_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_FULLDwOH, 0, m, &cSlice_FULLDwOH_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_ZJ6SKYeV, 0, m, &cSlice_ZJ6SKYeV_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2oZG9M9x_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mB8ENDjC_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_h0vHBMoZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_J2SU0hBl_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_J2SU0hBl_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_s2tQRsow_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZB4PauI4_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Xv4ZdfoG_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZB4PauI4_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Xv4ZdfoG_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_YtXGejOy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rKhRSVoj_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jOPfuvOt_sendMessage);
}

void Heavy_Echomatica::cVar_Wnrarrvq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_hVylNxxe_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_hVylNxxe_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_l5VHlzXR_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_DlnKTK0h, HV_BINOP_MULTIPLY, 0, m, &cBinop_DlnKTK0h_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_P1MMCN2P, HV_BINOP_DIVIDE, 1, m, &cBinop_P1MMCN2P_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_bnBbi2Oq, 0, m, &cVar_bnBbi2Oq_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_l5VHlzXR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GD2FtPtx_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_0vmBdShM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1IaUnzda, HV_BINOP_SUBTRACT, 1, m, &cBinop_1IaUnzda_sendMessage);
}

void Heavy_Echomatica::cVar_HpVTnzoj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_MQqneoXF, 0, m, &cVar_MQqneoXF_sendMessage);
}

void Heavy_Echomatica::cVar_MQqneoXF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_03QBQ206, HV_BINOP_ADD, 0, m, &cBinop_03QBQ206_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_KFLuFvaE, HV_BINOP_ADD, 0, m, &cBinop_KFLuFvaE_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nR6ym5Aj_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mEUsHr6i_sendMessage);
}

void Heavy_Echomatica::cSlice_FULLDwOH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rKhRSVoj_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jOPfuvOt_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_ZJ6SKYeV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ARCk1Q9d_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rnXIesve_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_yNVIxPQM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_lLpUrnRz, 1, m, &cVar_lLpUrnRz_sendMessage);
}

void Heavy_Echomatica::cBinop_pOza7vpW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_yNVIxPQM_sendMessage);
}

void Heavy_Echomatica::cBinop_DlnKTK0h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_QxNR2O7a_sendMessage);
}

void Heavy_Echomatica::cBinop_QxNR2O7a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iwUaegLt, HV_BINOP_SUBTRACT, 1, m, &cBinop_iwUaegLt_sendMessage);
}

void Heavy_Echomatica::cBinop_iwUaegLt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_lLpUrnRz, 1, m, &cVar_lLpUrnRz_sendMessage);
}

void Heavy_Echomatica::cMsg_oqrBfNTT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_lPzQONKW_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_Qku4iJtJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_lPzQONKW_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_KFLuFvaE, HV_BINOP_ADD, 1, m, &cBinop_KFLuFvaE_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_03QBQ206, HV_BINOP_ADD, 1, m, &cBinop_03QBQ206_sendMessage);
}

void Heavy_Echomatica::cBinop_hmRfa2dQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_3Z6dyJaR_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_03QBQ206_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_MQqneoXF, 1, m, &cVar_MQqneoXF_sendMessage);
}

void Heavy_Echomatica::cBinop_P1MMCN2P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_V8gxUcv8, HV_BINOP_DIVIDE, 1, m, &cBinop_V8gxUcv8_sendMessage);
}

void Heavy_Echomatica::cBinop_V8gxUcv8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KFLuFvaE, HV_BINOP_ADD, 1, m, &cBinop_KFLuFvaE_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_03QBQ206, HV_BINOP_ADD, 1, m, &cBinop_03QBQ206_sendMessage);
}

void Heavy_Echomatica::cCast_jOPfuvOt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_P1MMCN2P, HV_BINOP_DIVIDE, 0, m, &cBinop_P1MMCN2P_sendMessage);
}

void Heavy_Echomatica::cCast_rKhRSVoj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pOza7vpW, HV_BINOP_MULTIPLY, 0, m, &cBinop_pOza7vpW_sendMessage);
}

void Heavy_Echomatica::cCast_ARCk1Q9d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HpVTnzoj, 1, m, &cVar_HpVTnzoj_sendMessage);
}

void Heavy_Echomatica::cCast_rnXIesve_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1IaUnzda, HV_BINOP_SUBTRACT, 0, m, &cBinop_1IaUnzda_sendMessage);
}

void Heavy_Echomatica::cCast_gsFvGmCf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Qku4iJtJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_XFia9d13_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HpVTnzoj, 0, m, &cVar_HpVTnzoj_sendMessage);
}

void Heavy_Echomatica::cBinop_KFLuFvaE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0vmBdShM, 0, m, &cVar_0vmBdShM_sendMessage);
}

void Heavy_Echomatica::cMsg_J2SU0hBl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_lPzQONKW_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_dLXEkFSM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_YtXGejOy, 1, m, &cVar_YtXGejOy_sendMessage);
}

void Heavy_Echomatica::cMsg_GD2FtPtx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_DlnKTK0h, HV_BINOP_MULTIPLY, 0, m, &cBinop_DlnKTK0h_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_P1MMCN2P, HV_BINOP_DIVIDE, 1, m, &cBinop_P1MMCN2P_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_bnBbi2Oq, 0, m, &cVar_bnBbi2Oq_sendMessage);
}

void Heavy_Echomatica::cCast_Xv4ZdfoG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Khy10wIU_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_KFLuFvaE, HV_BINOP_ADD, 0, m, &cBinop_KFLuFvaE_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_MQqneoXF, 1, m, &cVar_MQqneoXF_sendMessage);
}

void Heavy_Echomatica::cCast_ZB4PauI4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_J2SU0hBl_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_1IaUnzda_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_V8gxUcv8, HV_BINOP_DIVIDE, 0, m, &cBinop_V8gxUcv8_sendMessage);
}

void Heavy_Echomatica::cCast_Khy10wIU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Qku4iJtJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_JXanP7Eu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YtXGejOy, 0, m, &cVar_YtXGejOy_sendMessage);
}

void Heavy_Echomatica::cCast_mB8ENDjC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dLXEkFSM_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_2oZG9M9x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oqrBfNTT_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_2u9W9Qej_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BwT1BGBK, HV_BINOP_MULTIPLY, 0, m, &cBinop_BwT1BGBK_sendMessage);
}

void Heavy_Echomatica::cVar_DNaTTV0T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_29Izxm7n, HV_BINOP_MULTIPLY, 0, m, &cBinop_29Izxm7n_sendMessage);
}

void Heavy_Echomatica::cVar_UmYlFbA2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oi5JWcjV, HV_BINOP_MULTIPLY, 0, m, &cBinop_oi5JWcjV_sendMessage);
}

void Heavy_Echomatica::cVar_JEsFUsVc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PR4miYDQ, HV_BINOP_MULTIPLY, 0, m, &cBinop_PR4miYDQ_sendMessage);
}

void Heavy_Echomatica::cVar_wEYTtFy2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vnYyxprt, HV_BINOP_MULTIPLY, 0, m, &cBinop_vnYyxprt_sendMessage);
}

void Heavy_Echomatica::cVar_tSThRhGR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HfUMem3U, HV_BINOP_MULTIPLY, 0, m, &cBinop_HfUMem3U_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_KXl4pgyw_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2ZyMbnnL_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zijnVNWk_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_2ZyMbnnL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RzBRWSSn_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lcAk4a2r_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IqSGo6GG_sendMessage);
}

void Heavy_Echomatica::cCast_zijnVNWk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jDgf4vPC_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cNgxUcXg_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HZsfs06L_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rVmTnFHA_sendMessage);
}

void Heavy_Echomatica::cBinop_9MVmR7uo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_QEGNasc6_sendMessage);
}

void Heavy_Echomatica::cBinop_QEGNasc6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_3NvYJ9ol_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_3E4NE3hT_sendMessage);
}

void Heavy_Echomatica::cVar_J9qHpPQs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_QcU6GWhS_sendMessage);
}

void Heavy_Echomatica::cMsg_R81GcDJx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_YZbATi22_sendMessage);
}

void Heavy_Echomatica::cSystem_YZbATi22_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_80RgmjXq, HV_BINOP_DIVIDE, 1, m, &cBinop_80RgmjXq_sendMessage);
}

void Heavy_Echomatica::cBinop_3NvYJ9ol_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_Bg89FxNk_sendMessage);
}

void Heavy_Echomatica::cBinop_Bg89FxNk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_HJPCg7EU, m);
}

void Heavy_Echomatica::cMsg_qRunwFLz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_mRFtcsFW_sendMessage);
}

void Heavy_Echomatica::cBinop_mRFtcsFW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_9MVmR7uo_sendMessage);
}

void Heavy_Echomatica::cBinop_3E4NE3hT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Sa5KAMtj, m);
}

void Heavy_Echomatica::cBinop_QcU6GWhS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_IzSXjnWf_sendMessage);
}

void Heavy_Echomatica::cBinop_IzSXjnWf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_80RgmjXq, HV_BINOP_DIVIDE, 0, m, &cBinop_80RgmjXq_sendMessage);
}

void Heavy_Echomatica::cBinop_80RgmjXq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qRunwFLz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_BusxiAQ2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UfUQZUeW, HV_BINOP_DIVIDE, 0, m, &cBinop_UfUQZUeW_sendMessage);
}

void Heavy_Echomatica::cVar_fyFdxEkU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2fhL8pUc, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_2fhL8pUc_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_Q53GH8mO, 0, m, &cIf_Q53GH8mO_sendMessage);
}

void Heavy_Echomatica::sEnv_d5oOEsl3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_586gKNHa_sendMessage);
}

void Heavy_Echomatica::cBinop_xvHM4dbZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_gLhBDU3z_sendMessage);
}

void Heavy_Echomatica::cBinop_gLhBDU3z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GTkafClT_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZiTSnEzl_sendMessage);
}

void Heavy_Echomatica::cCast_GTkafClT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9XDkRIfL, HV_BINOP_POW, 1, m, &cBinop_9XDkRIfL_sendMessage);
}

void Heavy_Echomatica::cCast_ZiTSnEzl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jctwjdxO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_jctwjdxO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_9XDkRIfL, HV_BINOP_POW, 0, m, &cBinop_9XDkRIfL_sendMessage);
}

void Heavy_Echomatica::cBinop_9XDkRIfL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_yDrN1b6G_sendMessage);
}

void Heavy_Echomatica::cIf_Q53GH8mO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_xvHM4dbZ, HV_BINOP_SUBTRACT, 0, m, &cBinop_xvHM4dbZ_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_YI5ze2hT, HV_BINOP_SUBTRACT, 0, m, &cBinop_YI5ze2hT_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_2fhL8pUc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_Q53GH8mO, 1, m, &cIf_Q53GH8mO_sendMessage);
}

void Heavy_Echomatica::cVar_uewUKhRm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dV9VTbs9_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PDEOTHm5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IS040T5G_sendMessage);
}

void Heavy_Echomatica::cVar_rmZCAsui_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_63aMACKS_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jokK3vh9_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_8RfTP06Q_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_pXtO9ZPd, 0, m, &cSlice_pXtO9ZPd_sendMessage);
      break;
    }
    default: {
      cSwitchcase_RdKRtmSZ_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_pXtO9ZPd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_VJJxMQ8c_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_VJJxMQ8c_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_ZzvEYViK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_VJJxMQ8c_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_VJJxMQ8c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_TYxxlkGr_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_RdKRtmSZ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_3N9e25in, 0, m, &cSlice_3N9e25in_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_3N9e25in_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_7q5CYn5x_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_7q5CYn5x_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_1N6KX8do_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_7q5CYn5x_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_7q5CYn5x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_4iSwWcGF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_jokK3vh9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BusxiAQ2, 0, m, &cVar_BusxiAQ2_sendMessage);
}

void Heavy_Echomatica::cCast_63aMACKS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UfUQZUeW, HV_BINOP_DIVIDE, 1, m, &cBinop_UfUQZUeW_sendMessage);
}

void Heavy_Echomatica::cBinop_UfUQZUeW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_h68xQCTq, HV_BINOP_ADD, 0, m, &cBinop_h68xQCTq_sendMessage);
}

void Heavy_Echomatica::cBinop_YI5ze2hT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BusxiAQ2, 0, m, &cVar_BusxiAQ2_sendMessage);
}

void Heavy_Echomatica::cCast_dV9VTbs9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yNVQvXlQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wQc3XwnT_sendMessage);
}

void Heavy_Echomatica::cCast_PDEOTHm5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2fhL8pUc, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_2fhL8pUc_sendMessage);
}

void Heavy_Echomatica::cCast_IS040T5G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fyFdxEkU, 0, m, &cVar_fyFdxEkU_sendMessage);
}

void Heavy_Echomatica::cBinop_h68xQCTq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xvHM4dbZ, HV_BINOP_SUBTRACT, 0, m, &cBinop_xvHM4dbZ_sendMessage);
}

void Heavy_Echomatica::cCast_pRz4QyWn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uewUKhRm, 0, m, &cVar_uewUKhRm_sendMessage);
}

void Heavy_Echomatica::cCast_KX89wCUo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rmZCAsui, 0, m, &cVar_rmZCAsui_sendMessage);
}

void Heavy_Echomatica::cCast_rY4THFFt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xvHM4dbZ, HV_BINOP_SUBTRACT, 1, m, &cBinop_xvHM4dbZ_sendMessage);
}

void Heavy_Echomatica::cCast_XG9YJtC5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fyFdxEkU, 0, m, &cVar_fyFdxEkU_sendMessage);
}

void Heavy_Echomatica::cBinop_yDrN1b6G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sIetzfhX_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_yNVQvXlQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_h68xQCTq, HV_BINOP_ADD, 1, m, &cBinop_h68xQCTq_sendMessage);
}

void Heavy_Echomatica::cCast_wQc3XwnT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YI5ze2hT, HV_BINOP_SUBTRACT, 1, m, &cBinop_YI5ze2hT_sendMessage);
}

void Heavy_Echomatica::cBinop_586gKNHa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rY4THFFt_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XG9YJtC5_sendMessage);
}

void Heavy_Echomatica::cMsg_sIetzfhX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_kvqcT9dn, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_NBDYaWlQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_kMVdSP6J_sendMessage);
}

void Heavy_Echomatica::cBinop_kMVdSP6J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Y6cuSEEV_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_cJN3ZtyY_sendMessage);
}

void Heavy_Echomatica::cVar_uNW8txTB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_F8LOrplO_sendMessage);
}

void Heavy_Echomatica::cMsg_oYWaBOef_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_OhTmDlNb_sendMessage);
}

void Heavy_Echomatica::cSystem_OhTmDlNb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_U6XXARVX, HV_BINOP_DIVIDE, 1, m, &cBinop_U6XXARVX_sendMessage);
}

void Heavy_Echomatica::cBinop_Y6cuSEEV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_WMzc5UwB_sendMessage);
}

void Heavy_Echomatica::cBinop_WMzc5UwB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_9M7ngB1y, m);
}

void Heavy_Echomatica::cMsg_tPqpljle_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_1R6f23QP_sendMessage);
}

void Heavy_Echomatica::cBinop_1R6f23QP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_NBDYaWlQ_sendMessage);
}

void Heavy_Echomatica::cBinop_cJN3ZtyY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_qXpH2dWb, m);
}

void Heavy_Echomatica::cBinop_F8LOrplO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_vEo9AeUe_sendMessage);
}

void Heavy_Echomatica::cBinop_vEo9AeUe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_U6XXARVX, HV_BINOP_DIVIDE, 0, m, &cBinop_U6XXARVX_sendMessage);
}

void Heavy_Echomatica::cBinop_U6XXARVX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tPqpljle_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_wM5h3mTx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uZIit7ex, HV_BINOP_DIVIDE, 0, m, &cBinop_uZIit7ex_sendMessage);
}

void Heavy_Echomatica::cVar_jIbrK6gO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sMd9hTiC, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_sMd9hTiC_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_lOF9dLkk, 0, m, &cIf_lOF9dLkk_sendMessage);
}

void Heavy_Echomatica::sEnv_tnIH6Frb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_VLvUOvnu_sendMessage);
}

void Heavy_Echomatica::cBinop_lMCshTSP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_DlLemzZx_sendMessage);
}

void Heavy_Echomatica::cBinop_DlLemzZx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Lch9rjX3_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_StjqmnaO_sendMessage);
}

void Heavy_Echomatica::cCast_Lch9rjX3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_J5Swt9wx, HV_BINOP_POW, 1, m, &cBinop_J5Swt9wx_sendMessage);
}

void Heavy_Echomatica::cCast_StjqmnaO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zXBfBPej_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_zXBfBPej_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_J5Swt9wx, HV_BINOP_POW, 0, m, &cBinop_J5Swt9wx_sendMessage);
}

void Heavy_Echomatica::cBinop_J5Swt9wx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_IvZVkLy8_sendMessage);
}

void Heavy_Echomatica::cIf_lOF9dLkk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_lMCshTSP, HV_BINOP_SUBTRACT, 0, m, &cBinop_lMCshTSP_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_ocCCKioo, HV_BINOP_SUBTRACT, 0, m, &cBinop_ocCCKioo_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_sMd9hTiC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_lOF9dLkk, 1, m, &cIf_lOF9dLkk_sendMessage);
}

void Heavy_Echomatica::cVar_FosdsE00_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Zrx9PzTn_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_CYbd55HO_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0ETFE8q0_sendMessage);
}

void Heavy_Echomatica::cVar_SCAbhwS3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_720sXoB6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3AerhTcy_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_6rVKiQNB_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_YNG9wci2, 0, m, &cSlice_YNG9wci2_sendMessage);
      break;
    }
    default: {
      cSwitchcase_qfYS5tFr_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_YNG9wci2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ikslftDl_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_ikslftDl_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_aCZznhrw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_ikslftDl_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_ikslftDl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_07SBL33t_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_qfYS5tFr_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_oRYk5dMX, 0, m, &cSlice_oRYk5dMX_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_oRYk5dMX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_tYBCfRc6_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_tYBCfRc6_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_hTot1kJu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_tYBCfRc6_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_tYBCfRc6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_7r0BF8Mf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_720sXoB6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uZIit7ex, HV_BINOP_DIVIDE, 1, m, &cBinop_uZIit7ex_sendMessage);
}

void Heavy_Echomatica::cCast_3AerhTcy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wM5h3mTx, 0, m, &cVar_wM5h3mTx_sendMessage);
}

void Heavy_Echomatica::cBinop_uZIit7ex_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0H9OkrvB, HV_BINOP_ADD, 0, m, &cBinop_0H9OkrvB_sendMessage);
}

void Heavy_Echomatica::cBinop_ocCCKioo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wM5h3mTx, 0, m, &cVar_wM5h3mTx_sendMessage);
}

void Heavy_Echomatica::cCast_CYbd55HO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sMd9hTiC, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_sMd9hTiC_sendMessage);
}

void Heavy_Echomatica::cCast_Zrx9PzTn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VOrKmcEZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_EyNYoelX_sendMessage);
}

void Heavy_Echomatica::cCast_0ETFE8q0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jIbrK6gO, 0, m, &cVar_jIbrK6gO_sendMessage);
}

void Heavy_Echomatica::cBinop_0H9OkrvB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lMCshTSP, HV_BINOP_SUBTRACT, 0, m, &cBinop_lMCshTSP_sendMessage);
}

void Heavy_Echomatica::cCast_bZBkTua2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SCAbhwS3, 0, m, &cVar_SCAbhwS3_sendMessage);
}

void Heavy_Echomatica::cCast_8s7Wc1RA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FosdsE00, 0, m, &cVar_FosdsE00_sendMessage);
}

void Heavy_Echomatica::cCast_wgO5ReZk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jIbrK6gO, 0, m, &cVar_jIbrK6gO_sendMessage);
}

void Heavy_Echomatica::cCast_1C6bbftb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lMCshTSP, HV_BINOP_SUBTRACT, 1, m, &cBinop_lMCshTSP_sendMessage);
}

void Heavy_Echomatica::cBinop_IvZVkLy8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_43RhxfEq_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_VOrKmcEZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0H9OkrvB, HV_BINOP_ADD, 1, m, &cBinop_0H9OkrvB_sendMessage);
}

void Heavy_Echomatica::cCast_EyNYoelX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ocCCKioo, HV_BINOP_SUBTRACT, 1, m, &cBinop_ocCCKioo_sendMessage);
}

void Heavy_Echomatica::cBinop_VLvUOvnu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1C6bbftb_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wgO5ReZk_sendMessage);
}

void Heavy_Echomatica::cMsg_43RhxfEq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_HJJXCmBz, 0, m, NULL);
}

void Heavy_Echomatica::cVar_TbVx0CHu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9A27fwnA, HV_BINOP_MULTIPLY, 0, m, &cBinop_9A27fwnA_sendMessage);
}

void Heavy_Echomatica::cMsg_cuLIzOOm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_KZBNMT39_sendMessage);
}

void Heavy_Echomatica::cSystem_KZBNMT39_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SDSvcRS3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_9A27fwnA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_PlanEu0t_sendMessage);
}

void Heavy_Echomatica::cBinop_Y140Yfm8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9A27fwnA, HV_BINOP_MULTIPLY, 1, m, &cBinop_9A27fwnA_sendMessage);
}

void Heavy_Echomatica::cMsg_SDSvcRS3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Y140Yfm8_sendMessage);
}

void Heavy_Echomatica::cBinop_PlanEu0t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_czvoiBlT_sendMessage);
}

void Heavy_Echomatica::cBinop_czvoiBlT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_E1imwkJw_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_WAQmQfVk, m);
}

void Heavy_Echomatica::cBinop_E1imwkJw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_og15qwdE, m);
}

void Heavy_Echomatica::cVar_btjOkdHO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cqwyw3Br, HV_BINOP_MULTIPLY, 0, m, &cBinop_cqwyw3Br_sendMessage);
}

void Heavy_Echomatica::cMsg_sGk30Fjh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_FzF40Ocw_sendMessage);
}

void Heavy_Echomatica::cSystem_FzF40Ocw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VGqZ232A_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_cqwyw3Br_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_NkUPmyn6_sendMessage);
}

void Heavy_Echomatica::cBinop_MW31eAC9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cqwyw3Br, HV_BINOP_MULTIPLY, 1, m, &cBinop_cqwyw3Br_sendMessage);
}

void Heavy_Echomatica::cMsg_VGqZ232A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_MW31eAC9_sendMessage);
}

void Heavy_Echomatica::cBinop_NkUPmyn6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_W8kOIEqA_sendMessage);
}

void Heavy_Echomatica::cBinop_W8kOIEqA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_Gneleovo_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Fqv0G4Aa, m);
}

void Heavy_Echomatica::cBinop_Gneleovo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Cae1OZLL, m);
}

void Heavy_Echomatica::cBinop_k14kvcic_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_KZVuTthB_sendMessage);
}

void Heavy_Echomatica::cBinop_KZVuTthB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_X9Y4YCiI_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_J2H1lG8L_sendMessage);
}

void Heavy_Echomatica::cVar_UeMKUTBI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_IVKMC98C_sendMessage);
}

void Heavy_Echomatica::cMsg_W8jw1GxE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Zs4NQpk3_sendMessage);
}

void Heavy_Echomatica::cSystem_Zs4NQpk3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_30cuKdzt, HV_BINOP_DIVIDE, 1, m, &cBinop_30cuKdzt_sendMessage);
}

void Heavy_Echomatica::cBinop_X9Y4YCiI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_4eV2rBgt_sendMessage);
}

void Heavy_Echomatica::cBinop_4eV2rBgt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_3edEHHiq, m);
}

void Heavy_Echomatica::cMsg_kCkjBFHQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_tOwesWVK_sendMessage);
}

void Heavy_Echomatica::cBinop_tOwesWVK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_k14kvcic_sendMessage);
}

void Heavy_Echomatica::cBinop_J2H1lG8L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_d5wh1Yra, m);
}

void Heavy_Echomatica::cBinop_IVKMC98C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_nIeoT9KY_sendMessage);
}

void Heavy_Echomatica::cBinop_nIeoT9KY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_30cuKdzt, HV_BINOP_DIVIDE, 0, m, &cBinop_30cuKdzt_sendMessage);
}

void Heavy_Echomatica::cBinop_30cuKdzt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_kCkjBFHQ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_lBcLlfDU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_7TXh5EeM_sendMessage);
}

void Heavy_Echomatica::cBinop_7TXh5EeM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_5muNMJZv_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_JOk1q7Yr_sendMessage);
}

void Heavy_Echomatica::cVar_UkRp1I3t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_KqQ208tZ_sendMessage);
}

void Heavy_Echomatica::cMsg_EGQdWlYA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_L6vLK45T_sendMessage);
}

void Heavy_Echomatica::cSystem_L6vLK45T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_h1YR3u7L, HV_BINOP_DIVIDE, 1, m, &cBinop_h1YR3u7L_sendMessage);
}

void Heavy_Echomatica::cBinop_5muNMJZv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_JP2VpMrH_sendMessage);
}

void Heavy_Echomatica::cBinop_JP2VpMrH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_yCXdHHLe, m);
}

void Heavy_Echomatica::cMsg_bcB7vpa7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Omne7Tbo_sendMessage);
}

void Heavy_Echomatica::cBinop_Omne7Tbo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_lBcLlfDU_sendMessage);
}

void Heavy_Echomatica::cBinop_JOk1q7Yr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_KvN3rh5v, m);
}

void Heavy_Echomatica::cBinop_KqQ208tZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_eKlloIm8_sendMessage);
}

void Heavy_Echomatica::cBinop_eKlloIm8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_h1YR3u7L, HV_BINOP_DIVIDE, 0, m, &cBinop_h1YR3u7L_sendMessage);
}

void Heavy_Echomatica::cBinop_h1YR3u7L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bcB7vpa7_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_YnNXXRQA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_C42Q5C7Z_sendMessage);
}

void Heavy_Echomatica::cSystem_C42Q5C7Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_DHPL3tHF_sendMessage);
}

void Heavy_Echomatica::cDelay_t5SLDsV5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_t5SLDsV5, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_KTEOLLv2, 0, m, &cDelay_KTEOLLv2_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_t5SLDsV5, 0, m, &cDelay_t5SLDsV5_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_GvmgXTgd, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_KTEOLLv2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_KTEOLLv2, m);
  cMsg_TD2doGYd_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_mWb2SlbE_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_yXc7Njz8_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_0plUy7Bi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IpNNhwBp_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_nAuTN4MK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BDslDDf7_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_t5SLDsV5, 2, m, &cDelay_t5SLDsV5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6Xj9b7jR_sendMessage);
}

void Heavy_Echomatica::cMsg_IpNNhwBp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_nAuTN4MK, 0, m, &hTable_nAuTN4MK_sendMessage);
}

void Heavy_Echomatica::cBinop_DHPL3tHF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_0plUy7Bi_sendMessage);
}

void Heavy_Echomatica::cMsg_TD2doGYd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_nAuTN4MK, 0, m, &hTable_nAuTN4MK_sendMessage);
}

void Heavy_Echomatica::cCast_6Xj9b7jR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_t5SLDsV5, 0, m, &cDelay_t5SLDsV5_sendMessage);
}

void Heavy_Echomatica::cMsg_BDslDDf7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_KTEOLLv2, 2, m, &cDelay_KTEOLLv2_sendMessage);
}

void Heavy_Echomatica::cMsg_yXc7Njz8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_GvmgXTgd, 1, m, NULL);
}

void Heavy_Echomatica::cSend_BN8R3NJV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_VLahW6hr_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_opeIFGZq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_6vAPSE4a_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_vVYs9nf5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_L26cl1gw_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_134f9e39_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jX2K0qbC_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_1PFOYOTZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_hHdglsto_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_8XDHMjg1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_0a0uX3pY_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_JH0uQIyH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_XCUjuVbm_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_r30YyWB8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_O02gPXrH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_I3Oz6pXN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_XhbU4RJc_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_IqoMi3od_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_91XYjRod_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_rIK1mPLr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_vrbknxZI_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_WzJsEUXs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_PcrmRBR9_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_fsXjUMQ0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_SkHVpm6U_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_JoDDk1r7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_YIUwwCCS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_ClsqGMzx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jL0GkOjw_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_pCZ25oX2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_XD7Jljl9_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_AXky4Ic8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_8BLUywwQ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_VDI3cRhf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_8hAWNI4A_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_1GofiQku_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_HHhDCgia_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_9tQquOym_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_1eN7v5MY_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_GnElTlKI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Mq6U7YYZ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_MDEoIjy5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_PlZHfdnV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_gFsGqflc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_7ZQQ7ZtN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_Td4sNyKO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_XqmVOniv_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_1kEvsUfo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_1cHFBzov_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_5x0Wfq97_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_J57OYhgX_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_P1J92pkd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_oAauLrGy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_12UF6kLA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_5pLFzpZF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_cNyVfIV3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.01f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0qOuEeWP, 0, m, &cSlice_0qOuEeWP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_fzSpNZ8Q, 0, m, &cSlice_fzSpNZ8Q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zi76Y08w, 0, m, &cSlice_zi76Y08w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wYWJvqpK, 0, m, &cSlice_wYWJvqpK_sendMessage);
}

void Heavy_Echomatica::cCast_TRNXKIva_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cNyVfIV3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_Qq6VAFIB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FieYGGIu_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_FieYGGIu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.2f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0qOuEeWP, 0, m, &cSlice_0qOuEeWP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_fzSpNZ8Q, 0, m, &cSlice_fzSpNZ8Q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zi76Y08w, 0, m, &cSlice_zi76Y08w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wYWJvqpK, 0, m, &cSlice_wYWJvqpK_sendMessage);
}

void Heavy_Echomatica::cMsg_u1FL2Kmm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_k6VuibQ3, HV_BINOP_MULTIPLY, 1, m, &cBinop_k6VuibQ3_sendMessage);
}

void Heavy_Echomatica::cBinop_k6VuibQ3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_IOI75Y8M_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_0vCrr7mS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_gCPYgzWz, 0, m, &cVar_gCPYgzWz_sendMessage);
}

void Heavy_Echomatica::cMsg_9UxpRtlA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_Wt8Xxs98, 1, m, &cIf_Wt8Xxs98_sendMessage);
}

void Heavy_Echomatica::cMsg_3TyXxIfF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_Wt8Xxs98, 1, m, &cIf_Wt8Xxs98_sendMessage);
}

void Heavy_Echomatica::cSend_IOI75Y8M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_OxVZh1LJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_BwT1BGBK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ucgEqz2y, 0, m, &cPack_ucgEqz2y_sendMessage);
}

void Heavy_Echomatica::cBinop_29Izxm7n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_x4OHZ9Nj, 0, m, &cPack_x4OHZ9Nj_sendMessage);
}

void Heavy_Echomatica::cBinop_oi5JWcjV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_TgGNaU6W, 0, m, &cPack_TgGNaU6W_sendMessage);
}

void Heavy_Echomatica::cBinop_PR4miYDQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_cplyn7e0, 0, m, &cPack_cplyn7e0_sendMessage);
}

void Heavy_Echomatica::cBinop_vnYyxprt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_aobSIwAZ, 0, m, &cPack_aobSIwAZ_sendMessage);
}

void Heavy_Echomatica::cBinop_HfUMem3U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_tZg3VD0M, 0, m, &cPack_tZg3VD0M_sendMessage);
}

void Heavy_Echomatica::cCast_8wXKh32V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BwT1BGBK, HV_BINOP_MULTIPLY, 1, m, &cBinop_BwT1BGBK_sendMessage);
}

void Heavy_Echomatica::cCast_mGMpw25j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_2u9W9Qej, 0, m, &cVar_2u9W9Qej_sendMessage);
}

void Heavy_Echomatica::cCast_1as7qZbz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tSThRhGR, 0, m, &cVar_tSThRhGR_sendMessage);
}

void Heavy_Echomatica::cCast_5oX155NS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HfUMem3U, HV_BINOP_MULTIPLY, 1, m, &cBinop_HfUMem3U_sendMessage);
}

void Heavy_Echomatica::cCast_bHKr7yRj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vnYyxprt, HV_BINOP_MULTIPLY, 1, m, &cBinop_vnYyxprt_sendMessage);
}

void Heavy_Echomatica::cCast_0TJmBLtf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wEYTtFy2, 0, m, &cVar_wEYTtFy2_sendMessage);
}

void Heavy_Echomatica::cCast_58FiCuwy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JEsFUsVc, 0, m, &cVar_JEsFUsVc_sendMessage);
}

void Heavy_Echomatica::cCast_VLZKSVyv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PR4miYDQ, HV_BINOP_MULTIPLY, 1, m, &cBinop_PR4miYDQ_sendMessage);
}

void Heavy_Echomatica::cCast_fVellMot_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_UmYlFbA2, 0, m, &cVar_UmYlFbA2_sendMessage);
}

void Heavy_Echomatica::cCast_z28T9vYN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oi5JWcjV, HV_BINOP_MULTIPLY, 1, m, &cBinop_oi5JWcjV_sendMessage);
}

void Heavy_Echomatica::cCast_rxg1rYOx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_29Izxm7n, HV_BINOP_MULTIPLY, 1, m, &cBinop_29Izxm7n_sendMessage);
}

void Heavy_Echomatica::cCast_QCThc1dD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_DNaTTV0T, 0, m, &cVar_DNaTTV0T_sendMessage);
}

void Heavy_Echomatica::cBinop_NRjI4WFr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9kxHrWMq_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Z2gezIVg_sendMessage);
}

void Heavy_Echomatica::cMsg_tSMoYoOk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.5f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_NRjI4WFr, HV_BINOP_MULTIPLY, 1, m, &cBinop_NRjI4WFr_sendMessage);
}

void Heavy_Echomatica::cCast_mEUsHr6i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NRjI4WFr, HV_BINOP_MULTIPLY, 0, m, &cBinop_NRjI4WFr_sendMessage);
}

void Heavy_Echomatica::cCast_nR6ym5Aj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tSMoYoOk_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_g3H9o9Qj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_MAHtklSO, HV_BINOP_ADD, 1, m, &cBinop_MAHtklSO_sendMessage);
}

void Heavy_Echomatica::cBinop_MAHtklSO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3BVInNrV, 0, m, &cVar_3BVInNrV_sendMessage);
}

void Heavy_Echomatica::cCast_Z2gezIVg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MAHtklSO, HV_BINOP_ADD, 0, m, &cBinop_MAHtklSO_sendMessage);
}

void Heavy_Echomatica::cCast_9kxHrWMq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_g3H9o9Qj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_RzBRWSSn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3TyXxIfF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_IqSGo6GG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0vCrr7mS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_lcAk4a2r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_u1FL2Kmm_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_rVmTnFHA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_k6VuibQ3, HV_BINOP_MULTIPLY, 0, m, &cBinop_k6VuibQ3_sendMessage);
}

void Heavy_Echomatica::cCast_jDgf4vPC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9UxpRtlA_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_cNgxUcXg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_u1FL2Kmm_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_HZsfs06L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3BVInNrV, 0, m, &cVar_3BVInNrV_sendMessage);
}

void Heavy_Echomatica::cReceive_9tYxld0e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ZhTGp7Rx, 0, m, &cVar_ZhTGp7Rx_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_7JPrtqo6, 0, m, &cVar_7JPrtqo6_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ZzvEYViK, 0, m, &cVar_ZzvEYViK_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_1N6KX8do, 0, m, &cVar_1N6KX8do_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_aCZznhrw, 0, m, &cVar_aCZznhrw_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_hTot1kJu, 0, m, &cVar_hTot1kJu_sendMessage);
  cMsg_7IWx7Y5j_sendMessage(_c, 0, m);
  cMsg_g9heK1um_sendMessage(_c, 0, m);
  cMsg_Kl3nzmRV_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_nmmiNqXJ, 0, m, &cVar_nmmiNqXJ_sendMessage);
  cMsg_h41By6zS_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ahcp0KVH, 0, m, &cVar_ahcp0KVH_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_U7ifNGjH_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cw9PIhI6_sendMessage);
  cMsg_ts89Q775_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_bnBbi2Oq, 0, m, &cVar_bnBbi2Oq_sendMessage);
  cMsg_R81GcDJx_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_J9qHpPQs, 0, m, &cVar_J9qHpPQs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KX89wCUo_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pRz4QyWn_sendMessage);
  cMsg_oYWaBOef_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_uNW8txTB, 0, m, &cVar_uNW8txTB_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bZBkTua2_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8s7Wc1RA_sendMessage);
  cMsg_cuLIzOOm_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_TbVx0CHu, 0, m, &cVar_TbVx0CHu_sendMessage);
  cMsg_sGk30Fjh_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_btjOkdHO, 0, m, &cVar_btjOkdHO_sendMessage);
  cMsg_ePTNuWnZ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_XyB1d4Rb, 0, m, &cVar_XyB1d4Rb_sendMessage);
  cMsg_gpAZXLbC_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ZIciW42i, 0, m, &cVar_ZIciW42i_sendMessage);
  cMsg_5IUjrWiT_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_GmbFS3qz, 0, m, &cVar_GmbFS3qz_sendMessage);
  cMsg_PbX71bWk_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_nTMealMu, 0, m, &cVar_nTMealMu_sendMessage);
  cMsg_PK1WcLND_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_kP9VfP2b, 0, m, &cVar_kP9VfP2b_sendMessage);
  cMsg_LQ5NDIm6_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_hDiOnbKt, 0, m, &cVar_hDiOnbKt_sendMessage);
  cMsg_Bm80M3XZ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_9DemMBNS, 0, m, &cVar_9DemMBNS_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_mwITJGBt, 0, m, &cVar_mwITJGBt_sendMessage);
  cMsg_iLHewl8y_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_FP2Hse6t, 0, m, &cVar_FP2Hse6t_sendMessage);
  cMsg_J40XNRBG_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_IbLmecYj, 0, m, &cVar_IbLmecYj_sendMessage);
  cMsg_k3cbHjfx_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_1s3Vp4nr, 0, m, &cVar_1s3Vp4nr_sendMessage);
  cMsg_ClBK7eue_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_K7lzC0oG, 0, m, &cVar_K7lzC0oG_sendMessage);
  cMsg_CGz9Czpu_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_0vmBdShM, 0, m, &cVar_0vmBdShM_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Wnrarrvq, 0, m, &cVar_Wnrarrvq_sendMessage);
  cMsg_W8jw1GxE_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_UeMKUTBI, 0, m, &cVar_UeMKUTBI_sendMessage);
  cMsg_EGQdWlYA_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_UkRp1I3t, 0, m, &cVar_UkRp1I3t_sendMessage);
  cMsg_YnNXXRQA_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_uBF1FzQH, 0, m, &cVar_uBF1FzQH_sendMessage);
  cMsg_7WDwAEPm_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_PyrhyGxm, 0, m, &cVar_PyrhyGxm_sendMessage);
  cMsg_H7Az1y8O_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_LKLoo9Qn, 0, m, &cVar_LKLoo9Qn_sendMessage);
  cMsg_40DHErAM_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_xXlRCHPY, 0, m, &cVar_xXlRCHPY_sendMessage);
  cMsg_kvNwZK0j_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_BjG6r8Z0, 0, m, &cVar_BjG6r8Z0_sendMessage);
  cMsg_KkSR7IN5_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_mxNb9y75, 0, m, &cVar_mxNb9y75_sendMessage);
  cMsg_pXtuTtmv_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_beUGl6x5, 0, m, &cVar_beUGl6x5_sendMessage);
  cMsg_GhJLBdB6_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_GgVfk48v, 0, m, &cVar_GgVfk48v_sendMessage);
  cMsg_C8DDgBfI_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cReceive_zCd5MIEq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_mSmHTCra_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_VLahW6hr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_DNaTTV0T, 0, m, &cVar_DNaTTV0T_sendMessage);
}

void Heavy_Echomatica::cReceive_6vAPSE4a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_UmYlFbA2, 0, m, &cVar_UmYlFbA2_sendMessage);
}

void Heavy_Echomatica::cReceive_L26cl1gw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JEsFUsVc, 0, m, &cVar_JEsFUsVc_sendMessage);
}

void Heavy_Echomatica::cReceive_jX2K0qbC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wEYTtFy2, 0, m, &cVar_wEYTtFy2_sendMessage);
}

void Heavy_Echomatica::cReceive_hHdglsto_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tSThRhGR, 0, m, &cVar_tSThRhGR_sendMessage);
}

void Heavy_Echomatica::cReceive_0a0uX3pY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_2u9W9Qej, 0, m, &cVar_2u9W9Qej_sendMessage);
}

void Heavy_Echomatica::cReceive_XCUjuVbm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Tjn0cMx6, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_9kmm7Sj3, 0, m, &cVar_9kmm7Sj3_sendMessage);
}

void Heavy_Echomatica::cReceive_O02gPXrH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_9CIwzgCO, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_gKdZR72V, 0, m, &cVar_gKdZR72V_sendMessage);
}

void Heavy_Echomatica::cReceive_XhbU4RJc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_PwkcBY1d, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_oN9VNIFz, 0, m, &cVar_oN9VNIFz_sendMessage);
}

void Heavy_Echomatica::cReceive_91XYjRod_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_UJxYH0Mv, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_uuioPb7n, 0, m, &cVar_uuioPb7n_sendMessage);
}

void Heavy_Echomatica::cReceive_vrbknxZI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_ckKPZBxS, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_oGz4aQF8, 0, m, &cVar_oGz4aQF8_sendMessage);
}

void Heavy_Echomatica::cReceive_PcrmRBR9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Au0tUy1n, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_QFNI2vb8, 0, m, &cVar_QFNI2vb8_sendMessage);
}

void Heavy_Echomatica::cReceive_SkHVpm6U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_KdYJXb8B, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_Am939Ua2, 0, m, &cVar_Am939Ua2_sendMessage);
}

void Heavy_Echomatica::cReceive_YIUwwCCS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_wcpqq8wF, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_wg3yGt1L, 0, m, &cVar_wg3yGt1L_sendMessage);
}

void Heavy_Echomatica::cReceive_jL0GkOjw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_tRB5TDcU, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_2KQxpSxO, 0, m, &cVar_2KQxpSxO_sendMessage);
}

void Heavy_Echomatica::cReceive_XD7Jljl9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_ToIDSwyN, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_PyHrGY3z, 0, m, &cVar_PyHrGY3z_sendMessage);
}

void Heavy_Echomatica::cReceive_8BLUywwQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_1LZs1PzD, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_KqMn7td6, 0, m, &cVar_KqMn7td6_sendMessage);
}

void Heavy_Echomatica::cReceive_8hAWNI4A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_ZKSIiYX2, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_PT8JjNbE, 0, m, &cVar_PT8JjNbE_sendMessage);
}

void Heavy_Echomatica::cReceive_OxVZh1LJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rxg1rYOx_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QCThc1dD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_z28T9vYN_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fVellMot_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VLZKSVyv_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_58FiCuwy_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bHKr7yRj_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0TJmBLtf_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5oX155NS_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1as7qZbz_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_8wXKh32V_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mGMpw25j_sendMessage);
}

void Heavy_Echomatica::cReceive_HHhDCgia_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_BwoxAlHT_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_1eN7v5MY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ZIciW42i, 0, m, &cVar_ZIciW42i_sendMessage);
}

void Heavy_Echomatica::cReceive_Mq6U7YYZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_GmbFS3qz, 0, m, &cVar_GmbFS3qz_sendMessage);
}

void Heavy_Echomatica::cReceive_PlZHfdnV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_nTMealMu, 0, m, &cVar_nTMealMu_sendMessage);
}

void Heavy_Echomatica::cReceive_7ZQQ7ZtN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_kP9VfP2b, 0, m, &cVar_kP9VfP2b_sendMessage);
}

void Heavy_Echomatica::cReceive_XqmVOniv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_hDiOnbKt, 0, m, &cVar_hDiOnbKt_sendMessage);
}

void Heavy_Echomatica::cReceive_1cHFBzov_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9DemMBNS, 0, m, &cVar_9DemMBNS_sendMessage);
}

void Heavy_Echomatica::cReceive_J57OYhgX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ctmbE6lc, m);
}

void Heavy_Echomatica::cReceive_oAauLrGy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FP2Hse6t, 0, m, &cVar_FP2Hse6t_sendMessage);
}

void Heavy_Echomatica::cReceive_5pLFzpZF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mwITJGBt, 0, m, &cVar_mwITJGBt_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_b5TJxGQn_sendMessage);
}

void Heavy_Echomatica::cReceive_LWtFYfN2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_M4rRSJku, 0, m, &cVar_M4rRSJku_sendMessage);
}

void Heavy_Echomatica::cReceive_a4d2tWoT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ZNFTengf_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_sqEKAjc0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_opsCJcSk_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wH7J9WhU_sendMessage);
}

void Heavy_Echomatica::cReceive_ZMn9C8JM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_NYcg30ho_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AUjLb01c_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NXWlYjlL_sendMessage);
}

void Heavy_Echomatica::cReceive_WH8pZTAX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Y4CBB07c, 0, m, &cPack_Y4CBB07c_sendMessage);
}

void Heavy_Echomatica::cReceive_kZ3TdVjL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Hj48sePd, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_59KsUZe6, m);
}

void Heavy_Echomatica::cReceive_9oAC9WuZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_dUVAcPzb, 0, m, &cPack_dUVAcPzb_sendMessage);
}

void Heavy_Echomatica::cReceive_b5Lc85e9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_KXl4pgyw_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_3F129h0z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Fqa68gYe, 0, m, &cPack_Fqa68gYe_sendMessage);
}

void Heavy_Echomatica::cReceive_TYxxlkGr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_63aMACKS_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jokK3vh9_sendMessage);
}

void Heavy_Echomatica::cReceive_4iSwWcGF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dV9VTbs9_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PDEOTHm5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IS040T5G_sendMessage);
}

void Heavy_Echomatica::cReceive_07SBL33t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_720sXoB6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3AerhTcy_sendMessage);
}

void Heavy_Echomatica::cReceive_7r0BF8Mf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Zrx9PzTn_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_CYbd55HO_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0ETFE8q0_sendMessage);
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
    __hv_varread_f(&sVarf_f5IAe0LW, VOf(Bf0));
    __hv_biquad_k_f(&sBiquad_k_93lWa5l2, VIf(Bf0), VOf(Bf1));
    __hv_varread_f(&sVarf_ctmbE6lc, VOf(Bf2));
    __hv_varread_f(&sVarf_NuyCwXwV, VOf(Bf3));
    __hv_rpole_f(&sRPole_8h90LfZL, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_EbWRxc4m, VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_yEGZwcGY, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_Obg1Vr3R, VOf(Bf0));
    __hv_rpole_f(&sRPole_MWfTmLD5, VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_tdbCwGS1, VIf(Bf0), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_cHvwKeWM, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_FvL5jUhJ, VOf(Bf3));
    __hv_rpole_f(&sRPole_BXUFc5qn, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_NHnqFg8o, VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_HjqrkUUR, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_R4eb87sI, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_HC4Y21KV, VOf(Bf3));
    __hv_rpole_f(&sRPole_Bb25juHC, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_xFaZfRen, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_dY9Xf84R, VOf(Bf3));
    __hv_rpole_f(&sRPole_uR84NJ1n, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_rqW0Zbln, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_6glqTQA9, VOf(Bf3));
    __hv_rpole_f(&sRPole_CIG0GI4V, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf1), VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_7gEVwJSe, VOf(Bf2));
    __hv_varread_f(&sVarf_akR3mmzW, VOf(Bf1));
    __hv_varread_f(&sVarf_8r3U3Jp9, VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_9ayjuFHA, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_aMioVZps, VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_BejL10qK, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_KwsN0Wpr, VOf(Bf2));
    __hv_rpole_f(&sRPole_Bty8KFZI, VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_XaNHJB38, VIf(Bf2), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_oiBpd5AX, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_npHNvPUa, VOf(Bf1));
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_SvcHX92p, VOf(Bf2));
    __hv_rpole_f(&sRPole_w7I6IPzw, VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f);
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_LAqRl6bA, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_2CBGyKqW, VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    sEnv_process(this, &sEnv_eYS574wC, VIf(Bf0), &sEnv_eYS574wC_sendMessage);
    __hv_line_f(&sLine_YBZ5mikJ, VOf(Bf4));
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
    __hv_line_f(&sLine_iisaskKs, VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf2), VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_3nOScPIq, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_88fxwhIk, VOf(Bf5));
    __hv_rpole_f(&sRPole_zP485GwI, VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_tabwrite_f(&sTabwrite_GvmgXTgd, VIf(Bf5));
    __hv_phasor_k_f(&sPhasor_wWsXkyhX, VOf(Bf5));
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
    __hv_varread_f(&sVarf_fJrGO122, VOf(Bf2));
    __hv_phasor_k_f(&sPhasor_zOZSSQcK, VOf(Bf5));
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
    __hv_varread_f(&sVarf_XYijverr, VOf(Bf6));
    __hv_mul_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf3), VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_OVuvoQ3D, VIf(Bf6));
    __hv_line_f(&sLine_GExdUxtG, VOf(Bf6));
    __hv_varread_f(&sVarf_OVuvoQ3D, VOf(Bf2));
    __hv_add_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_tabhead_f(&sTabhead_xJ0eb41A, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_exJFoxeD, VOf(Bf6));
    __hv_mul_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_wT0v8HHG, VOf(Bf2));
    __hv_min_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_GHF288d5, VOf(Bf2));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_CgBdJ3u0, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_1pKnGQA3, VIi(Bi0), VOf(Bf2));
    __hv_sub_f(VIf(Bf4), VIf(Bf2), VOf(Bf4));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf4), VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_KdYJXb8B, VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_7gEVwJSe, VIf(Bf3));
    __hv_line_f(&sLine_RR8tQcCQ, VOf(Bf3));
    __hv_varread_f(&sVarf_OVuvoQ3D, VOf(Bf4));
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_tabhead_f(&sTabhead_cijXyhri, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_PCWUzQqe, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_XwVjBYZ4, VOf(Bf4));
    __hv_min_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_MDbEkBad, VOf(Bf4));
    __hv_zero_f(VOf(Bf5));
    __hv_lt_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_cast_fi(VIf(Bf5), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_36gd2ZlO, VIi(Bi1), VOf(Bf5));
    __hv_tabread_if(&sTabread_zGmK3DIm, VIi(Bi0), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf5));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf5), VIf(Bf6), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_tRB5TDcU, VOf(Bf6));
    __hv_mul_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_akR3mmzW, VIf(Bf6));
    __hv_line_f(&sLine_8HB3zn9f, VOf(Bf6));
    __hv_varread_f(&sVarf_OVuvoQ3D, VOf(Bf5));
    __hv_add_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_tabhead_f(&sTabhead_C3DnLDcp, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_xWsOv0Ff, VOf(Bf6));
    __hv_mul_f(VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_olatqWqv, VOf(Bf5));
    __hv_min_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_wpXcJeWU, VOf(Bf5));
    __hv_zero_f(VOf(Bf7));
    __hv_lt_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_and_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_cast_fi(VIf(Bf7), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_DYaUM3BR, VIi(Bi1), VOf(Bf7));
    __hv_tabread_if(&sTabread_GvarUDQy, VIi(Bi0), VOf(Bf5));
    __hv_sub_f(VIf(Bf7), VIf(Bf5), VOf(Bf7));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf7), VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_1LZs1PzD, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_8r3U3Jp9, VIf(Bf3));
    __hv_line_f(&sLine_Icv4Vv5I, VOf(Bf3));
    __hv_varread_f(&sVarf_OVuvoQ3D, VOf(Bf7));
    __hv_add_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_tabhead_f(&sTabhead_O8tdcg19, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_E4ULYZ6h, VOf(Bf3));
    __hv_mul_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_3f7E5juY, VOf(Bf7));
    __hv_min_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_lqWjdUsB, VOf(Bf7));
    __hv_zero_f(VOf(Bf1));
    __hv_lt_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_and_f(VIf(Bf7), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_cast_fi(VIf(Bf1), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_jsb1qnsD, VIi(Bi1), VOf(Bf1));
    __hv_tabread_if(&sTabread_cPKl2gPW, VIi(Bi0), VOf(Bf7));
    __hv_sub_f(VIf(Bf1), VIf(Bf7), VOf(Bf1));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf1), VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_ZKSIiYX2, VOf(Bf6));
    __hv_mul_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_9ayjuFHA, VIf(Bf6));
    __hv_line_f(&sLine_dpLLDQgd, VOf(Bf6));
    __hv_varread_f(&sVarf_OVuvoQ3D, VOf(Bf1));
    __hv_add_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_tabhead_f(&sTabhead_5TYSEbaQ, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_9DLEfrrH, VOf(Bf6));
    __hv_mul_f(VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_LfuiPfXQ, VOf(Bf1));
    __hv_min_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_COsY2iDJ, VOf(Bf1));
    __hv_zero_f(VOf(Bf0));
    __hv_lt_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_and_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_cast_fi(VIf(Bf0), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_BbmPS7qV, VIi(Bi1), VOf(Bf0));
    __hv_tabread_if(&sTabread_A97B03ZI, VIi(Bi0), VOf(Bf1));
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf0));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf0), VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_ToIDSwyN, VOf(Bf3));
    __hv_mul_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_aMioVZps, VIf(Bf3));
    __hv_line_f(&sLine_W6mhXZiG, VOf(Bf3));
    __hv_varread_f(&sVarf_OVuvoQ3D, VOf(Bf0));
    __hv_add_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_tabhead_f(&sTabhead_VdQLeMM0, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_2cPOpjev, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_MUnE0RqN, VOf(Bf0));
    __hv_min_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_bvY6f5Pn, VOf(Bf0));
    __hv_zero_f(VOf(Bf8));
    __hv_lt_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_and_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_cast_fi(VIf(Bf8), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_i0Micfsl, VIi(Bi1), VOf(Bf8));
    __hv_tabread_if(&sTabread_gDB4fVaw, VIi(Bi0), VOf(Bf0));
    __hv_sub_f(VIf(Bf8), VIf(Bf0), VOf(Bf8));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf8), VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_wcpqq8wF, VOf(Bf6));
    __hv_mul_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_BejL10qK, VIf(Bf6));
    sEnv_process(this, &sEnv_d5oOEsl3, VIf(I0), &sEnv_d5oOEsl3_sendMessage);
    __hv_line_f(&sLine_kvqcT9dn, VOf(Bf6));
    __hv_mul_f(VIf(I0), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf8), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf6), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_WAQmQfVk, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_og15qwdE, VOf(Bf6));
    __hv_rpole_f(&sRPole_yxc3wU5O, VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_Sa5KAMtj, VOf(Bf8));
    __hv_rpole_f(&sRPole_5eBNdFEw, VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_zRnL9G8H, VIf(Bf8), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_HJPCg7EU, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    sEnv_process(this, &sEnv_tnIH6Frb, VIf(I1), &sEnv_tnIH6Frb_sendMessage);
    __hv_line_f(&sLine_HJJXCmBz, VOf(Bf6));
    __hv_mul_f(VIf(I1), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf3), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_Fqv0G4Aa, VOf(Bf3));
    __hv_mul_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_Cae1OZLL, VOf(Bf6));
    __hv_rpole_f(&sRPole_vM0VmBHv, VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_qXpH2dWb, VOf(Bf3));
    __hv_rpole_f(&sRPole_VNnKiP0G, VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_Pjlwpb5H, VIf(Bf3), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_9M7ngB1y, VOf(Bf3));
    __hv_mul_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf8), VIf(Bf3), VOf(Bf6));
    __hv_varwrite_f(&sVarf_f5IAe0LW, VIf(Bf6));
    __hv_varread_f(&sVarf_59KsUZe6, VOf(Bf6));
    __hv_mul_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf8), 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f);
    __hv_line_f(&sLine_Tjn0cMx6, VOf(Bf9));
    __hv_line_f(&sLine_9CIwzgCO, VOf(Bf10));
    __hv_line_f(&sLine_PwkcBY1d, VOf(Bf11));
    __hv_line_f(&sLine_UJxYH0Mv, VOf(Bf12));
    __hv_line_f(&sLine_ckKPZBxS, VOf(Bf13));
    __hv_line_f(&sLine_Au0tUy1n, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf5), VIf(Bf13), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf1), VIf(Bf12), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf4), VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf0), VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf2), VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_aGuhfUMl, VOf(Bf9));
    __hv_rpole_f(&sRPole_aoSM82Q7, VIf(Bf14), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_d1bVWWyS, VIf(Bf9), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_5LzuIbPI, VOf(Bf9));
    __hv_mul_f(VIf(Bf14), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf14), 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f);
    __hv_min_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf9), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf14), VIf(Bf9), VOf(Bf9));
    __hv_line_f(&sLine_aJCJQK5G, VOf(Bf14));
    __hv_mul_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_phasor_k_f(&sPhasor_E0WUfpcD, VOf(Bf9));
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
    __hv_tabhead_f(&sTabhead_YDeORiEQ, VOf(Bf0));
    __hv_var_k_f_r(VOf(Bf2), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_5E9Dl6JM, VOf(Bf0));
    __hv_mul_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_2zBuh4mo, VOf(Bf9));
    __hv_min_f(VIf(Bf0), VIf(Bf9), VOf(Bf9));
    __hv_zero_f(VOf(Bf0));
    __hv_max_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf2));
    __hv_varread_f(&sVarf_tCLbl6Aa, VOf(Bf9));
    __hv_zero_f(VOf(Bf11));
    __hv_lt_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_and_f(VIf(Bf9), VIf(Bf11), VOf(Bf11));
    __hv_add_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_cast_fi(VIf(Bf11), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_VmYt212K, VIi(Bi1), VOf(Bf11));
    __hv_tabread_if(&sTabread_y3hq0gyL, VIi(Bi0), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf11), VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf9), VIf(Bf2), VIf(Bf14), VOf(Bf2));
    __hv_varread_f(&sVarf_K5LtP5sk, VOf(Bf9));
    __hv_rpole_f(&sRPole_zv1q0JG1, VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_uJWHoh8F, VIf(Bf9), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_ed8IJPo0, VOf(Bf9));
    __hv_mul_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_phasor_k_f(&sPhasor_uDePspxy, VOf(Bf2));
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
    __hv_tabhead_f(&sTabhead_u1M1oQmQ, VOf(Bf10));
    __hv_var_k_f_r(VOf(Bf11), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_TgXg08S6, VOf(Bf10));
    __hv_mul_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_pTx9A4tV, VOf(Bf2));
    __hv_min_f(VIf(Bf10), VIf(Bf2), VOf(Bf2));
    __hv_zero_f(VOf(Bf10));
    __hv_max_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf11), VIf(Bf10), VOf(Bf10));
    __hv_floor_f(VIf(Bf10), VOf(Bf11));
    __hv_varread_f(&sVarf_hahk0zDf, VOf(Bf2));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf11), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf11), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_LivegZPc, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_b5eRTCKH, VIi(Bi0), VOf(Bf2));
    __hv_sub_f(VIf(Bf4), VIf(Bf2), VOf(Bf4));
    __hv_sub_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_fma_f(VIf(Bf4), VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf2), VIf(Bf11), VIf(Bf14), VOf(Bf11));
    __hv_varread_f(&sVarf_T16ZYoFl, VOf(Bf2));
    __hv_rpole_f(&sRPole_wsSd688U, VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_10LNqfXw, VIf(Bf2), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_3g9OLE8S, VOf(Bf2));
    __hv_mul_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_v05dzKYv, VOf(Bf11));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_tabwrite_f(&sTabwrite_0sIe2fpv, VIf(Bf11));
    __hv_varread_f(&sVarf_kqrvlrjz, VOf(Bf11));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_tabwrite_f(&sTabwrite_8cN25VSq, VIf(Bf11));
    __hv_fma_f(VIf(Bf6), VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_d5wh1Yra, VOf(Bf8));
    __hv_rpole_f(&sRPole_aTqZBKgk, VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_f8Cr7xlm, VIf(Bf8), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_3edEHHiq, VOf(Bf8));
    __hv_mul_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf8), VIf(O0), VOf(O0));
    __hv_varread_f(&sVarf_Hj48sePd, VOf(Bf8));
    __hv_mul_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf3), 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f);
    __hv_fma_f(VIf(Bf8), VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_KvN3rh5v, VOf(Bf3));
    __hv_rpole_f(&sRPole_GJX7DjBS, VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_IuNYf3Li, VIf(Bf3), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_yCXdHHLe, VOf(Bf3));
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
