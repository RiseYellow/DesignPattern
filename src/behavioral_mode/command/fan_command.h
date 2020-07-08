#pragma once
#include <iostream>

#include "command_interface.h"
namespace command {
class FanCommand : public ICommand {
private:
    /* data */
public:
    FanCommand(/* args */);
    ~FanCommand();

    void exectute() override {
        std::cout << "fan command execute" << std::endl;
    }
};

FanCommand::FanCommand(/* args */) {}

FanCommand::~FanCommand() {}
}  // namespace command
