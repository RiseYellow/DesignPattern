#pragma once

#include <memory>

#include "abstract_builder.h"
#include "house.h"

namespace builder {

class Director {
public:
    Director(/* args */);
    ~Director();

    void SetBuilder(std::shared_ptr<IAbstractBuilder> builder);

    std::shared_ptr<House> BuildHouse();

private:
    /* data */
    std::shared_ptr<IAbstractBuilder> builder_;
};

}  // namespace builder