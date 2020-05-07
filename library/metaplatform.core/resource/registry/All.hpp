//#############################################################################
//
// Product: MetaPlatform
// License: MIT License
//
//#############################################################################

#pragma once

#include "../common/All.hpp"

#ifdef MP_PLATFORM_CLI
#include "cli/All.hpp"
#elif MP_PLATFORM_WINDOWS
#include "windows/All.hpp"
#endif
