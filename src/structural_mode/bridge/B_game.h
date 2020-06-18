#pragma once

#include <iostream>

#include "game.h"

namespace bridge {
class BGame : public IGame {
private:
    /* data */
public:
    BGame(/* args */);
    ~BGame();

    void operation();
};

BGame::BGame(/* args */) {}

BGame::~BGame() {}

void BGame::operation() {
    std::cout << "B operation" << std::endl;
}

}  // namespace bridge