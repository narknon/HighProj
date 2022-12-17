#include "SquanchPubSubProfilerSample.h"

FSquanchPubSubProfilerSample::FSquanchPubSubProfilerSample() {
    this->PctInFrameGameThread = 0.00f;
    this->AvgGameThread = 0.00f;
    this->PctInFrameRenderThread = 0.00f;
    this->AvgRenderThread = 0.00f;
    this->PctInFrameRHIThread = 0.00f;
    this->AvgRHIThread = 0.00f;
    this->PctInFrameGPU = 0.00f;
    this->AvgGPU = 0.00f;
    this->UsedMemHWM = 0.00f;
    this->AvgUsedMem = 0.00f;
}

