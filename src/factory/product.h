#pragma once
#include <string>

namespace factory {

class Product {
private:
    /* data */
public:
    Product(/* args */){};
    virtual ~Product(){};

    virtual std::string GetName() = 0;
};
}  // namespace factory
