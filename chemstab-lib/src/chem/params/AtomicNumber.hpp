#ifndef CHEMICALS_TYPES_ATOMIC_NUMBERS_HPP_
#define CHEMICALS_TYPES_ATOMIC_NUMBERS_HPP_

#include "Types.hpp"

namespace chemicals::elements
{
/*! \brief namespace atomic_numbers
 * stores atomic number variables for each standard atomic element from
 * 1 (hydrogen) to
 */
namespace atomic_numbers
{
constexpr ATOMIC_NUMBER_TYPE HYDROGEN = 1;
constexpr ATOMIC_NUMBER_TYPE CARBON = 6;
} // namespace atomic_numbers
namespace ans = atomic_numbers;
}

#endif
