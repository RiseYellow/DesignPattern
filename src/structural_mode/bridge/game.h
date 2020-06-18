#pragma once

namespace bridge {
class IGame {
private:
    /* data */
public:
    IGame(/* args */);
    ~IGame();

    virtual void operation() = 0;
};

IGame::IGame(/* args */) {}

IGame::~IGame() {}

}  // namespace bridge