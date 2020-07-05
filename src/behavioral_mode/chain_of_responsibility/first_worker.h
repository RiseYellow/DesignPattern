#pragma once
#include <iostream>

#include "worker.h"
namespace chain_of_responsibility {
class FirstWorker : public IWorker {

public:
    FirstWorker(/* args */);
    ~FirstWorker();

    void HandlerRequest(Bill& bill) override {
        if (bill.GetSumOfMoney() < 50) {
            std::cout << "first worker deal bill " << bill.GetBillName()
                      << " money " << bill.GetSumOfMoney() << std::endl;
            return;
        }
        std::cout << GetName() << " pass request to " << next_worker_->GetName()
                  << std::endl;
        next_worker_->HandlerRequest(bill);
    }
};

FirstWorker::FirstWorker(/* args */) {
    name_ = "first worker";
}

FirstWorker::~FirstWorker() {}
}  // namespace chain_of_responsibility