#pragma once

#include <memory>
#include <cstdint>
#include "Registers.h"
#include "Memory.h"

class CPU {
    Registers regs;
    std::shared_ptr<Memory> memory;

public:
    explicit CPU(std::shared_ptr<Memory> mem);
    void reset();
    void executeNext();
};

