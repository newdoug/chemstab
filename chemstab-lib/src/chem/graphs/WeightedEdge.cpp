
#include "WeightedEdge.hpp"

namespace structures
{
namespace graph
{
WeightedEdge::WeightedEdge(const id_type& id, std::shared_ptr<Node> left_node, std::shared_ptr<Node> right_node, const int weight)
    :
    Edge(id, left_node, right_node),
    weight(weight)
{}
WeightedEdge::WeightedEdge(const id_type& id, const int weight)
    :
    WeightedEdge(id, nullptr, nullptr, weight)
{}
} // namespace graph
} // namespace structures
