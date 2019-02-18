#ifndef CHEMICALS_TYPES_HEAT_CAPACITY_HPP_
#define CHEMICALS_TYPES_HEAT_CAPACITY_HPP_

#include "Types.hpp"

namespace chemicals::elements
{
  // represented in J/(g * K) - Joules per grams Kelvin
  namespace heat_capacity
  {
    constexpr HEAT_CAPACITY_TYPE HYDROGEN =  14.304;
    constexpr HEAT_CAPACITY_TYPE CARBON = 0.709;
  }; // namespace heat_capactiy
}

#endif
