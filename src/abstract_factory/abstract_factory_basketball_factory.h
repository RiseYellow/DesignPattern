#pragma once
#include <memory>

#include "abstract_factory_interface.h"
#include "ball_interface.h"
#include "cloth_interface.h"
namespace abstract_factory {
class BasketballAbstractFactory : public IAbstractFactory {
private:
    /* data */
public:
    BasketballAbstractFactory(/* args */);
    ~BasketballAbstractFactory();

    std::shared_ptr<IBall> GetBall() override;
    std::shared_ptr<ICloth> GetCloth() override;
};
}  // namespace abstract_factory