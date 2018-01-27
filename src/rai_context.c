/*******************************************************************************
*   RaiBlock Wallet for Ledger Nano S & Blue
*   (c) 2016 Ledger
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/

#include "rai_internal.h"

/**
 * Initialize the application context on boot
 */
void rai_context_init() {
    L_DEBUG_APP(("Context init\n"));
    os_memset(&rai_context_D, 0, sizeof(rai_context_D));
    SB_SET(rai_context_D.halted, 0);
}
