#ifndef CHEM_EDGE_NODE_PAIR_HPP_
#define CHEM_EDGE_NODE_PAIR_HPP_

#include <memory>
#include "Node.hpp"
#include "Edge.hpp"

namespace structures
{
namespace graph
{

struct EdgeNodePair
{
    std::shared_ptr<Node> left_node;
    std::shared_ptr<Edge> edge;
    std::shared_ptr<Node> right_node;

    EdgeNodePair();
    EdgeNodePair(std::shared_ptr<Edge> edge, std::shared_ptr<Node> left_node, std::shared_ptr<Node> right_node);
};
} // namespace graph
} // namespace structures

#endif
