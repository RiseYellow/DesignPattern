#include "abstract_factory_football_factory.h"

#include "football.h"
#include "football_cloth.h"
namespace abstract_factory {

FootballAbstractFactory::FootballAbstractFactory() {}

FootballAbstractFactory::~FootballAbstractFactory() {}

std::shared_ptr<IBall> FootballAbstractFactory::GetBall() {
    return std::shared_ptr<IBall>{std::make_shared<Football>()};
}
std::shared_ptr<ICloth> FootballAbstractFactory::GetCloth() {
    return std::shared_ptr<ICloth>{std::make_shared<FootballCloth>()};
}
}  // namespace abstract_factory