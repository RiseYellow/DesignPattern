#pragma once
#include <iostream>

#include "human.h"
namespace proxy {
class Star : public IHuman {
private:
    /* data */
public:
    Star(/* args */);
    ~Star();

    void DoThings() override {
        std::cout << "sing" << std::endl;
    }
};

Star ::Star(/* args */) {}

Star ::~Star() {}

}  // namespace proxy