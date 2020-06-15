#pragma once
#include <memory>

#include "factory_interface.h"
#include "product.h"
namespace factory {
class FootballFactory : public IFactory {
private:
    /* data */
public:
    FootballFactory(/* args */);
    ~FootballFactory();

    std::shared_ptr<Product> GetProduct() override;
};
}  // namespace factory