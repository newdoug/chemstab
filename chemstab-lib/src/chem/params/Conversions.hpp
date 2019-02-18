#ifndef CHEMICALS_TYPES_CONVERSIONS_HPP_
#define CHEMICALS_TYPES_CONVERSIONS_HPP_

#include "Types.hpp"

namespace chemicals::elements
{

template <typename T_RETURN_TYPE, MULTIPLIER_TYPE multiplier = 1>
constexpr T_RETURN_TYPE to_template_value(const DENSITY_TYPE value) {
    return static_cast<T_RETURN_TYPE>(value * multiplier);
}

constexpr INTERNAL_DENSITY_TYPE density_to_template_value(const DENSITY_TYPE density) {
    return to_template_value<INTERNAL_DENSITY_TYPE, DENSITY_MULTIPLIER>(density);
}
constexpr INTERNAL_ATOMIC_WEIGHT_TYPE atomic_weight_to_template_value(const ATOMIC_WEIGHT_TYPE weight) {
    return to_template_value<INTERNAL_ATOMIC_WEIGHT_TYPE, ATOMIC_WEIGHT_MULTIPLIER>(weight);
}
constexpr INTERNAL_MELTING_POINT_TYPE melting_point_to_template_value(const MELTING_POINT_TYPE point) {
    return to_template_value<INTERNAL_MELTING_POINT_TYPE, MELTING_POINT_MULTIPLIER>(point);
}
constexpr INTERNAL_BOILING_POINT_TYPE boiling_point_to_template_value(const BOILING_POINT_TYPE point) {
    return to_template_value<INTERNAL_BOILING_POINT_TYPE, BOILING_POINT_MULTIPLIER>(point);
}
constexpr INTERNAL_HEAT_CAPACITY_TYPE heat_capacity_to_template_value(const HEAT_CAPACITY_TYPE point) {
    return to_template_value<INTERNAL_HEAT_CAPACITY_TYPE, HEAT_CAPACITY_MULTIPLIER>(point);
}
constexpr INTERNAL_ELECTRONEGATIVITY_TYPE electronegativity_to_template_value(const ELECTRONEGATIVITY_TYPE point) {
    return to_template_value<INTERNAL_ELECTRONEGATIVITY_TYPE, ELECTRONEGATIVITY_MULTIPLIER>(point);
}

}

#endif
