#include <iomanip>
#include <iostream>

#include "factory/factory_basketball_factory.h"
#include "factory/factory_football_factory.h"
#include "simple_factory/simple_factory.h"

void print_func_begin(const std::string& func_name) {
    std::cout.setf(std::ios::right);
    std::cout << std::setw(30) << std::setfill('#') << " begin " << func_name
              << " "
              << "############################" << std::endl;
}
void print_func_end(const std::string& func_name) {

    std::cout.setf(std::ios::right);
    std::cout << std::setw(30) << std::setfill('#') << " end " << func_name
              << " "
              << "############################" << std::endl;
}

void test_simple_factory() {
    print_func_begin("simple factory");
    simple_factory::SimpleFactory simple_factory{};
    std::cout << simple_factory.GetProductByName("football")->GetName()
              << std::endl;

    std::cout << simple_factory.GetProductByName("basketball")->GetName()
              << std::endl;
    print_func_end("simple factory");
}

void test_factory() {
    print_func_begin("factory");
    std::shared_ptr<factory::IFactory> factory =
            std::make_shared<factory::FootballFactory>();
    std::cout << factory->GetProduct()->GetName() << std::endl;

    factory = std::make_shared<factory::BasketballFactory>();
    std::cout << factory->GetProduct()->GetName() << std::endl;
    print_func_end("factory");
}

int main(int argc, char const* argv[]) {
    test_simple_factory();
    test_factory();

    return 0;
}