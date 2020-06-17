#pragma once
namespace decorator {
class Human {
private:
    /* data */
public:
    Human(/* args */);
    ~Human();

    virtual void Outlook() = 0;
};

Human::Human(/* args */) {}

Human::~Human() {}

}  // namespace decorator