#include "simple_factory.h"

#include "basketball.h"
#include "football.h"
namespace simple_factory {

SimpleFactory::SimpleFactory() {}

SimpleFactory::~SimpleFactory() {}

std::shared_ptr<Product> SimpleFactory::GetProductByName(
        const std::string& name) {
    if (name == "football") {
        /* code */
        return std::shared_ptr<Product>{std::make_shared<Football>()};
    }
    if (name == "basketball") {
        /* code */
        return std::shared_ptr<Product>{std::make_shared<Basketball>()};
    }
    return nullptr;
}

}  // namespace simple_factory