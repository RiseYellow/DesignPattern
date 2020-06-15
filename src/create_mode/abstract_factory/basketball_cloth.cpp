#include "basketball_cloth.h"
namespace abstract_factory {
BasketballCloth::BasketballCloth() {}

BasketballCloth::~BasketballCloth() {}

std::string BasketballCloth::GetClothName() {
    return std::string{"BasketballCloth"};
};

}  // namespace abstract_factory
