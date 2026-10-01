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
  numBytes += sBiquad_k_init(&sBiquad_k_9bcYGL8N, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  numBytes += sRPole_init(&sRPole_ioxEkdlQ);
  numBytes += sDel1_init(&sDel1_jlTZxsku);
  numBytes += sRPole_init(&sRPole_q2X0SOpO);
  numBytes += sDel1_init(&sDel1_Y3GFOJ7I);
  numBytes += sRPole_init(&sRPole_nwnKRjne);
  numBytes += sDel1_init(&sDel1_dHVAQwQS);
  numBytes += sRPole_init(&sRPole_qAVsm22w);
  numBytes += sRPole_init(&sRPole_e6ajDOVR);
  numBytes += sRPole_init(&sRPole_BnxDtdUT);
  numBytes += sRPole_init(&sRPole_Rbu7AiTw);
  numBytes += sDel1_init(&sDel1_nDTdHJnz);
  numBytes += sRPole_init(&sRPole_fUjegzsg);
  numBytes += sLine_init(&sLine_8K50I9lo);
  numBytes += sLine_init(&sLine_WygtUEeg);
  numBytes += sEnv_init(&sEnv_3PQEFAEL, 256, 512);
  numBytes += sLine_init(&sLine_UnW231o1);
  numBytes += sLine_init(&sLine_156sTZrN);
  numBytes += sRPole_init(&sRPole_xoO1BVbF);
  numBytes += sTabwrite_init(&sTabwrite_edxKGKOZ, &hTable_KbsQZC6I);
  numBytes += sPhasor_k_init(&sPhasor_PGED1c5o, 0.0f, sampleRate);
  numBytes += sPhasor_k_init(&sPhasor_IGp54lgc, 0.0f, sampleRate);
  numBytes += sLine_init(&sLine_cEE2Thq5);
  numBytes += sTabhead_init(&sTabhead_LxLCRsZg, &hTable_KbsQZC6I);
  numBytes += sTabread_init(&sTabread_hUqlxQ1A, &hTable_KbsQZC6I, false);
  numBytes += sTabread_init(&sTabread_2dMprEYX, &hTable_KbsQZC6I, false);
  numBytes += sLine_init(&sLine_5W1lJtqr);
  numBytes += sLine_init(&sLine_81fksddM);
  numBytes += sTabhead_init(&sTabhead_irzF4oeb, &hTable_KbsQZC6I);
  numBytes += sTabread_init(&sTabread_Fr9NsXjL, &hTable_KbsQZC6I, false);
  numBytes += sTabread_init(&sTabread_eSWMnDxQ, &hTable_KbsQZC6I, false);
  numBytes += sLine_init(&sLine_AndQKZQU);
  numBytes += sLine_init(&sLine_XyZsgHQy);
  numBytes += sTabhead_init(&sTabhead_YHmvWXWG, &hTable_KbsQZC6I);
  numBytes += sTabread_init(&sTabread_pXs3K8Jc, &hTable_KbsQZC6I, false);
  numBytes += sTabread_init(&sTabread_Mpl8A6eE, &hTable_KbsQZC6I, false);
  numBytes += sLine_init(&sLine_bmQsHHXO);
  numBytes += sLine_init(&sLine_3crdJwLz);
  numBytes += sTabhead_init(&sTabhead_nilPwRGP, &hTable_KbsQZC6I);
  numBytes += sTabread_init(&sTabread_CWwCW7ii, &hTable_KbsQZC6I, false);
  numBytes += sTabread_init(&sTabread_76Sdk5fA, &hTable_KbsQZC6I, false);
  numBytes += sLine_init(&sLine_OMe2aevs);
  numBytes += sLine_init(&sLine_reQtjVXh);
  numBytes += sTabhead_init(&sTabhead_BVMIoETX, &hTable_KbsQZC6I);
  numBytes += sTabread_init(&sTabread_TD5EaW2H, &hTable_KbsQZC6I, false);
  numBytes += sTabread_init(&sTabread_O8fKkOVK, &hTable_KbsQZC6I, false);
  numBytes += sLine_init(&sLine_SEJlmtiZ);
  numBytes += sLine_init(&sLine_lCk6NFfm);
  numBytes += sTabhead_init(&sTabhead_TZhQ7ie7, &hTable_KbsQZC6I);
  numBytes += sTabread_init(&sTabread_K9W4sqj7, &hTable_KbsQZC6I, false);
  numBytes += sTabread_init(&sTabread_IhcDZeSS, &hTable_KbsQZC6I, false);
  numBytes += sLine_init(&sLine_iZonZydt);
  numBytes += sEnv_init(&sEnv_whBehBZa, 256, 512);
  numBytes += sLine_init(&sLine_5Edk1GSB);
  numBytes += sRPole_init(&sRPole_AiXyAI5z);
  numBytes += sRPole_init(&sRPole_LfrsOhBS);
  numBytes += sDel1_init(&sDel1_sGUPnW8b);
  numBytes += sEnv_init(&sEnv_WUnBo5nE, 256, 512);
  numBytes += sLine_init(&sLine_nBi0INz9);
  numBytes += sRPole_init(&sRPole_QkGM47Yt);
  numBytes += sRPole_init(&sRPole_uhGL2jVB);
  numBytes += sDel1_init(&sDel1_a1ZoLwwg);
  numBytes += sLine_init(&sLine_b0nHpU1E);
  numBytes += sLine_init(&sLine_ycRJC89x);
  numBytes += sLine_init(&sLine_xT1IBGgw);
  numBytes += sLine_init(&sLine_sI8Nv1FC);
  numBytes += sLine_init(&sLine_iir3VtlR);
  numBytes += sLine_init(&sLine_C3Dz1GNv);
  numBytes += sRPole_init(&sRPole_uaow2xLX);
  numBytes += sDel1_init(&sDel1_5Bb08tFp);
  numBytes += sLine_init(&sLine_71BUza6o);
  numBytes += sPhasor_k_init(&sPhasor_EX7r8EEo, 0.3f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_5BbxfREo, &hTable_QIbxPrMM);
  numBytes += sTabread_init(&sTabread_sZll0OkK, &hTable_QIbxPrMM, false);
  numBytes += sTabread_init(&sTabread_T4iOWoEq, &hTable_QIbxPrMM, false);
  numBytes += sRPole_init(&sRPole_0N3h1GTl);
  numBytes += sDel1_init(&sDel1_oTHlHW5n);
  numBytes += sPhasor_k_init(&sPhasor_tMFMtpn2, 0.5f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_WleJ1sIc, &hTable_eIH9Q4vJ);
  numBytes += sTabread_init(&sTabread_ILUvokF6, &hTable_eIH9Q4vJ, false);
  numBytes += sTabread_init(&sTabread_B6ICL9yf, &hTable_eIH9Q4vJ, false);
  numBytes += sRPole_init(&sRPole_KphVslPn);
  numBytes += sDel1_init(&sDel1_WuKU9n0N);
  numBytes += sTabwrite_init(&sTabwrite_EkNOqRsv, &hTable_eIH9Q4vJ);
  numBytes += sTabwrite_init(&sTabwrite_wjUPuWPz, &hTable_QIbxPrMM);
  numBytes += sRPole_init(&sRPole_eAytgqBV);
  numBytes += sDel1_init(&sDel1_dDnEq3IN);
  numBytes += sRPole_init(&sRPole_0oz8HY1Y);
  numBytes += sDel1_init(&sDel1_7zO4kd2t);
  numBytes += cVar_init_s(&cVar_whukUpWH, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_dK4Sc7BR, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_eW42e7H9, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_MZdFYqUK, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_as2M5kmH, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_XzBeLBm0, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Lspp143v, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_n48bLJt4, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_yFDNzwBl, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_ZFHGvMLf, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_hPCQpE6E, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_0XASQzys, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_icn3ZsY2, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_Of4UBz5e, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_0RnCFVZ4, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_sXe0w3LM, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_7YcE2dCu, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_nAHm7sbF, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_HRbcrLfr, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_S3LtCZEo, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_20dGcDqU, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_qT1RQDjS, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_iEp0DvCw, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_jx54f5Jd, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_k9pVdNuM, 0.0f);
  numBytes += cVar_init_f(&cVar_T2zcebCB, 0.0f);
  numBytes += cVar_init_f(&cVar_l6U0YiAv, 0.0f);
  numBytes += cVar_init_f(&cVar_b2yNGa7E, 0.0f);
  numBytes += cVar_init_f(&cVar_3mr9UbZ2, 0.0f);
  numBytes += cVar_init_f(&cVar_qgwGpJJJ, 0.0f);
  numBytes += cVar_init_f(&cVar_r3xYtgXX, 0.0f);
  numBytes += cVar_init_f(&cVar_u3euG7lo, 0.0f);
  numBytes += cVar_init_f(&cVar_gqklJEyb, 0.0f);
  numBytes += cVar_init_f(&cVar_tO3ThWCB, 0.0f);
  numBytes += cVar_init_f(&cVar_PoqrBt6u, 0.0f);
  numBytes += cVar_init_f(&cVar_rGNJVHwt, 0.0f);
  numBytes += cDelay_init(this, &cDelay_48mBitFY, 0.0f);
  numBytes += cDelay_init(this, &cDelay_P2Tjfbyq, 0.0f);
  numBytes += hTable_init(&hTable_KbsQZC6I, 256);
  numBytes += cPack_init(&cPack_VhO5KuRD, 2, 0.0f, 20.0f);
  numBytes += cPack_init(&cPack_vwi8f8AQ, 2, 0.0f, 1800.0f);
  numBytes += cPack_init(&cPack_ro6njlgN, 2, 0.0f, 1600.0f);
  numBytes += cPack_init(&cPack_ZLLVaSCn, 2, 0.0f, 1300.0f);
  numBytes += cPack_init(&cPack_uU3mPzRv, 2, 0.0f, 1000.0f);
  numBytes += cPack_init(&cPack_uhHWcPZV, 2, 0.0f, 800.0f);
  numBytes += cPack_init(&cPack_sizQutd3, 2, 0.0f, 600.0f);
  numBytes += cVar_init_f(&cVar_3QcZFRyZ, 10000.0f);
  numBytes += cBinop_init(&cBinop_aPouncKP, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_MEAuaK5W, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_QcQSmtTQ, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_On3iF5WU, 27, 1);
  numBytes += cSlice_init(&cSlice_HwIv1oxD, 26, 1);
  numBytes += cSlice_init(&cSlice_e6irjhH8, 25, 1);
  numBytes += cSlice_init(&cSlice_SP8uV1LD, 24, 1);
  numBytes += cSlice_init(&cSlice_caY6uI5q, 23, 1);
  numBytes += cSlice_init(&cSlice_uBPOxsVg, 22, 1);
  numBytes += cSlice_init(&cSlice_rgUZNaHd, 21, 1);
  numBytes += cSlice_init(&cSlice_nsNWXp0p, 20, 1);
  numBytes += cSlice_init(&cSlice_4NP7yDL8, 19, 1);
  numBytes += cSlice_init(&cSlice_iu9XBQMq, 18, 1);
  numBytes += cSlice_init(&cSlice_53oXPvhc, 17, 1);
  numBytes += cSlice_init(&cSlice_XkEKqJkw, 16, 1);
  numBytes += cSlice_init(&cSlice_xNaMc3Ik, 15, 1);
  numBytes += cSlice_init(&cSlice_uxpA3gMk, 14, 1);
  numBytes += cSlice_init(&cSlice_LhQsgP1m, 13, 1);
  numBytes += cSlice_init(&cSlice_Umc2WCKT, 12, 1);
  numBytes += cSlice_init(&cSlice_Bp5dgBwe, 11, 1);
  numBytes += cSlice_init(&cSlice_2ZL8zx5k, 10, 1);
  numBytes += cSlice_init(&cSlice_3oopwPug, 9, 1);
  numBytes += cSlice_init(&cSlice_beYTS8Z7, 8, 1);
  numBytes += cSlice_init(&cSlice_Ugw2pnl2, 7, 1);
  numBytes += cSlice_init(&cSlice_myQXaJ9w, 6, 1);
  numBytes += cSlice_init(&cSlice_asfSVMjd, 5, 1);
  numBytes += cSlice_init(&cSlice_A0oCUYqe, 4, 1);
  numBytes += cSlice_init(&cSlice_nCuCkNV1, 3, 1);
  numBytes += cSlice_init(&cSlice_7Ie60Cpr, 2, 1);
  numBytes += cSlice_init(&cSlice_oLQtpIEv, 1, 1);
  numBytes += cSlice_init(&cSlice_ac7QtmkK, 0, 1);
  numBytes += sVarf_init(&sVarf_a75mUabP, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_jbN6YlAY, 0.0f);
  numBytes += cBinop_init(&cBinop_K9AxWuyi, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_4c17RRi2, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_c4MDNjiM, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_xqfJxmG4, 0.0f);
  numBytes += cBinop_init(&cBinop_QwpynAuu, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_XxKdqnOx, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_7ZuW4b3L, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_yD9btvbq, 0.0f);
  numBytes += cBinop_init(&cBinop_HSmvlEdR, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_gpTnj9zR, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_haZveYMB, 22050.0f);
  numBytes += cBinop_init(&cBinop_h7DLUnKc, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_FZ7OxcYK, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_AH5qt4dC, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_yKMBNzRk, 22050.0f);
  numBytes += cBinop_init(&cBinop_gWKDHnMO, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_gDkzLYc7, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_YIHO2vB1, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_vDxGvGF2, 22050.0f);
  numBytes += cBinop_init(&cBinop_nHmoqqiO, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_sFkaTIaW, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_8JHkej1G, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_Co31oJsU, 22050.0f);
  numBytes += cVar_init_f(&cVar_Knb31ErN, 1.0f);
  numBytes += cBinop_init(&cBinop_yCHAcDHD, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_9tHC2cC1, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_d8iighyK, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_BcM7w38S, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ki1zrNGe, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_wc5ZlQ8K, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_TFhYGxzq, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_pFZEiW6P, 0.0f);
  numBytes += cVar_init_f(&cVar_15b18hQE, 0.0f);
  numBytes += cVar_init_f(&cVar_Z6AKviGV, 0.0f);
  numBytes += cVar_init_f(&cVar_goct6OBS, 0.0f);
  numBytes += cVar_init_f(&cVar_sonClDT8, 0.0f);
  numBytes += cVar_init_f(&cVar_Op5WqUgu, 0.0f);
  numBytes += cSlice_init(&cSlice_Zp3XZRbQ, 3, 1);
  numBytes += cSlice_init(&cSlice_zdii4Obj, 2, 1);
  numBytes += cSlice_init(&cSlice_HyPEr38y, 1, 1);
  numBytes += cSlice_init(&cSlice_ROxSxlhe, 0, 1);
  numBytes += cPack_init(&cPack_OE5zfVGz, 2, 0.0f, 50.0f);
  numBytes += cDelay_init(this, &cDelay_2debBkeC, 0.0f);
  numBytes += cDelay_init(this, &cDelay_fI36xn16, 0.0f);
  numBytes += hTable_init(&hTable_eIH9Q4vJ, 256);
  numBytes += cVar_init_f(&cVar_I7UMWZec, 0.0f);
  numBytes += cVar_init_s(&cVar_yzztoBOH, "del-1001-delayD");
  numBytes += sVarf_init(&sVarf_hxrEJDCQ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_MB1Q7O6S, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_SLJ6OGJP, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_e8ZbbQNq, "del-1001-delayC");
  numBytes += sVarf_init(&sVarf_fl2CSBEN, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_zdnH15Xq, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_DDrxzuFh, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_EDQj3mAe, 0.0f);
  numBytes += cDelay_init(this, &cDelay_Ul01llfE, 0.0f);
  numBytes += hTable_init(&hTable_QIbxPrMM, 256);
  numBytes += sVarf_init(&sVarf_42kNemOl, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_7KWjl9XO, 3.0f);
  numBytes += cBinop_init(&cBinop_cHjWbZTj, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_AQdobzLW, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_6zooMEPV, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_VS5cAGYv, 3.0f);
  numBytes += cBinop_init(&cBinop_oLne3Czx, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_SbtTQLbX, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_BzpxP9IK, 1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_cQz8EdVa, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_5pNiUMHJ, 0.0f);
  numBytes += cVar_init_f(&cVar_xEdOQ5QA, 0.0f);
  numBytes += cVar_init_f(&cVar_mRlQw9sc, 0.0f);
  numBytes += cPack_init(&cPack_G6uBQWdn, 2, 0.0f, 100.0f);
  numBytes += cPack_init(&cPack_T26Gm0kK, 2, 0.0f, 100.0f);
  numBytes += cVar_init_f(&cVar_pfipyuAL, 0.0f);
  numBytes += cVar_init_f(&cVar_iWvuu0x2, 0.0f);
  numBytes += cVar_init_f(&cVar_iD6k92Uo, 0.0f);
  numBytes += cBinop_init(&cBinop_HPOEdIho, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_uTxzNt05, 0.0f); // __pow
  numBytes += cIf_init(&cIf_yG949oD8, false);
  numBytes += cBinop_init(&cBinop_LDI9Ua0m, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_KSHfAeSB, 74.0f);
  numBytes += cVar_init_f(&cVar_HTuSHWmC, 3.0f);
  numBytes += cSlice_init(&cSlice_IvKf6APO, 1, -1);
  numBytes += cVar_init_f(&cVar_nMk8NydO, 1.0f);
  numBytes += cSlice_init(&cSlice_eXZdSuQM, 1, -1);
  numBytes += cVar_init_f(&cVar_Xjw6sGdQ, 70.0f);
  numBytes += cBinop_init(&cBinop_JsMu758o, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_cY2BDP2T, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_jSGi37Yx, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_3RcqADBb, 3000.0f);
  numBytes += cBinop_init(&cBinop_znc95HZb, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_f3Dow5PP, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ZBBTc1MK, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_tZDtDSYA, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_tyHDCzQJ, 400.0f);
  numBytes += cBinop_init(&cBinop_O3ZuXf6u, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_j1Sotq5F, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_n7SRQPOx, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_Khx0RnUV, 30.0f);
  numBytes += cBinop_init(&cBinop_mGegM73q, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_Pd9vwHsA, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_caBtMs9k, false);
  numBytes += cVar_init_f(&cVar_xBKvnsqK, 0.0f);
  numBytes += cVar_init_f(&cVar_YHTadBo3, 0.0f);
  numBytes += cPack_init(&cPack_TGwAK6bl, 3, 0.0f, 500.0f, 100.0f);
  numBytes += cDelay_init(this, &cDelay_33bxotR3, 0.0f);
  numBytes += cVar_init_f(&cVar_uFcqtiIJ, 20.0f);
  numBytes += cBinop_init(&cBinop_PLQ0Kzrs, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_wgATlHOK, 0.0f);
  numBytes += cSlice_init(&cSlice_nslHyto5, 1, -1);
  numBytes += cSlice_init(&cSlice_UVhgJIT0, 1, -1);
  numBytes += cVar_init_f(&cVar_hvaiod8C, 0.0f);
  numBytes += cVar_init_f(&cVar_N6Avutvf, 20.0f);
  numBytes += cVar_init_f(&cVar_ZdjrWlx0, 0.0f);
  numBytes += cVar_init_f(&cVar_6ywSPmXj, 0.0f);
  numBytes += cVar_init_f(&cVar_txxoyCU0, 0.0f);
  numBytes += cSlice_init(&cSlice_0FXWVC6a, 1, 1);
  numBytes += cSlice_init(&cSlice_uQSzuPtX, 0, 1);
  numBytes += cBinop_init(&cBinop_LAfuCAhU, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_wfjnEtl9, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_0ZXLWuuP, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_42pV8o74, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_mctLEGma, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_eyaj8oTt, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_W3UuvbbR, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_bUsVGImG, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_oyZOLANp, 0.0f);
  numBytes += cVar_init_f(&cVar_nsHZ3qg5, 0.0f);
  numBytes += cVar_init_f(&cVar_VHms1U4n, 0.0f);
  numBytes += cVar_init_f(&cVar_lMt0FZPR, 0.0f);
  numBytes += cVar_init_f(&cVar_WrU4Hnc4, 0.0f);
  numBytes += cVar_init_f(&cVar_5D1qwoPO, 0.0f);
  numBytes += sVarf_init(&sVarf_xTieSQ6c, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_tN8bCPWy, 8.0f);
  numBytes += cBinop_init(&cBinop_IPWDiByQ, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_3NrNi2un, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_Jothvxr1, 0.0f);
  numBytes += cVar_init_f(&cVar_y2h97gxo, 0.0f);
  numBytes += cBinop_init(&cBinop_dnhkdeWm, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_plEtslME, 0.0f); // __pow
  numBytes += cIf_init(&cIf_CeOrhk5u, false);
  numBytes += cBinop_init(&cBinop_wioL1WyG, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_mnOPGpra, 82.0f);
  numBytes += cVar_init_f(&cVar_UkJVskA7, 21.0f);
  numBytes += cSlice_init(&cSlice_ZSPgpvLz, 1, -1);
  numBytes += cVar_init_f(&cVar_Cn493HcN, 1.0f);
  numBytes += cSlice_init(&cSlice_6WVz4me1, 1, -1);
  numBytes += cVar_init_f(&cVar_XjtXEJQY, 70.0f);
  numBytes += cBinop_init(&cBinop_HML1G1nW, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_uh0Rwj6U, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_RtPUZoFs, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_ugWdewVF, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_pguN2Jbt, 8.0f);
  numBytes += cBinop_init(&cBinop_31V1xZEA, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_d1t0X95H, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_nJ9RFvI8, 0.0f);
  numBytes += cVar_init_f(&cVar_dai7MhCi, 0.0f);
  numBytes += cBinop_init(&cBinop_DhIiCPK0, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_onEHk2Nh, 0.0f); // __pow
  numBytes += cIf_init(&cIf_G3KVIUqz, false);
  numBytes += cBinop_init(&cBinop_rPb1VuvE, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_DlrEi0It, 82.0f);
  numBytes += cVar_init_f(&cVar_WlHR4jy7, 21.0f);
  numBytes += cSlice_init(&cSlice_P2UBkBoH, 1, -1);
  numBytes += cVar_init_f(&cVar_eE4lozXK, 1.0f);
  numBytes += cSlice_init(&cSlice_Yhc5bFgm, 1, -1);
  numBytes += cVar_init_f(&cVar_LVZomvos, 70.0f);
  numBytes += cBinop_init(&cBinop_H11XEzRn, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_KoFWsiN1, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_zkkrnZzI, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_7QlbEo1C, 10000.0f);
  numBytes += cBinop_init(&cBinop_jqdGevjr, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_QpqJxSdb, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_clq0qRHC, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_6BjG2n7q, 10000.0f);
  numBytes += cBinop_init(&cBinop_mfOfOUIE, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_PkUTK7g3, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_0XNJG4jh, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_tJKEYLbi, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_iXwXDOmg, 20.0f);
  numBytes += cBinop_init(&cBinop_zTLrcaWQ, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_gCjxyXHt, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_TEjPzvyA, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_slCKWQaf, 20.0f);
  numBytes += cBinop_init(&cBinop_PaKnc6t5, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_KXLgqJ87, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_bWjZF4bC, 0.0f);
  numBytes += sVarf_init(&sVarf_ITj58nKT, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_UlwfD28Y, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_e1c0qjsF, 0.0f);
  numBytes += cVar_init_f(&cVar_Mkq6XW2g, 0.0f);
  numBytes += cVar_init_f(&cVar_WWiSt9xC, 0.0f);
  numBytes += cVar_init_f(&cVar_5ZChZ45Z, 1.0f);
  numBytes += sVarf_init(&sVarf_I2JfNKOR, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_8gOGiH4K, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_1nm1H0nt, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_QlKbyFF2, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_8JFxsMvr, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_kuhN6ZLo, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Yc57s7OY, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ebkKyNFf, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ruI7XIlK, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ktTk5RXa, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_1BbWSd1x, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_i5oMqKSf, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_4jzHFGbW, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_1zv3RbG7, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_hTCnWr9M, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_8Lw562CT, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_1E3ELDUW, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_1PyCn6GB, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_sLvCfnBm, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_GTnMbzOY, 0.5f); // __mul
  numBytes += sVarf_init(&sVarf_EeP8lKHx, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_xSWr8Q64, 0.0f, 0.0f, false);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_Echomatica::~Heavy_Echomatica() {
  sEnv_free(&sEnv_3PQEFAEL);
  sEnv_free(&sEnv_whBehBZa);
  sEnv_free(&sEnv_WUnBo5nE);
  hTable_free(&hTable_KbsQZC6I);
  cPack_free(&cPack_VhO5KuRD);
  cPack_free(&cPack_vwi8f8AQ);
  cPack_free(&cPack_ro6njlgN);
  cPack_free(&cPack_ZLLVaSCn);
  cPack_free(&cPack_uU3mPzRv);
  cPack_free(&cPack_uhHWcPZV);
  cPack_free(&cPack_sizQutd3);
  cPack_free(&cPack_OE5zfVGz);
  hTable_free(&hTable_eIH9Q4vJ);
  hTable_free(&hTable_QIbxPrMM);
  cPack_free(&cPack_G6uBQWdn);
  cPack_free(&cPack_T26Gm0kK);
  cPack_free(&cPack_TGwAK6bl);
}

HvTable *Heavy_Echomatica::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0xC7C6279C: return &hTable_KbsQZC6I; // del-1001-delayA
    case 0x6F28B8EB: return &hTable_eIH9Q4vJ; // del-1001-delayD
    case 0xA74180A2: return &hTable_QIbxPrMM; // del-1001-delayC
    default: return nullptr;
  }
}

void Heavy_Echomatica::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0x22C9B907: { // Vari
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_IDR0h9XC_sendMessage);
      break;
    }
    case 0xC6DDD6FE: { // 1208-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_o0Y8FkCi_sendMessage);
      break;
    }
    case 0xCFEDDF7: { // 1208-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_aCD4KgSx_sendMessage);
      break;
    }
    case 0x17325573: { // 1286-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_AubRW87C_sendMessage);
      break;
    }
    case 0xA97CDE08: { // 1286-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_NmLbu4vw_sendMessage);
      break;
    }
    case 0x92D5088: { // 1308-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_TTnEbJl5_sendMessage);
      break;
    }
    case 0x432A2140: { // 1308-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_f0VJiZVe_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_AHGo4oPU_sendMessage);
      break;
    }
    case 0xE68AB11B: { // chrs
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_EIr2rK25_sendMessage);
      break;
    }
    case 0xBA8CED4E: { // dry
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Z9WE1Rm6_sendMessage);
      break;
    }
    case 0xEA9D7BDD: { // drymod
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_2hu9kOI3_sendMessage);
      break;
    }
    case 0x63E722C0: { // echo
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_QJhHG9uD_sendMessage);
      break;
    }
    case 0x31E76251: { // echomod
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_hyPP7UP6_sendMessage);
      break;
    }
    case 0x8FA433B0: { // f1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ng63AqWL_sendMessage);
      break;
    }
    case 0xEE0EB120: { // f2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_jiMMtdfa_sendMessage);
      break;
    }
    case 0x4FFCF19F: { // f3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_etumewYV_sendMessage);
      break;
    }
    case 0x2AF9F5EB: { // f4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_8ghr3yoa_sendMessage);
      break;
    }
    case 0xC6F6EBB2: { // f5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_5SiiA3Z4_sendMessage);
      break;
    }
    case 0x775D6E5E: { // f6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_RS48hJ3d_sendMessage);
      break;
    }
    case 0xBB6123FD: { // fdbck_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_UyrOploK_sendMessage);
      break;
    }
    case 0xF1E7CD16: { // feedback
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_qXeeACUz_sendMessage);
      break;
    }
    case 0xC7AF3F72: { // h1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4xg5GNSz_sendMessage);
      break;
    }
    case 0x9BEBB079: { // h2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_IlfDBs99_sendMessage);
      break;
    }
    case 0xAB1137FD: { // h3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_7uHdJJPd_sendMessage);
      break;
    }
    case 0x2B4C6DE1: { // h4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_sB0PemGI_sendMessage);
      break;
    }
    case 0x2541E77D: { // h5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_weoG44s6_sendMessage);
      break;
    }
    case 0xE7F6D341: { // h6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_W0joHUfz_sendMessage);
      break;
    }
    case 0x5667A4DA: { // head1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_wbvJZ6PN_sendMessage);
      break;
    }
    case 0xAD6B31A5: { // head2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_voLivBUQ_sendMessage);
      break;
    }
    case 0x8A2BD450: { // head3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_d3FxU4Sy_sendMessage);
      break;
    }
    case 0xCF5C829A: { // head4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_YtjlAZ3I_sendMessage);
      break;
    }
    case 0xEE70DFBC: { // head5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_D7UVvhlf_sendMessage);
      break;
    }
    case 0x8E4B9939: { // head6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_HH5Oc7I6_sendMessage);
      break;
    }
    case 0x7E24361: { // hp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Ap4jUK7c_sendMessage);
      break;
    }
    case 0x674D12F6: { // hp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_2nm6cRoZ_sendMessage);
      break;
    }
    case 0x6A20C3F5: { // hp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_srWtiZGy_sendMessage);
      break;
    }
    case 0x123E8795: { // lp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_VNL3j0qQ_sendMessage);
      break;
    }
    case 0x4588BD1: { // lp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_xqBuho4X_sendMessage);
      break;
    }
    case 0xB7298D49: { // lp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_FKUz2N0f_sendMessage);
      break;
    }
    case 0x64BD0F15: { // mf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_vfuE3N67_sendMessage);
      break;
    }
    case 0x5A12F82E: { // mg
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1AWkmxFH_sendMessage);
      break;
    }
    case 0x2C9C49A7: { // mq
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_yeLAXVGA_sendMessage);
      break;
    }
    case 0xC8D93A6D: { // tapehead_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_DreqRk35_sendMessage);
      break;
    }
    case 0xB25D05EB: { // varispeed
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_6S9JjaYY_sendMessage);
      break;
    }
    case 0x8ADB5B6B: { // varispeed_enable
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_7tBpPnFW_sendMessage);
      break;
    }
    case 0x7BB47B7B: { // wnf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_5K2SsKzS_sendMessage);
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


void Heavy_Echomatica::cMsg_jsFYjwIx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_GQuFrXyx_sendMessage);
}

void Heavy_Echomatica::cSystem_GQuFrXyx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_0lZzsi5X_sendMessage);
}

void Heavy_Echomatica::cVar_whukUpWH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2I8PEmDN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_JUbaO9k5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_wQmFwko0_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_dK4Sc7BR, m);
}

void Heavy_Echomatica::cBinop_0lZzsi5X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_eW42e7H9, m);
}

void Heavy_Echomatica::cMsg_2I8PEmDN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_JUbaO9k5_sendMessage);
}

void Heavy_Echomatica::cBinop_wQmFwko0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_MZdFYqUK, m);
}

void Heavy_Echomatica::cMsg_SV6OKNBH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_iQdiFWli_sendMessage);
}

void Heavy_Echomatica::cSystem_iQdiFWli_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_zVq6uSGD_sendMessage);
}

void Heavy_Echomatica::cVar_as2M5kmH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_eVMQp7PL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_XYUJCUFb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_V3J8IJCx_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_XzBeLBm0, m);
}

void Heavy_Echomatica::cBinop_zVq6uSGD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Lspp143v, m);
}

void Heavy_Echomatica::cMsg_eVMQp7PL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_XYUJCUFb_sendMessage);
}

void Heavy_Echomatica::cBinop_V3J8IJCx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_n48bLJt4, m);
}

void Heavy_Echomatica::cMsg_lP5GaAP2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_UKrZi1Og_sendMessage);
}

void Heavy_Echomatica::cSystem_UKrZi1Og_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_0n1kVn2F_sendMessage);
}

void Heavy_Echomatica::cVar_yFDNzwBl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uKIYGhKJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_GV7R2meY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_5EzIawSU_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_ZFHGvMLf, m);
}

void Heavy_Echomatica::cBinop_0n1kVn2F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_hPCQpE6E, m);
}

void Heavy_Echomatica::cMsg_uKIYGhKJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_GV7R2meY_sendMessage);
}

void Heavy_Echomatica::cBinop_5EzIawSU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_0XASQzys, m);
}

void Heavy_Echomatica::cMsg_DA7T1A61_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Oxc7X9gR_sendMessage);
}

void Heavy_Echomatica::cSystem_Oxc7X9gR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_r97UYT1N_sendMessage);
}

void Heavy_Echomatica::cVar_icn3ZsY2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zHWMvTXk_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_K3pmgDs0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_fSygiQCe_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Of4UBz5e, m);
}

void Heavy_Echomatica::cBinop_r97UYT1N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_0RnCFVZ4, m);
}

void Heavy_Echomatica::cMsg_zHWMvTXk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_K3pmgDs0_sendMessage);
}

void Heavy_Echomatica::cBinop_fSygiQCe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_sXe0w3LM, m);
}

void Heavy_Echomatica::cCast_ZsYXfcSq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_S2c5SY0U_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_hrsWpnt6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_64AFIXul_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_CrxHfsvE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uNNqaUZu_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_0mVkJ4Co_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DsNrYHQw_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_WafP6yqi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LDoaHPtR_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_uKS33lql_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_990ug3SP_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_IYrBjbjE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gM8mSzfD_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_gNSa1tnQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GjUP8tKy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_tCXGC6Ps_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_D0FTUWZJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_Qp4LMTKu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PoHDkQcF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_Z5RXQimq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vTYCSUdg_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_UJz35bzt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xMGBYWAB_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_qZj8tXV7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TMEUix55_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_HLPh7GHY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_youUHB3q_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_5Ov2vMMM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CuwHxCnO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_KeMix5RW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8FspfEvT_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_B9NmVR9t_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5DPo2mpc_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nvoa17N7_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OIzV2xuF_sendMessage);
      break;
    }
    case 0x40400000: { // "3.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZRzXAeO0_sendMessage);
      break;
    }
    case 0x40800000: { // "4.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_osOjQqLf_sendMessage);
      break;
    }
    case 0x40A00000: { // "5.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_17ltScqM_sendMessage);
      break;
    }
    case 0x40C00000: { // "6.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VoIG66gv_sendMessage);
      break;
    }
    case 0x40E00000: { // "7.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UyF7zPCx_sendMessage);
      break;
    }
    case 0x41000000: { // "8.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OiuQT0hk_sendMessage);
      break;
    }
    case 0x41100000: { // "9.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HXkPoEFG_sendMessage);
      break;
    }
    case 0x41200000: { // "10.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xzOeM57E_sendMessage);
      break;
    }
    case 0x41300000: { // "11.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_T0qEXjvG_sendMessage);
      break;
    }
    case 0x41400000: { // "12.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iX2HiHe2_sendMessage);
      break;
    }
    case 0x41500000: { // "13.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lv9UqOuZ_sendMessage);
      break;
    }
    case 0x41600000: { // "14.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BSs7BnpS_sendMessage);
      break;
    }
    case 0x41700000: { // "15.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TdHgSZwe_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_5DPo2mpc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Z5RXQimq_sendMessage);
}

void Heavy_Echomatica::cCast_nvoa17N7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HLPh7GHY_sendMessage);
}

void Heavy_Echomatica::cCast_OIzV2xuF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tCXGC6Ps_sendMessage);
}

void Heavy_Echomatica::cCast_ZRzXAeO0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Qp4LMTKu_sendMessage);
}

void Heavy_Echomatica::cCast_osOjQqLf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qZj8tXV7_sendMessage);
}

void Heavy_Echomatica::cCast_17ltScqM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UJz35bzt_sendMessage);
}

void Heavy_Echomatica::cCast_VoIG66gv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WafP6yqi_sendMessage);
}

void Heavy_Echomatica::cCast_UyF7zPCx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5Ov2vMMM_sendMessage);
}

void Heavy_Echomatica::cCast_OiuQT0hk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KeMix5RW_sendMessage);
}

void Heavy_Echomatica::cCast_HXkPoEFG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uKS33lql_sendMessage);
}

void Heavy_Echomatica::cCast_xzOeM57E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hrsWpnt6_sendMessage);
}

void Heavy_Echomatica::cCast_T0qEXjvG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CrxHfsvE_sendMessage);
}

void Heavy_Echomatica::cCast_iX2HiHe2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0mVkJ4Co_sendMessage);
}

void Heavy_Echomatica::cCast_lv9UqOuZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZsYXfcSq_sendMessage);
}

void Heavy_Echomatica::cCast_BSs7BnpS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gNSa1tnQ_sendMessage);
}

void Heavy_Echomatica::cCast_TdHgSZwe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IYrBjbjE_sendMessage);
}

void Heavy_Echomatica::cMsg_D0FTUWZJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_On3iF5WU, 0, m, &cSlice_On3iF5WU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HwIv1oxD, 0, m, &cSlice_HwIv1oxD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_e6irjhH8, 0, m, &cSlice_e6irjhH8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SP8uV1LD, 0, m, &cSlice_SP8uV1LD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_caY6uI5q, 0, m, &cSlice_caY6uI5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uBPOxsVg, 0, m, &cSlice_uBPOxsVg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rgUZNaHd, 0, m, &cSlice_rgUZNaHd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nsNWXp0p, 0, m, &cSlice_nsNWXp0p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4NP7yDL8, 0, m, &cSlice_4NP7yDL8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iu9XBQMq, 0, m, &cSlice_iu9XBQMq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_53oXPvhc, 0, m, &cSlice_53oXPvhc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XkEKqJkw, 0, m, &cSlice_XkEKqJkw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xNaMc3Ik, 0, m, &cSlice_xNaMc3Ik_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uxpA3gMk, 0, m, &cSlice_uxpA3gMk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LhQsgP1m, 0, m, &cSlice_LhQsgP1m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Umc2WCKT, 0, m, &cSlice_Umc2WCKT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Bp5dgBwe, 0, m, &cSlice_Bp5dgBwe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2ZL8zx5k, 0, m, &cSlice_2ZL8zx5k_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3oopwPug, 0, m, &cSlice_3oopwPug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_beYTS8Z7, 0, m, &cSlice_beYTS8Z7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Ugw2pnl2, 0, m, &cSlice_Ugw2pnl2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_myQXaJ9w, 0, m, &cSlice_myQXaJ9w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_asfSVMjd, 0, m, &cSlice_asfSVMjd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0oCUYqe, 0, m, &cSlice_A0oCUYqe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nCuCkNV1, 0, m, &cSlice_nCuCkNV1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7Ie60Cpr, 0, m, &cSlice_7Ie60Cpr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oLQtpIEv, 0, m, &cSlice_oLQtpIEv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ac7QtmkK, 0, m, &cSlice_ac7QtmkK_sendMessage);
}

void Heavy_Echomatica::cMsg_youUHB3q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_On3iF5WU, 0, m, &cSlice_On3iF5WU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HwIv1oxD, 0, m, &cSlice_HwIv1oxD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_e6irjhH8, 0, m, &cSlice_e6irjhH8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SP8uV1LD, 0, m, &cSlice_SP8uV1LD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_caY6uI5q, 0, m, &cSlice_caY6uI5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uBPOxsVg, 0, m, &cSlice_uBPOxsVg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rgUZNaHd, 0, m, &cSlice_rgUZNaHd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nsNWXp0p, 0, m, &cSlice_nsNWXp0p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4NP7yDL8, 0, m, &cSlice_4NP7yDL8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iu9XBQMq, 0, m, &cSlice_iu9XBQMq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_53oXPvhc, 0, m, &cSlice_53oXPvhc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XkEKqJkw, 0, m, &cSlice_XkEKqJkw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xNaMc3Ik, 0, m, &cSlice_xNaMc3Ik_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uxpA3gMk, 0, m, &cSlice_uxpA3gMk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LhQsgP1m, 0, m, &cSlice_LhQsgP1m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Umc2WCKT, 0, m, &cSlice_Umc2WCKT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Bp5dgBwe, 0, m, &cSlice_Bp5dgBwe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2ZL8zx5k, 0, m, &cSlice_2ZL8zx5k_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3oopwPug, 0, m, &cSlice_3oopwPug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_beYTS8Z7, 0, m, &cSlice_beYTS8Z7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Ugw2pnl2, 0, m, &cSlice_Ugw2pnl2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_myQXaJ9w, 0, m, &cSlice_myQXaJ9w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_asfSVMjd, 0, m, &cSlice_asfSVMjd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0oCUYqe, 0, m, &cSlice_A0oCUYqe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nCuCkNV1, 0, m, &cSlice_nCuCkNV1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7Ie60Cpr, 0, m, &cSlice_7Ie60Cpr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oLQtpIEv, 0, m, &cSlice_oLQtpIEv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ac7QtmkK, 0, m, &cSlice_ac7QtmkK_sendMessage);
}

void Heavy_Echomatica::cMsg_vTYCSUdg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_On3iF5WU, 0, m, &cSlice_On3iF5WU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HwIv1oxD, 0, m, &cSlice_HwIv1oxD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_e6irjhH8, 0, m, &cSlice_e6irjhH8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SP8uV1LD, 0, m, &cSlice_SP8uV1LD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_caY6uI5q, 0, m, &cSlice_caY6uI5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uBPOxsVg, 0, m, &cSlice_uBPOxsVg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rgUZNaHd, 0, m, &cSlice_rgUZNaHd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nsNWXp0p, 0, m, &cSlice_nsNWXp0p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4NP7yDL8, 0, m, &cSlice_4NP7yDL8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iu9XBQMq, 0, m, &cSlice_iu9XBQMq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_53oXPvhc, 0, m, &cSlice_53oXPvhc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XkEKqJkw, 0, m, &cSlice_XkEKqJkw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xNaMc3Ik, 0, m, &cSlice_xNaMc3Ik_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uxpA3gMk, 0, m, &cSlice_uxpA3gMk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LhQsgP1m, 0, m, &cSlice_LhQsgP1m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Umc2WCKT, 0, m, &cSlice_Umc2WCKT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Bp5dgBwe, 0, m, &cSlice_Bp5dgBwe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2ZL8zx5k, 0, m, &cSlice_2ZL8zx5k_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3oopwPug, 0, m, &cSlice_3oopwPug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_beYTS8Z7, 0, m, &cSlice_beYTS8Z7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Ugw2pnl2, 0, m, &cSlice_Ugw2pnl2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_myQXaJ9w, 0, m, &cSlice_myQXaJ9w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_asfSVMjd, 0, m, &cSlice_asfSVMjd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0oCUYqe, 0, m, &cSlice_A0oCUYqe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nCuCkNV1, 0, m, &cSlice_nCuCkNV1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7Ie60Cpr, 0, m, &cSlice_7Ie60Cpr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oLQtpIEv, 0, m, &cSlice_oLQtpIEv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ac7QtmkK, 0, m, &cSlice_ac7QtmkK_sendMessage);
}

void Heavy_Echomatica::cMsg_PoHDkQcF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_On3iF5WU, 0, m, &cSlice_On3iF5WU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HwIv1oxD, 0, m, &cSlice_HwIv1oxD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_e6irjhH8, 0, m, &cSlice_e6irjhH8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SP8uV1LD, 0, m, &cSlice_SP8uV1LD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_caY6uI5q, 0, m, &cSlice_caY6uI5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uBPOxsVg, 0, m, &cSlice_uBPOxsVg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rgUZNaHd, 0, m, &cSlice_rgUZNaHd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nsNWXp0p, 0, m, &cSlice_nsNWXp0p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4NP7yDL8, 0, m, &cSlice_4NP7yDL8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iu9XBQMq, 0, m, &cSlice_iu9XBQMq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_53oXPvhc, 0, m, &cSlice_53oXPvhc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XkEKqJkw, 0, m, &cSlice_XkEKqJkw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xNaMc3Ik, 0, m, &cSlice_xNaMc3Ik_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uxpA3gMk, 0, m, &cSlice_uxpA3gMk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LhQsgP1m, 0, m, &cSlice_LhQsgP1m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Umc2WCKT, 0, m, &cSlice_Umc2WCKT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Bp5dgBwe, 0, m, &cSlice_Bp5dgBwe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2ZL8zx5k, 0, m, &cSlice_2ZL8zx5k_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3oopwPug, 0, m, &cSlice_3oopwPug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_beYTS8Z7, 0, m, &cSlice_beYTS8Z7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Ugw2pnl2, 0, m, &cSlice_Ugw2pnl2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_myQXaJ9w, 0, m, &cSlice_myQXaJ9w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_asfSVMjd, 0, m, &cSlice_asfSVMjd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0oCUYqe, 0, m, &cSlice_A0oCUYqe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nCuCkNV1, 0, m, &cSlice_nCuCkNV1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7Ie60Cpr, 0, m, &cSlice_7Ie60Cpr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oLQtpIEv, 0, m, &cSlice_oLQtpIEv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ac7QtmkK, 0, m, &cSlice_ac7QtmkK_sendMessage);
}

void Heavy_Echomatica::cMsg_TMEUix55_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_On3iF5WU, 0, m, &cSlice_On3iF5WU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HwIv1oxD, 0, m, &cSlice_HwIv1oxD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_e6irjhH8, 0, m, &cSlice_e6irjhH8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SP8uV1LD, 0, m, &cSlice_SP8uV1LD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_caY6uI5q, 0, m, &cSlice_caY6uI5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uBPOxsVg, 0, m, &cSlice_uBPOxsVg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rgUZNaHd, 0, m, &cSlice_rgUZNaHd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nsNWXp0p, 0, m, &cSlice_nsNWXp0p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4NP7yDL8, 0, m, &cSlice_4NP7yDL8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iu9XBQMq, 0, m, &cSlice_iu9XBQMq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_53oXPvhc, 0, m, &cSlice_53oXPvhc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XkEKqJkw, 0, m, &cSlice_XkEKqJkw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xNaMc3Ik, 0, m, &cSlice_xNaMc3Ik_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uxpA3gMk, 0, m, &cSlice_uxpA3gMk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LhQsgP1m, 0, m, &cSlice_LhQsgP1m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Umc2WCKT, 0, m, &cSlice_Umc2WCKT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Bp5dgBwe, 0, m, &cSlice_Bp5dgBwe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2ZL8zx5k, 0, m, &cSlice_2ZL8zx5k_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3oopwPug, 0, m, &cSlice_3oopwPug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_beYTS8Z7, 0, m, &cSlice_beYTS8Z7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Ugw2pnl2, 0, m, &cSlice_Ugw2pnl2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_myQXaJ9w, 0, m, &cSlice_myQXaJ9w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_asfSVMjd, 0, m, &cSlice_asfSVMjd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0oCUYqe, 0, m, &cSlice_A0oCUYqe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nCuCkNV1, 0, m, &cSlice_nCuCkNV1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7Ie60Cpr, 0, m, &cSlice_7Ie60Cpr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oLQtpIEv, 0, m, &cSlice_oLQtpIEv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ac7QtmkK, 0, m, &cSlice_ac7QtmkK_sendMessage);
}

void Heavy_Echomatica::cMsg_xMGBYWAB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_On3iF5WU, 0, m, &cSlice_On3iF5WU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HwIv1oxD, 0, m, &cSlice_HwIv1oxD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_e6irjhH8, 0, m, &cSlice_e6irjhH8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SP8uV1LD, 0, m, &cSlice_SP8uV1LD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_caY6uI5q, 0, m, &cSlice_caY6uI5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uBPOxsVg, 0, m, &cSlice_uBPOxsVg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rgUZNaHd, 0, m, &cSlice_rgUZNaHd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nsNWXp0p, 0, m, &cSlice_nsNWXp0p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4NP7yDL8, 0, m, &cSlice_4NP7yDL8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iu9XBQMq, 0, m, &cSlice_iu9XBQMq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_53oXPvhc, 0, m, &cSlice_53oXPvhc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XkEKqJkw, 0, m, &cSlice_XkEKqJkw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xNaMc3Ik, 0, m, &cSlice_xNaMc3Ik_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uxpA3gMk, 0, m, &cSlice_uxpA3gMk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LhQsgP1m, 0, m, &cSlice_LhQsgP1m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Umc2WCKT, 0, m, &cSlice_Umc2WCKT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Bp5dgBwe, 0, m, &cSlice_Bp5dgBwe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2ZL8zx5k, 0, m, &cSlice_2ZL8zx5k_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3oopwPug, 0, m, &cSlice_3oopwPug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_beYTS8Z7, 0, m, &cSlice_beYTS8Z7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Ugw2pnl2, 0, m, &cSlice_Ugw2pnl2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_myQXaJ9w, 0, m, &cSlice_myQXaJ9w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_asfSVMjd, 0, m, &cSlice_asfSVMjd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0oCUYqe, 0, m, &cSlice_A0oCUYqe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nCuCkNV1, 0, m, &cSlice_nCuCkNV1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7Ie60Cpr, 0, m, &cSlice_7Ie60Cpr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oLQtpIEv, 0, m, &cSlice_oLQtpIEv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ac7QtmkK, 0, m, &cSlice_ac7QtmkK_sendMessage);
}

void Heavy_Echomatica::cMsg_LDoaHPtR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_On3iF5WU, 0, m, &cSlice_On3iF5WU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HwIv1oxD, 0, m, &cSlice_HwIv1oxD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_e6irjhH8, 0, m, &cSlice_e6irjhH8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SP8uV1LD, 0, m, &cSlice_SP8uV1LD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_caY6uI5q, 0, m, &cSlice_caY6uI5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uBPOxsVg, 0, m, &cSlice_uBPOxsVg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rgUZNaHd, 0, m, &cSlice_rgUZNaHd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nsNWXp0p, 0, m, &cSlice_nsNWXp0p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4NP7yDL8, 0, m, &cSlice_4NP7yDL8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iu9XBQMq, 0, m, &cSlice_iu9XBQMq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_53oXPvhc, 0, m, &cSlice_53oXPvhc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XkEKqJkw, 0, m, &cSlice_XkEKqJkw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xNaMc3Ik, 0, m, &cSlice_xNaMc3Ik_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uxpA3gMk, 0, m, &cSlice_uxpA3gMk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LhQsgP1m, 0, m, &cSlice_LhQsgP1m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Umc2WCKT, 0, m, &cSlice_Umc2WCKT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Bp5dgBwe, 0, m, &cSlice_Bp5dgBwe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2ZL8zx5k, 0, m, &cSlice_2ZL8zx5k_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3oopwPug, 0, m, &cSlice_3oopwPug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_beYTS8Z7, 0, m, &cSlice_beYTS8Z7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Ugw2pnl2, 0, m, &cSlice_Ugw2pnl2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_myQXaJ9w, 0, m, &cSlice_myQXaJ9w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_asfSVMjd, 0, m, &cSlice_asfSVMjd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0oCUYqe, 0, m, &cSlice_A0oCUYqe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nCuCkNV1, 0, m, &cSlice_nCuCkNV1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7Ie60Cpr, 0, m, &cSlice_7Ie60Cpr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oLQtpIEv, 0, m, &cSlice_oLQtpIEv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ac7QtmkK, 0, m, &cSlice_ac7QtmkK_sendMessage);
}

void Heavy_Echomatica::cMsg_CuwHxCnO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_On3iF5WU, 0, m, &cSlice_On3iF5WU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HwIv1oxD, 0, m, &cSlice_HwIv1oxD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_e6irjhH8, 0, m, &cSlice_e6irjhH8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SP8uV1LD, 0, m, &cSlice_SP8uV1LD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_caY6uI5q, 0, m, &cSlice_caY6uI5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uBPOxsVg, 0, m, &cSlice_uBPOxsVg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rgUZNaHd, 0, m, &cSlice_rgUZNaHd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nsNWXp0p, 0, m, &cSlice_nsNWXp0p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4NP7yDL8, 0, m, &cSlice_4NP7yDL8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iu9XBQMq, 0, m, &cSlice_iu9XBQMq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_53oXPvhc, 0, m, &cSlice_53oXPvhc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XkEKqJkw, 0, m, &cSlice_XkEKqJkw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xNaMc3Ik, 0, m, &cSlice_xNaMc3Ik_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uxpA3gMk, 0, m, &cSlice_uxpA3gMk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LhQsgP1m, 0, m, &cSlice_LhQsgP1m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Umc2WCKT, 0, m, &cSlice_Umc2WCKT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Bp5dgBwe, 0, m, &cSlice_Bp5dgBwe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2ZL8zx5k, 0, m, &cSlice_2ZL8zx5k_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3oopwPug, 0, m, &cSlice_3oopwPug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_beYTS8Z7, 0, m, &cSlice_beYTS8Z7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Ugw2pnl2, 0, m, &cSlice_Ugw2pnl2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_myQXaJ9w, 0, m, &cSlice_myQXaJ9w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_asfSVMjd, 0, m, &cSlice_asfSVMjd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0oCUYqe, 0, m, &cSlice_A0oCUYqe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nCuCkNV1, 0, m, &cSlice_nCuCkNV1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7Ie60Cpr, 0, m, &cSlice_7Ie60Cpr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oLQtpIEv, 0, m, &cSlice_oLQtpIEv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ac7QtmkK, 0, m, &cSlice_ac7QtmkK_sendMessage);
}

void Heavy_Echomatica::cMsg_8FspfEvT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_On3iF5WU, 0, m, &cSlice_On3iF5WU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HwIv1oxD, 0, m, &cSlice_HwIv1oxD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_e6irjhH8, 0, m, &cSlice_e6irjhH8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SP8uV1LD, 0, m, &cSlice_SP8uV1LD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_caY6uI5q, 0, m, &cSlice_caY6uI5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uBPOxsVg, 0, m, &cSlice_uBPOxsVg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rgUZNaHd, 0, m, &cSlice_rgUZNaHd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nsNWXp0p, 0, m, &cSlice_nsNWXp0p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4NP7yDL8, 0, m, &cSlice_4NP7yDL8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iu9XBQMq, 0, m, &cSlice_iu9XBQMq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_53oXPvhc, 0, m, &cSlice_53oXPvhc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XkEKqJkw, 0, m, &cSlice_XkEKqJkw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xNaMc3Ik, 0, m, &cSlice_xNaMc3Ik_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uxpA3gMk, 0, m, &cSlice_uxpA3gMk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LhQsgP1m, 0, m, &cSlice_LhQsgP1m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Umc2WCKT, 0, m, &cSlice_Umc2WCKT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Bp5dgBwe, 0, m, &cSlice_Bp5dgBwe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2ZL8zx5k, 0, m, &cSlice_2ZL8zx5k_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3oopwPug, 0, m, &cSlice_3oopwPug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_beYTS8Z7, 0, m, &cSlice_beYTS8Z7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Ugw2pnl2, 0, m, &cSlice_Ugw2pnl2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_myQXaJ9w, 0, m, &cSlice_myQXaJ9w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_asfSVMjd, 0, m, &cSlice_asfSVMjd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0oCUYqe, 0, m, &cSlice_A0oCUYqe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nCuCkNV1, 0, m, &cSlice_nCuCkNV1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7Ie60Cpr, 0, m, &cSlice_7Ie60Cpr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oLQtpIEv, 0, m, &cSlice_oLQtpIEv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ac7QtmkK, 0, m, &cSlice_ac7QtmkK_sendMessage);
}

void Heavy_Echomatica::cMsg_990ug3SP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_On3iF5WU, 0, m, &cSlice_On3iF5WU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HwIv1oxD, 0, m, &cSlice_HwIv1oxD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_e6irjhH8, 0, m, &cSlice_e6irjhH8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SP8uV1LD, 0, m, &cSlice_SP8uV1LD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_caY6uI5q, 0, m, &cSlice_caY6uI5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uBPOxsVg, 0, m, &cSlice_uBPOxsVg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rgUZNaHd, 0, m, &cSlice_rgUZNaHd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nsNWXp0p, 0, m, &cSlice_nsNWXp0p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4NP7yDL8, 0, m, &cSlice_4NP7yDL8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iu9XBQMq, 0, m, &cSlice_iu9XBQMq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_53oXPvhc, 0, m, &cSlice_53oXPvhc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XkEKqJkw, 0, m, &cSlice_XkEKqJkw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xNaMc3Ik, 0, m, &cSlice_xNaMc3Ik_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uxpA3gMk, 0, m, &cSlice_uxpA3gMk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LhQsgP1m, 0, m, &cSlice_LhQsgP1m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Umc2WCKT, 0, m, &cSlice_Umc2WCKT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Bp5dgBwe, 0, m, &cSlice_Bp5dgBwe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2ZL8zx5k, 0, m, &cSlice_2ZL8zx5k_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3oopwPug, 0, m, &cSlice_3oopwPug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_beYTS8Z7, 0, m, &cSlice_beYTS8Z7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Ugw2pnl2, 0, m, &cSlice_Ugw2pnl2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_myQXaJ9w, 0, m, &cSlice_myQXaJ9w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_asfSVMjd, 0, m, &cSlice_asfSVMjd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0oCUYqe, 0, m, &cSlice_A0oCUYqe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nCuCkNV1, 0, m, &cSlice_nCuCkNV1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7Ie60Cpr, 0, m, &cSlice_7Ie60Cpr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oLQtpIEv, 0, m, &cSlice_oLQtpIEv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ac7QtmkK, 0, m, &cSlice_ac7QtmkK_sendMessage);
}

void Heavy_Echomatica::cMsg_64AFIXul_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_On3iF5WU, 0, m, &cSlice_On3iF5WU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HwIv1oxD, 0, m, &cSlice_HwIv1oxD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_e6irjhH8, 0, m, &cSlice_e6irjhH8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SP8uV1LD, 0, m, &cSlice_SP8uV1LD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_caY6uI5q, 0, m, &cSlice_caY6uI5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uBPOxsVg, 0, m, &cSlice_uBPOxsVg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rgUZNaHd, 0, m, &cSlice_rgUZNaHd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nsNWXp0p, 0, m, &cSlice_nsNWXp0p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4NP7yDL8, 0, m, &cSlice_4NP7yDL8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iu9XBQMq, 0, m, &cSlice_iu9XBQMq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_53oXPvhc, 0, m, &cSlice_53oXPvhc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XkEKqJkw, 0, m, &cSlice_XkEKqJkw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xNaMc3Ik, 0, m, &cSlice_xNaMc3Ik_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uxpA3gMk, 0, m, &cSlice_uxpA3gMk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LhQsgP1m, 0, m, &cSlice_LhQsgP1m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Umc2WCKT, 0, m, &cSlice_Umc2WCKT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Bp5dgBwe, 0, m, &cSlice_Bp5dgBwe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2ZL8zx5k, 0, m, &cSlice_2ZL8zx5k_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3oopwPug, 0, m, &cSlice_3oopwPug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_beYTS8Z7, 0, m, &cSlice_beYTS8Z7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Ugw2pnl2, 0, m, &cSlice_Ugw2pnl2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_myQXaJ9w, 0, m, &cSlice_myQXaJ9w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_asfSVMjd, 0, m, &cSlice_asfSVMjd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0oCUYqe, 0, m, &cSlice_A0oCUYqe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nCuCkNV1, 0, m, &cSlice_nCuCkNV1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7Ie60Cpr, 0, m, &cSlice_7Ie60Cpr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oLQtpIEv, 0, m, &cSlice_oLQtpIEv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ac7QtmkK, 0, m, &cSlice_ac7QtmkK_sendMessage);
}

void Heavy_Echomatica::cMsg_uNNqaUZu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_On3iF5WU, 0, m, &cSlice_On3iF5WU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HwIv1oxD, 0, m, &cSlice_HwIv1oxD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_e6irjhH8, 0, m, &cSlice_e6irjhH8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SP8uV1LD, 0, m, &cSlice_SP8uV1LD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_caY6uI5q, 0, m, &cSlice_caY6uI5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uBPOxsVg, 0, m, &cSlice_uBPOxsVg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rgUZNaHd, 0, m, &cSlice_rgUZNaHd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nsNWXp0p, 0, m, &cSlice_nsNWXp0p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4NP7yDL8, 0, m, &cSlice_4NP7yDL8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iu9XBQMq, 0, m, &cSlice_iu9XBQMq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_53oXPvhc, 0, m, &cSlice_53oXPvhc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XkEKqJkw, 0, m, &cSlice_XkEKqJkw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xNaMc3Ik, 0, m, &cSlice_xNaMc3Ik_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uxpA3gMk, 0, m, &cSlice_uxpA3gMk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LhQsgP1m, 0, m, &cSlice_LhQsgP1m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Umc2WCKT, 0, m, &cSlice_Umc2WCKT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Bp5dgBwe, 0, m, &cSlice_Bp5dgBwe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2ZL8zx5k, 0, m, &cSlice_2ZL8zx5k_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3oopwPug, 0, m, &cSlice_3oopwPug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_beYTS8Z7, 0, m, &cSlice_beYTS8Z7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Ugw2pnl2, 0, m, &cSlice_Ugw2pnl2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_myQXaJ9w, 0, m, &cSlice_myQXaJ9w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_asfSVMjd, 0, m, &cSlice_asfSVMjd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0oCUYqe, 0, m, &cSlice_A0oCUYqe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nCuCkNV1, 0, m, &cSlice_nCuCkNV1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7Ie60Cpr, 0, m, &cSlice_7Ie60Cpr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oLQtpIEv, 0, m, &cSlice_oLQtpIEv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ac7QtmkK, 0, m, &cSlice_ac7QtmkK_sendMessage);
}

void Heavy_Echomatica::cMsg_DsNrYHQw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_On3iF5WU, 0, m, &cSlice_On3iF5WU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HwIv1oxD, 0, m, &cSlice_HwIv1oxD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_e6irjhH8, 0, m, &cSlice_e6irjhH8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SP8uV1LD, 0, m, &cSlice_SP8uV1LD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_caY6uI5q, 0, m, &cSlice_caY6uI5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uBPOxsVg, 0, m, &cSlice_uBPOxsVg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rgUZNaHd, 0, m, &cSlice_rgUZNaHd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nsNWXp0p, 0, m, &cSlice_nsNWXp0p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4NP7yDL8, 0, m, &cSlice_4NP7yDL8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iu9XBQMq, 0, m, &cSlice_iu9XBQMq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_53oXPvhc, 0, m, &cSlice_53oXPvhc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XkEKqJkw, 0, m, &cSlice_XkEKqJkw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xNaMc3Ik, 0, m, &cSlice_xNaMc3Ik_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uxpA3gMk, 0, m, &cSlice_uxpA3gMk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LhQsgP1m, 0, m, &cSlice_LhQsgP1m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Umc2WCKT, 0, m, &cSlice_Umc2WCKT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Bp5dgBwe, 0, m, &cSlice_Bp5dgBwe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2ZL8zx5k, 0, m, &cSlice_2ZL8zx5k_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3oopwPug, 0, m, &cSlice_3oopwPug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_beYTS8Z7, 0, m, &cSlice_beYTS8Z7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Ugw2pnl2, 0, m, &cSlice_Ugw2pnl2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_myQXaJ9w, 0, m, &cSlice_myQXaJ9w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_asfSVMjd, 0, m, &cSlice_asfSVMjd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0oCUYqe, 0, m, &cSlice_A0oCUYqe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nCuCkNV1, 0, m, &cSlice_nCuCkNV1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7Ie60Cpr, 0, m, &cSlice_7Ie60Cpr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oLQtpIEv, 0, m, &cSlice_oLQtpIEv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ac7QtmkK, 0, m, &cSlice_ac7QtmkK_sendMessage);
}

void Heavy_Echomatica::cMsg_S2c5SY0U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_On3iF5WU, 0, m, &cSlice_On3iF5WU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HwIv1oxD, 0, m, &cSlice_HwIv1oxD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_e6irjhH8, 0, m, &cSlice_e6irjhH8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SP8uV1LD, 0, m, &cSlice_SP8uV1LD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_caY6uI5q, 0, m, &cSlice_caY6uI5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uBPOxsVg, 0, m, &cSlice_uBPOxsVg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rgUZNaHd, 0, m, &cSlice_rgUZNaHd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nsNWXp0p, 0, m, &cSlice_nsNWXp0p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4NP7yDL8, 0, m, &cSlice_4NP7yDL8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iu9XBQMq, 0, m, &cSlice_iu9XBQMq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_53oXPvhc, 0, m, &cSlice_53oXPvhc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XkEKqJkw, 0, m, &cSlice_XkEKqJkw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xNaMc3Ik, 0, m, &cSlice_xNaMc3Ik_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uxpA3gMk, 0, m, &cSlice_uxpA3gMk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LhQsgP1m, 0, m, &cSlice_LhQsgP1m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Umc2WCKT, 0, m, &cSlice_Umc2WCKT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Bp5dgBwe, 0, m, &cSlice_Bp5dgBwe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2ZL8zx5k, 0, m, &cSlice_2ZL8zx5k_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3oopwPug, 0, m, &cSlice_3oopwPug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_beYTS8Z7, 0, m, &cSlice_beYTS8Z7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Ugw2pnl2, 0, m, &cSlice_Ugw2pnl2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_myQXaJ9w, 0, m, &cSlice_myQXaJ9w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_asfSVMjd, 0, m, &cSlice_asfSVMjd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0oCUYqe, 0, m, &cSlice_A0oCUYqe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nCuCkNV1, 0, m, &cSlice_nCuCkNV1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7Ie60Cpr, 0, m, &cSlice_7Ie60Cpr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oLQtpIEv, 0, m, &cSlice_oLQtpIEv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ac7QtmkK, 0, m, &cSlice_ac7QtmkK_sendMessage);
}

void Heavy_Echomatica::cMsg_GjUP8tKy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_On3iF5WU, 0, m, &cSlice_On3iF5WU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HwIv1oxD, 0, m, &cSlice_HwIv1oxD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_e6irjhH8, 0, m, &cSlice_e6irjhH8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SP8uV1LD, 0, m, &cSlice_SP8uV1LD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_caY6uI5q, 0, m, &cSlice_caY6uI5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uBPOxsVg, 0, m, &cSlice_uBPOxsVg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rgUZNaHd, 0, m, &cSlice_rgUZNaHd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nsNWXp0p, 0, m, &cSlice_nsNWXp0p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4NP7yDL8, 0, m, &cSlice_4NP7yDL8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iu9XBQMq, 0, m, &cSlice_iu9XBQMq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_53oXPvhc, 0, m, &cSlice_53oXPvhc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XkEKqJkw, 0, m, &cSlice_XkEKqJkw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xNaMc3Ik, 0, m, &cSlice_xNaMc3Ik_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uxpA3gMk, 0, m, &cSlice_uxpA3gMk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LhQsgP1m, 0, m, &cSlice_LhQsgP1m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Umc2WCKT, 0, m, &cSlice_Umc2WCKT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Bp5dgBwe, 0, m, &cSlice_Bp5dgBwe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2ZL8zx5k, 0, m, &cSlice_2ZL8zx5k_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3oopwPug, 0, m, &cSlice_3oopwPug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_beYTS8Z7, 0, m, &cSlice_beYTS8Z7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Ugw2pnl2, 0, m, &cSlice_Ugw2pnl2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_myQXaJ9w, 0, m, &cSlice_myQXaJ9w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_asfSVMjd, 0, m, &cSlice_asfSVMjd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0oCUYqe, 0, m, &cSlice_A0oCUYqe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nCuCkNV1, 0, m, &cSlice_nCuCkNV1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7Ie60Cpr, 0, m, &cSlice_7Ie60Cpr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oLQtpIEv, 0, m, &cSlice_oLQtpIEv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ac7QtmkK, 0, m, &cSlice_ac7QtmkK_sendMessage);
}

void Heavy_Echomatica::cMsg_gM8mSzfD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_On3iF5WU, 0, m, &cSlice_On3iF5WU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HwIv1oxD, 0, m, &cSlice_HwIv1oxD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_e6irjhH8, 0, m, &cSlice_e6irjhH8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SP8uV1LD, 0, m, &cSlice_SP8uV1LD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_caY6uI5q, 0, m, &cSlice_caY6uI5q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uBPOxsVg, 0, m, &cSlice_uBPOxsVg_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rgUZNaHd, 0, m, &cSlice_rgUZNaHd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nsNWXp0p, 0, m, &cSlice_nsNWXp0p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_4NP7yDL8, 0, m, &cSlice_4NP7yDL8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iu9XBQMq, 0, m, &cSlice_iu9XBQMq_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_53oXPvhc, 0, m, &cSlice_53oXPvhc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_XkEKqJkw, 0, m, &cSlice_XkEKqJkw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xNaMc3Ik, 0, m, &cSlice_xNaMc3Ik_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uxpA3gMk, 0, m, &cSlice_uxpA3gMk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LhQsgP1m, 0, m, &cSlice_LhQsgP1m_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Umc2WCKT, 0, m, &cSlice_Umc2WCKT_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Bp5dgBwe, 0, m, &cSlice_Bp5dgBwe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_2ZL8zx5k, 0, m, &cSlice_2ZL8zx5k_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3oopwPug, 0, m, &cSlice_3oopwPug_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_beYTS8Z7, 0, m, &cSlice_beYTS8Z7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Ugw2pnl2, 0, m, &cSlice_Ugw2pnl2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_myQXaJ9w, 0, m, &cSlice_myQXaJ9w_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_asfSVMjd, 0, m, &cSlice_asfSVMjd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_A0oCUYqe, 0, m, &cSlice_A0oCUYqe_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_nCuCkNV1, 0, m, &cSlice_nCuCkNV1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_7Ie60Cpr, 0, m, &cSlice_7Ie60Cpr_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oLQtpIEv, 0, m, &cSlice_oLQtpIEv_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ac7QtmkK, 0, m, &cSlice_ac7QtmkK_sendMessage);
}

void Heavy_Echomatica::cMsg_lNYKTXEF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_4yqVZwsX_sendMessage);
}

void Heavy_Echomatica::cSystem_4yqVZwsX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_25ZjNOgB_sendMessage);
}

void Heavy_Echomatica::cVar_7YcE2dCu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pEqtThwf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_gLAVWuXQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_EC3xys1T_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_nAHm7sbF, m);
}

void Heavy_Echomatica::cBinop_25ZjNOgB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_HRbcrLfr, m);
}

void Heavy_Echomatica::cMsg_pEqtThwf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_gLAVWuXQ_sendMessage);
}

void Heavy_Echomatica::cBinop_EC3xys1T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_S3LtCZEo, m);
}

void Heavy_Echomatica::cMsg_1VvLQuc0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_rE1iWptz_sendMessage);
}

void Heavy_Echomatica::cSystem_rE1iWptz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_jNOSqFbY_sendMessage);
}

void Heavy_Echomatica::cVar_20dGcDqU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Xh2ZknSx_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_3ysmEwF2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_BfMHYyvk_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_qT1RQDjS, m);
}

void Heavy_Echomatica::cBinop_jNOSqFbY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_iEp0DvCw, m);
}

void Heavy_Echomatica::cMsg_Xh2ZknSx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_3ysmEwF2_sendMessage);
}

void Heavy_Echomatica::cBinop_BfMHYyvk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_jx54f5Jd, m);
}

void Heavy_Echomatica::cVar_k9pVdNuM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_T2zcebCB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_l6U0YiAv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_b2yNGa7E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_3mr9UbZ2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_qgwGpJJJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_r3xYtgXX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_u3euG7lo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_gqklJEyb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_tO3ThWCB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_PoqrBt6u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_rGNJVHwt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cMsg_ntSnY8pl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_RZWn5lnr_sendMessage);
}

void Heavy_Echomatica::cSystem_RZWn5lnr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_t3my4Ebq_sendMessage);
}

void Heavy_Echomatica::cDelay_48mBitFY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_48mBitFY, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_P2Tjfbyq, 0, m, &cDelay_P2Tjfbyq_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_48mBitFY, 0, m, &cDelay_48mBitFY_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_edxKGKOZ, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_P2Tjfbyq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_P2Tjfbyq, m);
  cMsg_pcTpbDgn_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_6snCNyP9_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_HIaMzobG_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_mQvDDPHb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wWswEvxy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_KbsQZC6I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FpiHlcMP_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_48mBitFY, 2, m, &cDelay_48mBitFY_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pHqgvpHQ_sendMessage);
}

void Heavy_Echomatica::cMsg_wWswEvxy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_KbsQZC6I, 0, m, &hTable_KbsQZC6I_sendMessage);
}

void Heavy_Echomatica::cBinop_t3my4Ebq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5000.0f, 0, m, &cBinop_mQvDDPHb_sendMessage);
}

void Heavy_Echomatica::cMsg_pcTpbDgn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_KbsQZC6I, 0, m, &hTable_KbsQZC6I_sendMessage);
}

void Heavy_Echomatica::cCast_pHqgvpHQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_48mBitFY, 0, m, &cDelay_48mBitFY_sendMessage);
}

void Heavy_Echomatica::cMsg_FpiHlcMP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_P2Tjfbyq, 2, m, &cDelay_P2Tjfbyq_sendMessage);
}

void Heavy_Echomatica::cMsg_HIaMzobG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_edxKGKOZ, 1, m, NULL);
}

void Heavy_Echomatica::cPack_VhO5KuRD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_71BUza6o, 0, m, NULL);
}

void Heavy_Echomatica::cPack_vwi8f8AQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_cEE2Thq5, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_pFZEiW6P, 0, m, &cVar_pFZEiW6P_sendMessage);
}

void Heavy_Echomatica::cPack_ro6njlgN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_lCk6NFfm, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_15b18hQE, 0, m, &cVar_15b18hQE_sendMessage);
}

void Heavy_Echomatica::cPack_ZLLVaSCn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_81fksddM, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_goct6OBS, 0, m, &cVar_goct6OBS_sendMessage);
}

void Heavy_Echomatica::cPack_uU3mPzRv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_reQtjVXh, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_sonClDT8, 0, m, &cVar_sonClDT8_sendMessage);
}

void Heavy_Echomatica::cPack_uhHWcPZV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_XyZsgHQy, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_Op5WqUgu, 0, m, &cVar_Op5WqUgu_sendMessage);
}

void Heavy_Echomatica::cPack_sizQutd3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_3crdJwLz, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_Z6AKviGV, 0, m, &cVar_Z6AKviGV_sendMessage);
}

void Heavy_Echomatica::cVar_3QcZFRyZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aPouncKP, HV_BINOP_MULTIPLY, 0, m, &cBinop_aPouncKP_sendMessage);
}

void Heavy_Echomatica::cMsg_oYjtL7J5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_eamAbpre_sendMessage);
}

void Heavy_Echomatica::cSystem_eamAbpre_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ti5cSi8Z_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_aPouncKP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_DnywvhFK_sendMessage);
}

void Heavy_Echomatica::cBinop_0r8POY5X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aPouncKP, HV_BINOP_MULTIPLY, 1, m, &cBinop_aPouncKP_sendMessage);
}

void Heavy_Echomatica::cMsg_ti5cSi8Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_0r8POY5X_sendMessage);
}

void Heavy_Echomatica::cBinop_DnywvhFK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_xdzsHdB9_sendMessage);
}

void Heavy_Echomatica::cBinop_xdzsHdB9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_QAvr3hwW_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_QcQSmtTQ, m);
}

void Heavy_Echomatica::cBinop_QAvr3hwW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_MEAuaK5W, m);
}

void Heavy_Echomatica::cSlice_On3iF5WU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_qaMkGzS2_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_HwIv1oxD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_TLFbHWn4_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_e6irjhH8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_xF1phSby_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_SP8uV1LD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_0Pvh8F4A_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_caY6uI5q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_GvhZGDjX_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_uBPOxsVg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_rnwEaIpT_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_rgUZNaHd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_H1UMJYFH_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_nsNWXp0p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_vG797XVM_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_4NP7yDL8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Pa0FbrMu_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_iu9XBQMq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_jxQpEPKE_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_53oXPvhc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_TNtmbm5A_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_XkEKqJkw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_D23KPdtu_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_xNaMc3Ik_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_4Vel5Kya_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_uxpA3gMk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_pjK0rdox_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_LhQsgP1m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_J8zBmKgd_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_Umc2WCKT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_uu9mY5kD_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_Bp5dgBwe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_CfQ3spEF_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_2ZL8zx5k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_F1EHWfEm_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_3oopwPug_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_WoorBXRL_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_beYTS8Z7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_S6SDgGFT_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_Ugw2pnl2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_KAXjYPcR_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_myQXaJ9w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_mc5xW7bS_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_asfSVMjd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ijCyU9Wk_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_A0oCUYqe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_npZehxoM_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_nCuCkNV1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_J6hWUhSW_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_7Ie60Cpr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_LHBCbGIn_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_oLQtpIEv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_s0w0FZmQ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_ac7QtmkK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_t3qQB4Yv_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_CAIOQ8bt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_elXSLUaV_sendMessage);
}

void Heavy_Echomatica::cBinop_elXSLUaV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_ohp4KU15_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_ZEZ5MBwn_sendMessage);
}

void Heavy_Echomatica::cVar_jbN6YlAY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_tPqSwd9u_sendMessage);
}

void Heavy_Echomatica::cMsg_qePnM5PA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_wBRSWOUK_sendMessage);
}

void Heavy_Echomatica::cSystem_wBRSWOUK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_K9AxWuyi, HV_BINOP_DIVIDE, 1, m, &cBinop_K9AxWuyi_sendMessage);
}

void Heavy_Echomatica::cBinop_ohp4KU15_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_uHQM5rA6_sendMessage);
}

void Heavy_Echomatica::cBinop_uHQM5rA6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_4c17RRi2, m);
}

void Heavy_Echomatica::cMsg_bLOqstYN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_WQKE0jJ4_sendMessage);
}

void Heavy_Echomatica::cBinop_WQKE0jJ4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_CAIOQ8bt_sendMessage);
}

void Heavy_Echomatica::cBinop_ZEZ5MBwn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_a75mUabP, m);
}

void Heavy_Echomatica::cBinop_tPqSwd9u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_xXkJpbwi_sendMessage);
}

void Heavy_Echomatica::cBinop_xXkJpbwi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_K9AxWuyi, HV_BINOP_DIVIDE, 0, m, &cBinop_K9AxWuyi_sendMessage);
}

void Heavy_Echomatica::cBinop_K9AxWuyi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bLOqstYN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_9FhyhHCY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_RwDFiHer_sendMessage);
}

void Heavy_Echomatica::cBinop_RwDFiHer_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_JRklhCYj_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_LCq8B32X_sendMessage);
}

void Heavy_Echomatica::cVar_xqfJxmG4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_saeDMTEi_sendMessage);
}

void Heavy_Echomatica::cMsg_zCXyA18H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_gJbWZiag_sendMessage);
}

void Heavy_Echomatica::cSystem_gJbWZiag_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QwpynAuu, HV_BINOP_DIVIDE, 1, m, &cBinop_QwpynAuu_sendMessage);
}

void Heavy_Echomatica::cBinop_JRklhCYj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_3xxgheYU_sendMessage);
}

void Heavy_Echomatica::cBinop_3xxgheYU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_XxKdqnOx, m);
}

void Heavy_Echomatica::cMsg_4K3tXmT3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_ttUCFlJ3_sendMessage);
}

void Heavy_Echomatica::cBinop_ttUCFlJ3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_9FhyhHCY_sendMessage);
}

void Heavy_Echomatica::cBinop_LCq8B32X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_c4MDNjiM, m);
}

void Heavy_Echomatica::cBinop_saeDMTEi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_3uWHdoyI_sendMessage);
}

void Heavy_Echomatica::cBinop_3uWHdoyI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QwpynAuu, HV_BINOP_DIVIDE, 0, m, &cBinop_QwpynAuu_sendMessage);
}

void Heavy_Echomatica::cBinop_QwpynAuu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4K3tXmT3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_ckwFXDDs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_zgDZDfVu_sendMessage);
}

void Heavy_Echomatica::cBinop_zgDZDfVu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_EfNgGN6g_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_CfAKeNcI_sendMessage);
}

void Heavy_Echomatica::cVar_yD9btvbq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_ZoZ9KZCf_sendMessage);
}

void Heavy_Echomatica::cMsg_E9VOzwLP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Y1MeYYkD_sendMessage);
}

void Heavy_Echomatica::cSystem_Y1MeYYkD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HSmvlEdR, HV_BINOP_DIVIDE, 1, m, &cBinop_HSmvlEdR_sendMessage);
}

void Heavy_Echomatica::cBinop_EfNgGN6g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_zSZRg2Yd_sendMessage);
}

void Heavy_Echomatica::cBinop_zSZRg2Yd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_gpTnj9zR, m);
}

void Heavy_Echomatica::cMsg_x4bu8WPq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_nzSjZ5He_sendMessage);
}

void Heavy_Echomatica::cBinop_nzSjZ5He_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_ckwFXDDs_sendMessage);
}

void Heavy_Echomatica::cBinop_CfAKeNcI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_7ZuW4b3L, m);
}

void Heavy_Echomatica::cBinop_ZoZ9KZCf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_N3Nr4IjL_sendMessage);
}

void Heavy_Echomatica::cBinop_N3Nr4IjL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HSmvlEdR, HV_BINOP_DIVIDE, 0, m, &cBinop_HSmvlEdR_sendMessage);
}

void Heavy_Echomatica::cBinop_HSmvlEdR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_x4bu8WPq_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_haZveYMB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_h7DLUnKc, HV_BINOP_MULTIPLY, 0, m, &cBinop_h7DLUnKc_sendMessage);
}

void Heavy_Echomatica::cMsg_SrUYDLYM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BQRFF8pY_sendMessage);
}

void Heavy_Echomatica::cSystem_BQRFF8pY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rEL0bOrj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_h7DLUnKc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_MfHG8fpV_sendMessage);
}

void Heavy_Echomatica::cBinop_tBvC3aTu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_h7DLUnKc, HV_BINOP_MULTIPLY, 1, m, &cBinop_h7DLUnKc_sendMessage);
}

void Heavy_Echomatica::cMsg_rEL0bOrj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_tBvC3aTu_sendMessage);
}

void Heavy_Echomatica::cBinop_MfHG8fpV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_p5mU2tr3_sendMessage);
}

void Heavy_Echomatica::cBinop_p5mU2tr3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_ql9NTHc0_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_AH5qt4dC, m);
}

void Heavy_Echomatica::cBinop_ql9NTHc0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_FZ7OxcYK, m);
}

void Heavy_Echomatica::cVar_yKMBNzRk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gWKDHnMO, HV_BINOP_MULTIPLY, 0, m, &cBinop_gWKDHnMO_sendMessage);
}

void Heavy_Echomatica::cMsg_El6eyj8g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_HDyqz09X_sendMessage);
}

void Heavy_Echomatica::cSystem_HDyqz09X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pBA9oSOO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_gWKDHnMO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_uMDZetuo_sendMessage);
}

void Heavy_Echomatica::cBinop_znt76Pfo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gWKDHnMO, HV_BINOP_MULTIPLY, 1, m, &cBinop_gWKDHnMO_sendMessage);
}

void Heavy_Echomatica::cMsg_pBA9oSOO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_znt76Pfo_sendMessage);
}

void Heavy_Echomatica::cBinop_uMDZetuo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_WHjWynMQ_sendMessage);
}

void Heavy_Echomatica::cBinop_WHjWynMQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_dnh5gKVS_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_YIHO2vB1, m);
}

void Heavy_Echomatica::cBinop_dnh5gKVS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_gDkzLYc7, m);
}

void Heavy_Echomatica::cVar_vDxGvGF2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nHmoqqiO, HV_BINOP_MULTIPLY, 0, m, &cBinop_nHmoqqiO_sendMessage);
}

void Heavy_Echomatica::cMsg_P1kYlCY7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_dVpf4Wms_sendMessage);
}

void Heavy_Echomatica::cSystem_dVpf4Wms_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vUfnzHSV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_nHmoqqiO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_G8a2eEKC_sendMessage);
}

void Heavy_Echomatica::cBinop_1iLyhFYY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nHmoqqiO, HV_BINOP_MULTIPLY, 1, m, &cBinop_nHmoqqiO_sendMessage);
}

void Heavy_Echomatica::cMsg_vUfnzHSV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_1iLyhFYY_sendMessage);
}

void Heavy_Echomatica::cBinop_G8a2eEKC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_xIZrksHS_sendMessage);
}

void Heavy_Echomatica::cBinop_xIZrksHS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_6x9mJxaM_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_8JHkej1G, m);
}

void Heavy_Echomatica::cBinop_6x9mJxaM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_sFkaTIaW, m);
}

void Heavy_Echomatica::cMsg_BxNpvBc4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_iB0WqHFI_sendMessage);
}

void Heavy_Echomatica::cSystem_iB0WqHFI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yCHAcDHD, HV_BINOP_DIVIDE, 1, m, &cBinop_yCHAcDHD_sendMessage);
}

void Heavy_Echomatica::cVar_Co31oJsU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_vlZJiTKL_sendMessage);
}

void Heavy_Echomatica::cVar_Knb31ErN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.001f, 0, m, &cBinop_2pd9Rgk3_sendMessage);
}

void Heavy_Echomatica::cUnop_PNDG3rJF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_XCxgF3lG_sendMessage);
}

void Heavy_Echomatica::cBinop_yCHAcDHD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BcM7w38S, HV_BINOP_MULTIPLY, 1, m, &cBinop_BcM7w38S_sendMessage);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_PNDG3rJF_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_9tHC2cC1, HV_BINOP_DIVIDE, 0, m, &cBinop_9tHC2cC1_sendMessage);
}

void Heavy_Echomatica::cBinop_vlZJiTKL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yCHAcDHD, HV_BINOP_DIVIDE, 0, m, &cBinop_yCHAcDHD_sendMessage);
}

void Heavy_Echomatica::cBinop_9tHC2cC1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_9GOp9JZK_sendMessage);
}

void Heavy_Echomatica::cBinop_wGgaFKDC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_kbBV6nxm_sendMessage);
}

void Heavy_Echomatica::cBinop_kbBV6nxm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_FVMyEH0O_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_d8iighyK, HV_BINOP_MULTIPLY, 0, m, &cBinop_d8iighyK_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_BcM7w38S, HV_BINOP_MULTIPLY, 0, m, &cBinop_BcM7w38S_sendMessage);
}

void Heavy_Echomatica::cBinop_XCxgF3lG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_d8iighyK, HV_BINOP_MULTIPLY, 1, m, &cBinop_d8iighyK_sendMessage);
}

void Heavy_Echomatica::cBinop_d8iighyK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_cIRXGT1u_sendMessage);
}

void Heavy_Echomatica::cCast_uDPvBy6Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Co31oJsU, 0, m, &cVar_Co31oJsU_sendMessage);
}

void Heavy_Echomatica::cBinop_UoAJNqRD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_BK2JvnpV_sendMessage);
}

void Heavy_Echomatica::cBinop_BK2JvnpV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_9bcYGL8N, 5, m);
}

void Heavy_Echomatica::cBinop_cIRXGT1u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_9bcYGL8N, 4, m);
}

void Heavy_Echomatica::cBinop_O4XXAnVP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wc5ZlQ8K, HV_BINOP_MULTIPLY, 0, m, &cBinop_wc5ZlQ8K_sendMessage);
}

void Heavy_Echomatica::cBinop_BcM7w38S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ki1zrNGe, HV_BINOP_ADD, 1, m, &cBinop_ki1zrNGe_sendMessage);
}

void Heavy_Echomatica::cBinop_FVMyEH0O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_UoAJNqRD_sendMessage);
}

void Heavy_Echomatica::cBinop_ki1zrNGe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wc5ZlQ8K, HV_BINOP_MULTIPLY, 1, m, &cBinop_wc5ZlQ8K_sendMessage);
}

void Heavy_Echomatica::cBinop_wc5ZlQ8K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_9bcYGL8N, 1, m);
}

void Heavy_Echomatica::cBinop_2pd9Rgk3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9tHC2cC1, HV_BINOP_DIVIDE, 1, m, &cBinop_9tHC2cC1_sendMessage);
}

void Heavy_Echomatica::cBinop_9GOp9JZK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_wGgaFKDC_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ki1zrNGe, HV_BINOP_ADD, 0, m, &cBinop_ki1zrNGe_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_O4XXAnVP_sendMessage);
}

void Heavy_Echomatica::cVar_pFZEiW6P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_15b18hQE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_Z6AKviGV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_goct6OBS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_sonClDT8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_Op5WqUgu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cSlice_Zp3XZRbQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_xSWr8Q64, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_zdii4Obj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_IGp54lgc, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_HyPEr38y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_EeP8lKHx, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_ROxSxlhe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_PGED1c5o, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSwitchcase_EqBIHvdI_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Vk9Sc0ey_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_STR6ZS4F_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_Vk9Sc0ey_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_D6fnfpFY_sendMessage);
}

void Heavy_Echomatica::cPack_OE5zfVGz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_8K50I9lo, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_G5bnS8iH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_zJpprzaq_sendMessage);
}

void Heavy_Echomatica::cSystem_zJpprzaq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_g2yIM4fI_sendMessage);
}

void Heavy_Echomatica::cDelay_2debBkeC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_2debBkeC, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_fI36xn16, 0, m, &cDelay_fI36xn16_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_2debBkeC, 0, m, &cDelay_2debBkeC_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_EkNOqRsv, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_fI36xn16_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_fI36xn16, m);
  cMsg_7T21G20V_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_EHvPPDHD_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_E2ZZ0l5I_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_hyLbUx5E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8X403jGS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_eIH9Q4vJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Vf09220X_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_2debBkeC, 2, m, &cDelay_2debBkeC_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rm4c1FIL_sendMessage);
}

void Heavy_Echomatica::cMsg_8X403jGS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_eIH9Q4vJ, 0, m, &hTable_eIH9Q4vJ_sendMessage);
}

void Heavy_Echomatica::cBinop_g2yIM4fI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 40.0f, 0, m, &cBinop_hyLbUx5E_sendMessage);
}

void Heavy_Echomatica::cMsg_7T21G20V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_eIH9Q4vJ, 0, m, &hTable_eIH9Q4vJ_sendMessage);
}

void Heavy_Echomatica::cCast_rm4c1FIL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_2debBkeC, 0, m, &cDelay_2debBkeC_sendMessage);
}

void Heavy_Echomatica::cMsg_Vf09220X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_fI36xn16, 2, m, &cDelay_fI36xn16_sendMessage);
}

void Heavy_Echomatica::cMsg_E2ZZ0l5I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_EkNOqRsv, 1, m, NULL);
}

void Heavy_Echomatica::cVar_I7UMWZec_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_BzpxP9IK, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_cQz8EdVa, m);
}

void Heavy_Echomatica::cMsg_Uj7kVm4y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_8TPxl73F_sendMessage);
}

void Heavy_Echomatica::cSystem_8TPxl73F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_0OsDylY5_sendMessage);
}

void Heavy_Echomatica::cVar_yzztoBOH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xTVq38XR_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_fgIOrkAc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_ouZuECAD_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_hxrEJDCQ, m);
}

void Heavy_Echomatica::cBinop_0OsDylY5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_MB1Q7O6S, m);
}

void Heavy_Echomatica::cMsg_xTVq38XR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_fgIOrkAc_sendMessage);
}

void Heavy_Echomatica::cBinop_ouZuECAD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_SLJ6OGJP, m);
}

void Heavy_Echomatica::cMsg_UeZ2gLUL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ZEbmF87z_sendMessage);
}

void Heavy_Echomatica::cSystem_ZEbmF87z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_qT4VdkcR_sendMessage);
}

void Heavy_Echomatica::cVar_e8ZbbQNq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2XNE3Rfz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_IVLUoocB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_S246pVle_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_fl2CSBEN, m);
}

void Heavy_Echomatica::cBinop_qT4VdkcR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_zdnH15Xq, m);
}

void Heavy_Echomatica::cMsg_2XNE3Rfz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_IVLUoocB_sendMessage);
}

void Heavy_Echomatica::cBinop_S246pVle_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_DDrxzuFh, m);
}

void Heavy_Echomatica::cMsg_6QxOmacP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_qI3yGRxg_sendMessage);
}

void Heavy_Echomatica::cSystem_qI3yGRxg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_UurjIL9M_sendMessage);
}

void Heavy_Echomatica::cDelay_EDQj3mAe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_EDQj3mAe, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Ul01llfE, 0, m, &cDelay_Ul01llfE_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_EDQj3mAe, 0, m, &cDelay_EDQj3mAe_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_wjUPuWPz, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_Ul01llfE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Ul01llfE, m);
  cMsg_F8M8eEqW_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_TnDZr0d0_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_3RsGg4L5_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_TRBd4oao_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vr9DQJnV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_QIbxPrMM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jALRf2un_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_EDQj3mAe, 2, m, &cDelay_EDQj3mAe_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3goj8Rlh_sendMessage);
}

void Heavy_Echomatica::cMsg_vr9DQJnV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_QIbxPrMM, 0, m, &hTable_QIbxPrMM_sendMessage);
}

void Heavy_Echomatica::cBinop_UurjIL9M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 30.0f, 0, m, &cBinop_TRBd4oao_sendMessage);
}

void Heavy_Echomatica::cMsg_F8M8eEqW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_QIbxPrMM, 0, m, &hTable_QIbxPrMM_sendMessage);
}

void Heavy_Echomatica::cCast_3goj8Rlh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_EDQj3mAe, 0, m, &cDelay_EDQj3mAe_sendMessage);
}

void Heavy_Echomatica::cMsg_jALRf2un_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_Ul01llfE, 2, m, &cDelay_Ul01llfE_sendMessage);
}

void Heavy_Echomatica::cMsg_3RsGg4L5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_wjUPuWPz, 1, m, NULL);
}

void Heavy_Echomatica::cBinop_M4Y8p4Ui_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_JT3tHqOQ_sendMessage);
}

void Heavy_Echomatica::cBinop_JT3tHqOQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_9CqEUz9I_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_FbTqfBUn_sendMessage);
}

void Heavy_Echomatica::cVar_7KWjl9XO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_THHwnCvi_sendMessage);
}

void Heavy_Echomatica::cMsg_kAEkq5g5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_bhtto5Ug_sendMessage);
}

void Heavy_Echomatica::cSystem_bhtto5Ug_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cHjWbZTj, HV_BINOP_DIVIDE, 1, m, &cBinop_cHjWbZTj_sendMessage);
}

void Heavy_Echomatica::cBinop_9CqEUz9I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_fkU9Blkn_sendMessage);
}

void Heavy_Echomatica::cBinop_fkU9Blkn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_AQdobzLW, m);
}

void Heavy_Echomatica::cMsg_zqIZdyHL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_cqqp0qIs_sendMessage);
}

void Heavy_Echomatica::cBinop_cqqp0qIs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_M4Y8p4Ui_sendMessage);
}

void Heavy_Echomatica::cBinop_FbTqfBUn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_42kNemOl, m);
}

void Heavy_Echomatica::cBinop_THHwnCvi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_QqsixsIs_sendMessage);
}

void Heavy_Echomatica::cBinop_QqsixsIs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cHjWbZTj, HV_BINOP_DIVIDE, 0, m, &cBinop_cHjWbZTj_sendMessage);
}

void Heavy_Echomatica::cBinop_cHjWbZTj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zqIZdyHL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_Edm7i55C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_bRfkhdr1_sendMessage);
}

void Heavy_Echomatica::cBinop_bRfkhdr1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_7WDXa5GM_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_LzdOQLIk_sendMessage);
}

void Heavy_Echomatica::cVar_VS5cAGYv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_5tOWnc9V_sendMessage);
}

void Heavy_Echomatica::cMsg_dxxezqgV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_VY9AWQWG_sendMessage);
}

void Heavy_Echomatica::cSystem_VY9AWQWG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oLne3Czx, HV_BINOP_DIVIDE, 1, m, &cBinop_oLne3Czx_sendMessage);
}

void Heavy_Echomatica::cBinop_7WDXa5GM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_BHnH7nDD_sendMessage);
}

void Heavy_Echomatica::cBinop_BHnH7nDD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_SbtTQLbX, m);
}

void Heavy_Echomatica::cMsg_AFHqyron_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_jhduVJza_sendMessage);
}

void Heavy_Echomatica::cBinop_jhduVJza_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_Edm7i55C_sendMessage);
}

void Heavy_Echomatica::cBinop_LzdOQLIk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_6zooMEPV, m);
}

void Heavy_Echomatica::cBinop_5tOWnc9V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_xe6wPXZE_sendMessage);
}

void Heavy_Echomatica::cBinop_xe6wPXZE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oLne3Czx, HV_BINOP_DIVIDE, 0, m, &cBinop_oLne3Czx_sendMessage);
}

void Heavy_Echomatica::cBinop_oLne3Czx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_AFHqyron_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_5pNiUMHJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_T26Gm0kK, 0, m, &cPack_T26Gm0kK_sendMessage);
}

void Heavy_Echomatica::cVar_xEdOQ5QA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_G6uBQWdn, 0, m, &cPack_G6uBQWdn_sendMessage);
}

void Heavy_Echomatica::cVar_mRlQw9sc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_BAp0p6TJ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cPack_G6uBQWdn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_WygtUEeg, 0, m, NULL);
}

void Heavy_Echomatica::cPack_T26Gm0kK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_156sTZrN, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_BAp0p6TJ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Z6HutGPr_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YGKTTIev_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hGHD1Sj7_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_Z6HutGPr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Ws1nEoFl_sendMessage(_c, 0, m);
  cMsg_nDtA3yq2_sendMessage(_c, 0, m);
  cMsg_GoL6E8Ac_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_YGKTTIev_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Ws1nEoFl_sendMessage(_c, 0, m);
  cMsg_nDtA3yq2_sendMessage(_c, 0, m);
  cMsg_y5zv2znU_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_hGHD1Sj7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1SEVmBH3_sendMessage(_c, 0, m);
  cMsg_lIe6O4GY_sendMessage(_c, 0, m);
  cMsg_y5zv2znU_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_pfipyuAL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_gAbuLerK_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_iWvuu0x2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JsMu758o, HV_BINOP_DIVIDE, 0, m, &cBinop_JsMu758o_sendMessage);
}

void Heavy_Echomatica::cVar_iD6k92Uo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LDI9Ua0m, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_LDI9Ua0m_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_yG949oD8, 0, m, &cIf_yG949oD8_sendMessage);
}

void Heavy_Echomatica::sEnv_3PQEFAEL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_Skzww0eK_sendMessage);
}

void Heavy_Echomatica::cBinop_HPOEdIho_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_nMsiAoCr_sendMessage);
}

void Heavy_Echomatica::cBinop_nMsiAoCr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YCVc0w3m_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vIy2yQhs_sendMessage);
}

void Heavy_Echomatica::cCast_vIy2yQhs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QYkWnBj7_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_YCVc0w3m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uTxzNt05, HV_BINOP_POW, 1, m, &cBinop_uTxzNt05_sendMessage);
}

void Heavy_Echomatica::cMsg_QYkWnBj7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_uTxzNt05, HV_BINOP_POW, 0, m, &cBinop_uTxzNt05_sendMessage);
}

void Heavy_Echomatica::cBinop_uTxzNt05_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_cyhGOlm7_sendMessage);
}

void Heavy_Echomatica::cIf_yG949oD8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_HPOEdIho, HV_BINOP_SUBTRACT, 0, m, &cBinop_HPOEdIho_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_cY2BDP2T, HV_BINOP_SUBTRACT, 0, m, &cBinop_cY2BDP2T_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_LDI9Ua0m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_yG949oD8, 1, m, &cIf_yG949oD8_sendMessage);
}

void Heavy_Echomatica::cVar_KSHfAeSB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZtuhoGbQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AwaVoL4h_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gc4nI4us_sendMessage);
}

void Heavy_Echomatica::cVar_HTuSHWmC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_nctw5tqI_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5RBEOGGX_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_aTMM6zpl_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_IvKf6APO, 0, m, &cSlice_IvKf6APO_sendMessage);
      break;
    }
    default: {
      cSwitchcase_tqvFK65m_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_IvKf6APO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_GaNTFiqt_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_GaNTFiqt_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_nMk8NydO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_GaNTFiqt_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_GaNTFiqt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_o0Y8FkCi_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_tqvFK65m_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_eXZdSuQM, 0, m, &cSlice_eXZdSuQM_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_eXZdSuQM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_C8Ve1Yhc_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_C8Ve1Yhc_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_Xjw6sGdQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_C8Ve1Yhc_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_C8Ve1Yhc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_aCD4KgSx_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_5RBEOGGX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_iWvuu0x2, 0, m, &cVar_iWvuu0x2_sendMessage);
}

void Heavy_Echomatica::cCast_nctw5tqI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JsMu758o, HV_BINOP_DIVIDE, 1, m, &cBinop_JsMu758o_sendMessage);
}

void Heavy_Echomatica::cBinop_JsMu758o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jSGi37Yx, HV_BINOP_ADD, 0, m, &cBinop_jSGi37Yx_sendMessage);
}

void Heavy_Echomatica::cBinop_cY2BDP2T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_iWvuu0x2, 0, m, &cVar_iWvuu0x2_sendMessage);
}

void Heavy_Echomatica::cCast_AwaVoL4h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LDI9Ua0m, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_LDI9Ua0m_sendMessage);
}

void Heavy_Echomatica::cCast_gc4nI4us_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_iD6k92Uo, 0, m, &cVar_iD6k92Uo_sendMessage);
}

void Heavy_Echomatica::cCast_ZtuhoGbQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_0AFCWUfG_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_WYtW2FHo_sendMessage);
}

void Heavy_Echomatica::cBinop_jSGi37Yx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HPOEdIho, HV_BINOP_SUBTRACT, 0, m, &cBinop_HPOEdIho_sendMessage);
}

void Heavy_Echomatica::cCast_Ji3tW8tS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_KSHfAeSB, 0, m, &cVar_KSHfAeSB_sendMessage);
}

void Heavy_Echomatica::cCast_lYamaklk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HTuSHWmC, 0, m, &cVar_HTuSHWmC_sendMessage);
}

void Heavy_Echomatica::cCast_jP6SgW3Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HPOEdIho, HV_BINOP_SUBTRACT, 1, m, &cBinop_HPOEdIho_sendMessage);
}

void Heavy_Echomatica::cCast_09uu43Qw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_iD6k92Uo, 0, m, &cVar_iD6k92Uo_sendMessage);
}

void Heavy_Echomatica::cBinop_cyhGOlm7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Xacrzuts_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_WYtW2FHo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cY2BDP2T, HV_BINOP_SUBTRACT, 1, m, &cBinop_cY2BDP2T_sendMessage);
}

void Heavy_Echomatica::cCast_0AFCWUfG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jSGi37Yx, HV_BINOP_ADD, 1, m, &cBinop_jSGi37Yx_sendMessage);
}

void Heavy_Echomatica::cBinop_Skzww0eK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jP6SgW3Q_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_09uu43Qw_sendMessage);
}

void Heavy_Echomatica::cMsg_Xacrzuts_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_UnW231o1, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_Ws1nEoFl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_xEdOQ5QA, 0, m, &cVar_xEdOQ5QA_sendMessage);
}

void Heavy_Echomatica::cMsg_nDtA3yq2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_5pNiUMHJ, 0, m, &cVar_5pNiUMHJ_sendMessage);
}

void Heavy_Echomatica::cMsg_1SEVmBH3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_xEdOQ5QA, 0, m, &cVar_xEdOQ5QA_sendMessage);
}

void Heavy_Echomatica::cMsg_lIe6O4GY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_5pNiUMHJ, 0, m, &cVar_5pNiUMHJ_sendMessage);
}

void Heavy_Echomatica::cSend_gAbuLerK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_EIr2rK25_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_GoL6E8Ac_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_pfipyuAL, 0, m, &cVar_pfipyuAL_sendMessage);
}

void Heavy_Echomatica::cMsg_y5zv2znU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_pfipyuAL, 0, m, &cVar_pfipyuAL_sendMessage);
}

void Heavy_Echomatica::cVar_3RcqADBb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_znc95HZb, HV_BINOP_MULTIPLY, 0, m, &cBinop_znc95HZb_sendMessage);
}

void Heavy_Echomatica::cMsg_jHfnhmeE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_EB4kRzH1_sendMessage);
}

void Heavy_Echomatica::cSystem_EB4kRzH1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_UQwUbDAU_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_znc95HZb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_vyo2ioK1_sendMessage);
}

void Heavy_Echomatica::cBinop_YnFT9BIr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_znc95HZb, HV_BINOP_MULTIPLY, 1, m, &cBinop_znc95HZb_sendMessage);
}

void Heavy_Echomatica::cMsg_UQwUbDAU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_YnFT9BIr_sendMessage);
}

void Heavy_Echomatica::cBinop_vyo2ioK1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_O5y5H5sd_sendMessage);
}

void Heavy_Echomatica::cBinop_O5y5H5sd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_sJJDTr98_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_ZBBTc1MK, m);
}

void Heavy_Echomatica::cBinop_sJJDTr98_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_f3Dow5PP, m);
}

void Heavy_Echomatica::cBinop_3Ko15pc7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_nLNhLfbI_sendMessage);
}

void Heavy_Echomatica::cBinop_nLNhLfbI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_GQgHDgcT_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_J9R0YnMc_sendMessage);
}

void Heavy_Echomatica::cVar_tyHDCzQJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_hZIiQ3cE_sendMessage);
}

void Heavy_Echomatica::cMsg_U52xxtAW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_wgAM5SeF_sendMessage);
}

void Heavy_Echomatica::cSystem_wgAM5SeF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_O3ZuXf6u, HV_BINOP_DIVIDE, 1, m, &cBinop_O3ZuXf6u_sendMessage);
}

void Heavy_Echomatica::cBinop_GQgHDgcT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_vvG9kBop_sendMessage);
}

void Heavy_Echomatica::cBinop_vvG9kBop_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_j1Sotq5F, m);
}

void Heavy_Echomatica::cMsg_m5EPFRZt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_uuHQgGJV_sendMessage);
}

void Heavy_Echomatica::cBinop_uuHQgGJV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_3Ko15pc7_sendMessage);
}

void Heavy_Echomatica::cBinop_J9R0YnMc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_tZDtDSYA, m);
}

void Heavy_Echomatica::cBinop_hZIiQ3cE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_opcnt1FU_sendMessage);
}

void Heavy_Echomatica::cBinop_opcnt1FU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_O3ZuXf6u, HV_BINOP_DIVIDE, 0, m, &cBinop_O3ZuXf6u_sendMessage);
}

void Heavy_Echomatica::cBinop_O3ZuXf6u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_m5EPFRZt_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_KxrCWzyX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_v7bnPSSS_sendMessage);
}

void Heavy_Echomatica::cBinop_v7bnPSSS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_J1iI4OJY_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_L2JHcRfj_sendMessage);
}

void Heavy_Echomatica::cVar_Khx0RnUV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_1vz79YUu_sendMessage);
}

void Heavy_Echomatica::cMsg_EddEJVM3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ngWDsqvB_sendMessage);
}

void Heavy_Echomatica::cSystem_ngWDsqvB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mGegM73q, HV_BINOP_DIVIDE, 1, m, &cBinop_mGegM73q_sendMessage);
}

void Heavy_Echomatica::cBinop_J1iI4OJY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_q8woQEMU_sendMessage);
}

void Heavy_Echomatica::cBinop_q8woQEMU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Pd9vwHsA, m);
}

void Heavy_Echomatica::cMsg_yQllPaI1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_ETLJ1Ihx_sendMessage);
}

void Heavy_Echomatica::cBinop_ETLJ1Ihx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_KxrCWzyX_sendMessage);
}

void Heavy_Echomatica::cBinop_L2JHcRfj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_n7SRQPOx, m);
}

void Heavy_Echomatica::cBinop_1vz79YUu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_fapq0ytg_sendMessage);
}

void Heavy_Echomatica::cBinop_fapq0ytg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mGegM73q, HV_BINOP_DIVIDE, 0, m, &cBinop_mGegM73q_sendMessage);
}

void Heavy_Echomatica::cBinop_mGegM73q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_yQllPaI1_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cIf_caBtMs9k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_xBKvnsqK, 0, m, &cVar_xBKvnsqK_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_xBKvnsqK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1BbWSd1x, HV_BINOP_MULTIPLY, 0, m, &cBinop_1BbWSd1x_sendMessage);
}

void Heavy_Echomatica::cVar_YHTadBo3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_caBtMs9k, 0, m, &cIf_caBtMs9k_sendMessage);
}

void Heavy_Echomatica::cPack_TGwAK6bl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_JcGPCnsk_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_oL8EEomi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BESrRK1x_sendMessage);
}

void Heavy_Echomatica::cSystem_BESrRK1x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wfjnEtl9, HV_BINOP_MULTIPLY, 1, m, &cBinop_wfjnEtl9_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_LAfuCAhU, HV_BINOP_MULTIPLY, 1, m, &cBinop_LAfuCAhU_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_OIWje3jR_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cMsg_I9ftWspc_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_I9ftWspc_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SkFYsBCo_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cDelay_33bxotR3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_33bxotR3, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_33bxotR3, 0, m, &cDelay_33bxotR3_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_wgATlHOK, 0, m, &cVar_wgATlHOK_sendMessage);
}

void Heavy_Echomatica::cCast_SkFYsBCo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_I9ftWspc_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_33bxotR3, 0, m, &cDelay_33bxotR3_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_wgATlHOK, 0, m, &cVar_wgATlHOK_sendMessage);
}

void Heavy_Echomatica::cMsg_5X9a7pbW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_12lpEXfz_sendMessage);
}

void Heavy_Echomatica::cSystem_12lpEXfz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Kp3smPTl_sendMessage);
}

void Heavy_Echomatica::cVar_uFcqtiIJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PLQ0Kzrs, HV_BINOP_MULTIPLY, 0, m, &cBinop_PLQ0Kzrs_sendMessage);
}

void Heavy_Echomatica::cMsg_I9ftWspc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_33bxotR3, 0, m, &cDelay_33bxotR3_sendMessage);
}

void Heavy_Echomatica::cBinop_Xst0Q1va_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_33bxotR3, 2, m, &cDelay_33bxotR3_sendMessage);
}

void Heavy_Echomatica::cBinop_Kp3smPTl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PLQ0Kzrs, HV_BINOP_MULTIPLY, 1, m, &cBinop_PLQ0Kzrs_sendMessage);
}

void Heavy_Echomatica::cBinop_PLQ0Kzrs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_Xst0Q1va_sendMessage);
}

void Heavy_Echomatica::cVar_wgATlHOK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0ZXLWuuP, HV_BINOP_SUBTRACT, 0, m, &cBinop_0ZXLWuuP_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_4cSiQmVA_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_qjw0FUyS_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GTyCOoZo_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rHGD9Klj_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_GTyCOoZo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_txxoyCU0, 0, m, &cVar_txxoyCU0_sendMessage);
}

void Heavy_Echomatica::cCast_rHGD9Klj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qcxuRqwz_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_l4VRKE7h_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_JcGPCnsk_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_nslHyto5, 0, m, &cSlice_nslHyto5_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_UVhgJIT0, 0, m, &cSlice_UVhgJIT0_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sXvSbyCx_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_0FXWVC6a, 0, m, &cSlice_0FXWVC6a_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_uQSzuPtX, 0, m, &cSlice_uQSzuPtX_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1SO7jTJn_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TWgRNYXW_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_nslHyto5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_zlT53i74_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_zlT53i74_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_UVhgJIT0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HvlQkdAD_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_p7bQT98E_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HvlQkdAD_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_p7bQT98E_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_hvaiod8C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kpymRDAc_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1Q64OTgu_sendMessage);
}

void Heavy_Echomatica::cVar_N6Avutvf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_RilRoT8P_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_RilRoT8P_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RaALsivV_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_wfjnEtl9, HV_BINOP_MULTIPLY, 0, m, &cBinop_wfjnEtl9_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_mctLEGma, HV_BINOP_DIVIDE, 1, m, &cBinop_mctLEGma_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_uFcqtiIJ, 0, m, &cVar_uFcqtiIJ_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_RaALsivV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VU23feNs_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_ZdjrWlx0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bUsVGImG, HV_BINOP_SUBTRACT, 1, m, &cBinop_bUsVGImG_sendMessage);
}

void Heavy_Echomatica::cVar_6ywSPmXj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_txxoyCU0, 0, m, &cVar_txxoyCU0_sendMessage);
}

void Heavy_Echomatica::cVar_txxoyCU0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_42pV8o74, HV_BINOP_ADD, 0, m, &cBinop_42pV8o74_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_W3UuvbbR, HV_BINOP_ADD, 0, m, &cBinop_W3UuvbbR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nsELbWQe_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_9aYj9IFy_sendMessage);
}

void Heavy_Echomatica::cSlice_0FXWVC6a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kpymRDAc_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1Q64OTgu_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_uQSzuPtX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6gyizAOi_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_UJzbu1th_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_x1gqWXE2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wgATlHOK, 1, m, &cVar_wgATlHOK_sendMessage);
}

void Heavy_Echomatica::cBinop_LAfuCAhU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_x1gqWXE2_sendMessage);
}

void Heavy_Echomatica::cBinop_wfjnEtl9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_IuCFanfz_sendMessage);
}

void Heavy_Echomatica::cBinop_IuCFanfz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0ZXLWuuP, HV_BINOP_SUBTRACT, 1, m, &cBinop_0ZXLWuuP_sendMessage);
}

void Heavy_Echomatica::cBinop_0ZXLWuuP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wgATlHOK, 1, m, &cVar_wgATlHOK_sendMessage);
}

void Heavy_Echomatica::cMsg_0ema2gDw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_OIWje3jR_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_M6A8YgWB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_OIWje3jR_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_W3UuvbbR, HV_BINOP_ADD, 1, m, &cBinop_W3UuvbbR_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_42pV8o74, HV_BINOP_ADD, 1, m, &cBinop_42pV8o74_sendMessage);
}

void Heavy_Echomatica::cBinop_4cSiQmVA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_qjw0FUyS_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_42pV8o74_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_txxoyCU0, 1, m, &cVar_txxoyCU0_sendMessage);
}

void Heavy_Echomatica::cBinop_mctLEGma_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eyaj8oTt, HV_BINOP_DIVIDE, 1, m, &cBinop_eyaj8oTt_sendMessage);
}

void Heavy_Echomatica::cBinop_eyaj8oTt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_W3UuvbbR, HV_BINOP_ADD, 1, m, &cBinop_W3UuvbbR_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_42pV8o74, HV_BINOP_ADD, 1, m, &cBinop_42pV8o74_sendMessage);
}

void Heavy_Echomatica::cCast_kpymRDAc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LAfuCAhU, HV_BINOP_MULTIPLY, 0, m, &cBinop_LAfuCAhU_sendMessage);
}

void Heavy_Echomatica::cCast_1Q64OTgu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mctLEGma, HV_BINOP_DIVIDE, 0, m, &cBinop_mctLEGma_sendMessage);
}

void Heavy_Echomatica::cCast_UJzbu1th_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bUsVGImG, HV_BINOP_SUBTRACT, 0, m, &cBinop_bUsVGImG_sendMessage);
}

void Heavy_Echomatica::cCast_6gyizAOi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6ywSPmXj, 1, m, &cVar_6ywSPmXj_sendMessage);
}

void Heavy_Echomatica::cCast_qcxuRqwz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_M6A8YgWB_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_l4VRKE7h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6ywSPmXj, 0, m, &cVar_6ywSPmXj_sendMessage);
}

void Heavy_Echomatica::cBinop_W3UuvbbR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ZdjrWlx0, 0, m, &cVar_ZdjrWlx0_sendMessage);
}

void Heavy_Echomatica::cMsg_zlT53i74_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_OIWje3jR_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_lzK2yhg3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_hvaiod8C, 1, m, &cVar_hvaiod8C_sendMessage);
}

void Heavy_Echomatica::cMsg_VU23feNs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_wfjnEtl9, HV_BINOP_MULTIPLY, 0, m, &cBinop_wfjnEtl9_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_mctLEGma, HV_BINOP_DIVIDE, 1, m, &cBinop_mctLEGma_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_uFcqtiIJ, 0, m, &cVar_uFcqtiIJ_sendMessage);
}

void Heavy_Echomatica::cCast_HvlQkdAD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zlT53i74_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_p7bQT98E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_clZIVr8O_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_W3UuvbbR, HV_BINOP_ADD, 0, m, &cBinop_W3UuvbbR_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_txxoyCU0, 1, m, &cVar_txxoyCU0_sendMessage);
}

void Heavy_Echomatica::cBinop_bUsVGImG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eyaj8oTt, HV_BINOP_DIVIDE, 0, m, &cBinop_eyaj8oTt_sendMessage);
}

void Heavy_Echomatica::cCast_clZIVr8O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_M6A8YgWB_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_TWgRNYXW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_lzK2yhg3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_sXvSbyCx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_hvaiod8C, 0, m, &cVar_hvaiod8C_sendMessage);
}

void Heavy_Echomatica::cCast_1SO7jTJn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0ema2gDw_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_oyZOLANp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_i5oMqKSf, HV_BINOP_MULTIPLY, 0, m, &cBinop_i5oMqKSf_sendMessage);
}

void Heavy_Echomatica::cVar_nsHZ3qg5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4jzHFGbW, HV_BINOP_MULTIPLY, 0, m, &cBinop_4jzHFGbW_sendMessage);
}

void Heavy_Echomatica::cVar_VHms1U4n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1zv3RbG7, HV_BINOP_MULTIPLY, 0, m, &cBinop_1zv3RbG7_sendMessage);
}

void Heavy_Echomatica::cVar_lMt0FZPR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hTCnWr9M, HV_BINOP_MULTIPLY, 0, m, &cBinop_hTCnWr9M_sendMessage);
}

void Heavy_Echomatica::cVar_WrU4Hnc4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8Lw562CT, HV_BINOP_MULTIPLY, 0, m, &cBinop_8Lw562CT_sendMessage);
}

void Heavy_Echomatica::cVar_5D1qwoPO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1E3ELDUW, HV_BINOP_MULTIPLY, 0, m, &cBinop_1E3ELDUW_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_xWq1E3Cc_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6zIChKnX_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0JT4ZnXG_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_6zIChKnX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DJIugsde_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9KTIs3CH_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MlhzQB24_sendMessage);
}

void Heavy_Echomatica::cCast_0JT4ZnXG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7QYqU6BT_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PZiP2kS3_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_epqQbPi8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MTQ5rSMq_sendMessage);
}

void Heavy_Echomatica::cBinop_nRNHwOgK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_01qQkpSc_sendMessage);
}

void Heavy_Echomatica::cBinop_01qQkpSc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_amOyjeOv_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_XsEq655Y_sendMessage);
}

void Heavy_Echomatica::cVar_tN8bCPWy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_ppvBJOvv_sendMessage);
}

void Heavy_Echomatica::cMsg_0dCbOQim_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_TAFl7cu2_sendMessage);
}

void Heavy_Echomatica::cSystem_TAFl7cu2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IPWDiByQ, HV_BINOP_DIVIDE, 1, m, &cBinop_IPWDiByQ_sendMessage);
}

void Heavy_Echomatica::cBinop_amOyjeOv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_E0Z3TDKg_sendMessage);
}

void Heavy_Echomatica::cBinop_E0Z3TDKg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_3NrNi2un, m);
}

void Heavy_Echomatica::cMsg_MJYvDtTI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_dgL5C1EC_sendMessage);
}

void Heavy_Echomatica::cBinop_dgL5C1EC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_nRNHwOgK_sendMessage);
}

void Heavy_Echomatica::cBinop_XsEq655Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_xTieSQ6c, m);
}

void Heavy_Echomatica::cBinop_ppvBJOvv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_bonYg0Sv_sendMessage);
}

void Heavy_Echomatica::cBinop_bonYg0Sv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IPWDiByQ, HV_BINOP_DIVIDE, 0, m, &cBinop_IPWDiByQ_sendMessage);
}

void Heavy_Echomatica::cBinop_IPWDiByQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_MJYvDtTI_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_Jothvxr1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HML1G1nW, HV_BINOP_DIVIDE, 0, m, &cBinop_HML1G1nW_sendMessage);
}

void Heavy_Echomatica::cVar_y2h97gxo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wioL1WyG, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_wioL1WyG_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_CeOrhk5u, 0, m, &cIf_CeOrhk5u_sendMessage);
}

void Heavy_Echomatica::sEnv_whBehBZa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_dqc9yDdo_sendMessage);
}

void Heavy_Echomatica::cBinop_dnhkdeWm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_m6UI5gfp_sendMessage);
}

void Heavy_Echomatica::cBinop_m6UI5gfp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_uEAoRB3j_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pooMKOze_sendMessage);
}

void Heavy_Echomatica::cCast_pooMKOze_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cYMWpmRN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_uEAoRB3j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_plEtslME, HV_BINOP_POW, 1, m, &cBinop_plEtslME_sendMessage);
}

void Heavy_Echomatica::cMsg_cYMWpmRN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_plEtslME, HV_BINOP_POW, 0, m, &cBinop_plEtslME_sendMessage);
}

void Heavy_Echomatica::cBinop_plEtslME_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_Kq15PCzL_sendMessage);
}

void Heavy_Echomatica::cIf_CeOrhk5u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_dnhkdeWm, HV_BINOP_SUBTRACT, 0, m, &cBinop_dnhkdeWm_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_uh0Rwj6U, HV_BINOP_SUBTRACT, 0, m, &cBinop_uh0Rwj6U_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_wioL1WyG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_CeOrhk5u, 1, m, &cIf_CeOrhk5u_sendMessage);
}

void Heavy_Echomatica::cVar_mnOPGpra_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hqfjWHLk_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mIqKpiZz_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_F67NXIcC_sendMessage);
}

void Heavy_Echomatica::cVar_UkJVskA7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AsxlWM8d_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MwYu2kdN_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_Gnz4XiEZ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ZSPgpvLz, 0, m, &cSlice_ZSPgpvLz_sendMessage);
      break;
    }
    default: {
      cSwitchcase_2Ruha8mj_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_ZSPgpvLz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_cUY77UUn_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_cUY77UUn_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_Cn493HcN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_cUY77UUn_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_cUY77UUn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_AubRW87C_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_2Ruha8mj_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_6WVz4me1, 0, m, &cSlice_6WVz4me1_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_6WVz4me1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_NxWIFMkT_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_NxWIFMkT_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_XjtXEJQY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_NxWIFMkT_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_NxWIFMkT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_NmLbu4vw_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_AsxlWM8d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HML1G1nW, HV_BINOP_DIVIDE, 1, m, &cBinop_HML1G1nW_sendMessage);
}

void Heavy_Echomatica::cCast_MwYu2kdN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Jothvxr1, 0, m, &cVar_Jothvxr1_sendMessage);
}

void Heavy_Echomatica::cBinop_HML1G1nW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RtPUZoFs, HV_BINOP_ADD, 0, m, &cBinop_RtPUZoFs_sendMessage);
}

void Heavy_Echomatica::cBinop_uh0Rwj6U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Jothvxr1, 0, m, &cVar_Jothvxr1_sendMessage);
}

void Heavy_Echomatica::cCast_F67NXIcC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_y2h97gxo, 0, m, &cVar_y2h97gxo_sendMessage);
}

void Heavy_Echomatica::cCast_hqfjWHLk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wOgG9ELZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oIodbdni_sendMessage);
}

void Heavy_Echomatica::cCast_mIqKpiZz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wioL1WyG, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_wioL1WyG_sendMessage);
}

void Heavy_Echomatica::cBinop_RtPUZoFs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dnhkdeWm, HV_BINOP_SUBTRACT, 0, m, &cBinop_dnhkdeWm_sendMessage);
}

void Heavy_Echomatica::cCast_MPkJfKCB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mnOPGpra, 0, m, &cVar_mnOPGpra_sendMessage);
}

void Heavy_Echomatica::cCast_Xz0qXzmI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_UkJVskA7, 0, m, &cVar_UkJVskA7_sendMessage);
}

void Heavy_Echomatica::cCast_CJkl90gD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_y2h97gxo, 0, m, &cVar_y2h97gxo_sendMessage);
}

void Heavy_Echomatica::cCast_v8dEZsAG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dnhkdeWm, HV_BINOP_SUBTRACT, 1, m, &cBinop_dnhkdeWm_sendMessage);
}

void Heavy_Echomatica::cBinop_Kq15PCzL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QXDQBd1E_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_wOgG9ELZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RtPUZoFs, HV_BINOP_ADD, 1, m, &cBinop_RtPUZoFs_sendMessage);
}

void Heavy_Echomatica::cCast_oIodbdni_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uh0Rwj6U, HV_BINOP_SUBTRACT, 1, m, &cBinop_uh0Rwj6U_sendMessage);
}

void Heavy_Echomatica::cBinop_dqc9yDdo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_v8dEZsAG_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_CJkl90gD_sendMessage);
}

void Heavy_Echomatica::cMsg_QXDQBd1E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_5Edk1GSB, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_dQBM9eZv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_9iC9pfZr_sendMessage);
}

void Heavy_Echomatica::cBinop_9iC9pfZr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_uAGkLItW_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_JNeeb7MB_sendMessage);
}

void Heavy_Echomatica::cVar_pguN2Jbt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_fdGLCccy_sendMessage);
}

void Heavy_Echomatica::cMsg_bfp3Hs6S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_MVnkv9ED_sendMessage);
}

void Heavy_Echomatica::cSystem_MVnkv9ED_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_31V1xZEA, HV_BINOP_DIVIDE, 1, m, &cBinop_31V1xZEA_sendMessage);
}

void Heavy_Echomatica::cBinop_uAGkLItW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_6QAYqTQU_sendMessage);
}

void Heavy_Echomatica::cBinop_6QAYqTQU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_d1t0X95H, m);
}

void Heavy_Echomatica::cMsg_1ej28GRZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_31neFl28_sendMessage);
}

void Heavy_Echomatica::cBinop_31neFl28_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_dQBM9eZv_sendMessage);
}

void Heavy_Echomatica::cBinop_JNeeb7MB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ugWdewVF, m);
}

void Heavy_Echomatica::cBinop_fdGLCccy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_05gux3Qj_sendMessage);
}

void Heavy_Echomatica::cBinop_05gux3Qj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_31V1xZEA, HV_BINOP_DIVIDE, 0, m, &cBinop_31V1xZEA_sendMessage);
}

void Heavy_Echomatica::cBinop_31V1xZEA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1ej28GRZ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_nJ9RFvI8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_H11XEzRn, HV_BINOP_DIVIDE, 0, m, &cBinop_H11XEzRn_sendMessage);
}

void Heavy_Echomatica::cVar_dai7MhCi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rPb1VuvE, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_rPb1VuvE_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_G3KVIUqz, 0, m, &cIf_G3KVIUqz_sendMessage);
}

void Heavy_Echomatica::sEnv_WUnBo5nE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_3QFG6O2Y_sendMessage);
}

void Heavy_Echomatica::cBinop_DhIiCPK0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_9Dt2gpDE_sendMessage);
}

void Heavy_Echomatica::cBinop_9Dt2gpDE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_I2r05yhS_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_p4WhdpOt_sendMessage);
}

void Heavy_Echomatica::cCast_I2r05yhS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_onEHk2Nh, HV_BINOP_POW, 1, m, &cBinop_onEHk2Nh_sendMessage);
}

void Heavy_Echomatica::cCast_p4WhdpOt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xoywv26W_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_xoywv26W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_onEHk2Nh, HV_BINOP_POW, 0, m, &cBinop_onEHk2Nh_sendMessage);
}

void Heavy_Echomatica::cBinop_onEHk2Nh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_pT1Z5egC_sendMessage);
}

void Heavy_Echomatica::cIf_G3KVIUqz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_DhIiCPK0, HV_BINOP_SUBTRACT, 0, m, &cBinop_DhIiCPK0_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_KoFWsiN1, HV_BINOP_SUBTRACT, 0, m, &cBinop_KoFWsiN1_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_rPb1VuvE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_G3KVIUqz, 1, m, &cIf_G3KVIUqz_sendMessage);
}

void Heavy_Echomatica::cVar_DlrEi0It_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_obnRd0xu_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7FrZKNpV_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Vj04TI6e_sendMessage);
}

void Heavy_Echomatica::cVar_WlHR4jy7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kOeJOk8K_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5gAGgYkD_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_gyogDlya_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_P2UBkBoH, 0, m, &cSlice_P2UBkBoH_sendMessage);
      break;
    }
    default: {
      cSwitchcase_G0xSrRTy_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_P2UBkBoH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_HU92Mh10_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_HU92Mh10_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_eE4lozXK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_HU92Mh10_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_HU92Mh10_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_TTnEbJl5_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_G0xSrRTy_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Yhc5bFgm, 0, m, &cSlice_Yhc5bFgm_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_Yhc5bFgm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_yEUarjAs_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_yEUarjAs_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_LVZomvos_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_yEUarjAs_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_yEUarjAs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_f0VJiZVe_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_5gAGgYkD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_nJ9RFvI8, 0, m, &cVar_nJ9RFvI8_sendMessage);
}

void Heavy_Echomatica::cCast_kOeJOk8K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_H11XEzRn, HV_BINOP_DIVIDE, 1, m, &cBinop_H11XEzRn_sendMessage);
}

void Heavy_Echomatica::cBinop_H11XEzRn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zkkrnZzI, HV_BINOP_ADD, 0, m, &cBinop_zkkrnZzI_sendMessage);
}

void Heavy_Echomatica::cBinop_KoFWsiN1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_nJ9RFvI8, 0, m, &cVar_nJ9RFvI8_sendMessage);
}

void Heavy_Echomatica::cCast_obnRd0xu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GSeWOMgi_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_76PDUMqh_sendMessage);
}

void Heavy_Echomatica::cCast_Vj04TI6e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_dai7MhCi, 0, m, &cVar_dai7MhCi_sendMessage);
}

void Heavy_Echomatica::cCast_7FrZKNpV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rPb1VuvE, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_rPb1VuvE_sendMessage);
}

void Heavy_Echomatica::cBinop_zkkrnZzI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DhIiCPK0, HV_BINOP_SUBTRACT, 0, m, &cBinop_DhIiCPK0_sendMessage);
}

void Heavy_Echomatica::cCast_300FvRbx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WlHR4jy7, 0, m, &cVar_WlHR4jy7_sendMessage);
}

void Heavy_Echomatica::cCast_Vxdvxb9v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_DlrEi0It, 0, m, &cVar_DlrEi0It_sendMessage);
}

void Heavy_Echomatica::cCast_JmfqKn1Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_dai7MhCi, 0, m, &cVar_dai7MhCi_sendMessage);
}

void Heavy_Echomatica::cCast_zhiIPjqU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DhIiCPK0, HV_BINOP_SUBTRACT, 1, m, &cBinop_DhIiCPK0_sendMessage);
}

void Heavy_Echomatica::cBinop_pT1Z5egC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uw47Z91J_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_GSeWOMgi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zkkrnZzI, HV_BINOP_ADD, 1, m, &cBinop_zkkrnZzI_sendMessage);
}

void Heavy_Echomatica::cCast_76PDUMqh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KoFWsiN1, HV_BINOP_SUBTRACT, 1, m, &cBinop_KoFWsiN1_sendMessage);
}

void Heavy_Echomatica::cBinop_3QFG6O2Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zhiIPjqU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JmfqKn1Y_sendMessage);
}

void Heavy_Echomatica::cMsg_uw47Z91J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_nBi0INz9, 0, m, NULL);
}

void Heavy_Echomatica::cVar_7QlbEo1C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jqdGevjr, HV_BINOP_MULTIPLY, 0, m, &cBinop_jqdGevjr_sendMessage);
}

void Heavy_Echomatica::cMsg_bSHjyWxb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_aQmxtSIt_sendMessage);
}

void Heavy_Echomatica::cSystem_aQmxtSIt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SSrb8TVg_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_jqdGevjr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_oEckR0Zz_sendMessage);
}

void Heavy_Echomatica::cBinop_sktzBVes_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jqdGevjr, HV_BINOP_MULTIPLY, 1, m, &cBinop_jqdGevjr_sendMessage);
}

void Heavy_Echomatica::cMsg_SSrb8TVg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_sktzBVes_sendMessage);
}

void Heavy_Echomatica::cBinop_oEckR0Zz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_zBEwfBt7_sendMessage);
}

void Heavy_Echomatica::cBinop_zBEwfBt7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_CXBPOVTA_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_clq0qRHC, m);
}

void Heavy_Echomatica::cBinop_CXBPOVTA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_QpqJxSdb, m);
}

void Heavy_Echomatica::cVar_6BjG2n7q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mfOfOUIE, HV_BINOP_MULTIPLY, 0, m, &cBinop_mfOfOUIE_sendMessage);
}

void Heavy_Echomatica::cMsg_Ei5Ex3qH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_HaW6qZBW_sendMessage);
}

void Heavy_Echomatica::cSystem_HaW6qZBW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uc8mQHvg_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_mfOfOUIE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_EdVPm0sT_sendMessage);
}

void Heavy_Echomatica::cBinop_KwMYpizJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mfOfOUIE, HV_BINOP_MULTIPLY, 1, m, &cBinop_mfOfOUIE_sendMessage);
}

void Heavy_Echomatica::cMsg_uc8mQHvg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_KwMYpizJ_sendMessage);
}

void Heavy_Echomatica::cBinop_EdVPm0sT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_6gcbpqpg_sendMessage);
}

void Heavy_Echomatica::cBinop_6gcbpqpg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_aMHeZYtA_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_0XNJG4jh, m);
}

void Heavy_Echomatica::cBinop_aMHeZYtA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_PkUTK7g3, m);
}

void Heavy_Echomatica::cBinop_Z1vV29h2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_gO2DkiI3_sendMessage);
}

void Heavy_Echomatica::cBinop_gO2DkiI3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_ezHt1zW9_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_fz8kEBsb_sendMessage);
}

void Heavy_Echomatica::cVar_iXwXDOmg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_EsqfCyG0_sendMessage);
}

void Heavy_Echomatica::cMsg_D1ILjV6I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_4jHRKFvw_sendMessage);
}

void Heavy_Echomatica::cSystem_4jHRKFvw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zTLrcaWQ, HV_BINOP_DIVIDE, 1, m, &cBinop_zTLrcaWQ_sendMessage);
}

void Heavy_Echomatica::cBinop_ezHt1zW9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_o5Rk331e_sendMessage);
}

void Heavy_Echomatica::cBinop_o5Rk331e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_gCjxyXHt, m);
}

void Heavy_Echomatica::cMsg_H6iLb90L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_79SPjzsy_sendMessage);
}

void Heavy_Echomatica::cBinop_79SPjzsy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_Z1vV29h2_sendMessage);
}

void Heavy_Echomatica::cBinop_fz8kEBsb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_tJKEYLbi, m);
}

void Heavy_Echomatica::cBinop_EsqfCyG0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_GpQbJiUT_sendMessage);
}

void Heavy_Echomatica::cBinop_GpQbJiUT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zTLrcaWQ, HV_BINOP_DIVIDE, 0, m, &cBinop_zTLrcaWQ_sendMessage);
}

void Heavy_Echomatica::cBinop_zTLrcaWQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_H6iLb90L_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_HzHvYydx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_c93i8uf6_sendMessage);
}

void Heavy_Echomatica::cBinop_c93i8uf6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_sR8f3WP6_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_tVulknxt_sendMessage);
}

void Heavy_Echomatica::cVar_slCKWQaf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_wM4XBXhy_sendMessage);
}

void Heavy_Echomatica::cMsg_1vQp4e02_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_GOGLpY8E_sendMessage);
}

void Heavy_Echomatica::cSystem_GOGLpY8E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PaKnc6t5, HV_BINOP_DIVIDE, 1, m, &cBinop_PaKnc6t5_sendMessage);
}

void Heavy_Echomatica::cBinop_sR8f3WP6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_dYywyOSx_sendMessage);
}

void Heavy_Echomatica::cBinop_dYywyOSx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_KXLgqJ87, m);
}

void Heavy_Echomatica::cMsg_kpeK8ddk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_XWp3oNkw_sendMessage);
}

void Heavy_Echomatica::cBinop_XWp3oNkw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_HzHvYydx_sendMessage);
}

void Heavy_Echomatica::cBinop_tVulknxt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_TEjPzvyA, m);
}

void Heavy_Echomatica::cBinop_wM4XBXhy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_p1ZlXOoF_sendMessage);
}

void Heavy_Echomatica::cBinop_p1ZlXOoF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PaKnc6t5, HV_BINOP_DIVIDE, 0, m, &cBinop_PaKnc6t5_sendMessage);
}

void Heavy_Echomatica::cBinop_PaKnc6t5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_kpeK8ddk_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_bWjZF4bC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ITj58nKT, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_UlwfD28Y, m);
}

void Heavy_Echomatica::cVar_e1c0qjsF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GTnMbzOY, HV_BINOP_MULTIPLY, 0, m, &cBinop_GTnMbzOY_sendMessage);
}

void Heavy_Echomatica::cVar_Mkq6XW2g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_TGwAK6bl, 0, m, &cPack_TGwAK6bl_sendMessage);
}

void Heavy_Echomatica::cVar_WWiSt9xC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_OE5zfVGz, 0, m, &cPack_OE5zfVGz_sendMessage);
}

void Heavy_Echomatica::cVar_5ZChZ45Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_kUDbNC39_sendMessage);
  cSwitchcase_xWq1E3Cc_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_kUDbNC39_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5ZChZ45Z, 1, m, &cVar_5ZChZ45Z_sendMessage);
}

void Heavy_Echomatica::cSend_t3qQB4Yv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_HH5Oc7I6_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_s0w0FZmQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_D7UVvhlf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_LHBCbGIn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_YtjlAZ3I_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_J6hWUhSW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_d3FxU4Sy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_npZehxoM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_voLivBUQ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_ijCyU9Wk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_wbvJZ6PN_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_mc5xW7bS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_W0joHUfz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_KAXjYPcR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_weoG44s6_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_S6SDgGFT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_sB0PemGI_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_WoorBXRL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_7uHdJJPd_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_F1EHWfEm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IlfDBs99_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_CfQ3spEF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_4xg5GNSz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_uu9mY5kD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_RS48hJ3d_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_J8zBmKgd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_5SiiA3Z4_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_pjK0rdox_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_8ghr3yoa_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_4Vel5Kya_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_etumewYV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_D23KPdtu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jiMMtdfa_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_TNtmbm5A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ng63AqWL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_jxQpEPKE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_5K2SsKzS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_Pa0FbrMu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Ap4jUK7c_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_vG797XVM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_2nm6cRoZ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_H1UMJYFH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_srWtiZGy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_rnwEaIpT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_VNL3j0qQ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_GvhZGDjX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_xqBuho4X_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_0Pvh8F4A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_FKUz2N0f_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_xF1phSby_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_1AWkmxFH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_TLFbHWn4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_vfuE3N67_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_qaMkGzS2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_yeLAXVGA_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_Oi0VJdN1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.01f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Zp3XZRbQ, 0, m, &cSlice_Zp3XZRbQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zdii4Obj, 0, m, &cSlice_zdii4Obj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HyPEr38y, 0, m, &cSlice_HyPEr38y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ROxSxlhe, 0, m, &cSlice_ROxSxlhe_sendMessage);
}

void Heavy_Echomatica::cCast_D6fnfpFY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Oi0VJdN1_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_STR6ZS4F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_izj4oA6h_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_izj4oA6h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.2f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Zp3XZRbQ, 0, m, &cSlice_Zp3XZRbQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zdii4Obj, 0, m, &cSlice_zdii4Obj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HyPEr38y, 0, m, &cSlice_HyPEr38y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ROxSxlhe, 0, m, &cSlice_ROxSxlhe_sendMessage);
}

void Heavy_Echomatica::cMsg_dwd104OH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_1BbWSd1x, HV_BINOP_MULTIPLY, 1, m, &cBinop_1BbWSd1x_sendMessage);
}

void Heavy_Echomatica::cBinop_1BbWSd1x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_KuNxzSJx_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_hhstRchR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_xBKvnsqK, 0, m, &cVar_xBKvnsqK_sendMessage);
}

void Heavy_Echomatica::cMsg_fdKn0F5l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_caBtMs9k, 1, m, &cIf_caBtMs9k_sendMessage);
}

void Heavy_Echomatica::cMsg_qqdZkFI7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_caBtMs9k, 1, m, &cIf_caBtMs9k_sendMessage);
}

void Heavy_Echomatica::cSend_KuNxzSJx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IDR0h9XC_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_i5oMqKSf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_sizQutd3, 0, m, &cPack_sizQutd3_sendMessage);
}

void Heavy_Echomatica::cBinop_4jzHFGbW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_vwi8f8AQ, 0, m, &cPack_vwi8f8AQ_sendMessage);
}

void Heavy_Echomatica::cBinop_1zv3RbG7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ro6njlgN, 0, m, &cPack_ro6njlgN_sendMessage);
}

void Heavy_Echomatica::cBinop_hTCnWr9M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ZLLVaSCn, 0, m, &cPack_ZLLVaSCn_sendMessage);
}

void Heavy_Echomatica::cBinop_8Lw562CT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_uU3mPzRv, 0, m, &cPack_uU3mPzRv_sendMessage);
}

void Heavy_Echomatica::cBinop_1E3ELDUW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_uhHWcPZV, 0, m, &cPack_uhHWcPZV_sendMessage);
}

void Heavy_Echomatica::cCast_57URFlH8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_oyZOLANp, 0, m, &cVar_oyZOLANp_sendMessage);
}

void Heavy_Echomatica::cCast_VwsvCs6R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_i5oMqKSf, HV_BINOP_MULTIPLY, 1, m, &cBinop_i5oMqKSf_sendMessage);
}

void Heavy_Echomatica::cCast_73IlY25B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5D1qwoPO, 0, m, &cVar_5D1qwoPO_sendMessage);
}

void Heavy_Echomatica::cCast_c1JySvqx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1E3ELDUW, HV_BINOP_MULTIPLY, 1, m, &cBinop_1E3ELDUW_sendMessage);
}

void Heavy_Echomatica::cCast_Qt5h5jU4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WrU4Hnc4, 0, m, &cVar_WrU4Hnc4_sendMessage);
}

void Heavy_Echomatica::cCast_B46pp2k6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8Lw562CT, HV_BINOP_MULTIPLY, 1, m, &cBinop_8Lw562CT_sendMessage);
}

void Heavy_Echomatica::cCast_uzmMFyo5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hTCnWr9M, HV_BINOP_MULTIPLY, 1, m, &cBinop_hTCnWr9M_sendMessage);
}

void Heavy_Echomatica::cCast_9pbZrC8u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_lMt0FZPR, 0, m, &cVar_lMt0FZPR_sendMessage);
}

void Heavy_Echomatica::cCast_VOcrISbG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VHms1U4n, 0, m, &cVar_VHms1U4n_sendMessage);
}

void Heavy_Echomatica::cCast_p05WaDBr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1zv3RbG7, HV_BINOP_MULTIPLY, 1, m, &cBinop_1zv3RbG7_sendMessage);
}

void Heavy_Echomatica::cCast_yZvGB2GO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4jzHFGbW, HV_BINOP_MULTIPLY, 1, m, &cBinop_4jzHFGbW_sendMessage);
}

void Heavy_Echomatica::cCast_CgInePYs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_nsHZ3qg5, 0, m, &cVar_nsHZ3qg5_sendMessage);
}

void Heavy_Echomatica::cBinop_1PyCn6GB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QbtLOgaO_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_cf9Qdqx7_sendMessage);
}

void Heavy_Echomatica::cMsg_m4674wyc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.5f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_1PyCn6GB, HV_BINOP_MULTIPLY, 1, m, &cBinop_1PyCn6GB_sendMessage);
}

void Heavy_Echomatica::cCast_9aYj9IFy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1PyCn6GB, HV_BINOP_MULTIPLY, 0, m, &cBinop_1PyCn6GB_sendMessage);
}

void Heavy_Echomatica::cCast_nsELbWQe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_m4674wyc_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_dQjculVu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_sLvCfnBm, HV_BINOP_ADD, 1, m, &cBinop_sLvCfnBm_sendMessage);
}

void Heavy_Echomatica::cBinop_sLvCfnBm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YHTadBo3, 0, m, &cVar_YHTadBo3_sendMessage);
}

void Heavy_Echomatica::cCast_cf9Qdqx7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sLvCfnBm, HV_BINOP_ADD, 0, m, &cBinop_sLvCfnBm_sendMessage);
}

void Heavy_Echomatica::cCast_QbtLOgaO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dQjculVu_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_9KTIs3CH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dwd104OH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_MlhzQB24_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hhstRchR_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_DJIugsde_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qqdZkFI7_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_MTQ5rSMq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1BbWSd1x, HV_BINOP_MULTIPLY, 0, m, &cBinop_1BbWSd1x_sendMessage);
}

void Heavy_Echomatica::cCast_7QYqU6BT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fdKn0F5l_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_epqQbPi8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YHTadBo3, 0, m, &cVar_YHTadBo3_sendMessage);
}

void Heavy_Echomatica::cCast_PZiP2kS3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dwd104OH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_GTnMbzOY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_VhO5KuRD, 0, m, &cPack_VhO5KuRD_sendMessage);
}

void Heavy_Echomatica::cReceive_AHGo4oPU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_nMk8NydO, 0, m, &cVar_nMk8NydO_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Xjw6sGdQ, 0, m, &cVar_Xjw6sGdQ_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Cn493HcN, 0, m, &cVar_Cn493HcN_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_XjtXEJQY, 0, m, &cVar_XjtXEJQY_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_eE4lozXK, 0, m, &cVar_eE4lozXK_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_LVZomvos, 0, m, &cVar_LVZomvos_sendMessage);
  cMsg_G5bnS8iH_sendMessage(_c, 0, m);
  cMsg_6QxOmacP_sendMessage(_c, 0, m);
  cMsg_kAEkq5g5_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_7KWjl9XO, 0, m, &cVar_7KWjl9XO_sendMessage);
  cMsg_dxxezqgV_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_VS5cAGYv, 0, m, &cVar_VS5cAGYv_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lYamaklk_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Ji3tW8tS_sendMessage);
  cMsg_5X9a7pbW_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_uFcqtiIJ, 0, m, &cVar_uFcqtiIJ_sendMessage);
  cMsg_0dCbOQim_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_tN8bCPWy, 0, m, &cVar_tN8bCPWy_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Xz0qXzmI_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MPkJfKCB_sendMessage);
  cMsg_bfp3Hs6S_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_pguN2Jbt, 0, m, &cVar_pguN2Jbt_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_300FvRbx_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Vxdvxb9v_sendMessage);
  cMsg_bSHjyWxb_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_7QlbEo1C, 0, m, &cVar_7QlbEo1C_sendMessage);
  cMsg_Ei5Ex3qH_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_6BjG2n7q, 0, m, &cVar_6BjG2n7q_sendMessage);
  cMsg_ntSnY8pl_sendMessage(_c, 0, m);
  cMsg_oYjtL7J5_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_3QcZFRyZ, 0, m, &cVar_3QcZFRyZ_sendMessage);
  cMsg_qePnM5PA_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_jbN6YlAY, 0, m, &cVar_jbN6YlAY_sendMessage);
  cMsg_zCXyA18H_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_xqfJxmG4, 0, m, &cVar_xqfJxmG4_sendMessage);
  cMsg_E9VOzwLP_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_yD9btvbq, 0, m, &cVar_yD9btvbq_sendMessage);
  cMsg_SrUYDLYM_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_haZveYMB, 0, m, &cVar_haZveYMB_sendMessage);
  cMsg_El6eyj8g_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_yKMBNzRk, 0, m, &cVar_yKMBNzRk_sendMessage);
  cMsg_P1kYlCY7_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_vDxGvGF2, 0, m, &cVar_vDxGvGF2_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Knb31ErN, 0, m, &cVar_Knb31ErN_sendMessage);
  cMsg_BxNpvBc4_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Co31oJsU, 0, m, &cVar_Co31oJsU_sendMessage);
  cMsg_jHfnhmeE_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_3RcqADBb, 0, m, &cVar_3RcqADBb_sendMessage);
  cMsg_U52xxtAW_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_tyHDCzQJ, 0, m, &cVar_tyHDCzQJ_sendMessage);
  cMsg_EddEJVM3_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Khx0RnUV, 0, m, &cVar_Khx0RnUV_sendMessage);
  cMsg_oL8EEomi_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ZdjrWlx0, 0, m, &cVar_ZdjrWlx0_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_N6Avutvf, 0, m, &cVar_N6Avutvf_sendMessage);
  cMsg_D1ILjV6I_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_iXwXDOmg, 0, m, &cVar_iXwXDOmg_sendMessage);
  cMsg_1vQp4e02_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_slCKWQaf, 0, m, &cVar_slCKWQaf_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_whukUpWH, 0, m, &cVar_whukUpWH_sendMessage);
  cMsg_jsFYjwIx_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_as2M5kmH, 0, m, &cVar_as2M5kmH_sendMessage);
  cMsg_SV6OKNBH_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_yFDNzwBl, 0, m, &cVar_yFDNzwBl_sendMessage);
  cMsg_lP5GaAP2_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_icn3ZsY2, 0, m, &cVar_icn3ZsY2_sendMessage);
  cMsg_DA7T1A61_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_7YcE2dCu, 0, m, &cVar_7YcE2dCu_sendMessage);
  cMsg_lNYKTXEF_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_20dGcDqU, 0, m, &cVar_20dGcDqU_sendMessage);
  cMsg_1VvLQuc0_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_yzztoBOH, 0, m, &cVar_yzztoBOH_sendMessage);
  cMsg_Uj7kVm4y_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_e8ZbbQNq, 0, m, &cVar_e8ZbbQNq_sendMessage);
  cMsg_UeZ2gLUL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cReceive_DreqRk35_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_B9NmVR9t_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_HH5Oc7I6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_nsHZ3qg5, 0, m, &cVar_nsHZ3qg5_sendMessage);
}

void Heavy_Echomatica::cReceive_D7UVvhlf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VHms1U4n, 0, m, &cVar_VHms1U4n_sendMessage);
}

void Heavy_Echomatica::cReceive_YtjlAZ3I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_lMt0FZPR, 0, m, &cVar_lMt0FZPR_sendMessage);
}

void Heavy_Echomatica::cReceive_d3FxU4Sy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WrU4Hnc4, 0, m, &cVar_WrU4Hnc4_sendMessage);
}

void Heavy_Echomatica::cReceive_voLivBUQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5D1qwoPO, 0, m, &cVar_5D1qwoPO_sendMessage);
}

void Heavy_Echomatica::cReceive_wbvJZ6PN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_oyZOLANp, 0, m, &cVar_oyZOLANp_sendMessage);
}

void Heavy_Echomatica::cReceive_W0joHUfz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_b0nHpU1E, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_k9pVdNuM, 0, m, &cVar_k9pVdNuM_sendMessage);
}

void Heavy_Echomatica::cReceive_weoG44s6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_ycRJC89x, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_l6U0YiAv, 0, m, &cVar_l6U0YiAv_sendMessage);
}

void Heavy_Echomatica::cReceive_sB0PemGI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_xT1IBGgw, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_3mr9UbZ2, 0, m, &cVar_3mr9UbZ2_sendMessage);
}

void Heavy_Echomatica::cReceive_7uHdJJPd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_sI8Nv1FC, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_r3xYtgXX, 0, m, &cVar_r3xYtgXX_sendMessage);
}

void Heavy_Echomatica::cReceive_IlfDBs99_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_iir3VtlR, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_gqklJEyb, 0, m, &cVar_gqklJEyb_sendMessage);
}

void Heavy_Echomatica::cReceive_4xg5GNSz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_C3Dz1GNv, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_PoqrBt6u, 0, m, &cVar_PoqrBt6u_sendMessage);
}

void Heavy_Echomatica::cReceive_RS48hJ3d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_5W1lJtqr, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_T2zcebCB, 0, m, &cVar_T2zcebCB_sendMessage);
}

void Heavy_Echomatica::cReceive_5SiiA3Z4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_iZonZydt, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_b2yNGa7E, 0, m, &cVar_b2yNGa7E_sendMessage);
}

void Heavy_Echomatica::cReceive_8ghr3yoa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_AndQKZQU, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_qgwGpJJJ, 0, m, &cVar_qgwGpJJJ_sendMessage);
}

void Heavy_Echomatica::cReceive_etumewYV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_SEJlmtiZ, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_u3euG7lo, 0, m, &cVar_u3euG7lo_sendMessage);
}

void Heavy_Echomatica::cReceive_jiMMtdfa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_bmQsHHXO, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_tO3ThWCB, 0, m, &cVar_tO3ThWCB_sendMessage);
}

void Heavy_Echomatica::cReceive_ng63AqWL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_OMe2aevs, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_rGNJVHwt, 0, m, &cVar_rGNJVHwt_sendMessage);
}

void Heavy_Echomatica::cReceive_IDR0h9XC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yZvGB2GO_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CgInePYs_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_p05WaDBr_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VOcrISbG_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_uzmMFyo5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9pbZrC8u_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_B46pp2k6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Qt5h5jU4_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_c1JySvqx_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_73IlY25B_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VwsvCs6R_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_57URFlH8_sendMessage);
}

void Heavy_Echomatica::cReceive_5K2SsKzS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_EqBIHvdI_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_Ap4jUK7c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jbN6YlAY, 0, m, &cVar_jbN6YlAY_sendMessage);
}

void Heavy_Echomatica::cReceive_2nm6cRoZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xqfJxmG4, 0, m, &cVar_xqfJxmG4_sendMessage);
}

void Heavy_Echomatica::cReceive_srWtiZGy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_yD9btvbq, 0, m, &cVar_yD9btvbq_sendMessage);
}

void Heavy_Echomatica::cReceive_VNL3j0qQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_haZveYMB, 0, m, &cVar_haZveYMB_sendMessage);
}

void Heavy_Echomatica::cReceive_xqBuho4X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_yKMBNzRk, 0, m, &cVar_yKMBNzRk_sendMessage);
}

void Heavy_Echomatica::cReceive_FKUz2N0f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vDxGvGF2, 0, m, &cVar_vDxGvGF2_sendMessage);
}

void Heavy_Echomatica::cReceive_1AWkmxFH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_TFhYGxzq, m);
}

void Heavy_Echomatica::cReceive_vfuE3N67_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Co31oJsU, 0, m, &cVar_Co31oJsU_sendMessage);
}

void Heavy_Echomatica::cReceive_yeLAXVGA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Knb31ErN, 0, m, &cVar_Knb31ErN_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uDPvBy6Q_sendMessage);
}

void Heavy_Echomatica::cReceive_EIr2rK25_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_I7UMWZec, 0, m, &cVar_I7UMWZec_sendMessage);
}

void Heavy_Echomatica::cReceive_UyrOploK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_BAp0p6TJ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_o0Y8FkCi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_nctw5tqI_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5RBEOGGX_sendMessage);
}

void Heavy_Echomatica::cReceive_aCD4KgSx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZtuhoGbQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AwaVoL4h_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gc4nI4us_sendMessage);
}

void Heavy_Echomatica::cReceive_qXeeACUz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_OE5zfVGz, 0, m, &cPack_OE5zfVGz_sendMessage);
}

void Heavy_Echomatica::cReceive_Z9WE1Rm6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ITj58nKT, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_UlwfD28Y, m);
}

void Heavy_Echomatica::cReceive_QJhHG9uD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GTnMbzOY, HV_BINOP_MULTIPLY, 0, m, &cBinop_GTnMbzOY_sendMessage);
}

void Heavy_Echomatica::cReceive_7tBpPnFW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_xWq1E3Cc_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_6S9JjaYY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_TGwAK6bl, 0, m, &cPack_TGwAK6bl_sendMessage);
}

void Heavy_Echomatica::cReceive_AubRW87C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AsxlWM8d_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MwYu2kdN_sendMessage);
}

void Heavy_Echomatica::cReceive_NmLbu4vw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hqfjWHLk_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mIqKpiZz_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_F67NXIcC_sendMessage);
}

void Heavy_Echomatica::cReceive_TTnEbJl5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kOeJOk8K_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5gAGgYkD_sendMessage);
}

void Heavy_Echomatica::cReceive_f0VJiZVe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_obnRd0xu_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7FrZKNpV_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Vj04TI6e_sendMessage);
}

void Heavy_Echomatica::cReceive_hyPP7UP6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GTnMbzOY, HV_BINOP_MULTIPLY, 1, m, &cBinop_GTnMbzOY_sendMessage);
}

void Heavy_Echomatica::cReceive_2hu9kOI3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_8gOGiH4K, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_I2JfNKOR, m);
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
    __hv_varread_f(&sVarf_ktTk5RXa, VOf(Bf0));
    __hv_biquad_k_f(&sBiquad_k_9bcYGL8N, VIf(Bf0), VOf(Bf1));
    __hv_varread_f(&sVarf_TFhYGxzq, VOf(Bf2));
    __hv_varread_f(&sVarf_a75mUabP, VOf(Bf3));
    __hv_rpole_f(&sRPole_ioxEkdlQ, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_jlTZxsku, VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_4c17RRi2, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_c4MDNjiM, VOf(Bf0));
    __hv_rpole_f(&sRPole_q2X0SOpO, VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_Y3GFOJ7I, VIf(Bf0), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_XxKdqnOx, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_7ZuW4b3L, VOf(Bf3));
    __hv_rpole_f(&sRPole_nwnKRjne, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_dHVAQwQS, VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_gpTnj9zR, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_AH5qt4dC, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_FZ7OxcYK, VOf(Bf3));
    __hv_rpole_f(&sRPole_qAVsm22w, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_YIHO2vB1, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_gDkzLYc7, VOf(Bf3));
    __hv_rpole_f(&sRPole_e6ajDOVR, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_8JHkej1G, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_sFkaTIaW, VOf(Bf3));
    __hv_rpole_f(&sRPole_BnxDtdUT, VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf1), VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_QlKbyFF2, VOf(Bf2));
    __hv_varread_f(&sVarf_8JFxsMvr, VOf(Bf1));
    __hv_varread_f(&sVarf_kuhN6ZLo, VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_Yc57s7OY, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_ebkKyNFf, VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_ruI7XIlK, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_tZDtDSYA, VOf(Bf2));
    __hv_rpole_f(&sRPole_Rbu7AiTw, VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_nDTdHJnz, VIf(Bf2), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_j1Sotq5F, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_ZBBTc1MK, VOf(Bf1));
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_f3Dow5PP, VOf(Bf2));
    __hv_rpole_f(&sRPole_fUjegzsg, VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f);
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_8K50I9lo, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_WygtUEeg, VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    sEnv_process(this, &sEnv_3PQEFAEL, VIf(Bf0), &sEnv_3PQEFAEL_sendMessage);
    __hv_line_f(&sLine_UnW231o1, VOf(Bf4));
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
    __hv_line_f(&sLine_156sTZrN, VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf2), VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f);
    __hv_min_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf5), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_QcQSmtTQ, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_MEAuaK5W, VOf(Bf5));
    __hv_rpole_f(&sRPole_xoO1BVbF, VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_tabwrite_f(&sTabwrite_edxKGKOZ, VIf(Bf5));
    __hv_phasor_k_f(&sPhasor_PGED1c5o, VOf(Bf5));
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
    __hv_varread_f(&sVarf_EeP8lKHx, VOf(Bf2));
    __hv_phasor_k_f(&sPhasor_IGp54lgc, VOf(Bf5));
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
    __hv_varread_f(&sVarf_xSWr8Q64, VOf(Bf6));
    __hv_mul_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf3), VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_1nm1H0nt, VIf(Bf6));
    __hv_line_f(&sLine_cEE2Thq5, VOf(Bf6));
    __hv_varread_f(&sVarf_1nm1H0nt, VOf(Bf2));
    __hv_add_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_tabhead_f(&sTabhead_LxLCRsZg, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_eW42e7H9, VOf(Bf6));
    __hv_mul_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_MZdFYqUK, VOf(Bf2));
    __hv_min_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_dK4Sc7BR, VOf(Bf2));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_hUqlxQ1A, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_2dMprEYX, VIi(Bi0), VOf(Bf2));
    __hv_sub_f(VIf(Bf4), VIf(Bf2), VOf(Bf4));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf4), VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_5W1lJtqr, VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_QlKbyFF2, VIf(Bf3));
    __hv_line_f(&sLine_81fksddM, VOf(Bf3));
    __hv_varread_f(&sVarf_1nm1H0nt, VOf(Bf4));
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_tabhead_f(&sTabhead_irzF4oeb, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_0RnCFVZ4, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_sXe0w3LM, VOf(Bf4));
    __hv_min_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_Of4UBz5e, VOf(Bf4));
    __hv_zero_f(VOf(Bf5));
    __hv_lt_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_cast_fi(VIf(Bf5), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_Fr9NsXjL, VIi(Bi1), VOf(Bf5));
    __hv_tabread_if(&sTabread_eSWMnDxQ, VIi(Bi0), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf5));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf5), VIf(Bf6), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_AndQKZQU, VOf(Bf6));
    __hv_mul_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_8JFxsMvr, VIf(Bf6));
    __hv_line_f(&sLine_XyZsgHQy, VOf(Bf6));
    __hv_varread_f(&sVarf_1nm1H0nt, VOf(Bf5));
    __hv_add_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_tabhead_f(&sTabhead_YHmvWXWG, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_hPCQpE6E, VOf(Bf6));
    __hv_mul_f(VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_0XASQzys, VOf(Bf5));
    __hv_min_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_ZFHGvMLf, VOf(Bf5));
    __hv_zero_f(VOf(Bf7));
    __hv_lt_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_and_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_cast_fi(VIf(Bf7), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_pXs3K8Jc, VIi(Bi1), VOf(Bf7));
    __hv_tabread_if(&sTabread_Mpl8A6eE, VIi(Bi0), VOf(Bf5));
    __hv_sub_f(VIf(Bf7), VIf(Bf5), VOf(Bf7));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf7), VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_bmQsHHXO, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_kuhN6ZLo, VIf(Bf3));
    __hv_line_f(&sLine_3crdJwLz, VOf(Bf3));
    __hv_varread_f(&sVarf_1nm1H0nt, VOf(Bf7));
    __hv_add_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_tabhead_f(&sTabhead_nilPwRGP, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_Lspp143v, VOf(Bf3));
    __hv_mul_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_n48bLJt4, VOf(Bf7));
    __hv_min_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_XzBeLBm0, VOf(Bf7));
    __hv_zero_f(VOf(Bf1));
    __hv_lt_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_and_f(VIf(Bf7), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_cast_fi(VIf(Bf1), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_CWwCW7ii, VIi(Bi1), VOf(Bf1));
    __hv_tabread_if(&sTabread_76Sdk5fA, VIi(Bi0), VOf(Bf7));
    __hv_sub_f(VIf(Bf1), VIf(Bf7), VOf(Bf1));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf1), VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_OMe2aevs, VOf(Bf6));
    __hv_mul_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_Yc57s7OY, VIf(Bf6));
    __hv_line_f(&sLine_reQtjVXh, VOf(Bf6));
    __hv_varread_f(&sVarf_1nm1H0nt, VOf(Bf1));
    __hv_add_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_tabhead_f(&sTabhead_BVMIoETX, VOf(Bf6));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_HRbcrLfr, VOf(Bf6));
    __hv_mul_f(VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_S3LtCZEo, VOf(Bf1));
    __hv_min_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_zero_f(VOf(Bf6));
    __hv_max_f(VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf3));
    __hv_varread_f(&sVarf_nAHm7sbF, VOf(Bf1));
    __hv_zero_f(VOf(Bf0));
    __hv_lt_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_and_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_cast_fi(VIf(Bf0), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_TD5EaW2H, VIi(Bi1), VOf(Bf0));
    __hv_tabread_if(&sTabread_O8fKkOVK, VIi(Bi0), VOf(Bf1));
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf0));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf0), VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_SEJlmtiZ, VOf(Bf3));
    __hv_mul_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_ebkKyNFf, VIf(Bf3));
    __hv_line_f(&sLine_lCk6NFfm, VOf(Bf3));
    __hv_varread_f(&sVarf_1nm1H0nt, VOf(Bf0));
    __hv_add_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_tabhead_f(&sTabhead_TZhQ7ie7, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf6), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_iEp0DvCw, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_jx54f5Jd, VOf(Bf0));
    __hv_min_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_varread_f(&sVarf_qT1RQDjS, VOf(Bf0));
    __hv_zero_f(VOf(Bf8));
    __hv_lt_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_and_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_cast_fi(VIf(Bf8), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_K9W4sqj7, VIi(Bi1), VOf(Bf8));
    __hv_tabread_if(&sTabread_IhcDZeSS, VIi(Bi0), VOf(Bf0));
    __hv_sub_f(VIf(Bf8), VIf(Bf0), VOf(Bf8));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf8), VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_iZonZydt, VOf(Bf6));
    __hv_mul_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_varwrite_f(&sVarf_ruI7XIlK, VIf(Bf6));
    sEnv_process(this, &sEnv_whBehBZa, VIf(I0), &sEnv_whBehBZa_sendMessage);
    __hv_line_f(&sLine_5Edk1GSB, VOf(Bf6));
    __hv_mul_f(VIf(I0), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf8), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf6), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_clq0qRHC, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_QpqJxSdb, VOf(Bf6));
    __hv_rpole_f(&sRPole_AiXyAI5z, VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_xTieSQ6c, VOf(Bf8));
    __hv_rpole_f(&sRPole_LfrsOhBS, VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_sGUPnW8b, VIf(Bf8), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_3NrNi2un, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    sEnv_process(this, &sEnv_WUnBo5nE, VIf(I1), &sEnv_WUnBo5nE_sendMessage);
    __hv_line_f(&sLine_nBi0INz9, VOf(Bf6));
    __hv_mul_f(VIf(I1), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf3), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_0XNJG4jh, VOf(Bf3));
    __hv_mul_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_PkUTK7g3, VOf(Bf6));
    __hv_rpole_f(&sRPole_QkGM47Yt, VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_ugWdewVF, VOf(Bf3));
    __hv_rpole_f(&sRPole_uhGL2jVB, VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_a1ZoLwwg, VIf(Bf3), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_d1t0X95H, VOf(Bf3));
    __hv_mul_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf8), VIf(Bf3), VOf(Bf6));
    __hv_varwrite_f(&sVarf_ktTk5RXa, VIf(Bf6));
    __hv_varread_f(&sVarf_UlwfD28Y, VOf(Bf6));
    __hv_mul_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_8gOGiH4K, VOf(Bf8));
    __hv_line_f(&sLine_b0nHpU1E, VOf(Bf9));
    __hv_line_f(&sLine_ycRJC89x, VOf(Bf10));
    __hv_line_f(&sLine_xT1IBGgw, VOf(Bf11));
    __hv_line_f(&sLine_sI8Nv1FC, VOf(Bf12));
    __hv_line_f(&sLine_iir3VtlR, VOf(Bf13));
    __hv_line_f(&sLine_C3Dz1GNv, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf5), VIf(Bf13), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf1), VIf(Bf12), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf4), VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf0), VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf2), VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_n7SRQPOx, VOf(Bf9));
    __hv_rpole_f(&sRPole_uaow2xLX, VIf(Bf14), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_5Bb08tFp, VIf(Bf9), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_Pd9vwHsA, VOf(Bf9));
    __hv_mul_f(VIf(Bf14), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf14), 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f);
    __hv_min_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf9), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf14), VIf(Bf9), VOf(Bf9));
    __hv_line_f(&sLine_71BUza6o, VOf(Bf14));
    __hv_mul_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_phasor_k_f(&sPhasor_EX7r8EEo, VOf(Bf9));
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
    __hv_tabhead_f(&sTabhead_5BbxfREo, VOf(Bf0));
    __hv_var_k_f_r(VOf(Bf2), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_zdnH15Xq, VOf(Bf0));
    __hv_mul_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_DDrxzuFh, VOf(Bf9));
    __hv_min_f(VIf(Bf0), VIf(Bf9), VOf(Bf9));
    __hv_zero_f(VOf(Bf0));
    __hv_max_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf2));
    __hv_varread_f(&sVarf_fl2CSBEN, VOf(Bf9));
    __hv_zero_f(VOf(Bf11));
    __hv_lt_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_and_f(VIf(Bf9), VIf(Bf11), VOf(Bf11));
    __hv_add_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_cast_fi(VIf(Bf11), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_sZll0OkK, VIi(Bi1), VOf(Bf11));
    __hv_tabread_if(&sTabread_T4iOWoEq, VIi(Bi0), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf11), VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf9), VIf(Bf2), VIf(Bf14), VOf(Bf2));
    __hv_varread_f(&sVarf_42kNemOl, VOf(Bf9));
    __hv_rpole_f(&sRPole_0N3h1GTl, VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_oTHlHW5n, VIf(Bf9), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_AQdobzLW, VOf(Bf9));
    __hv_mul_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_phasor_k_f(&sPhasor_tMFMtpn2, VOf(Bf2));
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
    __hv_tabhead_f(&sTabhead_WleJ1sIc, VOf(Bf10));
    __hv_var_k_f_r(VOf(Bf11), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_MB1Q7O6S, VOf(Bf10));
    __hv_mul_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_SLJ6OGJP, VOf(Bf2));
    __hv_min_f(VIf(Bf10), VIf(Bf2), VOf(Bf2));
    __hv_zero_f(VOf(Bf10));
    __hv_max_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf11), VIf(Bf10), VOf(Bf10));
    __hv_floor_f(VIf(Bf10), VOf(Bf11));
    __hv_varread_f(&sVarf_hxrEJDCQ, VOf(Bf2));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf11), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf11), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_ILUvokF6, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_B6ICL9yf, VIi(Bi0), VOf(Bf2));
    __hv_sub_f(VIf(Bf4), VIf(Bf2), VOf(Bf4));
    __hv_sub_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_fma_f(VIf(Bf4), VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf2), VIf(Bf11), VIf(Bf14), VOf(Bf11));
    __hv_varread_f(&sVarf_6zooMEPV, VOf(Bf2));
    __hv_rpole_f(&sRPole_KphVslPn, VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_WuKU9n0N, VIf(Bf2), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_SbtTQLbX, VOf(Bf2));
    __hv_mul_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_cQz8EdVa, VOf(Bf11));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_tabwrite_f(&sTabwrite_EkNOqRsv, VIf(Bf11));
    __hv_varread_f(&sVarf_BzpxP9IK, VOf(Bf11));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_tabwrite_f(&sTabwrite_wjUPuWPz, VIf(Bf11));
    __hv_fma_f(VIf(Bf6), VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_tJKEYLbi, VOf(Bf8));
    __hv_rpole_f(&sRPole_eAytgqBV, VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_dDnEq3IN, VIf(Bf8), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_gCjxyXHt, VOf(Bf8));
    __hv_mul_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf8), VIf(O0), VOf(O0));
    __hv_varread_f(&sVarf_ITj58nKT, VOf(Bf8));
    __hv_mul_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_I2JfNKOR, VOf(Bf3));
    __hv_fma_f(VIf(Bf8), VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_TEjPzvyA, VOf(Bf3));
    __hv_rpole_f(&sRPole_0oz8HY1Y, VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_7zO4kd2t, VIf(Bf3), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_KXLgqJ87, VOf(Bf3));
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
