/*
 *  Copyright (c) 2021, The OpenThread Authors.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of the copyright holder nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef OPENTHREAD_CORE_EFR32_CONFIG_CHECK_H_
#define OPENTHREAD_CORE_EFR32_CONFIG_CHECK_H_

#include "board_config.h"

#if RADIO_CONFIG_2P4GHZ_OQPSK_SUPPORT
#if (RADIO_CONFIG_915MHZ_OQPSK_SUPPORT || RADIO_CONFIG_915MHZ_2GFSK_SUPPORT)
#error "Platform does not support dual-band operation"
#endif
#endif

#ifndef RADIO_CONFIG_915MHZ_OQPSK_SUPPORT
#if OPENTHREAD_CONFIG_RADIO_915MHZ_OQPSK_SUPPORT
#error "Platform not configured to support configuration option: OPENTHREAD_CONFIG_RADIO_915MHZ_OQPSK_SUPPORT"
#endif
#endif

#ifndef RADIO_CONFIG_915MHZ_2GFSK_SUPPORT
#if OPENTHREAD_CONFIG_RADIO_915MHZ_2GFSK_SUPPORT
#error "Platform not configured to support configuration option: OPENTHREAD_CONFIG_RADIO_915MHZ_2GFSK_SUPPORT"
#endif
#endif

#if OPENTHREAD_CONFIG_PSA_CRYPTO_ENABLE
#error "PSA Crypto is not yet supported for efr32: OPENTHREAD_CONFIG_PSA_CRYPTO_ENABLE"
#endif

#endif /* OPENTHREAD_CORE_EFR32_CONFIG_CHECK_H_ */
