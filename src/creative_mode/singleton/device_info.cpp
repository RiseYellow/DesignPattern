#include "device_info.h"
namespace singleton {
DeviceInfoSigleton::DeviceInfoSigleton(/* args */) {}

DeviceInfoSigleton::~DeviceInfoSigleton() {}
DeviceInfoSigleton& DeviceInfoSigleton::GetInstance() {
    static DeviceInfoSigleton singleton;
    return singleton;
}

void DeviceInfoSigleton::SetDeviceName(std::string name) {
    name_ = name;
}
std::string DeviceInfoSigleton::GetDeivceName() {
    return name_;
}
}  // namespace singleton