#include "AkSettings.h"

UAkSettings::UAkSettings() {
    this->MaxSimultaneousReverbVolumes = 4;
    this->bAutoConnectToWAAPI = false;
    this->DefaultOcclusionCollisionChannel = ECC_Visibility;
    this->DefaultFitToGeometryCollisionChannel = ECC_WorldStatic;
    this->GlobalDecayAbsorption = 0.50f;
    this->SplitSwitchContainerMedia = true;
    this->SplitMediaPerFolder = false;
    this->UseEventBasedPackaging = true;
    this->EnableAutomaticAssetSynchronization = false;
    this->CommandletCommitMessage = TEXT("Unreal Wwise Sound Data auto-generation (not lightmaps)");
    this->AskedToUseNewAssetManagement = true;
    this->bEnableMultiCoreRendering = false;
    this->MigratedEnableMultiCoreRendering = true;
    this->FixupRedirectorsDuringMigration = false;
}

