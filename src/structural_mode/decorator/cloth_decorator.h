#pragma once
#include <iostream>

#include "women_decorator.h"

namespace decorator {
class ClothDecorator : public WomenDecorator {
private:
    /* data */
public:
    ClothDecorator(std::shared_ptr<Human> human);
    ~ClothDecorator();

    void Outlook() override;
    void AddCloth();
};

ClothDecorator::ClothDecorator(std::shared_ptr<Human> human)
        : WomenDecorator(human) {}

ClothDecorator::~ClothDecorator() {}

void ClothDecorator::Outlook() {
    WomenDecorator::Outlook();
    AddCloth();
}
void ClothDecorator::AddCloth() {
    std::cout << "add cloth" << std::endl;
}

}  // namespace decorator