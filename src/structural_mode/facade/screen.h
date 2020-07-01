#pragma once

#include <iostream>
namespace facade {

class Screen {
private:
    /* data */
public:
    Screen(/* args */);
    ~Screen();

    void OpenScreen() {
        std::cout << "open screen" << std::endl;
    }
};

Screen::Screen(/* args */) {}

Screen::~Screen() {}
}  // namespace facade
