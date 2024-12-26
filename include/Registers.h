#pragma once
#include <cstdint>
#include "Flags.h"

using Word = uint16_t;

struct Registers {
    Word AF = 0;
    Word BC = 0;
    Word DE = 0;
    Word HL = 0;
    Word SP = 0xFFFE;  // Stack Pointer
    Word PC = 0x0100;  // Program Counter

    Flags getFlags() const;
    void setFlags(const Flags& flags);
};
