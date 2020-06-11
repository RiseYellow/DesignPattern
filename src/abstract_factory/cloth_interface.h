#pragma once
#include <string>

namespace abstract_factory {

class ICloth {
private:
    /* data */
public:
    ICloth(/* args */){};
    virtual ~ICloth(){};

    virtual std::string GetClothName() = 0;
};
}  // namespace abstract_factory
