#pragma once
#include <iostream>

#include "phone.h"

namespace bridge {
class BPhone : public IPhone {
private:
    /* data */
public:
    BPhone(/* args */);
    ~BPhone();

    void PlayGame() override;
};

BPhone::BPhone(/* args */) {}

BPhone::~BPhone() {}

void BPhone::PlayGame() {
    std::cout << "BPhone : ";
    game_->operation();
}

}  // namespace bridge