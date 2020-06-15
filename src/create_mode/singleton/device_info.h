#pragma once
#include <string>
namespace singleton {
class DeviceInfoSigleton {
public:
    static DeviceInfoSigleton& GetInstance();

    void SetDeviceName(std::string name);
    std::string GetDeivceName();

private:
    std::string name_{"singleton device"};
    DeviceInfoSigleton(/* args */);
    ~DeviceInfoSigleton();
};

}  // namespace singleton