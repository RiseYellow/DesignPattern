#pragma once
#include <iostream>

#include "leaf_node.h"

namespace compose {
class RedLeafNode : public LeafNode {
public:
    RedLeafNode(const std::string& name);
    ~RedLeafNode();

    void PrintName();
};

RedLeafNode::RedLeafNode(const std::string& name) {
    name_ = name;
}

RedLeafNode::~RedLeafNode() {}
void RedLeafNode::PrintName() {
    std::cout << "red leaf node :" << name_ << std::endl;
}
}  // namespace compose