#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "node.h"

namespace compose {
class TreeNode : public INode {
private:
    /* data */
    std::vector<std::shared_ptr<INode> > nodes_;

public:
    TreeNode(const std::string& name);
    ~TreeNode();

    void AddNode(std::shared_ptr<INode> node) override;
    void PrintName() override;
};

TreeNode::TreeNode(const std::string& name) {
    name_ = name;
}

TreeNode::~TreeNode() {}

void TreeNode::AddNode(std::shared_ptr<INode> node) {
    nodes_.push_back(node);
}
void TreeNode::PrintName() {
    std::cout << "tree node :" << name_ << std::endl;
    for (auto&& node : nodes_) {
        node->PrintName();
    }
}

}  // namespace compose