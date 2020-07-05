#pragma once
#include <iostream>

#include "worker.h"
namespace chain_of_responsibility {
class SecWorker : public IWorker {

public:
    SecWorker(/* args */);
    ~SecWorker();

    void HandlerRequest(Bill& bill) override {
        if (bill.GetSumOfMoney() < 100) {
            std::cout << "sec worker deal bill " << bill.GetBillName()
                      << " money " << bill.GetSumOfMoney() << std::endl;
            return;
        }
        std::cout << GetName() << " pass request to " << next_worker_->GetName()
                  << std::endl;
        next_worker_->HandlerRequest(bill);
    }
};

SecWorker::SecWorker(/* args */) {
    name_ = "sec worker";
}

SecWorker::~SecWorker() {}
}  // namespace chain_of_responsibility