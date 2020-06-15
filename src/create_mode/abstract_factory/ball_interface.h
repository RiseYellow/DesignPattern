#pragma once
#include <string>

namespace abstract_factory {

class IBall {
private:
    /* data */
public:
    IBall(/* args */){};
    virtual ~IBall(){};

    virtual std::string GetBallName() = 0;
};
}  // namespace abstract_factory
