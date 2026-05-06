#pragma once

#include <cstdint>
#include <array>

namespace K_MATH {
    void BitsToBytes();
    void BytesToBits();
    void ByteEncode();
    void ByteDecode();
    void SampleNTT();
    void SamplePolyCBD();
    void NTT();
    void InvNTT();
    void MultiplyNTTs();
    void BaseCaseMultiply();
}
