#include "ML-KEM.hpp"
#include "K-PKE.hpp"
#include <cstring>

using namespace ML_KEM;

void KeyGen_internal(
        std::array<uint8_t, 32> d, //input: random number d
        std::array<uint8_t, 32> z, //input: random number z
        std::array<uint8_t, 800> & ek, //output: encapsulation key ek
        std::array<uint8_t, 1632> & dk  //output: decapsulation key dk
){
    std::array<uint8_t, 800> dkpke;
    K_PKE::KeyGen(d, ek, dkpke); //intermediary ekpke unnecessary due to ek and ekpke being equal size
    size_t offset = 0;

    std::memcpy(dk.data() + offset, dkpke.data(), 800);
    offset += 800;

    std::memcpy(dk.data() + offset, ek.data(), 800);
    offset += 800;

    std::memcpy(dk.data() + offset, hash_ek.data(), 32);
    offset += 32;

    std::memcpy(dk.data() + offset, z.data(), 32);
}
