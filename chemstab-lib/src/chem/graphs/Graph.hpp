#ifndef STRUCTURES_GRAPH_HPP_
#define STRUCTURES_GRAPH_HPP_

#include <string>
#include <set>
#include <memory>

#include "Node.hpp"
#include "Edge.hpp"
#include "WeightedEdge.hpp"
#include "EdgeNodePair.hpp"
#include "GraphAlgorithm.hpp"
#include "AlgorithmResult.hpp"

namespace structures {
namespace graph {

struct Graph
{
  std::set<std::shared_ptr<Node>> nodes;
  std::set<std::shared_ptr<Edge>> edges;

  Graph();
  Graph(const std::set<std::shared_ptr<Node>>& nodes, const std::set<std::shared_ptr<Edge>>& edges);

  void addEdge(std::shared_ptr<Edge> edge, std::shared_ptr<Node> left_node, std::shared_ptr<Node> right_node);
  void addEdge(std::shared_ptr<Edge> edge);

  void addBiEdge(std::shared_ptr<Edge> edge);
  void addBiEdge(std::shared_ptr<Edge> edge, std::shared_ptr<Node> left_node, std::shared_ptr<Node> right_node);

  void addEdge(std::shared_ptr<EdgeNodePair> pair);

  void addEdges(const std::initializer_list<std::shared_ptr<Edge>>& edges);

  /**
   * @brief allows for additions of the form addEdges( { {n1, e1, n2}, {n3, e2, n4}, ... } )
   */
  void addEdges(const std::initializer_list<std::shared_ptr<EdgeNodePair>>& pairs);
  void addEdges(const std::initializer_list<EdgeNodePair>& pairs);

  virtual ::graph::algorithm::AlgorithmResult runAlgorithm(const ::graph::algorithm::Algorithm& algo);

}; // class Graph
} // namespace graph
} // namespace structures

#endif
