#include "Flags.h"

void Flags::set(Flag flag, bool state) {
    if (state)
        value |= (1 << static_cast<int>(flag));
    else
        value &= ~(1 << static_cast<int>(flag));
}

bool Flags::get(Flag flag) const {
    return value & (1 << static_cast<int>(flag));
}

Byte Flags::getRaw() const { return value; }

void Flags::setRaw(Byte val) { value = val; }
