/*******************************************************************************
The content of this file includes portions of the AUDIOKINETIC Wwise Technology
released in source code form as part of the SDK installer package.

Commercial License Usage

Licensees holding valid commercial licenses to the AUDIOKINETIC Wwise Technology
may use this file in accordance with the end user license agreement provided
with the software or, alternatively, in accordance with the terms contained in a
written agreement between you and Audiokinetic Inc.

Version: v2021.1.4  Build: 7707
Copyright (c) 2006-2021 Audiokinetic Inc.
*******************************************************************************/

#pragma once

#include "AkVariant.h"
#include <AK/WwiseAuthoringAPI/AkJsonBase.h>

namespace AK
{
	namespace WwiseAuthoringAPI
	{
		typedef AkJsonBase<AkVariant, std::string, std::less<std::string> > AkJson;
	}
}
