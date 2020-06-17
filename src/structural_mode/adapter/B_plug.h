#pragma once
#include <iostream>
namespace adapter {
class BPlug {
private:
    /* data */
public:
    BPlug(/* args */);
    ~BPlug();

    void PushInSocketQuick();
};

BPlug::BPlug(/* args */) {}

BPlug::~BPlug() {}
void BPlug::PushInSocketQuick() {
    std::cout << "push BPlug into socket quick" << std::endl;
}

}  // namespace adapter