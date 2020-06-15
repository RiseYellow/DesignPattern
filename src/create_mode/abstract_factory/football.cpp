#include "football.h"
namespace abstract_factory {
Football::Football() {}

Football::~Football() {}

std::string Football::GetBallName() {
    return std::string{"Football"};
};

}  // namespace abstract_factory
