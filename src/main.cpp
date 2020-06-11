#include <iomanip>
#include <iostream>

#include "abstract_factory/abstract_factory.h"
#include "factory/factory.h"
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
    std::cout << std::endl;
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

void test_abstract_factory() {
    print_func_begin("abstract factory");
    std::shared_ptr<abstract_factory::IAbstractFactory> abstract_factory =
            std::make_shared<abstract_factory::BasketballAbstractFactory>();
    std::cout << abstract_factory->GetBall()->GetBallName() << std::endl;
    std::cout << abstract_factory->GetCloth()->GetClothName() << std::endl;

    abstract_factory =
            std::make_shared<abstract_factory::FootballAbstractFactory>();
    std::cout << abstract_factory->GetBall()->GetBallName() << std::endl;
    std::cout << abstract_factory->GetCloth()->GetClothName() << std::endl;

    print_func_end("abstract factory");
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
    test_abstract_factory();

    return 0;
}
