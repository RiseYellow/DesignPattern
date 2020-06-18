#pragma once

#include <iostream>

#include "game.h"

namespace bridge {
class AGame : public IGame {
private:
    /* data */
public:
    AGame(/* args */);
    ~AGame();

    void operation();
};

AGame ::AGame(/* args */) {}

AGame ::~AGame() {}

void AGame::operation() {
    std::cout << "A operation" << std::endl;
}

}  // namespace bridge