#include "EdgeNodePair.hpp"

namespace structures
{
namespace graph
{
EdgeNodePair::EdgeNodePair()
    :
    EdgeNodePair(nullptr, nullptr, nullptr)
{}
EdgeNodePair::EdgeNodePair(std::shared_ptr<Edge> edge, std::shared_ptr<Node> left_node, std::shared_ptr<Node> right_node)
    :
    left_node(left_node),
    edge(edge),
    right_node(right_node)
{}
} // namespace graph
} // namespace structures
