/** Mondomatic */

#include "Heavy_Echomatica_1_3_1.h"
#include "HeavyDPF_Echomatica_1_3_1.hpp"
#include <set>



#define HV_HASH_NOTEIN          0x67E37CA3
#define HV_HASH_CTLIN           0x41BE0f9C
#define HV_HASH_POLYTOUCHIN     0xBC530F59
#define HV_HASH_PGMIN           0x2E1EA03D
#define HV_HASH_TOUCHIN         0x553925BD
#define HV_HASH_BENDIN          0x3083F0F7
#define HV_HASH_MIDIIN          0x149631bE
#define HV_HASH_MIDIREALTIMEIN  0x6FFF0BCF

#define HV_HASH_NOTEOUT         0xD1D4AC2
#define HV_HASH_CTLOUT          0xE5e2A040
#define HV_HASH_POLYTOUCHOUT    0xD5ACA9D1
#define HV_HASH_PGMOUT          0x8753E39E
#define HV_HASH_TOUCHOUT        0x476D4387
#define HV_HASH_BENDOUT         0xE8458013
#define HV_HASH_MIDIOUT         0x6511DE55
#define HV_HASH_MIDIOUTPORT     0x165707E4

#define MIDI_RT_CLOCK           0xF8
#define MIDI_RT_START           0xFA
#define MIDI_RT_CONTINUE        0xFB
#define MIDI_RT_STOP            0xFC
#define MIDI_RT_ACTIVESENSE     0xFE
#define MIDI_RT_RESET           0xFF

#define HV_HASH_DPF_BPM         0xDF8C2721

// midi realtime messages
std::set<int> mrtSet {
  MIDI_RT_CLOCK,
  MIDI_RT_START,
  MIDI_RT_CONTINUE,
  MIDI_RT_STOP,
  MIDI_RT_RESET
};


START_NAMESPACE_DISTRHO


// -------------------------------------------------------------------
// Heavy Send and Print hooks

static void hvSendHookFunc(HeavyContextInterface *c, const char *sendName, uint32_t sendHash, const HvMessage *m)
{
  HeavyDPF_Echomatica_1_3_1* plugin = (HeavyDPF_Echomatica_1_3_1*)c->getUserData();
  if (plugin != nullptr)
  {
    plugin->setOutputParameter(sendHash, m);
  }
}

static void hvPrintHookFunc(HeavyContextInterface *c, const char *printLabel, const char *msgString, const HvMessage *m)
{
  char buf[64];
  char* dst = buf;
  int len = strnlen(printLabel, 48);
  dst = strncpy(dst, printLabel, len);
  dst = strcpy(dst, " ");
  dst = strncpy(dst, msgString, 63-len);
  printf("> %s \n", buf);
}

// -------------------------------------------------------------------
// Main DPF plugin class

HeavyDPF_Echomatica_1_3_1::HeavyDPF_Echomatica_1_3_1()
 : Plugin(HV_DPF_NUM_PARAMETER, 0, 0)
{
  
  _parameters[0] = 1.0f;
  _parameters[1] = 1.0f;
  _parameters[2] = 0.5f;
  _parameters[3] = 0.0f;
  _parameters[4] = 0.0f;
  _parameters[5] = 0.5f;
  _parameters[6] = 1.0f;
  _parameters[7] = 0.5f;
  _parameters[8] = 0.0f;

  _context = hv_Echomatica_1_3_1_new_with_options(getSampleRate(), 10, 9, 2);
  _context->setUserData(this);
  _context->setSendHook(&hvSendHookFunc);
  _context->setPrintHook(&hvPrintHookFunc);

  
  // ensure that the new context has the current parameters
  for (int i = 0; i < HV_DPF_NUM_PARAMETER; ++i) {
    setParameterValue(i, _parameters[i]);
  }
}

HeavyDPF_Echomatica_1_3_1::~HeavyDPF_Echomatica_1_3_1() {
  hv_Echomatica_1_3_1_free(_context);
}

void HeavyDPF_Echomatica_1_3_1::initParameter(uint32_t index, Parameter& parameter)
{// initialise parameters with defaults
  switch (index)
  {
    
      case paramdry:
        parameter.name = "dry";
        parameter.symbol = "dry";
        parameter.hints = kParameterIsAutomatable
        | kParameterIsBoolean;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 1.0f;
        break;
    
      case paramdrymod:
        parameter.name = "drymod";
        parameter.symbol = "drymod";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.5f;
        parameter.ranges.max = 2.0f;
        parameter.ranges.def = 1.0f;
        break;
    
      case paramecho:
        parameter.name = "echo";
        parameter.symbol = "echo";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 0.5f;
        break;
    
      case paramechomod:
        parameter.name = "echomod";
        parameter.symbol = "echomod";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 0.0f;
        break;
    
      case paramfdbck_mode:
        parameter.name = "fdbck mode";
        parameter.symbol = "fdbck_mode";
        parameter.hints = kParameterIsAutomatable| kParameterIsInteger;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 2.0f;
        parameter.ranges.def = 0.0f;
        break;
    
      case paramfeedback:
        parameter.name = "feedback";
        parameter.symbol = "feedback";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 0.5f;
        break;
    
      case paramtapehead_mode:
        parameter.name = "tapehead mode";
        parameter.symbol = "tapehead_mode";
        parameter.hints = kParameterIsAutomatable| kParameterIsInteger;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 14.0f;
        parameter.ranges.def = 1.0f;
        break;
    
      case paramvarispeed:
        parameter.name = "varispeed";
        parameter.symbol = "varispeed";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 0.5f;
        break;
    
      case paramvarispeed_enable:
        parameter.name = "varispeed enable";
        parameter.symbol = "varispeed_enable";
        parameter.hints = kParameterIsAutomatable
        | kParameterIsBoolean;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 0.0f;
        break;
    }
  
}

// -------------------------------------------------------------------
// Internal data

float HeavyDPF_Echomatica_1_3_1::getParameterValue(uint32_t index) const
{
  return _parameters[index];
  
}

void HeavyDPF_Echomatica_1_3_1::setParameterValue(uint32_t index, float value)
{
  switch (index) {
    case 0: {
      _context->sendFloatToReceiver(
        Heavy_Echomatica_1_3_1::Parameter::In::DRY,
        value);
      break;
    }
    
    case 1: {
      _context->sendFloatToReceiver(
        Heavy_Echomatica_1_3_1::Parameter::In::DRYMOD,
        value);
      break;
    }
    
    case 2: {
      _context->sendFloatToReceiver(
        Heavy_Echomatica_1_3_1::Parameter::In::ECHO,
        value);
      break;
    }
    
    case 3: {
      _context->sendFloatToReceiver(
        Heavy_Echomatica_1_3_1::Parameter::In::ECHOMOD,
        value);
      break;
    }
    
    case 4: {
      _context->sendFloatToReceiver(
        Heavy_Echomatica_1_3_1::Parameter::In::FDBCK_MODE,
        value);
      break;
    }
    
    case 5: {
      _context->sendFloatToReceiver(
        Heavy_Echomatica_1_3_1::Parameter::In::FEEDBACK,
        value);
      break;
    }
    
    case 6: {
      _context->sendFloatToReceiver(
        Heavy_Echomatica_1_3_1::Parameter::In::TAPEHEAD_MODE,
        value);
      break;
    }
    
    case 7: {
      _context->sendFloatToReceiver(
        Heavy_Echomatica_1_3_1::Parameter::In::VARISPEED,
        value);
      break;
    }
    
    case 8: {
      _context->sendFloatToReceiver(
        Heavy_Echomatica_1_3_1::Parameter::In::VARISPEED_ENABLE,
        value);
      break;
    }
    
    default: return;
  }
  _parameters[index] = value;
  
}

void HeavyDPF_Echomatica_1_3_1::setOutputParameter(uint32_t sendHash, const HvMessage *m)
{
}


// -------------------------------------------------------------------
// Process

// void HeavyDPF_Echomatica_1_3_1::activate()
// {

// }

// void HeavyDPF_Echomatica_1_3_1::deactivate()
// {

// }

// -------------------------------------------------------------------
// Host Transport Events handler

void HeavyDPF_Echomatica_1_3_1::hostTransportEvents(uint32_t frames)
{
  // Realtime events
  const TimePosition& timePos(getTimePosition());
  bool reset = false;

  if (timePos.playing)
  {
    if (timePos.frame == 0)
    {
      _context->sendMessageToReceiverV(HV_HASH_MIDIREALTIMEIN, 0,
        "ff", (float) MIDI_RT_RESET, 0.0);
      reset = true;
    }

    if (! this->wasPlaying)
    {
      if (timePos.frame == 0)
      {
        _context->sendMessageToReceiverV(HV_HASH_MIDIREALTIMEIN, 0,
          "ff", (float) MIDI_RT_START, 0.0);
      }
      if (! reset)
      {
        _context->sendMessageToReceiverV(HV_HASH_MIDIREALTIMEIN, 0,
          "ff", (float) MIDI_RT_CONTINUE, 0.0);
      }
    }
  }
  else if (this->wasPlaying)
  {
    _context->sendMessageToReceiverV(HV_HASH_MIDIREALTIMEIN, 0,
      "ff", (float) MIDI_RT_STOP, 0.0);
  }
  this->wasPlaying = timePos.playing;

  // sending clock ticks
  if (timePos.playing && timePos.bbt.valid)
  {
    float samplesPerBeat = 60 * getSampleRate() / timePos.bbt.beatsPerMinute;
    float samplesPerTick = samplesPerBeat / 24.0;

    /* get state */
    double nextClockTick = this->nextClockTick;
    double sampleAtCycleStart = this->sampleAtCycleStart;
    double sampleAtCycleEnd = sampleAtCycleStart + frames;

    if (nextClockTick >= 0 && sampleAtCycleStart >= 0 && sampleAtCycleEnd > sampleAtCycleStart) {
      while (nextClockTick < sampleAtCycleEnd) {
        double delayMs = 1000*(nextClockTick - sampleAtCycleStart)/getSampleRate();
        if (delayMs >= 0.0) {
          _context->sendMessageToReceiverV(HV_HASH_MIDIREALTIMEIN, delayMs,
            "ff", (float) MIDI_RT_CLOCK, 0.0);
        }
        nextClockTick += samplesPerTick;
      }
    }

    /* save variables for next cycle */
    this->sampleAtCycleStart = sampleAtCycleEnd;
    this->nextClockTick = nextClockTick;
  }
}


// -------------------------------------------------------------------
// DPF Plugin run() loop

#if DISTRHO_PLUGIN_WANT_MIDI_INPUT
void HeavyDPF_Echomatica_1_3_1::run(const float** inputs, float** outputs, uint32_t frames, const MidiEvent* midiEvents, uint32_t midiEventCount)
{
  handleMidiInput(frames, midiEvents, midiEventCount);
#else
void HeavyDPF_Echomatica_1_3_1::run(const float** inputs, float** outputs, uint32_t frames)
{
#endif
  hostTransportEvents(frames);

  const TimePosition& timePos(getTimePosition());
  if (timePos.bbt.valid)
    _context->sendMessageToReceiverV(HV_HASH_DPF_BPM, 0, "f", timePos.bbt.beatsPerMinute);

  _context->process((float**)inputs, outputs, frames);
}

// -------------------------------------------------------------------
// Callbacks

void HeavyDPF_Echomatica_1_3_1::sampleRateChanged(double newSampleRate)
{
  hv_Echomatica_1_3_1_free(_context);

  _context = hv_Echomatica_1_3_1_new_with_options(getSampleRate(), 10, 9, 2);
  _context->setUserData(this);
  _context->setSendHook(&hvSendHookFunc);
  _context->setPrintHook(&hvPrintHookFunc);

  // ensure that the new context has the current parameters
  for (int i = 0; i < HV_DPF_NUM_PARAMETER; ++i) {
    setParameterValue(i, _parameters[i]);
  }
}


// -----------------------------------------------------------------------
/* Plugin entry point, called by DPF to create a new plugin instance. */

Plugin* createPlugin()
{
    return new HeavyDPF_Echomatica_1_3_1();
}

// -----------------------------------------------------------------------

END_NAMESPACE_DISTRHO