#pragma once
#include "factory_interface.h"
#include "memory"
#include "product.h"
namespace factory {
class BasketballFactory : public IFactory {
private:
    /* data */
public:
    BasketballFactory(/* args */);
    ~BasketballFactory();

    std::shared_ptr<Product> GetProduct() override;
};
}  // namespace factory