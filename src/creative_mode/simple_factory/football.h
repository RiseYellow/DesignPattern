#pragma once

#include "product.h"

namespace simple_factory {

class Football : public Product {
private:
    /* data */
public:
    Football(/* args */);
    ~Football();

    std::string GetName() override;
};

}  // namespace simple_factory
