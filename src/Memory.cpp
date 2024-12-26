#include "Memory.h"

Byte RAM::read(Word address) const {
    return data[address];
}

void RAM::write(Word address, Byte value) {
    data[address] = value;
}
