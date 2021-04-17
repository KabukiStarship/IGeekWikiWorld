/* IGeekWikiWorld @version 0.x
@link    https://github.com/KabukiStarship/IGeekWikiWorld.git
@file    /kabuki/seam_tree.cc
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright (C) 2014-21 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#pragma once
#include <_Config.h>

#include <Script2/_Package.inl>

int main(int arg_count, char** args) {
  enum { cSize = 1024 };
  char log[cSize];
  return ::_::TestTree<IGeek::WikiWorld::Core>(arg_count, args, log, cSize);
}
