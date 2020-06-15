#include "b_builder.h"
namespace builder {
BBuilder::BBuilder(/* args */) {}

BBuilder::~BBuilder() {}

void BBuilder::BuildDoor() {
    house_->SetDoor("B Door");
}
void BBuilder::BuildFloor() {
    house_->SetFloor("B Floor");
}
void BBuilder::BuildRoof() {
    house_->SetRoof("B Roof");
}

}  // namespace builder