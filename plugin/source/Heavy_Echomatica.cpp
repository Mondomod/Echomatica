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
  numBytes += sBiquad_k_init(&sBiquad_k_loiYuMC5, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  numBytes += sRPole_init(&sRPole_TAhAoBEO);
  numBytes += sDel1_init(&sDel1_QFFrIY5A);
  numBytes += sRPole_init(&sRPole_FhSSL59C);
  numBytes += sDel1_init(&sDel1_xAFjEt97);
  numBytes += sRPole_init(&sRPole_3pRDtR7k);
  numBytes += sDel1_init(&sDel1_o6aUKRUF);
  numBytes += sRPole_init(&sRPole_G8FN3xMq);
  numBytes += sRPole_init(&sRPole_mttVwrvs);
  numBytes += sRPole_init(&sRPole_hsO7v7je);
  numBytes += sRPole_init(&sRPole_rPqgVnFQ);
  numBytes += sDel1_init(&sDel1_p8FhwCTe);
  numBytes += sRPole_init(&sRPole_Xb6nxgqW);
  numBytes += sLine_init(&sLine_48LL9Pyg);
  numBytes += sLine_init(&sLine_UTR0isYR);
  numBytes += sEnv_init(&sEnv_f8pa2QUs, 256, 512);
  numBytes += sLine_init(&sLine_xAZFSuM9);
  numBytes += sLine_init(&sLine_PMAVwrw6);
  numBytes += sRPole_init(&sRPole_x4qqXrrT);
  numBytes += sTabwrite_init(&sTabwrite_ZzyrRusB, &hTable_xAIboSsG);
  numBytes += sPhasor_k_init(&sPhasor_G68Y2eGK, 0.0f, sampleRate);
  numBytes += sPhasor_k_init(&sPhasor_phlLOT9o, 0.0f, sampleRate);
  numBytes += sLine_init(&sLine_a6R5qaC1);
  numBytes += sTabhead_init(&sTabhead_iFNNLFyq, &hTable_xAIboSsG);
  numBytes += sTabread_init(&sTabread_B0PBKyJR, &hTable_xAIboSsG, false);
  numBytes += sTabread_init(&sTabread_t2qvPJtJ, &hTable_xAIboSsG, false);
  numBytes += sLine_init(&sLine_S5EWtDvf);
  numBytes += sLine_init(&sLine_nvlPOmz4);
  numBytes += sTabhead_init(&sTabhead_uJ2aDBpY, &hTable_xAIboSsG);
  numBytes += sTabread_init(&sTabread_CtbeBsIz, &hTable_xAIboSsG, false);
  numBytes += sTabread_init(&sTabread_ULzo2alf, &hTable_xAIboSsG, false);
  numBytes += sLine_init(&sLine_43oXhuws);
  numBytes += sLine_init(&sLine_TLWHQUMV);
  numBytes += sTabhead_init(&sTabhead_KqymbQ1P, &hTable_xAIboSsG);
  numBytes += sTabread_init(&sTabread_TntfKige, &hTable_xAIboSsG, false);
  numBytes += sTabread_init(&sTabread_ogQloOXh, &hTable_xAIboSsG, false);
  numBytes += sLine_init(&sLine_UEBquUK8);
  numBytes += sLine_init(&sLine_0asGCWae);
  numBytes += sTabhead_init(&sTabhead_8J3A04s4, &hTable_xAIboSsG);
  numBytes += sTabread_init(&sTabread_sZE0td3Z, &hTable_xAIboSsG, false);
  numBytes += sTabread_init(&sTabread_qi3Qy5Xf, &hTable_xAIboSsG, false);
  numBytes += sLine_init(&sLine_rUWQL3wU);
  numBytes += sLine_init(&sLine_BiOr49ZJ);
  numBytes += sTabhead_init(&sTabhead_ChxSn7Rp, &hTable_xAIboSsG);
  numBytes += sTabread_init(&sTabread_DcuUkwuv, &hTable_xAIboSsG, false);
  numBytes += sTabread_init(&sTabread_tlMCDEU9, &hTable_xAIboSsG, false);
  numBytes += sLine_init(&sLine_ORTf9BR0);
  numBytes += sLine_init(&sLine_P6oEct1Q);
  numBytes += sTabhead_init(&sTabhead_GEwAizTr, &hTable_xAIboSsG);
  numBytes += sTabread_init(&sTabread_SpGjpbbD, &hTable_xAIboSsG, false);
  numBytes += sTabread_init(&sTabread_x5spSLms, &hTable_xAIboSsG, false);
  numBytes += sLine_init(&sLine_E8WM2yWh);
  numBytes += sEnv_init(&sEnv_4vftZG2q, 256, 512);
  numBytes += sLine_init(&sLine_aO7GhjbO);
  numBytes += sRPole_init(&sRPole_X0Cbswcl);
  numBytes += sRPole_init(&sRPole_AtY2CClq);
  numBytes += sDel1_init(&sDel1_d43J14HK);
  numBytes += sEnv_init(&sEnv_YeoVMRp3, 256, 512);
  numBytes += sLine_init(&sLine_J6S20KpL);
  numBytes += sRPole_init(&sRPole_ncZIBpqo);
  numBytes += sRPole_init(&sRPole_pp7rdhuA);
  numBytes += sDel1_init(&sDel1_OmBbXjAV);
  numBytes += sRPole_init(&sRPole_eNODkBiT);
  numBytes += sDel1_init(&sDel1_Ciizyjgo);
  numBytes += sLine_init(&sLine_FzOMdSyh);
  numBytes += sPhasor_k_init(&sPhasor_QNXx2YtS, 0.3f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_PrFERlrB, &hTable_oR00A0XF);
  numBytes += sTabread_init(&sTabread_rTQO6xcb, &hTable_oR00A0XF, false);
  numBytes += sTabread_init(&sTabread_kUrSbaMf, &hTable_oR00A0XF, false);
  numBytes += sRPole_init(&sRPole_WPP7oQRg);
  numBytes += sDel1_init(&sDel1_VpqIHrmv);
  numBytes += sPhasor_k_init(&sPhasor_L4EAqe4m, 0.5f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_OptNTTZz, &hTable_Bu2hii23);
  numBytes += sTabread_init(&sTabread_9owLQv2l, &hTable_Bu2hii23, false);
  numBytes += sTabread_init(&sTabread_wgzYO1FH, &hTable_Bu2hii23, false);
  numBytes += sRPole_init(&sRPole_mkyAvb52);
  numBytes += sDel1_init(&sDel1_dAhcPlpJ);
  numBytes += sTabwrite_init(&sTabwrite_TihwjOhr, &hTable_Bu2hii23);
  numBytes += sTabwrite_init(&sTabwrite_r3lLXQA5, &hTable_oR00A0XF);
  numBytes += sRPole_init(&sRPole_CczdtN0r);
  numBytes += sDel1_init(&sDel1_1pY2ivMP);
  numBytes += sRPole_init(&sRPole_0oBuZIkK);
  numBytes += sDel1_init(&sDel1_TiPYYQnt);
  numBytes += sLine_init(&sLine_PFpoo91Q);
  numBytes += sLine_init(&sLine_UkF0fL5p);
  numBytes += sLine_init(&sLine_SW4nxmrF);
  numBytes += sLine_init(&sLine_G4CMZ2yJ);
  numBytes += sLine_init(&sLine_s2vheiAf);
  numBytes += sLine_init(&sLine_uh132vGA);
  numBytes += cVar_init_s(&cVar_ICEIkWX2, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_XBnCYtod, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_jImF47JW, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_nUOha5SQ, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_87eUD1dE, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_lOMo614K, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ntjztINf, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Sky1nRO6, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_03Sel2dy, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_84VU6pzE, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_AVgaGzMK, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_3577cba7, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_0eQJ2Eba, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_zNpuydZa, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_0SmtHE6X, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Sn330rfX, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_3rTZuEGk, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_hacCwliC, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_chFnERaZ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_wLZSG22j, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_XE22JYdh, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_xGqOcils, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_2pYoQIli, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_UX7LG1Ox, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_2rg4AHXU, 0.0f);
  numBytes += cVar_init_f(&cVar_bNMBtHAu, 0.0f);
  numBytes += cVar_init_f(&cVar_WZz6JSRw, 0.0f);
  numBytes += cVar_init_f(&cVar_j7zEJ7Cm, 0.0f);
  numBytes += cVar_init_f(&cVar_6QZSaZVd, 0.0f);
  numBytes += cVar_init_f(&cVar_MI2dnPuW, 0.0f);
  numBytes += cVar_init_f(&cVar_NVEwxJ3N, 0.0f);
  numBytes += cVar_init_f(&cVar_5r6UZHno, 0.0f);
  numBytes += cVar_init_f(&cVar_eDOXfwe9, 0.0f);
  numBytes += cVar_init_f(&cVar_TIXRCnBY, 0.0f);
  numBytes += cVar_init_f(&cVar_3vYPeGrB, 0.0f);
  numBytes += cVar_init_f(&cVar_hj7KXjih, 0.0f);
  numBytes += cPack_init(&cPack_dzy3qvh5, 2, 0.0f, 20.0f);
  numBytes += cPack_init(&cPack_lUuc3HKl, 2, 0.0f, 1800.0f);
  numBytes += cPack_init(&cPack_KiuIQBKI, 2, 0.0f, 1600.0f);
  numBytes += cPack_init(&cPack_EIjuTPfH, 2, 0.0f, 1300.0f);
  numBytes += cPack_init(&cPack_Q4wmx781, 2, 0.0f, 1000.0f);
  numBytes += cPack_init(&cPack_lfdZot6z, 2, 0.0f, 800.0f);
  numBytes += cPack_init(&cPack_fToybE6K, 2, 0.0f, 600.0f);
  numBytes += cSlice_init(&cSlice_cAKChK8v, 27, 1);
  numBytes += cSlice_init(&cSlice_qVcao0Qx, 26, 1);
  numBytes += cSlice_init(&cSlice_gm9OUH92, 25, 1);
  numBytes += cSlice_init(&cSlice_ARRFRJfJ, 24, 1);
  numBytes += cSlice_init(&cSlice_eULVgyul, 23, 1);
  numBytes += cSlice_init(&cSlice_eaxtQRRe, 22, 1);
  numBytes += cSlice_init(&cSlice_rtdzxjx3, 21, 1);
  numBytes += cSlice_init(&cSlice_EaiqeDnT, 20, 1);
  numBytes += cSlice_init(&cSlice_2uOgvQEE, 19, 1);
  numBytes += cSlice_init(&cSlice_J0Zy2txk, 18, 1);
  numBytes += cSlice_init(&cSlice_diEH4ZYo, 17, 1);
  numBytes += cSlice_init(&cSlice_bZAhhd4r, 16, 1);
  numBytes += cSlice_init(&cSlice_F6qCr5Lp, 15, 1);
  numBytes += cSlice_init(&cSlice_qVdWLjvL, 14, 1);
  numBytes += cSlice_init(&cSlice_qujIeLcc, 13, 1);
  numBytes += cSlice_init(&cSlice_U8oQyEuM, 12, 1);
  numBytes += cSlice_init(&cSlice_l18QuwaC, 11, 1);
  numBytes += cSlice_init(&cSlice_1eEDqxrt, 10, 1);
  numBytes += cSlice_init(&cSlice_l0SOoFSo, 9, 1);
  numBytes += cSlice_init(&cSlice_nUYuugDY, 8, 1);
  numBytes += cSlice_init(&cSlice_LVAAWOem, 7, 1);
  numBytes += cSlice_init(&cSlice_hLZBxGyl, 6, 1);
  numBytes += cSlice_init(&cSlice_XL4C5waY, 5, 1);
  numBytes += cSlice_init(&cSlice_JrOt0SCt, 4, 1);
  numBytes += cSlice_init(&cSlice_XxQNZWPg, 3, 1);
  numBytes += cSlice_init(&cSlice_X5HNwryw, 2, 1);
  numBytes += cSlice_init(&cSlice_jRg0wVHp, 1, 1);
  numBytes += cSlice_init(&cSlice_RgJLFUDt, 0, 1);
  numBytes += sVarf_init(&sVarf_kbZBg2PD, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_imJIOhlw, 0.0f);
  numBytes += cBinop_init(&cBinop_sgFEIAR0, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_9G9jYNhh, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Zo0H5CY9, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_OCpcpZCg, 0.0f);
  numBytes += cBinop_init(&cBinop_t7Q0UiUy, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_8YyUBXMy, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_xIrBFsCk, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_v0VlXVNG, 0.0f);
  numBytes += cBinop_init(&cBinop_eqhgLZda, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_V2PCvtQO, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_K1wLVPYq, 22050.0f);
  numBytes += cBinop_init(&cBinop_0Bp0fh76, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_VYW3Em0i, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_qaPNQ9bk, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_kSYxaQez, 22050.0f);
  numBytes += cBinop_init(&cBinop_gGl0UbTJ, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_kHUo7dV7, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_72T4Bva3, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_IHQaTqtZ, 22050.0f);
  numBytes += cBinop_init(&cBinop_1rrnuAkd, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_tS7Vc0Ml, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ZyqTtYEc, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_WTcp6FCO, 22050.0f);
  numBytes += cVar_init_f(&cVar_H57kW1if, 1.0f);
  numBytes += cBinop_init(&cBinop_Xlux8k4v, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_CpXGCARa, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_E3I6vwdP, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_NPWUNPVG, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_rZz9vB4B, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_on5NjNvA, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_oWoxGfJc, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_TDukiTDV, 0.0f);
  numBytes += cVar_init_f(&cVar_lx0AKgQv, 0.0f);
  numBytes += cVar_init_f(&cVar_G0hYcICy, 0.0f);
  numBytes += cVar_init_f(&cVar_AtfSUqcp, 0.0f);
  numBytes += cVar_init_f(&cVar_BHR4QbaJ, 0.0f);
  numBytes += cVar_init_f(&cVar_x7imYXTh, 0.0f);
  numBytes += cSlice_init(&cSlice_fgxi0wWh, 3, 1);
  numBytes += cSlice_init(&cSlice_71lZOi23, 2, 1);
  numBytes += cSlice_init(&cSlice_zgOZP12x, 1, 1);
  numBytes += cSlice_init(&cSlice_YFTifp6L, 0, 1);
  numBytes += cPack_init(&cPack_kko2CkAq, 2, 0.0f, 50.0f);
  numBytes += cDelay_init(this, &cDelay_LesS5ndT, 0.0f);
  numBytes += cDelay_init(this, &cDelay_x52EtyBc, 0.0f);
  numBytes += hTable_init(&hTable_Bu2hii23, 256);
  numBytes += cVar_init_f(&cVar_w4hSaAQW, 0.0f);
  numBytes += cVar_init_s(&cVar_NTGAE1ul, "del-1001-delayD");
  numBytes += sVarf_init(&sVarf_Apj3pBkj, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_2QuxuKQc, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_aN3B3JpT, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_7TneJBqy, "del-1001-delayC");
  numBytes += sVarf_init(&sVarf_c1ZZxxWf, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_C5nexXEw, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_5dZem6tZ, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_aeuJdbGm, 0.0f);
  numBytes += cDelay_init(this, &cDelay_3oOjQNEg, 0.0f);
  numBytes += hTable_init(&hTable_oR00A0XF, 256);
  numBytes += sVarf_init(&sVarf_0aFgsf8H, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_7Wi3TOyJ, 3.0f);
  numBytes += cBinop_init(&cBinop_MQ1gW7uX, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_PNgHyURc, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_1ChFRYgX, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_8qbHJ3iQ, 3.0f);
  numBytes += cBinop_init(&cBinop_VGIy5eQk, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_GDqmAVCN, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_tSsl8zRz, 1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_BB81avOo, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_XtPrSkAH, 0.0f);
  numBytes += cVar_init_f(&cVar_9jFvP9Yy, 0.0f);
  numBytes += cVar_init_f(&cVar_eJDAHrdQ, 0.0f);
  numBytes += cPack_init(&cPack_nJWalzx6, 2, 0.0f, 100.0f);
  numBytes += cPack_init(&cPack_P0w2EYOm, 2, 0.0f, 100.0f);
  numBytes += cVar_init_f(&cVar_H8rzJGy6, 0.0f);
  numBytes += cVar_init_f(&cVar_1DXVmulJ, 0.0f);
  numBytes += cVar_init_f(&cVar_uayPsd4a, 0.0f);
  numBytes += cBinop_init(&cBinop_rxepvfms, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_gYTfQIBz, 0.0f); // __pow
  numBytes += cIf_init(&cIf_dmRWWlKf, false);
  numBytes += cBinop_init(&cBinop_iL1rQ9Wp, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_v9O5p70e, 74.0f);
  numBytes += cVar_init_f(&cVar_UAf7d0Kr, 3.0f);
  numBytes += cSlice_init(&cSlice_SQ3smkm7, 1, -1);
  numBytes += cVar_init_f(&cVar_izEsITlU, 1.0f);
  numBytes += cSlice_init(&cSlice_87zTsxl9, 1, -1);
  numBytes += cVar_init_f(&cVar_dCjsO9Gf, 70.0f);
  numBytes += cBinop_init(&cBinop_SYlGZpST, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_uUYfcnbw, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_qCVzcsBM, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_kbuSYQBZ, 3000.0f);
  numBytes += cBinop_init(&cBinop_DXoVH7Lb, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_J435cWQB, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_eKMgMi2L, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_V7P67Y9n, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_wUtorRt4, 400.0f);
  numBytes += cBinop_init(&cBinop_kPIm9Toj, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_FskPHzZy, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_E4cyVh3U, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_t8GzuYC0, 30.0f);
  numBytes += cBinop_init(&cBinop_aqyZN1as, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_ZCDMH6Nt, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_hAVcR5Ov, false);
  numBytes += cVar_init_f(&cVar_N5SDlrZY, 0.0f);
  numBytes += cVar_init_f(&cVar_mE865qZl, 0.0f);
  numBytes += cPack_init(&cPack_p8zJQn7h, 3, 0.0f, 500.0f, 100.0f);
  numBytes += cDelay_init(this, &cDelay_OBaYvu6d, 0.0f);
  numBytes += cVar_init_f(&cVar_GlkqmJam, 20.0f);
  numBytes += cBinop_init(&cBinop_BRlp91PS, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_uaCviU4C, 0.0f);
  numBytes += cSlice_init(&cSlice_ZvEo8swK, 1, -1);
  numBytes += cSlice_init(&cSlice_zSCSUaFd, 1, -1);
  numBytes += cVar_init_f(&cVar_oaQK3YQK, 0.0f);
  numBytes += cVar_init_f(&cVar_9VPf3buc, 20.0f);
  numBytes += cVar_init_f(&cVar_anlQUJn6, 0.0f);
  numBytes += cVar_init_f(&cVar_rUw7WFSt, 0.0f);
  numBytes += cVar_init_f(&cVar_94UzbUM7, 0.0f);
  numBytes += cSlice_init(&cSlice_rvtZcj4T, 1, 1);
  numBytes += cSlice_init(&cSlice_oLryQ5PH, 0, 1);
  numBytes += cBinop_init(&cBinop_TVouzEVv, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_nhTylQ1p, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_YsKQFnw8, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_CfyCx3Ji, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_K4aTYkf2, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_KGjp7GgB, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_hhcXqNCR, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_biK3ElqM, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_WHQZVKib, 0.0f);
  numBytes += cVar_init_f(&cVar_830y943j, 0.0f);
  numBytes += cVar_init_f(&cVar_Sq08Ndlz, 0.0f);
  numBytes += cVar_init_f(&cVar_Ns6GDlMI, 0.0f);
  numBytes += cVar_init_f(&cVar_Me41wxwQ, 0.0f);
  numBytes += cVar_init_f(&cVar_A1aZDaBU, 0.0f);
  numBytes += sVarf_init(&sVarf_iZfyaZnp, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_X2KKjskD, 8.0f);
  numBytes += cBinop_init(&cBinop_Evskkssy, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_yjqd6llX, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_rMSgKSFl, 0.0f);
  numBytes += cVar_init_f(&cVar_N2m52hDl, 0.0f);
  numBytes += cBinop_init(&cBinop_ZTneeeeX, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_MQ5vdPxv, 0.0f); // __pow
  numBytes += cIf_init(&cIf_CRvyJO4P, false);
  numBytes += cBinop_init(&cBinop_J0Q0nAjk, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_ZVziFXWv, 82.0f);
  numBytes += cVar_init_f(&cVar_RpHoV4XX, 21.0f);
  numBytes += cSlice_init(&cSlice_9rGahRIT, 1, -1);
  numBytes += cVar_init_f(&cVar_IyZTLGXp, 1.0f);
  numBytes += cSlice_init(&cSlice_zf1DD3F2, 1, -1);
  numBytes += cVar_init_f(&cVar_GjZQT7z0, 70.0f);
  numBytes += cBinop_init(&cBinop_4DlhaEKb, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_O0A4BI8w, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_BG5pvVNh, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_3BcyYUL3, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_d1Wsc0u7, 8.0f);
  numBytes += cBinop_init(&cBinop_z9c14g8l, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_lmPLqVmc, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_3TZO1WuW, 0.0f);
  numBytes += cVar_init_f(&cVar_oYgzjGJv, 0.0f);
  numBytes += cBinop_init(&cBinop_jly103yr, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_VGDf6UJ1, 0.0f); // __pow
  numBytes += cIf_init(&cIf_l9pKcgzJ, false);
  numBytes += cBinop_init(&cBinop_MP7w9biS, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_aAOjObnU, 82.0f);
  numBytes += cVar_init_f(&cVar_zNhRl7D7, 21.0f);
  numBytes += cSlice_init(&cSlice_yGHWyIZr, 1, -1);
  numBytes += cVar_init_f(&cVar_FFrtG9kt, 1.0f);
  numBytes += cSlice_init(&cSlice_rVUw4K6p, 1, -1);
  numBytes += cVar_init_f(&cVar_UGLG1kUF, 70.0f);
  numBytes += cBinop_init(&cBinop_XDXF1hYr, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_LzhcDBAf, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_LTEVSbax, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_E42rxHSR, 10000.0f);
  numBytes += cBinop_init(&cBinop_9FJJYqUp, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_vBfrnGzy, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_tuFir7xh, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_CFvvTcSr, 10000.0f);
  numBytes += cBinop_init(&cBinop_NfJH4wet, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_uTlvad6S, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_iSqXoqWW, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_8r3XynoW, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_tZwyXwlA, 20.0f);
  numBytes += cBinop_init(&cBinop_DcLC5Neo, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_fCSkq5XW, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_KV3WzBJu, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_0ZDlG8DM, 20.0f);
  numBytes += cBinop_init(&cBinop_zB4VsY7L, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_bx5FKLIM, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_C141WdlT, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_pg6cwUCf, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_yx6h2w4O, 0.0f);
  numBytes += cDelay_init(this, &cDelay_IFo6JfLZ, 0.0f);
  numBytes += hTable_init(&hTable_xAIboSsG, 256);
  numBytes += cVar_init_f(&cVar_byfkUJUn, 8000.0f);
  numBytes += cBinop_init(&cBinop_L85uugga, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_pYnaoByU, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_wUO3oqXT, 0.0f, 0.0f, false);
  numBytes += cExpr_init(&cExpr_dYRS7YXf, &Heavy_Echomatica::cExpr_dYRS7YXf_evaluate);
  numBytes += sVarf_init(&sVarf_UmKoO7Jv, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_uP9HreJR, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_bDvOF5vz, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_hxUtV35x, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_l6W4L333, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_R254PJom, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_s5Ypbz3X, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_DNESb3tW, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_zGC10UMZ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_aGM1RwCJ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_rpK4ksIM, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_07udjAsk, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_9wzAEek8, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_fS8lwFgN, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_1Ywqfou5, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_CrDBezAU, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_mCRV92Lr, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_uXhDoc1Y, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_s1ZtzYHx, 0.0f, 0.0f, false);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_Echomatica::~Heavy_Echomatica() {
  sEnv_free(&sEnv_f8pa2QUs);
  sEnv_free(&sEnv_4vftZG2q);
  sEnv_free(&sEnv_YeoVMRp3);
  cPack_free(&cPack_dzy3qvh5);
  cPack_free(&cPack_lUuc3HKl);
  cPack_free(&cPack_KiuIQBKI);
  cPack_free(&cPack_EIjuTPfH);
  cPack_free(&cPack_Q4wmx781);
  cPack_free(&cPack_lfdZot6z);
  cPack_free(&cPack_fToybE6K);
  cPack_free(&cPack_kko2CkAq);
  hTable_free(&hTable_Bu2hii23);
  hTable_free(&hTable_oR00A0XF);
  cPack_free(&cPack_nJWalzx6);
  cPack_free(&cPack_P0w2EYOm);
  cPack_free(&cPack_p8zJQn7h);
  hTable_free(&hTable_xAIboSsG);
  cExpr_free(&cExpr_dYRS7YXf);
}

HvTable *Heavy_Echomatica::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0x6F28B8EB: return &hTable_Bu2hii23; // del-1001-delayD
    case 0xA74180A2: return &hTable_oR00A0XF; // del-1001-delayC
    case 0xC7C6279C: return &hTable_xAIboSsG; // del-1001-delayA
    default: return nullptr;
  }
}

void Heavy_Echomatica::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0x22C9B907: { // Vari
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_nPSfcbeR_sendMessage);
      break;
    }
    case 0xD137AA79: { // 1198-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ACS1HAkI_sendMessage);
      break;
    }
    case 0x88303B1D: { // 1198-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_uVlrzoL6_sendMessage);
      break;
    }
    case 0x41773AF7: { // 1276-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_CtmFsuf7_sendMessage);
      break;
    }
    case 0xDEB10149: { // 1276-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_5F9ojLJJ_sendMessage);
      break;
    }
    case 0x9DF6835D: { // 1298-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_KV7rj9T0_sendMessage);
      break;
    }
    case 0xA9789206: { // 1298-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_wU4tyMpu_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_GBdRUAPs_sendMessage);
      break;
    }
    case 0xE68AB11B: { // chrs
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Kt4fU8KO_sendMessage);
      break;
    }
    case 0xBA8CED4E: { // dry
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_HtaeA97y_sendMessage);
      break;
    }
    case 0x63E722C0: { // echo
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Kvx7UJKI_sendMessage);
      break;
    }
    case 0x8FA433B0: { // f1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_RBYGWZOh_sendMessage);
      break;
    }
    case 0xEE0EB120: { // f2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_IEW5bEO3_sendMessage);
      break;
    }
    case 0x4FFCF19F: { // f3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_jZFsPgPF_sendMessage);
      break;
    }
    case 0x2AF9F5EB: { // f4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_PjfT4dzH_sendMessage);
      break;
    }
    case 0xC6F6EBB2: { // f5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_cKlyzcrL_sendMessage);
      break;
    }
    case 0x775D6E5E: { // f6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_WCYSJYin_sendMessage);
      break;
    }
    case 0xBB6123FD: { // fdbck_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_uoFtvJoB_sendMessage);
      break;
    }
    case 0xF1E7CD16: { // feedback
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_AG6NjNJB_sendMessage);
      break;
    }
    case 0xC7AF3F72: { // h1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_UxNlmzfm_sendMessage);
      break;
    }
    case 0x9BEBB079: { // h2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_uUcWWh3g_sendMessage);
      break;
    }
    case 0xAB1137FD: { // h3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_xU3TH7Cg_sendMessage);
      break;
    }
    case 0x2B4C6DE1: { // h4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_NXUyFmjc_sendMessage);
      break;
    }
    case 0x2541E77D: { // h5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_d7jlxzcy_sendMessage);
      break;
    }
    case 0xE7F6D341: { // h6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_UxNERn1f_sendMessage);
      break;
    }
    case 0x5667A4DA: { // head1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_DJtnTipX_sendMessage);
      break;
    }
    case 0xAD6B31A5: { // head2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_r5vH41YS_sendMessage);
      break;
    }
    case 0x8A2BD450: { // head3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4NWrEjoa_sendMessage);
      break;
    }
    case 0xCF5C829A: { // head4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_zBhjT8gY_sendMessage);
      break;
    }
    case 0xEE70DFBC: { // head5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_7fXj9dvW_sendMessage);
      break;
    }
    case 0x8E4B9939: { // head6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_EsBc5gxL_sendMessage);
      break;
    }
    case 0x7E24361: { // hp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_SkfPsJUG_sendMessage);
      break;
    }
    case 0x674D12F6: { // hp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_SfcAqp5g_sendMessage);
      break;
    }
    case 0x6A20C3F5: { // hp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_HL94eK92_sendMessage);
      break;
    }
    case 0x123E8795: { // lp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_OmObTS49_sendMessage);
      break;
    }
    case 0x4588BD1: { // lp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_B9G5YPQI_sendMessage);
      break;
    }
    case 0xB7298D49: { // lp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_jsVptHVo_sendMessage);
      break;
    }
    case 0x64BD0F15: { // mf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_whmr66Rx_sendMessage);
      break;
    }
    case 0x5A12F82E: { // mg
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_akKCWh1n_sendMessage);
      break;
    }
    case 0x2C9C49A7: { // mq
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_tGBdCS2Z_sendMessage);
      break;
    }
    case 0xC8D93A6D: { // tapehead_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_tOIuiyj8_sendMessage);
      break;
    }
    case 0xB25D05EB: { // varispeed
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_aSzUaivC_sendMessage);
      break;
    }
    case 0x8ADB5B6B: { // varispeed_enable
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ZvPgP8tU_sendMessage);
      break;
    }
    case 0x7BB47B7B: { // wnf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_cCR3vI9o_sendMessage);
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


void Heavy_Echomatica::cMsg_dgWCfub7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_lN5P8XG0_sendMessage);
}

void Heavy_Echomatica::cSystem_lN5P8XG0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_D8Wo6HWF_sendMessage);
}

void Heavy_Echomatica::cVar_ICEIkWX2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FA3eHhjG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_PGtFpeMa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_hOvgRE1J_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_XBnCYtod, m);
}

void Heavy_Echomatica::cBinop_D8Wo6HWF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_jImF47JW, m);
}

void Heavy_Echomatica::cMsg_FA3eHhjG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_PGtFpeMa_sendMessage);
}

void Heavy_Echomatica::cBinop_hOvgRE1J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_nUOha5SQ, m);
}

void Heavy_Echomatica::cMsg_5ls6mp5j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_oU1aP5br_sendMessage);
}

void Heavy_Echomatica::cSystem_oU1aP5br_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_rnUiCgos_sendMessage);
}

void Heavy_Echomatica::cVar_87eUD1dE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tJqch7zS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_nQaSHSGP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_g460G6l2_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_lOMo614K, m);
}

void Heavy_Echomatica::cBinop_rnUiCgos_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ntjztINf, m);
}

void Heavy_Echomatica::cMsg_tJqch7zS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_nQaSHSGP_sendMessage);
}

void Heavy_Echomatica::cBinop_g460G6l2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Sky1nRO6, m);
}

void Heavy_Echomatica::cMsg_anI56K77_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_fJyHrp9K_sendMessage);
}

void Heavy_Echomatica::cSystem_fJyHrp9K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_sLzecuBJ_sendMessage);
}

void Heavy_Echomatica::cVar_03Sel2dy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Ngg3QDof_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_EfZiJVSA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_U4hUVKEE_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_84VU6pzE, m);
}

void Heavy_Echomatica::cBinop_sLzecuBJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_AVgaGzMK, m);
}

void Heavy_Echomatica::cMsg_Ngg3QDof_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_EfZiJVSA_sendMessage);
}

void Heavy_Echomatica::cBinop_U4hUVKEE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_3577cba7, m);
}

void Heavy_Echomatica::cMsg_lHSZePx3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_x1RF9w5k_sendMessage);
}

void Heavy_Echomatica::cSystem_x1RF9w5k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_wrdr3Mgd_sendMessage);
}

void Heavy_Echomatica::cVar_0eQJ2Eba_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cgdHFhLm_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_VixEiIaJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_wsxroZdP_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_zNpuydZa, m);
}

void Heavy_Echomatica::cBinop_wrdr3Mgd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_0SmtHE6X, m);
}

void Heavy_Echomatica::cMsg_cgdHFhLm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_VixEiIaJ_sendMessage);
}

void Heavy_Echomatica::cBinop_wsxroZdP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Sn330rfX, m);
}

void Heavy_Echomatica::cCast_iDC5bJWM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_geDpSLUD_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_XyQIOfaQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_c5vUbF1q_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_SB5d2oEA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VChpmtv9_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_DuyjJ0ny_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6ZmOrFHw_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_IRs5l27l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_v5jHAwpo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_sXKx0Qyx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mDbsW6Wg_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_LL54JRDe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9UFtoH6J_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_GJcYuBZd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tzZhEjhZ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_CKz0wHKM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oYRqAgAJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_nHcvlxlz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ijOHO5Iv_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_XsR1wmGA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QHBktSBS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_J24dL3ZU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ukvHrk6s_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_wQewDwG6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_liIPxFg7_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_KdNlIjNV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Yfgj3F4I_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_zhh0oWXQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DtXQuqoh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_zsUoOV1B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VT9DhuSY_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_ScvDfzsE_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2tibqQhC_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JHiq5nIl_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_s5OZdZSv_sendMessage);
      break;
    }
    case 0x40400000: { // "3.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_r4yCkL8F_sendMessage);
      break;
    }
    case 0x40800000: { // "4.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Vz6ucNOv_sendMessage);
      break;
    }
    case 0x40A00000: { // "5.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9OG5y68C_sendMessage);
      break;
    }
    case 0x40C00000: { // "6.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ADtKqYpW_sendMessage);
      break;
    }
    case 0x40E00000: { // "7.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vJ12I2Nr_sendMessage);
      break;
    }
    case 0x41000000: { // "8.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QLTzOKMZ_sendMessage);
      break;
    }
    case 0x41100000: { // "9.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_08hBq3th_sendMessage);
      break;
    }
    case 0x41200000: { // "10.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8CCBtsGH_sendMessage);
      break;
    }
    case 0x41300000: { // "11.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UEF4ybpk_sendMessage);
      break;
    }
    case 0x41400000: { // "12.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rBktvZaF_sendMessage);
      break;
    }
    case 0x41500000: { // "13.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jFjEDxed_sendMessage);
      break;
    }
    case 0x41600000: { // "14.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1LEvbO8Y_sendMessage);
      break;
    }
    case 0x41700000: { // "15.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Rzw5vilA_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_2tibqQhC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XsR1wmGA_sendMessage);
}

void Heavy_Echomatica::cCast_JHiq5nIl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KdNlIjNV_sendMessage);
}

void Heavy_Echomatica::cCast_s5OZdZSv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CKz0wHKM_sendMessage);
}

void Heavy_Echomatica::cCast_r4yCkL8F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nHcvlxlz_sendMessage);
}

void Heavy_Echomatica::cCast_Vz6ucNOv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wQewDwG6_sendMessage);
}

void Heavy_Echomatica::cCast_9OG5y68C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_J24dL3ZU_sendMessage);
}

void Heavy_Echomatica::cCast_ADtKqYpW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IRs5l27l_sendMessage);
}

void Heavy_Echomatica::cCast_vJ12I2Nr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zhh0oWXQ_sendMessage);
}

void Heavy_Echomatica::cCast_QLTzOKMZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zsUoOV1B_sendMessage);
}

void Heavy_Echomatica::cCast_08hBq3th_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sXKx0Qyx_sendMessage);
}

void Heavy_Echomatica::cCast_8CCBtsGH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XyQIOfaQ_sendMessage);
}

void Heavy_Echomatica::cCast_UEF4ybpk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SB5d2oEA_sendMessage);
}

void Heavy_Echomatica::cCast_rBktvZaF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DuyjJ0ny_sendMessage);
}

void Heavy_Echomatica::cCast_jFjEDxed_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iDC5bJWM_sendMessage);
}

void Heavy_Echomatica::cCast_1LEvbO8Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GJcYuBZd_sendMessage);
}

void Heavy_Echomatica::cCast_Rzw5vilA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LL54JRDe_sendMessage);
}

void Heavy_Echomatica::cMsg_oYRqAgAJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_cAKChK8v, 0, m, &cSlice_cAKChK8v_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVcao0Qx, 0, m, &cSlice_qVcao0Qx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gm9OUH92, 0, m, &cSlice_gm9OUH92_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ARRFRJfJ, 0, m, &cSlice_ARRFRJfJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eULVgyul, 0, m, &cSlice_eULVgyul_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eaxtQRRe, 0, m, &cSlice_eaxtQRRe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtdzxjx3, 0, m, &cSlice_rtdzxjx3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EaiqeDnT, 0, m, &cSlice_EaiqeDnT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2uOgvQEE, 0, m, &cSlice_2uOgvQEE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_J0Zy2txk, 0, m, &cSlice_J0Zy2txk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_diEH4ZYo, 0, m, &cSlice_diEH4ZYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bZAhhd4r, 0, m, &cSlice_bZAhhd4r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_F6qCr5Lp, 0, m, &cSlice_F6qCr5Lp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVdWLjvL, 0, m, &cSlice_qVdWLjvL_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qujIeLcc, 0, m, &cSlice_qujIeLcc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_U8oQyEuM, 0, m, &cSlice_U8oQyEuM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l18QuwaC, 0, m, &cSlice_l18QuwaC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1eEDqxrt, 0, m, &cSlice_1eEDqxrt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l0SOoFSo, 0, m, &cSlice_l0SOoFSo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nUYuugDY, 0, m, &cSlice_nUYuugDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LVAAWOem, 0, m, &cSlice_LVAAWOem_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hLZBxGyl, 0, m, &cSlice_hLZBxGyl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XL4C5waY, 0, m, &cSlice_XL4C5waY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JrOt0SCt, 0, m, &cSlice_JrOt0SCt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XxQNZWPg, 0, m, &cSlice_XxQNZWPg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X5HNwryw, 0, m, &cSlice_X5HNwryw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jRg0wVHp, 0, m, &cSlice_jRg0wVHp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RgJLFUDt, 0, m, &cSlice_RgJLFUDt_sendMessage);
}

void Heavy_Echomatica::cMsg_Yfgj3F4I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_cAKChK8v, 0, m, &cSlice_cAKChK8v_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVcao0Qx, 0, m, &cSlice_qVcao0Qx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gm9OUH92, 0, m, &cSlice_gm9OUH92_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ARRFRJfJ, 0, m, &cSlice_ARRFRJfJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eULVgyul, 0, m, &cSlice_eULVgyul_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eaxtQRRe, 0, m, &cSlice_eaxtQRRe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtdzxjx3, 0, m, &cSlice_rtdzxjx3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EaiqeDnT, 0, m, &cSlice_EaiqeDnT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2uOgvQEE, 0, m, &cSlice_2uOgvQEE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_J0Zy2txk, 0, m, &cSlice_J0Zy2txk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_diEH4ZYo, 0, m, &cSlice_diEH4ZYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bZAhhd4r, 0, m, &cSlice_bZAhhd4r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_F6qCr5Lp, 0, m, &cSlice_F6qCr5Lp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVdWLjvL, 0, m, &cSlice_qVdWLjvL_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qujIeLcc, 0, m, &cSlice_qujIeLcc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_U8oQyEuM, 0, m, &cSlice_U8oQyEuM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l18QuwaC, 0, m, &cSlice_l18QuwaC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1eEDqxrt, 0, m, &cSlice_1eEDqxrt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l0SOoFSo, 0, m, &cSlice_l0SOoFSo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nUYuugDY, 0, m, &cSlice_nUYuugDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LVAAWOem, 0, m, &cSlice_LVAAWOem_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hLZBxGyl, 0, m, &cSlice_hLZBxGyl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XL4C5waY, 0, m, &cSlice_XL4C5waY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JrOt0SCt, 0, m, &cSlice_JrOt0SCt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XxQNZWPg, 0, m, &cSlice_XxQNZWPg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X5HNwryw, 0, m, &cSlice_X5HNwryw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jRg0wVHp, 0, m, &cSlice_jRg0wVHp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RgJLFUDt, 0, m, &cSlice_RgJLFUDt_sendMessage);
}

void Heavy_Echomatica::cMsg_QHBktSBS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_cAKChK8v, 0, m, &cSlice_cAKChK8v_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVcao0Qx, 0, m, &cSlice_qVcao0Qx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gm9OUH92, 0, m, &cSlice_gm9OUH92_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ARRFRJfJ, 0, m, &cSlice_ARRFRJfJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eULVgyul, 0, m, &cSlice_eULVgyul_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eaxtQRRe, 0, m, &cSlice_eaxtQRRe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtdzxjx3, 0, m, &cSlice_rtdzxjx3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EaiqeDnT, 0, m, &cSlice_EaiqeDnT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2uOgvQEE, 0, m, &cSlice_2uOgvQEE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_J0Zy2txk, 0, m, &cSlice_J0Zy2txk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_diEH4ZYo, 0, m, &cSlice_diEH4ZYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bZAhhd4r, 0, m, &cSlice_bZAhhd4r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_F6qCr5Lp, 0, m, &cSlice_F6qCr5Lp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVdWLjvL, 0, m, &cSlice_qVdWLjvL_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qujIeLcc, 0, m, &cSlice_qujIeLcc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_U8oQyEuM, 0, m, &cSlice_U8oQyEuM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l18QuwaC, 0, m, &cSlice_l18QuwaC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1eEDqxrt, 0, m, &cSlice_1eEDqxrt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l0SOoFSo, 0, m, &cSlice_l0SOoFSo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nUYuugDY, 0, m, &cSlice_nUYuugDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LVAAWOem, 0, m, &cSlice_LVAAWOem_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hLZBxGyl, 0, m, &cSlice_hLZBxGyl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XL4C5waY, 0, m, &cSlice_XL4C5waY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JrOt0SCt, 0, m, &cSlice_JrOt0SCt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XxQNZWPg, 0, m, &cSlice_XxQNZWPg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X5HNwryw, 0, m, &cSlice_X5HNwryw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jRg0wVHp, 0, m, &cSlice_jRg0wVHp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RgJLFUDt, 0, m, &cSlice_RgJLFUDt_sendMessage);
}

void Heavy_Echomatica::cMsg_ijOHO5Iv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_cAKChK8v, 0, m, &cSlice_cAKChK8v_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVcao0Qx, 0, m, &cSlice_qVcao0Qx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gm9OUH92, 0, m, &cSlice_gm9OUH92_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ARRFRJfJ, 0, m, &cSlice_ARRFRJfJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eULVgyul, 0, m, &cSlice_eULVgyul_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eaxtQRRe, 0, m, &cSlice_eaxtQRRe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtdzxjx3, 0, m, &cSlice_rtdzxjx3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EaiqeDnT, 0, m, &cSlice_EaiqeDnT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2uOgvQEE, 0, m, &cSlice_2uOgvQEE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_J0Zy2txk, 0, m, &cSlice_J0Zy2txk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_diEH4ZYo, 0, m, &cSlice_diEH4ZYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bZAhhd4r, 0, m, &cSlice_bZAhhd4r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_F6qCr5Lp, 0, m, &cSlice_F6qCr5Lp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVdWLjvL, 0, m, &cSlice_qVdWLjvL_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qujIeLcc, 0, m, &cSlice_qujIeLcc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_U8oQyEuM, 0, m, &cSlice_U8oQyEuM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l18QuwaC, 0, m, &cSlice_l18QuwaC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1eEDqxrt, 0, m, &cSlice_1eEDqxrt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l0SOoFSo, 0, m, &cSlice_l0SOoFSo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nUYuugDY, 0, m, &cSlice_nUYuugDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LVAAWOem, 0, m, &cSlice_LVAAWOem_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hLZBxGyl, 0, m, &cSlice_hLZBxGyl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XL4C5waY, 0, m, &cSlice_XL4C5waY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JrOt0SCt, 0, m, &cSlice_JrOt0SCt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XxQNZWPg, 0, m, &cSlice_XxQNZWPg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X5HNwryw, 0, m, &cSlice_X5HNwryw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jRg0wVHp, 0, m, &cSlice_jRg0wVHp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RgJLFUDt, 0, m, &cSlice_RgJLFUDt_sendMessage);
}

void Heavy_Echomatica::cMsg_liIPxFg7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_cAKChK8v, 0, m, &cSlice_cAKChK8v_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVcao0Qx, 0, m, &cSlice_qVcao0Qx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gm9OUH92, 0, m, &cSlice_gm9OUH92_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ARRFRJfJ, 0, m, &cSlice_ARRFRJfJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eULVgyul, 0, m, &cSlice_eULVgyul_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eaxtQRRe, 0, m, &cSlice_eaxtQRRe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtdzxjx3, 0, m, &cSlice_rtdzxjx3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EaiqeDnT, 0, m, &cSlice_EaiqeDnT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2uOgvQEE, 0, m, &cSlice_2uOgvQEE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_J0Zy2txk, 0, m, &cSlice_J0Zy2txk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_diEH4ZYo, 0, m, &cSlice_diEH4ZYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bZAhhd4r, 0, m, &cSlice_bZAhhd4r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_F6qCr5Lp, 0, m, &cSlice_F6qCr5Lp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVdWLjvL, 0, m, &cSlice_qVdWLjvL_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qujIeLcc, 0, m, &cSlice_qujIeLcc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_U8oQyEuM, 0, m, &cSlice_U8oQyEuM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l18QuwaC, 0, m, &cSlice_l18QuwaC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1eEDqxrt, 0, m, &cSlice_1eEDqxrt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l0SOoFSo, 0, m, &cSlice_l0SOoFSo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nUYuugDY, 0, m, &cSlice_nUYuugDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LVAAWOem, 0, m, &cSlice_LVAAWOem_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hLZBxGyl, 0, m, &cSlice_hLZBxGyl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XL4C5waY, 0, m, &cSlice_XL4C5waY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JrOt0SCt, 0, m, &cSlice_JrOt0SCt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XxQNZWPg, 0, m, &cSlice_XxQNZWPg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X5HNwryw, 0, m, &cSlice_X5HNwryw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jRg0wVHp, 0, m, &cSlice_jRg0wVHp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RgJLFUDt, 0, m, &cSlice_RgJLFUDt_sendMessage);
}

void Heavy_Echomatica::cMsg_ukvHrk6s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_cAKChK8v, 0, m, &cSlice_cAKChK8v_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVcao0Qx, 0, m, &cSlice_qVcao0Qx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gm9OUH92, 0, m, &cSlice_gm9OUH92_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ARRFRJfJ, 0, m, &cSlice_ARRFRJfJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eULVgyul, 0, m, &cSlice_eULVgyul_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eaxtQRRe, 0, m, &cSlice_eaxtQRRe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtdzxjx3, 0, m, &cSlice_rtdzxjx3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EaiqeDnT, 0, m, &cSlice_EaiqeDnT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2uOgvQEE, 0, m, &cSlice_2uOgvQEE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_J0Zy2txk, 0, m, &cSlice_J0Zy2txk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_diEH4ZYo, 0, m, &cSlice_diEH4ZYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bZAhhd4r, 0, m, &cSlice_bZAhhd4r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_F6qCr5Lp, 0, m, &cSlice_F6qCr5Lp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVdWLjvL, 0, m, &cSlice_qVdWLjvL_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qujIeLcc, 0, m, &cSlice_qujIeLcc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_U8oQyEuM, 0, m, &cSlice_U8oQyEuM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l18QuwaC, 0, m, &cSlice_l18QuwaC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1eEDqxrt, 0, m, &cSlice_1eEDqxrt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l0SOoFSo, 0, m, &cSlice_l0SOoFSo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nUYuugDY, 0, m, &cSlice_nUYuugDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LVAAWOem, 0, m, &cSlice_LVAAWOem_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hLZBxGyl, 0, m, &cSlice_hLZBxGyl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XL4C5waY, 0, m, &cSlice_XL4C5waY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JrOt0SCt, 0, m, &cSlice_JrOt0SCt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XxQNZWPg, 0, m, &cSlice_XxQNZWPg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X5HNwryw, 0, m, &cSlice_X5HNwryw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jRg0wVHp, 0, m, &cSlice_jRg0wVHp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RgJLFUDt, 0, m, &cSlice_RgJLFUDt_sendMessage);
}

void Heavy_Echomatica::cMsg_v5jHAwpo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_cAKChK8v, 0, m, &cSlice_cAKChK8v_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVcao0Qx, 0, m, &cSlice_qVcao0Qx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gm9OUH92, 0, m, &cSlice_gm9OUH92_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ARRFRJfJ, 0, m, &cSlice_ARRFRJfJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eULVgyul, 0, m, &cSlice_eULVgyul_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eaxtQRRe, 0, m, &cSlice_eaxtQRRe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtdzxjx3, 0, m, &cSlice_rtdzxjx3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EaiqeDnT, 0, m, &cSlice_EaiqeDnT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2uOgvQEE, 0, m, &cSlice_2uOgvQEE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_J0Zy2txk, 0, m, &cSlice_J0Zy2txk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_diEH4ZYo, 0, m, &cSlice_diEH4ZYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bZAhhd4r, 0, m, &cSlice_bZAhhd4r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_F6qCr5Lp, 0, m, &cSlice_F6qCr5Lp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVdWLjvL, 0, m, &cSlice_qVdWLjvL_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qujIeLcc, 0, m, &cSlice_qujIeLcc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_U8oQyEuM, 0, m, &cSlice_U8oQyEuM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l18QuwaC, 0, m, &cSlice_l18QuwaC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1eEDqxrt, 0, m, &cSlice_1eEDqxrt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l0SOoFSo, 0, m, &cSlice_l0SOoFSo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nUYuugDY, 0, m, &cSlice_nUYuugDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LVAAWOem, 0, m, &cSlice_LVAAWOem_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hLZBxGyl, 0, m, &cSlice_hLZBxGyl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XL4C5waY, 0, m, &cSlice_XL4C5waY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JrOt0SCt, 0, m, &cSlice_JrOt0SCt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XxQNZWPg, 0, m, &cSlice_XxQNZWPg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X5HNwryw, 0, m, &cSlice_X5HNwryw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jRg0wVHp, 0, m, &cSlice_jRg0wVHp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RgJLFUDt, 0, m, &cSlice_RgJLFUDt_sendMessage);
}

void Heavy_Echomatica::cMsg_DtXQuqoh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_cAKChK8v, 0, m, &cSlice_cAKChK8v_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVcao0Qx, 0, m, &cSlice_qVcao0Qx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gm9OUH92, 0, m, &cSlice_gm9OUH92_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ARRFRJfJ, 0, m, &cSlice_ARRFRJfJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eULVgyul, 0, m, &cSlice_eULVgyul_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eaxtQRRe, 0, m, &cSlice_eaxtQRRe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtdzxjx3, 0, m, &cSlice_rtdzxjx3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EaiqeDnT, 0, m, &cSlice_EaiqeDnT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2uOgvQEE, 0, m, &cSlice_2uOgvQEE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_J0Zy2txk, 0, m, &cSlice_J0Zy2txk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_diEH4ZYo, 0, m, &cSlice_diEH4ZYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bZAhhd4r, 0, m, &cSlice_bZAhhd4r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_F6qCr5Lp, 0, m, &cSlice_F6qCr5Lp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVdWLjvL, 0, m, &cSlice_qVdWLjvL_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qujIeLcc, 0, m, &cSlice_qujIeLcc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_U8oQyEuM, 0, m, &cSlice_U8oQyEuM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l18QuwaC, 0, m, &cSlice_l18QuwaC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1eEDqxrt, 0, m, &cSlice_1eEDqxrt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l0SOoFSo, 0, m, &cSlice_l0SOoFSo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nUYuugDY, 0, m, &cSlice_nUYuugDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LVAAWOem, 0, m, &cSlice_LVAAWOem_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hLZBxGyl, 0, m, &cSlice_hLZBxGyl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XL4C5waY, 0, m, &cSlice_XL4C5waY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JrOt0SCt, 0, m, &cSlice_JrOt0SCt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XxQNZWPg, 0, m, &cSlice_XxQNZWPg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X5HNwryw, 0, m, &cSlice_X5HNwryw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jRg0wVHp, 0, m, &cSlice_jRg0wVHp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RgJLFUDt, 0, m, &cSlice_RgJLFUDt_sendMessage);
}

void Heavy_Echomatica::cMsg_VT9DhuSY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_cAKChK8v, 0, m, &cSlice_cAKChK8v_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVcao0Qx, 0, m, &cSlice_qVcao0Qx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gm9OUH92, 0, m, &cSlice_gm9OUH92_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ARRFRJfJ, 0, m, &cSlice_ARRFRJfJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eULVgyul, 0, m, &cSlice_eULVgyul_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eaxtQRRe, 0, m, &cSlice_eaxtQRRe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtdzxjx3, 0, m, &cSlice_rtdzxjx3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EaiqeDnT, 0, m, &cSlice_EaiqeDnT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2uOgvQEE, 0, m, &cSlice_2uOgvQEE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_J0Zy2txk, 0, m, &cSlice_J0Zy2txk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_diEH4ZYo, 0, m, &cSlice_diEH4ZYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bZAhhd4r, 0, m, &cSlice_bZAhhd4r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_F6qCr5Lp, 0, m, &cSlice_F6qCr5Lp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVdWLjvL, 0, m, &cSlice_qVdWLjvL_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qujIeLcc, 0, m, &cSlice_qujIeLcc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_U8oQyEuM, 0, m, &cSlice_U8oQyEuM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l18QuwaC, 0, m, &cSlice_l18QuwaC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1eEDqxrt, 0, m, &cSlice_1eEDqxrt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l0SOoFSo, 0, m, &cSlice_l0SOoFSo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nUYuugDY, 0, m, &cSlice_nUYuugDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LVAAWOem, 0, m, &cSlice_LVAAWOem_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hLZBxGyl, 0, m, &cSlice_hLZBxGyl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XL4C5waY, 0, m, &cSlice_XL4C5waY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JrOt0SCt, 0, m, &cSlice_JrOt0SCt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XxQNZWPg, 0, m, &cSlice_XxQNZWPg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X5HNwryw, 0, m, &cSlice_X5HNwryw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jRg0wVHp, 0, m, &cSlice_jRg0wVHp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RgJLFUDt, 0, m, &cSlice_RgJLFUDt_sendMessage);
}

void Heavy_Echomatica::cMsg_mDbsW6Wg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_cAKChK8v, 0, m, &cSlice_cAKChK8v_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVcao0Qx, 0, m, &cSlice_qVcao0Qx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gm9OUH92, 0, m, &cSlice_gm9OUH92_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ARRFRJfJ, 0, m, &cSlice_ARRFRJfJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eULVgyul, 0, m, &cSlice_eULVgyul_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eaxtQRRe, 0, m, &cSlice_eaxtQRRe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtdzxjx3, 0, m, &cSlice_rtdzxjx3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EaiqeDnT, 0, m, &cSlice_EaiqeDnT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2uOgvQEE, 0, m, &cSlice_2uOgvQEE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_J0Zy2txk, 0, m, &cSlice_J0Zy2txk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_diEH4ZYo, 0, m, &cSlice_diEH4ZYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bZAhhd4r, 0, m, &cSlice_bZAhhd4r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_F6qCr5Lp, 0, m, &cSlice_F6qCr5Lp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVdWLjvL, 0, m, &cSlice_qVdWLjvL_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qujIeLcc, 0, m, &cSlice_qujIeLcc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_U8oQyEuM, 0, m, &cSlice_U8oQyEuM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l18QuwaC, 0, m, &cSlice_l18QuwaC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1eEDqxrt, 0, m, &cSlice_1eEDqxrt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l0SOoFSo, 0, m, &cSlice_l0SOoFSo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nUYuugDY, 0, m, &cSlice_nUYuugDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LVAAWOem, 0, m, &cSlice_LVAAWOem_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hLZBxGyl, 0, m, &cSlice_hLZBxGyl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XL4C5waY, 0, m, &cSlice_XL4C5waY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JrOt0SCt, 0, m, &cSlice_JrOt0SCt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XxQNZWPg, 0, m, &cSlice_XxQNZWPg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X5HNwryw, 0, m, &cSlice_X5HNwryw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jRg0wVHp, 0, m, &cSlice_jRg0wVHp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RgJLFUDt, 0, m, &cSlice_RgJLFUDt_sendMessage);
}

void Heavy_Echomatica::cMsg_c5vUbF1q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_cAKChK8v, 0, m, &cSlice_cAKChK8v_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVcao0Qx, 0, m, &cSlice_qVcao0Qx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gm9OUH92, 0, m, &cSlice_gm9OUH92_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ARRFRJfJ, 0, m, &cSlice_ARRFRJfJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eULVgyul, 0, m, &cSlice_eULVgyul_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eaxtQRRe, 0, m, &cSlice_eaxtQRRe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtdzxjx3, 0, m, &cSlice_rtdzxjx3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EaiqeDnT, 0, m, &cSlice_EaiqeDnT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2uOgvQEE, 0, m, &cSlice_2uOgvQEE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_J0Zy2txk, 0, m, &cSlice_J0Zy2txk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_diEH4ZYo, 0, m, &cSlice_diEH4ZYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bZAhhd4r, 0, m, &cSlice_bZAhhd4r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_F6qCr5Lp, 0, m, &cSlice_F6qCr5Lp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVdWLjvL, 0, m, &cSlice_qVdWLjvL_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qujIeLcc, 0, m, &cSlice_qujIeLcc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_U8oQyEuM, 0, m, &cSlice_U8oQyEuM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l18QuwaC, 0, m, &cSlice_l18QuwaC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1eEDqxrt, 0, m, &cSlice_1eEDqxrt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l0SOoFSo, 0, m, &cSlice_l0SOoFSo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nUYuugDY, 0, m, &cSlice_nUYuugDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LVAAWOem, 0, m, &cSlice_LVAAWOem_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hLZBxGyl, 0, m, &cSlice_hLZBxGyl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XL4C5waY, 0, m, &cSlice_XL4C5waY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JrOt0SCt, 0, m, &cSlice_JrOt0SCt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XxQNZWPg, 0, m, &cSlice_XxQNZWPg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X5HNwryw, 0, m, &cSlice_X5HNwryw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jRg0wVHp, 0, m, &cSlice_jRg0wVHp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RgJLFUDt, 0, m, &cSlice_RgJLFUDt_sendMessage);
}

void Heavy_Echomatica::cMsg_VChpmtv9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_cAKChK8v, 0, m, &cSlice_cAKChK8v_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVcao0Qx, 0, m, &cSlice_qVcao0Qx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gm9OUH92, 0, m, &cSlice_gm9OUH92_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ARRFRJfJ, 0, m, &cSlice_ARRFRJfJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eULVgyul, 0, m, &cSlice_eULVgyul_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eaxtQRRe, 0, m, &cSlice_eaxtQRRe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtdzxjx3, 0, m, &cSlice_rtdzxjx3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EaiqeDnT, 0, m, &cSlice_EaiqeDnT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2uOgvQEE, 0, m, &cSlice_2uOgvQEE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_J0Zy2txk, 0, m, &cSlice_J0Zy2txk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_diEH4ZYo, 0, m, &cSlice_diEH4ZYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bZAhhd4r, 0, m, &cSlice_bZAhhd4r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_F6qCr5Lp, 0, m, &cSlice_F6qCr5Lp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVdWLjvL, 0, m, &cSlice_qVdWLjvL_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qujIeLcc, 0, m, &cSlice_qujIeLcc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_U8oQyEuM, 0, m, &cSlice_U8oQyEuM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l18QuwaC, 0, m, &cSlice_l18QuwaC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1eEDqxrt, 0, m, &cSlice_1eEDqxrt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l0SOoFSo, 0, m, &cSlice_l0SOoFSo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nUYuugDY, 0, m, &cSlice_nUYuugDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LVAAWOem, 0, m, &cSlice_LVAAWOem_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hLZBxGyl, 0, m, &cSlice_hLZBxGyl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XL4C5waY, 0, m, &cSlice_XL4C5waY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JrOt0SCt, 0, m, &cSlice_JrOt0SCt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XxQNZWPg, 0, m, &cSlice_XxQNZWPg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X5HNwryw, 0, m, &cSlice_X5HNwryw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jRg0wVHp, 0, m, &cSlice_jRg0wVHp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RgJLFUDt, 0, m, &cSlice_RgJLFUDt_sendMessage);
}

void Heavy_Echomatica::cMsg_6ZmOrFHw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_cAKChK8v, 0, m, &cSlice_cAKChK8v_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVcao0Qx, 0, m, &cSlice_qVcao0Qx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gm9OUH92, 0, m, &cSlice_gm9OUH92_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ARRFRJfJ, 0, m, &cSlice_ARRFRJfJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eULVgyul, 0, m, &cSlice_eULVgyul_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eaxtQRRe, 0, m, &cSlice_eaxtQRRe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtdzxjx3, 0, m, &cSlice_rtdzxjx3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EaiqeDnT, 0, m, &cSlice_EaiqeDnT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2uOgvQEE, 0, m, &cSlice_2uOgvQEE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_J0Zy2txk, 0, m, &cSlice_J0Zy2txk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_diEH4ZYo, 0, m, &cSlice_diEH4ZYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bZAhhd4r, 0, m, &cSlice_bZAhhd4r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_F6qCr5Lp, 0, m, &cSlice_F6qCr5Lp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVdWLjvL, 0, m, &cSlice_qVdWLjvL_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qujIeLcc, 0, m, &cSlice_qujIeLcc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_U8oQyEuM, 0, m, &cSlice_U8oQyEuM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l18QuwaC, 0, m, &cSlice_l18QuwaC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1eEDqxrt, 0, m, &cSlice_1eEDqxrt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l0SOoFSo, 0, m, &cSlice_l0SOoFSo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nUYuugDY, 0, m, &cSlice_nUYuugDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LVAAWOem, 0, m, &cSlice_LVAAWOem_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hLZBxGyl, 0, m, &cSlice_hLZBxGyl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XL4C5waY, 0, m, &cSlice_XL4C5waY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JrOt0SCt, 0, m, &cSlice_JrOt0SCt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XxQNZWPg, 0, m, &cSlice_XxQNZWPg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X5HNwryw, 0, m, &cSlice_X5HNwryw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jRg0wVHp, 0, m, &cSlice_jRg0wVHp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RgJLFUDt, 0, m, &cSlice_RgJLFUDt_sendMessage);
}

void Heavy_Echomatica::cMsg_geDpSLUD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_cAKChK8v, 0, m, &cSlice_cAKChK8v_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVcao0Qx, 0, m, &cSlice_qVcao0Qx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gm9OUH92, 0, m, &cSlice_gm9OUH92_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ARRFRJfJ, 0, m, &cSlice_ARRFRJfJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eULVgyul, 0, m, &cSlice_eULVgyul_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eaxtQRRe, 0, m, &cSlice_eaxtQRRe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtdzxjx3, 0, m, &cSlice_rtdzxjx3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EaiqeDnT, 0, m, &cSlice_EaiqeDnT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2uOgvQEE, 0, m, &cSlice_2uOgvQEE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_J0Zy2txk, 0, m, &cSlice_J0Zy2txk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_diEH4ZYo, 0, m, &cSlice_diEH4ZYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bZAhhd4r, 0, m, &cSlice_bZAhhd4r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_F6qCr5Lp, 0, m, &cSlice_F6qCr5Lp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVdWLjvL, 0, m, &cSlice_qVdWLjvL_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qujIeLcc, 0, m, &cSlice_qujIeLcc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_U8oQyEuM, 0, m, &cSlice_U8oQyEuM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l18QuwaC, 0, m, &cSlice_l18QuwaC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1eEDqxrt, 0, m, &cSlice_1eEDqxrt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l0SOoFSo, 0, m, &cSlice_l0SOoFSo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nUYuugDY, 0, m, &cSlice_nUYuugDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LVAAWOem, 0, m, &cSlice_LVAAWOem_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hLZBxGyl, 0, m, &cSlice_hLZBxGyl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XL4C5waY, 0, m, &cSlice_XL4C5waY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JrOt0SCt, 0, m, &cSlice_JrOt0SCt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XxQNZWPg, 0, m, &cSlice_XxQNZWPg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X5HNwryw, 0, m, &cSlice_X5HNwryw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jRg0wVHp, 0, m, &cSlice_jRg0wVHp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RgJLFUDt, 0, m, &cSlice_RgJLFUDt_sendMessage);
}

void Heavy_Echomatica::cMsg_tzZhEjhZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_cAKChK8v, 0, m, &cSlice_cAKChK8v_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVcao0Qx, 0, m, &cSlice_qVcao0Qx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gm9OUH92, 0, m, &cSlice_gm9OUH92_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ARRFRJfJ, 0, m, &cSlice_ARRFRJfJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eULVgyul, 0, m, &cSlice_eULVgyul_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eaxtQRRe, 0, m, &cSlice_eaxtQRRe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtdzxjx3, 0, m, &cSlice_rtdzxjx3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EaiqeDnT, 0, m, &cSlice_EaiqeDnT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2uOgvQEE, 0, m, &cSlice_2uOgvQEE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_J0Zy2txk, 0, m, &cSlice_J0Zy2txk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_diEH4ZYo, 0, m, &cSlice_diEH4ZYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bZAhhd4r, 0, m, &cSlice_bZAhhd4r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_F6qCr5Lp, 0, m, &cSlice_F6qCr5Lp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVdWLjvL, 0, m, &cSlice_qVdWLjvL_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qujIeLcc, 0, m, &cSlice_qujIeLcc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_U8oQyEuM, 0, m, &cSlice_U8oQyEuM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l18QuwaC, 0, m, &cSlice_l18QuwaC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1eEDqxrt, 0, m, &cSlice_1eEDqxrt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l0SOoFSo, 0, m, &cSlice_l0SOoFSo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nUYuugDY, 0, m, &cSlice_nUYuugDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LVAAWOem, 0, m, &cSlice_LVAAWOem_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hLZBxGyl, 0, m, &cSlice_hLZBxGyl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XL4C5waY, 0, m, &cSlice_XL4C5waY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JrOt0SCt, 0, m, &cSlice_JrOt0SCt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XxQNZWPg, 0, m, &cSlice_XxQNZWPg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X5HNwryw, 0, m, &cSlice_X5HNwryw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jRg0wVHp, 0, m, &cSlice_jRg0wVHp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RgJLFUDt, 0, m, &cSlice_RgJLFUDt_sendMessage);
}

void Heavy_Echomatica::cMsg_9UFtoH6J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_cAKChK8v, 0, m, &cSlice_cAKChK8v_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVcao0Qx, 0, m, &cSlice_qVcao0Qx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gm9OUH92, 0, m, &cSlice_gm9OUH92_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ARRFRJfJ, 0, m, &cSlice_ARRFRJfJ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eULVgyul, 0, m, &cSlice_eULVgyul_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eaxtQRRe, 0, m, &cSlice_eaxtQRRe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rtdzxjx3, 0, m, &cSlice_rtdzxjx3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EaiqeDnT, 0, m, &cSlice_EaiqeDnT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2uOgvQEE, 0, m, &cSlice_2uOgvQEE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_J0Zy2txk, 0, m, &cSlice_J0Zy2txk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_diEH4ZYo, 0, m, &cSlice_diEH4ZYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bZAhhd4r, 0, m, &cSlice_bZAhhd4r_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_F6qCr5Lp, 0, m, &cSlice_F6qCr5Lp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qVdWLjvL, 0, m, &cSlice_qVdWLjvL_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qujIeLcc, 0, m, &cSlice_qujIeLcc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_U8oQyEuM, 0, m, &cSlice_U8oQyEuM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l18QuwaC, 0, m, &cSlice_l18QuwaC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1eEDqxrt, 0, m, &cSlice_1eEDqxrt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l0SOoFSo, 0, m, &cSlice_l0SOoFSo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nUYuugDY, 0, m, &cSlice_nUYuugDY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LVAAWOem, 0, m, &cSlice_LVAAWOem_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hLZBxGyl, 0, m, &cSlice_hLZBxGyl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XL4C5waY, 0, m, &cSlice_XL4C5waY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JrOt0SCt, 0, m, &cSlice_JrOt0SCt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XxQNZWPg, 0, m, &cSlice_XxQNZWPg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X5HNwryw, 0, m, &cSlice_X5HNwryw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jRg0wVHp, 0, m, &cSlice_jRg0wVHp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RgJLFUDt, 0, m, &cSlice_RgJLFUDt_sendMessage);
}

void Heavy_Echomatica::cMsg_vSVAl6Jj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_uWTXJJT5_sendMessage);
}

void Heavy_Echomatica::cSystem_uWTXJJT5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_ecEXTgD8_sendMessage);
}

void Heavy_Echomatica::cVar_3rTZuEGk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Oiw9kvOc_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_Z2vg9f9s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_vrgelQ7l_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_hacCwliC, m);
}

void Heavy_Echomatica::cBinop_ecEXTgD8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_chFnERaZ, m);
}

void Heavy_Echomatica::cMsg_Oiw9kvOc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Z2vg9f9s_sendMessage);
}

void Heavy_Echomatica::cBinop_vrgelQ7l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_wLZSG22j, m);
}

void Heavy_Echomatica::cMsg_pqwkPI0Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Jf3ogzQs_sendMessage);
}

void Heavy_Echomatica::cSystem_Jf3ogzQs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_kc32yUsl_sendMessage);
}

void Heavy_Echomatica::cVar_XE22JYdh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WQDhcXiW_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_50o0lZd2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_6dWFtJGz_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_xGqOcils, m);
}

void Heavy_Echomatica::cBinop_kc32yUsl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_2pYoQIli, m);
}

void Heavy_Echomatica::cMsg_WQDhcXiW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_50o0lZd2_sendMessage);
}

void Heavy_Echomatica::cBinop_6dWFtJGz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_UX7LG1Ox, m);
}

void Heavy_Echomatica::cVar_2rg4AHXU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_bNMBtHAu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_WZz6JSRw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_j7zEJ7Cm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_6QZSaZVd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_MI2dnPuW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_NVEwxJ3N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_5r6UZHno_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_eDOXfwe9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_TIXRCnBY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_3vYPeGrB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_hj7KXjih_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cPack_dzy3qvh5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_FzOMdSyh, 0, m, NULL);
}

void Heavy_Echomatica::cPack_lUuc3HKl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_a6R5qaC1, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_TDukiTDV, 0, m, &cVar_TDukiTDV_sendMessage);
}

void Heavy_Echomatica::cPack_KiuIQBKI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_P6oEct1Q, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_lx0AKgQv, 0, m, &cVar_lx0AKgQv_sendMessage);
}

void Heavy_Echomatica::cPack_EIjuTPfH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_nvlPOmz4, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_AtfSUqcp, 0, m, &cVar_AtfSUqcp_sendMessage);
}

void Heavy_Echomatica::cPack_Q4wmx781_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_BiOr49ZJ, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_BHR4QbaJ, 0, m, &cVar_BHR4QbaJ_sendMessage);
}

void Heavy_Echomatica::cPack_lfdZot6z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_TLWHQUMV, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_x7imYXTh, 0, m, &cVar_x7imYXTh_sendMessage);
}

void Heavy_Echomatica::cPack_fToybE6K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_0asGCWae, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_G0hYcICy, 0, m, &cVar_G0hYcICy_sendMessage);
}

void Heavy_Echomatica::cSlice_cAKChK8v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Sm7eGN6l_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_qVcao0Qx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_MPb9ZvC3_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_gm9OUH92_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_NF33IP6V_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_ARRFRJfJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_DroPS32G_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_eULVgyul_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_75EUk6Gp_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_eaxtQRRe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_cH3dFx8L_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_rtdzxjx3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_vaU540C4_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_EaiqeDnT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_nhCarvUJ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_2uOgvQEE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_e0VFYB7R_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_J0Zy2txk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_dniV6dCS_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_diEH4ZYo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_S1h4yKJ2_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_bZAhhd4r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_56CX3QAl_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_F6qCr5Lp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_tVl4LKfH_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_qVdWLjvL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_JgxWdFmc_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_qujIeLcc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_09IRKtaU_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_U8oQyEuM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_60IsHShn_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_l18QuwaC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_dKj17sqX_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_1eEDqxrt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_u0OMsjXi_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_l0SOoFSo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_9f08l3ud_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_nUYuugDY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_goUdBnZU_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_LVAAWOem_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_BFiKEVuy_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_hLZBxGyl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_1mDcGZwy_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_XL4C5waY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_hfptsIEK_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_JrOt0SCt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_WuXDW50q_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_XxQNZWPg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_9h5UPq41_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_X5HNwryw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_2CiohWuy_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_jRg0wVHp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_A06n2KEC_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_RgJLFUDt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_1OL3XjDT_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_Z16qH4wt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_hCfearFC_sendMessage);
}

void Heavy_Echomatica::cBinop_hCfearFC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_zohDcj11_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_OZgU0EB5_sendMessage);
}

void Heavy_Echomatica::cVar_imJIOhlw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_p3cB4rgt_sendMessage);
}

void Heavy_Echomatica::cMsg_G8gyNeVa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_PXMtoGIO_sendMessage);
}

void Heavy_Echomatica::cSystem_PXMtoGIO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sgFEIAR0, HV_BINOP_DIVIDE, 1, m, &cBinop_sgFEIAR0_sendMessage);
}

void Heavy_Echomatica::cBinop_zohDcj11_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_HK2iDlnF_sendMessage);
}

void Heavy_Echomatica::cBinop_HK2iDlnF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_9G9jYNhh, m);
}

void Heavy_Echomatica::cMsg_HAXwIPcc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_lEvO2ylX_sendMessage);
}

void Heavy_Echomatica::cBinop_lEvO2ylX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_Z16qH4wt_sendMessage);
}

void Heavy_Echomatica::cBinop_OZgU0EB5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_kbZBg2PD, m);
}

void Heavy_Echomatica::cBinop_p3cB4rgt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_FD4m7EmL_sendMessage);
}

void Heavy_Echomatica::cBinop_FD4m7EmL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sgFEIAR0, HV_BINOP_DIVIDE, 0, m, &cBinop_sgFEIAR0_sendMessage);
}

void Heavy_Echomatica::cBinop_sgFEIAR0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HAXwIPcc_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_ZEkgyal3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_kznEvD25_sendMessage);
}

void Heavy_Echomatica::cBinop_kznEvD25_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_U3F2rzmJ_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_fbEE6B2K_sendMessage);
}

void Heavy_Echomatica::cVar_OCpcpZCg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_ZK5mNSRB_sendMessage);
}

void Heavy_Echomatica::cMsg_TJFFmrIg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_v39ZCRQz_sendMessage);
}

void Heavy_Echomatica::cSystem_v39ZCRQz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_t7Q0UiUy, HV_BINOP_DIVIDE, 1, m, &cBinop_t7Q0UiUy_sendMessage);
}

void Heavy_Echomatica::cBinop_U3F2rzmJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_EVinOobO_sendMessage);
}

void Heavy_Echomatica::cBinop_EVinOobO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_8YyUBXMy, m);
}

void Heavy_Echomatica::cMsg_LlV8qf0F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_pCdijwYL_sendMessage);
}

void Heavy_Echomatica::cBinop_pCdijwYL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_ZEkgyal3_sendMessage);
}

void Heavy_Echomatica::cBinop_fbEE6B2K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Zo0H5CY9, m);
}

void Heavy_Echomatica::cBinop_ZK5mNSRB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_bLE2WcmU_sendMessage);
}

void Heavy_Echomatica::cBinop_bLE2WcmU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_t7Q0UiUy, HV_BINOP_DIVIDE, 0, m, &cBinop_t7Q0UiUy_sendMessage);
}

void Heavy_Echomatica::cBinop_t7Q0UiUy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LlV8qf0F_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_GMb00FfJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_W5xvvW4v_sendMessage);
}

void Heavy_Echomatica::cBinop_W5xvvW4v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_q5a3lOoa_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_SPopMRbk_sendMessage);
}

void Heavy_Echomatica::cVar_v0VlXVNG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_cXMe9gnB_sendMessage);
}

void Heavy_Echomatica::cMsg_y9SPUFeh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_DNA6cVSw_sendMessage);
}

void Heavy_Echomatica::cSystem_DNA6cVSw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eqhgLZda, HV_BINOP_DIVIDE, 1, m, &cBinop_eqhgLZda_sendMessage);
}

void Heavy_Echomatica::cBinop_q5a3lOoa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_nYE5xo2o_sendMessage);
}

void Heavy_Echomatica::cBinop_nYE5xo2o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_V2PCvtQO, m);
}

void Heavy_Echomatica::cMsg_sKBnxB8n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_W4p9nnp4_sendMessage);
}

void Heavy_Echomatica::cBinop_W4p9nnp4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_GMb00FfJ_sendMessage);
}

void Heavy_Echomatica::cBinop_SPopMRbk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_xIrBFsCk, m);
}

void Heavy_Echomatica::cBinop_cXMe9gnB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_67r60wY3_sendMessage);
}

void Heavy_Echomatica::cBinop_67r60wY3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eqhgLZda, HV_BINOP_DIVIDE, 0, m, &cBinop_eqhgLZda_sendMessage);
}

void Heavy_Echomatica::cBinop_eqhgLZda_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sKBnxB8n_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_K1wLVPYq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0Bp0fh76, HV_BINOP_MULTIPLY, 0, m, &cBinop_0Bp0fh76_sendMessage);
}

void Heavy_Echomatica::cMsg_XRRLKqvv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_zOhgYqGS_sendMessage);
}

void Heavy_Echomatica::cSystem_zOhgYqGS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GXvdaK4A_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_0Bp0fh76_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_x1UN05et_sendMessage);
}

void Heavy_Echomatica::cBinop_cplV6kMq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0Bp0fh76, HV_BINOP_MULTIPLY, 1, m, &cBinop_0Bp0fh76_sendMessage);
}

void Heavy_Echomatica::cMsg_GXvdaK4A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_cplV6kMq_sendMessage);
}

void Heavy_Echomatica::cBinop_x1UN05et_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_9QzcdFnQ_sendMessage);
}

void Heavy_Echomatica::cBinop_9QzcdFnQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_P7IVOsmj_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_qaPNQ9bk, m);
}

void Heavy_Echomatica::cBinop_P7IVOsmj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_VYW3Em0i, m);
}

void Heavy_Echomatica::cVar_kSYxaQez_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gGl0UbTJ, HV_BINOP_MULTIPLY, 0, m, &cBinop_gGl0UbTJ_sendMessage);
}

void Heavy_Echomatica::cMsg_Nw5D19dJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_91XMB2hJ_sendMessage);
}

void Heavy_Echomatica::cSystem_91XMB2hJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_RfJu53Gi_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_gGl0UbTJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_cbTiVPkk_sendMessage);
}

void Heavy_Echomatica::cBinop_YqOQhVBN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gGl0UbTJ, HV_BINOP_MULTIPLY, 1, m, &cBinop_gGl0UbTJ_sendMessage);
}

void Heavy_Echomatica::cMsg_RfJu53Gi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_YqOQhVBN_sendMessage);
}

void Heavy_Echomatica::cBinop_cbTiVPkk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_COvTWWat_sendMessage);
}

void Heavy_Echomatica::cBinop_COvTWWat_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_aD2iWPzO_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_72T4Bva3, m);
}

void Heavy_Echomatica::cBinop_aD2iWPzO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_kHUo7dV7, m);
}

void Heavy_Echomatica::cVar_IHQaTqtZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1rrnuAkd, HV_BINOP_MULTIPLY, 0, m, &cBinop_1rrnuAkd_sendMessage);
}

void Heavy_Echomatica::cMsg_G93ONhWm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_m29bEHF3_sendMessage);
}

void Heavy_Echomatica::cSystem_m29bEHF3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bZhBsZJo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_1rrnuAkd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_CJFqXu6e_sendMessage);
}

void Heavy_Echomatica::cBinop_O4AZLDhT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1rrnuAkd, HV_BINOP_MULTIPLY, 1, m, &cBinop_1rrnuAkd_sendMessage);
}

void Heavy_Echomatica::cMsg_bZhBsZJo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_O4AZLDhT_sendMessage);
}

void Heavy_Echomatica::cBinop_CJFqXu6e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_9bXqleEB_sendMessage);
}

void Heavy_Echomatica::cBinop_9bXqleEB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_OeIkoJiZ_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_ZyqTtYEc, m);
}

void Heavy_Echomatica::cBinop_OeIkoJiZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_tS7Vc0Ml, m);
}

void Heavy_Echomatica::cMsg_W0574mnP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_918ugrQI_sendMessage);
}

void Heavy_Echomatica::cSystem_918ugrQI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Xlux8k4v, HV_BINOP_DIVIDE, 1, m, &cBinop_Xlux8k4v_sendMessage);
}

void Heavy_Echomatica::cVar_WTcp6FCO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_bxzZbq3P_sendMessage);
}

void Heavy_Echomatica::cVar_H57kW1if_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.001f, 0, m, &cBinop_7CCNN0lX_sendMessage);
}

void Heavy_Echomatica::cUnop_Jr83TSZ7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_hrDYLscK_sendMessage);
}

void Heavy_Echomatica::cBinop_Xlux8k4v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NPWUNPVG, HV_BINOP_MULTIPLY, 1, m, &cBinop_NPWUNPVG_sendMessage);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_Jr83TSZ7_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CpXGCARa, HV_BINOP_DIVIDE, 0, m, &cBinop_CpXGCARa_sendMessage);
}

void Heavy_Echomatica::cBinop_bxzZbq3P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Xlux8k4v, HV_BINOP_DIVIDE, 0, m, &cBinop_Xlux8k4v_sendMessage);
}

void Heavy_Echomatica::cBinop_CpXGCARa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_i7e57epI_sendMessage);
}

void Heavy_Echomatica::cBinop_SdiYLpb5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_MaWSZCsE_sendMessage);
}

void Heavy_Echomatica::cBinop_MaWSZCsE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_KsialRiL_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_E3I6vwdP, HV_BINOP_MULTIPLY, 0, m, &cBinop_E3I6vwdP_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_NPWUNPVG, HV_BINOP_MULTIPLY, 0, m, &cBinop_NPWUNPVG_sendMessage);
}

void Heavy_Echomatica::cBinop_hrDYLscK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_E3I6vwdP, HV_BINOP_MULTIPLY, 1, m, &cBinop_E3I6vwdP_sendMessage);
}

void Heavy_Echomatica::cBinop_E3I6vwdP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_suYcIT2C_sendMessage);
}

void Heavy_Echomatica::cCast_dkzgUa8U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WTcp6FCO, 0, m, &cVar_WTcp6FCO_sendMessage);
}

void Heavy_Echomatica::cBinop_1GBRWnoC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_tfrsJwha_sendMessage);
}

void Heavy_Echomatica::cBinop_tfrsJwha_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_loiYuMC5, 5, m);
}

void Heavy_Echomatica::cBinop_suYcIT2C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_loiYuMC5, 4, m);
}

void Heavy_Echomatica::cBinop_aqzMpRKd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_on5NjNvA, HV_BINOP_MULTIPLY, 0, m, &cBinop_on5NjNvA_sendMessage);
}

void Heavy_Echomatica::cBinop_NPWUNPVG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rZz9vB4B, HV_BINOP_ADD, 1, m, &cBinop_rZz9vB4B_sendMessage);
}

void Heavy_Echomatica::cBinop_KsialRiL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_1GBRWnoC_sendMessage);
}

void Heavy_Echomatica::cBinop_rZz9vB4B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_on5NjNvA, HV_BINOP_MULTIPLY, 1, m, &cBinop_on5NjNvA_sendMessage);
}

void Heavy_Echomatica::cBinop_on5NjNvA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_loiYuMC5, 1, m);
}

void Heavy_Echomatica::cBinop_7CCNN0lX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CpXGCARa, HV_BINOP_DIVIDE, 1, m, &cBinop_CpXGCARa_sendMessage);
}

void Heavy_Echomatica::cBinop_i7e57epI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_SdiYLpb5_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_rZz9vB4B, HV_BINOP_ADD, 0, m, &cBinop_rZz9vB4B_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_aqzMpRKd_sendMessage);
}

void Heavy_Echomatica::cVar_TDukiTDV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_lx0AKgQv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_G0hYcICy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_AtfSUqcp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_BHR4QbaJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_x7imYXTh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cSlice_fgxi0wWh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_s1ZtzYHx, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_71lZOi23_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_phlLOT9o, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_zgOZP12x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_uXhDoc1Y, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_YFTifp6L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_G68Y2eGK, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSwitchcase_4UKQDJi5_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aNQnpKHk_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_H6RKCnm1_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_aNQnpKHk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wXvvGA4u_sendMessage);
}

void Heavy_Echomatica::cPack_kko2CkAq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_48LL9Pyg, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_In9j7433_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_PVmhDilr_sendMessage);
}

void Heavy_Echomatica::cSystem_PVmhDilr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_FnFG1Lt6_sendMessage);
}

void Heavy_Echomatica::cDelay_LesS5ndT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_LesS5ndT, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_x52EtyBc, 0, m, &cDelay_x52EtyBc_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_LesS5ndT, 0, m, &cDelay_LesS5ndT_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_TihwjOhr, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_x52EtyBc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_x52EtyBc, m);
  cMsg_IUAdkMb1_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_wuCi0GaI_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_K3FLo2zS_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_iU7pMFi6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bRB5tZKI_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_Bu2hii23_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Z0whwi60_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_LesS5ndT, 2, m, &cDelay_LesS5ndT_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jRsULMWl_sendMessage);
}

void Heavy_Echomatica::cMsg_bRB5tZKI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_Bu2hii23, 0, m, &hTable_Bu2hii23_sendMessage);
}

void Heavy_Echomatica::cBinop_FnFG1Lt6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 40.0f, 0, m, &cBinop_iU7pMFi6_sendMessage);
}

void Heavy_Echomatica::cMsg_IUAdkMb1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_Bu2hii23, 0, m, &hTable_Bu2hii23_sendMessage);
}

void Heavy_Echomatica::cCast_jRsULMWl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_LesS5ndT, 0, m, &cDelay_LesS5ndT_sendMessage);
}

void Heavy_Echomatica::cMsg_Z0whwi60_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_x52EtyBc, 2, m, &cDelay_x52EtyBc_sendMessage);
}

void Heavy_Echomatica::cMsg_K3FLo2zS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_TihwjOhr, 1, m, NULL);
}

void Heavy_Echomatica::cVar_w4hSaAQW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_tSsl8zRz, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_BB81avOo, m);
}

void Heavy_Echomatica::cMsg_zvIgp1yJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ln7UwaYc_sendMessage);
}

void Heavy_Echomatica::cSystem_ln7UwaYc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_zX5q5hnH_sendMessage);
}

void Heavy_Echomatica::cVar_NTGAE1ul_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3IdvLEyl_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_iEkUvhY2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_EK7wodNq_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Apj3pBkj, m);
}

void Heavy_Echomatica::cBinop_zX5q5hnH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_2QuxuKQc, m);
}

void Heavy_Echomatica::cMsg_3IdvLEyl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_iEkUvhY2_sendMessage);
}

void Heavy_Echomatica::cBinop_EK7wodNq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_aN3B3JpT, m);
}

void Heavy_Echomatica::cMsg_Yd8VSQPS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_eEJZVC7w_sendMessage);
}

void Heavy_Echomatica::cSystem_eEJZVC7w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_BmFMQWjW_sendMessage);
}

void Heavy_Echomatica::cVar_7TneJBqy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gMOD6AuJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_l0TlAgx1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_I5TArvkN_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_c1ZZxxWf, m);
}

void Heavy_Echomatica::cBinop_BmFMQWjW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_C5nexXEw, m);
}

void Heavy_Echomatica::cMsg_gMOD6AuJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_l0TlAgx1_sendMessage);
}

void Heavy_Echomatica::cBinop_I5TArvkN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_5dZem6tZ, m);
}

void Heavy_Echomatica::cMsg_A5XvuhF4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_tHUIzwpl_sendMessage);
}

void Heavy_Echomatica::cSystem_tHUIzwpl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_zyxekSRK_sendMessage);
}

void Heavy_Echomatica::cDelay_aeuJdbGm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_aeuJdbGm, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_3oOjQNEg, 0, m, &cDelay_3oOjQNEg_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_aeuJdbGm, 0, m, &cDelay_aeuJdbGm_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_r3lLXQA5, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_3oOjQNEg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_3oOjQNEg, m);
  cMsg_rQC18nFg_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_XMZw3Zg5_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_MqxN1YN9_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_uC4he2EB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_n0Hgx3Ak_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_oR00A0XF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CDGcoMmQ_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_aeuJdbGm, 2, m, &cDelay_aeuJdbGm_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yKKCWNKt_sendMessage);
}

void Heavy_Echomatica::cMsg_n0Hgx3Ak_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_oR00A0XF, 0, m, &hTable_oR00A0XF_sendMessage);
}

void Heavy_Echomatica::cBinop_zyxekSRK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 30.0f, 0, m, &cBinop_uC4he2EB_sendMessage);
}

void Heavy_Echomatica::cMsg_rQC18nFg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_oR00A0XF, 0, m, &hTable_oR00A0XF_sendMessage);
}

void Heavy_Echomatica::cCast_yKKCWNKt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_aeuJdbGm, 0, m, &cDelay_aeuJdbGm_sendMessage);
}

void Heavy_Echomatica::cMsg_CDGcoMmQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_3oOjQNEg, 2, m, &cDelay_3oOjQNEg_sendMessage);
}

void Heavy_Echomatica::cMsg_MqxN1YN9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_r3lLXQA5, 1, m, NULL);
}

void Heavy_Echomatica::cBinop_cJV54a5T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_tPmOzPil_sendMessage);
}

void Heavy_Echomatica::cBinop_tPmOzPil_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_BxoM88hO_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_UCMKy35X_sendMessage);
}

void Heavy_Echomatica::cVar_7Wi3TOyJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_7UGhKfpQ_sendMessage);
}

void Heavy_Echomatica::cMsg_YDQHsUuq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_rGQwUBgA_sendMessage);
}

void Heavy_Echomatica::cSystem_rGQwUBgA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MQ1gW7uX, HV_BINOP_DIVIDE, 1, m, &cBinop_MQ1gW7uX_sendMessage);
}

void Heavy_Echomatica::cBinop_BxoM88hO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_ji3Fs3hy_sendMessage);
}

void Heavy_Echomatica::cBinop_ji3Fs3hy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_PNgHyURc, m);
}

void Heavy_Echomatica::cMsg_fH7aOtdM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_iUDQKm1e_sendMessage);
}

void Heavy_Echomatica::cBinop_iUDQKm1e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_cJV54a5T_sendMessage);
}

void Heavy_Echomatica::cBinop_UCMKy35X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_0aFgsf8H, m);
}

void Heavy_Echomatica::cBinop_7UGhKfpQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_6Q3g50AZ_sendMessage);
}

void Heavy_Echomatica::cBinop_6Q3g50AZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MQ1gW7uX, HV_BINOP_DIVIDE, 0, m, &cBinop_MQ1gW7uX_sendMessage);
}

void Heavy_Echomatica::cBinop_MQ1gW7uX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fH7aOtdM_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_d2KxuIyV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_ncT2a5yw_sendMessage);
}

void Heavy_Echomatica::cBinop_ncT2a5yw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_nRMzgZyP_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_UNaxc4oW_sendMessage);
}

void Heavy_Echomatica::cVar_8qbHJ3iQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_XAXAijBF_sendMessage);
}

void Heavy_Echomatica::cMsg_GMtly4YW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_pu7U8035_sendMessage);
}

void Heavy_Echomatica::cSystem_pu7U8035_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VGIy5eQk, HV_BINOP_DIVIDE, 1, m, &cBinop_VGIy5eQk_sendMessage);
}

void Heavy_Echomatica::cBinop_nRMzgZyP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_ZmPzEhJ4_sendMessage);
}

void Heavy_Echomatica::cBinop_ZmPzEhJ4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_GDqmAVCN, m);
}

void Heavy_Echomatica::cMsg_l8B8ldPW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Mk6E0itv_sendMessage);
}

void Heavy_Echomatica::cBinop_Mk6E0itv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_d2KxuIyV_sendMessage);
}

void Heavy_Echomatica::cBinop_UNaxc4oW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_1ChFRYgX, m);
}

void Heavy_Echomatica::cBinop_XAXAijBF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_x5zTfSSi_sendMessage);
}

void Heavy_Echomatica::cBinop_x5zTfSSi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VGIy5eQk, HV_BINOP_DIVIDE, 0, m, &cBinop_VGIy5eQk_sendMessage);
}

void Heavy_Echomatica::cBinop_VGIy5eQk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_l8B8ldPW_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_XtPrSkAH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_P0w2EYOm, 0, m, &cPack_P0w2EYOm_sendMessage);
}

void Heavy_Echomatica::cVar_9jFvP9Yy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_nJWalzx6, 0, m, &cPack_nJWalzx6_sendMessage);
}

void Heavy_Echomatica::cVar_eJDAHrdQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_bQ1vjpRV_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cPack_nJWalzx6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_UTR0isYR, 0, m, NULL);
}

void Heavy_Echomatica::cPack_P0w2EYOm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_PMAVwrw6, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_bQ1vjpRV_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qoZtYC35_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hXb5SQ1O_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2CGkLyfF_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_qoZtYC35_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tsmSvreF_sendMessage(_c, 0, m);
  cMsg_2HwP889y_sendMessage(_c, 0, m);
  cMsg_5njFVSRe_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_hXb5SQ1O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tsmSvreF_sendMessage(_c, 0, m);
  cMsg_2HwP889y_sendMessage(_c, 0, m);
  cMsg_acVMFRMN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_2CGkLyfF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YvjpnMVU_sendMessage(_c, 0, m);
  cMsg_zC3xpwkZ_sendMessage(_c, 0, m);
  cMsg_acVMFRMN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_H8rzJGy6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_kWJQEwMu_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_1DXVmulJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SYlGZpST, HV_BINOP_DIVIDE, 0, m, &cBinop_SYlGZpST_sendMessage);
}

void Heavy_Echomatica::cVar_uayPsd4a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iL1rQ9Wp, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_iL1rQ9Wp_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_dmRWWlKf, 0, m, &cIf_dmRWWlKf_sendMessage);
}

void Heavy_Echomatica::sEnv_f8pa2QUs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_i0lNJqJ4_sendMessage);
}

void Heavy_Echomatica::cBinop_rxepvfms_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_fiuX6Nz7_sendMessage);
}

void Heavy_Echomatica::cBinop_fiuX6Nz7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FJ5i6ZlI_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DuoYsAmI_sendMessage);
}

void Heavy_Echomatica::cCast_FJ5i6ZlI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gYTfQIBz, HV_BINOP_POW, 1, m, &cBinop_gYTfQIBz_sendMessage);
}

void Heavy_Echomatica::cCast_DuoYsAmI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_W7w4UjFp_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_W7w4UjFp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_gYTfQIBz, HV_BINOP_POW, 0, m, &cBinop_gYTfQIBz_sendMessage);
}

void Heavy_Echomatica::cBinop_gYTfQIBz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_80lAakAa_sendMessage);
}

void Heavy_Echomatica::cIf_dmRWWlKf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_rxepvfms, HV_BINOP_SUBTRACT, 0, m, &cBinop_rxepvfms_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_uUYfcnbw, HV_BINOP_SUBTRACT, 0, m, &cBinop_uUYfcnbw_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_iL1rQ9Wp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_dmRWWlKf, 1, m, &cIf_dmRWWlKf_sendMessage);
}

void Heavy_Echomatica::cVar_v9O5p70e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_F9q8gKWW_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Kb9XAlV8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7XnTEmgu_sendMessage);
}

void Heavy_Echomatica::cVar_UAf7d0Kr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dgyCpYBG_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hpfdlHZC_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_L6vvQm0k_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_SQ3smkm7, 0, m, &cSlice_SQ3smkm7_sendMessage);
      break;
    }
    default: {
      cSwitchcase_yX32uW7V_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_SQ3smkm7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_AGVdMpAz_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_AGVdMpAz_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_izEsITlU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_AGVdMpAz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_AGVdMpAz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ACS1HAkI_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_yX32uW7V_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_87zTsxl9, 0, m, &cSlice_87zTsxl9_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_87zTsxl9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_lnSOZ9Bs_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_lnSOZ9Bs_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_dCjsO9Gf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_lnSOZ9Bs_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_lnSOZ9Bs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_uVlrzoL6_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_hpfdlHZC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_1DXVmulJ, 0, m, &cVar_1DXVmulJ_sendMessage);
}

void Heavy_Echomatica::cCast_dgyCpYBG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SYlGZpST, HV_BINOP_DIVIDE, 1, m, &cBinop_SYlGZpST_sendMessage);
}

void Heavy_Echomatica::cBinop_SYlGZpST_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qCVzcsBM, HV_BINOP_ADD, 0, m, &cBinop_qCVzcsBM_sendMessage);
}

void Heavy_Echomatica::cBinop_uUYfcnbw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_1DXVmulJ, 0, m, &cVar_1DXVmulJ_sendMessage);
}

void Heavy_Echomatica::cCast_7XnTEmgu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uayPsd4a, 0, m, &cVar_uayPsd4a_sendMessage);
}

void Heavy_Echomatica::cCast_F9q8gKWW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZLKpP55B_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fZkLHrSF_sendMessage);
}

void Heavy_Echomatica::cCast_Kb9XAlV8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iL1rQ9Wp, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_iL1rQ9Wp_sendMessage);
}

void Heavy_Echomatica::cBinop_qCVzcsBM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rxepvfms, HV_BINOP_SUBTRACT, 0, m, &cBinop_rxepvfms_sendMessage);
}

void Heavy_Echomatica::cCast_93q1yowA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_UAf7d0Kr, 0, m, &cVar_UAf7d0Kr_sendMessage);
}

void Heavy_Echomatica::cCast_o0TkQRym_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_v9O5p70e, 0, m, &cVar_v9O5p70e_sendMessage);
}

void Heavy_Echomatica::cCast_GDclcBmH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uayPsd4a, 0, m, &cVar_uayPsd4a_sendMessage);
}

void Heavy_Echomatica::cCast_2x1nYZje_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rxepvfms, HV_BINOP_SUBTRACT, 1, m, &cBinop_rxepvfms_sendMessage);
}

void Heavy_Echomatica::cBinop_80lAakAa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_onkcbXCl_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_fZkLHrSF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uUYfcnbw, HV_BINOP_SUBTRACT, 1, m, &cBinop_uUYfcnbw_sendMessage);
}

void Heavy_Echomatica::cCast_ZLKpP55B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qCVzcsBM, HV_BINOP_ADD, 1, m, &cBinop_qCVzcsBM_sendMessage);
}

void Heavy_Echomatica::cBinop_i0lNJqJ4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2x1nYZje_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GDclcBmH_sendMessage);
}

void Heavy_Echomatica::cMsg_onkcbXCl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_xAZFSuM9, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_tsmSvreF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_9jFvP9Yy, 0, m, &cVar_9jFvP9Yy_sendMessage);
}

void Heavy_Echomatica::cMsg_2HwP889y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_XtPrSkAH, 0, m, &cVar_XtPrSkAH_sendMessage);
}

void Heavy_Echomatica::cMsg_YvjpnMVU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_9jFvP9Yy, 0, m, &cVar_9jFvP9Yy_sendMessage);
}

void Heavy_Echomatica::cMsg_zC3xpwkZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_XtPrSkAH, 0, m, &cVar_XtPrSkAH_sendMessage);
}

void Heavy_Echomatica::cSend_kWJQEwMu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Kt4fU8KO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_5njFVSRe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_H8rzJGy6, 0, m, &cVar_H8rzJGy6_sendMessage);
}

void Heavy_Echomatica::cMsg_acVMFRMN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_H8rzJGy6, 0, m, &cVar_H8rzJGy6_sendMessage);
}

void Heavy_Echomatica::cVar_kbuSYQBZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DXoVH7Lb, HV_BINOP_MULTIPLY, 0, m, &cBinop_DXoVH7Lb_sendMessage);
}

void Heavy_Echomatica::cMsg_CVUnWrb4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_mVA5sf9c_sendMessage);
}

void Heavy_Echomatica::cSystem_mVA5sf9c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jDGcgPxu_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_DXoVH7Lb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_ZPwRevfU_sendMessage);
}

void Heavy_Echomatica::cBinop_JXYwNLzY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DXoVH7Lb, HV_BINOP_MULTIPLY, 1, m, &cBinop_DXoVH7Lb_sendMessage);
}

void Heavy_Echomatica::cMsg_jDGcgPxu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_JXYwNLzY_sendMessage);
}

void Heavy_Echomatica::cBinop_ZPwRevfU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_wSbqB8wQ_sendMessage);
}

void Heavy_Echomatica::cBinop_wSbqB8wQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_RpbpYZa4_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_eKMgMi2L, m);
}

void Heavy_Echomatica::cBinop_RpbpYZa4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_J435cWQB, m);
}

void Heavy_Echomatica::cBinop_qUaEyoS6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_sUuIuX3r_sendMessage);
}

void Heavy_Echomatica::cBinop_sUuIuX3r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_qQqofH4b_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_pLUPArlM_sendMessage);
}

void Heavy_Echomatica::cVar_wUtorRt4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_gdZf0ipe_sendMessage);
}

void Heavy_Echomatica::cMsg_eEgNOtwG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_KJ9GKVzg_sendMessage);
}

void Heavy_Echomatica::cSystem_KJ9GKVzg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kPIm9Toj, HV_BINOP_DIVIDE, 1, m, &cBinop_kPIm9Toj_sendMessage);
}

void Heavy_Echomatica::cBinop_qQqofH4b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_02ioGwNg_sendMessage);
}

void Heavy_Echomatica::cBinop_02ioGwNg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_FskPHzZy, m);
}

void Heavy_Echomatica::cMsg_jJCx4FfA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_pMG4EaMv_sendMessage);
}

void Heavy_Echomatica::cBinop_pMG4EaMv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_qUaEyoS6_sendMessage);
}

void Heavy_Echomatica::cBinop_pLUPArlM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_V7P67Y9n, m);
}

void Heavy_Echomatica::cBinop_gdZf0ipe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_MAoA13px_sendMessage);
}

void Heavy_Echomatica::cBinop_MAoA13px_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kPIm9Toj, HV_BINOP_DIVIDE, 0, m, &cBinop_kPIm9Toj_sendMessage);
}

void Heavy_Echomatica::cBinop_kPIm9Toj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jJCx4FfA_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_Pfr62Nxy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_HhLBt6J0_sendMessage);
}

void Heavy_Echomatica::cBinop_HhLBt6J0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_ITPnds8Z_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_N0eTPhmt_sendMessage);
}

void Heavy_Echomatica::cVar_t8GzuYC0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_HM0vN2eA_sendMessage);
}

void Heavy_Echomatica::cMsg_kfEfQUQW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_VWWnkknM_sendMessage);
}

void Heavy_Echomatica::cSystem_VWWnkknM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aqyZN1as, HV_BINOP_DIVIDE, 1, m, &cBinop_aqyZN1as_sendMessage);
}

void Heavy_Echomatica::cBinop_ITPnds8Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_fvaTzf3z_sendMessage);
}

void Heavy_Echomatica::cBinop_fvaTzf3z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ZCDMH6Nt, m);
}

void Heavy_Echomatica::cMsg_mCodnjxl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_xegBvu23_sendMessage);
}

void Heavy_Echomatica::cBinop_xegBvu23_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_Pfr62Nxy_sendMessage);
}

void Heavy_Echomatica::cBinop_N0eTPhmt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_E4cyVh3U, m);
}

void Heavy_Echomatica::cBinop_HM0vN2eA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_nawc73WA_sendMessage);
}

void Heavy_Echomatica::cBinop_nawc73WA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aqyZN1as, HV_BINOP_DIVIDE, 0, m, &cBinop_aqyZN1as_sendMessage);
}

void Heavy_Echomatica::cBinop_aqyZN1as_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mCodnjxl_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cIf_hAVcR5Ov_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_N5SDlrZY, 0, m, &cVar_N5SDlrZY_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_N5SDlrZY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zGC10UMZ, HV_BINOP_MULTIPLY, 0, m, &cBinop_zGC10UMZ_sendMessage);
}

void Heavy_Echomatica::cVar_mE865qZl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_hAVcR5Ov, 0, m, &cIf_hAVcR5Ov_sendMessage);
}

void Heavy_Echomatica::cPack_p8zJQn7h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_60qaf6gZ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_yOAXZ97G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_s7Is6GRG_sendMessage);
}

void Heavy_Echomatica::cSystem_s7Is6GRG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nhTylQ1p, HV_BINOP_MULTIPLY, 1, m, &cBinop_nhTylQ1p_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_TVouzEVv, HV_BINOP_MULTIPLY, 1, m, &cBinop_TVouzEVv_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_ZcHCHm5Z_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cMsg_5YnFkSn3_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_5YnFkSn3_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XgD4bp0S_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cDelay_OBaYvu6d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_OBaYvu6d, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_OBaYvu6d, 0, m, &cDelay_OBaYvu6d_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_uaCviU4C, 0, m, &cVar_uaCviU4C_sendMessage);
}

void Heavy_Echomatica::cCast_XgD4bp0S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5YnFkSn3_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_OBaYvu6d, 0, m, &cDelay_OBaYvu6d_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_uaCviU4C, 0, m, &cVar_uaCviU4C_sendMessage);
}

void Heavy_Echomatica::cMsg_RCwRxXOo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_29UV0Jna_sendMessage);
}

void Heavy_Echomatica::cSystem_29UV0Jna_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_aUip6j7A_sendMessage);
}

void Heavy_Echomatica::cVar_GlkqmJam_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BRlp91PS, HV_BINOP_MULTIPLY, 0, m, &cBinop_BRlp91PS_sendMessage);
}

void Heavy_Echomatica::cMsg_5YnFkSn3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_OBaYvu6d, 0, m, &cDelay_OBaYvu6d_sendMessage);
}

void Heavy_Echomatica::cBinop_Of0k2hzJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_OBaYvu6d, 2, m, &cDelay_OBaYvu6d_sendMessage);
}

void Heavy_Echomatica::cBinop_aUip6j7A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BRlp91PS, HV_BINOP_MULTIPLY, 1, m, &cBinop_BRlp91PS_sendMessage);
}

void Heavy_Echomatica::cBinop_BRlp91PS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_Of0k2hzJ_sendMessage);
}

void Heavy_Echomatica::cVar_uaCviU4C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YsKQFnw8, HV_BINOP_SUBTRACT, 0, m, &cBinop_YsKQFnw8_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_ycgeIBmV_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_hmbRxyo8_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pnVOhWPb_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KX1sWKBW_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_pnVOhWPb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_94UzbUM7, 0, m, &cVar_94UzbUM7_sendMessage);
}

void Heavy_Echomatica::cCast_KX1sWKBW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JDm4Ww6n_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pPaVLSB9_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_60qaf6gZ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ZvEo8swK, 0, m, &cSlice_ZvEo8swK_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_zSCSUaFd, 0, m, &cSlice_zSCSUaFd_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ebiUCFV1_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_rvtZcj4T, 0, m, &cSlice_rvtZcj4T_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_oLryQ5PH, 0, m, &cSlice_oLryQ5PH_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_38uWnube_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QYfy8QhT_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_ZvEo8swK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_V5rBOnPP_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_V5rBOnPP_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_zSCSUaFd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UmNTa5po_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4sWdpTzS_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UmNTa5po_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4sWdpTzS_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_oaQK3YQK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ssDHCuMj_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_cWIbCM9g_sendMessage);
}

void Heavy_Echomatica::cVar_9VPf3buc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ekFJqz84_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_ekFJqz84_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0BvgaeXA_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_nhTylQ1p, HV_BINOP_MULTIPLY, 0, m, &cBinop_nhTylQ1p_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_K4aTYkf2, HV_BINOP_DIVIDE, 1, m, &cBinop_K4aTYkf2_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_GlkqmJam, 0, m, &cVar_GlkqmJam_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_0BvgaeXA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GxbLTptU_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_anlQUJn6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_biK3ElqM, HV_BINOP_SUBTRACT, 1, m, &cBinop_biK3ElqM_sendMessage);
}

void Heavy_Echomatica::cVar_rUw7WFSt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_94UzbUM7, 0, m, &cVar_94UzbUM7_sendMessage);
}

void Heavy_Echomatica::cVar_94UzbUM7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CfyCx3Ji, HV_BINOP_ADD, 0, m, &cBinop_CfyCx3Ji_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_hhcXqNCR, HV_BINOP_ADD, 0, m, &cBinop_hhcXqNCR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CL6HJA2u_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_9DeBlFNd_sendMessage);
}

void Heavy_Echomatica::cSlice_rvtZcj4T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ssDHCuMj_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_cWIbCM9g_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_oLryQ5PH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_op4isrMZ_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XSLwZ4LX_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_pQSQQ3IY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uaCviU4C, 1, m, &cVar_uaCviU4C_sendMessage);
}

void Heavy_Echomatica::cBinop_TVouzEVv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_pQSQQ3IY_sendMessage);
}

void Heavy_Echomatica::cBinop_nhTylQ1p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_vl8gSnAu_sendMessage);
}

void Heavy_Echomatica::cBinop_vl8gSnAu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YsKQFnw8, HV_BINOP_SUBTRACT, 1, m, &cBinop_YsKQFnw8_sendMessage);
}

void Heavy_Echomatica::cBinop_YsKQFnw8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uaCviU4C, 1, m, &cVar_uaCviU4C_sendMessage);
}

void Heavy_Echomatica::cMsg_ZMUlrLbb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_ZcHCHm5Z_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_R3lSi1Wl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_ZcHCHm5Z_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_hhcXqNCR, HV_BINOP_ADD, 1, m, &cBinop_hhcXqNCR_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CfyCx3Ji, HV_BINOP_ADD, 1, m, &cBinop_CfyCx3Ji_sendMessage);
}

void Heavy_Echomatica::cBinop_ycgeIBmV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_hmbRxyo8_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_CfyCx3Ji_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_94UzbUM7, 1, m, &cVar_94UzbUM7_sendMessage);
}

void Heavy_Echomatica::cBinop_K4aTYkf2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KGjp7GgB, HV_BINOP_DIVIDE, 1, m, &cBinop_KGjp7GgB_sendMessage);
}

void Heavy_Echomatica::cBinop_KGjp7GgB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hhcXqNCR, HV_BINOP_ADD, 1, m, &cBinop_hhcXqNCR_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CfyCx3Ji, HV_BINOP_ADD, 1, m, &cBinop_CfyCx3Ji_sendMessage);
}

void Heavy_Echomatica::cCast_ssDHCuMj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TVouzEVv, HV_BINOP_MULTIPLY, 0, m, &cBinop_TVouzEVv_sendMessage);
}

void Heavy_Echomatica::cCast_cWIbCM9g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_K4aTYkf2, HV_BINOP_DIVIDE, 0, m, &cBinop_K4aTYkf2_sendMessage);
}

void Heavy_Echomatica::cCast_XSLwZ4LX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_biK3ElqM, HV_BINOP_SUBTRACT, 0, m, &cBinop_biK3ElqM_sendMessage);
}

void Heavy_Echomatica::cCast_op4isrMZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rUw7WFSt, 1, m, &cVar_rUw7WFSt_sendMessage);
}

void Heavy_Echomatica::cCast_pPaVLSB9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rUw7WFSt, 0, m, &cVar_rUw7WFSt_sendMessage);
}

void Heavy_Echomatica::cCast_JDm4Ww6n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_R3lSi1Wl_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_hhcXqNCR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_anlQUJn6, 0, m, &cVar_anlQUJn6_sendMessage);
}

void Heavy_Echomatica::cMsg_V5rBOnPP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_ZcHCHm5Z_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_zEL4PgSt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_oaQK3YQK, 1, m, &cVar_oaQK3YQK_sendMessage);
}

void Heavy_Echomatica::cMsg_GxbLTptU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_nhTylQ1p, HV_BINOP_MULTIPLY, 0, m, &cBinop_nhTylQ1p_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_K4aTYkf2, HV_BINOP_DIVIDE, 1, m, &cBinop_K4aTYkf2_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_GlkqmJam, 0, m, &cVar_GlkqmJam_sendMessage);
}

void Heavy_Echomatica::cCast_4sWdpTzS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SWJaf41K_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_hhcXqNCR, HV_BINOP_ADD, 0, m, &cBinop_hhcXqNCR_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_94UzbUM7, 1, m, &cVar_94UzbUM7_sendMessage);
}

void Heavy_Echomatica::cCast_UmNTa5po_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_V5rBOnPP_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_biK3ElqM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KGjp7GgB, HV_BINOP_DIVIDE, 0, m, &cBinop_KGjp7GgB_sendMessage);
}

void Heavy_Echomatica::cCast_SWJaf41K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_R3lSi1Wl_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_ebiUCFV1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_oaQK3YQK, 0, m, &cVar_oaQK3YQK_sendMessage);
}

void Heavy_Echomatica::cCast_QYfy8QhT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zEL4PgSt_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_38uWnube_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ZMUlrLbb_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_WHQZVKib_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aGM1RwCJ, HV_BINOP_MULTIPLY, 0, m, &cBinop_aGM1RwCJ_sendMessage);
}

void Heavy_Echomatica::cVar_830y943j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rpK4ksIM, HV_BINOP_MULTIPLY, 0, m, &cBinop_rpK4ksIM_sendMessage);
}

void Heavy_Echomatica::cVar_Sq08Ndlz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_07udjAsk, HV_BINOP_MULTIPLY, 0, m, &cBinop_07udjAsk_sendMessage);
}

void Heavy_Echomatica::cVar_Ns6GDlMI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9wzAEek8, HV_BINOP_MULTIPLY, 0, m, &cBinop_9wzAEek8_sendMessage);
}

void Heavy_Echomatica::cVar_Me41wxwQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fS8lwFgN, HV_BINOP_MULTIPLY, 0, m, &cBinop_fS8lwFgN_sendMessage);
}

void Heavy_Echomatica::cVar_A1aZDaBU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1Ywqfou5, HV_BINOP_MULTIPLY, 0, m, &cBinop_1Ywqfou5_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_qpjQXctj_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GmAVGK1n_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rwmqzPFs_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_GmAVGK1n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KCyQzvSP_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QRqG6Klt_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HZKxC3pI_sendMessage);
}

void Heavy_Echomatica::cCast_rwmqzPFs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Lvs58uNs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SpsoZ6A0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BKTFULWN_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qVSEaPDW_sendMessage);
}

void Heavy_Echomatica::cBinop_pdILnZU5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_8WugEyyK_sendMessage);
}

void Heavy_Echomatica::cBinop_8WugEyyK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_BAlEfxGe_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_okRvmzIW_sendMessage);
}

void Heavy_Echomatica::cVar_X2KKjskD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_gUC5ULYf_sendMessage);
}

void Heavy_Echomatica::cMsg_rduYJkt4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_VCaSRtqX_sendMessage);
}

void Heavy_Echomatica::cSystem_VCaSRtqX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Evskkssy, HV_BINOP_DIVIDE, 1, m, &cBinop_Evskkssy_sendMessage);
}

void Heavy_Echomatica::cBinop_BAlEfxGe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_5VatXunF_sendMessage);
}

void Heavy_Echomatica::cBinop_5VatXunF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_yjqd6llX, m);
}

void Heavy_Echomatica::cMsg_w9CMnIrJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_AMK6JtJf_sendMessage);
}

void Heavy_Echomatica::cBinop_AMK6JtJf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_pdILnZU5_sendMessage);
}

void Heavy_Echomatica::cBinop_okRvmzIW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_iZfyaZnp, m);
}

void Heavy_Echomatica::cBinop_gUC5ULYf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_L1Zd42qA_sendMessage);
}

void Heavy_Echomatica::cBinop_L1Zd42qA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Evskkssy, HV_BINOP_DIVIDE, 0, m, &cBinop_Evskkssy_sendMessage);
}

void Heavy_Echomatica::cBinop_Evskkssy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_w9CMnIrJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_rMSgKSFl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4DlhaEKb, HV_BINOP_DIVIDE, 0, m, &cBinop_4DlhaEKb_sendMessage);
}

void Heavy_Echomatica::cVar_N2m52hDl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_J0Q0nAjk, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_J0Q0nAjk_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_CRvyJO4P, 0, m, &cIf_CRvyJO4P_sendMessage);
}

void Heavy_Echomatica::sEnv_4vftZG2q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_7VQx4uKX_sendMessage);
}

void Heavy_Echomatica::cBinop_ZTneeeeX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_DIO0y4xd_sendMessage);
}

void Heavy_Echomatica::cBinop_DIO0y4xd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oKmcX6MY_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2ZkUHhYW_sendMessage);
}

void Heavy_Echomatica::cCast_2ZkUHhYW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jIcDgHWf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_oKmcX6MY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MQ5vdPxv, HV_BINOP_POW, 1, m, &cBinop_MQ5vdPxv_sendMessage);
}

void Heavy_Echomatica::cMsg_jIcDgHWf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_MQ5vdPxv, HV_BINOP_POW, 0, m, &cBinop_MQ5vdPxv_sendMessage);
}

void Heavy_Echomatica::cBinop_MQ5vdPxv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_NS3MN8Nv_sendMessage);
}

void Heavy_Echomatica::cIf_CRvyJO4P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_ZTneeeeX, HV_BINOP_SUBTRACT, 0, m, &cBinop_ZTneeeeX_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_O0A4BI8w, HV_BINOP_SUBTRACT, 0, m, &cBinop_O0A4BI8w_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_J0Q0nAjk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_CRvyJO4P, 1, m, &cIf_CRvyJO4P_sendMessage);
}

void Heavy_Echomatica::cVar_ZVziFXWv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qLDK1OuL_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_S8WPHaW6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BDVk4Djv_sendMessage);
}

void Heavy_Echomatica::cVar_RpHoV4XX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Q2QKE5I8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Uqmo70bX_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_miSWAzKn_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_9rGahRIT, 0, m, &cSlice_9rGahRIT_sendMessage);
      break;
    }
    default: {
      cSwitchcase_GK8extLm_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_9rGahRIT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_qFG7eCS0_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_qFG7eCS0_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_IyZTLGXp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_qFG7eCS0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_qFG7eCS0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_CtmFsuf7_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_GK8extLm_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_zf1DD3F2, 0, m, &cSlice_zf1DD3F2_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_zf1DD3F2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ocxTFqJ2_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_ocxTFqJ2_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_GjZQT7z0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_ocxTFqJ2_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_ocxTFqJ2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_5F9ojLJJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_Uqmo70bX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rMSgKSFl, 0, m, &cVar_rMSgKSFl_sendMessage);
}

void Heavy_Echomatica::cCast_Q2QKE5I8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4DlhaEKb, HV_BINOP_DIVIDE, 1, m, &cBinop_4DlhaEKb_sendMessage);
}

void Heavy_Echomatica::cBinop_4DlhaEKb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BG5pvVNh, HV_BINOP_ADD, 0, m, &cBinop_BG5pvVNh_sendMessage);
}

void Heavy_Echomatica::cBinop_O0A4BI8w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rMSgKSFl, 0, m, &cVar_rMSgKSFl_sendMessage);
}

void Heavy_Echomatica::cCast_S8WPHaW6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_J0Q0nAjk, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_J0Q0nAjk_sendMessage);
}

void Heavy_Echomatica::cCast_qLDK1OuL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_w77GT5bp_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_X0K5mvog_sendMessage);
}

void Heavy_Echomatica::cCast_BDVk4Djv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_N2m52hDl, 0, m, &cVar_N2m52hDl_sendMessage);
}

void Heavy_Echomatica::cBinop_BG5pvVNh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZTneeeeX, HV_BINOP_SUBTRACT, 0, m, &cBinop_ZTneeeeX_sendMessage);
}

void Heavy_Echomatica::cCast_KEb8KL6X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ZVziFXWv, 0, m, &cVar_ZVziFXWv_sendMessage);
}

void Heavy_Echomatica::cCast_iPxAaMH7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RpHoV4XX, 0, m, &cVar_RpHoV4XX_sendMessage);
}

void Heavy_Echomatica::cCast_pbGXADYf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_N2m52hDl, 0, m, &cVar_N2m52hDl_sendMessage);
}

void Heavy_Echomatica::cCast_V8HZQhdj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZTneeeeX, HV_BINOP_SUBTRACT, 1, m, &cBinop_ZTneeeeX_sendMessage);
}

void Heavy_Echomatica::cBinop_NS3MN8Nv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_I9u3F7o9_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_w77GT5bp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BG5pvVNh, HV_BINOP_ADD, 1, m, &cBinop_BG5pvVNh_sendMessage);
}

void Heavy_Echomatica::cCast_X0K5mvog_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_O0A4BI8w, HV_BINOP_SUBTRACT, 1, m, &cBinop_O0A4BI8w_sendMessage);
}

void Heavy_Echomatica::cBinop_7VQx4uKX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_V8HZQhdj_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_pbGXADYf_sendMessage);
}

void Heavy_Echomatica::cMsg_I9u3F7o9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_aO7GhjbO, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_s4D5oE9F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_mTo6LMTr_sendMessage);
}

void Heavy_Echomatica::cBinop_mTo6LMTr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Cg6caddn_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_aq6FkAWI_sendMessage);
}

void Heavy_Echomatica::cVar_d1Wsc0u7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_fVUVsi6t_sendMessage);
}

void Heavy_Echomatica::cMsg_9TsCwSVN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_sh3JAFPi_sendMessage);
}

void Heavy_Echomatica::cSystem_sh3JAFPi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_z9c14g8l, HV_BINOP_DIVIDE, 1, m, &cBinop_z9c14g8l_sendMessage);
}

void Heavy_Echomatica::cBinop_Cg6caddn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_Nj3DEeOE_sendMessage);
}

void Heavy_Echomatica::cBinop_Nj3DEeOE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_lmPLqVmc, m);
}

void Heavy_Echomatica::cMsg_yd49ME1t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_p1oDRX4I_sendMessage);
}

void Heavy_Echomatica::cBinop_p1oDRX4I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_s4D5oE9F_sendMessage);
}

void Heavy_Echomatica::cBinop_aq6FkAWI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_3BcyYUL3, m);
}

void Heavy_Echomatica::cBinop_fVUVsi6t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_BLM3LTc2_sendMessage);
}

void Heavy_Echomatica::cBinop_BLM3LTc2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_z9c14g8l, HV_BINOP_DIVIDE, 0, m, &cBinop_z9c14g8l_sendMessage);
}

void Heavy_Echomatica::cBinop_z9c14g8l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_yd49ME1t_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_3TZO1WuW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XDXF1hYr, HV_BINOP_DIVIDE, 0, m, &cBinop_XDXF1hYr_sendMessage);
}

void Heavy_Echomatica::cVar_oYgzjGJv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MP7w9biS, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_MP7w9biS_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_l9pKcgzJ, 0, m, &cIf_l9pKcgzJ_sendMessage);
}

void Heavy_Echomatica::sEnv_YeoVMRp3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_8NHvFs1h_sendMessage);
}

void Heavy_Echomatica::cBinop_jly103yr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_SanhpShF_sendMessage);
}

void Heavy_Echomatica::cBinop_SanhpShF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3qJ8ulKc_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_owdcNwKJ_sendMessage);
}

void Heavy_Echomatica::cCast_owdcNwKJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wUH3ZeDN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_3qJ8ulKc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VGDf6UJ1, HV_BINOP_POW, 1, m, &cBinop_VGDf6UJ1_sendMessage);
}

void Heavy_Echomatica::cMsg_wUH3ZeDN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_VGDf6UJ1, HV_BINOP_POW, 0, m, &cBinop_VGDf6UJ1_sendMessage);
}

void Heavy_Echomatica::cBinop_VGDf6UJ1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_2eIf7ZAf_sendMessage);
}

void Heavy_Echomatica::cIf_l9pKcgzJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_jly103yr, HV_BINOP_SUBTRACT, 0, m, &cBinop_jly103yr_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_LzhcDBAf, HV_BINOP_SUBTRACT, 0, m, &cBinop_LzhcDBAf_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_MP7w9biS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_l9pKcgzJ, 1, m, &cIf_l9pKcgzJ_sendMessage);
}

void Heavy_Echomatica::cVar_aAOjObnU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_L7pu6MyG_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_t6rJ7Tpr_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AAJhstdB_sendMessage);
}

void Heavy_Echomatica::cVar_zNhRl7D7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_40cxh9JE_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZhxvTpgc_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_qLKT3ofA_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_yGHWyIZr, 0, m, &cSlice_yGHWyIZr_sendMessage);
      break;
    }
    default: {
      cSwitchcase_XdI3ZULt_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_yGHWyIZr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_INsOFrn1_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_INsOFrn1_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_FFrtG9kt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_INsOFrn1_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_INsOFrn1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_KV7rj9T0_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_XdI3ZULt_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_rVUw4K6p, 0, m, &cSlice_rVUw4K6p_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_rVUw4K6p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_8WW8YLqu_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_8WW8YLqu_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_UGLG1kUF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_8WW8YLqu_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_8WW8YLqu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_wU4tyMpu_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_ZhxvTpgc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3TZO1WuW, 0, m, &cVar_3TZO1WuW_sendMessage);
}

void Heavy_Echomatica::cCast_40cxh9JE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XDXF1hYr, HV_BINOP_DIVIDE, 1, m, &cBinop_XDXF1hYr_sendMessage);
}

void Heavy_Echomatica::cBinop_XDXF1hYr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LTEVSbax, HV_BINOP_ADD, 0, m, &cBinop_LTEVSbax_sendMessage);
}

void Heavy_Echomatica::cBinop_LzhcDBAf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3TZO1WuW, 0, m, &cVar_3TZO1WuW_sendMessage);
}

void Heavy_Echomatica::cCast_AAJhstdB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_oYgzjGJv, 0, m, &cVar_oYgzjGJv_sendMessage);
}

void Heavy_Echomatica::cCast_t6rJ7Tpr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MP7w9biS, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_MP7w9biS_sendMessage);
}

void Heavy_Echomatica::cCast_L7pu6MyG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_H9qQkdez_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_O8tqnM1W_sendMessage);
}

void Heavy_Echomatica::cBinop_LTEVSbax_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jly103yr, HV_BINOP_SUBTRACT, 0, m, &cBinop_jly103yr_sendMessage);
}

void Heavy_Echomatica::cCast_m9FXCg7S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_zNhRl7D7, 0, m, &cVar_zNhRl7D7_sendMessage);
}

void Heavy_Echomatica::cCast_e8l2Kxye_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_aAOjObnU, 0, m, &cVar_aAOjObnU_sendMessage);
}

void Heavy_Echomatica::cCast_qGe0aUzX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_oYgzjGJv, 0, m, &cVar_oYgzjGJv_sendMessage);
}

void Heavy_Echomatica::cCast_IVEGEhK3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jly103yr, HV_BINOP_SUBTRACT, 1, m, &cBinop_jly103yr_sendMessage);
}

void Heavy_Echomatica::cBinop_2eIf7ZAf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WYuNgKmz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_H9qQkdez_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LTEVSbax, HV_BINOP_ADD, 1, m, &cBinop_LTEVSbax_sendMessage);
}

void Heavy_Echomatica::cCast_O8tqnM1W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LzhcDBAf, HV_BINOP_SUBTRACT, 1, m, &cBinop_LzhcDBAf_sendMessage);
}

void Heavy_Echomatica::cBinop_8NHvFs1h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_IVEGEhK3_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qGe0aUzX_sendMessage);
}

void Heavy_Echomatica::cMsg_WYuNgKmz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_J6S20KpL, 0, m, NULL);
}

void Heavy_Echomatica::cVar_E42rxHSR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9FJJYqUp, HV_BINOP_MULTIPLY, 0, m, &cBinop_9FJJYqUp_sendMessage);
}

void Heavy_Echomatica::cMsg_h1OoIJAS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_45LLVp9z_sendMessage);
}

void Heavy_Echomatica::cSystem_45LLVp9z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uer4IH4r_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_9FJJYqUp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_02nuimdq_sendMessage);
}

void Heavy_Echomatica::cBinop_haDy3Y6K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9FJJYqUp, HV_BINOP_MULTIPLY, 1, m, &cBinop_9FJJYqUp_sendMessage);
}

void Heavy_Echomatica::cMsg_uer4IH4r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_haDy3Y6K_sendMessage);
}

void Heavy_Echomatica::cBinop_02nuimdq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_f2b8QiFZ_sendMessage);
}

void Heavy_Echomatica::cBinop_f2b8QiFZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_MqoF4seW_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_tuFir7xh, m);
}

void Heavy_Echomatica::cBinop_MqoF4seW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_vBfrnGzy, m);
}

void Heavy_Echomatica::cVar_CFvvTcSr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NfJH4wet, HV_BINOP_MULTIPLY, 0, m, &cBinop_NfJH4wet_sendMessage);
}

void Heavy_Echomatica::cMsg_EyLOp6Cl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_olEL9QI6_sendMessage);
}

void Heavy_Echomatica::cSystem_olEL9QI6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_lymD43LG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_NfJH4wet_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_fy4PK7lG_sendMessage);
}

void Heavy_Echomatica::cBinop_wbnaC797_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NfJH4wet, HV_BINOP_MULTIPLY, 1, m, &cBinop_NfJH4wet_sendMessage);
}

void Heavy_Echomatica::cMsg_lymD43LG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_wbnaC797_sendMessage);
}

void Heavy_Echomatica::cBinop_fy4PK7lG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_HxlkfOVu_sendMessage);
}

void Heavy_Echomatica::cBinop_HxlkfOVu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_QpTTF2HH_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_iSqXoqWW, m);
}

void Heavy_Echomatica::cBinop_QpTTF2HH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_uTlvad6S, m);
}

void Heavy_Echomatica::cBinop_pd8WLtb7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_6t3g2QxM_sendMessage);
}

void Heavy_Echomatica::cBinop_6t3g2QxM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_1DJWh4Es_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_AFw1QRRQ_sendMessage);
}

void Heavy_Echomatica::cVar_tZwyXwlA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_PtBuHuhP_sendMessage);
}

void Heavy_Echomatica::cMsg_tWpJdh6a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_4KlYSjly_sendMessage);
}

void Heavy_Echomatica::cSystem_4KlYSjly_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DcLC5Neo, HV_BINOP_DIVIDE, 1, m, &cBinop_DcLC5Neo_sendMessage);
}

void Heavy_Echomatica::cBinop_1DJWh4Es_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_Fzc8Ff81_sendMessage);
}

void Heavy_Echomatica::cBinop_Fzc8Ff81_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_fCSkq5XW, m);
}

void Heavy_Echomatica::cMsg_kcotGoy9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_MpH7l02u_sendMessage);
}

void Heavy_Echomatica::cBinop_MpH7l02u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_pd8WLtb7_sendMessage);
}

void Heavy_Echomatica::cBinop_AFw1QRRQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_8r3XynoW, m);
}

void Heavy_Echomatica::cBinop_PtBuHuhP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_nsfgFNZw_sendMessage);
}

void Heavy_Echomatica::cBinop_nsfgFNZw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DcLC5Neo, HV_BINOP_DIVIDE, 0, m, &cBinop_DcLC5Neo_sendMessage);
}

void Heavy_Echomatica::cBinop_DcLC5Neo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_kcotGoy9_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_buLj29Km_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_nawGPUbJ_sendMessage);
}

void Heavy_Echomatica::cBinop_nawGPUbJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_HYreuxin_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_nfZ3OJLS_sendMessage);
}

void Heavy_Echomatica::cVar_0ZDlG8DM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_0KVcVdB3_sendMessage);
}

void Heavy_Echomatica::cMsg_YG4OadiX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_2KnP9bH6_sendMessage);
}

void Heavy_Echomatica::cSystem_2KnP9bH6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zB4VsY7L, HV_BINOP_DIVIDE, 1, m, &cBinop_zB4VsY7L_sendMessage);
}

void Heavy_Echomatica::cBinop_HYreuxin_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_OmRNsQIo_sendMessage);
}

void Heavy_Echomatica::cBinop_OmRNsQIo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_bx5FKLIM, m);
}

void Heavy_Echomatica::cMsg_2fkwORzl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_o5wSKQNj_sendMessage);
}

void Heavy_Echomatica::cBinop_o5wSKQNj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_buLj29Km_sendMessage);
}

void Heavy_Echomatica::cBinop_nfZ3OJLS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_KV3WzBJu, m);
}

void Heavy_Echomatica::cBinop_0KVcVdB3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_cacp3URj_sendMessage);
}

void Heavy_Echomatica::cBinop_cacp3URj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zB4VsY7L, HV_BINOP_DIVIDE, 0, m, &cBinop_zB4VsY7L_sendMessage);
}

void Heavy_Echomatica::cBinop_zB4VsY7L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2fkwORzl_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_HhayGmRl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Xf4GG0m9_sendMessage);
}

void Heavy_Echomatica::cSystem_Xf4GG0m9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Lbyv46Pg_sendMessage);
}

void Heavy_Echomatica::cDelay_yx6h2w4O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_yx6h2w4O, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_IFo6JfLZ, 0, m, &cDelay_IFo6JfLZ_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_yx6h2w4O, 0, m, &cDelay_yx6h2w4O_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_ZzyrRusB, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_IFo6JfLZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_IFo6JfLZ, m);
  cMsg_TFboQigr_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_DY2e0ViD_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_bNgm62e0_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_jNr5zPv8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1o1qyfuu_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_xAIboSsG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8OV8rGhD_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_yx6h2w4O, 2, m, &cDelay_yx6h2w4O_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Hnp4obpN_sendMessage);
}

void Heavy_Echomatica::cMsg_1o1qyfuu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_xAIboSsG, 0, m, &hTable_xAIboSsG_sendMessage);
}

void Heavy_Echomatica::cBinop_Lbyv46Pg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_jNr5zPv8_sendMessage);
}

void Heavy_Echomatica::cMsg_TFboQigr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_xAIboSsG, 0, m, &hTable_xAIboSsG_sendMessage);
}

void Heavy_Echomatica::cCast_Hnp4obpN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_yx6h2w4O, 0, m, &cDelay_yx6h2w4O_sendMessage);
}

void Heavy_Echomatica::cMsg_8OV8rGhD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_IFo6JfLZ, 2, m, &cDelay_IFo6JfLZ_sendMessage);
}

void Heavy_Echomatica::cMsg_bNgm62e0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_ZzyrRusB, 1, m, NULL);
}

void Heavy_Echomatica::cVar_byfkUJUn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_L85uugga, HV_BINOP_MULTIPLY, 0, m, &cBinop_L85uugga_sendMessage);
}

void Heavy_Echomatica::cMsg_LKCG1z0l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_3CAFa4Kp_sendMessage);
}

void Heavy_Echomatica::cSystem_3CAFa4Kp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_n2IbhPfS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_L85uugga_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_heKrIEdd_sendMessage);
}

void Heavy_Echomatica::cBinop_3FJQDfYn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_L85uugga, HV_BINOP_MULTIPLY, 1, m, &cBinop_L85uugga_sendMessage);
}

void Heavy_Echomatica::cMsg_n2IbhPfS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_3FJQDfYn_sendMessage);
}

void Heavy_Echomatica::cBinop_heKrIEdd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_Gt79h7cp_sendMessage);
}

void Heavy_Echomatica::cBinop_Gt79h7cp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_QajRNhSG_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_wUO3oqXT, m);
}

void Heavy_Echomatica::cBinop_QajRNhSG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_pYnaoByU, m);
}

void Heavy_Echomatica::cExpr_dYRS7YXf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_dzy3qvh5, 0, m, &cPack_dzy3qvh5_sendMessage);
}

float Heavy_Echomatica::cExpr_dYRS7YXf_evaluate(const float* args) {
  	return (hv_exp_f(1.5*((float)(args[0])))-1)/(hv_exp_f(1.5)-1);
}

void Heavy_Echomatica::cSend_1OL3XjDT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_EsBc5gxL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_A06n2KEC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_7fXj9dvW_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_2CiohWuy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_zBhjT8gY_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_9h5UPq41_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_4NWrEjoa_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_WuXDW50q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_r5vH41YS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_hfptsIEK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_DJtnTipX_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_1mDcGZwy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_UxNERn1f_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_BFiKEVuy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_d7jlxzcy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_goUdBnZU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_NXUyFmjc_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_9f08l3ud_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_xU3TH7Cg_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_u0OMsjXi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_uUcWWh3g_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_dKj17sqX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_UxNlmzfm_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_60IsHShn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_WCYSJYin_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_09IRKtaU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_cKlyzcrL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_JgxWdFmc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_PjfT4dzH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_tVl4LKfH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jZFsPgPF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_56CX3QAl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IEW5bEO3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_S1h4yKJ2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_RBYGWZOh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_dniV6dCS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_cCR3vI9o_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_e0VFYB7R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_SkfPsJUG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_nhCarvUJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_SfcAqp5g_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_vaU540C4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_HL94eK92_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_cH3dFx8L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_OmObTS49_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_75EUk6Gp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_B9G5YPQI_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_DroPS32G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jsVptHVo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_NF33IP6V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_akKCWh1n_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_MPb9ZvC3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_whmr66Rx_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_Sm7eGN6l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_tGBdCS2Z_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_tWBvLb5O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.01f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_fgxi0wWh, 0, m, &cSlice_fgxi0wWh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_71lZOi23, 0, m, &cSlice_71lZOi23_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zgOZP12x, 0, m, &cSlice_zgOZP12x_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YFTifp6L, 0, m, &cSlice_YFTifp6L_sendMessage);
}

void Heavy_Echomatica::cCast_wXvvGA4u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tWBvLb5O_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_H6RKCnm1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KwkmzuKW_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_KwkmzuKW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.2f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_fgxi0wWh, 0, m, &cSlice_fgxi0wWh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_71lZOi23, 0, m, &cSlice_71lZOi23_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zgOZP12x, 0, m, &cSlice_zgOZP12x_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YFTifp6L, 0, m, &cSlice_YFTifp6L_sendMessage);
}

void Heavy_Echomatica::cMsg_OEZUz3Wt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_zGC10UMZ, HV_BINOP_MULTIPLY, 1, m, &cBinop_zGC10UMZ_sendMessage);
}

void Heavy_Echomatica::cBinop_zGC10UMZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_niNyW20b_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_nyF90UBR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_N5SDlrZY, 0, m, &cVar_N5SDlrZY_sendMessage);
}

void Heavy_Echomatica::cMsg_uS3VIh1r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_hAVcR5Ov, 1, m, &cIf_hAVcR5Ov_sendMessage);
}

void Heavy_Echomatica::cMsg_G5BhYevu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_hAVcR5Ov, 1, m, &cIf_hAVcR5Ov_sendMessage);
}

void Heavy_Echomatica::cSend_niNyW20b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_nPSfcbeR_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_aGM1RwCJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_fToybE6K, 0, m, &cPack_fToybE6K_sendMessage);
}

void Heavy_Echomatica::cBinop_rpK4ksIM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_lUuc3HKl, 0, m, &cPack_lUuc3HKl_sendMessage);
}

void Heavy_Echomatica::cBinop_07udjAsk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_KiuIQBKI, 0, m, &cPack_KiuIQBKI_sendMessage);
}

void Heavy_Echomatica::cBinop_9wzAEek8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_EIjuTPfH, 0, m, &cPack_EIjuTPfH_sendMessage);
}

void Heavy_Echomatica::cBinop_fS8lwFgN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Q4wmx781, 0, m, &cPack_Q4wmx781_sendMessage);
}

void Heavy_Echomatica::cBinop_1Ywqfou5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_lfdZot6z, 0, m, &cPack_lfdZot6z_sendMessage);
}

void Heavy_Echomatica::cCast_opzZQdpz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aGM1RwCJ, HV_BINOP_MULTIPLY, 1, m, &cBinop_aGM1RwCJ_sendMessage);
}

void Heavy_Echomatica::cCast_QMfWgE9y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WHQZVKib, 0, m, &cVar_WHQZVKib_sendMessage);
}

void Heavy_Echomatica::cCast_2pMjWYN3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1Ywqfou5, HV_BINOP_MULTIPLY, 1, m, &cBinop_1Ywqfou5_sendMessage);
}

void Heavy_Echomatica::cCast_9CApyWvD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_A1aZDaBU, 0, m, &cVar_A1aZDaBU_sendMessage);
}

void Heavy_Echomatica::cCast_qsqFBc3R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fS8lwFgN, HV_BINOP_MULTIPLY, 1, m, &cBinop_fS8lwFgN_sendMessage);
}

void Heavy_Echomatica::cCast_OfW6oRX0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Me41wxwQ, 0, m, &cVar_Me41wxwQ_sendMessage);
}

void Heavy_Echomatica::cCast_BPmwDyV0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Ns6GDlMI, 0, m, &cVar_Ns6GDlMI_sendMessage);
}

void Heavy_Echomatica::cCast_ECekrClf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9wzAEek8, HV_BINOP_MULTIPLY, 1, m, &cBinop_9wzAEek8_sendMessage);
}

void Heavy_Echomatica::cCast_YbRWiQWX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_07udjAsk, HV_BINOP_MULTIPLY, 1, m, &cBinop_07udjAsk_sendMessage);
}

void Heavy_Echomatica::cCast_XmjcURyS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Sq08Ndlz, 0, m, &cVar_Sq08Ndlz_sendMessage);
}

void Heavy_Echomatica::cCast_SSblLuSb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rpK4ksIM, HV_BINOP_MULTIPLY, 1, m, &cBinop_rpK4ksIM_sendMessage);
}

void Heavy_Echomatica::cCast_LG3RmuDr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_830y943j, 0, m, &cVar_830y943j_sendMessage);
}

void Heavy_Echomatica::cBinop_CrDBezAU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uCuAwrmr_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_cp7V6K6M_sendMessage);
}

void Heavy_Echomatica::cMsg_7Qyb6hMt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.5f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CrDBezAU, HV_BINOP_MULTIPLY, 1, m, &cBinop_CrDBezAU_sendMessage);
}

void Heavy_Echomatica::cCast_9DeBlFNd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CrDBezAU, HV_BINOP_MULTIPLY, 0, m, &cBinop_CrDBezAU_sendMessage);
}

void Heavy_Echomatica::cCast_CL6HJA2u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7Qyb6hMt_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_7L16AIHu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_mCRV92Lr, HV_BINOP_ADD, 1, m, &cBinop_mCRV92Lr_sendMessage);
}

void Heavy_Echomatica::cBinop_mCRV92Lr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mE865qZl, 0, m, &cVar_mE865qZl_sendMessage);
}

void Heavy_Echomatica::cCast_uCuAwrmr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7L16AIHu_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_cp7V6K6M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mCRV92Lr, HV_BINOP_ADD, 0, m, &cBinop_mCRV92Lr_sendMessage);
}

void Heavy_Echomatica::cCast_HZKxC3pI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nyF90UBR_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_QRqG6Klt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OEZUz3Wt_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_KCyQzvSP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_G5BhYevu_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_Lvs58uNs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uS3VIh1r_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_SpsoZ6A0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OEZUz3Wt_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_BKTFULWN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mE865qZl, 0, m, &cVar_mE865qZl_sendMessage);
}

void Heavy_Echomatica::cCast_qVSEaPDW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zGC10UMZ, HV_BINOP_MULTIPLY, 0, m, &cBinop_zGC10UMZ_sendMessage);
}

void Heavy_Echomatica::cReceive_GBdRUAPs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_izEsITlU, 0, m, &cVar_izEsITlU_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_dCjsO9Gf, 0, m, &cVar_dCjsO9Gf_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_IyZTLGXp, 0, m, &cVar_IyZTLGXp_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_GjZQT7z0, 0, m, &cVar_GjZQT7z0_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_FFrtG9kt, 0, m, &cVar_FFrtG9kt_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_UGLG1kUF, 0, m, &cVar_UGLG1kUF_sendMessage);
  cMsg_In9j7433_sendMessage(_c, 0, m);
  cMsg_A5XvuhF4_sendMessage(_c, 0, m);
  cMsg_YDQHsUuq_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_7Wi3TOyJ, 0, m, &cVar_7Wi3TOyJ_sendMessage);
  cMsg_GMtly4YW_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_8qbHJ3iQ, 0, m, &cVar_8qbHJ3iQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_93q1yowA_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_o0TkQRym_sendMessage);
  cMsg_RCwRxXOo_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_GlkqmJam, 0, m, &cVar_GlkqmJam_sendMessage);
  cMsg_rduYJkt4_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_X2KKjskD, 0, m, &cVar_X2KKjskD_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iPxAaMH7_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KEb8KL6X_sendMessage);
  cMsg_9TsCwSVN_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_d1Wsc0u7, 0, m, &cVar_d1Wsc0u7_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_m9FXCg7S_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_e8l2Kxye_sendMessage);
  cMsg_h1OoIJAS_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_E42rxHSR, 0, m, &cVar_E42rxHSR_sendMessage);
  cMsg_EyLOp6Cl_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_CFvvTcSr, 0, m, &cVar_CFvvTcSr_sendMessage);
  cMsg_G8gyNeVa_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_imJIOhlw, 0, m, &cVar_imJIOhlw_sendMessage);
  cMsg_TJFFmrIg_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_OCpcpZCg, 0, m, &cVar_OCpcpZCg_sendMessage);
  cMsg_y9SPUFeh_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_v0VlXVNG, 0, m, &cVar_v0VlXVNG_sendMessage);
  cMsg_XRRLKqvv_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_K1wLVPYq, 0, m, &cVar_K1wLVPYq_sendMessage);
  cMsg_Nw5D19dJ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_kSYxaQez, 0, m, &cVar_kSYxaQez_sendMessage);
  cMsg_G93ONhWm_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_IHQaTqtZ, 0, m, &cVar_IHQaTqtZ_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_H57kW1if, 0, m, &cVar_H57kW1if_sendMessage);
  cMsg_W0574mnP_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_WTcp6FCO, 0, m, &cVar_WTcp6FCO_sendMessage);
  cMsg_CVUnWrb4_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_kbuSYQBZ, 0, m, &cVar_kbuSYQBZ_sendMessage);
  cMsg_eEgNOtwG_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_wUtorRt4, 0, m, &cVar_wUtorRt4_sendMessage);
  cMsg_kfEfQUQW_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_t8GzuYC0, 0, m, &cVar_t8GzuYC0_sendMessage);
  cMsg_yOAXZ97G_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_anlQUJn6, 0, m, &cVar_anlQUJn6_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_9VPf3buc, 0, m, &cVar_9VPf3buc_sendMessage);
  cMsg_tWpJdh6a_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_tZwyXwlA, 0, m, &cVar_tZwyXwlA_sendMessage);
  cMsg_YG4OadiX_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_0ZDlG8DM, 0, m, &cVar_0ZDlG8DM_sendMessage);
  cMsg_HhayGmRl_sendMessage(_c, 0, m);
  cMsg_LKCG1z0l_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_byfkUJUn, 0, m, &cVar_byfkUJUn_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ICEIkWX2, 0, m, &cVar_ICEIkWX2_sendMessage);
  cMsg_dgWCfub7_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_87eUD1dE, 0, m, &cVar_87eUD1dE_sendMessage);
  cMsg_5ls6mp5j_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_03Sel2dy, 0, m, &cVar_03Sel2dy_sendMessage);
  cMsg_anI56K77_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_0eQJ2Eba, 0, m, &cVar_0eQJ2Eba_sendMessage);
  cMsg_lHSZePx3_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_3rTZuEGk, 0, m, &cVar_3rTZuEGk_sendMessage);
  cMsg_vSVAl6Jj_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_XE22JYdh, 0, m, &cVar_XE22JYdh_sendMessage);
  cMsg_pqwkPI0Z_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_NTGAE1ul, 0, m, &cVar_NTGAE1ul_sendMessage);
  cMsg_zvIgp1yJ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_7TneJBqy, 0, m, &cVar_7TneJBqy_sendMessage);
  cMsg_Yd8VSQPS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cReceive_tOIuiyj8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ScvDfzsE_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_EsBc5gxL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_830y943j, 0, m, &cVar_830y943j_sendMessage);
}

void Heavy_Echomatica::cReceive_7fXj9dvW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Sq08Ndlz, 0, m, &cVar_Sq08Ndlz_sendMessage);
}

void Heavy_Echomatica::cReceive_zBhjT8gY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Ns6GDlMI, 0, m, &cVar_Ns6GDlMI_sendMessage);
}

void Heavy_Echomatica::cReceive_4NWrEjoa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Me41wxwQ, 0, m, &cVar_Me41wxwQ_sendMessage);
}

void Heavy_Echomatica::cReceive_r5vH41YS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_A1aZDaBU, 0, m, &cVar_A1aZDaBU_sendMessage);
}

void Heavy_Echomatica::cReceive_DJtnTipX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WHQZVKib, 0, m, &cVar_WHQZVKib_sendMessage);
}

void Heavy_Echomatica::cReceive_UxNERn1f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_PFpoo91Q, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_2rg4AHXU, 0, m, &cVar_2rg4AHXU_sendMessage);
}

void Heavy_Echomatica::cReceive_d7jlxzcy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_UkF0fL5p, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_WZz6JSRw, 0, m, &cVar_WZz6JSRw_sendMessage);
}

void Heavy_Echomatica::cReceive_NXUyFmjc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_SW4nxmrF, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_6QZSaZVd, 0, m, &cVar_6QZSaZVd_sendMessage);
}

void Heavy_Echomatica::cReceive_xU3TH7Cg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_G4CMZ2yJ, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_NVEwxJ3N, 0, m, &cVar_NVEwxJ3N_sendMessage);
}

void Heavy_Echomatica::cReceive_uUcWWh3g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_s2vheiAf, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_eDOXfwe9, 0, m, &cVar_eDOXfwe9_sendMessage);
}

void Heavy_Echomatica::cReceive_UxNlmzfm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_uh132vGA, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_3vYPeGrB, 0, m, &cVar_3vYPeGrB_sendMessage);
}

void Heavy_Echomatica::cReceive_WCYSJYin_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_S5EWtDvf, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_bNMBtHAu, 0, m, &cVar_bNMBtHAu_sendMessage);
}

void Heavy_Echomatica::cReceive_cKlyzcrL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_E8WM2yWh, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_j7zEJ7Cm, 0, m, &cVar_j7zEJ7Cm_sendMessage);
}

void Heavy_Echomatica::cReceive_PjfT4dzH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_43oXhuws, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_MI2dnPuW, 0, m, &cVar_MI2dnPuW_sendMessage);
}

void Heavy_Echomatica::cReceive_jZFsPgPF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_ORTf9BR0, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_5r6UZHno, 0, m, &cVar_5r6UZHno_sendMessage);
}

void Heavy_Echomatica::cReceive_IEW5bEO3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_UEBquUK8, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_TIXRCnBY, 0, m, &cVar_TIXRCnBY_sendMessage);
}

void Heavy_Echomatica::cReceive_RBYGWZOh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_rUWQL3wU, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_hj7KXjih, 0, m, &cVar_hj7KXjih_sendMessage);
}

void Heavy_Echomatica::cReceive_nPSfcbeR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SSblLuSb_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LG3RmuDr_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YbRWiQWX_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XmjcURyS_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ECekrClf_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BPmwDyV0_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qsqFBc3R_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OfW6oRX0_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2pMjWYN3_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9CApyWvD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_opzZQdpz_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QMfWgE9y_sendMessage);
}

void Heavy_Echomatica::cReceive_cCR3vI9o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_4UKQDJi5_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_SkfPsJUG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_imJIOhlw, 0, m, &cVar_imJIOhlw_sendMessage);
}

void Heavy_Echomatica::cReceive_SfcAqp5g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OCpcpZCg, 0, m, &cVar_OCpcpZCg_sendMessage);
}

void Heavy_Echomatica::cReceive_HL94eK92_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_v0VlXVNG, 0, m, &cVar_v0VlXVNG_sendMessage);
}

void Heavy_Echomatica::cReceive_OmObTS49_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_K1wLVPYq, 0, m, &cVar_K1wLVPYq_sendMessage);
}

void Heavy_Echomatica::cReceive_B9G5YPQI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_kSYxaQez, 0, m, &cVar_kSYxaQez_sendMessage);
}

void Heavy_Echomatica::cReceive_jsVptHVo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_IHQaTqtZ, 0, m, &cVar_IHQaTqtZ_sendMessage);
}

void Heavy_Echomatica::cReceive_akKCWh1n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_oWoxGfJc, m);
}

void Heavy_Echomatica::cReceive_whmr66Rx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WTcp6FCO, 0, m, &cVar_WTcp6FCO_sendMessage);
}

void Heavy_Echomatica::cReceive_tGBdCS2Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_H57kW1if, 0, m, &cVar_H57kW1if_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dkzgUa8U_sendMessage);
}

void Heavy_Echomatica::cReceive_Kt4fU8KO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_w4hSaAQW, 0, m, &cVar_w4hSaAQW_sendMessage);
}

void Heavy_Echomatica::cReceive_uoFtvJoB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_bQ1vjpRV_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_ACS1HAkI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dgyCpYBG_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hpfdlHZC_sendMessage);
}

void Heavy_Echomatica::cReceive_uVlrzoL6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_F9q8gKWW_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Kb9XAlV8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7XnTEmgu_sendMessage);
}

void Heavy_Echomatica::cReceive_AG6NjNJB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_kko2CkAq, 0, m, &cPack_kko2CkAq_sendMessage);
}

void Heavy_Echomatica::cReceive_HtaeA97y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_C141WdlT, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_pg6cwUCf, m);
}

void Heavy_Echomatica::cReceive_Kvx7UJKI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cExpr_onMessage(_c, &Context(_c)->cExpr_dYRS7YXf, 0, m, &cExpr_dYRS7YXf_sendMessage);
}

void Heavy_Echomatica::cReceive_ZvPgP8tU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_qpjQXctj_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_aSzUaivC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_p8zJQn7h, 0, m, &cPack_p8zJQn7h_sendMessage);
}

void Heavy_Echomatica::cReceive_CtmFsuf7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Q2QKE5I8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Uqmo70bX_sendMessage);
}

void Heavy_Echomatica::cReceive_5F9ojLJJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qLDK1OuL_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_S8WPHaW6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BDVk4Djv_sendMessage);
}

void Heavy_Echomatica::cReceive_KV7rj9T0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_40cxh9JE_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZhxvTpgc_sendMessage);
}

void Heavy_Echomatica::cReceive_wU4tyMpu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_L7pu6MyG_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_t6rJ7Tpr_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AAJhstdB_sendMessage);
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
    __hv_varread_f(&sVarf_DNESb3tW, VOf(Bf0));
    __hv_biquad_k_f(&sBiquad_k_loiYuMC5, VIf(Bf0), VOf(Bf1));
    __hv_varread_f(&sVarf_oWoxGfJc, VOf(Bf2));
    __hv_varread_f(&sVarf_kbZBg2PD, VOf(Bf3));
    __hv_rpole_f(&sRPole_TAhAoBEO, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_QFFrIY5A, VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_9G9jYNhh, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_Zo0H5CY9, VOf(Bf0));
    __hv_rpole_f(&sRPole_FhSSL59C, VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_xAFjEt97, VIf(Bf0), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_8YyUBXMy, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_xIrBFsCk, VOf(Bf3));
    __hv_rpole_f(&sRPole_3pRDtR7k, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_o6aUKRUF, VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_V2PCvtQO, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_qaPNQ9bk, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_VYW3Em0i, VOf(Bf3));
    __hv_rpole_f(&sRPole_G8FN3xMq, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_72T4Bva3, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_kHUo7dV7, VOf(Bf3));
    __hv_rpole_f(&sRPole_mttVwrvs, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_ZyqTtYEc, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_tS7Vc0Ml, VOf(Bf3));
    __hv_rpole_f(&sRPole_hsO7v7je, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf1), VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_uP9HreJR, VOf(Bf2));
    __hv_varread_f(&sVarf_bDvOF5vz, VOf(Bf1));
    __hv_varread_f(&sVarf_hxUtV35x, VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_l6W4L333, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_R254PJom, VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_s5Ypbz3X, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_V7P67Y9n, VOf(Bf2));
    __hv_rpole_f(&sRPole_rPqgVnFQ, VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_p8FhwCTe, VIf(Bf2), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_FskPHzZy, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_eKMgMi2L, VOf(Bf1));
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_J435cWQB, VOf(Bf2));
    __hv_rpole_f(&sRPole_Xb6nxgqW, VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f);
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_48LL9Pyg, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_UTR0isYR, VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    sEnv_process(this, &sEnv_f8pa2QUs, VIf(Bf0), &sEnv_f8pa2QUs_sendMessage);
    __hv_line_f(&sLine_xAZFSuM9, VOf(Bf4));
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
    __hv_line_f(&sLine_PMAVwrw6, VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf2), VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_wUO3oqXT, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_pYnaoByU, VOf(Bf5));
    __hv_rpole_f(&sRPole_x4qqXrrT, VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_tabwrite_f(&sTabwrite_ZzyrRusB, VIf(Bf5));
    __hv_phasor_k_f(&sPhasor_G68Y2eGK, VOf(Bf5));
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
    __hv_varread_f(&sVarf_uXhDoc1Y, VOf(Bf2));
    __hv_phasor_k_f(&sPhasor_phlLOT9o, VOf(Bf5));
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
    __hv_varread_f(&sVarf_s1ZtzYHx, VOf(Bf6));
    __hv_mul_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf3), VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_UmKoO7Jv, VIf(Bf6));
    __hv_line_f(&sLine_a6R5qaC1, VOf(Bf6));
    __hv_varread_f(&sVarf_UmKoO7Jv, VOf(Bf2));
    __hv_add_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_tabhead_f(&sTabhead_iFNNLFyq, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_jImF47JW, VOf(Bf6));
    __hv_mul_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_nUOha5SQ, VOf(Bf2));
    __hv_min_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_XBnCYtod, VOf(Bf2));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_B0PBKyJR, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_t2qvPJtJ, VIi(Bi0), VOf(Bf2));
    __hv_sub_f(VIf(Bf4), VIf(Bf2), VOf(Bf4));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf4), VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_S5EWtDvf, VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_uP9HreJR, VIf(Bf3));
    __hv_line_f(&sLine_nvlPOmz4, VOf(Bf3));
    __hv_varread_f(&sVarf_UmKoO7Jv, VOf(Bf4));
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_tabhead_f(&sTabhead_uJ2aDBpY, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_0SmtHE6X, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_Sn330rfX, VOf(Bf4));
    __hv_min_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_zNpuydZa, VOf(Bf4));
    __hv_zero_f(VOf(Bf5));
    __hv_lt_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_cast_fi(VIf(Bf5), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_CtbeBsIz, VIi(Bi1), VOf(Bf5));
    __hv_tabread_if(&sTabread_ULzo2alf, VIi(Bi0), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf5));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf5), VIf(Bf6), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_43oXhuws, VOf(Bf6));
    __hv_mul_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_bDvOF5vz, VIf(Bf6));
    __hv_line_f(&sLine_TLWHQUMV, VOf(Bf6));
    __hv_varread_f(&sVarf_UmKoO7Jv, VOf(Bf5));
    __hv_add_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_tabhead_f(&sTabhead_KqymbQ1P, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_AVgaGzMK, VOf(Bf6));
    __hv_mul_f(VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_3577cba7, VOf(Bf5));
    __hv_min_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_84VU6pzE, VOf(Bf5));
    __hv_zero_f(VOf(Bf7));
    __hv_lt_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_and_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_cast_fi(VIf(Bf7), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_TntfKige, VIi(Bi1), VOf(Bf7));
    __hv_tabread_if(&sTabread_ogQloOXh, VIi(Bi0), VOf(Bf5));
    __hv_sub_f(VIf(Bf7), VIf(Bf5), VOf(Bf7));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf7), VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_UEBquUK8, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_hxUtV35x, VIf(Bf3));
    __hv_line_f(&sLine_0asGCWae, VOf(Bf3));
    __hv_varread_f(&sVarf_UmKoO7Jv, VOf(Bf7));
    __hv_add_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_tabhead_f(&sTabhead_8J3A04s4, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_ntjztINf, VOf(Bf3));
    __hv_mul_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_Sky1nRO6, VOf(Bf7));
    __hv_min_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_lOMo614K, VOf(Bf7));
    __hv_zero_f(VOf(Bf1));
    __hv_lt_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_and_f(VIf(Bf7), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_cast_fi(VIf(Bf1), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_sZE0td3Z, VIi(Bi1), VOf(Bf1));
    __hv_tabread_if(&sTabread_qi3Qy5Xf, VIi(Bi0), VOf(Bf7));
    __hv_sub_f(VIf(Bf1), VIf(Bf7), VOf(Bf1));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf1), VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_rUWQL3wU, VOf(Bf6));
    __hv_mul_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_l6W4L333, VIf(Bf6));
    __hv_line_f(&sLine_BiOr49ZJ, VOf(Bf6));
    __hv_varread_f(&sVarf_UmKoO7Jv, VOf(Bf1));
    __hv_add_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_tabhead_f(&sTabhead_ChxSn7Rp, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_chFnERaZ, VOf(Bf6));
    __hv_mul_f(VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_wLZSG22j, VOf(Bf1));
    __hv_min_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_hacCwliC, VOf(Bf1));
    __hv_zero_f(VOf(Bf0));
    __hv_lt_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_and_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_cast_fi(VIf(Bf0), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_DcuUkwuv, VIi(Bi1), VOf(Bf0));
    __hv_tabread_if(&sTabread_tlMCDEU9, VIi(Bi0), VOf(Bf1));
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf0));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf0), VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_ORTf9BR0, VOf(Bf3));
    __hv_mul_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_R254PJom, VIf(Bf3));
    __hv_line_f(&sLine_P6oEct1Q, VOf(Bf3));
    __hv_varread_f(&sVarf_UmKoO7Jv, VOf(Bf0));
    __hv_add_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_tabhead_f(&sTabhead_GEwAizTr, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_2pYoQIli, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_UX7LG1Ox, VOf(Bf0));
    __hv_min_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_xGqOcils, VOf(Bf0));
    __hv_zero_f(VOf(Bf8));
    __hv_lt_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_and_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_cast_fi(VIf(Bf8), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_SpGjpbbD, VIi(Bi1), VOf(Bf8));
    __hv_tabread_if(&sTabread_x5spSLms, VIi(Bi0), VOf(Bf0));
    __hv_sub_f(VIf(Bf8), VIf(Bf0), VOf(Bf8));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf8), VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_E8WM2yWh, VOf(Bf6));
    __hv_mul_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_s5Ypbz3X, VIf(Bf6));
    sEnv_process(this, &sEnv_4vftZG2q, VIf(I0), &sEnv_4vftZG2q_sendMessage);
    __hv_line_f(&sLine_aO7GhjbO, VOf(Bf6));
    __hv_mul_f(VIf(I0), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf8), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf6), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_tuFir7xh, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_vBfrnGzy, VOf(Bf6));
    __hv_rpole_f(&sRPole_X0Cbswcl, VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_iZfyaZnp, VOf(Bf8));
    __hv_rpole_f(&sRPole_AtY2CClq, VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_d43J14HK, VIf(Bf8), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_yjqd6llX, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    sEnv_process(this, &sEnv_YeoVMRp3, VIf(I1), &sEnv_YeoVMRp3_sendMessage);
    __hv_line_f(&sLine_J6S20KpL, VOf(Bf6));
    __hv_mul_f(VIf(I1), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf3), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_iSqXoqWW, VOf(Bf3));
    __hv_mul_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_uTlvad6S, VOf(Bf6));
    __hv_rpole_f(&sRPole_ncZIBpqo, VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_3BcyYUL3, VOf(Bf3));
    __hv_rpole_f(&sRPole_pp7rdhuA, VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_OmBbXjAV, VIf(Bf3), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_lmPLqVmc, VOf(Bf3));
    __hv_mul_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf8), VIf(Bf3), VOf(Bf6));
    __hv_varwrite_f(&sVarf_DNESb3tW, VIf(Bf6));
    __hv_varread_f(&sVarf_pg6cwUCf, VOf(Bf6));
    __hv_mul_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf8), 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f);
    __hv_varread_f(&sVarf_E4cyVh3U, VOf(Bf9));
    __hv_rpole_f(&sRPole_eNODkBiT, VIf(ZERO), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf10), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_Ciizyjgo, VIf(Bf9), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf9), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_ZCDMH6Nt, VOf(Bf9));
    __hv_mul_f(VIf(Bf10), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf10), 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f);
    __hv_min_f(VIf(Bf9), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf9), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf10), VIf(Bf9), VOf(Bf9));
    __hv_line_f(&sLine_FzOMdSyh, VOf(Bf10));
    __hv_mul_f(VIf(Bf9), VIf(Bf10), VOf(Bf10));
    __hv_phasor_k_f(&sPhasor_QNXx2YtS, VOf(Bf9));
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
    __hv_tabhead_f(&sTabhead_PrFERlrB, VOf(Bf13));
    __hv_var_k_f_r(VOf(Bf11), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf13), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_C5nexXEw, VOf(Bf13));
    __hv_mul_f(VIf(Bf9), VIf(Bf13), VOf(Bf13));
    __hv_varread_f(&sVarf_5dZem6tZ, VOf(Bf9));
    __hv_min_f(VIf(Bf13), VIf(Bf9), VOf(Bf9));
    __hv_zero_f(VOf(Bf13));
    __hv_max_f(VIf(Bf9), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf11), VIf(Bf13), VOf(Bf13));
    __hv_floor_f(VIf(Bf13), VOf(Bf11));
    __hv_varread_f(&sVarf_c1ZZxxWf, VOf(Bf9));
    __hv_zero_f(VOf(Bf14));
    __hv_lt_f(VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_and_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_add_f(VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_cast_fi(VIf(Bf14), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_rTQO6xcb, VIi(Bi1), VOf(Bf14));
    __hv_tabread_if(&sTabread_kUrSbaMf, VIi(Bi0), VOf(Bf9));
    __hv_sub_f(VIf(Bf14), VIf(Bf9), VOf(Bf14));
    __hv_sub_f(VIf(Bf13), VIf(Bf11), VOf(Bf11));
    __hv_fma_f(VIf(Bf14), VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf9), VIf(Bf11), VIf(Bf10), VOf(Bf11));
    __hv_varread_f(&sVarf_0aFgsf8H, VOf(Bf9));
    __hv_rpole_f(&sRPole_WPP7oQRg, VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_VpqIHrmv, VIf(Bf9), VOf(Bf14));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf9), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_PNgHyURc, VOf(Bf9));
    __hv_mul_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_phasor_k_f(&sPhasor_L4EAqe4m, VOf(Bf11));
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
    __hv_tabhead_f(&sTabhead_OptNTTZz, VOf(Bf12));
    __hv_var_k_f_r(VOf(Bf14), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf12), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_2QuxuKQc, VOf(Bf12));
    __hv_mul_f(VIf(Bf11), VIf(Bf12), VOf(Bf12));
    __hv_varread_f(&sVarf_aN3B3JpT, VOf(Bf11));
    __hv_min_f(VIf(Bf12), VIf(Bf11), VOf(Bf11));
    __hv_zero_f(VOf(Bf12));
    __hv_max_f(VIf(Bf11), VIf(Bf12), VOf(Bf12));
    __hv_sub_f(VIf(Bf14), VIf(Bf12), VOf(Bf12));
    __hv_floor_f(VIf(Bf12), VOf(Bf14));
    __hv_varread_f(&sVarf_Apj3pBkj, VOf(Bf11));
    __hv_zero_f(VOf(Bf15));
    __hv_lt_f(VIf(Bf14), VIf(Bf15), VOf(Bf15));
    __hv_and_f(VIf(Bf11), VIf(Bf15), VOf(Bf15));
    __hv_add_f(VIf(Bf14), VIf(Bf15), VOf(Bf15));
    __hv_cast_fi(VIf(Bf15), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_9owLQv2l, VIi(Bi1), VOf(Bf15));
    __hv_tabread_if(&sTabread_wgzYO1FH, VIi(Bi0), VOf(Bf11));
    __hv_sub_f(VIf(Bf15), VIf(Bf11), VOf(Bf15));
    __hv_sub_f(VIf(Bf12), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf15), VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf14), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf11), VIf(Bf14), VIf(Bf10), VOf(Bf14));
    __hv_varread_f(&sVarf_1ChFRYgX, VOf(Bf11));
    __hv_rpole_f(&sRPole_mkyAvb52, VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_dAhcPlpJ, VIf(Bf11), VOf(Bf15));
    __hv_mul_f(VIf(Bf15), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_GDqmAVCN, VOf(Bf11));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_BB81avOo, VOf(Bf14));
    __hv_mul_f(VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_tabwrite_f(&sTabwrite_TihwjOhr, VIf(Bf14));
    __hv_varread_f(&sVarf_tSsl8zRz, VOf(Bf14));
    __hv_mul_f(VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_tabwrite_f(&sTabwrite_r3lLXQA5, VIf(Bf14));
    __hv_fma_f(VIf(Bf6), VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_8r3XynoW, VOf(Bf8));
    __hv_rpole_f(&sRPole_CczdtN0r, VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_1pY2ivMP, VIf(Bf8), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_fCSkq5XW, VOf(Bf8));
    __hv_mul_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf8), VIf(O0), VOf(O0));
    __hv_varread_f(&sVarf_C141WdlT, VOf(Bf8));
    __hv_mul_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf3), 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f);
    __hv_fma_f(VIf(Bf8), VIf(Bf3), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_KV3WzBJu, VOf(Bf3));
    __hv_rpole_f(&sRPole_0oBuZIkK, VIf(Bf11), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_TiPYYQnt, VIf(Bf3), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf3), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_bx5FKLIM, VOf(Bf3));
    __hv_mul_f(VIf(Bf11), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf3), VIf(O1), VOf(O1));
    __hv_line_f(&sLine_PFpoo91Q, VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_UkF0fL5p, VOf(Bf2));
    __hv_line_f(&sLine_SW4nxmrF, VOf(Bf11));
    __hv_line_f(&sLine_G4CMZ2yJ, VOf(Bf8));
    __hv_line_f(&sLine_s2vheiAf, VOf(Bf9));
    __hv_line_f(&sLine_uh132vGA, VOf(Bf6));
    __hv_mul_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf5), VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf1), VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf4), VIf(Bf11), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf0), VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));

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
