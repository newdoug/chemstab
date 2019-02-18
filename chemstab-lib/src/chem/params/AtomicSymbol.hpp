#ifndef CHEMICALS_TYPES_ATOMIC_SYMBOLS_HPP_
#define CHEMICALS_TYPES_ATOMIC_SYMBOLS_HPP_

#include "Types.hpp"
#include "AtomicNumber.hpp"

#include <map>

namespace chemicals::elements
{
namespace atomic_symbols
{
constexpr SYMBOL_TYPE HYDROGEN = "H";
constexpr SYMBOL_TYPE CARBON = "C";
} // namespace atomic_symbols

// maps atomic_number to atomic symbol of element.
const std::map<ATOMIC_NUMBER_TYPE, std::string> SYMBOL_MAP
{
    {ans::HYDROGEN, atomic_symbols::HYDROGEN},
    {ans::CARBON, atomic_symbols::CARBON},

};

static inline std::string getSymbolFromAtomicNumber(const ATOMIC_NUMBER_TYPE& number) {
    return SYMBOL_MAP.at(number);
}
}

#endif
