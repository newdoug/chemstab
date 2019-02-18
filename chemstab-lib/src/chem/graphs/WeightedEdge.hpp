#ifndef CHEM_WEIGHTED_EDGE_HPP_
#define CHEM_WEIGHTED_EDGE_HPP_

#include <string>
#include <memory>

#include "Edge.hpp"

namespace structures
{
  namespace graph
  {
    struct WeightedEdge : public Edge
    {
      typedef std::string id_type;
      const id_type id;
      int weight;
      WeightedEdge(const id_type& id, std::shared_ptr<Node> left_node, std::shared_ptr<Node> right_node, const int weight);
      WeightedEdge(const id_type& id, const int weight);
    }; // class WeightedEdge
  } // namespace graph
} // namespace structures

#endif
