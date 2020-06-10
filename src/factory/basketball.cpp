#include "basketball.h"
namespace factory {
Basketball::Basketball() {}

Basketball::~Basketball() {}

std::string Basketball::GetName() {
    return std::string{"Basketball"};
};

}  // namespace factory
