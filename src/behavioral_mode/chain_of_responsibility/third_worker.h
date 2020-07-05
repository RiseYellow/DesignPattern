#pragma once
#include <iostream>

#include "worker.h"
namespace chain_of_responsibility {
class ThirdWorker : public IWorker {

public:
    ThirdWorker(/* args */);
    ~ThirdWorker();

    void HandlerRequest(Bill& bill) override {
        std::cout << "third worker deal bill " << bill.GetBillName()
                  << " money " << bill.GetSumOfMoney() << std::endl;
        return;
    }
};

ThirdWorker::ThirdWorker(/* args */) {
    name_ = "third worker";
}

ThirdWorker::~ThirdWorker() {}
}  // namespace chain_of_responsibility