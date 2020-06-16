#include "house.h"

#include <iostream>
namespace builder {

void House::SetFloor(std::string floor_name) {
    foor_name_ = floor_name;
}
void House::SetDoor(std::string door_name) {
    door_name_ = door_name;
}

void House::SetRoof(std::string roof_name) {
    roof_name_ = roof_name;
}

void House::PrintHouseInfo() {
    std::cout << "foor name : " << foor_name_ << std::endl;
    std::cout << "door name : " << door_name_ << std::endl;
    std::cout << "roof name : " << roof_name_ << std::endl;
}

}  // namespace builder
