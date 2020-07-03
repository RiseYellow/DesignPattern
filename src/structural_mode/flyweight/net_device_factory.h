#pragma once
#include <memory>
#include <unordered_map>

#include "net_device_route.h"
#include "net_device_switch.h"
namespace flyweight {
enum class NetDeviceType { kRoute, kSwitch };

class NetDeviceFactory {
private:
    /* data */
    NetDeviceFactory();
    ~NetDeviceFactory();
    std::unordered_map<NetDeviceType, std::shared_ptr<INetDevice> >
            type_2_netdevice_pool_;

public:
    static NetDeviceFactory& GetInstance() {
        static NetDeviceFactory factory;
        return factory;
    }

    std::shared_ptr<INetDevice> GetNetDeviceByType(NetDeviceType type) {
        return type_2_netdevice_pool_[type];
    }
};

NetDeviceFactory::NetDeviceFactory(/* args */) {
    type_2_netdevice_pool_ = {
            {NetDeviceType::kRoute, std::make_shared<NetDeviceRoute>()},
            {NetDeviceType::kSwitch, std::make_shared<NetDeviceSwitch>()},
            {NetDeviceType::kSwitch, std::make_shared<NetDeviceSwitch>()},
            {NetDeviceType::kSwitch, std::make_shared<NetDeviceSwitch>()}};
}

NetDeviceFactory::~NetDeviceFactory() {}
}  // namespace flyweight