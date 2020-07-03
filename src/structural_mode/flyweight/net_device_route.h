#pragma once

#include "net_device_interface.h"
namespace flyweight {
class NetDeviceRoute : public INetDevice {
private:
    /* data */
public:
    NetDeviceRoute(/* args */);
    ~NetDeviceRoute();

    std::string GetDeviceName() override {
        return "route";
    }
};

NetDeviceRoute::NetDeviceRoute(/* args */) {}

NetDeviceRoute::~NetDeviceRoute() {}
}  // namespace flyweight