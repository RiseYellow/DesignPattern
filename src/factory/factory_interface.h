#pragma once
#include "memory"
#include "product.h"
namespace factory {
class IFactory {
private:
    /* data */
public:
    IFactory(/* args */){};
    ~IFactory(){};

    virtual std::shared_ptr<Product> GetProduct() = 0;
};
}  // namespace factory