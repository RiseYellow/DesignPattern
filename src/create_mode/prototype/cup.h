#pragma once
#include <memory>
#include <string>

namespace prototype {
class ICup {
private:
    /* data */
    std::string name_;
    std::string color_;

public:
    ICup(/* args */);
    ~ICup();

    void SetCupName(std::string name);
    void SetCupColor(std::string color);
    void PrintCupInfo();

    virtual std::shared_ptr<ICup> clone() = 0;
};

}  // namespace prototype