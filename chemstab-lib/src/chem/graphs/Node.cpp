
#include "Node.hpp"

namespace structures
{
namespace graph
{
Node::Node()
    :
    id("node_" + std::to_string(node_id_counter))
{
    node_id_counter++;
}
Node::Node(const id_type& id) : id(id) {}

} // namespace graph
} // namespace structures
