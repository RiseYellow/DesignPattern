
#pragma once

#include <string>

namespace builder {

class House {
public:
    House() {}
    ~House() {}

    void SetFloor(std::string floor_name);
    void SetDoor(std::string door_name);
    void SetRoof(std::string roof_name);

    void PrintHouseInfo();

private:
    std::string foor_name_;
    std::string door_name_;
    std::string roof_name_;
};

}  // namespace builder