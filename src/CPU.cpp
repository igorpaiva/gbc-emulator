#include "CPU.h"
#include <iostream>

CPU::CPU(std::shared_ptr<Memory> mem) : memory(std::move(mem)) {}

void CPU::reset() {
    regs = {};
    regs.SP = 0xFFFE;
    regs.PC = 0x0100;
}

void CPU::executeNext() {
    Byte opcode = memory->read(regs.PC++);
    std::cout << "Executing opcode: " << std::hex << static_cast<int>(opcode) << std::endl;
	switch(opcode) {
        case 0x00:
			// NOP
			break;
		case 0x01:
			// LD BC, nn
			regs.BC = memory->read(regs.PC++);
			regs.BC |= static_cast<Word>(memory->read(regs.PC++)) << 8;
			break;
		case 0x06:
			// LD B, n
			regs.BC = memory->read(regs.PC++);
			break;
		default:
			std::cerr << "Unknown opcode: " << std::hex << static_cast<int>(opcode) << std::endl;
			break;
	}
}
