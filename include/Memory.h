#pragma once
#include <array>
#include <cstdint>

using Byte = uint8_t;
using Word = uint16_t;

class Memory {
public:
    virtual Byte read(Word address) const = 0;
    virtual void write(Word address, Byte value) = 0;
    virtual ~Memory() = default;
};

class RAM : public Memory {
    std::array<Byte, 0x10000> data{};  // 64KB

public:
    Byte read(Word address) const override;
    void write(Word address, Byte value) override;
};

