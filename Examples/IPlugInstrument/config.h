#define PLUG_NAME "IPlugInstrument"
#define PLUG_MFR "Acme"
#define PLUG_VERSION_HEX 0x00010000
#define PLUG_VERSION_STR "1.0.0"
#define PLUG_UNIQUE_ID 'Ipef'
#define PLUG_MFR_ID 'Acme'
#define PLUG_URL_STR "www.olilarkin.co.uk"
#define PLUG_EMAIL_STR "spam@me.com"
#define PLUG_COPYRIGHT_STR "Copyright 2017 Acme Inc"
#define PLUG_CLASS_NAME IPlugInstrument

#define BUNDLE_NAME "IPlugInstrument"
#define BUNDLE_MFR "Acme"
#define BUNDLE_DOMAIN "com"

#define PLUG_CHANNEL_IO "0-2"

#define PLUG_LATENCY 0
#define PLUG_IS_INSTRUMENT 1
#define PLUG_IS_MFX 0
#define PLUG_DOES_MIDI 1
#define PLUG_DOES_STATE_CHUNKS 0
#define PLUG_HAS_UI 1
#define PLUG_WIDTH 600
#define PLUG_HEIGHT 600
#define PLUG_FPS 60
#define PLUG_SHARED_RESOURCES 1

#define AUV2_ENTRY IPlugInstrument_Entry
#define AUV2_ENTRY_STR "IPlugInstrument_Entry"
#define AUV2_FACTORY IPlugInstrument_Factory
#define AUV2_VIEW_CLASS IPlugInstrument_View
#define AUV2_VIEW_CLASS_STR "IPlugInstrument_View"

#define AAX_TYPE_IDS 'EFN1', 'EFN2'
#define AAX_TYPE_IDS_AUDIOSUITE 'EFA1', 'EFA2'
#define AAX_PLUG_MFR_STR "Acme\nAcme\nAcme"
#define AAX_PLUG_NAME_STR "IPlugInstrument\nIPEF"
#define AAX_PLUG_CATEGORY_STR "Effect"
#define AAX_DOES_AUDIOSUITE 1

#define VST3_SUBCATEGORY "Fx"

#define APP_NUM_CHANNELS 2
#define APP_N_VECTOR_WAIT 0
#define APP_MULT 1
#define APP_COPY_AUV3 0
#define APP_RESIZABLE 0

#define PNGKNOB_FN "knob.png"
#define PNGKNOBROTATE_FN "knob-rotate.png"
#define SVGKNOB_FN "BefacoBigKnob.svg"
#define TIGER_FN "23.svg"
#define ROBOTTO_FN "Roboto-Regular.ttf"
