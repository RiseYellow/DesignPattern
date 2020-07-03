#pragma once

#include "net_device_interface.h"
namespace flyweight {
class NetDeviceSwitch : public INetDevice {
private:
    /* data */
public:
    NetDeviceSwitch(/* args */);
    ~NetDeviceSwitch();
    std::string GetDeviceName() override {
        return "switch";
    }
};

NetDeviceSwitch::NetDeviceSwitch(/* args */) {}

NetDeviceSwitch::~NetDeviceSwitch() {}
}  // namespace flyweight
