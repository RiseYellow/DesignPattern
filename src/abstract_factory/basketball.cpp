#include "basketball.h"
namespace abstract_factory {
Basketball::Basketball() {}

Basketball::~Basketball() {}

std::string Basketball::GetBallName() {
    return std::string{"Basketball"};
};

}  // namespace abstract_factory
