#include "ORDynamicTexture.h"

AORDynamicTexture::AORDynamicTexture() {
    this->TexWidth = 128;
    this->TexHeight = 128;
    this->bSignedDistanceField = false;
    this->Texture = NULL;
    this->bTextureDirty = false;
}

