#include "football_cloth.h"
namespace abstract_factory {
FootballCloth::FootballCloth() {}

FootballCloth::~FootballCloth() {}

std::string FootballCloth::GetClothName() {
    return std::string{"FootballCloth"};
};

}  // namespace abstract_factory
