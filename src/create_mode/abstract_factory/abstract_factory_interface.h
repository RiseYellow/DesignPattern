#pragma once
#include <memory>

#include "ball_interface.h"
#include "cloth_interface.h"
namespace abstract_factory {
class IAbstractFactory {
private:
    /* data */
public:
    IAbstractFactory(/* args */){};
    ~IAbstractFactory(){};

    virtual std::shared_ptr<IBall> GetBall() = 0;
    virtual std::shared_ptr<ICloth> GetCloth() = 0;
};
}  // namespace abstract_factory