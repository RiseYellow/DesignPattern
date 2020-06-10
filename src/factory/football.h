#pragma once

#include "product.h"

namespace factory {

class Football : public Product {
private:
    /* data */
public:
    Football(/* args */);
    ~Football();

    std::string GetName() override;
};

}  // namespace factory
