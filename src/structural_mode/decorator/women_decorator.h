#pragma once

#include <memory>

#include "human.h"
namespace decorator {
class WomenDecorator : public Human {
private:
    /* data */
    std::shared_ptr<Human> human_;

public:
    WomenDecorator(std::shared_ptr<Human> human);
    ~WomenDecorator();

    void Outlook() override;
};

WomenDecorator::WomenDecorator(std::shared_ptr<Human> human) : human_(human) {}

WomenDecorator::~WomenDecorator() {}
void WomenDecorator::Outlook() {
    human_->Outlook();
}

}  // namespace decorator
