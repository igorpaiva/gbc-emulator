#include "Registers.h"

Flags Registers::getFlags() const {
    return Flags{ static_cast<Byte>(AF & 0x00FF) };
}

void Registers::setFlags(const Flags& flags) {
    AF = (AF & 0xFF00) | flags.getRaw();
}
