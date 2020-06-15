#pragma once
#include <memory>

#include "house.h"
namespace builder {
class IAbstractBuilder {
private:
    /* data */
public:
    IAbstractBuilder(/* args */);
    ~IAbstractBuilder();

    virtual void BuildFloor() = 0;

    virtual void BuildDoor() = 0;
    virtual void BuildRoof() = 0;

    std::shared_ptr<House> GetHouse();

protected:
    std::shared_ptr<House> house_;
};

}  // namespace builder