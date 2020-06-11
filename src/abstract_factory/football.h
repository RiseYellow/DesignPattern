#pragma once

#include "ball_interface.h"

namespace abstract_factory {

class Football : public IBall {
private:
    /* data */
public:
    Football(/* args */);
    ~Football();

    std::string GetBallName() override;
};

}  // namespace abstract_factory
