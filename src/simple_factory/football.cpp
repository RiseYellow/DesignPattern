#include "football.h"
namespace simple_factory {
Football::Football() {}

Football::~Football() {}

std::string Football::GetName() {
    return std::string{"Football"};
};

}  // namespace simple_factory
