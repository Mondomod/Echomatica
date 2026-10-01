/** Mondomatic */

#ifndef _HEAVY_LV2_ECHOMATICA_1_3_1_
#define _HEAVY_LV2_ECHOMATICA_1_3_1_

#include "DistrhoPlugin.hpp"
#include "DistrhoPluginInfo.h"
#include "Heavy_Echomatica_1_3_1.hpp"

START_NAMESPACE_DISTRHO

#define HV_DPF_NUM_PARAMETER 9

static void hvSendHookFunc(HeavyContextInterface *c, const char *sendName, uint32_t sendHash, const HvMessage *m);
static void hvPrintHookFunc(HeavyContextInterface *c, const char *printLabel, const char *msgString, const HvMessage *m);

class HeavyDPF_Echomatica_1_3_1 : public Plugin
{
public:
  enum Parameters
  {
      paramdry,
      paramdrymod,
      paramecho,
      paramechomod,
      paramfdbck_mode,
      paramfeedback,
      paramtapehead_mode,
      paramvarispeed,
      paramvarispeed_enable,
  };



  HeavyDPF_Echomatica_1_3_1();
  ~HeavyDPF_Echomatica_1_3_1() override;

  void handleMidiInput(uint32_t frames, const MidiEvent* midiEvents, uint32_t midiEventCount);
  void handleMidiSend(uint32_t sendHash, const HvMessage *m);
  void hostTransportEvents(uint32_t frames);
  void setOutputParameter(uint32_t sendHash, const HvMessage *m);

protected:
  // -------------------------------------------------------------------
  // Information

  const char* getLabel() const noexcept override
  {
    return "Echomatica_1_3_1";
  }
  const char* getDescription() const override
  {
    return "Rename Me";
  }

  const char* getMaker() const noexcept override
  {
    return "plugdata";

  }

  const char* getLicense() const noexcept override
  {
    return "ISC";

  }

  uint32_t getVersion() const noexcept override
  {
    return d_version(0, 0, 1);
  }

  int64_t getUniqueId() const noexcept override
  {
    return int64_t( 0x9F7FFF6C );
  }

  // -------------------------------------------------------------------
  // Init

  void initParameter(uint32_t index, Parameter& parameter) override;
  

  // -------------------------------------------------------------------
  // Internal data

  float getParameterValue(uint32_t index) const override;
  void  setParameterValue(uint32_t index, float value) override;

  // -------------------------------------------------------------------
  // Process

  // void activate() override;
  // void deactivate() override;

#if DISTRHO_PLUGIN_WANT_MIDI_INPUT
  void run(const float** inputs, float** outputs, uint32_t frames, const MidiEvent* midiEvents, uint32_t midiEventCount) override;
#else
  void run(const float** inputs, float** outputs, uint32_t frames) override;
#endif

  // -------------------------------------------------------------------
  // Callbacks

  void sampleRateChanged(double newSampleRate) override;

  // -------------------------------------------------------------------

private:
  // parameters
  float _parameters[HV_DPF_NUM_PARAMETER];

  // transport values
  bool wasPlaying = false;
  double nextClockTick = 0.0;
  double sampleAtCycleStart = 0.0;

  // midi out buffer
  int midiOutCount;
  MidiEvent midiOutEvent;

  // heavy context
  HeavyContextInterface *_context;

  // HeavyDPF_Echomatica_1_3_1<float> fEchomatica_1_3_1;

  DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(HeavyDPF_Echomatica_1_3_1)
};

// -----------------------------------------------------------------------

END_NAMESPACE_DISTRHO

#endif // _HEAVY_LV2_ECHOMATICA_1_3_1_
