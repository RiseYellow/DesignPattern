#include "basketball.h"
namespace simple_factory {
Basketball::Basketball() {}

Basketball::~Basketball() {}

std::string Basketball::GetName() {
    return std::string{"Basketball"};
};

}  // namespace simple_factory
