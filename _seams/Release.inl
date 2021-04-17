/* IGeekWikiWorld @version 0.x
@link    https://github.com/KabukiStarship/WikiWorld.git
@file    /_Seams/Release.inl
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright (C) 2014-9 Cale McCollough; all right reserved (R). 
This Source Code Form is subject to the terms of the Mozilla Public License, 
v. 2.0. If a copy of the MPL was not distributed with this file, You can 
obtain one at https://mozilla.org/MPL/2.0/. */

#pragma once
#include <module_config.h>

#if SEAM == IGEEKWIKIWORLD_0
#include "_Debug.inl"
#else
#include "_Release.inl"
#endif

using namespace _;

namespace IGeek { namespace WikiWorld { 
inline const CHA* Release (CHA* seam_log, CHA* seam_end, const CHA* args) {
#if SEAM >= IGEEKWIKIWORLD_0
  TEST_BEGIN;

  PRINT_HEADING ("Testing Foo fun.");

#endif
  return 0;
}
}  //< namespace WikiWorld
}  //< namespace IGeek
