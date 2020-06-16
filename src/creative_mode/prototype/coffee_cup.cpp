#include "coffee_cup.h"

namespace prototype {

CoffeeCup::CoffeeCup(/* args */) {}

CoffeeCup::~CoffeeCup() {}

std::shared_ptr<ICup> CoffeeCup::clone() {

    std::shared_ptr<ICup> cup = std::make_shared<CoffeeCup>();
    cup->SetCupColor("red");
    cup->SetCupName("a coffee cup");
    return cup;
}
}  // namespace prototype