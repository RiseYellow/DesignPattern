#pragma once
#include <memory>

#include "bill.h"
namespace chain_of_responsibility {
class IWorker {

protected:
    /* data */
    std::shared_ptr<IWorker> next_worker_;
    std::string name_;

public:
    IWorker(/* args */);
    ~IWorker();

    void SetNextWorker(std::shared_ptr<IWorker> worker) {
        next_worker_ = worker;
    }
    virtual void HandlerRequest(Bill& bill) = 0;

    std::string GetName() {
        return name_;
    }
};

IWorker::IWorker(/* args */) {}

IWorker::~IWorker() {}
}  // namespace chain_of_responsibility