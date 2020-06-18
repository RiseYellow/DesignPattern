#pragma once
#include <memory>

#include "game.h"
namespace bridge {
class IPhone {
protected:
    /* data */
    std::shared_ptr<IGame> game_;

public:
    IPhone(/* args */);
    ~IPhone();

    void SetGame(std::shared_ptr<IGame> game);

    virtual void PlayGame() = 0;
};

IPhone::IPhone(/* args */) {}

IPhone::~IPhone() {}
void IPhone::SetGame(std::shared_ptr<IGame> game) {
    game_ = game;
}

}  // namespace bridge