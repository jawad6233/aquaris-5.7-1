/*******************************************************************************
 *
 * Filename:
 * ---------
 * audio_ver1_volume_custom_default.h
 *
 * Project:
 * --------
 *   ALPS
 *
 * Description:
 * ------------
 * This file is the header of audio customization related parameters or definition.
 *
 * Author:
 * -------
 * Chipeng chang
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef AUDIO_VER1_VOLUME_CUSTOM_DEFAULT_H
#define AUDIO_VER1_VOLUME_CUSTOM_DEFAULT_H

#define VER1_AUD_VOLUME_RING \
    80,96,112,132,148,160,176,180,196,208,212,224,232,244,255,\
    80,96,112,132,148,160,176,180,196,208,212,224,232,244,255,\
    128,144,152,164,172,180,184,192,196,200,204,208,212,220,224,\
    80,96,112,132,148,160,176,180,196,208,212,224,232,244,255

#define VER1_AUD_VOLUME_SIP \
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    0,43,85,128,171,213,255,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_MIC \
    64,112,192,196,192,192,184,184,184,184,184,0,0,0,0,\
    255,192,192,192,192,192,196,184,184,184,184,0,0,0,0,\
    255,208,208,192,255,208,196,0,0,0,0,0,0,0,0,\
    255,208,208,164,255,208,172,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_FM \
    16,32,48,64,80,96,112,128,144,160,176,192,208,224,240,\
    16,32,48,64,80,96,112,128,144,160,176,192,208,224,240,\
    140,152,164,172,180,184,192,196,200,204,208,212,216,220,224,\
    16,32,48,64,80,96,112,128,144,160,176,192,208,224,240

#define VER1_AUD_VOLUME_SPH \
    96,104,112,116,124,132,136,0,0,0,0,0,0,0,0,\
    40,52,64,76,96,116,124,0,0,0,0,0,0,0,0,\
    96,112,132,136,144,152,160,0,0,0,0,0,0,0,0,\
    40,52,64,76,88,100,112,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_SID \
    0,0,16,0,0,0,0,0,0,0,0,0,0,0,0,\
    0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,\
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_MEDIA \
    32,48,64,80,96,112,128,144,160,176,192,208,224,240,255,\
    80,96,118,124,132,148,166,184,196,208,220,226,232,244,255,\
    128,144,152,164,172,180,184,192,196,200,204,208,212,220,224,\
    32,48,64,80,96,112,128,144,160,176,192,208,224,240,255

#define VER1_AUD_VOLUME_MATV \
    0,32,64,92,128,160,192,0,0,0,0,0,0,0,0,\
    0,32,64,92,128,160,192,0,0,0,0,0,0,0,0,\
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    0,43,85,128,171,213,255,0,0,0,0,0,0,0,0

#define VER1_AUD_NORMAL_VOLUME_DEFAULT \
    128,128,128,128,128,128

#define VER1_AUD_HEADSER_VOLUME_DEFAULT \
    148,148,148,148,148,148

#define VER1_AUD_SPEAKER_VOLUME_DEFAULT \
    148,144,144,160,144,144

#define VER1_AUD_HEADSETSPEAKER_VOLUME_DEFAULT \
    132,120,132,132,132,132,132,132

#define VER1_AUD_EXTAMP_VOLUME_DEFAULT \
    132,132,132,132,132,132

#define VER1_AUD_VOLUME_LEVEL_DEFAULT \
    15,7,15,15,7,7,7,15,15

#endif
