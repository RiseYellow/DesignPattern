#pragma once
#include <iostream>
#include <memory>

#include "APlug.h"
namespace adapter {
class ASocket {
private:
    /* data */

    std::shared_ptr<APlug> paplug_;

public:
    ASocket(/* args */);
    ~ASocket();
    virtual void charge();
};

ASocket::ASocket(/* args */) {
    paplug_ = std::make_shared<APlug>();
}

ASocket::~ASocket() {}
void ASocket::charge() {
    paplug_->PushInSocket();
    std::cout << "take charge A" << std::endl;
}

}  // namespace adapter
