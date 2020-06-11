#include "abstract_factory_basketball_factory.h"

#include "basketball.h"
#include "basketball_cloth.h"
namespace abstract_factory {

BasketballAbstractFactory::BasketballAbstractFactory() {}

BasketballAbstractFactory::~BasketballAbstractFactory() {}

std::shared_ptr<IBall> BasketballAbstractFactory::GetBall() {
    return std::shared_ptr<IBall>{std::make_shared<Basketball>()};
}
std::shared_ptr<ICloth> BasketballAbstractFactory::GetCloth() {
    return std::shared_ptr<ICloth>{std::make_shared<BasketballCloth>()};
}
}  // namespace abstract_factory