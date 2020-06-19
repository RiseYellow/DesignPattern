#pragma once
#include "node.h"

namespace compose {
class LeafNode : public INode {
private:
    /* data */
public:
    LeafNode(/* args */);
    ~LeafNode();

    void AddNode(std::shared_ptr<INode> node) override {}
};

LeafNode::LeafNode(/* args */) {}

LeafNode::~LeafNode() {}

}  // namespace compose