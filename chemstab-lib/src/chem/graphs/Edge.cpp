
#include "Edge.hpp"

namespace structures
{
namespace graph
{
Edge::Edge()
    :
    Edge("edge_" + std::to_string(edge_id_counter), nullptr, nullptr)
{
    edge_id_counter++;
}
Edge::Edge(const id_type& id, std::shared_ptr<Node> left_node, std::shared_ptr<Node> right_node)
    :
    id(id),
    left_node(left_node),
    right_node(right_node)
{}
Edge::Edge(const id_type& id)
    :
    Edge(id, nullptr, nullptr)
{}

void Edge::setNodes(std::shared_ptr<Node> left_n, std::shared_ptr<Node> right_n) {
    left_node = left_n;
    right_node = right_n;
}
void Edge::setLeftNode(std::shared_ptr<Node> left_n) {
    left_node = left_n;
}
void Edge::setRightNode(std::shared_ptr<Node> right_n) {
    right_node = right_n;
}

} // namespace graph
} // namespace structures
