#include "factory_football_factory.h"

#include "football.h"
namespace factory {

FootballFactory::FootballFactory() {}

FootballFactory::~FootballFactory() {}

std::shared_ptr<Product> FootballFactory::GetProduct() {
    return std::shared_ptr<Product>{std::make_shared<Football>()};
}

}  // namespace factory