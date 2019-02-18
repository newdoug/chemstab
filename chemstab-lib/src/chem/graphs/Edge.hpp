#ifndef CHEM_EDGE_HPP_
#define CHEM_EDGE_HPP_

#include <string>
#include <memory>
#include "Node.hpp"

namespace structures
{
  namespace graph
  {
    static uint32_t edge_id_counter = 0;
    struct Edge
    {
      typedef std::string id_type;
      const id_type id;
      std::shared_ptr<Node> left_node = nullptr;
      std::shared_ptr<Node> right_node = nullptr;

      Edge();
      Edge(const id_type& id, std::shared_ptr<Node> left_node, std::shared_ptr<Node> right_node);
      Edge(const id_type& id);

      void setNodes(std::shared_ptr<Node> left_n, std::shared_ptr<Node> right_n);
      void setLeftNode(std::shared_ptr<Node> left_n);
      void setRightNode(std::shared_ptr<Node> right_n);

      bool operator== (const Edge& edge) {
        return edge.id == this->id && edge.left_node == this->left_node && edge.right_node == this->right_node;
      }
    }; // struct Edge
  } // namespace graph
} // namespace structures

#endif
