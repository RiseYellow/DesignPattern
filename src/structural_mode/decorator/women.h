#pragma once

#include <iostream>

#include "human.h"
namespace decorator {

class Women : public Human {
private:
    /* data */
public:
    Women(/* args */);
    ~Women();

    void Outlook() override;
};

Women::Women(/* args */) {}

Women::~Women() {}

void Women::Outlook() {
    std::cout << "Look like women" << std::endl;
}

}  // namespace decorator