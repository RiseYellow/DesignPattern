#pragma once

#include <iostream>

namespace facade {
class Cpu {
private:
    /* data */
public:
    Cpu(/* args */);
    ~Cpu();

    void SetupCpu() {
        std::cout << "setup cpu" << std::endl;
    }
};

Cpu::Cpu(/* args */) {}

Cpu::~Cpu() {}

}  // namespace facade