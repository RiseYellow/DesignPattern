#pragma once

#include "ball_interface.h"

namespace abstract_factory {

class Basketball : public IBall {
private:
    /* data */
public:
    Basketball(/* args */);
    ~Basketball();

    std::string GetBallName() override;
};

}  // namespace abstract_factory
