#pragma once
#include <iostream>

#include "women_decorator.h"

namespace decorator {
class ShoesDecorator : public WomenDecorator {
private:
    /* data */
public:
    ShoesDecorator(std::shared_ptr<Human> human);
    ~ShoesDecorator();

    void Outlook() override;
    void AddShoes();
};

ShoesDecorator::ShoesDecorator(std::shared_ptr<Human> human)
        : WomenDecorator(human) {}

ShoesDecorator::~ShoesDecorator() {}

void ShoesDecorator::Outlook() {
    WomenDecorator::Outlook();
    AddShoes();
}
void ShoesDecorator::AddShoes() {
    std::cout << "add shoes" << std::endl;
}

}  // namespace decorator