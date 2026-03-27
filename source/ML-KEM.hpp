#pragma once

#include <cstdint>
#include <array>

namespace ML_KEM
{
    //this namespace holds the functions for ML-KEM as shown in the NIST standard
    //https://nvlpubs.nist.gov/nistpubs/FIPS/NIST.FIPS.203.pdf
    void KeyGen_internal(
        std::array<uint8_t, 32> d, //input: random number d
        std::array<uint8_t, 32> z, //input: random number z
        std::array<uint8_t, 800> & ek, //output: encapsulation key ek
        std::array<uint8_t, 1632> & dk  //output: decapsulation key dk
    );
    void Encaps_internal();
    void Decaps_internal();

    void KeyGen(
        std::array<uint8_t, 32> d, //input: random number d
        std::array<uint8_t, 800> & ekpke, //output: encapsulation key ekpke
        std::array<uint8_t, 800> & dkpke  //output: decapsulation key dkpke
    );
    void Encaps();
    void Decaps();
}
