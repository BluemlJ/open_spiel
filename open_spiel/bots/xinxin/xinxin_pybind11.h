// Copyright 2019 DeepMind Technologies Ltd. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef OPEN_SPIEL_BOTS_XINXIN_XINXIN_PYBIND11_H_
#define OPEN_SPIEL_BOTS_XINXIN_XINXIN_PYBIND11_H_

#include "pybind11/include/pybind11/pybind11.h"

namespace open_spiel {
void init_pyspiel_xinxin(::pybind11::module& m);
}  // namespace open_spiel

#endif  // OPEN_SPIEL_BOTS_XINXIN_XINXIN_PYBIND11_H_
