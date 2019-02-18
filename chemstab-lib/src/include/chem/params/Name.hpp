#ifndef CHEMICALS_TYPES_NAMES_HPP_
#define CHEMICALS_TYPES_NAMES_HPP_

#include "Types.hpp"
#include "AtomicNumber.hpp"

#include <map>

namespace chemicals::elements
{
  namespace names
  {
    constexpr NAME_TYPE HYDROGEN = "hydrogen";
    constexpr NAME_TYPE CARBON = "carbon";
  }; // namespace names

  // maps atomic_number to name of element.
  const std::map<ATOMIC_NUMBER_TYPE, std::string> NAME_MAP
  {
    {ans::HYDROGEN, names::HYDROGEN},
      {ans::CARBON, names::CARBON},

  };

  static inline std::string getNameFromAtomicNumber(const ATOMIC_NUMBER_TYPE& number) {
    return NAME_MAP.at(number);
  }
}

#endif
