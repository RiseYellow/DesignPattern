#include <iomanip>
#include <iostream>

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

int main(int argc, char const* argv[]) {

    simple_factory::SimpleFactory factory{};
    print_func_begin("simple factory");
    std::cout << factory.GetProductByName("football")->GetName() << std::endl;

    std::cout << factory.GetProductByName("basketball")->GetName() << std::endl;
    print_func_end("simple factory");
    return 0;
}
