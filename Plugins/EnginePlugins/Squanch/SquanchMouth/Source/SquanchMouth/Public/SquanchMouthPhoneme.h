#pragma once
#include "CoreMinimal.h"
#include "SquanchMouthPhoneme.generated.h"

UENUM(BlueprintType)
enum class SquanchMouthPhoneme : uint8 {
    PHON_INVALID = 0x63,
    PHON_SIL = 0x0,
    PHON_P,
    PHON_B,
    PHON_T,
    PHON_D,
    PHON_K,
    PHON_G,
    PHON_M,
    PHON_N,
    PHON_NG,
    PHON_RA,
    PHON_RU,
    PHON_FLAP,
    PHON_PH,
    PHON_F,
    PHON_V,
    PHON_TH,
    PHON_DH,
    PHON_S,
    PHON_Z,
    PHON_SH,
    PHON_ZH,
    PHON_CX,
    PHON_X,
    PHON_GH,
    PHON_HH,
    PHON_R,
    PHON_Y,
    PHON_L,
    PHON_W,
    PHON_H,
    PHON_TS,
    PHON_CH,
    PHON_JH,
    PHON_IY,
    PHON_E,
    PHON_EN,
    PHON_EH,
    PHON_A,
    PHON_AA,
    PHON_AAN,
    PHON_AO,
    PHON_AON,
    PHON_O,
    PHON_ON,
    PHON_UW,
    PHON_UY,
    PHON_EU,
    PHON_OE,
    PHON_OEN,
    PHON_AH,
    PHON_IH,
    PHON_UU,
    PHON_UH,
    PHON_AX,
    PHON_UX,
    PHON_AE,
    PHON_ER,
    PHON_AXR,
    PHON_EXR,
    PHON_EY,
    PHON_AW,
    PHON_AY,
    PHON_OY,
    PHON_OW,
    PHON_OPEN,
    PHON_MAX = 0x64,
};

