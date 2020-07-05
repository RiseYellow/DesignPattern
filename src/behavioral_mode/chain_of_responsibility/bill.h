#pragma once
#include <string>
namespace chain_of_responsibility {
class Bill {
private:
    /* data */
    std::string name_;
    int sum_of_money_;

public:
    Bill(std::string name, int sum_of_money)
            : name_(name), sum_of_money_(sum_of_money) {}
    std::string GetBillName() {
        return name_;
    }
    int GetSumOfMoney() {
        return sum_of_money_;
    }
    ~Bill() {}
};
}  // namespace chain_of_responsibility
