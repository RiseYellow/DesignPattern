#pragma once
#include <iostream>
#include <memory>

#include "A_socket.h"
#include "B_plug.h"
namespace adapter {
class B2AAdapter : public ASocket {
private:
    /* data */
    std::shared_ptr<BPlug> pbplug_;

public:
    B2AAdapter(/* args */);
    ~B2AAdapter();
    void charge() override;
};

B2AAdapter::B2AAdapter(/* args */) {
    pbplug_ = std::make_shared<BPlug>();
}

B2AAdapter::~B2AAdapter() {}
void B2AAdapter::charge() {
    pbplug_->PushInSocketQuick();
    std::cout << "take charge B" << std::endl;
}

}  // namespace adapter