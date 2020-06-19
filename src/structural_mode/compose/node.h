#pragma once
#include <memory>
#include <string>
namespace compose {

class INode {
protected:
    /* data */
    std::string name_;

public:
    INode(/* args */);
    ~INode();

    virtual void AddNode(std::shared_ptr<INode> node) = 0;
    virtual void PrintName() = 0;
};

INode::INode(/* args */) {}

INode::~INode() {}

}  // namespace compose