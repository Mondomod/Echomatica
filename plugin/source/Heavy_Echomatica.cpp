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
  numBytes += sEnv_init(&sEnv_Nb5oNkiG, 256, 512);
  numBytes += sLine_init(&sLine_FTPAYW2U);
  numBytes += sRPole_init(&sRPole_wc0maAV1);
  numBytes += sRPole_init(&sRPole_8byYcKB0);
  numBytes += sDel1_init(&sDel1_WZQtcOuA);
  numBytes += sEnv_init(&sEnv_x6a9SqzC, 256, 512);
  numBytes += sLine_init(&sLine_ng203YIp);
  numBytes += sRPole_init(&sRPole_BpzCfrqU);
  numBytes += sRPole_init(&sRPole_6maKrhd9);
  numBytes += sDel1_init(&sDel1_jgwJvKdY);
  numBytes += sRPole_init(&sRPole_NZNbs4NB);
  numBytes += sDel1_init(&sDel1_SW4IBZSg);
  numBytes += sRPole_init(&sRPole_hiRQHjhT);
  numBytes += sLine_init(&sLine_FrDZrKF0);
  numBytes += sLine_init(&sLine_RYa26crB);
  numBytes += sEnv_init(&sEnv_uX4yFab0, 256, 512);
  numBytes += sLine_init(&sLine_rOnMJiRx);
  numBytes += sLine_init(&sLine_rapuN80X);
  numBytes += sRPole_init(&sRPole_rf1dzFir);
  numBytes += sRPole_init(&sRPole_Rllhjo2f);
  numBytes += sDel1_init(&sDel1_VQm0lzIX);
  numBytes += sTabwrite_init(&sTabwrite_gKC2zVdV, &hTable_BCJb8UIr);
  numBytes += sPhasor_k_init(&sPhasor_o38TqWxh, 0.0f, sampleRate);
  numBytes += sPhasor_k_init(&sPhasor_CnKKy8lN, 0.0f, sampleRate);
  numBytes += sLine_init(&sLine_2c5EoawP);
  numBytes += sTabhead_init(&sTabhead_gozRbnR7, &hTable_BCJb8UIr);
  numBytes += sTabread_init(&sTabread_iXQUBDwN, &hTable_BCJb8UIr, false);
  numBytes += sTabread_init(&sTabread_RtUi1PGy, &hTable_BCJb8UIr, false);
  numBytes += sLine_init(&sLine_mooCZiIm);
  numBytes += sLine_init(&sLine_OaRpacTh);
  numBytes += sTabhead_init(&sTabhead_TVMk1BgK, &hTable_BCJb8UIr);
  numBytes += sTabread_init(&sTabread_2CGLO9vj, &hTable_BCJb8UIr, false);
  numBytes += sTabread_init(&sTabread_cjziOs4H, &hTable_BCJb8UIr, false);
  numBytes += sLine_init(&sLine_to1yPmy5);
  numBytes += sLine_init(&sLine_O7q5HyEX);
  numBytes += sTabhead_init(&sTabhead_OVXyObTv, &hTable_BCJb8UIr);
  numBytes += sTabread_init(&sTabread_yopL6ePO, &hTable_BCJb8UIr, false);
  numBytes += sTabread_init(&sTabread_7K4oTRPK, &hTable_BCJb8UIr, false);
  numBytes += sLine_init(&sLine_QRYk18cB);
  numBytes += sLine_init(&sLine_9PqKpfMF);
  numBytes += sTabhead_init(&sTabhead_OZSXMMmU, &hTable_BCJb8UIr);
  numBytes += sTabread_init(&sTabread_2XrwtIE0, &hTable_BCJb8UIr, false);
  numBytes += sTabread_init(&sTabread_twUbkvYr, &hTable_BCJb8UIr, false);
  numBytes += sLine_init(&sLine_C6KSpgHg);
  numBytes += sLine_init(&sLine_FWLJyFkE);
  numBytes += sTabhead_init(&sTabhead_syCZzM8H, &hTable_BCJb8UIr);
  numBytes += sTabread_init(&sTabread_GIMJRaTx, &hTable_BCJb8UIr, false);
  numBytes += sTabread_init(&sTabread_thmtqG3Q, &hTable_BCJb8UIr, false);
  numBytes += sLine_init(&sLine_wigRRzvu);
  numBytes += sLine_init(&sLine_Nj79jkk2);
  numBytes += sTabhead_init(&sTabhead_OyOv9HaX, &hTable_BCJb8UIr);
  numBytes += sTabread_init(&sTabread_h07oaUom, &hTable_BCJb8UIr, false);
  numBytes += sTabread_init(&sTabread_gKmQHVzG, &hTable_BCJb8UIr, false);
  numBytes += sLine_init(&sLine_if1ATUur);
  numBytes += sLine_init(&sLine_mBE5U23h);
  numBytes += sLine_init(&sLine_5n26a3BW);
  numBytes += sLine_init(&sLine_BdLvhB5u);
  numBytes += sLine_init(&sLine_QcA2S3wf);
  numBytes += sLine_init(&sLine_yNStFvNS);
  numBytes += sLine_init(&sLine_O0ChwWjA);
  numBytes += sBiquad_k_init(&sBiquad_k_zIYuIMh4, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  numBytes += sRPole_init(&sRPole_PYa1VQkN);
  numBytes += sDel1_init(&sDel1_Seiy9c1B);
  numBytes += sRPole_init(&sRPole_mwySGHg1);
  numBytes += sDel1_init(&sDel1_sY6jGgz0);
  numBytes += sRPole_init(&sRPole_TWb9vKZ1);
  numBytes += sDel1_init(&sDel1_SZXfOcM4);
  numBytes += sRPole_init(&sRPole_ppQuws7H);
  numBytes += sRPole_init(&sRPole_4wjiJimU);
  numBytes += sRPole_init(&sRPole_3ZW7ddWb);
  numBytes += sRPole_init(&sRPole_hmvS3852);
  numBytes += sDel1_init(&sDel1_xGAbzCq9);
  numBytes += sLine_init(&sLine_C9fMf6kV);
  numBytes += sLine_init(&sLine_Mqu92vLE);
  numBytes += sLine_init(&sLine_hjiNq5UJ);
  numBytes += sLine_init(&sLine_971pu4Wp);
  numBytes += sLine_init(&sLine_ZdExB8Dn);
  numBytes += sBiquad_init(&sBiquad_s_KO5YVdax);
  numBytes += sLine_init(&sLine_c2liaKkV);
  numBytes += sPhasor_k_init(&sPhasor_6nnVgvGq, 0.3f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_hQaExkkW, &hTable_tKCV6K1j);
  numBytes += sTabread_init(&sTabread_VDNqKQe2, &hTable_tKCV6K1j, false);
  numBytes += sTabread_init(&sTabread_ycI7tlRw, &hTable_tKCV6K1j, false);
  numBytes += sRPole_init(&sRPole_FXwqjyRD);
  numBytes += sDel1_init(&sDel1_5jvyG9lp);
  numBytes += sPhasor_k_init(&sPhasor_HYGyUm9K, 0.5f, sampleRate);
  numBytes += sTabhead_init(&sTabhead_C00Ozqvn, &hTable_Cww9Aaai);
  numBytes += sTabread_init(&sTabread_fNAVefHb, &hTable_Cww9Aaai, false);
  numBytes += sTabread_init(&sTabread_I7bTGPzS, &hTable_Cww9Aaai, false);
  numBytes += sRPole_init(&sRPole_88A6uMHF);
  numBytes += sDel1_init(&sDel1_SkhS6sYK);
  numBytes += sTabwrite_init(&sTabwrite_TzQpu05y, &hTable_Cww9Aaai);
  numBytes += sTabwrite_init(&sTabwrite_zLbUaPfj, &hTable_tKCV6K1j);
  numBytes += sRPole_init(&sRPole_VWN0Mvmr);
  numBytes += sDel1_init(&sDel1_DbzaMbqE);
  numBytes += sRPole_init(&sRPole_vrIaC6Oy);
  numBytes += sDel1_init(&sDel1_ndOiNXaU);
  numBytes += cVar_init_s(&cVar_snx4qHiQ, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_UwEjYpcq, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_bNMAix0K, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_8HnJ0DRJ, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_rYPQuH0x, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_TnFL5WxE, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_yD1dW6vP, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_fhRMykCS, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_rdDj3QRr, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_83hp7dR2, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_GwSOf3lt, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_967lOrZY, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_pcuhMjSs, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_6QXAvHM3, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_9iXtoVSq, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_FUYZsaki, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_Yqo7HOQg, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_lwezsi9S, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_QfQYDMWs, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_U8VzMNZb, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_oHy1jigl, "del-1001-delayA");
  numBytes += sVarf_init(&sVarf_EgaBcbcy, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ak4L89u4, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ro0vcjx3, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_mmZXsZoZ, 0.0f);
  numBytes += cVar_init_f(&cVar_3Xayiw62, 0.0f);
  numBytes += cVar_init_f(&cVar_aUgAs9HF, 0.0f);
  numBytes += cVar_init_f(&cVar_qkGTIffU, 0.0f);
  numBytes += cVar_init_f(&cVar_4JsIFvRp, 0.0f);
  numBytes += cVar_init_f(&cVar_QXBkzlj3, 0.0f);
  numBytes += cVar_init_f(&cVar_VVPXPIxt, 0.0f);
  numBytes += cVar_init_f(&cVar_VgxWaGju, 0.0f);
  numBytes += cVar_init_f(&cVar_20a5qMVS, 0.0f);
  numBytes += cVar_init_f(&cVar_4RybKmSZ, 0.0f);
  numBytes += cVar_init_f(&cVar_2xedoFGA, 0.0f);
  numBytes += cVar_init_f(&cVar_JETB2EWx, 0.0f);
  numBytes += cPack_init(&cPack_UPMDnnde, 2, 0.0f, 20.0f);
  numBytes += cPack_init(&cPack_avnyHd9W, 2, 0.0f, 1800.0f);
  numBytes += cPack_init(&cPack_lqGobTRF, 2, 0.0f, 1600.0f);
  numBytes += cPack_init(&cPack_ElAGp4UU, 2, 0.0f, 1300.0f);
  numBytes += cPack_init(&cPack_0NI1Nwwr, 2, 0.0f, 1000.0f);
  numBytes += cPack_init(&cPack_l9jYKfhv, 2, 0.0f, 800.0f);
  numBytes += cPack_init(&cPack_5EdSePDj, 2, 0.0f, 600.0f);
  numBytes += cSlice_init(&cSlice_otC57uvU, 27, 1);
  numBytes += cSlice_init(&cSlice_t0VMT1kw, 26, 1);
  numBytes += cSlice_init(&cSlice_uY3sRVw9, 25, 1);
  numBytes += cSlice_init(&cSlice_x84Vg9K3, 24, 1);
  numBytes += cSlice_init(&cSlice_lRzEAqNB, 23, 1);
  numBytes += cSlice_init(&cSlice_SOp1WxpC, 22, 1);
  numBytes += cSlice_init(&cSlice_eUt4oFq7, 21, 1);
  numBytes += cSlice_init(&cSlice_ChvHksT1, 20, 1);
  numBytes += cSlice_init(&cSlice_WTleJNq7, 19, 1);
  numBytes += cSlice_init(&cSlice_NcnOtlrD, 18, 1);
  numBytes += cSlice_init(&cSlice_bRxRs93x, 17, 1);
  numBytes += cSlice_init(&cSlice_NvgqmBzV, 16, 1);
  numBytes += cSlice_init(&cSlice_iUAtxLqx, 15, 1);
  numBytes += cSlice_init(&cSlice_Z3V7tD3A, 14, 1);
  numBytes += cSlice_init(&cSlice_E95nLKVw, 13, 1);
  numBytes += cSlice_init(&cSlice_w4cSyZfu, 12, 1);
  numBytes += cSlice_init(&cSlice_76VNZTfM, 11, 1);
  numBytes += cSlice_init(&cSlice_qo5tKHYo, 10, 1);
  numBytes += cSlice_init(&cSlice_Xg6dOWr1, 9, 1);
  numBytes += cSlice_init(&cSlice_lQutlVHI, 8, 1);
  numBytes += cSlice_init(&cSlice_q434G5WX, 7, 1);
  numBytes += cSlice_init(&cSlice_m5MhjRzH, 6, 1);
  numBytes += cSlice_init(&cSlice_OicPjwSn, 5, 1);
  numBytes += cSlice_init(&cSlice_72dTaJ6s, 4, 1);
  numBytes += cSlice_init(&cSlice_X7PxUCth, 3, 1);
  numBytes += cSlice_init(&cSlice_l9znSy1X, 2, 1);
  numBytes += cSlice_init(&cSlice_AZ85D7k1, 1, 1);
  numBytes += cSlice_init(&cSlice_Rf7kBf35, 0, 1);
  numBytes += cVar_init_f(&cVar_Mnxv93JZ, 0.0f);
  numBytes += cVar_init_f(&cVar_Y28w3QS0, 0.0f);
  numBytes += cVar_init_f(&cVar_u2JtCjQ7, 0.0f);
  numBytes += cVar_init_f(&cVar_BGFRUXso, 0.0f);
  numBytes += cVar_init_f(&cVar_bLCEi6Bq, 0.0f);
  numBytes += cVar_init_f(&cVar_IIq8QX2D, 0.0f);
  numBytes += cSlice_init(&cSlice_ZGodlDNC, 3, 1);
  numBytes += cSlice_init(&cSlice_gPFRVBQI, 2, 1);
  numBytes += cSlice_init(&cSlice_hh5LnZGH, 1, 1);
  numBytes += cSlice_init(&cSlice_SMdLRlLr, 0, 1);
  numBytes += cPack_init(&cPack_vib5KsOu, 2, 0.0f, 50.0f);
  numBytes += cDelay_init(this, &cDelay_Dnpmi6Ur, 0.0f);
  numBytes += cDelay_init(this, &cDelay_hie3Q8pH, 0.0f);
  numBytes += hTable_init(&hTable_Cww9Aaai, 256);
  numBytes += cVar_init_f(&cVar_cFTM7MwE, 0.0f);
  numBytes += cVar_init_s(&cVar_F2xE0lgH, "del-1001-delayD");
  numBytes += sVarf_init(&sVarf_om4fexpZ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_NSv7PfnO, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_xExaIkMZ, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_p68rqAUw, "del-1001-delayC");
  numBytes += sVarf_init(&sVarf_X428eLsW, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_KtLIYQDH, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_GHs7VAYV, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_xY6qHj35, 0.0f);
  numBytes += cDelay_init(this, &cDelay_NQxtxJbl, 0.0f);
  numBytes += hTable_init(&hTable_tKCV6K1j, 256);
  numBytes += sVarf_init(&sVarf_qmst7fiI, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_Kvsx33p6, 3.0f);
  numBytes += cBinop_init(&cBinop_uXUBI9w9, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_wh5jdI5W, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_SiJ3B6AX, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_kdQS4YN3, 3.0f);
  numBytes += cBinop_init(&cBinop_9Xqm5QU0, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_StlTWCsb, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_8bNw7MnH, 1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_S1w46Xbb, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_FUwKm7Xl, 0.0f);
  numBytes += cVar_init_f(&cVar_VUXKDgCH, 0.0f);
  numBytes += cVar_init_f(&cVar_lVZiYiof, 0.0f);
  numBytes += cPack_init(&cPack_PzJR2fdJ, 2, 0.0f, 100.0f);
  numBytes += cPack_init(&cPack_hW4OVxt6, 2, 0.0f, 100.0f);
  numBytes += cVar_init_f(&cVar_PTVQf4EN, 0.0f);
  numBytes += cVar_init_f(&cVar_hguZUHZB, 0.0f);
  numBytes += cVar_init_f(&cVar_EaUimjRb, 0.0f);
  numBytes += cBinop_init(&cBinop_BYESJF8N, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_vQJ8KAWY, 0.0f); // __pow
  numBytes += cIf_init(&cIf_BZ1pcWdS, false);
  numBytes += cBinop_init(&cBinop_WlE7wvk7, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_cwAchbNw, 74.0f);
  numBytes += cVar_init_f(&cVar_NiO50gHW, 3.0f);
  numBytes += cSlice_init(&cSlice_zcBtrljk, 1, -1);
  numBytes += cVar_init_f(&cVar_dyWiqrXs, 1.0f);
  numBytes += cSlice_init(&cSlice_bwqCZ8il, 1, -1);
  numBytes += cVar_init_f(&cVar_Pb8zAgxN, 70.0f);
  numBytes += cBinop_init(&cBinop_4sqfPHaM, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_wKp2Stvs, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_FHKyhKz3, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_ItY5eklg, 3000.0f);
  numBytes += cBinop_init(&cBinop_f3XJSo7v, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_dG7qQITs, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_4U3XS7Ez, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_pbYgEfz4, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_kLZWWcIk, 400.0f);
  numBytes += cBinop_init(&cBinop_J21lnkyd, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_NS5HbRoG, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_rTQDoiJj, false);
  numBytes += cVar_init_f(&cVar_Lo9SqGSi, 0.0f);
  numBytes += cVar_init_f(&cVar_s2Mh37Lq, 0.0f);
  numBytes += cPack_init(&cPack_q8zGVQzk, 3, 0.0f, 500.0f, 100.0f);
  numBytes += cDelay_init(this, &cDelay_TovshJoT, 0.0f);
  numBytes += cVar_init_f(&cVar_siMf0L8v, 20.0f);
  numBytes += cBinop_init(&cBinop_EERJQXjD, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_c6WcZ4ir, 0.0f);
  numBytes += cSlice_init(&cSlice_7zrjZ4PQ, 1, -1);
  numBytes += cSlice_init(&cSlice_STlH5k97, 1, -1);
  numBytes += cVar_init_f(&cVar_4EzoJtqE, 0.0f);
  numBytes += cVar_init_f(&cVar_7IppymMH, 20.0f);
  numBytes += cVar_init_f(&cVar_UduRzusY, 0.0f);
  numBytes += cVar_init_f(&cVar_yvjHa5Ra, 0.0f);
  numBytes += cVar_init_f(&cVar_4Q4zZYI0, 0.0f);
  numBytes += cSlice_init(&cSlice_wCDC3pab, 1, 1);
  numBytes += cSlice_init(&cSlice_0tSfNvXg, 0, 1);
  numBytes += cBinop_init(&cBinop_WMbXBGFq, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_PPjoz3UG, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Fdv4sBN8, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_NToVL156, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_Ul96nv6M, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_wJmBFWpD, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_2sGI4tt9, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_3LUbYNMH, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_cDmNGZ7b, 0.0f);
  numBytes += cVar_init_f(&cVar_RQAnXw2J, 0.0f);
  numBytes += cVar_init_f(&cVar_vrWuad0i, 0.0f);
  numBytes += cVar_init_f(&cVar_CqbkV7s3, 0.0f);
  numBytes += cVar_init_f(&cVar_6hZednY0, 0.0f);
  numBytes += cVar_init_f(&cVar_eAPQHh2V, 0.0f);
  numBytes += sVarf_init(&sVarf_OwznGOuU, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_H4hZkvyc, 8.0f);
  numBytes += cBinop_init(&cBinop_VF2aQBTf, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_pBvZ9PAS, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_Dovpbihy, 0.0f);
  numBytes += cVar_init_f(&cVar_dDKhcHWt, 0.0f);
  numBytes += cBinop_init(&cBinop_tbMjJ0HX, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_D6rXQT5Z, 0.0f); // __pow
  numBytes += cIf_init(&cIf_UYR4kWa3, false);
  numBytes += cBinop_init(&cBinop_aACF1uOF, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_5y8kX3e5, 82.0f);
  numBytes += cVar_init_f(&cVar_upcv88Vf, 21.0f);
  numBytes += cSlice_init(&cSlice_5hfvqLJl, 1, -1);
  numBytes += cVar_init_f(&cVar_j4RQKnGl, 1.0f);
  numBytes += cSlice_init(&cSlice_7xQB2WJm, 1, -1);
  numBytes += cVar_init_f(&cVar_TEQ2zBFP, 70.0f);
  numBytes += cBinop_init(&cBinop_UOqLXgYw, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_2J3JNa4W, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_53Y1wN3V, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_27Ai83pD, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_Ws7BfhR3, 8.0f);
  numBytes += cBinop_init(&cBinop_mawzw8e6, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_jd471sGw, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_2EWMUjZ7, 0.0f);
  numBytes += cVar_init_f(&cVar_FUiaBUsL, 0.0f);
  numBytes += cBinop_init(&cBinop_RksevRFC, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_VB3ols0Z, 0.0f); // __pow
  numBytes += cIf_init(&cIf_vkoLEXtL, false);
  numBytes += cBinop_init(&cBinop_223FnACo, 70.0f); // __gte
  numBytes += cVar_init_f(&cVar_i3oSDQpo, 82.0f);
  numBytes += cVar_init_f(&cVar_A3602Cq4, 21.0f);
  numBytes += cSlice_init(&cSlice_kikrZDKy, 1, -1);
  numBytes += cVar_init_f(&cVar_0xaSRQeo, 1.0f);
  numBytes += cSlice_init(&cSlice_cH0iTeeY, 1, -1);
  numBytes += cVar_init_f(&cVar_0kUr5xiQ, 70.0f);
  numBytes += cBinop_init(&cBinop_dquWBnnD, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_Lol2Qpwi, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_9gWZNYtq, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_0hfyeqqp, 10000.0f);
  numBytes += cBinop_init(&cBinop_bxkS2cQm, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_iGby6NCj, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_jHgHVb50, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_29tsdRPj, 10000.0f);
  numBytes += cBinop_init(&cBinop_KjWuUqcN, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_s5PFyASj, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_3jAPUQlC, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_6uxMA0nW, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_wuZJntqm, 20.0f);
  numBytes += cBinop_init(&cBinop_YS6HvzDH, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_h2s7ejXB, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_6IJCRbCE, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_0CaWucS3, 20.0f);
  numBytes += cBinop_init(&cBinop_hDCuWPEn, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_TDiZrXFu, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_VqXkB29S, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_z6VYyMlN, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_wOAhTO5v, 0.0f);
  numBytes += cDelay_init(this, &cDelay_NT8q3Fxs, 0.0f);
  numBytes += hTable_init(&hTable_BCJb8UIr, 256);
  numBytes += cVar_init_f(&cVar_MnadCqHU, 0.0f);
  numBytes += cVar_init_f(&cVar_r57cRLFe, 0.0f);
  numBytes += cVar_init_f(&cVar_63DWfafC, 1.0f);
  numBytes += cVar_init_f(&cVar_vZvQ8Lys, 0.0f);
  numBytes += sVarf_init(&sVarf_lsdZUGoQ, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_0FTFcIyC, 0.0f);
  numBytes += cBinop_init(&cBinop_kp4Lp0fo, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_Pc84DSgR, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_S8iqCzxL, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_AWdXaDea, 0.0f);
  numBytes += cBinop_init(&cBinop_6OPEgzJ4, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_qnHHwl5D, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_JgjUfi2v, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_T4qrx3vg, 0.0f);
  numBytes += cBinop_init(&cBinop_Or0sYJw3, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_GN806S3e, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_3DsFSspD, 22050.0f);
  numBytes += cBinop_init(&cBinop_wmVh5CIw, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_vWAbx8jJ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_DGqHFwfU, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_tlGfYcYe, 22050.0f);
  numBytes += cBinop_init(&cBinop_9tMq4A6M, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_ZOSayyrT, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_PZcchYy9, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_uiNeEjiW, 22050.0f);
  numBytes += cBinop_init(&cBinop_Bd6JmhDU, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_JQCW5c5r, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_8qQ9fDeS, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_JTma7moe, 22050.0f);
  numBytes += cVar_init_f(&cVar_RVnktDKO, 1.0f);
  numBytes += cBinop_init(&cBinop_796QYtL5, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_AdqjXQAR, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_gG6kOfHN, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_0Pz8GG9v, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ObtPgclO, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_Jd5IfI7t, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_4sUy0y4s, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_JlE73Dur, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_s8eFX2ne, 30.0f);
  numBytes += cBinop_init(&cBinop_xGAXbYFG, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_OLZxLPBZ, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_gxf8Fs9L, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_Clsd9Hzc, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_g83oSy8t, 0.0f);
  numBytes += cBinop_init(&cBinop_49ITMeAb, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Xr4EjoQx, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_7LjXTcKg, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_e3UB8HxH, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_TrZ4uV49, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_47IT6PTC, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_WF6aLpwH, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_FECHX7DV, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_AF3lhzdT, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_TgJZ6egH, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_oRxmLwyq, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_PdOvBlOs, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_Yw9npwH3, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Ywmvm5kz, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_JhecECmZ, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_Z8BGvthx, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_DmHw6h9A, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ibMZAnmX, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_MUPrdDjf, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_hinF8AZw, 4000.0f);
  numBytes += cVar_init_f(&cVar_bBvup8q8, 1.0f);
  numBytes += cVar_init_f(&cVar_pvCqjg0G, -8.0f);
  numBytes += cBinop_init(&cBinop_R2r9hgAg, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_gP9N0kMf, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_8OZccs2D, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_bg9q4FHN, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_mQE9RLr7, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_nqXhAL8E, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_TcnLhCac, 0.0f); // __pow
  numBytes += cBinop_init(&cBinop_uRZtdGOj, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_HIV04IrA, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_eGUSln8E, 20.0f);
  numBytes += cBinop_init(&cBinop_RSRzOPcv, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_PpHMyASw, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_XBbCursp, 8000.0f);
  numBytes += cBinop_init(&cBinop_DVTv3Efu, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_sOw7lxhe, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_nh4UJgRh, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_YKNWwtXX, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_2jHArn8e, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_4S4hCwbB, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_YBEnCjKy, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_t3Ah7FUL, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_2ZBdYLMi, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_3yJhyEpl, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_ua8t4g9B, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_W1bmuHkj, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ONbr3smm, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_EhfjuY5X, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_0gQ5xRON, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_gkjc0VdP, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_jQaeJig7, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_iWls7yAH, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_JArP84x4, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_fZgUTk4j, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_2i9yb8wm, 0.0f, 0.0f, false);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_Echomatica::~Heavy_Echomatica() {
  sEnv_free(&sEnv_Nb5oNkiG);
  sEnv_free(&sEnv_x6a9SqzC);
  sEnv_free(&sEnv_uX4yFab0);
  cPack_free(&cPack_UPMDnnde);
  cPack_free(&cPack_avnyHd9W);
  cPack_free(&cPack_lqGobTRF);
  cPack_free(&cPack_ElAGp4UU);
  cPack_free(&cPack_0NI1Nwwr);
  cPack_free(&cPack_l9jYKfhv);
  cPack_free(&cPack_5EdSePDj);
  cPack_free(&cPack_vib5KsOu);
  hTable_free(&hTable_Cww9Aaai);
  hTable_free(&hTable_tKCV6K1j);
  cPack_free(&cPack_PzJR2fdJ);
  cPack_free(&cPack_hW4OVxt6);
  cPack_free(&cPack_q8zGVQzk);
  hTable_free(&hTable_BCJb8UIr);
}

HvTable *Heavy_Echomatica::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0x6F28B8EB: return &hTable_Cww9Aaai; // del-1001-delayD
    case 0xA74180A2: return &hTable_tKCV6K1j; // del-1001-delayC
    case 0xC7C6279C: return &hTable_BCJb8UIr; // del-1001-delayA
    default: return nullptr;
  }
}

void Heavy_Echomatica::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0x22C9B907: { // Vari
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_i8KL7TYQ_sendMessage);
      break;
    }
    case 0xBC81AC40: { // 1148-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_7ZyvbpgS_sendMessage);
      break;
    }
    case 0xA048D52F: { // 1148-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ITZPZN0v_sendMessage);
      break;
    }
    case 0xA2B0A880: { // 1218-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_eU9DOafj_sendMessage);
      break;
    }
    case 0xE351C9CC: { // 1218-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_PwKS9YDL_sendMessage);
      break;
    }
    case 0xE091EC31: { // 1240-ratio
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_IDbBmNnG_sendMessage);
      break;
    }
    case 0xAE9102A0: { // 1240-threshold
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_SEJvuAJp_sendMessage);
      break;
    }
    case 0x613FB00D: { // 1381-A
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Fwb9OX8M_sendMessage);
      break;
    }
    case 0x84B978CE: { // 1381-sqrtA-alpha-2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_R6dWAix4_sendMessage);
      break;
    }
    case 0xD75E56F: { // 1381-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_fVYK8ldT_sendMessage);
      break;
    }
    case 0xA720EEDB: { // 1381-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_qJ6iuwDh_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_zadroHlT_sendMessage);
      break;
    }
    case 0xE68AB11B: { // chrs
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_mvmaYCgz_sendMessage);
      break;
    }
    case 0xBA8CED4E: { // dry
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_bdPoO3M2_sendMessage);
      break;
    }
    case 0x63E722C0: { // echo
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_UD6yL0Cp_sendMessage);
      break;
    }
    case 0x8FA433B0: { // f1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_JzrPiIua_sendMessage);
      break;
    }
    case 0xEE0EB120: { // f2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_tgq3rJRZ_sendMessage);
      break;
    }
    case 0x4FFCF19F: { // f3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_EW2DCKiD_sendMessage);
      break;
    }
    case 0x2AF9F5EB: { // f4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4AK1rRCB_sendMessage);
      break;
    }
    case 0xC6F6EBB2: { // f5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_WkCWWFFW_sendMessage);
      break;
    }
    case 0x775D6E5E: { // f6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_sh6FpVaX_sendMessage);
      break;
    }
    case 0xBB6123FD: { // fdbck_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_bsSPUJ7R_sendMessage);
      break;
    }
    case 0xF1E7CD16: { // feedback
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_pQwWQx3h_sendMessage);
      break;
    }
    case 0xC7AF3F72: { // h1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_yi7W9N5Z_sendMessage);
      break;
    }
    case 0x9BEBB079: { // h2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_EsYqZ7Wf_sendMessage);
      break;
    }
    case 0xAB1137FD: { // h3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_tK3XB3iA_sendMessage);
      break;
    }
    case 0x2B4C6DE1: { // h4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_jhGxvLr9_sendMessage);
      break;
    }
    case 0x2541E77D: { // h5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1GFAk4wb_sendMessage);
      break;
    }
    case 0xE7F6D341: { // h6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4vGZVEDK_sendMessage);
      break;
    }
    case 0x5667A4DA: { // head1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4NDn1eoO_sendMessage);
      break;
    }
    case 0xAD6B31A5: { // head2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ZcWTzn3G_sendMessage);
      break;
    }
    case 0x8A2BD450: { // head3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_5SMdepz2_sendMessage);
      break;
    }
    case 0xCF5C829A: { // head4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_oVwjhJ7L_sendMessage);
      break;
    }
    case 0xEE70DFBC: { // head5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_fwgmbAns_sendMessage);
      break;
    }
    case 0x8E4B9939: { // head6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9KAmsxX2_sendMessage);
      break;
    }
    case 0x7E24361: { // hp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_DtbdG3ug_sendMessage);
      break;
    }
    case 0x674D12F6: { // hp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_QBQ1Sifn_sendMessage);
      break;
    }
    case 0x6A20C3F5: { // hp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_B3UFS3T4_sendMessage);
      break;
    }
    case 0x123E8795: { // lp1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4Ulzebji_sendMessage);
      break;
    }
    case 0x4588BD1: { // lp2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1Z1pYpkH_sendMessage);
      break;
    }
    case 0xB7298D49: { // lp3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_btRKOyK7_sendMessage);
      break;
    }
    case 0x64BD0F15: { // mf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_2GpaOVYP_sendMessage);
      break;
    }
    case 0x5A12F82E: { // mg
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4OoSbGwk_sendMessage);
      break;
    }
    case 0x2C9C49A7: { // mq
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_h7mYpkps_sendMessage);
      break;
    }
    case 0xC8D93A6D: { // tapehead_mode
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_sUvdnzEz_sendMessage);
      break;
    }
    case 0xB25D05EB: { // varispeed
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_kzR8gSa6_sendMessage);
      break;
    }
    case 0x8ADB5B6B: { // varispeed_enable
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Pav3J2c4_sendMessage);
      break;
    }
    case 0x7BB47B7B: { // wnf
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_FwZcfz5Q_sendMessage);
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


void Heavy_Echomatica::cMsg_h0Z1xoTo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ZgzBNEAZ_sendMessage);
}

void Heavy_Echomatica::cSystem_ZgzBNEAZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_ffOQkMvS_sendMessage);
}

void Heavy_Echomatica::cVar_snx4qHiQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nB5Wbhf5_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_sYkuIiLC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_7pDpOB7D_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_UwEjYpcq, m);
}

void Heavy_Echomatica::cBinop_ffOQkMvS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_bNMAix0K, m);
}

void Heavy_Echomatica::cMsg_nB5Wbhf5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_sYkuIiLC_sendMessage);
}

void Heavy_Echomatica::cBinop_7pDpOB7D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_8HnJ0DRJ, m);
}

void Heavy_Echomatica::cMsg_wPgxdz1J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_a9ndWrmM_sendMessage);
}

void Heavy_Echomatica::cSystem_a9ndWrmM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_wneff3WJ_sendMessage);
}

void Heavy_Echomatica::cVar_rYPQuH0x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_edQjm44H_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_MK032ogx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_NsdVyWSU_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_TnFL5WxE, m);
}

void Heavy_Echomatica::cBinop_wneff3WJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_yD1dW6vP, m);
}

void Heavy_Echomatica::cMsg_edQjm44H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_MK032ogx_sendMessage);
}

void Heavy_Echomatica::cBinop_NsdVyWSU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_fhRMykCS, m);
}

void Heavy_Echomatica::cMsg_biQnDlXC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_rrv3G57w_sendMessage);
}

void Heavy_Echomatica::cSystem_rrv3G57w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_0FijHvG8_sendMessage);
}

void Heavy_Echomatica::cVar_rdDj3QRr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_knPzoKLT_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_AtmhydaC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_58h5oVqg_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_83hp7dR2, m);
}

void Heavy_Echomatica::cBinop_0FijHvG8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_GwSOf3lt, m);
}

void Heavy_Echomatica::cMsg_knPzoKLT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_AtmhydaC_sendMessage);
}

void Heavy_Echomatica::cBinop_58h5oVqg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_967lOrZY, m);
}

void Heavy_Echomatica::cMsg_Z2k8fbFn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_mQMeHQwW_sendMessage);
}

void Heavy_Echomatica::cSystem_mQMeHQwW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_y63Jzsu8_sendMessage);
}

void Heavy_Echomatica::cVar_pcuhMjSs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WaBLNHKq_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_ScZI11Fm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_bTVPA6X4_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_6QXAvHM3, m);
}

void Heavy_Echomatica::cBinop_y63Jzsu8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_9iXtoVSq, m);
}

void Heavy_Echomatica::cMsg_WaBLNHKq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ScZI11Fm_sendMessage);
}

void Heavy_Echomatica::cBinop_bTVPA6X4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_FUYZsaki, m);
}

void Heavy_Echomatica::cCast_obfhrsy0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_M5rKawG2_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_OdwdB29L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_F3XjySzD_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_wQPL2tM1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dQ4nNKqC_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_SGFGJdju_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_T3UHUyKp_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_DkYLYHne_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VmeTA9hb_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_L9HKMHWM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vnJqI78W_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_X42QrQbz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WLvmWR4K_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_8WrBlmPW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nFjm5zx2_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_EJoukaHa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_eR7V7zTV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_Nj5mIukT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_94YL0XLo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_Uz1UfXhP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_M65pZ6oP_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_6UotQvXE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9UinO8LZ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_uFHbKiLB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IlZDdjLJ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_DnUFmkAN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rhs0qKmH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_CumvviSw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4PDv2zob_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_FzMFxpg3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EGAMsjA9_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_B5IpSKNl_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BVw3fmIt_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TAxjuB3b_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ei7ZPHy7_sendMessage);
      break;
    }
    case 0x40400000: { // "3.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jP77LYpi_sendMessage);
      break;
    }
    case 0x40800000: { // "4.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_x7XemBpE_sendMessage);
      break;
    }
    case 0x40A00000: { // "5.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VWhcipwK_sendMessage);
      break;
    }
    case 0x40C00000: { // "6.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bRLzKxQT_sendMessage);
      break;
    }
    case 0x40E00000: { // "7.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_B5t9MZB1_sendMessage);
      break;
    }
    case 0x41000000: { // "8.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mN5hG14K_sendMessage);
      break;
    }
    case 0x41100000: { // "9.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Fln2DOtu_sendMessage);
      break;
    }
    case 0x41200000: { // "10.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2zQhlEAk_sendMessage);
      break;
    }
    case 0x41300000: { // "11.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bMnEb1BZ_sendMessage);
      break;
    }
    case 0x41400000: { // "12.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dH3LsgTJ_sendMessage);
      break;
    }
    case 0x41500000: { // "13.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dhbMGVAn_sendMessage);
      break;
    }
    case 0x41600000: { // "14.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BRp06z97_sendMessage);
      break;
    }
    case 0x41700000: { // "15.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GWo81UfD_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_BVw3fmIt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Uz1UfXhP_sendMessage);
}

void Heavy_Echomatica::cCast_TAxjuB3b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DnUFmkAN_sendMessage);
}

void Heavy_Echomatica::cCast_ei7ZPHy7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EJoukaHa_sendMessage);
}

void Heavy_Echomatica::cCast_jP77LYpi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Nj5mIukT_sendMessage);
}

void Heavy_Echomatica::cCast_x7XemBpE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uFHbKiLB_sendMessage);
}

void Heavy_Echomatica::cCast_VWhcipwK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6UotQvXE_sendMessage);
}

void Heavy_Echomatica::cCast_bRLzKxQT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DkYLYHne_sendMessage);
}

void Heavy_Echomatica::cCast_B5t9MZB1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CumvviSw_sendMessage);
}

void Heavy_Echomatica::cCast_mN5hG14K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FzMFxpg3_sendMessage);
}

void Heavy_Echomatica::cCast_Fln2DOtu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_L9HKMHWM_sendMessage);
}

void Heavy_Echomatica::cCast_2zQhlEAk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OdwdB29L_sendMessage);
}

void Heavy_Echomatica::cCast_bMnEb1BZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wQPL2tM1_sendMessage);
}

void Heavy_Echomatica::cCast_dH3LsgTJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SGFGJdju_sendMessage);
}

void Heavy_Echomatica::cCast_dhbMGVAn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_obfhrsy0_sendMessage);
}

void Heavy_Echomatica::cCast_BRp06z97_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8WrBlmPW_sendMessage);
}

void Heavy_Echomatica::cCast_GWo81UfD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_X42QrQbz_sendMessage);
}

void Heavy_Echomatica::cMsg_eR7V7zTV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_otC57uvU, 0, m, &cSlice_otC57uvU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t0VMT1kw, 0, m, &cSlice_t0VMT1kw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uY3sRVw9, 0, m, &cSlice_uY3sRVw9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_x84Vg9K3, 0, m, &cSlice_x84Vg9K3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lRzEAqNB, 0, m, &cSlice_lRzEAqNB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SOp1WxpC, 0, m, &cSlice_SOp1WxpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eUt4oFq7, 0, m, &cSlice_eUt4oFq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ChvHksT1, 0, m, &cSlice_ChvHksT1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WTleJNq7, 0, m, &cSlice_WTleJNq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NcnOtlrD, 0, m, &cSlice_NcnOtlrD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bRxRs93x, 0, m, &cSlice_bRxRs93x_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NvgqmBzV, 0, m, &cSlice_NvgqmBzV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iUAtxLqx, 0, m, &cSlice_iUAtxLqx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Z3V7tD3A, 0, m, &cSlice_Z3V7tD3A_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_E95nLKVw, 0, m, &cSlice_E95nLKVw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_w4cSyZfu, 0, m, &cSlice_w4cSyZfu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_76VNZTfM, 0, m, &cSlice_76VNZTfM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qo5tKHYo, 0, m, &cSlice_qo5tKHYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Xg6dOWr1, 0, m, &cSlice_Xg6dOWr1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lQutlVHI, 0, m, &cSlice_lQutlVHI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_q434G5WX, 0, m, &cSlice_q434G5WX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m5MhjRzH, 0, m, &cSlice_m5MhjRzH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OicPjwSn, 0, m, &cSlice_OicPjwSn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_72dTaJ6s, 0, m, &cSlice_72dTaJ6s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X7PxUCth, 0, m, &cSlice_X7PxUCth_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l9znSy1X, 0, m, &cSlice_l9znSy1X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AZ85D7k1, 0, m, &cSlice_AZ85D7k1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rf7kBf35, 0, m, &cSlice_Rf7kBf35_sendMessage);
}

void Heavy_Echomatica::cMsg_rhs0qKmH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_otC57uvU, 0, m, &cSlice_otC57uvU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t0VMT1kw, 0, m, &cSlice_t0VMT1kw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uY3sRVw9, 0, m, &cSlice_uY3sRVw9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_x84Vg9K3, 0, m, &cSlice_x84Vg9K3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lRzEAqNB, 0, m, &cSlice_lRzEAqNB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SOp1WxpC, 0, m, &cSlice_SOp1WxpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eUt4oFq7, 0, m, &cSlice_eUt4oFq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ChvHksT1, 0, m, &cSlice_ChvHksT1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WTleJNq7, 0, m, &cSlice_WTleJNq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NcnOtlrD, 0, m, &cSlice_NcnOtlrD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bRxRs93x, 0, m, &cSlice_bRxRs93x_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NvgqmBzV, 0, m, &cSlice_NvgqmBzV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iUAtxLqx, 0, m, &cSlice_iUAtxLqx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Z3V7tD3A, 0, m, &cSlice_Z3V7tD3A_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_E95nLKVw, 0, m, &cSlice_E95nLKVw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_w4cSyZfu, 0, m, &cSlice_w4cSyZfu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_76VNZTfM, 0, m, &cSlice_76VNZTfM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qo5tKHYo, 0, m, &cSlice_qo5tKHYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Xg6dOWr1, 0, m, &cSlice_Xg6dOWr1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lQutlVHI, 0, m, &cSlice_lQutlVHI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_q434G5WX, 0, m, &cSlice_q434G5WX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m5MhjRzH, 0, m, &cSlice_m5MhjRzH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OicPjwSn, 0, m, &cSlice_OicPjwSn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_72dTaJ6s, 0, m, &cSlice_72dTaJ6s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X7PxUCth, 0, m, &cSlice_X7PxUCth_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l9znSy1X, 0, m, &cSlice_l9znSy1X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AZ85D7k1, 0, m, &cSlice_AZ85D7k1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rf7kBf35, 0, m, &cSlice_Rf7kBf35_sendMessage);
}

void Heavy_Echomatica::cMsg_M65pZ6oP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_otC57uvU, 0, m, &cSlice_otC57uvU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t0VMT1kw, 0, m, &cSlice_t0VMT1kw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uY3sRVw9, 0, m, &cSlice_uY3sRVw9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_x84Vg9K3, 0, m, &cSlice_x84Vg9K3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lRzEAqNB, 0, m, &cSlice_lRzEAqNB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SOp1WxpC, 0, m, &cSlice_SOp1WxpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eUt4oFq7, 0, m, &cSlice_eUt4oFq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ChvHksT1, 0, m, &cSlice_ChvHksT1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WTleJNq7, 0, m, &cSlice_WTleJNq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NcnOtlrD, 0, m, &cSlice_NcnOtlrD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bRxRs93x, 0, m, &cSlice_bRxRs93x_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NvgqmBzV, 0, m, &cSlice_NvgqmBzV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iUAtxLqx, 0, m, &cSlice_iUAtxLqx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Z3V7tD3A, 0, m, &cSlice_Z3V7tD3A_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_E95nLKVw, 0, m, &cSlice_E95nLKVw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_w4cSyZfu, 0, m, &cSlice_w4cSyZfu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_76VNZTfM, 0, m, &cSlice_76VNZTfM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qo5tKHYo, 0, m, &cSlice_qo5tKHYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Xg6dOWr1, 0, m, &cSlice_Xg6dOWr1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lQutlVHI, 0, m, &cSlice_lQutlVHI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_q434G5WX, 0, m, &cSlice_q434G5WX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m5MhjRzH, 0, m, &cSlice_m5MhjRzH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OicPjwSn, 0, m, &cSlice_OicPjwSn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_72dTaJ6s, 0, m, &cSlice_72dTaJ6s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X7PxUCth, 0, m, &cSlice_X7PxUCth_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l9znSy1X, 0, m, &cSlice_l9znSy1X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AZ85D7k1, 0, m, &cSlice_AZ85D7k1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rf7kBf35, 0, m, &cSlice_Rf7kBf35_sendMessage);
}

void Heavy_Echomatica::cMsg_94YL0XLo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_otC57uvU, 0, m, &cSlice_otC57uvU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t0VMT1kw, 0, m, &cSlice_t0VMT1kw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uY3sRVw9, 0, m, &cSlice_uY3sRVw9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_x84Vg9K3, 0, m, &cSlice_x84Vg9K3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lRzEAqNB, 0, m, &cSlice_lRzEAqNB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SOp1WxpC, 0, m, &cSlice_SOp1WxpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eUt4oFq7, 0, m, &cSlice_eUt4oFq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ChvHksT1, 0, m, &cSlice_ChvHksT1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WTleJNq7, 0, m, &cSlice_WTleJNq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NcnOtlrD, 0, m, &cSlice_NcnOtlrD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bRxRs93x, 0, m, &cSlice_bRxRs93x_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NvgqmBzV, 0, m, &cSlice_NvgqmBzV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iUAtxLqx, 0, m, &cSlice_iUAtxLqx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Z3V7tD3A, 0, m, &cSlice_Z3V7tD3A_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_E95nLKVw, 0, m, &cSlice_E95nLKVw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_w4cSyZfu, 0, m, &cSlice_w4cSyZfu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_76VNZTfM, 0, m, &cSlice_76VNZTfM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qo5tKHYo, 0, m, &cSlice_qo5tKHYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Xg6dOWr1, 0, m, &cSlice_Xg6dOWr1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lQutlVHI, 0, m, &cSlice_lQutlVHI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_q434G5WX, 0, m, &cSlice_q434G5WX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m5MhjRzH, 0, m, &cSlice_m5MhjRzH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OicPjwSn, 0, m, &cSlice_OicPjwSn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_72dTaJ6s, 0, m, &cSlice_72dTaJ6s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X7PxUCth, 0, m, &cSlice_X7PxUCth_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l9znSy1X, 0, m, &cSlice_l9znSy1X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AZ85D7k1, 0, m, &cSlice_AZ85D7k1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rf7kBf35, 0, m, &cSlice_Rf7kBf35_sendMessage);
}

void Heavy_Echomatica::cMsg_IlZDdjLJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_otC57uvU, 0, m, &cSlice_otC57uvU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t0VMT1kw, 0, m, &cSlice_t0VMT1kw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uY3sRVw9, 0, m, &cSlice_uY3sRVw9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_x84Vg9K3, 0, m, &cSlice_x84Vg9K3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lRzEAqNB, 0, m, &cSlice_lRzEAqNB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SOp1WxpC, 0, m, &cSlice_SOp1WxpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eUt4oFq7, 0, m, &cSlice_eUt4oFq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ChvHksT1, 0, m, &cSlice_ChvHksT1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WTleJNq7, 0, m, &cSlice_WTleJNq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NcnOtlrD, 0, m, &cSlice_NcnOtlrD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bRxRs93x, 0, m, &cSlice_bRxRs93x_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NvgqmBzV, 0, m, &cSlice_NvgqmBzV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iUAtxLqx, 0, m, &cSlice_iUAtxLqx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Z3V7tD3A, 0, m, &cSlice_Z3V7tD3A_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_E95nLKVw, 0, m, &cSlice_E95nLKVw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_w4cSyZfu, 0, m, &cSlice_w4cSyZfu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_76VNZTfM, 0, m, &cSlice_76VNZTfM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qo5tKHYo, 0, m, &cSlice_qo5tKHYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Xg6dOWr1, 0, m, &cSlice_Xg6dOWr1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lQutlVHI, 0, m, &cSlice_lQutlVHI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_q434G5WX, 0, m, &cSlice_q434G5WX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m5MhjRzH, 0, m, &cSlice_m5MhjRzH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OicPjwSn, 0, m, &cSlice_OicPjwSn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_72dTaJ6s, 0, m, &cSlice_72dTaJ6s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X7PxUCth, 0, m, &cSlice_X7PxUCth_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l9znSy1X, 0, m, &cSlice_l9znSy1X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AZ85D7k1, 0, m, &cSlice_AZ85D7k1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rf7kBf35, 0, m, &cSlice_Rf7kBf35_sendMessage);
}

void Heavy_Echomatica::cMsg_9UinO8LZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_otC57uvU, 0, m, &cSlice_otC57uvU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t0VMT1kw, 0, m, &cSlice_t0VMT1kw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uY3sRVw9, 0, m, &cSlice_uY3sRVw9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_x84Vg9K3, 0, m, &cSlice_x84Vg9K3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lRzEAqNB, 0, m, &cSlice_lRzEAqNB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SOp1WxpC, 0, m, &cSlice_SOp1WxpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eUt4oFq7, 0, m, &cSlice_eUt4oFq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ChvHksT1, 0, m, &cSlice_ChvHksT1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WTleJNq7, 0, m, &cSlice_WTleJNq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NcnOtlrD, 0, m, &cSlice_NcnOtlrD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bRxRs93x, 0, m, &cSlice_bRxRs93x_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NvgqmBzV, 0, m, &cSlice_NvgqmBzV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iUAtxLqx, 0, m, &cSlice_iUAtxLqx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Z3V7tD3A, 0, m, &cSlice_Z3V7tD3A_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_E95nLKVw, 0, m, &cSlice_E95nLKVw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_w4cSyZfu, 0, m, &cSlice_w4cSyZfu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_76VNZTfM, 0, m, &cSlice_76VNZTfM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qo5tKHYo, 0, m, &cSlice_qo5tKHYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Xg6dOWr1, 0, m, &cSlice_Xg6dOWr1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lQutlVHI, 0, m, &cSlice_lQutlVHI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_q434G5WX, 0, m, &cSlice_q434G5WX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m5MhjRzH, 0, m, &cSlice_m5MhjRzH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OicPjwSn, 0, m, &cSlice_OicPjwSn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_72dTaJ6s, 0, m, &cSlice_72dTaJ6s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X7PxUCth, 0, m, &cSlice_X7PxUCth_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l9znSy1X, 0, m, &cSlice_l9znSy1X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AZ85D7k1, 0, m, &cSlice_AZ85D7k1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rf7kBf35, 0, m, &cSlice_Rf7kBf35_sendMessage);
}

void Heavy_Echomatica::cMsg_VmeTA9hb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_otC57uvU, 0, m, &cSlice_otC57uvU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t0VMT1kw, 0, m, &cSlice_t0VMT1kw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uY3sRVw9, 0, m, &cSlice_uY3sRVw9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_x84Vg9K3, 0, m, &cSlice_x84Vg9K3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lRzEAqNB, 0, m, &cSlice_lRzEAqNB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SOp1WxpC, 0, m, &cSlice_SOp1WxpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eUt4oFq7, 0, m, &cSlice_eUt4oFq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ChvHksT1, 0, m, &cSlice_ChvHksT1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WTleJNq7, 0, m, &cSlice_WTleJNq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NcnOtlrD, 0, m, &cSlice_NcnOtlrD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bRxRs93x, 0, m, &cSlice_bRxRs93x_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NvgqmBzV, 0, m, &cSlice_NvgqmBzV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iUAtxLqx, 0, m, &cSlice_iUAtxLqx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Z3V7tD3A, 0, m, &cSlice_Z3V7tD3A_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_E95nLKVw, 0, m, &cSlice_E95nLKVw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_w4cSyZfu, 0, m, &cSlice_w4cSyZfu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_76VNZTfM, 0, m, &cSlice_76VNZTfM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qo5tKHYo, 0, m, &cSlice_qo5tKHYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Xg6dOWr1, 0, m, &cSlice_Xg6dOWr1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lQutlVHI, 0, m, &cSlice_lQutlVHI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_q434G5WX, 0, m, &cSlice_q434G5WX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m5MhjRzH, 0, m, &cSlice_m5MhjRzH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OicPjwSn, 0, m, &cSlice_OicPjwSn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_72dTaJ6s, 0, m, &cSlice_72dTaJ6s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X7PxUCth, 0, m, &cSlice_X7PxUCth_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l9znSy1X, 0, m, &cSlice_l9znSy1X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AZ85D7k1, 0, m, &cSlice_AZ85D7k1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rf7kBf35, 0, m, &cSlice_Rf7kBf35_sendMessage);
}

void Heavy_Echomatica::cMsg_4PDv2zob_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_otC57uvU, 0, m, &cSlice_otC57uvU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t0VMT1kw, 0, m, &cSlice_t0VMT1kw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uY3sRVw9, 0, m, &cSlice_uY3sRVw9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_x84Vg9K3, 0, m, &cSlice_x84Vg9K3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lRzEAqNB, 0, m, &cSlice_lRzEAqNB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SOp1WxpC, 0, m, &cSlice_SOp1WxpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eUt4oFq7, 0, m, &cSlice_eUt4oFq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ChvHksT1, 0, m, &cSlice_ChvHksT1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WTleJNq7, 0, m, &cSlice_WTleJNq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NcnOtlrD, 0, m, &cSlice_NcnOtlrD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bRxRs93x, 0, m, &cSlice_bRxRs93x_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NvgqmBzV, 0, m, &cSlice_NvgqmBzV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iUAtxLqx, 0, m, &cSlice_iUAtxLqx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Z3V7tD3A, 0, m, &cSlice_Z3V7tD3A_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_E95nLKVw, 0, m, &cSlice_E95nLKVw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_w4cSyZfu, 0, m, &cSlice_w4cSyZfu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_76VNZTfM, 0, m, &cSlice_76VNZTfM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qo5tKHYo, 0, m, &cSlice_qo5tKHYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Xg6dOWr1, 0, m, &cSlice_Xg6dOWr1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lQutlVHI, 0, m, &cSlice_lQutlVHI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_q434G5WX, 0, m, &cSlice_q434G5WX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m5MhjRzH, 0, m, &cSlice_m5MhjRzH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OicPjwSn, 0, m, &cSlice_OicPjwSn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_72dTaJ6s, 0, m, &cSlice_72dTaJ6s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X7PxUCth, 0, m, &cSlice_X7PxUCth_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l9znSy1X, 0, m, &cSlice_l9znSy1X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AZ85D7k1, 0, m, &cSlice_AZ85D7k1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rf7kBf35, 0, m, &cSlice_Rf7kBf35_sendMessage);
}

void Heavy_Echomatica::cMsg_EGAMsjA9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_otC57uvU, 0, m, &cSlice_otC57uvU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t0VMT1kw, 0, m, &cSlice_t0VMT1kw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uY3sRVw9, 0, m, &cSlice_uY3sRVw9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_x84Vg9K3, 0, m, &cSlice_x84Vg9K3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lRzEAqNB, 0, m, &cSlice_lRzEAqNB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SOp1WxpC, 0, m, &cSlice_SOp1WxpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eUt4oFq7, 0, m, &cSlice_eUt4oFq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ChvHksT1, 0, m, &cSlice_ChvHksT1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WTleJNq7, 0, m, &cSlice_WTleJNq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NcnOtlrD, 0, m, &cSlice_NcnOtlrD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bRxRs93x, 0, m, &cSlice_bRxRs93x_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NvgqmBzV, 0, m, &cSlice_NvgqmBzV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iUAtxLqx, 0, m, &cSlice_iUAtxLqx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Z3V7tD3A, 0, m, &cSlice_Z3V7tD3A_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_E95nLKVw, 0, m, &cSlice_E95nLKVw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_w4cSyZfu, 0, m, &cSlice_w4cSyZfu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_76VNZTfM, 0, m, &cSlice_76VNZTfM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qo5tKHYo, 0, m, &cSlice_qo5tKHYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Xg6dOWr1, 0, m, &cSlice_Xg6dOWr1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lQutlVHI, 0, m, &cSlice_lQutlVHI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_q434G5WX, 0, m, &cSlice_q434G5WX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m5MhjRzH, 0, m, &cSlice_m5MhjRzH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OicPjwSn, 0, m, &cSlice_OicPjwSn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_72dTaJ6s, 0, m, &cSlice_72dTaJ6s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X7PxUCth, 0, m, &cSlice_X7PxUCth_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l9znSy1X, 0, m, &cSlice_l9znSy1X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AZ85D7k1, 0, m, &cSlice_AZ85D7k1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rf7kBf35, 0, m, &cSlice_Rf7kBf35_sendMessage);
}

void Heavy_Echomatica::cMsg_vnJqI78W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_otC57uvU, 0, m, &cSlice_otC57uvU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t0VMT1kw, 0, m, &cSlice_t0VMT1kw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uY3sRVw9, 0, m, &cSlice_uY3sRVw9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_x84Vg9K3, 0, m, &cSlice_x84Vg9K3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lRzEAqNB, 0, m, &cSlice_lRzEAqNB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SOp1WxpC, 0, m, &cSlice_SOp1WxpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eUt4oFq7, 0, m, &cSlice_eUt4oFq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ChvHksT1, 0, m, &cSlice_ChvHksT1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WTleJNq7, 0, m, &cSlice_WTleJNq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NcnOtlrD, 0, m, &cSlice_NcnOtlrD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bRxRs93x, 0, m, &cSlice_bRxRs93x_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NvgqmBzV, 0, m, &cSlice_NvgqmBzV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iUAtxLqx, 0, m, &cSlice_iUAtxLqx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Z3V7tD3A, 0, m, &cSlice_Z3V7tD3A_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_E95nLKVw, 0, m, &cSlice_E95nLKVw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_w4cSyZfu, 0, m, &cSlice_w4cSyZfu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_76VNZTfM, 0, m, &cSlice_76VNZTfM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qo5tKHYo, 0, m, &cSlice_qo5tKHYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Xg6dOWr1, 0, m, &cSlice_Xg6dOWr1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lQutlVHI, 0, m, &cSlice_lQutlVHI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_q434G5WX, 0, m, &cSlice_q434G5WX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m5MhjRzH, 0, m, &cSlice_m5MhjRzH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OicPjwSn, 0, m, &cSlice_OicPjwSn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_72dTaJ6s, 0, m, &cSlice_72dTaJ6s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X7PxUCth, 0, m, &cSlice_X7PxUCth_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l9znSy1X, 0, m, &cSlice_l9znSy1X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AZ85D7k1, 0, m, &cSlice_AZ85D7k1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rf7kBf35, 0, m, &cSlice_Rf7kBf35_sendMessage);
}

void Heavy_Echomatica::cMsg_F3XjySzD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_otC57uvU, 0, m, &cSlice_otC57uvU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t0VMT1kw, 0, m, &cSlice_t0VMT1kw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uY3sRVw9, 0, m, &cSlice_uY3sRVw9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_x84Vg9K3, 0, m, &cSlice_x84Vg9K3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lRzEAqNB, 0, m, &cSlice_lRzEAqNB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SOp1WxpC, 0, m, &cSlice_SOp1WxpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eUt4oFq7, 0, m, &cSlice_eUt4oFq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ChvHksT1, 0, m, &cSlice_ChvHksT1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WTleJNq7, 0, m, &cSlice_WTleJNq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NcnOtlrD, 0, m, &cSlice_NcnOtlrD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bRxRs93x, 0, m, &cSlice_bRxRs93x_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NvgqmBzV, 0, m, &cSlice_NvgqmBzV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iUAtxLqx, 0, m, &cSlice_iUAtxLqx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Z3V7tD3A, 0, m, &cSlice_Z3V7tD3A_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_E95nLKVw, 0, m, &cSlice_E95nLKVw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_w4cSyZfu, 0, m, &cSlice_w4cSyZfu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_76VNZTfM, 0, m, &cSlice_76VNZTfM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qo5tKHYo, 0, m, &cSlice_qo5tKHYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Xg6dOWr1, 0, m, &cSlice_Xg6dOWr1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lQutlVHI, 0, m, &cSlice_lQutlVHI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_q434G5WX, 0, m, &cSlice_q434G5WX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m5MhjRzH, 0, m, &cSlice_m5MhjRzH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OicPjwSn, 0, m, &cSlice_OicPjwSn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_72dTaJ6s, 0, m, &cSlice_72dTaJ6s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X7PxUCth, 0, m, &cSlice_X7PxUCth_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l9znSy1X, 0, m, &cSlice_l9znSy1X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AZ85D7k1, 0, m, &cSlice_AZ85D7k1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rf7kBf35, 0, m, &cSlice_Rf7kBf35_sendMessage);
}

void Heavy_Echomatica::cMsg_dQ4nNKqC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_otC57uvU, 0, m, &cSlice_otC57uvU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t0VMT1kw, 0, m, &cSlice_t0VMT1kw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uY3sRVw9, 0, m, &cSlice_uY3sRVw9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_x84Vg9K3, 0, m, &cSlice_x84Vg9K3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lRzEAqNB, 0, m, &cSlice_lRzEAqNB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SOp1WxpC, 0, m, &cSlice_SOp1WxpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eUt4oFq7, 0, m, &cSlice_eUt4oFq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ChvHksT1, 0, m, &cSlice_ChvHksT1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WTleJNq7, 0, m, &cSlice_WTleJNq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NcnOtlrD, 0, m, &cSlice_NcnOtlrD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bRxRs93x, 0, m, &cSlice_bRxRs93x_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NvgqmBzV, 0, m, &cSlice_NvgqmBzV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iUAtxLqx, 0, m, &cSlice_iUAtxLqx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Z3V7tD3A, 0, m, &cSlice_Z3V7tD3A_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_E95nLKVw, 0, m, &cSlice_E95nLKVw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_w4cSyZfu, 0, m, &cSlice_w4cSyZfu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_76VNZTfM, 0, m, &cSlice_76VNZTfM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qo5tKHYo, 0, m, &cSlice_qo5tKHYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Xg6dOWr1, 0, m, &cSlice_Xg6dOWr1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lQutlVHI, 0, m, &cSlice_lQutlVHI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_q434G5WX, 0, m, &cSlice_q434G5WX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m5MhjRzH, 0, m, &cSlice_m5MhjRzH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OicPjwSn, 0, m, &cSlice_OicPjwSn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_72dTaJ6s, 0, m, &cSlice_72dTaJ6s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X7PxUCth, 0, m, &cSlice_X7PxUCth_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l9znSy1X, 0, m, &cSlice_l9znSy1X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AZ85D7k1, 0, m, &cSlice_AZ85D7k1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rf7kBf35, 0, m, &cSlice_Rf7kBf35_sendMessage);
}

void Heavy_Echomatica::cMsg_T3UHUyKp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_otC57uvU, 0, m, &cSlice_otC57uvU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t0VMT1kw, 0, m, &cSlice_t0VMT1kw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uY3sRVw9, 0, m, &cSlice_uY3sRVw9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_x84Vg9K3, 0, m, &cSlice_x84Vg9K3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lRzEAqNB, 0, m, &cSlice_lRzEAqNB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SOp1WxpC, 0, m, &cSlice_SOp1WxpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eUt4oFq7, 0, m, &cSlice_eUt4oFq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ChvHksT1, 0, m, &cSlice_ChvHksT1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WTleJNq7, 0, m, &cSlice_WTleJNq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NcnOtlrD, 0, m, &cSlice_NcnOtlrD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bRxRs93x, 0, m, &cSlice_bRxRs93x_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NvgqmBzV, 0, m, &cSlice_NvgqmBzV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iUAtxLqx, 0, m, &cSlice_iUAtxLqx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Z3V7tD3A, 0, m, &cSlice_Z3V7tD3A_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_E95nLKVw, 0, m, &cSlice_E95nLKVw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_w4cSyZfu, 0, m, &cSlice_w4cSyZfu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_76VNZTfM, 0, m, &cSlice_76VNZTfM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qo5tKHYo, 0, m, &cSlice_qo5tKHYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Xg6dOWr1, 0, m, &cSlice_Xg6dOWr1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lQutlVHI, 0, m, &cSlice_lQutlVHI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_q434G5WX, 0, m, &cSlice_q434G5WX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m5MhjRzH, 0, m, &cSlice_m5MhjRzH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OicPjwSn, 0, m, &cSlice_OicPjwSn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_72dTaJ6s, 0, m, &cSlice_72dTaJ6s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X7PxUCth, 0, m, &cSlice_X7PxUCth_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l9znSy1X, 0, m, &cSlice_l9znSy1X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AZ85D7k1, 0, m, &cSlice_AZ85D7k1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rf7kBf35, 0, m, &cSlice_Rf7kBf35_sendMessage);
}

void Heavy_Echomatica::cMsg_M5rKawG2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_otC57uvU, 0, m, &cSlice_otC57uvU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t0VMT1kw, 0, m, &cSlice_t0VMT1kw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uY3sRVw9, 0, m, &cSlice_uY3sRVw9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_x84Vg9K3, 0, m, &cSlice_x84Vg9K3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lRzEAqNB, 0, m, &cSlice_lRzEAqNB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SOp1WxpC, 0, m, &cSlice_SOp1WxpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eUt4oFq7, 0, m, &cSlice_eUt4oFq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ChvHksT1, 0, m, &cSlice_ChvHksT1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WTleJNq7, 0, m, &cSlice_WTleJNq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NcnOtlrD, 0, m, &cSlice_NcnOtlrD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bRxRs93x, 0, m, &cSlice_bRxRs93x_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NvgqmBzV, 0, m, &cSlice_NvgqmBzV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iUAtxLqx, 0, m, &cSlice_iUAtxLqx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Z3V7tD3A, 0, m, &cSlice_Z3V7tD3A_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_E95nLKVw, 0, m, &cSlice_E95nLKVw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_w4cSyZfu, 0, m, &cSlice_w4cSyZfu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_76VNZTfM, 0, m, &cSlice_76VNZTfM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qo5tKHYo, 0, m, &cSlice_qo5tKHYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Xg6dOWr1, 0, m, &cSlice_Xg6dOWr1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lQutlVHI, 0, m, &cSlice_lQutlVHI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_q434G5WX, 0, m, &cSlice_q434G5WX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m5MhjRzH, 0, m, &cSlice_m5MhjRzH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OicPjwSn, 0, m, &cSlice_OicPjwSn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_72dTaJ6s, 0, m, &cSlice_72dTaJ6s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X7PxUCth, 0, m, &cSlice_X7PxUCth_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l9znSy1X, 0, m, &cSlice_l9znSy1X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AZ85D7k1, 0, m, &cSlice_AZ85D7k1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rf7kBf35, 0, m, &cSlice_Rf7kBf35_sendMessage);
}

void Heavy_Echomatica::cMsg_nFjm5zx2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_otC57uvU, 0, m, &cSlice_otC57uvU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t0VMT1kw, 0, m, &cSlice_t0VMT1kw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uY3sRVw9, 0, m, &cSlice_uY3sRVw9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_x84Vg9K3, 0, m, &cSlice_x84Vg9K3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lRzEAqNB, 0, m, &cSlice_lRzEAqNB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SOp1WxpC, 0, m, &cSlice_SOp1WxpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eUt4oFq7, 0, m, &cSlice_eUt4oFq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ChvHksT1, 0, m, &cSlice_ChvHksT1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WTleJNq7, 0, m, &cSlice_WTleJNq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NcnOtlrD, 0, m, &cSlice_NcnOtlrD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bRxRs93x, 0, m, &cSlice_bRxRs93x_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NvgqmBzV, 0, m, &cSlice_NvgqmBzV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iUAtxLqx, 0, m, &cSlice_iUAtxLqx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Z3V7tD3A, 0, m, &cSlice_Z3V7tD3A_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_E95nLKVw, 0, m, &cSlice_E95nLKVw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_w4cSyZfu, 0, m, &cSlice_w4cSyZfu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_76VNZTfM, 0, m, &cSlice_76VNZTfM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qo5tKHYo, 0, m, &cSlice_qo5tKHYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Xg6dOWr1, 0, m, &cSlice_Xg6dOWr1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lQutlVHI, 0, m, &cSlice_lQutlVHI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_q434G5WX, 0, m, &cSlice_q434G5WX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m5MhjRzH, 0, m, &cSlice_m5MhjRzH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OicPjwSn, 0, m, &cSlice_OicPjwSn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_72dTaJ6s, 0, m, &cSlice_72dTaJ6s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X7PxUCth, 0, m, &cSlice_X7PxUCth_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l9znSy1X, 0, m, &cSlice_l9znSy1X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AZ85D7k1, 0, m, &cSlice_AZ85D7k1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rf7kBf35, 0, m, &cSlice_Rf7kBf35_sendMessage);
}

void Heavy_Echomatica::cMsg_WLvmWR4K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
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
  cSlice_onMessage(_c, &Context(_c)->cSlice_otC57uvU, 0, m, &cSlice_otC57uvU_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_t0VMT1kw, 0, m, &cSlice_t0VMT1kw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uY3sRVw9, 0, m, &cSlice_uY3sRVw9_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_x84Vg9K3, 0, m, &cSlice_x84Vg9K3_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lRzEAqNB, 0, m, &cSlice_lRzEAqNB_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SOp1WxpC, 0, m, &cSlice_SOp1WxpC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eUt4oFq7, 0, m, &cSlice_eUt4oFq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ChvHksT1, 0, m, &cSlice_ChvHksT1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WTleJNq7, 0, m, &cSlice_WTleJNq7_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NcnOtlrD, 0, m, &cSlice_NcnOtlrD_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_bRxRs93x, 0, m, &cSlice_bRxRs93x_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_NvgqmBzV, 0, m, &cSlice_NvgqmBzV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_iUAtxLqx, 0, m, &cSlice_iUAtxLqx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Z3V7tD3A, 0, m, &cSlice_Z3V7tD3A_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_E95nLKVw, 0, m, &cSlice_E95nLKVw_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_w4cSyZfu, 0, m, &cSlice_w4cSyZfu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_76VNZTfM, 0, m, &cSlice_76VNZTfM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_qo5tKHYo, 0, m, &cSlice_qo5tKHYo_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Xg6dOWr1, 0, m, &cSlice_Xg6dOWr1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lQutlVHI, 0, m, &cSlice_lQutlVHI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_q434G5WX, 0, m, &cSlice_q434G5WX_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_m5MhjRzH, 0, m, &cSlice_m5MhjRzH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_OicPjwSn, 0, m, &cSlice_OicPjwSn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_72dTaJ6s, 0, m, &cSlice_72dTaJ6s_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_X7PxUCth, 0, m, &cSlice_X7PxUCth_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_l9znSy1X, 0, m, &cSlice_l9znSy1X_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_AZ85D7k1, 0, m, &cSlice_AZ85D7k1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Rf7kBf35, 0, m, &cSlice_Rf7kBf35_sendMessage);
}

void Heavy_Echomatica::cMsg_Pw9mwzri_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_22uTxWBD_sendMessage);
}

void Heavy_Echomatica::cSystem_22uTxWBD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_vlBr2f32_sendMessage);
}

void Heavy_Echomatica::cVar_Yqo7HOQg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KpVS1iDD_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_aDmm1leZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_dzusRojE_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_lwezsi9S, m);
}

void Heavy_Echomatica::cBinop_vlBr2f32_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_QfQYDMWs, m);
}

void Heavy_Echomatica::cMsg_KpVS1iDD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_aDmm1leZ_sendMessage);
}

void Heavy_Echomatica::cBinop_dzusRojE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_U8VzMNZb, m);
}

void Heavy_Echomatica::cMsg_V2GsdNFO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_UnIiTktz_sendMessage);
}

void Heavy_Echomatica::cSystem_UnIiTktz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_7aJcckj2_sendMessage);
}

void Heavy_Echomatica::cVar_oHy1jigl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ALDddImk_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_4RSk49xQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_t9aRHJgL_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_EgaBcbcy, m);
}

void Heavy_Echomatica::cBinop_7aJcckj2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ak4L89u4, m);
}

void Heavy_Echomatica::cMsg_ALDddImk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_4RSk49xQ_sendMessage);
}

void Heavy_Echomatica::cBinop_t9aRHJgL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ro0vcjx3, m);
}

void Heavy_Echomatica::cVar_mmZXsZoZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_3Xayiw62_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_aUgAs9HF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_qkGTIffU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_4JsIFvRp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_QXBkzlj3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_VVPXPIxt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_VgxWaGju_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_20a5qMVS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_4RybKmSZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_2xedoFGA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_JETB2EWx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cPack_UPMDnnde_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_c2liaKkV, 0, m, NULL);
}

void Heavy_Echomatica::cPack_avnyHd9W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_2c5EoawP, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_Mnxv93JZ, 0, m, &cVar_Mnxv93JZ_sendMessage);
}

void Heavy_Echomatica::cPack_lqGobTRF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Nj79jkk2, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_Y28w3QS0, 0, m, &cVar_Y28w3QS0_sendMessage);
}

void Heavy_Echomatica::cPack_ElAGp4UU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_OaRpacTh, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_BGFRUXso, 0, m, &cVar_BGFRUXso_sendMessage);
}

void Heavy_Echomatica::cPack_0NI1Nwwr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_FWLJyFkE, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_bLCEi6Bq, 0, m, &cVar_bLCEi6Bq_sendMessage);
}

void Heavy_Echomatica::cPack_l9jYKfhv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_O7q5HyEX, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_IIq8QX2D, 0, m, &cVar_IIq8QX2D_sendMessage);
}

void Heavy_Echomatica::cPack_5EdSePDj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_9PqKpfMF, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_u2JtCjQ7, 0, m, &cVar_u2JtCjQ7_sendMessage);
}

void Heavy_Echomatica::cSlice_otC57uvU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_KePMyN1u_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_t0VMT1kw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_pEfimqS2_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_uY3sRVw9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_H40V3bKN_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_x84Vg9K3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_GQZHIvgH_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_lRzEAqNB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_fBzRJBuv_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_SOp1WxpC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Gkmd3pqR_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_eUt4oFq7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_g1ZQmKNz_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_ChvHksT1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_07B0NQwC_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_WTleJNq7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_CzgsOkcU_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_NcnOtlrD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_K4GRFuh0_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_bRxRs93x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_4ABVRDyb_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_NvgqmBzV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_yXc80qim_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_iUAtxLqx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_DA1RNUsg_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_Z3V7tD3A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_4FiBm9EL_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_E95nLKVw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_8w38xAEG_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_w4cSyZfu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_VCZKp1X5_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_76VNZTfM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_h47MYBBe_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_qo5tKHYo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_zJmfOlAW_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_Xg6dOWr1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_cILFVKFm_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_lQutlVHI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_uK5Vatp0_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_q434G5WX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_5XaTfUhW_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_m5MhjRzH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_qM5AMRaN_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_OicPjwSn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_XQwRlujZ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_72dTaJ6s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_UdkGSBbT_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_X7PxUCth_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Rk6dxEev_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_l9znSy1X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_qAWIUqDH_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_AZ85D7k1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_b4su7Uwh_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_Rf7kBf35_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_jlCLebF8_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_Mnxv93JZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_Y28w3QS0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_u2JtCjQ7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_BGFRUXso_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_bLCEi6Bq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cVar_IIq8QX2D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cSlice_ZGodlDNC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_2i9yb8wm, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_gPFRVBQI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_CnKKy8lN, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_hh5LnZGH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_fZgUTk4j, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_SMdLRlLr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_o38TqWxh, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSwitchcase_KPMkIlSU_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_piq7kQzm_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8khGcg7n_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_piq7kQzm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PhN8TmtX_sendMessage);
}

void Heavy_Echomatica::cPack_vib5KsOu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_FrDZrKF0, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_Ofhp0jov_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_MedLIC0c_sendMessage);
}

void Heavy_Echomatica::cSystem_MedLIC0c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_SGnn3p1p_sendMessage);
}

void Heavy_Echomatica::cDelay_Dnpmi6Ur_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Dnpmi6Ur, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_hie3Q8pH, 0, m, &cDelay_hie3Q8pH_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Dnpmi6Ur, 0, m, &cDelay_Dnpmi6Ur_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_TzQpu05y, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_hie3Q8pH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_hie3Q8pH, m);
  cMsg_Dps72fQU_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_vZMzPk8a_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_X63dvh7i_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_8GldrB47_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6JlU7BBG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_Cww9Aaai_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vVbWsg4S_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Dnpmi6Ur, 2, m, &cDelay_Dnpmi6Ur_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_t4QTPtjA_sendMessage);
}

void Heavy_Echomatica::cMsg_6JlU7BBG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_Cww9Aaai, 0, m, &hTable_Cww9Aaai_sendMessage);
}

void Heavy_Echomatica::cBinop_SGnn3p1p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 40.0f, 0, m, &cBinop_8GldrB47_sendMessage);
}

void Heavy_Echomatica::cMsg_Dps72fQU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_Cww9Aaai, 0, m, &hTable_Cww9Aaai_sendMessage);
}

void Heavy_Echomatica::cCast_t4QTPtjA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_Dnpmi6Ur, 0, m, &cDelay_Dnpmi6Ur_sendMessage);
}

void Heavy_Echomatica::cMsg_vVbWsg4S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_hie3Q8pH, 2, m, &cDelay_hie3Q8pH_sendMessage);
}

void Heavy_Echomatica::cMsg_X63dvh7i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_TzQpu05y, 1, m, NULL);
}

void Heavy_Echomatica::cVar_cFTM7MwE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_8bNw7MnH, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_S1w46Xbb, m);
}

void Heavy_Echomatica::cMsg_SbfaK1pc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_hmfC9SzJ_sendMessage);
}

void Heavy_Echomatica::cSystem_hmfC9SzJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_cm4nwGkO_sendMessage);
}

void Heavy_Echomatica::cVar_F2xE0lgH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mGDmhVsA_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_apvhFZJw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_Nd1MaXH7_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_om4fexpZ, m);
}

void Heavy_Echomatica::cBinop_cm4nwGkO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_NSv7PfnO, m);
}

void Heavy_Echomatica::cMsg_mGDmhVsA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_apvhFZJw_sendMessage);
}

void Heavy_Echomatica::cBinop_Nd1MaXH7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_xExaIkMZ, m);
}

void Heavy_Echomatica::cMsg_YsWUcLeo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_qJeOxjRX_sendMessage);
}

void Heavy_Echomatica::cSystem_qJeOxjRX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_RP4qCtxO_sendMessage);
}

void Heavy_Echomatica::cVar_p68rqAUw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EtYcYClB_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSystem_O5MbDZtC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_pKm4Ycpd_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_X428eLsW, m);
}

void Heavy_Echomatica::cBinop_RP4qCtxO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_KtLIYQDH, m);
}

void Heavy_Echomatica::cMsg_EtYcYClB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_O5MbDZtC_sendMessage);
}

void Heavy_Echomatica::cBinop_pKm4Ycpd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_GHs7VAYV, m);
}

void Heavy_Echomatica::cMsg_83uTvZIK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_RKPc1ymO_sendMessage);
}

void Heavy_Echomatica::cSystem_RKPc1ymO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_4mg0v63q_sendMessage);
}

void Heavy_Echomatica::cDelay_xY6qHj35_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_xY6qHj35, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_NQxtxJbl, 0, m, &cDelay_NQxtxJbl_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_xY6qHj35, 0, m, &cDelay_xY6qHj35_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_zLbUaPfj, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_NQxtxJbl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_NQxtxJbl, m);
  cMsg_eMLCQHd8_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_xcKeANcp_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_9ERSSGWv_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_goDuyG3l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_D9jzyRBz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_tKCV6K1j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QbqDa9dv_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_xY6qHj35, 2, m, &cDelay_xY6qHj35_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RyfhgnPo_sendMessage);
}

void Heavy_Echomatica::cMsg_D9jzyRBz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_tKCV6K1j, 0, m, &hTable_tKCV6K1j_sendMessage);
}

void Heavy_Echomatica::cBinop_4mg0v63q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 30.0f, 0, m, &cBinop_goDuyG3l_sendMessage);
}

void Heavy_Echomatica::cMsg_eMLCQHd8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_tKCV6K1j, 0, m, &hTable_tKCV6K1j_sendMessage);
}

void Heavy_Echomatica::cCast_RyfhgnPo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_xY6qHj35, 0, m, &cDelay_xY6qHj35_sendMessage);
}

void Heavy_Echomatica::cMsg_QbqDa9dv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_NQxtxJbl, 2, m, &cDelay_NQxtxJbl_sendMessage);
}

void Heavy_Echomatica::cMsg_9ERSSGWv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_zLbUaPfj, 1, m, NULL);
}

void Heavy_Echomatica::cBinop_xMQnFkdi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_akYbm2ZS_sendMessage);
}

void Heavy_Echomatica::cBinop_akYbm2ZS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_mwwSc0Nw_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_wFFwCyJY_sendMessage);
}

void Heavy_Echomatica::cVar_Kvsx33p6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_oqtZq1yw_sendMessage);
}

void Heavy_Echomatica::cMsg_4raQGK5q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_4GG8KBjo_sendMessage);
}

void Heavy_Echomatica::cSystem_4GG8KBjo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uXUBI9w9, HV_BINOP_DIVIDE, 1, m, &cBinop_uXUBI9w9_sendMessage);
}

void Heavy_Echomatica::cBinop_mwwSc0Nw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_iaIyX40x_sendMessage);
}

void Heavy_Echomatica::cBinop_iaIyX40x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_wh5jdI5W, m);
}

void Heavy_Echomatica::cMsg_fRKAtxwi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_uDj93gLp_sendMessage);
}

void Heavy_Echomatica::cBinop_uDj93gLp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_xMQnFkdi_sendMessage);
}

void Heavy_Echomatica::cBinop_wFFwCyJY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_qmst7fiI, m);
}

void Heavy_Echomatica::cBinop_oqtZq1yw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_OdAubCTj_sendMessage);
}

void Heavy_Echomatica::cBinop_OdAubCTj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uXUBI9w9, HV_BINOP_DIVIDE, 0, m, &cBinop_uXUBI9w9_sendMessage);
}

void Heavy_Echomatica::cBinop_uXUBI9w9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fRKAtxwi_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_8i7YimsY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_nF621UPo_sendMessage);
}

void Heavy_Echomatica::cBinop_nF621UPo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_WghGrFT7_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_Paitcj5k_sendMessage);
}

void Heavy_Echomatica::cVar_kdQS4YN3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_2F5oVJP9_sendMessage);
}

void Heavy_Echomatica::cMsg_WYU7MmGM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_vjTt5phm_sendMessage);
}

void Heavy_Echomatica::cSystem_vjTt5phm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9Xqm5QU0, HV_BINOP_DIVIDE, 1, m, &cBinop_9Xqm5QU0_sendMessage);
}

void Heavy_Echomatica::cBinop_WghGrFT7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_OUaA5Vvy_sendMessage);
}

void Heavy_Echomatica::cBinop_OUaA5Vvy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_StlTWCsb, m);
}

void Heavy_Echomatica::cMsg_b9uYkT0Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_ap8Q9Of2_sendMessage);
}

void Heavy_Echomatica::cBinop_ap8Q9Of2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_8i7YimsY_sendMessage);
}

void Heavy_Echomatica::cBinop_Paitcj5k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_SiJ3B6AX, m);
}

void Heavy_Echomatica::cBinop_2F5oVJP9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_zzW3DFAb_sendMessage);
}

void Heavy_Echomatica::cBinop_zzW3DFAb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9Xqm5QU0, HV_BINOP_DIVIDE, 0, m, &cBinop_9Xqm5QU0_sendMessage);
}

void Heavy_Echomatica::cBinop_9Xqm5QU0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_b9uYkT0Q_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_FUwKm7Xl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_hW4OVxt6, 0, m, &cPack_hW4OVxt6_sendMessage);
}

void Heavy_Echomatica::cVar_VUXKDgCH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_PzJR2fdJ, 0, m, &cPack_PzJR2fdJ_sendMessage);
}

void Heavy_Echomatica::cVar_lVZiYiof_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_8HEi6zrC_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cPack_PzJR2fdJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_RYa26crB, 0, m, NULL);
}

void Heavy_Echomatica::cPack_hW4OVxt6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_rapuN80X, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_8HEi6zrC_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jvsfLwds_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6HmAtYrR_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jCg3oeBm_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_jvsfLwds_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KSbiTSk9_sendMessage(_c, 0, m);
  cMsg_JT9jdjgy_sendMessage(_c, 0, m);
  cMsg_U3EIKRVv_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_6HmAtYrR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KSbiTSk9_sendMessage(_c, 0, m);
  cMsg_JT9jdjgy_sendMessage(_c, 0, m);
  cMsg_gITuay2l_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_jCg3oeBm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ATgOhNlp_sendMessage(_c, 0, m);
  cMsg_gZEh2IOg_sendMessage(_c, 0, m);
  cMsg_gITuay2l_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_PTVQf4EN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_JdE9Eith_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_hguZUHZB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4sqfPHaM, HV_BINOP_DIVIDE, 0, m, &cBinop_4sqfPHaM_sendMessage);
}

void Heavy_Echomatica::cVar_EaUimjRb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WlE7wvk7, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_WlE7wvk7_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_BZ1pcWdS, 0, m, &cIf_BZ1pcWdS_sendMessage);
}

void Heavy_Echomatica::sEnv_uX4yFab0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_thiHXfn0_sendMessage);
}

void Heavy_Echomatica::cBinop_BYESJF8N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_x5TCU63j_sendMessage);
}

void Heavy_Echomatica::cBinop_x5TCU63j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rm9J60fk_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GOJuUIHJ_sendMessage);
}

void Heavy_Echomatica::cCast_GOJuUIHJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WDJb7ipr_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_rm9J60fk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vQJ8KAWY, HV_BINOP_POW, 1, m, &cBinop_vQJ8KAWY_sendMessage);
}

void Heavy_Echomatica::cMsg_WDJb7ipr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_vQJ8KAWY, HV_BINOP_POW, 0, m, &cBinop_vQJ8KAWY_sendMessage);
}

void Heavy_Echomatica::cBinop_vQJ8KAWY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_KDr1MAYS_sendMessage);
}

void Heavy_Echomatica::cIf_BZ1pcWdS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_BYESJF8N, HV_BINOP_SUBTRACT, 0, m, &cBinop_BYESJF8N_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_wKp2Stvs, HV_BINOP_SUBTRACT, 0, m, &cBinop_wKp2Stvs_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_WlE7wvk7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_BZ1pcWdS, 1, m, &cIf_BZ1pcWdS_sendMessage);
}

void Heavy_Echomatica::cVar_cwAchbNw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_aB7KQbig_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_RAXgSLxz_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Zz5OdsAH_sendMessage);
}

void Heavy_Echomatica::cVar_NiO50gHW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7FeaV5NX_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FjIdXttq_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_4lnciJEf_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_zcBtrljk, 0, m, &cSlice_zcBtrljk_sendMessage);
      break;
    }
    default: {
      cSwitchcase_ppiJZA9T_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_zcBtrljk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_PYZOwrx5_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_PYZOwrx5_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_dyWiqrXs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_PYZOwrx5_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_PYZOwrx5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_7ZyvbpgS_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_ppiJZA9T_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_bwqCZ8il, 0, m, &cSlice_bwqCZ8il_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_bwqCZ8il_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_FiP4an1r_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_FiP4an1r_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_Pb8zAgxN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_FiP4an1r_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_FiP4an1r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ITZPZN0v_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_7FeaV5NX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4sqfPHaM, HV_BINOP_DIVIDE, 1, m, &cBinop_4sqfPHaM_sendMessage);
}

void Heavy_Echomatica::cCast_FjIdXttq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_hguZUHZB, 0, m, &cVar_hguZUHZB_sendMessage);
}

void Heavy_Echomatica::cBinop_4sqfPHaM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FHKyhKz3, HV_BINOP_ADD, 0, m, &cBinop_FHKyhKz3_sendMessage);
}

void Heavy_Echomatica::cBinop_wKp2Stvs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_hguZUHZB, 0, m, &cVar_hguZUHZB_sendMessage);
}

void Heavy_Echomatica::cCast_Zz5OdsAH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_EaUimjRb, 0, m, &cVar_EaUimjRb_sendMessage);
}

void Heavy_Echomatica::cCast_aB7KQbig_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YBFRXpyA_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hYsxDJaV_sendMessage);
}

void Heavy_Echomatica::cCast_RAXgSLxz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WlE7wvk7, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_WlE7wvk7_sendMessage);
}

void Heavy_Echomatica::cBinop_FHKyhKz3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BYESJF8N, HV_BINOP_SUBTRACT, 0, m, &cBinop_BYESJF8N_sendMessage);
}

void Heavy_Echomatica::cCast_rjqhGAHk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_NiO50gHW, 0, m, &cVar_NiO50gHW_sendMessage);
}

void Heavy_Echomatica::cCast_IjeAdheP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cwAchbNw, 0, m, &cVar_cwAchbNw_sendMessage);
}

void Heavy_Echomatica::cCast_6eoGqPpn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BYESJF8N, HV_BINOP_SUBTRACT, 1, m, &cBinop_BYESJF8N_sendMessage);
}

void Heavy_Echomatica::cCast_FwOa1oMk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_EaUimjRb, 0, m, &cVar_EaUimjRb_sendMessage);
}

void Heavy_Echomatica::cBinop_KDr1MAYS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CKLPYGpF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_hYsxDJaV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wKp2Stvs, HV_BINOP_SUBTRACT, 1, m, &cBinop_wKp2Stvs_sendMessage);
}

void Heavy_Echomatica::cCast_YBFRXpyA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FHKyhKz3, HV_BINOP_ADD, 1, m, &cBinop_FHKyhKz3_sendMessage);
}

void Heavy_Echomatica::cBinop_thiHXfn0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6eoGqPpn_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FwOa1oMk_sendMessage);
}

void Heavy_Echomatica::cMsg_CKLPYGpF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_rOnMJiRx, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_KSbiTSk9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_VUXKDgCH, 0, m, &cVar_VUXKDgCH_sendMessage);
}

void Heavy_Echomatica::cMsg_JT9jdjgy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_FUwKm7Xl, 0, m, &cVar_FUwKm7Xl_sendMessage);
}

void Heavy_Echomatica::cMsg_ATgOhNlp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_VUXKDgCH, 0, m, &cVar_VUXKDgCH_sendMessage);
}

void Heavy_Echomatica::cMsg_gZEh2IOg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_FUwKm7Xl, 0, m, &cVar_FUwKm7Xl_sendMessage);
}

void Heavy_Echomatica::cSend_JdE9Eith_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_mvmaYCgz_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_U3EIKRVv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_PTVQf4EN, 0, m, &cVar_PTVQf4EN_sendMessage);
}

void Heavy_Echomatica::cMsg_gITuay2l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_PTVQf4EN, 0, m, &cVar_PTVQf4EN_sendMessage);
}

void Heavy_Echomatica::cVar_ItY5eklg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_f3XJSo7v, HV_BINOP_MULTIPLY, 0, m, &cBinop_f3XJSo7v_sendMessage);
}

void Heavy_Echomatica::cMsg_8qUJ0eCn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_5THelMIG_sendMessage);
}

void Heavy_Echomatica::cSystem_5THelMIG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tsnvfvii_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_f3XJSo7v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_uc4h09yH_sendMessage);
}

void Heavy_Echomatica::cBinop_f0qo640a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_f3XJSo7v, HV_BINOP_MULTIPLY, 1, m, &cBinop_f3XJSo7v_sendMessage);
}

void Heavy_Echomatica::cMsg_tsnvfvii_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_f0qo640a_sendMessage);
}

void Heavy_Echomatica::cBinop_uc4h09yH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_euZGlGOU_sendMessage);
}

void Heavy_Echomatica::cBinop_euZGlGOU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_4DWgri55_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_4U3XS7Ez, m);
}

void Heavy_Echomatica::cBinop_4DWgri55_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_dG7qQITs, m);
}

void Heavy_Echomatica::cBinop_Jhd5L0sC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_iyr6OF3K_sendMessage);
}

void Heavy_Echomatica::cBinop_iyr6OF3K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_kkwX0BHy_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_l2OL0TNN_sendMessage);
}

void Heavy_Echomatica::cVar_kLZWWcIk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_lQPHbeZM_sendMessage);
}

void Heavy_Echomatica::cMsg_nqw2OQvM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_GJoLzDiC_sendMessage);
}

void Heavy_Echomatica::cSystem_GJoLzDiC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_J21lnkyd, HV_BINOP_DIVIDE, 1, m, &cBinop_J21lnkyd_sendMessage);
}

void Heavy_Echomatica::cBinop_kkwX0BHy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_r18V0COM_sendMessage);
}

void Heavy_Echomatica::cBinop_r18V0COM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_NS5HbRoG, m);
}

void Heavy_Echomatica::cMsg_i4Q8LtKn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_d7VhnrOh_sendMessage);
}

void Heavy_Echomatica::cBinop_d7VhnrOh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_Jhd5L0sC_sendMessage);
}

void Heavy_Echomatica::cBinop_l2OL0TNN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_pbYgEfz4, m);
}

void Heavy_Echomatica::cBinop_lQPHbeZM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_KKfCfdhh_sendMessage);
}

void Heavy_Echomatica::cBinop_KKfCfdhh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_J21lnkyd, HV_BINOP_DIVIDE, 0, m, &cBinop_J21lnkyd_sendMessage);
}

void Heavy_Echomatica::cBinop_J21lnkyd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_i4Q8LtKn_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cIf_rTQDoiJj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_Lo9SqGSi, 0, m, &cVar_Lo9SqGSi_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_Lo9SqGSi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ua8t4g9B, HV_BINOP_MULTIPLY, 0, m, &cBinop_ua8t4g9B_sendMessage);
}

void Heavy_Echomatica::cVar_s2Mh37Lq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_rTQDoiJj, 0, m, &cIf_rTQDoiJj_sendMessage);
}

void Heavy_Echomatica::cPack_q8zGVQzk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_VXyZfDQF_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_bE8f2Iqn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_NqlYp4Rg_sendMessage);
}

void Heavy_Echomatica::cSystem_NqlYp4Rg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PPjoz3UG, HV_BINOP_MULTIPLY, 1, m, &cBinop_PPjoz3UG_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_WMbXBGFq, HV_BINOP_MULTIPLY, 1, m, &cBinop_WMbXBGFq_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_m6JpN5EP_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cMsg_1E9f74ng_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_1E9f74ng_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ygNobTbh_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cDelay_TovshJoT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_TovshJoT, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_TovshJoT, 0, m, &cDelay_TovshJoT_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_c6WcZ4ir, 0, m, &cVar_c6WcZ4ir_sendMessage);
}

void Heavy_Echomatica::cCast_ygNobTbh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1E9f74ng_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_TovshJoT, 0, m, &cDelay_TovshJoT_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_c6WcZ4ir, 0, m, &cVar_c6WcZ4ir_sendMessage);
}

void Heavy_Echomatica::cMsg_3UTzKeyt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_5S6yhkKU_sendMessage);
}

void Heavy_Echomatica::cSystem_5S6yhkKU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_pZbzC922_sendMessage);
}

void Heavy_Echomatica::cVar_siMf0L8v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EERJQXjD, HV_BINOP_MULTIPLY, 0, m, &cBinop_EERJQXjD_sendMessage);
}

void Heavy_Echomatica::cMsg_1E9f74ng_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_TovshJoT, 0, m, &cDelay_TovshJoT_sendMessage);
}

void Heavy_Echomatica::cBinop_ynppsZGS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_TovshJoT, 2, m, &cDelay_TovshJoT_sendMessage);
}

void Heavy_Echomatica::cBinop_pZbzC922_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EERJQXjD, HV_BINOP_MULTIPLY, 1, m, &cBinop_EERJQXjD_sendMessage);
}

void Heavy_Echomatica::cBinop_EERJQXjD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_ynppsZGS_sendMessage);
}

void Heavy_Echomatica::cVar_c6WcZ4ir_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Fdv4sBN8, HV_BINOP_SUBTRACT, 0, m, &cBinop_Fdv4sBN8_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_J0o0ztyU_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_5XV8Z1m2_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CNqNEIuy_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_g8NBjEoE_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_CNqNEIuy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4Q4zZYI0, 0, m, &cVar_4Q4zZYI0_sendMessage);
}

void Heavy_Echomatica::cCast_g8NBjEoE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1NFdvxI3_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LfSVGHxM_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_VXyZfDQF_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_7zrjZ4PQ, 0, m, &cSlice_7zrjZ4PQ_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_STlH5k97, 0, m, &cSlice_STlH5k97_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SIVyNK74_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_wCDC3pab, 0, m, &cSlice_wCDC3pab_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_0tSfNvXg, 0, m, &cSlice_0tSfNvXg_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Whdw9bdI_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kOsRebPs_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_7zrjZ4PQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_KXsFvfwx_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_KXsFvfwx_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_STlH5k97_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xxMnISLZ_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5mH2EHbP_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xxMnISLZ_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5mH2EHbP_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_4EzoJtqE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jnWqb12T_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_nHKhLj5I_sendMessage);
}

void Heavy_Echomatica::cVar_7IppymMH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_CnesfWfK_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cSwitchcase_CnesfWfK_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_flVMBdf6_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_PPjoz3UG, HV_BINOP_MULTIPLY, 0, m, &cBinop_PPjoz3UG_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_Ul96nv6M, HV_BINOP_DIVIDE, 1, m, &cBinop_Ul96nv6M_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_siMf0L8v, 0, m, &cVar_siMf0L8v_sendMessage);
      break;
    }
  }
}

void Heavy_Echomatica::cCast_flVMBdf6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1uHNTKwY_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_UduRzusY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3LUbYNMH, HV_BINOP_SUBTRACT, 1, m, &cBinop_3LUbYNMH_sendMessage);
}

void Heavy_Echomatica::cVar_yvjHa5Ra_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4Q4zZYI0, 0, m, &cVar_4Q4zZYI0_sendMessage);
}

void Heavy_Echomatica::cVar_4Q4zZYI0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NToVL156, HV_BINOP_ADD, 0, m, &cBinop_NToVL156_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_2sGI4tt9, HV_BINOP_ADD, 0, m, &cBinop_2sGI4tt9_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5rZbAgWg_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_P2Mt3Hcw_sendMessage);
}

void Heavy_Echomatica::cSlice_wCDC3pab_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jnWqb12T_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_nHKhLj5I_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cSlice_0tSfNvXg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kAxfEBAy_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5SelTe0s_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_5uInfahU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_c6WcZ4ir, 1, m, &cVar_c6WcZ4ir_sendMessage);
}

void Heavy_Echomatica::cBinop_WMbXBGFq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_5uInfahU_sendMessage);
}

void Heavy_Echomatica::cBinop_PPjoz3UG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_qaLurMVL_sendMessage);
}

void Heavy_Echomatica::cBinop_qaLurMVL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Fdv4sBN8, HV_BINOP_SUBTRACT, 1, m, &cBinop_Fdv4sBN8_sendMessage);
}

void Heavy_Echomatica::cBinop_Fdv4sBN8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_c6WcZ4ir, 1, m, &cVar_c6WcZ4ir_sendMessage);
}

void Heavy_Echomatica::cMsg_m4Qfke8m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_m6JpN5EP_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_a3JLnpE3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_m6JpN5EP_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_2sGI4tt9, HV_BINOP_ADD, 1, m, &cBinop_2sGI4tt9_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_NToVL156, HV_BINOP_ADD, 1, m, &cBinop_NToVL156_sendMessage);
}

void Heavy_Echomatica::cBinop_J0o0ztyU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_5XV8Z1m2_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_NToVL156_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4Q4zZYI0, 1, m, &cVar_4Q4zZYI0_sendMessage);
}

void Heavy_Echomatica::cBinop_Ul96nv6M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wJmBFWpD, HV_BINOP_DIVIDE, 1, m, &cBinop_wJmBFWpD_sendMessage);
}

void Heavy_Echomatica::cBinop_wJmBFWpD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2sGI4tt9, HV_BINOP_ADD, 1, m, &cBinop_2sGI4tt9_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_NToVL156, HV_BINOP_ADD, 1, m, &cBinop_NToVL156_sendMessage);
}

void Heavy_Echomatica::cCast_jnWqb12T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WMbXBGFq, HV_BINOP_MULTIPLY, 0, m, &cBinop_WMbXBGFq_sendMessage);
}

void Heavy_Echomatica::cCast_nHKhLj5I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ul96nv6M, HV_BINOP_DIVIDE, 0, m, &cBinop_Ul96nv6M_sendMessage);
}

void Heavy_Echomatica::cCast_kAxfEBAy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_yvjHa5Ra, 1, m, &cVar_yvjHa5Ra_sendMessage);
}

void Heavy_Echomatica::cCast_5SelTe0s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3LUbYNMH, HV_BINOP_SUBTRACT, 0, m, &cBinop_3LUbYNMH_sendMessage);
}

void Heavy_Echomatica::cCast_LfSVGHxM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_yvjHa5Ra, 0, m, &cVar_yvjHa5Ra_sendMessage);
}

void Heavy_Echomatica::cCast_1NFdvxI3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_a3JLnpE3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_2sGI4tt9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_UduRzusY, 0, m, &cVar_UduRzusY_sendMessage);
}

void Heavy_Echomatica::cMsg_KXsFvfwx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_m6JpN5EP_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_RHf7p4Nv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_4EzoJtqE, 1, m, &cVar_4EzoJtqE_sendMessage);
}

void Heavy_Echomatica::cMsg_1uHNTKwY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_PPjoz3UG, HV_BINOP_MULTIPLY, 0, m, &cBinop_PPjoz3UG_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ul96nv6M, HV_BINOP_DIVIDE, 1, m, &cBinop_Ul96nv6M_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_siMf0L8v, 0, m, &cVar_siMf0L8v_sendMessage);
}

void Heavy_Echomatica::cCast_xxMnISLZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KXsFvfwx_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_5mH2EHbP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WdfgPXMZ_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_2sGI4tt9, HV_BINOP_ADD, 0, m, &cBinop_2sGI4tt9_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_4Q4zZYI0, 1, m, &cVar_4Q4zZYI0_sendMessage);
}

void Heavy_Echomatica::cBinop_3LUbYNMH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wJmBFWpD, HV_BINOP_DIVIDE, 0, m, &cBinop_wJmBFWpD_sendMessage);
}

void Heavy_Echomatica::cCast_WdfgPXMZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_a3JLnpE3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_SIVyNK74_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4EzoJtqE, 0, m, &cVar_4EzoJtqE_sendMessage);
}

void Heavy_Echomatica::cCast_Whdw9bdI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_m4Qfke8m_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_kOsRebPs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_RHf7p4Nv_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_cDmNGZ7b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_W1bmuHkj, HV_BINOP_MULTIPLY, 0, m, &cBinop_W1bmuHkj_sendMessage);
}

void Heavy_Echomatica::cVar_RQAnXw2J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ONbr3smm, HV_BINOP_MULTIPLY, 0, m, &cBinop_ONbr3smm_sendMessage);
}

void Heavy_Echomatica::cVar_vrWuad0i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EhfjuY5X, HV_BINOP_MULTIPLY, 0, m, &cBinop_EhfjuY5X_sendMessage);
}

void Heavy_Echomatica::cVar_CqbkV7s3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0gQ5xRON, HV_BINOP_MULTIPLY, 0, m, &cBinop_0gQ5xRON_sendMessage);
}

void Heavy_Echomatica::cVar_6hZednY0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gkjc0VdP, HV_BINOP_MULTIPLY, 0, m, &cBinop_gkjc0VdP_sendMessage);
}

void Heavy_Echomatica::cVar_eAPQHh2V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jQaeJig7, HV_BINOP_MULTIPLY, 0, m, &cBinop_jQaeJig7_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_Ud9U1IzW_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SD9bYUIt_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HqOvtXuk_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cCast_SD9bYUIt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oQtqkJ5n_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_W5sei7YC_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_y7wz1k0Y_sendMessage);
}

void Heavy_Echomatica::cCast_HqOvtXuk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xTJz11Gx_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_p4QiMKS4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_A2RmBekH_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yKqBgBM0_sendMessage);
}

void Heavy_Echomatica::cBinop_PctnfH2O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_aqHXTnzp_sendMessage);
}

void Heavy_Echomatica::cBinop_aqHXTnzp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_t2PEsjkN_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_gThcTJpR_sendMessage);
}

void Heavy_Echomatica::cVar_H4hZkvyc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_DTSw17uf_sendMessage);
}

void Heavy_Echomatica::cMsg_DiZqa2bZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_FC0WVVLj_sendMessage);
}

void Heavy_Echomatica::cSystem_FC0WVVLj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VF2aQBTf, HV_BINOP_DIVIDE, 1, m, &cBinop_VF2aQBTf_sendMessage);
}

void Heavy_Echomatica::cBinop_t2PEsjkN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_p2TlAtAK_sendMessage);
}

void Heavy_Echomatica::cBinop_p2TlAtAK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_pBvZ9PAS, m);
}

void Heavy_Echomatica::cMsg_OG4ehple_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_LflAUNQZ_sendMessage);
}

void Heavy_Echomatica::cBinop_LflAUNQZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_PctnfH2O_sendMessage);
}

void Heavy_Echomatica::cBinop_gThcTJpR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_OwznGOuU, m);
}

void Heavy_Echomatica::cBinop_DTSw17uf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_imUu25hL_sendMessage);
}

void Heavy_Echomatica::cBinop_imUu25hL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VF2aQBTf, HV_BINOP_DIVIDE, 0, m, &cBinop_VF2aQBTf_sendMessage);
}

void Heavy_Echomatica::cBinop_VF2aQBTf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OG4ehple_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_Dovpbihy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UOqLXgYw, HV_BINOP_DIVIDE, 0, m, &cBinop_UOqLXgYw_sendMessage);
}

void Heavy_Echomatica::cVar_dDKhcHWt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aACF1uOF, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_aACF1uOF_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_UYR4kWa3, 0, m, &cIf_UYR4kWa3_sendMessage);
}

void Heavy_Echomatica::sEnv_Nb5oNkiG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_BcWpYTt2_sendMessage);
}

void Heavy_Echomatica::cBinop_tbMjJ0HX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_XOVtwKvK_sendMessage);
}

void Heavy_Echomatica::cBinop_XOVtwKvK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3OhPKkdj_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7LBwykEt_sendMessage);
}

void Heavy_Echomatica::cCast_7LBwykEt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DhyLEhEh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_3OhPKkdj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_D6rXQT5Z, HV_BINOP_POW, 1, m, &cBinop_D6rXQT5Z_sendMessage);
}

void Heavy_Echomatica::cMsg_DhyLEhEh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_D6rXQT5Z, HV_BINOP_POW, 0, m, &cBinop_D6rXQT5Z_sendMessage);
}

void Heavy_Echomatica::cBinop_D6rXQT5Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_aZLJ6w54_sendMessage);
}

void Heavy_Echomatica::cIf_UYR4kWa3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_tbMjJ0HX, HV_BINOP_SUBTRACT, 0, m, &cBinop_tbMjJ0HX_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_2J3JNa4W, HV_BINOP_SUBTRACT, 0, m, &cBinop_2J3JNa4W_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_aACF1uOF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_UYR4kWa3, 1, m, &cIf_UYR4kWa3_sendMessage);
}

void Heavy_Echomatica::cVar_5y8kX3e5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mTHJm4om_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AOPJtdqt_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Timz6Gnp_sendMessage);
}

void Heavy_Echomatica::cVar_upcv88Vf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_u5ZN9uq0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hxhlXgoL_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_YNaZCrIr_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_5hfvqLJl, 0, m, &cSlice_5hfvqLJl_sendMessage);
      break;
    }
    default: {
      cSwitchcase_7BFl5Yz7_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_5hfvqLJl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_hW92ufBj_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_hW92ufBj_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_j4RQKnGl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_hW92ufBj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_hW92ufBj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_eU9DOafj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_7BFl5Yz7_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_7xQB2WJm, 0, m, &cSlice_7xQB2WJm_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_7xQB2WJm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_wOtHwJAV_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_wOtHwJAV_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_TEQ2zBFP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_wOtHwJAV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_wOtHwJAV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_PwKS9YDL_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_hxhlXgoL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Dovpbihy, 0, m, &cVar_Dovpbihy_sendMessage);
}

void Heavy_Echomatica::cCast_u5ZN9uq0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UOqLXgYw, HV_BINOP_DIVIDE, 1, m, &cBinop_UOqLXgYw_sendMessage);
}

void Heavy_Echomatica::cBinop_UOqLXgYw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_53Y1wN3V, HV_BINOP_ADD, 0, m, &cBinop_53Y1wN3V_sendMessage);
}

void Heavy_Echomatica::cBinop_2J3JNa4W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Dovpbihy, 0, m, &cVar_Dovpbihy_sendMessage);
}

void Heavy_Echomatica::cCast_mTHJm4om_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_cgN0rb8K_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sAzacwBE_sendMessage);
}

void Heavy_Echomatica::cCast_Timz6Gnp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_dDKhcHWt, 0, m, &cVar_dDKhcHWt_sendMessage);
}

void Heavy_Echomatica::cCast_AOPJtdqt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aACF1uOF, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_aACF1uOF_sendMessage);
}

void Heavy_Echomatica::cBinop_53Y1wN3V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tbMjJ0HX, HV_BINOP_SUBTRACT, 0, m, &cBinop_tbMjJ0HX_sendMessage);
}

void Heavy_Echomatica::cCast_qOPCpDB9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_upcv88Vf, 0, m, &cVar_upcv88Vf_sendMessage);
}

void Heavy_Echomatica::cCast_n7NOwdnB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5y8kX3e5, 0, m, &cVar_5y8kX3e5_sendMessage);
}

void Heavy_Echomatica::cCast_uE6tFGTZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tbMjJ0HX, HV_BINOP_SUBTRACT, 1, m, &cBinop_tbMjJ0HX_sendMessage);
}

void Heavy_Echomatica::cCast_erGvxHjB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_dDKhcHWt, 0, m, &cVar_dDKhcHWt_sendMessage);
}

void Heavy_Echomatica::cBinop_aZLJ6w54_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7rb7EF5J_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_cgN0rb8K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_53Y1wN3V, HV_BINOP_ADD, 1, m, &cBinop_53Y1wN3V_sendMessage);
}

void Heavy_Echomatica::cCast_sAzacwBE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2J3JNa4W, HV_BINOP_SUBTRACT, 1, m, &cBinop_2J3JNa4W_sendMessage);
}

void Heavy_Echomatica::cBinop_BcWpYTt2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_uE6tFGTZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_erGvxHjB_sendMessage);
}

void Heavy_Echomatica::cMsg_7rb7EF5J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_FTPAYW2U, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_MvZXvKZi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_LdhU3epm_sendMessage);
}

void Heavy_Echomatica::cBinop_LdhU3epm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Gv5DWjHX_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_ffLx9gp7_sendMessage);
}

void Heavy_Echomatica::cVar_Ws7BfhR3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_Vyf192BO_sendMessage);
}

void Heavy_Echomatica::cMsg_tgnCmMgZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_E2oFyTXW_sendMessage);
}

void Heavy_Echomatica::cSystem_E2oFyTXW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mawzw8e6, HV_BINOP_DIVIDE, 1, m, &cBinop_mawzw8e6_sendMessage);
}

void Heavy_Echomatica::cBinop_Gv5DWjHX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_hlrOxx3K_sendMessage);
}

void Heavy_Echomatica::cBinop_hlrOxx3K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_jd471sGw, m);
}

void Heavy_Echomatica::cMsg_G8XEssdy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_E6pFUiyu_sendMessage);
}

void Heavy_Echomatica::cBinop_E6pFUiyu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_MvZXvKZi_sendMessage);
}

void Heavy_Echomatica::cBinop_ffLx9gp7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_27Ai83pD, m);
}

void Heavy_Echomatica::cBinop_Vyf192BO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_c2zPrZCC_sendMessage);
}

void Heavy_Echomatica::cBinop_c2zPrZCC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mawzw8e6, HV_BINOP_DIVIDE, 0, m, &cBinop_mawzw8e6_sendMessage);
}

void Heavy_Echomatica::cBinop_mawzw8e6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_G8XEssdy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_2EWMUjZ7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dquWBnnD, HV_BINOP_DIVIDE, 0, m, &cBinop_dquWBnnD_sendMessage);
}

void Heavy_Echomatica::cVar_FUiaBUsL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_223FnACo, HV_BINOP_GREATER_THAN_EQL, 0, m, &cBinop_223FnACo_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_vkoLEXtL, 0, m, &cIf_vkoLEXtL_sendMessage);
}

void Heavy_Echomatica::sEnv_x6a9SqzC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_7elyRBS6_sendMessage);
}

void Heavy_Echomatica::cBinop_RksevRFC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_xdQhzHLl_sendMessage);
}

void Heavy_Echomatica::cBinop_xdQhzHLl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dOxQ81Dq_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CbjtNFSS_sendMessage);
}

void Heavy_Echomatica::cCast_dOxQ81Dq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VB3ols0Z, HV_BINOP_POW, 1, m, &cBinop_VB3ols0Z_sendMessage);
}

void Heavy_Echomatica::cCast_CbjtNFSS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_57R6X1c3_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_57R6X1c3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_VB3ols0Z, HV_BINOP_POW, 0, m, &cBinop_VB3ols0Z_sendMessage);
}

void Heavy_Echomatica::cBinop_VB3ols0Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_beySiT14_sendMessage);
}

void Heavy_Echomatica::cIf_vkoLEXtL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_RksevRFC, HV_BINOP_SUBTRACT, 0, m, &cBinop_RksevRFC_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_Lol2Qpwi, HV_BINOP_SUBTRACT, 0, m, &cBinop_Lol2Qpwi_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cBinop_223FnACo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_vkoLEXtL, 1, m, &cIf_vkoLEXtL_sendMessage);
}

void Heavy_Echomatica::cVar_i3oSDQpo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Qng4oObR_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_OXl3QW6t_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_N2oFjBUQ_sendMessage);
}

void Heavy_Echomatica::cVar_A3602Cq4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hskleCYv_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dgeEH6JA_sendMessage);
}

void Heavy_Echomatica::cSwitchcase_rXL84drR_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x97002D7B: { // "ratio"
      cSlice_onMessage(_c, &Context(_c)->cSlice_kikrZDKy, 0, m, &cSlice_kikrZDKy_sendMessage);
      break;
    }
    default: {
      cSwitchcase_Q0dqh5AA_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_kikrZDKy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_wLaxJMZH_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_wLaxJMZH_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_0xaSRQeo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_wLaxJMZH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_wLaxJMZH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IDbBmNnG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_Q0dqh5AA_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x240EF446: { // "threshold"
      cSlice_onMessage(_c, &Context(_c)->cSlice_cH0iTeeY, 0, m, &cSlice_cH0iTeeY_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cSlice_cH0iTeeY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_0UFWjeHU_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_0UFWjeHU_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Echomatica::cVar_0kUr5xiQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_0UFWjeHU_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_0UFWjeHU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_SEJvuAJp_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_dgeEH6JA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_2EWMUjZ7, 0, m, &cVar_2EWMUjZ7_sendMessage);
}

void Heavy_Echomatica::cCast_hskleCYv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dquWBnnD, HV_BINOP_DIVIDE, 1, m, &cBinop_dquWBnnD_sendMessage);
}

void Heavy_Echomatica::cBinop_dquWBnnD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9gWZNYtq, HV_BINOP_ADD, 0, m, &cBinop_9gWZNYtq_sendMessage);
}

void Heavy_Echomatica::cBinop_Lol2Qpwi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_2EWMUjZ7, 0, m, &cVar_2EWMUjZ7_sendMessage);
}

void Heavy_Echomatica::cCast_Qng4oObR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sZwPLx9u_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_o9gaCmkc_sendMessage);
}

void Heavy_Echomatica::cCast_OXl3QW6t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_223FnACo, HV_BINOP_GREATER_THAN_EQL, 1, m, &cBinop_223FnACo_sendMessage);
}

void Heavy_Echomatica::cCast_N2oFjBUQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FUiaBUsL, 0, m, &cVar_FUiaBUsL_sendMessage);
}

void Heavy_Echomatica::cBinop_9gWZNYtq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RksevRFC, HV_BINOP_SUBTRACT, 0, m, &cBinop_RksevRFC_sendMessage);
}

void Heavy_Echomatica::cCast_pH5bFUuv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_A3602Cq4, 0, m, &cVar_A3602Cq4_sendMessage);
}

void Heavy_Echomatica::cCast_MLbhr7Xr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_i3oSDQpo, 0, m, &cVar_i3oSDQpo_sendMessage);
}

void Heavy_Echomatica::cCast_Ac83k3m2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FUiaBUsL, 0, m, &cVar_FUiaBUsL_sendMessage);
}

void Heavy_Echomatica::cCast_0cN6qXQv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RksevRFC, HV_BINOP_SUBTRACT, 1, m, &cBinop_RksevRFC_sendMessage);
}

void Heavy_Echomatica::cBinop_beySiT14_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FU7uauzH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_o9gaCmkc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Lol2Qpwi, HV_BINOP_SUBTRACT, 1, m, &cBinop_Lol2Qpwi_sendMessage);
}

void Heavy_Echomatica::cCast_sZwPLx9u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9gWZNYtq, HV_BINOP_ADD, 1, m, &cBinop_9gWZNYtq_sendMessage);
}

void Heavy_Echomatica::cBinop_7elyRBS6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_0cN6qXQv_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Ac83k3m2_sendMessage);
}

void Heavy_Echomatica::cMsg_FU7uauzH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 40.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_ng203YIp, 0, m, NULL);
}

void Heavy_Echomatica::cVar_0hfyeqqp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bxkS2cQm, HV_BINOP_MULTIPLY, 0, m, &cBinop_bxkS2cQm_sendMessage);
}

void Heavy_Echomatica::cMsg_nlOAwaKb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Tw02XAZr_sendMessage);
}

void Heavy_Echomatica::cSystem_Tw02XAZr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_f24gRalB_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_bxkS2cQm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_QC41TIsd_sendMessage);
}

void Heavy_Echomatica::cBinop_fBLl3xw3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bxkS2cQm, HV_BINOP_MULTIPLY, 1, m, &cBinop_bxkS2cQm_sendMessage);
}

void Heavy_Echomatica::cMsg_f24gRalB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_fBLl3xw3_sendMessage);
}

void Heavy_Echomatica::cBinop_QC41TIsd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_nA8iP6tM_sendMessage);
}

void Heavy_Echomatica::cBinop_nA8iP6tM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_gNPO31eN_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_jHgHVb50, m);
}

void Heavy_Echomatica::cBinop_gNPO31eN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_iGby6NCj, m);
}

void Heavy_Echomatica::cVar_29tsdRPj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KjWuUqcN, HV_BINOP_MULTIPLY, 0, m, &cBinop_KjWuUqcN_sendMessage);
}

void Heavy_Echomatica::cMsg_K0LIj2Yx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_o4rOIn8Q_sendMessage);
}

void Heavy_Echomatica::cSystem_o4rOIn8Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6E6WhsFF_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_KjWuUqcN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_Au4yEdmZ_sendMessage);
}

void Heavy_Echomatica::cBinop_6Jh5w3JI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KjWuUqcN, HV_BINOP_MULTIPLY, 1, m, &cBinop_KjWuUqcN_sendMessage);
}

void Heavy_Echomatica::cMsg_6E6WhsFF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_6Jh5w3JI_sendMessage);
}

void Heavy_Echomatica::cBinop_Au4yEdmZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_ZfNxojoP_sendMessage);
}

void Heavy_Echomatica::cBinop_ZfNxojoP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_GUKMV6L9_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_3jAPUQlC, m);
}

void Heavy_Echomatica::cBinop_GUKMV6L9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_s5PFyASj, m);
}

void Heavy_Echomatica::cBinop_7QwpVZIA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_Tu6E4nW5_sendMessage);
}

void Heavy_Echomatica::cBinop_Tu6E4nW5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_L5izBheY_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_QxSAFoFr_sendMessage);
}

void Heavy_Echomatica::cVar_wuZJntqm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_rimduByd_sendMessage);
}

void Heavy_Echomatica::cMsg_S80vnCUH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Ij5Wcu1m_sendMessage);
}

void Heavy_Echomatica::cSystem_Ij5Wcu1m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YS6HvzDH, HV_BINOP_DIVIDE, 1, m, &cBinop_YS6HvzDH_sendMessage);
}

void Heavy_Echomatica::cBinop_L5izBheY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_BWJuJkUi_sendMessage);
}

void Heavy_Echomatica::cBinop_BWJuJkUi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_h2s7ejXB, m);
}

void Heavy_Echomatica::cMsg_gMolV8Kp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_X7O29EPC_sendMessage);
}

void Heavy_Echomatica::cBinop_X7O29EPC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_7QwpVZIA_sendMessage);
}

void Heavy_Echomatica::cBinop_QxSAFoFr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_6uxMA0nW, m);
}

void Heavy_Echomatica::cBinop_rimduByd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_TcWuwiDc_sendMessage);
}

void Heavy_Echomatica::cBinop_TcWuwiDc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YS6HvzDH, HV_BINOP_DIVIDE, 0, m, &cBinop_YS6HvzDH_sendMessage);
}

void Heavy_Echomatica::cBinop_YS6HvzDH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gMolV8Kp_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_1Ri1MBsD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_fgV516z5_sendMessage);
}

void Heavy_Echomatica::cBinop_fgV516z5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_N1ConqGz_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_pAdYvoz9_sendMessage);
}

void Heavy_Echomatica::cVar_0CaWucS3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_YwXs1xtV_sendMessage);
}

void Heavy_Echomatica::cMsg_XpXuF0PX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_qDqioxeM_sendMessage);
}

void Heavy_Echomatica::cSystem_qDqioxeM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hDCuWPEn, HV_BINOP_DIVIDE, 1, m, &cBinop_hDCuWPEn_sendMessage);
}

void Heavy_Echomatica::cBinop_N1ConqGz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_OEDyy6rp_sendMessage);
}

void Heavy_Echomatica::cBinop_OEDyy6rp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_TDiZrXFu, m);
}

void Heavy_Echomatica::cMsg_HzVAQ1vn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_CPCc0BWA_sendMessage);
}

void Heavy_Echomatica::cBinop_CPCc0BWA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_1Ri1MBsD_sendMessage);
}

void Heavy_Echomatica::cBinop_pAdYvoz9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_6IJCRbCE, m);
}

void Heavy_Echomatica::cBinop_YwXs1xtV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_ybWlo04W_sendMessage);
}

void Heavy_Echomatica::cBinop_ybWlo04W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hDCuWPEn, HV_BINOP_DIVIDE, 0, m, &cBinop_hDCuWPEn_sendMessage);
}

void Heavy_Echomatica::cBinop_hDCuWPEn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HzVAQ1vn_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_xVkNg4cp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_lD7tbs5e_sendMessage);
}

void Heavy_Echomatica::cSystem_lD7tbs5e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_vaK9KoXc_sendMessage);
}

void Heavy_Echomatica::cDelay_wOAhTO5v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_wOAhTO5v, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_NT8q3Fxs, 0, m, &cDelay_NT8q3Fxs_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_wOAhTO5v, 0, m, &cDelay_wOAhTO5v_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_gKC2zVdV, 1, m, NULL);
}

void Heavy_Echomatica::cDelay_NT8q3Fxs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_NT8q3Fxs, m);
  cMsg_p1fk0HZa_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSwitchcase_bmtDM6Bp_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_v53xk9qC_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Echomatica::cBinop_hp9qL5s9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rtNym6eG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::hTable_BCJb8UIr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_AZQK7H8j_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_wOAhTO5v, 2, m, &cDelay_wOAhTO5v_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VUrmwDj8_sendMessage);
}

void Heavy_Echomatica::cMsg_rtNym6eG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_BCJb8UIr, 0, m, &hTable_BCJb8UIr_sendMessage);
}

void Heavy_Echomatica::cBinop_vaK9KoXc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_hp9qL5s9_sendMessage);
}

void Heavy_Echomatica::cMsg_p1fk0HZa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_BCJb8UIr, 0, m, &hTable_BCJb8UIr_sendMessage);
}

void Heavy_Echomatica::cCast_VUrmwDj8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_wOAhTO5v, 0, m, &cDelay_wOAhTO5v_sendMessage);
}

void Heavy_Echomatica::cMsg_AZQK7H8j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_NT8q3Fxs, 2, m, &cDelay_NT8q3Fxs_sendMessage);
}

void Heavy_Echomatica::cMsg_v53xk9qC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_gKC2zVdV, 1, m, NULL);
}

void Heavy_Echomatica::cVar_MnadCqHU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_UPMDnnde, 0, m, &cPack_UPMDnnde_sendMessage);
}

void Heavy_Echomatica::cVar_r57cRLFe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_vib5KsOu, 0, m, &cPack_vib5KsOu_sendMessage);
}

void Heavy_Echomatica::cVar_63DWfafC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_vbarsSle_sendMessage);
  cSwitchcase_Ud9U1IzW_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cBinop_vbarsSle_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_63DWfafC, 1, m, &cVar_63DWfafC_sendMessage);
}

void Heavy_Echomatica::cVar_vZvQ8Lys_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_q8zGVQzk, 0, m, &cPack_q8zGVQzk_sendMessage);
}

void Heavy_Echomatica::cBinop_cGgRq6em_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_maYK7EFn_sendMessage);
}

void Heavy_Echomatica::cBinop_maYK7EFn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_fw13O5As_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_gcKSnYYt_sendMessage);
}

void Heavy_Echomatica::cVar_0FTFcIyC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_cmDeDsH1_sendMessage);
}

void Heavy_Echomatica::cMsg_f9twQj4P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_0de6kOfB_sendMessage);
}

void Heavy_Echomatica::cSystem_0de6kOfB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kp4Lp0fo, HV_BINOP_DIVIDE, 1, m, &cBinop_kp4Lp0fo_sendMessage);
}

void Heavy_Echomatica::cBinop_fw13O5As_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_Td5L517S_sendMessage);
}

void Heavy_Echomatica::cBinop_Td5L517S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Pc84DSgR, m);
}

void Heavy_Echomatica::cMsg_RFj0uLId_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_9Gq9VdqL_sendMessage);
}

void Heavy_Echomatica::cBinop_9Gq9VdqL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_cGgRq6em_sendMessage);
}

void Heavy_Echomatica::cBinop_gcKSnYYt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_lsdZUGoQ, m);
}

void Heavy_Echomatica::cBinop_cmDeDsH1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_yQ82X0R7_sendMessage);
}

void Heavy_Echomatica::cBinop_yQ82X0R7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kp4Lp0fo, HV_BINOP_DIVIDE, 0, m, &cBinop_kp4Lp0fo_sendMessage);
}

void Heavy_Echomatica::cBinop_kp4Lp0fo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_RFj0uLId_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_muTCl2jL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_IrouKofH_sendMessage);
}

void Heavy_Echomatica::cBinop_IrouKofH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_0Wu5KGCy_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_m6gFYBcC_sendMessage);
}

void Heavy_Echomatica::cVar_AWdXaDea_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_7oY34RKd_sendMessage);
}

void Heavy_Echomatica::cMsg_rV7R3NPA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_yvNycseH_sendMessage);
}

void Heavy_Echomatica::cSystem_yvNycseH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6OPEgzJ4, HV_BINOP_DIVIDE, 1, m, &cBinop_6OPEgzJ4_sendMessage);
}

void Heavy_Echomatica::cBinop_0Wu5KGCy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_MLgEd88y_sendMessage);
}

void Heavy_Echomatica::cBinop_MLgEd88y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_qnHHwl5D, m);
}

void Heavy_Echomatica::cMsg_jxgnm5cK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_d70Edk6D_sendMessage);
}

void Heavy_Echomatica::cBinop_d70Edk6D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_muTCl2jL_sendMessage);
}

void Heavy_Echomatica::cBinop_m6gFYBcC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_S8iqCzxL, m);
}

void Heavy_Echomatica::cBinop_7oY34RKd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_4izNUeO3_sendMessage);
}

void Heavy_Echomatica::cBinop_4izNUeO3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6OPEgzJ4, HV_BINOP_DIVIDE, 0, m, &cBinop_6OPEgzJ4_sendMessage);
}

void Heavy_Echomatica::cBinop_6OPEgzJ4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jxgnm5cK_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_hpUH1Mca_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_bLErswUd_sendMessage);
}

void Heavy_Echomatica::cBinop_bLErswUd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_b5BYGWyD_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_P1M2X1bf_sendMessage);
}

void Heavy_Echomatica::cVar_T4qrx3vg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_Wulpo9CW_sendMessage);
}

void Heavy_Echomatica::cMsg_diIAeabI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_pm0m0aGM_sendMessage);
}

void Heavy_Echomatica::cSystem_pm0m0aGM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Or0sYJw3, HV_BINOP_DIVIDE, 1, m, &cBinop_Or0sYJw3_sendMessage);
}

void Heavy_Echomatica::cBinop_b5BYGWyD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_KJvuiZEF_sendMessage);
}

void Heavy_Echomatica::cBinop_KJvuiZEF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_GN806S3e, m);
}

void Heavy_Echomatica::cMsg_5E4phiBB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_ZBYBQEss_sendMessage);
}

void Heavy_Echomatica::cBinop_ZBYBQEss_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_hpUH1Mca_sendMessage);
}

void Heavy_Echomatica::cBinop_P1M2X1bf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_JgjUfi2v, m);
}

void Heavy_Echomatica::cBinop_Wulpo9CW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_A8QoAFz0_sendMessage);
}

void Heavy_Echomatica::cBinop_A8QoAFz0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Or0sYJw3, HV_BINOP_DIVIDE, 0, m, &cBinop_Or0sYJw3_sendMessage);
}

void Heavy_Echomatica::cBinop_Or0sYJw3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5E4phiBB_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_3DsFSspD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wmVh5CIw, HV_BINOP_MULTIPLY, 0, m, &cBinop_wmVh5CIw_sendMessage);
}

void Heavy_Echomatica::cMsg_4wpO4TYr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_haFctPTz_sendMessage);
}

void Heavy_Echomatica::cSystem_haFctPTz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jU9xF2zC_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_wmVh5CIw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_g5yYzsYo_sendMessage);
}

void Heavy_Echomatica::cBinop_s6Afvul6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wmVh5CIw, HV_BINOP_MULTIPLY, 1, m, &cBinop_wmVh5CIw_sendMessage);
}

void Heavy_Echomatica::cMsg_jU9xF2zC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_s6Afvul6_sendMessage);
}

void Heavy_Echomatica::cBinop_g5yYzsYo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_pzqSFb4E_sendMessage);
}

void Heavy_Echomatica::cBinop_pzqSFb4E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_t7OB8QIM_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_DGqHFwfU, m);
}

void Heavy_Echomatica::cBinop_t7OB8QIM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_vWAbx8jJ, m);
}

void Heavy_Echomatica::cVar_tlGfYcYe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9tMq4A6M, HV_BINOP_MULTIPLY, 0, m, &cBinop_9tMq4A6M_sendMessage);
}

void Heavy_Echomatica::cMsg_qj8den0a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_MQTqcpGB_sendMessage);
}

void Heavy_Echomatica::cSystem_MQTqcpGB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LZH5eTqX_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_9tMq4A6M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_tA0V0XuH_sendMessage);
}

void Heavy_Echomatica::cBinop_28yYE7Om_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9tMq4A6M, HV_BINOP_MULTIPLY, 1, m, &cBinop_9tMq4A6M_sendMessage);
}

void Heavy_Echomatica::cMsg_LZH5eTqX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_28yYE7Om_sendMessage);
}

void Heavy_Echomatica::cBinop_tA0V0XuH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_BfKM7Yvc_sendMessage);
}

void Heavy_Echomatica::cBinop_BfKM7Yvc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_yuN0sF57_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_PZcchYy9, m);
}

void Heavy_Echomatica::cBinop_yuN0sF57_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ZOSayyrT, m);
}

void Heavy_Echomatica::cVar_uiNeEjiW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Bd6JmhDU, HV_BINOP_MULTIPLY, 0, m, &cBinop_Bd6JmhDU_sendMessage);
}

void Heavy_Echomatica::cMsg_JnHZypfq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_NuLqfaRQ_sendMessage);
}

void Heavy_Echomatica::cSystem_NuLqfaRQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Js69LNgj_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_Bd6JmhDU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_7g2WC5WS_sendMessage);
}

void Heavy_Echomatica::cBinop_4Hqq1Xya_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Bd6JmhDU, HV_BINOP_MULTIPLY, 1, m, &cBinop_Bd6JmhDU_sendMessage);
}

void Heavy_Echomatica::cMsg_Js69LNgj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_4Hqq1Xya_sendMessage);
}

void Heavy_Echomatica::cBinop_7g2WC5WS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_TL28aVkd_sendMessage);
}

void Heavy_Echomatica::cBinop_TL28aVkd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_zS7P4Qjg_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_8qQ9fDeS, m);
}

void Heavy_Echomatica::cBinop_zS7P4Qjg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_JQCW5c5r, m);
}

void Heavy_Echomatica::cMsg_1S6P5HLR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_OdJTx0Qr_sendMessage);
}

void Heavy_Echomatica::cSystem_OdJTx0Qr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_796QYtL5, HV_BINOP_DIVIDE, 1, m, &cBinop_796QYtL5_sendMessage);
}

void Heavy_Echomatica::cVar_JTma7moe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_WntyU82z_sendMessage);
}

void Heavy_Echomatica::cVar_RVnktDKO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.001f, 0, m, &cBinop_vvxOlPIR_sendMessage);
}

void Heavy_Echomatica::cUnop_c1zIMu3R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_ZL0asP9g_sendMessage);
}

void Heavy_Echomatica::cBinop_796QYtL5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0Pz8GG9v, HV_BINOP_MULTIPLY, 1, m, &cBinop_0Pz8GG9v_sendMessage);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_c1zIMu3R_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_AdqjXQAR, HV_BINOP_DIVIDE, 0, m, &cBinop_AdqjXQAR_sendMessage);
}

void Heavy_Echomatica::cBinop_WntyU82z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_796QYtL5, HV_BINOP_DIVIDE, 0, m, &cBinop_796QYtL5_sendMessage);
}

void Heavy_Echomatica::cBinop_AdqjXQAR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_q7LRNLPY_sendMessage);
}

void Heavy_Echomatica::cBinop_cyzX1iwk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_sd26Z37G_sendMessage);
}

void Heavy_Echomatica::cBinop_sd26Z37G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_AUAYslvb_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_gG6kOfHN, HV_BINOP_MULTIPLY, 0, m, &cBinop_gG6kOfHN_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_0Pz8GG9v, HV_BINOP_MULTIPLY, 0, m, &cBinop_0Pz8GG9v_sendMessage);
}

void Heavy_Echomatica::cBinop_ZL0asP9g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gG6kOfHN, HV_BINOP_MULTIPLY, 1, m, &cBinop_gG6kOfHN_sendMessage);
}

void Heavy_Echomatica::cBinop_gG6kOfHN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_k6u9HlhX_sendMessage);
}

void Heavy_Echomatica::cCast_vGfgYWDe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JTma7moe, 0, m, &cVar_JTma7moe_sendMessage);
}

void Heavy_Echomatica::cBinop_qu7erRw9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_DKdDzC9l_sendMessage);
}

void Heavy_Echomatica::cBinop_DKdDzC9l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_zIYuIMh4, 5, m);
}

void Heavy_Echomatica::cBinop_k6u9HlhX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_zIYuIMh4, 4, m);
}

void Heavy_Echomatica::cBinop_FnUNiccd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Jd5IfI7t, HV_BINOP_MULTIPLY, 0, m, &cBinop_Jd5IfI7t_sendMessage);
}

void Heavy_Echomatica::cBinop_0Pz8GG9v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ObtPgclO, HV_BINOP_ADD, 1, m, &cBinop_ObtPgclO_sendMessage);
}

void Heavy_Echomatica::cBinop_AUAYslvb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_qu7erRw9_sendMessage);
}

void Heavy_Echomatica::cBinop_ObtPgclO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Jd5IfI7t, HV_BINOP_MULTIPLY, 1, m, &cBinop_Jd5IfI7t_sendMessage);
}

void Heavy_Echomatica::cBinop_Jd5IfI7t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sBiquad_k_onMessage(&Context(_c)->sBiquad_k_zIYuIMh4, 1, m);
}

void Heavy_Echomatica::cBinop_vvxOlPIR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AdqjXQAR, HV_BINOP_DIVIDE, 1, m, &cBinop_AdqjXQAR_sendMessage);
}

void Heavy_Echomatica::cBinop_q7LRNLPY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_cyzX1iwk_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ObtPgclO, HV_BINOP_ADD, 0, m, &cBinop_ObtPgclO_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_FnUNiccd_sendMessage);
}

void Heavy_Echomatica::cBinop_u4PqcudC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_YDNJfRny_sendMessage);
}

void Heavy_Echomatica::cBinop_YDNJfRny_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_dRy37S6X_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_eQaVnWmH_sendMessage);
}

void Heavy_Echomatica::cVar_s8eFX2ne_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_ARwe3iXr_sendMessage);
}

void Heavy_Echomatica::cMsg_jCntEQqV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_KT2GHQgp_sendMessage);
}

void Heavy_Echomatica::cSystem_KT2GHQgp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xGAXbYFG, HV_BINOP_DIVIDE, 1, m, &cBinop_xGAXbYFG_sendMessage);
}

void Heavy_Echomatica::cBinop_dRy37S6X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_UGndzrW9_sendMessage);
}

void Heavy_Echomatica::cBinop_UGndzrW9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_OLZxLPBZ, m);
}

void Heavy_Echomatica::cMsg_HYLWKjEK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Kv4JXtva_sendMessage);
}

void Heavy_Echomatica::cBinop_Kv4JXtva_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_u4PqcudC_sendMessage);
}

void Heavy_Echomatica::cBinop_eQaVnWmH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_JlE73Dur, m);
}

void Heavy_Echomatica::cBinop_ARwe3iXr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_CK90bXpe_sendMessage);
}

void Heavy_Echomatica::cBinop_CK90bXpe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xGAXbYFG, HV_BINOP_DIVIDE, 0, m, &cBinop_xGAXbYFG_sendMessage);
}

void Heavy_Echomatica::cBinop_xGAXbYFG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HYLWKjEK_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_sN8Ek8pZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_C9fMf6kV, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_hHWGoVH1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Mqu92vLE, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_VjBvzNC7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_hjiNq5UJ, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_fHUTiCgB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_971pu4Wp, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_hIagR0x1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_ZdExB8Dn, 0, m, NULL);
}

void Heavy_Echomatica::cMsg_F2URNwDF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_2q8RLjvE_sendMessage);
}

void Heavy_Echomatica::cSystem_2q8RLjvE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gxf8Fs9L, HV_BINOP_DIVIDE, 1, m, &cBinop_gxf8Fs9L_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NFaSNxtS_sendMessage);
}

void Heavy_Echomatica::cUnop_cqRWENFh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_3FwCLyNI_sendMessage);
}

void Heavy_Echomatica::cMsg_OWwAsiut_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_cqRWENFh_sendMessage);
}

void Heavy_Echomatica::cBinop_3FwCLyNI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gxf8Fs9L, HV_BINOP_DIVIDE, 0, m, &cBinop_gxf8Fs9L_sendMessage);
}

void Heavy_Echomatica::cCast_NFaSNxtS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OWwAsiut_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_gxf8Fs9L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Clsd9Hzc, HV_BINOP_MULTIPLY, 1, m, &cBinop_Clsd9Hzc_sendMessage);
}

void Heavy_Echomatica::cBinop_Clsd9Hzc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_HOQEoaCh_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iteX5OfU_sendMessage);
}

void Heavy_Echomatica::cUnop_IkbpMz0O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_eKaOsKj7_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cUnop_8NzHOXPQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_jCSX6Vlq_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_rHNBRAuL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_dfqY5Gkx_sendMessage);
}

void Heavy_Echomatica::cBinop_dfqY5Gkx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Clsd9Hzc, HV_BINOP_MULTIPLY, 0, m, &cBinop_Clsd9Hzc_sendMessage);
}

void Heavy_Echomatica::cBinop_FOuC9QK1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_sEC78HB7_sendMessage);
}

void Heavy_Echomatica::cBinop_sEC78HB7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wIgAR1VA_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_g83oSy8t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Z81wwuwi_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_7sNpkrsY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_49ITMeAb, HV_BINOP_MULTIPLY, 1, m, &cBinop_49ITMeAb_sendMessage);
}

void Heavy_Echomatica::cBinop_49ITMeAb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7LjXTcKg, HV_BINOP_ADD, 0, m, &cBinop_7LjXTcKg_sendMessage);
}

void Heavy_Echomatica::cBinop_JUXF4HPS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7LjXTcKg, HV_BINOP_ADD, 1, m, &cBinop_7LjXTcKg_sendMessage);
}

void Heavy_Echomatica::cCast_kIsCHQDB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_7sNpkrsY_sendMessage);
}

void Heavy_Echomatica::cCast_an7meFcr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Xr4EjoQx, HV_BINOP_MULTIPLY, 1, m, &cBinop_Xr4EjoQx_sendMessage);
}

void Heavy_Echomatica::cCast_IczYKrTF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_JUXF4HPS_sendMessage);
}

void Heavy_Echomatica::cBinop_Xr4EjoQx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gP9N0kMf, HV_BINOP_MULTIPLY, 1, m, &cBinop_gP9N0kMf_sendMessage);
}

void Heavy_Echomatica::cBinop_7LjXTcKg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_e3UB8HxH, HV_BINOP_ADD, 0, m, &cBinop_e3UB8HxH_sendMessage);
}

void Heavy_Echomatica::cBinop_e3UB8HxH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Xr4EjoQx, HV_BINOP_MULTIPLY, 0, m, &cBinop_Xr4EjoQx_sendMessage);
}

void Heavy_Echomatica::cBinop_msWMz08i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WF6aLpwH, HV_BINOP_ADD, 1, m, &cBinop_WF6aLpwH_sendMessage);
}

void Heavy_Echomatica::cBinop_75rw52W2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TrZ4uV49, HV_BINOP_MULTIPLY, 1, m, &cBinop_TrZ4uV49_sendMessage);
}

void Heavy_Echomatica::cBinop_TrZ4uV49_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WF6aLpwH, HV_BINOP_ADD, 0, m, &cBinop_WF6aLpwH_sendMessage);
}

void Heavy_Echomatica::cCast_r7INqFgT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_75rw52W2_sendMessage);
}

void Heavy_Echomatica::cCast_yi3yh6x3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_hUAl6p4E_sendMessage);
}

void Heavy_Echomatica::cCast_R3CnfElk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_msWMz08i_sendMessage);
}

void Heavy_Echomatica::cBinop_47IT6PTC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8OZccs2D, HV_BINOP_MULTIPLY, 1, m, &cBinop_8OZccs2D_sendMessage);
}

void Heavy_Echomatica::cBinop_WF6aLpwH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_47IT6PTC, HV_BINOP_MULTIPLY, 0, m, &cBinop_47IT6PTC_sendMessage);
}

void Heavy_Echomatica::cBinop_hUAl6p4E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_47IT6PTC, HV_BINOP_MULTIPLY, 1, m, &cBinop_47IT6PTC_sendMessage);
}

void Heavy_Echomatica::cBinop_XOWY8Y0B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FECHX7DV, HV_BINOP_MULTIPLY, 1, m, &cBinop_FECHX7DV_sendMessage);
}

void Heavy_Echomatica::cBinop_FECHX7DV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AF3lhzdT, HV_BINOP_ADD, 0, m, &cBinop_AF3lhzdT_sendMessage);
}

void Heavy_Echomatica::cBinop_AF3lhzdT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TgJZ6egH, HV_BINOP_SUBTRACT, 0, m, &cBinop_TgJZ6egH_sendMessage);
}

void Heavy_Echomatica::cBinop_aqsJuIMn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AF3lhzdT, HV_BINOP_ADD, 1, m, &cBinop_AF3lhzdT_sendMessage);
}

void Heavy_Echomatica::cBinop_TgJZ6egH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oRxmLwyq, HV_BINOP_MULTIPLY, 0, m, &cBinop_oRxmLwyq_sendMessage);
}

void Heavy_Echomatica::cCast_dn5YnHov_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_XOWY8Y0B_sendMessage);
}

void Heavy_Echomatica::cCast_UjzfsHqY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_aqsJuIMn_sendMessage);
}

void Heavy_Echomatica::cCast_ZbtC2K5C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oRxmLwyq, HV_BINOP_MULTIPLY, 1, m, &cBinop_oRxmLwyq_sendMessage);
}

void Heavy_Echomatica::cBinop_oRxmLwyq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bg9q4FHN, HV_BINOP_MULTIPLY, 1, m, &cBinop_bg9q4FHN_sendMessage);
}

void Heavy_Echomatica::cBinop_HMLDm2ao_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PdOvBlOs, HV_BINOP_ADD, 1, m, &cBinop_PdOvBlOs_sendMessage);
}

void Heavy_Echomatica::cBinop_PdOvBlOs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_1LqbzHvU_sendMessage);
}

void Heavy_Echomatica::cBinop_3ehjtiJe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_uYf2vGxD_sendMessage);
}

void Heavy_Echomatica::cBinop_Yw9npwH3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PdOvBlOs, HV_BINOP_ADD, 0, m, &cBinop_PdOvBlOs_sendMessage);
}

void Heavy_Echomatica::cCast_PS4WLrNc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_3ehjtiJe_sendMessage);
}

void Heavy_Echomatica::cCast_uN62w0T3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_HMLDm2ao_sendMessage);
}

void Heavy_Echomatica::cBinop_1LqbzHvU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mQE9RLr7, HV_BINOP_MULTIPLY, 1, m, &cBinop_mQE9RLr7_sendMessage);
}

void Heavy_Echomatica::cBinop_uYf2vGxD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Yw9npwH3, HV_BINOP_MULTIPLY, 1, m, &cBinop_Yw9npwH3_sendMessage);
}

void Heavy_Echomatica::cBinop_V6R8b1Eh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_VtHnCxNq_sendMessage);
}

void Heavy_Echomatica::cBinop_Ywmvm5kz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JhecECmZ, HV_BINOP_ADD, 0, m, &cBinop_JhecECmZ_sendMessage);
}

void Heavy_Echomatica::cBinop_JhecECmZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Z8BGvthx, HV_BINOP_SUBTRACT, 0, m, &cBinop_Z8BGvthx_sendMessage);
}

void Heavy_Echomatica::cBinop_RMOohTqh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JhecECmZ, HV_BINOP_ADD, 1, m, &cBinop_JhecECmZ_sendMessage);
}

void Heavy_Echomatica::cCast_KozJ17PF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_RMOohTqh_sendMessage);
}

void Heavy_Echomatica::cCast_RG86ul9j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_V6R8b1Eh_sendMessage);
}

void Heavy_Echomatica::cBinop_Z8BGvthx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nqXhAL8E, HV_BINOP_MULTIPLY, 1, m, &cBinop_nqXhAL8E_sendMessage);
}

void Heavy_Echomatica::cBinop_VtHnCxNq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ywmvm5kz, HV_BINOP_MULTIPLY, 1, m, &cBinop_Ywmvm5kz_sendMessage);
}

void Heavy_Echomatica::cBinop_dkqkkvTh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, -24.0f, 0, m, &cBinop_EKKLP8Ot_sendMessage);
}

void Heavy_Echomatica::cBinop_EKKLP8Ot_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_WaPRktJt_sendMessage);
}

void Heavy_Echomatica::cBinop_URRFzzcH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_kICpePJw_sendMessage);
}

void Heavy_Echomatica::cBinop_DmHw6h9A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ibMZAnmX, HV_BINOP_ADD, 0, m, &cBinop_ibMZAnmX_sendMessage);
}

void Heavy_Echomatica::cBinop_ibMZAnmX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MUPrdDjf, HV_BINOP_ADD, 0, m, &cBinop_MUPrdDjf_sendMessage);
}

void Heavy_Echomatica::cBinop_Q9qa2HUB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ibMZAnmX, HV_BINOP_ADD, 1, m, &cBinop_ibMZAnmX_sendMessage);
}

void Heavy_Echomatica::cCast_zul9Etgf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_URRFzzcH_sendMessage);
}

void Heavy_Echomatica::cCast_gd9fLEfD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Q9qa2HUB_sendMessage);
}

void Heavy_Echomatica::cBinop_MUPrdDjf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_g83oSy8t, 1, m, &cVar_g83oSy8t_sendMessage);
}

void Heavy_Echomatica::cBinop_kICpePJw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DmHw6h9A, HV_BINOP_MULTIPLY, 1, m, &cBinop_DmHw6h9A_sendMessage);
}

void Heavy_Echomatica::cVar_hinF8AZw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5AwhrBcp_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_rHNBRAuL_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QVVtMhT0_sendMessage);
}

void Heavy_Echomatica::cVar_bBvup8q8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_FOuC9QK1_sendMessage);
}

void Heavy_Echomatica::cVar_pvCqjg0G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 24.0f, 0, m, &cBinop_dkqkkvTh_sendMessage);
}

void Heavy_Echomatica::cUnop_3gdqVCWs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_01k5OsGA_sendMessage);
}

void Heavy_Echomatica::cCast_iteX5OfU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_8NzHOXPQ_sendMessage);
}

void Heavy_Echomatica::cCast_HOQEoaCh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_IkbpMz0O_sendMessage);
}

void Heavy_Echomatica::cSend_eKaOsKj7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_qJ6iuwDh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_jCSX6Vlq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_fVYK8ldT_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_SxZa4Flh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Echomatica::cMsg_wIgAR1VA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Xp4jbCRh_sendMessage);
}

void Heavy_Echomatica::cBinop_Xp4jbCRh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_R2r9hgAg, HV_BINOP_MULTIPLY, 1, m, &cBinop_R2r9hgAg_sendMessage);
}

void Heavy_Echomatica::cBinop_R2r9hgAg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_9o2mU5q6_sendMessage);
}

void Heavy_Echomatica::cBinop_9o2mU5q6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_avAZviv4_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lXOPezon_sendMessage);
}

void Heavy_Echomatica::cMsg_Z81wwuwi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_HRCSLy8I_sendMessage);
}

void Heavy_Echomatica::cBinop_HRCSLy8I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ilqklgoM_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_QEJ89uGg_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_L9n1B1Eg_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wPHOnvZN_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_UT5PxPnp_sendMessage);
}

void Heavy_Echomatica::cBinop_gP9N0kMf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sN8Ek8pZ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_8OZccs2D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hHWGoVH1_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_bg9q4FHN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VjBvzNC7_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_mQE9RLr7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fHUTiCgB_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_nqXhAL8E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hIagR0x1_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_hdrxNaGE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_hinF8AZw, 0, m, &cVar_hinF8AZw_sendMessage);
}

void Heavy_Echomatica::cCast_bVZ6Ym5N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bBvup8q8, 1, m, &cVar_bBvup8q8_sendMessage);
}

void Heavy_Echomatica::cCast_QVVtMhT0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_g83oSy8t, 0, m, &cVar_g83oSy8t_sendMessage);
}

void Heavy_Echomatica::cCast_5AwhrBcp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bBvup8q8, 0, m, &cVar_bBvup8q8_sendMessage);
}

void Heavy_Echomatica::cSend_8E5ghM7S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Fwb9OX8M_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_WaPRktJt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SZtvjF1F_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FYDvRZyp_sendMessage);
}

void Heavy_Echomatica::cCast_SZtvjF1F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TcnLhCac, HV_BINOP_POW, 1, m, &cBinop_TcnLhCac_sendMessage);
}

void Heavy_Echomatica::cCast_FYDvRZyp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ADwUAAIQ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_ADwUAAIQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_TcnLhCac, HV_BINOP_POW, 0, m, &cBinop_TcnLhCac_sendMessage);
}

void Heavy_Echomatica::cBinop_TcnLhCac_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fxK2UEXS_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YXOa2j6V_sendMessage);
}

void Heavy_Echomatica::cCast_jNCAhphb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_hinF8AZw, 0, m, &cVar_hinF8AZw_sendMessage);
}

void Heavy_Echomatica::cCast_EB22ci6P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_pvCqjg0G, 0, m, &cVar_pvCqjg0G_sendMessage);
}

void Heavy_Echomatica::cCast_S4r1cPzj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_hinF8AZw, 0, m, &cVar_hinF8AZw_sendMessage);
}

void Heavy_Echomatica::cCast_scmJDj2J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_pvCqjg0G, 0, m, &cVar_pvCqjg0G_sendMessage);
}

void Heavy_Echomatica::cBinop_01k5OsGA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uRZtdGOj, HV_BINOP_MULTIPLY, 1, m, &cBinop_uRZtdGOj_sendMessage);
}

void Heavy_Echomatica::cBinop_uRZtdGOj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_riTXznYV_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_lXOPezon_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uRZtdGOj, HV_BINOP_MULTIPLY, 0, m, &cBinop_uRZtdGOj_sendMessage);
}

void Heavy_Echomatica::cCast_avAZviv4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_SxZa4Flh_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_wPHOnvZN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8OZccs2D, HV_BINOP_MULTIPLY, 0, m, &cBinop_8OZccs2D_sendMessage);
}

void Heavy_Echomatica::cCast_L9n1B1Eg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bg9q4FHN, HV_BINOP_MULTIPLY, 0, m, &cBinop_bg9q4FHN_sendMessage);
}

void Heavy_Echomatica::cCast_QEJ89uGg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mQE9RLr7, HV_BINOP_MULTIPLY, 0, m, &cBinop_mQE9RLr7_sendMessage);
}

void Heavy_Echomatica::cCast_ilqklgoM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nqXhAL8E, HV_BINOP_MULTIPLY, 0, m, &cBinop_nqXhAL8E_sendMessage);
}

void Heavy_Echomatica::cCast_UT5PxPnp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gP9N0kMf, HV_BINOP_MULTIPLY, 0, m, &cBinop_gP9N0kMf_sendMessage);
}

void Heavy_Echomatica::cCast_fxK2UEXS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_8E5ghM7S_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_YXOa2j6V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SQRT, m, &cUnop_3gdqVCWs_sendMessage);
}

void Heavy_Echomatica::cSend_riTXznYV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_R6dWAix4_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_Q765E9PJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_LWCg4xVM_sendMessage);
}

void Heavy_Echomatica::cBinop_LWCg4xVM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_v0edWNah_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_kQRNbIgc_sendMessage);
}

void Heavy_Echomatica::cVar_eGUSln8E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_0TAoaABe_sendMessage);
}

void Heavy_Echomatica::cMsg_vTzaYU4q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_61aN8jao_sendMessage);
}

void Heavy_Echomatica::cSystem_61aN8jao_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RSRzOPcv, HV_BINOP_DIVIDE, 1, m, &cBinop_RSRzOPcv_sendMessage);
}

void Heavy_Echomatica::cBinop_v0edWNah_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_zBbxmWaC_sendMessage);
}

void Heavy_Echomatica::cBinop_zBbxmWaC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_PpHMyASw, m);
}

void Heavy_Echomatica::cMsg_VnGa4yYT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_N9YRwagd_sendMessage);
}

void Heavy_Echomatica::cBinop_N9YRwagd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_Q765E9PJ_sendMessage);
}

void Heavy_Echomatica::cBinop_kQRNbIgc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_HIV04IrA, m);
}

void Heavy_Echomatica::cBinop_0TAoaABe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_mwgFUKo6_sendMessage);
}

void Heavy_Echomatica::cBinop_mwgFUKo6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RSRzOPcv, HV_BINOP_DIVIDE, 0, m, &cBinop_RSRzOPcv_sendMessage);
}

void Heavy_Echomatica::cBinop_RSRzOPcv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VnGa4yYT_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cVar_XBbCursp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DVTv3Efu, HV_BINOP_MULTIPLY, 0, m, &cBinop_DVTv3Efu_sendMessage);
}

void Heavy_Echomatica::cMsg_JcsPdBjP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_XgsOMGjN_sendMessage);
}

void Heavy_Echomatica::cSystem_XgsOMGjN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_phMIXJHM_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_DVTv3Efu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_enjfvcQA_sendMessage);
}

void Heavy_Echomatica::cBinop_sFUcFRWP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DVTv3Efu, HV_BINOP_MULTIPLY, 1, m, &cBinop_DVTv3Efu_sendMessage);
}

void Heavy_Echomatica::cMsg_phMIXJHM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_sFUcFRWP_sendMessage);
}

void Heavy_Echomatica::cBinop_enjfvcQA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_oD7KdTjM_sendMessage);
}

void Heavy_Echomatica::cBinop_oD7KdTjM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_nrdApV2n_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_nh4UJgRh, m);
}

void Heavy_Echomatica::cBinop_nrdApV2n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_sOw7lxhe, m);
}

void Heavy_Echomatica::cSend_jlCLebF8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_9KAmsxX2_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_b4su7Uwh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_fwgmbAns_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_qAWIUqDH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_oVwjhJ7L_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_Rk6dxEev_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_5SMdepz2_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_UdkGSBbT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ZcWTzn3G_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_XQwRlujZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_4NDn1eoO_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_qM5AMRaN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_4vGZVEDK_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_5XaTfUhW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_1GFAk4wb_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_uK5Vatp0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jhGxvLr9_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_cILFVKFm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_tK3XB3iA_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_zJmfOlAW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_EsYqZ7Wf_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_h47MYBBe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_yi7W9N5Z_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_VCZKp1X5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_sh6FpVaX_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_8w38xAEG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_WkCWWFFW_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_4FiBm9EL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_4AK1rRCB_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_DA1RNUsg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_EW2DCKiD_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_yXc80qim_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_tgq3rJRZ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_4ABVRDyb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_JzrPiIua_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_K4GRFuh0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_FwZcfz5Q_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_CzgsOkcU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_DtbdG3ug_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_07B0NQwC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_QBQ1Sifn_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_g1ZQmKNz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_B3UFS3T4_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_Gkmd3pqR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_4Ulzebji_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_fBzRJBuv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_1Z1pYpkH_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_GQZHIvgH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_btRKOyK7_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_H40V3bKN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_4OoSbGwk_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_pEfimqS2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_2GpaOVYP_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cSend_KePMyN1u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_h7mYpkps_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_H7x5Czim_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.01f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZGodlDNC, 0, m, &cSlice_ZGodlDNC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gPFRVBQI, 0, m, &cSlice_gPFRVBQI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hh5LnZGH, 0, m, &cSlice_hh5LnZGH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SMdLRlLr, 0, m, &cSlice_SMdLRlLr_sendMessage);
}

void Heavy_Echomatica::cCast_PhN8TmtX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_H7x5Czim_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_8khGcg7n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NESAUhnU_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_NESAUhnU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(4);
  msg_init(m, 4, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.2f);
  msg_setFloat(m, 1, 0.2f);
  msg_setFloat(m, 2, 22.0f);
  msg_setFloat(m, 3, 0.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZGodlDNC, 0, m, &cSlice_ZGodlDNC_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_gPFRVBQI, 0, m, &cSlice_gPFRVBQI_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hh5LnZGH, 0, m, &cSlice_hh5LnZGH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SMdLRlLr, 0, m, &cSlice_SMdLRlLr_sendMessage);
}

void Heavy_Echomatica::cMsg_1UnJtYmI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ua8t4g9B, HV_BINOP_MULTIPLY, 1, m, &cBinop_ua8t4g9B_sendMessage);
}

void Heavy_Echomatica::cBinop_ua8t4g9B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_mTGMzjh2_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_wX3To8TI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_Lo9SqGSi, 0, m, &cVar_Lo9SqGSi_sendMessage);
}

void Heavy_Echomatica::cMsg_AX8sKe27_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_rTQDoiJj, 1, m, &cIf_rTQDoiJj_sendMessage);
}

void Heavy_Echomatica::cMsg_p4AOdGyy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_rTQDoiJj, 1, m, &cIf_rTQDoiJj_sendMessage);
}

void Heavy_Echomatica::cSend_mTGMzjh2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_i8KL7TYQ_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cBinop_W1bmuHkj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_5EdSePDj, 0, m, &cPack_5EdSePDj_sendMessage);
}

void Heavy_Echomatica::cBinop_ONbr3smm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_avnyHd9W, 0, m, &cPack_avnyHd9W_sendMessage);
}

void Heavy_Echomatica::cBinop_EhfjuY5X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_lqGobTRF, 0, m, &cPack_lqGobTRF_sendMessage);
}

void Heavy_Echomatica::cBinop_0gQ5xRON_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ElAGp4UU, 0, m, &cPack_ElAGp4UU_sendMessage);
}

void Heavy_Echomatica::cBinop_gkjc0VdP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_0NI1Nwwr, 0, m, &cPack_0NI1Nwwr_sendMessage);
}

void Heavy_Echomatica::cBinop_jQaeJig7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_l9jYKfhv, 0, m, &cPack_l9jYKfhv_sendMessage);
}

void Heavy_Echomatica::cCast_OxU2evNe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cDmNGZ7b, 0, m, &cVar_cDmNGZ7b_sendMessage);
}

void Heavy_Echomatica::cCast_ZCPOSqvl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_W1bmuHkj, HV_BINOP_MULTIPLY, 1, m, &cBinop_W1bmuHkj_sendMessage);
}

void Heavy_Echomatica::cCast_04WiIgSv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_eAPQHh2V, 0, m, &cVar_eAPQHh2V_sendMessage);
}

void Heavy_Echomatica::cCast_6nxvbgQY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jQaeJig7, HV_BINOP_MULTIPLY, 1, m, &cBinop_jQaeJig7_sendMessage);
}

void Heavy_Echomatica::cCast_dWRFs87E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6hZednY0, 0, m, &cVar_6hZednY0_sendMessage);
}

void Heavy_Echomatica::cCast_udpZf0tN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gkjc0VdP, HV_BINOP_MULTIPLY, 1, m, &cBinop_gkjc0VdP_sendMessage);
}

void Heavy_Echomatica::cCast_AdyTmcAb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_CqbkV7s3, 0, m, &cVar_CqbkV7s3_sendMessage);
}

void Heavy_Echomatica::cCast_Hc0dbJvH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0gQ5xRON, HV_BINOP_MULTIPLY, 1, m, &cBinop_0gQ5xRON_sendMessage);
}

void Heavy_Echomatica::cCast_hn8fOYkH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EhfjuY5X, HV_BINOP_MULTIPLY, 1, m, &cBinop_EhfjuY5X_sendMessage);
}

void Heavy_Echomatica::cCast_2C32b1yx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vrWuad0i, 0, m, &cVar_vrWuad0i_sendMessage);
}

void Heavy_Echomatica::cCast_09O1WpVb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ONbr3smm, HV_BINOP_MULTIPLY, 1, m, &cBinop_ONbr3smm_sendMessage);
}

void Heavy_Echomatica::cCast_D2nUdlpN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RQAnXw2J, 0, m, &cVar_RQAnXw2J_sendMessage);
}

void Heavy_Echomatica::cBinop_iWls7yAH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_df8GfpFL_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_CaZoGW6a_sendMessage);
}

void Heavy_Echomatica::cMsg_YBTD2BZe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.5f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_iWls7yAH, HV_BINOP_MULTIPLY, 1, m, &cBinop_iWls7yAH_sendMessage);
}

void Heavy_Echomatica::cCast_P2Mt3Hcw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iWls7yAH, HV_BINOP_MULTIPLY, 0, m, &cBinop_iWls7yAH_sendMessage);
}

void Heavy_Echomatica::cCast_5rZbAgWg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YBTD2BZe_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cMsg_yKqcXLjG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_JArP84x4, HV_BINOP_ADD, 1, m, &cBinop_JArP84x4_sendMessage);
}

void Heavy_Echomatica::cBinop_JArP84x4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_s2Mh37Lq, 0, m, &cVar_s2Mh37Lq_sendMessage);
}

void Heavy_Echomatica::cCast_CaZoGW6a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JArP84x4, HV_BINOP_ADD, 0, m, &cBinop_JArP84x4_sendMessage);
}

void Heavy_Echomatica::cCast_df8GfpFL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_yKqcXLjG_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_W5sei7YC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1UnJtYmI_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_oQtqkJ5n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_p4AOdGyy_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_y7wz1k0Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wX3To8TI_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_A2RmBekH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_s2Mh37Lq, 0, m, &cVar_s2Mh37Lq_sendMessage);
}

void Heavy_Echomatica::cCast_xTJz11Gx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_AX8sKe27_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_p4QiMKS4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1UnJtYmI_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cCast_yKqBgBM0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ua8t4g9B, HV_BINOP_MULTIPLY, 0, m, &cBinop_ua8t4g9B_sendMessage);
}

void Heavy_Echomatica::cReceive_zadroHlT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_F2URNwDF_sendMessage(_c, 0, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_scmJDj2J_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_S4r1cPzj_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_dyWiqrXs, 0, m, &cVar_dyWiqrXs_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Pb8zAgxN, 0, m, &cVar_Pb8zAgxN_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_j4RQKnGl, 0, m, &cVar_j4RQKnGl_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_TEQ2zBFP, 0, m, &cVar_TEQ2zBFP_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_0xaSRQeo, 0, m, &cVar_0xaSRQeo_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_0kUr5xiQ, 0, m, &cVar_0kUr5xiQ_sendMessage);
  cMsg_Ofhp0jov_sendMessage(_c, 0, m);
  cMsg_83uTvZIK_sendMessage(_c, 0, m);
  cMsg_4raQGK5q_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Kvsx33p6, 0, m, &cVar_Kvsx33p6_sendMessage);
  cMsg_WYU7MmGM_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_kdQS4YN3, 0, m, &cVar_kdQS4YN3_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rjqhGAHk_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IjeAdheP_sendMessage);
  cMsg_3UTzKeyt_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_siMf0L8v, 0, m, &cVar_siMf0L8v_sendMessage);
  cMsg_DiZqa2bZ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_H4hZkvyc, 0, m, &cVar_H4hZkvyc_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qOPCpDB9_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_n7NOwdnB_sendMessage);
  cMsg_tgnCmMgZ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Ws7BfhR3, 0, m, &cVar_Ws7BfhR3_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pH5bFUuv_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MLbhr7Xr_sendMessage);
  cMsg_nlOAwaKb_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_0hfyeqqp, 0, m, &cVar_0hfyeqqp_sendMessage);
  cMsg_K0LIj2Yx_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_29tsdRPj, 0, m, &cVar_29tsdRPj_sendMessage);
  cMsg_f9twQj4P_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_0FTFcIyC, 0, m, &cVar_0FTFcIyC_sendMessage);
  cMsg_rV7R3NPA_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_AWdXaDea, 0, m, &cVar_AWdXaDea_sendMessage);
  cMsg_diIAeabI_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_T4qrx3vg, 0, m, &cVar_T4qrx3vg_sendMessage);
  cMsg_4wpO4TYr_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_3DsFSspD, 0, m, &cVar_3DsFSspD_sendMessage);
  cMsg_qj8den0a_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_tlGfYcYe, 0, m, &cVar_tlGfYcYe_sendMessage);
  cMsg_JnHZypfq_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_uiNeEjiW, 0, m, &cVar_uiNeEjiW_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_RVnktDKO, 0, m, &cVar_RVnktDKO_sendMessage);
  cMsg_1S6P5HLR_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_JTma7moe, 0, m, &cVar_JTma7moe_sendMessage);
  cMsg_jCntEQqV_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_s8eFX2ne, 0, m, &cVar_s8eFX2ne_sendMessage);
  cMsg_8qUJ0eCn_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ItY5eklg, 0, m, &cVar_ItY5eklg_sendMessage);
  cMsg_nqw2OQvM_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_kLZWWcIk, 0, m, &cVar_kLZWWcIk_sendMessage);
  cMsg_bE8f2Iqn_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_UduRzusY, 0, m, &cVar_UduRzusY_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_7IppymMH, 0, m, &cVar_7IppymMH_sendMessage);
  cMsg_S80vnCUH_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_wuZJntqm, 0, m, &cVar_wuZJntqm_sendMessage);
  cMsg_XpXuF0PX_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_0CaWucS3, 0, m, &cVar_0CaWucS3_sendMessage);
  cMsg_xVkNg4cp_sendMessage(_c, 0, m);
  cMsg_vTzaYU4q_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_eGUSln8E, 0, m, &cVar_eGUSln8E_sendMessage);
  cMsg_JcsPdBjP_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_XBbCursp, 0, m, &cVar_XBbCursp_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_snx4qHiQ, 0, m, &cVar_snx4qHiQ_sendMessage);
  cMsg_h0Z1xoTo_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_rYPQuH0x, 0, m, &cVar_rYPQuH0x_sendMessage);
  cMsg_wPgxdz1J_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_rdDj3QRr, 0, m, &cVar_rdDj3QRr_sendMessage);
  cMsg_biQnDlXC_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_pcuhMjSs, 0, m, &cVar_pcuhMjSs_sendMessage);
  cMsg_Z2k8fbFn_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Yqo7HOQg, 0, m, &cVar_Yqo7HOQg_sendMessage);
  cMsg_Pw9mwzri_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_oHy1jigl, 0, m, &cVar_oHy1jigl_sendMessage);
  cMsg_V2GsdNFO_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_F2xE0lgH, 0, m, &cVar_F2xE0lgH_sendMessage);
  cMsg_SbfaK1pc_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_p68rqAUw, 0, m, &cVar_p68rqAUw_sendMessage);
  cMsg_YsWUcLeo_sendMessage(_c, 0, m);
}

void Heavy_Echomatica::cReceive_sUvdnzEz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_B5IpSKNl_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_9KAmsxX2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RQAnXw2J, 0, m, &cVar_RQAnXw2J_sendMessage);
}

void Heavy_Echomatica::cReceive_fwgmbAns_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vrWuad0i, 0, m, &cVar_vrWuad0i_sendMessage);
}

void Heavy_Echomatica::cReceive_oVwjhJ7L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_CqbkV7s3, 0, m, &cVar_CqbkV7s3_sendMessage);
}

void Heavy_Echomatica::cReceive_5SMdepz2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6hZednY0, 0, m, &cVar_6hZednY0_sendMessage);
}

void Heavy_Echomatica::cReceive_ZcWTzn3G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_eAPQHh2V, 0, m, &cVar_eAPQHh2V_sendMessage);
}

void Heavy_Echomatica::cReceive_4NDn1eoO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cDmNGZ7b, 0, m, &cVar_cDmNGZ7b_sendMessage);
}

void Heavy_Echomatica::cReceive_4vGZVEDK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_mBE5U23h, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_mmZXsZoZ, 0, m, &cVar_mmZXsZoZ_sendMessage);
}

void Heavy_Echomatica::cReceive_1GFAk4wb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_5n26a3BW, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_aUgAs9HF, 0, m, &cVar_aUgAs9HF_sendMessage);
}

void Heavy_Echomatica::cReceive_jhGxvLr9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_BdLvhB5u, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_4JsIFvRp, 0, m, &cVar_4JsIFvRp_sendMessage);
}

void Heavy_Echomatica::cReceive_tK3XB3iA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_QcA2S3wf, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_VVPXPIxt, 0, m, &cVar_VVPXPIxt_sendMessage);
}

void Heavy_Echomatica::cReceive_EsYqZ7Wf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_yNStFvNS, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_20a5qMVS, 0, m, &cVar_20a5qMVS_sendMessage);
}

void Heavy_Echomatica::cReceive_yi7W9N5Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_O0ChwWjA, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_2xedoFGA, 0, m, &cVar_2xedoFGA_sendMessage);
}

void Heavy_Echomatica::cReceive_sh6FpVaX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_mooCZiIm, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_3Xayiw62, 0, m, &cVar_3Xayiw62_sendMessage);
}

void Heavy_Echomatica::cReceive_WkCWWFFW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_if1ATUur, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_qkGTIffU, 0, m, &cVar_qkGTIffU_sendMessage);
}

void Heavy_Echomatica::cReceive_4AK1rRCB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_to1yPmy5, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_QXBkzlj3, 0, m, &cVar_QXBkzlj3_sendMessage);
}

void Heavy_Echomatica::cReceive_EW2DCKiD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_wigRRzvu, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_VgxWaGju, 0, m, &cVar_VgxWaGju_sendMessage);
}

void Heavy_Echomatica::cReceive_tgq3rJRZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_QRYk18cB, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_4RybKmSZ, 0, m, &cVar_4RybKmSZ_sendMessage);
}

void Heavy_Echomatica::cReceive_JzrPiIua_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_C6KSpgHg, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_JETB2EWx, 0, m, &cVar_JETB2EWx_sendMessage);
}

void Heavy_Echomatica::cReceive_i8KL7TYQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_09O1WpVb_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_D2nUdlpN_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hn8fOYkH_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2C32b1yx_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Hc0dbJvH_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AdyTmcAb_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_udpZf0tN_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dWRFs87E_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6nxvbgQY_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_04WiIgSv_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZCPOSqvl_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OxU2evNe_sendMessage);
}

void Heavy_Echomatica::cReceive_FwZcfz5Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_KPMkIlSU_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_DtbdG3ug_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0FTFcIyC, 0, m, &cVar_0FTFcIyC_sendMessage);
}

void Heavy_Echomatica::cReceive_QBQ1Sifn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_AWdXaDea, 0, m, &cVar_AWdXaDea_sendMessage);
}

void Heavy_Echomatica::cReceive_B3UFS3T4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_T4qrx3vg, 0, m, &cVar_T4qrx3vg_sendMessage);
}

void Heavy_Echomatica::cReceive_4Ulzebji_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3DsFSspD, 0, m, &cVar_3DsFSspD_sendMessage);
}

void Heavy_Echomatica::cReceive_1Z1pYpkH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tlGfYcYe, 0, m, &cVar_tlGfYcYe_sendMessage);
}

void Heavy_Echomatica::cReceive_btRKOyK7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uiNeEjiW, 0, m, &cVar_uiNeEjiW_sendMessage);
}

void Heavy_Echomatica::cReceive_4OoSbGwk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_4sUy0y4s, m);
}

void Heavy_Echomatica::cReceive_2GpaOVYP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JTma7moe, 0, m, &cVar_JTma7moe_sendMessage);
}

void Heavy_Echomatica::cReceive_h7mYpkps_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RVnktDKO, 0, m, &cVar_RVnktDKO_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vGfgYWDe_sendMessage);
}

void Heavy_Echomatica::cReceive_mvmaYCgz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cFTM7MwE, 0, m, &cVar_cFTM7MwE_sendMessage);
}

void Heavy_Echomatica::cReceive_bsSPUJ7R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_8HEi6zrC_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_7ZyvbpgS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7FeaV5NX_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FjIdXttq_sendMessage);
}

void Heavy_Echomatica::cReceive_ITZPZN0v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_aB7KQbig_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_RAXgSLxz_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Zz5OdsAH_sendMessage);
}

void Heavy_Echomatica::cReceive_pQwWQx3h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_vib5KsOu, 0, m, &cPack_vib5KsOu_sendMessage);
}

void Heavy_Echomatica::cReceive_bdPoO3M2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_VqXkB29S, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_z6VYyMlN, m);
}

void Heavy_Echomatica::cReceive_UD6yL0Cp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_UPMDnnde, 0, m, &cPack_UPMDnnde_sendMessage);
}

void Heavy_Echomatica::cReceive_Pav3J2c4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Ud9U1IzW_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Echomatica::cReceive_kzR8gSa6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_q8zGVQzk, 0, m, &cPack_q8zGVQzk_sendMessage);
}

void Heavy_Echomatica::cReceive_eU9DOafj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_u5ZN9uq0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hxhlXgoL_sendMessage);
}

void Heavy_Echomatica::cReceive_PwKS9YDL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mTHJm4om_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AOPJtdqt_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Timz6Gnp_sendMessage);
}

void Heavy_Echomatica::cReceive_IDbBmNnG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hskleCYv_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dgeEH6JA_sendMessage);
}

void Heavy_Echomatica::cReceive_SEJvuAJp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Qng4oObR_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_OXl3QW6t_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_N2oFjBUQ_sendMessage);
}

void Heavy_Echomatica::cReceive_qJ6iuwDh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_R2r9hgAg, HV_BINOP_MULTIPLY, 0, m, &cBinop_R2r9hgAg_sendMessage);
}

void Heavy_Echomatica::cReceive_fVYK8ldT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_49ITMeAb, HV_BINOP_MULTIPLY, 0, m, &cBinop_49ITMeAb_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_TrZ4uV49, HV_BINOP_MULTIPLY, 0, m, &cBinop_TrZ4uV49_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_FECHX7DV, HV_BINOP_MULTIPLY, 0, m, &cBinop_FECHX7DV_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Yw9npwH3, HV_BINOP_MULTIPLY, 0, m, &cBinop_Yw9npwH3_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ywmvm5kz, HV_BINOP_MULTIPLY, 0, m, &cBinop_Ywmvm5kz_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_DmHw6h9A, HV_BINOP_MULTIPLY, 0, m, &cBinop_DmHw6h9A_sendMessage);
}

void Heavy_Echomatica::cReceive_Fwb9OX8M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_an7meFcr_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_IczYKrTF_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kIsCHQDB_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yi3yh6x3_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_R3CnfElk_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_r7INqFgT_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZbtC2K5C_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_UjzfsHqY_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dn5YnHov_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_uN62w0T3_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PS4WLrNc_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_KozJ17PF_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_RG86ul9j_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gd9fLEfD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zul9Etgf_sendMessage);
}

void Heavy_Echomatica::cReceive_R6dWAix4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_e3UB8HxH, HV_BINOP_ADD, 1, m, &cBinop_e3UB8HxH_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_TgJZ6egH, HV_BINOP_SUBTRACT, 1, m, &cBinop_TgJZ6egH_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Z8BGvthx, HV_BINOP_SUBTRACT, 1, m, &cBinop_Z8BGvthx_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_MUPrdDjf, HV_BINOP_ADD, 1, m, &cBinop_MUPrdDjf_sendMessage);
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
    sEnv_process(this, &sEnv_Nb5oNkiG, VIf(I0), &sEnv_Nb5oNkiG_sendMessage);
    __hv_line_f(&sLine_FTPAYW2U, VOf(Bf0));
    __hv_mul_f(VIf(I0), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_jHgHVb50, VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_iGby6NCj, VOf(Bf0));
    __hv_rpole_f(&sRPole_wc0maAV1, VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_OwznGOuU, VOf(Bf1));
    __hv_rpole_f(&sRPole_8byYcKB0, VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_WZQtcOuA, VIf(Bf1), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_pBvZ9PAS, VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    sEnv_process(this, &sEnv_x6a9SqzC, VIf(I1), &sEnv_x6a9SqzC_sendMessage);
    __hv_line_f(&sLine_ng203YIp, VOf(Bf0));
    __hv_mul_f(VIf(I1), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf2), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_min_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_3jAPUQlC, VOf(Bf2));
    __hv_mul_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_s5PFyASj, VOf(Bf0));
    __hv_rpole_f(&sRPole_BpzCfrqU, VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_27Ai83pD, VOf(Bf2));
    __hv_rpole_f(&sRPole_6maKrhd9, VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_jgwJvKdY, VIf(Bf2), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_jd471sGw, VOf(Bf2));
    __hv_mul_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf1), VIf(Bf2), VOf(Bf0));
    __hv_varread_f(&sVarf_2jHArn8e, VOf(Bf3));
    __hv_varread_f(&sVarf_4S4hCwbB, VOf(Bf4));
    __hv_varread_f(&sVarf_YBEnCjKy, VOf(Bf5));
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_t3Ah7FUL, VOf(Bf4));
    __hv_add_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_2ZBdYLMi, VOf(Bf5));
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_3yJhyEpl, VOf(Bf4));
    __hv_add_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_pbYgEfz4, VOf(Bf3));
    __hv_rpole_f(&sRPole_NZNbs4NB, VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_SW4IBZSg, VIf(Bf3), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_NS5HbRoG, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_4U3XS7Ez, VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_dG7qQITs, VOf(Bf3));
    __hv_rpole_f(&sRPole_hiRQHjhT, VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f, 0.66f);
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_FrDZrKF0, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_RYa26crB, VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    sEnv_process(this, &sEnv_uX4yFab0, VIf(Bf5), &sEnv_uX4yFab0_sendMessage);
    __hv_line_f(&sLine_rOnMJiRx, VOf(Bf6));
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
    __hv_line_f(&sLine_rapuN80X, VOf(Bf7));
    __hv_mul_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf3), VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_nh4UJgRh, VOf(Bf0));
    __hv_mul_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_sOw7lxhe, VOf(Bf7));
    __hv_rpole_f(&sRPole_rf1dzFir, VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_HIV04IrA, VOf(Bf0));
    __hv_rpole_f(&sRPole_Rllhjo2f, VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_VQm0lzIX, VIf(Bf0), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_PpHMyASw, VOf(Bf0));
    __hv_mul_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_tabwrite_f(&sTabwrite_gKC2zVdV, VIf(Bf0));
    __hv_phasor_k_f(&sPhasor_o38TqWxh, VOf(Bf0));
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
    __hv_varread_f(&sVarf_fZgUTk4j, VOf(Bf3));
    __hv_phasor_k_f(&sPhasor_CnKKy8lN, VOf(Bf0));
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
    __hv_varread_f(&sVarf_2i9yb8wm, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf7), VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_varwrite_f(&sVarf_YKNWwtXX, VIf(Bf8));
    __hv_line_f(&sLine_2c5EoawP, VOf(Bf8));
    __hv_varread_f(&sVarf_YKNWwtXX, VOf(Bf3));
    __hv_add_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_tabhead_f(&sTabhead_gozRbnR7, VOf(Bf8));
    __hv_var_k_f_r(VOf(Bf7), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_bNMAix0K, VOf(Bf8));
    __hv_mul_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_8HnJ0DRJ, VOf(Bf3));
    __hv_min_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_zero_f(VOf(Bf8));
    __hv_max_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_floor_f(VIf(Bf8), VOf(Bf7));
    __hv_varread_f(&sVarf_UwEjYpcq, VOf(Bf3));
    __hv_zero_f(VOf(Bf6));
    __hv_lt_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_and_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_cast_fi(VIf(Bf6), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_iXQUBDwN, VIi(Bi1), VOf(Bf6));
    __hv_tabread_if(&sTabread_RtUi1PGy, VIi(Bi0), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf6));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf6), VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_mooCZiIm, VOf(Bf7));
    __hv_mul_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_varwrite_f(&sVarf_2jHArn8e, VIf(Bf7));
    __hv_line_f(&sLine_OaRpacTh, VOf(Bf7));
    __hv_varread_f(&sVarf_YKNWwtXX, VOf(Bf6));
    __hv_add_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_tabhead_f(&sTabhead_TVMk1BgK, VOf(Bf7));
    __hv_var_k_f_r(VOf(Bf8), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_9iXtoVSq, VOf(Bf7));
    __hv_mul_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_FUYZsaki, VOf(Bf6));
    __hv_min_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_zero_f(VOf(Bf7));
    __hv_max_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_floor_f(VIf(Bf7), VOf(Bf8));
    __hv_varread_f(&sVarf_6QXAvHM3, VOf(Bf6));
    __hv_zero_f(VOf(Bf0));
    __hv_lt_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_and_f(VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_cast_fi(VIf(Bf0), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_2CGLO9vj, VIi(Bi1), VOf(Bf0));
    __hv_tabread_if(&sTabread_cjziOs4H, VIi(Bi0), VOf(Bf6));
    __hv_sub_f(VIf(Bf0), VIf(Bf6), VOf(Bf0));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf0), VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_line_f(&sLine_to1yPmy5, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_varwrite_f(&sVarf_4S4hCwbB, VIf(Bf8));
    __hv_line_f(&sLine_O7q5HyEX, VOf(Bf8));
    __hv_varread_f(&sVarf_YKNWwtXX, VOf(Bf0));
    __hv_add_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_tabhead_f(&sTabhead_OVXyObTv, VOf(Bf8));
    __hv_var_k_f_r(VOf(Bf7), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_GwSOf3lt, VOf(Bf8));
    __hv_mul_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_967lOrZY, VOf(Bf0));
    __hv_min_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf8));
    __hv_max_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_floor_f(VIf(Bf8), VOf(Bf7));
    __hv_varread_f(&sVarf_83hp7dR2, VOf(Bf0));
    __hv_zero_f(VOf(Bf9));
    __hv_lt_f(VIf(Bf7), VIf(Bf9), VOf(Bf9));
    __hv_and_f(VIf(Bf0), VIf(Bf9), VOf(Bf9));
    __hv_add_f(VIf(Bf7), VIf(Bf9), VOf(Bf9));
    __hv_cast_fi(VIf(Bf9), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_yopL6ePO, VIi(Bi1), VOf(Bf9));
    __hv_tabread_if(&sTabread_7K4oTRPK, VIi(Bi0), VOf(Bf0));
    __hv_sub_f(VIf(Bf9), VIf(Bf0), VOf(Bf9));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf9), VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_QRYk18cB, VOf(Bf7));
    __hv_mul_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varwrite_f(&sVarf_YBEnCjKy, VIf(Bf7));
    __hv_line_f(&sLine_9PqKpfMF, VOf(Bf7));
    __hv_varread_f(&sVarf_YKNWwtXX, VOf(Bf9));
    __hv_add_f(VIf(Bf7), VIf(Bf9), VOf(Bf9));
    __hv_tabhead_f(&sTabhead_OZSXMMmU, VOf(Bf7));
    __hv_var_k_f_r(VOf(Bf8), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_yD1dW6vP, VOf(Bf7));
    __hv_mul_f(VIf(Bf9), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_fhRMykCS, VOf(Bf9));
    __hv_min_f(VIf(Bf7), VIf(Bf9), VOf(Bf9));
    __hv_zero_f(VOf(Bf7));
    __hv_max_f(VIf(Bf9), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_floor_f(VIf(Bf7), VOf(Bf8));
    __hv_varread_f(&sVarf_TnFL5WxE, VOf(Bf9));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf9), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_2XrwtIE0, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_twUbkvYr, VIi(Bi0), VOf(Bf9));
    __hv_sub_f(VIf(Bf4), VIf(Bf9), VOf(Bf4));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf4), VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_line_f(&sLine_C6KSpgHg, VOf(Bf8));
    __hv_mul_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_varwrite_f(&sVarf_t3Ah7FUL, VIf(Bf8));
    __hv_line_f(&sLine_FWLJyFkE, VOf(Bf8));
    __hv_varread_f(&sVarf_YKNWwtXX, VOf(Bf4));
    __hv_add_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_tabhead_f(&sTabhead_syCZzM8H, VOf(Bf8));
    __hv_var_k_f_r(VOf(Bf7), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_QfQYDMWs, VOf(Bf8));
    __hv_mul_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_U8VzMNZb, VOf(Bf4));
    __hv_min_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_zero_f(VOf(Bf8));
    __hv_max_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_floor_f(VIf(Bf8), VOf(Bf7));
    __hv_varread_f(&sVarf_lwezsi9S, VOf(Bf4));
    __hv_zero_f(VOf(Bf5));
    __hv_lt_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_cast_fi(VIf(Bf5), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_GIMJRaTx, VIi(Bi1), VOf(Bf5));
    __hv_tabread_if(&sTabread_thmtqG3Q, VIi(Bi0), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf5));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf5), VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_wigRRzvu, VOf(Bf7));
    __hv_mul_f(VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_varwrite_f(&sVarf_2ZBdYLMi, VIf(Bf7));
    __hv_line_f(&sLine_Nj79jkk2, VOf(Bf7));
    __hv_varread_f(&sVarf_YKNWwtXX, VOf(Bf5));
    __hv_add_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_tabhead_f(&sTabhead_OyOv9HaX, VOf(Bf7));
    __hv_var_k_f_r(VOf(Bf8), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_ak4L89u4, VOf(Bf7));
    __hv_mul_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_ro0vcjx3, VOf(Bf5));
    __hv_min_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf7));
    __hv_max_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_floor_f(VIf(Bf7), VOf(Bf8));
    __hv_varread_f(&sVarf_EgaBcbcy, VOf(Bf5));
    __hv_zero_f(VOf(Bf10));
    __hv_lt_f(VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_and_f(VIf(Bf5), VIf(Bf10), VOf(Bf10));
    __hv_add_f(VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_cast_fi(VIf(Bf10), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_h07oaUom, VIi(Bi1), VOf(Bf10));
    __hv_tabread_if(&sTabread_gKmQHVzG, VIi(Bi0), VOf(Bf5));
    __hv_sub_f(VIf(Bf10), VIf(Bf5), VOf(Bf10));
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf10), VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_if1ATUur, VOf(Bf8));
    __hv_mul_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_varwrite_f(&sVarf_3yJhyEpl, VIf(Bf8));
    __hv_varread_f(&sVarf_VqXkB29S, VOf(Bf8));
    __hv_mul_f(VIf(Bf2), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf2), 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f);
    __hv_line_f(&sLine_mBE5U23h, VOf(Bf10));
    __hv_line_f(&sLine_5n26a3BW, VOf(Bf7));
    __hv_line_f(&sLine_BdLvhB5u, VOf(Bf11));
    __hv_line_f(&sLine_QcA2S3wf, VOf(Bf12));
    __hv_line_f(&sLine_yNStFvNS, VOf(Bf13));
    __hv_line_f(&sLine_O0ChwWjA, VOf(Bf14));
    __hv_mul_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf0), VIf(Bf13), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf4), VIf(Bf12), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf6), VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf5), VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf3), VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_biquad_k_f(&sBiquad_k_zIYuIMh4, VIf(Bf14), VOf(Bf10));
    __hv_varread_f(&sVarf_4sUy0y4s, VOf(Bf3));
    __hv_varread_f(&sVarf_lsdZUGoQ, VOf(Bf7));
    __hv_rpole_f(&sRPole_PYa1VQkN, VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_Seiy9c1B, VIf(Bf7), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_Pc84DSgR, VOf(Bf7));
    __hv_mul_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_S8iqCzxL, VOf(Bf14));
    __hv_rpole_f(&sRPole_mwySGHg1, VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_sY6jGgz0, VIf(Bf14), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_qnHHwl5D, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_JgjUfi2v, VOf(Bf7));
    __hv_rpole_f(&sRPole_TWb9vKZ1, VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_SZXfOcM4, VIf(Bf7), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_GN806S3e, VOf(Bf7));
    __hv_mul_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_DGqHFwfU, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_vWAbx8jJ, VOf(Bf7));
    __hv_rpole_f(&sRPole_ppQuws7H, VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_PZcchYy9, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_ZOSayyrT, VOf(Bf7));
    __hv_rpole_f(&sRPole_4wjiJimU, VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_8qQ9fDeS, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_JQCW5c5r, VOf(Bf7));
    __hv_rpole_f(&sRPole_3ZW7ddWb, VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf10), VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_JlE73Dur, VOf(Bf3));
    __hv_rpole_f(&sRPole_hmvS3852, VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_xGAbzCq9, VIf(Bf3), VOf(Bf10));
    __hv_mul_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_OLZxLPBZ, VOf(Bf3));
    __hv_mul_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_C9fMf6kV, VOf(Bf7));
    __hv_line_f(&sLine_Mqu92vLE, VOf(Bf10));
    __hv_line_f(&sLine_hjiNq5UJ, VOf(Bf14));
    __hv_line_f(&sLine_971pu4Wp, VOf(Bf5));
    __hv_line_f(&sLine_ZdExB8Dn, VOf(Bf11));
    __hv_biquad_f(&sBiquad_s_KO5YVdax, VIf(Bf3), VIf(Bf7), VIf(Bf10), VIf(Bf14), VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf5), 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f, 0.9f);
    __hv_min_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf11), -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f, -0.9f);
    __hv_max_f(VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_line_f(&sLine_c2liaKkV, VOf(Bf5));
    __hv_mul_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_phasor_k_f(&sPhasor_6nnVgvGq, VOf(Bf11));
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
    __hv_tabhead_f(&sTabhead_hQaExkkW, VOf(Bf7));
    __hv_var_k_f_r(VOf(Bf14), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_KtLIYQDH, VOf(Bf7));
    __hv_mul_f(VIf(Bf11), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_GHs7VAYV, VOf(Bf11));
    __hv_min_f(VIf(Bf7), VIf(Bf11), VOf(Bf11));
    __hv_zero_f(VOf(Bf7));
    __hv_max_f(VIf(Bf11), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_floor_f(VIf(Bf7), VOf(Bf14));
    __hv_varread_f(&sVarf_X428eLsW, VOf(Bf11));
    __hv_zero_f(VOf(Bf3));
    __hv_lt_f(VIf(Bf14), VIf(Bf3), VOf(Bf3));
    __hv_and_f(VIf(Bf11), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf14), VIf(Bf3), VOf(Bf3));
    __hv_cast_fi(VIf(Bf3), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_VDNqKQe2, VIi(Bi1), VOf(Bf3));
    __hv_tabread_if(&sTabread_ycI7tlRw, VIi(Bi0), VOf(Bf11));
    __hv_sub_f(VIf(Bf3), VIf(Bf11), VOf(Bf3));
    __hv_sub_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf3), VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf14), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf11), VIf(Bf14), VIf(Bf5), VOf(Bf14));
    __hv_varread_f(&sVarf_qmst7fiI, VOf(Bf11));
    __hv_rpole_f(&sRPole_FXwqjyRD, VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_5jvyG9lp, VIf(Bf11), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_wh5jdI5W, VOf(Bf11));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_phasor_k_f(&sPhasor_HYGyUm9K, VOf(Bf14));
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
    __hv_tabhead_f(&sTabhead_C00Ozqvn, VOf(Bf10));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf10), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_NSv7PfnO, VOf(Bf10));
    __hv_mul_f(VIf(Bf14), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_xExaIkMZ, VOf(Bf14));
    __hv_min_f(VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_zero_f(VOf(Bf10));
    __hv_max_f(VIf(Bf14), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf3), VIf(Bf10), VOf(Bf10));
    __hv_floor_f(VIf(Bf10), VOf(Bf3));
    __hv_varread_f(&sVarf_om4fexpZ, VOf(Bf14));
    __hv_zero_f(VOf(Bf6));
    __hv_lt_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_and_f(VIf(Bf14), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_cast_fi(VIf(Bf6), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_fNAVefHb, VIi(Bi1), VOf(Bf6));
    __hv_tabread_if(&sTabread_I7bTGPzS, VIi(Bi0), VOf(Bf14));
    __hv_sub_f(VIf(Bf6), VIf(Bf14), VOf(Bf6));
    __hv_sub_f(VIf(Bf10), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf6), VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_fma_f(VIf(Bf14), VIf(Bf3), VIf(Bf5), VOf(Bf3));
    __hv_varread_f(&sVarf_SiJ3B6AX, VOf(Bf14));
    __hv_rpole_f(&sRPole_88A6uMHF, VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_SkhS6sYK, VIf(Bf14), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf14), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_StlTWCsb, VOf(Bf14));
    __hv_mul_f(VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_S1w46Xbb, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_tabwrite_f(&sTabwrite_TzQpu05y, VIf(Bf3));
    __hv_varread_f(&sVarf_8bNw7MnH, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_tabwrite_f(&sTabwrite_zLbUaPfj, VIf(Bf3));
    __hv_fma_f(VIf(Bf8), VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_6IJCRbCE, VOf(Bf2));
    __hv_rpole_f(&sRPole_VWN0Mvmr, VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_DbzaMbqE, VIf(Bf2), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_TDiZrXFu, VOf(Bf2));
    __hv_mul_f(VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf2), VIf(O1), VOf(O1));
    __hv_varread_f(&sVarf_z6VYyMlN, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f, 1.12f);
    __hv_fma_f(VIf(Bf2), VIf(Bf1), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_6uxMA0nW, VOf(Bf1));
    __hv_rpole_f(&sRPole_vrIaC6Oy, VIf(Bf11), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_ndOiNXaU, VIf(Bf1), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf1), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_h2s7ejXB, VOf(Bf1));
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
