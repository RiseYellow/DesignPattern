#pragma once
#include "board.h"
#include "cpu.h"
#include "screen.h"
namespace facade {
class Computer {
private:
    /* data */
    Cpu cpu_;
    Board board_;
    Screen screen_;

public:
    Computer(/* args */);
    ~Computer();

    void PowerOn() {
        board_.BootBoard();
        cpu_.SetupCpu();
        screen_.OpenScreen();
    }
};

Computer::Computer(/* args */) {}

Computer::~Computer() {}

}  // namespace facade