#include "ORBaseSkeletalMeshNPC.h"
#include "EmotionComponent.h"
#include "SquanchMouthComponent.h"
#include "ORAkComponent.h"
#include "ORAttentionComponent.h"
#include "ORBlinkComponent.h"
#include "ORGazeTargetComponent.h"
#include "ORPossessableComponent.h"
#include "ORVocalizationComponent.h"
#include "ORTriggerSourceComponent.h"

class USkeletalMesh;

void AORBaseSkeletalMeshNPC::TrySkeletalMeshMerge() {
}

void AORBaseSkeletalMeshNPC::StopNoticingPlayer() {
}

void AORBaseSkeletalMeshNPC::StartNoticingPlayer() {
}



void AORBaseSkeletalMeshNPC::SetupSkeletalMeshMerge(bool bAsync) {
}

void AORBaseSkeletalMeshNPC::FinalizeSkeletalMeshMerge(USkeletalMesh* MergedMesh) {
}

void AORBaseSkeletalMeshNPC::DoSkeletalMeshMerge() {
}

AORBaseSkeletalMeshNPC::AORBaseSkeletalMeshNPC() {
    this->bDoRuntimeSkeletalMeshMerge = false;
    this->NewMergedMesh = NULL;
    this->bUseSignificanceManagement = true;
    this->ThrottledTickRate = 0.10f;
    this->SignificanceBucket = 0;
    this->OutOfSightSigBoost = 10.00f;
    this->bAllowIdleFidgets = true;
    this->bIsAFuckingZombieThatDoesntBlink = false;
    this->BlinkDelay = 4.00f;
    this->BlinkDelayDeviation = 4.00f;
    this->bCanDivertGaze = false;
    this->DivertFrequency = 2.00f;
    this->MaxDivertAngle = 25.00f;
    this->DivertFrequencyDeviation = 2.00f;
    this->bShouldNoticePlayer = false;
    this->bRandomizePlayerNotice = false;
    this->MaxNoticeRadius = 0.00f;
    this->MinNoticeDot = 0.00f;
    this->MaxNoticeCooldownDelay = 10.00f;
    this->MaxNoticeTime = 10.00f;
    this->bNoticedPlayer = false;
    this->IdleOverrideStartMax = 5.00f;
    this->BlinkComp = CreateDefaultSubobject<UORBlinkComponent>(TEXT("BlinkComp"));
    this->EmotionComp = CreateDefaultSubobject<UEmotionComponent>(TEXT("EmotionComp"));
    this->SquanchMouthComp = CreateDefaultSubobject<USquanchMouthComponent>(TEXT("SquanchMouth"));
    this->GazeTargetComp = CreateDefaultSubobject<UORGazeTargetComponent>(TEXT("GazeTarget"));
    this->ORAk = CreateDefaultSubobject<UORAkComponent>(TEXT("Mouth"));
    this->ORPossessableComp = CreateDefaultSubobject<UORPossessableComponent>(TEXT("ORPossessableComp"));
    this->ORAttentionComp = CreateDefaultSubobject<UORAttentionComponent>(TEXT("ORAttentionComp"));
    this->ORVoclizationComp = CreateDefaultSubobject<UORVocalizationComponent>(TEXT("ORVocalizationComp"));
    this->TriggerSourceComponent = CreateDefaultSubobject<UORTriggerSourceComponent>(TEXT("TriggerSourceComponent"));
}

