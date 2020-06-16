#pragma once

#include "cloth_interface.h"

namespace abstract_factory {

class BasketballCloth : public ICloth {
private:
    /* data */
public:
    BasketballCloth(/* args */);
    ~BasketballCloth();

    std::string GetClothName() override;
};

}  // namespace abstract_factory
