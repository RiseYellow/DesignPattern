#include "abstract_builder.h"
namespace builder {
IAbstractBuilder::IAbstractBuilder(/* args */) {
    house_ = std::make_shared<House>();
}

IAbstractBuilder::~IAbstractBuilder() {}
std::shared_ptr<House> IAbstractBuilder::GetHouse() {
    return house_;
}

}  // namespace builder