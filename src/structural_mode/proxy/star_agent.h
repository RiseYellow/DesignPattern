#pragma once

#include "human.h"
#include "star.h"
namespace proxy {
class StarAgent : public IHuman {
private:
    /* data */

    Star star;

public:
    StarAgent(/* args */);
    ~StarAgent();

    void DoThings() override {
        star.DoThings();
    }
};

StarAgent::StarAgent(/* args */) {}

StarAgent::~StarAgent() {}

}  // namespace proxy