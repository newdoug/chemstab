#ifndef CHEMICALS_COMPOUNDS_HPP_
#define CHEMICALS_COMPOUNDS_HPP_

#include "Chemical.hpp"

#include <vector>
#include <string>

namespace chemicals
{
namespace compounds
{

class Compound
{
private:
    // TODO: this should be a custom graph structure that actually represents the compound correctly
    // with different bond types representing an edge type
    // try to make graph structure constexpr-safe somehow???
    std::vector<chemicals::elements::Element> elements;

    /*! \brief whether or not to print 1's in the toString() method for chemical symbols.
     *
     * E.g. with print_ones off, C2HC5K might be an output while with print_ones on, the output might be
     * C2H1C5K1. <br>
     * For now, not configurable at runtime
     */
    static constexpr bool print_ones = true;
public:
    Compound();
    Compound(const std::vector<chemicals::elements::Element>& elements);
    Compound(const std::string& symbols);

    const std::string& toString() const;

}; // class Compound
} // namespace compounds
} // namespace chemicals

#endif
