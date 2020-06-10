#pragma once

#include "product.h"

namespace factory {

class Basketball : public Product {
private:
    /* data */
public:
    Basketball(/* args */);
    ~Basketball();

    std::string GetName() override;
};

}  // namespace factory
