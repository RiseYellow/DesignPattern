#pragma once
#include <memory>

#include "command_interface.h"
namespace command {
class Button {
private:
    std::shared_ptr<ICommand> command_;

public:
    Button(/* args */);
    ~Button();

    void SetCommand(std::shared_ptr<ICommand> command) {
        command_ = command;
    }

    void PressButton() {
        command_->exectute();
    }
};

Button::Button(/* args */) {}

Button::~Button() {}

}  // namespace command