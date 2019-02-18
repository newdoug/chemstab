


#include "GraphAlgorithm.hpp"
#include "Graph.hpp"
#include "AlgorithmResult.hpp"
// #include <memory>

using namespace structures::graph;

namespace
{

// void test(Graph, simple)
void test()
{
    Graph g;
    auto n1 = std::make_shared<Node>("node1"); // unique id
    auto n2 = std::make_shared<Node>("node2"); // unique id
    // edges by default should be unweighted
    auto e1 = std::make_shared<Edge>("edge1", n1, n2); // unique id
    // will throw an std::runtime_exception if n1 or n2 are nullptr
    /* ASSERT_NO_THROW */(g.addEdge(e1));

    auto e2 = std::make_shared<Edge>("edge2"); // unique id
    // this addEdge uses the nodes passed in and associates them.
    // Ignores the Edge's nodes whether it has them or not
    g.addEdge(e2, n1, n2);
    auto e3 = std::make_shared<Edge>("edge3"); // unique id
    // bidirectional edge. Only a method with (Edge, Node, Node)? or should there also be one with just (Edge)?
    g.addBiEdge(e3, n1, n2);
    // equivalent, but an additional edge is still added since more than one edge may exist
    g.addBiEdge(e3, n2, n1);

    // these 2 are equivalent:
    g.addBiEdge(e3, n1, n1);
    g.addEdge(e3, n1, n1);

    // also note that 2 nodes can have as many edges between them as they want.
    // all edges must have unique names. Exception is thrown otherwise.
    // If no name/identifier is given in the constructor, a static global incremented name is given to it.
    // Same name scheme with nodes.

    // (std::string identifier, double weight)
    // note that weight can be negative
    // all WeightedEdges inherit from Edge and must have a weight value in constructor
    auto we1 = std::make_shared<WeightedEdge>("edge4", 5);
    g.addEdge(we1, n1, n2);
    g.addBiEdge(we1, n1, n2);

    EdgeNodePair p = {e1, n2, n2};

    // g.addEdges(e1, e1, .......); // variadic
    g.addEdges( {e1, e1 } ); // brace initializer - maybe just std::vector would work
    // g.addEdges( {e2, n2, n1}, {we1, n1, n2} ); // variadic of std::tuple<Edge, Node, Node>
    g.addEdges( { {e2, n2, n1}, {we1, n1, n2} } ); // std::vector of std::tuple<Edge, Node, Node>

    // a type that holds the common Edge and 2 node combo
    auto pair1 = std::make_shared<EdgeNodePair>(e1, n1, n2);
    // can just be added to the graph plain.
    g.addEdge(pair1);
    // brace-initialized ability
    auto pair2 = std::make_shared<EdgeNodePair>(e1, n1, n2);
    // can just be added to the graph plain.
    g.addEdge(pair2);
    // g.add( {e2, n2, n1}, {we1, n1, n2}, ... ); // variadics of EdgeNodePair
    g.addEdges( { {e2, n2, n1}, {we1, n1, n2} } ); // std::vector of EdgeNodePair
    // same methods but called addWeightedEdges which take specifically WeightedEdges types

    // inherits from a GraphAlgorithm interface along with other algorithms
    // have a virtual abstract run() method
    // any required information specific to the algorithm is specified in the constructor
    graph::algorithm::DijkstraAlgorithm d1(n1, n2); // (start_node, end_node);
    // ResultType is an interface
    graph::algorithm::AlgorithmResult res = g.runAlgorithm(d1);
    // or (the recommended way):
    graph::algorithm::DijkstraAlgorithm d2(g, n1, n2); // (start_node, end_node);
    // DijkstraResult is an implementation of ResultType and has specific properties for results related to running the Dijkstra algorithm
    // will throw an exception if g is not defined.
    DijkstraResult d_result = d2.run();
    // every


}
} // anonymous namespace
