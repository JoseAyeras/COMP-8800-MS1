#pragma once

#include <cstdint>
#include <array>

namespace K_PKE{
    void KeyGen(
        std::array<uint8_t, 32> d, //input: random number d
        std::array<uint8_t, 800> & ekpke, //output: encapsulation key ek
        std::array<uint8_t, 800> & dkpke //output: encapsulation key ek
    );
}
