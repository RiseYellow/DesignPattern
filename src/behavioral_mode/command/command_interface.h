#pragma once
namespace command {
class ICommand {
private:
    /* data */
public:
    ICommand(/* args */);
    ~ICommand();
    virtual void exectute() = 0;
};

ICommand::ICommand(/* args */) {}

ICommand::~ICommand() {}
}  // namespace command