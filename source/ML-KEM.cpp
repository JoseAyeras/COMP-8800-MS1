#include "ML-KEM.hpp"
#include "K-PKE.hpp"

using namespace ML_KEM;

void KeyGen_internal(
        std::array<uint8_t, 32> d, //input: random number d
        std::array<uint8_t, 32> z, //input: random number z
        std::array<uint8_t, 800> & ek, //output: encapsulation key ek
        std::array<uint8_t, 1632> & dk  //output: decapsulation key dk
){
    std::array<uint8_t, 800> dkpke;
    K_PKE::KeyGen(d, ek, dkpke); //intermediary ekpke unnecessary due to ek and ekpke being equal size

}
