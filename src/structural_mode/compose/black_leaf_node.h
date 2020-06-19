#pragma once
#include <iostream>

#include "leaf_node.h"

namespace compose {
class BlackLeafNode : public LeafNode {
private:
public:
    BlackLeafNode(const std::string& name);
    ~BlackLeafNode();

    void PrintName();
};

BlackLeafNode::BlackLeafNode(const std::string& name) {
    name_ = name;
}

BlackLeafNode::~BlackLeafNode() {}
void BlackLeafNode::PrintName() {
    std::cout << "black leaf node :" << name_ << std::endl;
}
}  // namespace compose