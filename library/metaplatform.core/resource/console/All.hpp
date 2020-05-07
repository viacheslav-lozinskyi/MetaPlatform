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
#elif MP_PLATFORM_IOS
#include "ios/All.hpp"
#elif MP_PLATFORM_JAVA
#include "java/All.hpp"
#elif MP_PLATFORM_LINUX
#include "linux/All.hpp"
#elif MP_PLATFORM_MACOS
#include "macos/All.hpp"
#elif MP_PLATFORM_WINDOWS
#include "windows/All.hpp"
#endif
