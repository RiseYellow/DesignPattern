#pragma once

#include "cloth_interface.h"

namespace abstract_factory {

class FootballCloth : public ICloth {
private:
    /* data */
public:
    FootballCloth(/* args */);
    ~FootballCloth();

    std::string GetClothName() override;
};

}  // namespace abstract_factory
