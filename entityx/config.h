#pragma once

#include <cstdint>
#include <cstddef>

#include "GameTime.h"

namespace entityx {

static const size_t MAX_COMPONENTS = 64;
using TimeDelta = const GameTime&;

}  // namespace entityx
