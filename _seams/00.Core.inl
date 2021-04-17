/* IGeekWikiWorld @version 0.x
@link    https://github.com/KabukiStarship/IGeekWikiWorld.git
@file    /_Seams/00.Core.inl
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright (C) 2021 Cale McCollough; all right reserved (R). 
This Source Code Form is subject to the terms of the Mozilla Public License, 
v. 2.0. If a copy of the MPL was not distributed with this file, You can 
obtain one at https://mozilla.org/MPL/2.0/. */

#pragma once
#include <module_config.h>

#if SEAM == IGEEK_WIKIWORLD_0
#include "_debug.inl"
#else
#include "_release.inl"
#endif

using namespace _;

namespace IGeek { namespace WikiWorld { 
inline const CHA* Core (CHA* seam_log, CHA* seam_end, const CHA* args) {
#if SEAM >= IGEEK_WIKIWORLD_0
  TEST_BEGIN;

  PRINT_HEADING ("Testing Foo Fun.");

#endif
  return 0;
}
}  //< namespace WikiWorld
}  //< namespace IGeek
