#pragma once
#include <string>

namespace simple_factory {

class Product {
private:
    /* data */
public:
    Product(/* args */){};
    virtual ~Product(){};

    virtual std::string GetName() = 0;
};
}  // namespace simple_factory
