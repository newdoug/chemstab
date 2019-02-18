#ifndef CHEM_GRAPH_ALGORITHM_HPP_
#define CHEM_GRAPH_ALGORITHM_HPP_

#include "AlgorithmResult.hpp"
#include "Graph.hpp"
#include "Node.hpp"
#include "Graph.hpp"

#include <memory>
#include <type_traits>

namespace graph {
namespace algorithm {

class Algorithm
{

public:
    virtual AlgorithmResult run(const structures::graph::Graph& graph) = 0;
}; // class algorithm

class DijkstraAlgorithm : public Algorithm
{
private:
    std::shared_ptr<structures::graph::Node> begin_node;
    std::shared_ptr<structures::graph::Node> end_node;
public:
    DijkstraAlgorithm(std::shared_ptr<structures::graph::Node> begin_node, std::shared_ptr<structures::graph::Node> end_node)
        :
        begin_node(begin_node),
        end_node(end_node)
    {}
    AlgorithmResult run(const structures::graph::Graph& graph) override {
        return {};
    }
}; // class DijkstraAlgorithm
} // namespace algorithm
} // namespace graph


#endif // CHEM_GRAPH_ALGORITHM_HPP_
