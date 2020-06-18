#pragma once

#include <iostream>

#include "phone.h"

namespace bridge {
class APhone : public IPhone {
private:
    /* data */
public:
    APhone(/* args */);
    ~APhone();

    void PlayGame() override;
};

APhone::APhone(/* args */) {}

APhone::~APhone() {}

void APhone::PlayGame() {
    std::cout << "APhone : ";
    game_->operation();
}
}  // namespace bridge