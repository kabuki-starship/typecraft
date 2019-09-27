/* Unseenia: Typecraft (C)(R) @version 0.x
@link    https://github.com/kabuki-starship/typecraft.git
@file    /inventory.cc
@author  Cale McCollough <calemccollough.github.io>
@license Copyright (C) 2018-9 Cale McCollough <calemccollough.github.io>;
All right reserved (R). Licensed under the Apache License, Version 2.0 (the
"License"); you may not use this file except in compliance with the License.
You may obtain a copy of the License at www.apache.org/licenses/LICENSE-2.0.
Unless required by applicable law or agreed to in writing, software distributed
under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
CONDITIONS OF ANY KIND, either express or implied. See the License for the
specific language governing permissions and limitations under the License. */

#include "inventory.h"

namespace typecraft {

Inventory::Inventory(SI4 max_size) {}

SI4 Inventory::GetCount() { return 0; }

SI4 Inventory::AddItem(Item* item) { return 0; }

Item* Inventory::RemoveItem(SI4 index) { return 0; }

void Inventory::DeleteAll() {}

void Inventory::Print() {}

}  // namespace typecraft