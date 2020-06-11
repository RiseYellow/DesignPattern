#pragma once
#include <memory>

#include "product.h"
namespace simple_factory {
class SimpleFactory {
private:
    /* data */
public:
    SimpleFactory(/* args */);
    ~SimpleFactory();

    std::shared_ptr<Product> GetProductByName(const std::string& name);
};
}  // namespace simple_factory