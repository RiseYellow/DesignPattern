#pragma once
#include <memory>

#include "abstract_factory_interface.h"
#include "ball_interface.h"
#include "cloth_interface.h"
namespace abstract_factory {
class FootballAbstractFactory : public IAbstractFactory {
private:
    /* data */
public:
    FootballAbstractFactory(/* args */);
    ~FootballAbstractFactory();

    std::shared_ptr<IBall> GetBall() override;
    std::shared_ptr<ICloth> GetCloth() override;
};
}  // namespace abstract_factory