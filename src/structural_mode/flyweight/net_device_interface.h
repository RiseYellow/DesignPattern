#pragma once

#include <string>
namespace flyweight {
class INetDevice {
private:
    /* data */
public:
    INetDevice(/* args */);
    ~INetDevice();
    virtual std::string GetDeviceName() = 0;
};

INetDevice::INetDevice(/* args */) {}

INetDevice::~INetDevice() {}

}  // namespace flyweight