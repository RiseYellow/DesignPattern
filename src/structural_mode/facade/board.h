#pragma once
#include <iostream>
namespace facade {
class Board {
private:
    /* data */
public:
    Board(/* args */);
    ~Board();

    void BootBoard() {
        std::cout << "boot board" << std::endl;
    }
};

Board::Board(/* args */) {}

Board::~Board() {}
}  // namespace facade
