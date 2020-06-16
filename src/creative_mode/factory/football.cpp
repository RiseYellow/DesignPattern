#include "football.h"
namespace factory {
Football::Football() {}

Football::~Football() {}

std::string Football::GetName() {
    return std::string{"Football"};
};

}  // namespace factory
