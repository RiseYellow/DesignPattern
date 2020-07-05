#pragma once

namespace proxy {
class IHuman {
private:
    /* data */
public:
    IHuman(/* args */);
    ~IHuman();

    virtual void DoThings() = 0;
};

IHuman::IHuman(/* args */) {}

IHuman::~IHuman() {}

}  // namespace proxy