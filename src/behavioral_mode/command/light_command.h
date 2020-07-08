#pragma once
#include <iostream>

#include "command_interface.h"
namespace command {
class LightCommand : public ICommand {
private:
    /* data */
public:
    LightCommand(/* args */);
    ~LightCommand();

    void exectute() override {
        std::cout << "light command execute" << std::endl;
    }
};

LightCommand::LightCommand(/* args */) {}

LightCommand::~LightCommand() {}
}  // namespace command
