#pragma once
#include <iostream>
namespace adapter {
class APlug {
private:
    /* data */
public:
    APlug(/* args */);
    ~APlug();

    void PushInSocket();
};

APlug::APlug(/* args */) {}

APlug::~APlug() {}

void APlug::PushInSocket() {
    std::cout << "push APlug into socket" << std::endl;
}

}  // namespace adapter