
#include "Graph.hpp"

#include <stdexcept>

namespace structures {
namespace graph {

Graph::Graph() {}
Graph::Graph(const std::set<std::shared_ptr<Node>>& nodes, const std::set<std::shared_ptr<Edge>>& edges)
  :
  nodes(nodes),
  edges(edges)
{}

void Graph::addEdge(std::shared_ptr<Edge> edge, std::shared_ptr<Node> left_node, std::shared_ptr<Node> right_node) {
  if (left_node == nullptr || right_node == nullptr) {
    throw std::invalid_argument("Nodes were not properly set (nullptr) before adding to graph");
  }
  edge->setLeftNode(left_node);;
  edge->setRightNode(right_node);
  if (!std::get<1>(edges.insert(edge))) {
    throw std::invalid_argument("Edge ('" + edge->id + "') failed to be inserted into graph. Ensure its ID and nodes were unique.");
  }
}


void Graph::addEdge(std::shared_ptr<Edge> edge) {
  this->addEdge(edge, edge->left_node, edge->right_node);
}

void Graph::addBiEdge(std::shared_ptr<Edge> edge) {
  this->addEdge(edge, edge->left_node, edge->right_node);
  this->addEdge(edge, edge->right_node, edge->left_node);
}
void Graph::addBiEdge(std::shared_ptr<Edge> edge, std::shared_ptr<Node> left_node, std::shared_ptr<Node> right_node) {
  edge->setLeftNode(left_node);
  edge->setRightNode(right_node);
  this->addBiEdge(edge);
}

void Graph::addEdge(std::shared_ptr<EdgeNodePair> pair) {
  this->addEdge(pair->edge);
}

void Graph::addEdges(const std::initializer_list<std::shared_ptr<Edge>>& edges) {
  for (const auto& edge : edges) {
    this->addEdge(edge);
  }
}

/**
 * @brief allows for additions of the form addEdges( { {n1, e1, n2}, {n3, e2, n4}, ... } )
 */
void Graph::addEdges(const std::initializer_list<std::shared_ptr<EdgeNodePair>>& pairs) {
  for (const auto& pair : pairs) {
    this->addEdge(pair);
  }
}

void Graph::addEdges(const std::initializer_list<EdgeNodePair>& pairs) {
  for (const auto& pair : pairs) {
    this->addEdge(std::make_shared<EdgeNodePair>(pair));
  }
}

  virtual ::graph::algorithm::AlgorithmResult Graph::runAlgorithm(const ::graph::algorithm::Algorithm& algo) {
    return algo.run(g);
  }

} // namespace graph
} // namespace structures
