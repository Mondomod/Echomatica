/** Mondomatic */

#ifndef _HEAVY_ECHOMATICA_1_3_1_H_
#define _HEAVY_ECHOMATICA_1_3_1_H_

#include "HvHeavy.h"

#ifdef __cplusplus
extern "C" {
#endif

#if HV_APPLE
#pragma mark - Heavy Context
#endif

typedef enum {
  HV_ECHOMATICA_1_3_1_PARAM_IN_DRY = 0xBA8CED4E, // dry
  HV_ECHOMATICA_1_3_1_PARAM_IN_DRYMOD = 0xEA9D7BDD, // drymod
  HV_ECHOMATICA_1_3_1_PARAM_IN_ECHO = 0x63E722C0, // echo
  HV_ECHOMATICA_1_3_1_PARAM_IN_ECHOMOD = 0x31E76251, // echomod
  HV_ECHOMATICA_1_3_1_PARAM_IN_FDBCK_MODE = 0xBB6123FD, // fdbck_mode
  HV_ECHOMATICA_1_3_1_PARAM_IN_FEEDBACK = 0xF1E7CD16, // feedback
  HV_ECHOMATICA_1_3_1_PARAM_IN_TAPEHEAD_MODE = 0xC8D93A6D, // tapehead_mode
  HV_ECHOMATICA_1_3_1_PARAM_IN_VARISPEED = 0xB25D05EB, // varispeed
  HV_ECHOMATICA_1_3_1_PARAM_IN_VARISPEED_ENABLE = 0x8ADB5B6B, // varispeed_enable
} Hv_Echomatica_1_3_1_ParameterIn;


/**
 * Creates a new patch instance.
 * Sample rate should be positive and in Hertz, e.g. 44100.0.
 */
HeavyContextInterface *hv_Echomatica_1_3_1_new(double sampleRate);

/**
 * Creates a new patch instance.
 * @param sampleRate  Sample rate should be positive (> 0) and in Hertz, e.g. 48000.0.
 * @param poolKb  Pool size is in kilobytes, and determines the maximum amount of memory
 *   allocated to messages at any time. By default this is 10 KB.
 * @param inQueueKb  The size of the input message queue in kilobytes. It determines the
 *   amount of memory dedicated to holding scheduled messages between calls to
 *   process(). Default is 2 KB.
 * @param outQueueKb  The size of the output message queue in kilobytes. It determines the
 *   amount of memory dedicated to holding scheduled messages to the default sendHook.
 *   See getNextSentMessage() for info on accessing these messages. Default is 0 KB.
 */
HeavyContextInterface *hv_Echomatica_1_3_1_new_with_options(double sampleRate, int poolKb, int inQueueKb, int outQueueKb);

/**
 * Free the patch instance.
 */
void hv_Echomatica_1_3_1_free(HeavyContextInterface *instance);


#ifdef __cplusplus
} // extern "C"
#endif

#endif // _HEAVY_ECHOMATICA_1_3_1_H_
