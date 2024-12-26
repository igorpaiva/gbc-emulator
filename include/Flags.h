#pragma once
#include <cstdint>

using Byte = uint8_t;

enum class Flag {
    Zero = 7,  // Z
    Subtract = 6,  // N
    HalfCarry = 5,  // H
    Carry = 4  // C
};

class Flags {
    Byte value = 0;

public:
	Flags() = default;
	Flags(Byte val) : value(val) {}

    void set(Flag flag, bool state);
    bool get(Flag flag) const;
    Byte getRaw() const;
    void setRaw(Byte val);
};

