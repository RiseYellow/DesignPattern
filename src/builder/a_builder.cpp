#include "a_builder.h"
namespace builder {
ABuilder::ABuilder(/* args */) {}

ABuilder::~ABuilder() {}

void ABuilder::BuildDoor() {
    house_->SetDoor("A Door");
}
void ABuilder::BuildFloor() {
    house_->SetFloor("A Floor");
}
void ABuilder::BuildRoof() {
    house_->SetRoof("A Roof");
}

}  // namespace builder