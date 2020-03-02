// Aleth: Ethereum C++ client, tools and libraries.
// Copyright 2015-2019 Aleth Authors.
// Licensed under the GNU General Public License, Version 3.

#include "../GenesisInfo.h"

static dev::h256 const c_genesisStateRootMainNetwork("56e81f171bcc55a6ff8345e692c0f86e5b48e01b996cadc001622fb5e363b421");
static std::string const c_genesisInfoMainNetwork = std::string() +
R"E(
{
    "sealEngine": "Ethash",
    "params": {
        "accountStartNonce": "0x00",
        "homesteadForkBlock": "0x00",
        "daoHardforkBlock": "0x00",
        "EIP150ForkBlock": "0x00",
        "EIP158ForkBlock": "0x00",
        "byzantiumForkBlock": "0x00",
        "constantinopleForkBlock": "0x00",
        "constantinopleFixForkBlock": "0x00",
        "istanbulForkBlock": "0x00",
        "networkID" : "0xE1",
        "chainID": "0xE1",
        "maximumExtraDataSize": "0x20",
        "tieBreakingGas": false,
        "minGasLimit": "0x1388",
        "maxGasLimit": "7fffffffffffffff",
        "gasLimitBoundDivisor": "0x0400",
        "minimumDifficulty": "0x2540BE400",
        "difficultyBoundDivisor": "0x0800",
        "durationLimit": "0x1E",
        "blockReward": "0x00"
    },
    "genesis": {
        "nonce": "0x0000000000000042",
        "difficulty": "0x000000000",
        "mixHash": "0x0000000000000000000000000000000000000000000000000000000000000000",
        "author": "0x0000000000000000000000000000000000000000",
        "timestamp": "0x00",
        "parentHash": "0x0000000000000000000000000000000000000000000000000000000000000000",
        "extraData": "0x187571abc37e076310b3512139d39cecbb077b49e6fc591cc81c7c73c2674db9",
        "gasLimit": "0x2fefba"
    }
}
)E";
