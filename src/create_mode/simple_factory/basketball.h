#pragma once

#include "product.h"

namespace simple_factory {

class Basketball : public Product {
private:
    /* data */
public:
    Basketball(/* args */);
    ~Basketball();

    std::string GetName() override;
};

}  // namespace simple_factory
