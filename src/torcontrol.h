// Copyright (c) 2015-2018 The Bitcoin Core developers
// Copyright (c) 2019-2021 Uladzimir (https://t.me/vovanchik_net)
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

/**
 * Functionality for communicating with Tor.
 */
#ifndef BITCOIN_TORCONTROL_H
#define BITCOIN_TORCONTROL_H

#include <scheduler.h>

extern const std::string DEFAULT_TOR_CONTROL;
static const bool DEFAULT_LISTEN_ONION = false;

void StartTorControl();
void InterruptTorControl();
void StopTorControl();

#endif /* BITCOIN_TORCONTROL_H */
