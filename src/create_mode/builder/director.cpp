#include "director.h"
namespace builder {
Director::Director(/* args */) {}

Director::~Director() {}

void Director::SetBuilder(std::shared_ptr<IAbstractBuilder> builder) {
    builder_ = builder;
}

std::shared_ptr<House> Director::BuildHouse() {
    builder_->BuildDoor();
    builder_->BuildFloor();
    builder_->BuildRoof();
    return builder_->GetHouse();
}

}  // namespace builder