#ifndef CHEM_NODE_HPP_
#define CHEM_NODE_HPP_

#include <string>

namespace structures
{
namespace graph
{
static uint32_t node_id_counter = 0;
struct Node
{
    typedef std::string id_type;
    const id_type id;

    Node();
    Node(const id_type& id);

    bool operator== (const Node& node) {
        return node.id == this->id;
    }

}; // struct Node
} // namespace graph
} // namespace structures

#endif
