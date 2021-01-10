//------------------------------------------------------------------------
// Copyright(c) 2021 studiox.
//------------------------------------------------------------------------

#pragma once

#include "pluginterfaces/base/funknown.h"
#include "pluginterfaces/vst/vsttypes.h"

namespace studioxlab {
//------------------------------------------------------------------------
static const Steinberg::FUID kFuzzProcessorUID (0xCDCA4D12, 0x035751BD, 0x98F52B12, 0xBF09101F);
static const Steinberg::FUID kFuzzControllerUID (0x00B65DBD, 0x5AD8544E, 0x973E30CF, 0x95BBC41E);

#define FuzzVST3Category "Fx"

//------------------------------------------------------------------------
} // namespace studioxlab
