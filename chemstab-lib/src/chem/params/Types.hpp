#ifndef CHEMICALS_TYPES_HPP_
#define CHEMICALS_TYPES_HPP_

#include <cstdint>

namespace chemicals::elements
{
typedef uint16_t ATOMIC_NUMBER_TYPE;
typedef uint16_t NUM_ELECTRON_TYPE;
typedef uint16_t NUM_PROTON_TYPE;
typedef double DENSITY_TYPE;
typedef double ATOMIC_WEIGHT_TYPE;
typedef double MELTING_POINT_TYPE;
typedef double BOILING_POINT_TYPE;
typedef double HEAT_CAPACITY_TYPE;
typedef double ELECTRONEGATIVITY_TYPE;
// cannot be just char because some elements use 2-3 characters for symbols
typedef char const* SYMBOL_TYPE;
typedef char const* NAME_TYPE;
// not a double. It's dealt with by multiplying everything by DESNITY_MULTIPLIER into this type
typedef unsigned long long int INTERNAL_DENSITY_TYPE;
typedef unsigned long long int INTERNAL_ATOMIC_WEIGHT_TYPE;
typedef unsigned long long int INTERNAL_MELTING_POINT_TYPE;
typedef unsigned long long int INTERNAL_BOILING_POINT_TYPE;
typedef unsigned long long int INTERNAL_HEAT_CAPACITY_TYPE;
typedef unsigned long long int INTERNAL_ELECTRONEGATIVITY_TYPE;

// number of decimal places the types that are doubles are accurate to
constexpr uint8_t DENSITY_ACCURACY = 9;
constexpr uint8_t ATOMIC_WEIGHT_ACCURACY = 9;
constexpr uint8_t MELTING_POINT_ACCURACY = 9;
constexpr uint8_t BOILING_POINT_ACCURACY = 9;
constexpr uint8_t HEAT_CAPACITY_ACCURACY = 9;
constexpr uint8_t ELECTRONEGATIVITY_ACCURACY = 9;

typedef unsigned long long int MULTIPLIER_TYPE;
// multipliers used when converting doubles (e.g. DENSITY_TYPE) to unsigned long long int (MULTIPLIER_TYPE) which is
// allowed as a template parameter. When creating constexpr types, the types are converted to MULTIPLIER_TYPE and when the
// appropriate getter is called, it converts it back to double (decimal).
constexpr MULTIPLIER_TYPE DENSITY_MULTIPLIER = 10e9;
constexpr MULTIPLIER_TYPE ATOMIC_WEIGHT_MULTIPLIER = 10e9;
constexpr MULTIPLIER_TYPE MELTING_POINT_MULTIPLIER = 10e9;
constexpr MULTIPLIER_TYPE BOILING_POINT_MULTIPLIER = 10e9;
constexpr MULTIPLIER_TYPE HEAT_CAPACITY_MULTIPLIER = 10e9;
constexpr MULTIPLIER_TYPE ELECTRONEGATIVITY_MULTIPLIER = 10e9;
}

#endif
