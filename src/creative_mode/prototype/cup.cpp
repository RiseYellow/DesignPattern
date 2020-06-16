#include "cup.h"

#include <iostream>
namespace prototype {
ICup::ICup(/* args */) {}

ICup::~ICup() {}
void ICup::SetCupName(std::string name) {
    name_ = name;
}

void ICup::SetCupColor(std::string color) {
    color_ = color;
}
void ICup::PrintCupInfo() {
    std::cout << "cup name : " << name_ << std::endl;
    std::cout << "cup color : " << color_ << std::endl;
}

}  // namespace prototype