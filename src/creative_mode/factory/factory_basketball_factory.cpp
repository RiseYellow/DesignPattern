#include "factory_basketball_factory.h"

#include "basketball.h"
namespace factory {

BasketballFactory::BasketballFactory() {}

BasketballFactory::~BasketballFactory() {}

std::shared_ptr<Product> BasketballFactory::GetProduct() {
    return std::shared_ptr<Product>{std::make_shared<Basketball>()};
}

}  // namespace factory