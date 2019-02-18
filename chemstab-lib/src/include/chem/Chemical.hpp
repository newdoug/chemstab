/*! \file Chemical.hpp
 * \brief Header file contain the class used to create Periodic Elements from the periodic table and contains pre-defined instances of that class for all known elements.
 *
 * TODO: finalize what properties each element should have - keep in mind that for each of these to be constexpr, that value cannot be super volatile. E.g. abundance in earth might be surprisingly changing.
 * TODO: fill in the rest of the elements values.
 * TODO: finish documenting everything with doxygen - actually have to initialize doxygen stuff with a config file
 * TODO: add in references to where the static values of each property were obtained from. reference research papers, maybe websites
 */
#ifndef CHEMICALS_ELEMENTS_HPP_
#define CHEMICALS_ELEMENTS_HPP_

#include "params/Types.hpp"
#include "params/Name.hpp"
#include "params/Electronegativity.hpp"
#include "params/Density.hpp"
#include "params/AtomicNumber.hpp"
#include "params/AtomicSymbol.hpp"
#include "params/ProtonCount.hpp"
#include "params/ElectronCount.hpp"
#include "params/AtomicWeight.hpp"
#include "params/MeltingPoint.hpp"
#include "params/BoilingPoint.hpp"
#include "params/HeatCapacity.hpp"
#include "params/Conversions.hpp"

#include <string>
#include <map>

namespace chemicals
{
  namespace elements
  {

    constexpr uint16_t NUMBER_ATOMIC_ELEMENTS = 140; // TODO change to be correct

    /*! \brief constexpr safe class representation of a periodic element. There are appropriate constexpr getters for every value.
     * Named "_Element" to hint that this is mostly internal. It's constexpr in order to speed up creation of the standard chemical
     * elements.
     *
     * TODO valence electron stuff?
     * TODO number electrons
     * TODO atomic radius
     * \tparam T_an - atomic number of element.
     * \tparam T_prot - number of protons
     * \tparam T_elec - number of electrons
     * \tparam T_dens - density multiplied by an appropriate multiplier value and converted to type INTERNAL_DENSITY_TYPE
     * \tparam T_aw - atomic weight apprpriately onverted to INTERNAL_ATOMIC_WEIGHT_TYPE
     * \tparam T_mp - melting point appropriately converted to INTERNAL_MELTING_POINT_TYPE
     * \tparam T_bp - boiling point appropriately converted to INTERNAL_BOILING_POINT_TYPE
     * \tparam T_heat_cap - heat capacity appropriately converted to INTERNAL_HEAT_CAPACITY_TYPE
     * \tparam T_electro - electronegativity appropriately converted to INTERNAL_ELECTRONEGATIVITY_TYPE
     *
     * If a value is expected to be a decimal/double/float value, then using the getter will get you what is expected. The
     * raw value if gotten otherwise will be multplied by a multiplier value found in params/Conversions.hpp
     */
    // template<ATOMIC_NUMBER_TYPE T_an, NUM_PROTON_TYPE T_prot, NUM_ELECTRON_TYPE T_elec, INTERNAL_DENSITY_TYPE T_dens, INTERNAL_ATOMIC_WEIGHT_TYPE T_aw, INTERNAL_MELTING_POINT_TYPE T_mp, INTERNAL_BOILING_POINT_TYPE T_bp, INTERNAL_HEAT_CAPACITY_TYPE T_heat_cap, INTERNAL_ELECTRONEGATIVITY_TYPE T_electro>
      struct _Element
      {
        // enum {
          // atomic_number = T_an,
          // num_protons = T_prot,
          // num_electrons = T_elec,
          // density = T_dens,
          // atomic_weight = T_aw,
          // melting_point = T_mp,
          // boiling_point = T_bp,
          // heat_capacity = T_heat_cap,
          // electronegativity = T_electro,
        // };

          ATOMIC_NUMBER_TYPE atomic_number;// = T_an,
          NUM_PROTON_TYPE num_protons;// = T_prot,
          NUM_ELECTRON_TYPE num_electrons;// = T_elec,
          INTERNAL_DENSITY_TYPE density;// = T_dens,
          INTERNAL_ATOMIC_WEIGHT_TYPE atomic_weight;// = T_aw,
          INTERNAL_MELTING_POINT_TYPE melting_point;// = T_mp,
          INTERNAL_BOILING_POINT_TYPE boiling_point;// = T_bp,
          INTERNAL_HEAT_CAPACITY_TYPE heat_capacity;// = T_heat_cap,
          INTERNAL_ELECTRONEGATIVITY_TYPE electronegativity;// = T_electro,
        /*! \brief constexpr ctor */
        // constexpr _Element() noexcept {}
        constexpr _Element(ATOMIC_NUMBER_TYPE T_an, NUM_PROTON_TYPE T_prot, NUM_ELECTRON_TYPE T_elec, INTERNAL_DENSITY_TYPE T_dens, INTERNAL_ATOMIC_WEIGHT_TYPE T_aw, INTERNAL_MELTING_POINT_TYPE T_mp, INTERNAL_BOILING_POINT_TYPE T_bp, INTERNAL_HEAT_CAPACITY_TYPE T_heat_cap, INTERNAL_ELECTRONEGATIVITY_TYPE T_electro) noexcept
          :
          atomic_number(T_an),
          num_protons(T_prot),
          num_electrons(T_elec),
          density(T_dens),
          atomic_weight(T_aw),
          melting_point(T_mp),
          boiling_point(T_bp),
          heat_capacity(T_heat_cap),
          electronegativity(T_electro)
        {}
        // ~_Element() {} // causes it to give compiler error that Element is non-literal. Therefore, can't be constexpr

        // constexpr std::string getSymbol() const noexcept {
          // return getSymbolFromAtomicNumber(this->atomic_number);
        // }
        constexpr auto getAtomicNumber() const noexcept {
          return this->atomic_number;
        }
        constexpr auto getNumberProtons() const noexcept {
          return this->num_protons;
        }
        constexpr auto getNumberElectrons() const noexcept {
          return this->num_electrons;
        }
        // constexpr std::string getName() const noexcept {
          // return getNameFromAtomicNumber(this->atomic_number);
        // }
        constexpr DENSITY_TYPE getDensity() const noexcept {
          return static_cast<DENSITY_TYPE>(this->density) / static_cast<DENSITY_TYPE>(DENSITY_MULTIPLIER);
        }
        constexpr ATOMIC_WEIGHT_TYPE getAtomicWeight() const noexcept {
          return static_cast<ATOMIC_WEIGHT_TYPE>(this->atomic_weight) / static_cast<ATOMIC_WEIGHT_TYPE>(ATOMIC_WEIGHT_MULTIPLIER);
        }
        constexpr MELTING_POINT_TYPE getMeltingPoint() const noexcept {
          return static_cast<MELTING_POINT_TYPE>(this->melting_point) / static_cast<MELTING_POINT_TYPE>(MELTING_POINT_MULTIPLIER);
        }
        constexpr BOILING_POINT_TYPE getBoilingPoint() const noexcept {
          return static_cast<BOILING_POINT_TYPE>(this->boiling_point) / static_cast<BOILING_POINT_TYPE>(BOILING_POINT_MULTIPLIER);
        }
        constexpr HEAT_CAPACITY_TYPE getHeatCapacity() const noexcept {
          return static_cast<HEAT_CAPACITY_TYPE>(this->heat_capacity) / static_cast<HEAT_CAPACITY_TYPE>(HEAT_CAPACITY_MULTIPLIER);
        }
        constexpr ELECTRONEGATIVITY_TYPE getElectronegativity() const noexcept {
          return static_cast<ELECTRONEGATIVITY_TYPE>(this->electronegativity) / static_cast<ELECTRONEGATIVITY_TYPE>(ELECTRONEGATIVITY_MULTIPLIER);
        }

      }; // class Element


    constexpr _Element hydrogen(ans::HYDROGEN, proton_counts::HYDROGEN, electron_counts::HYDROGEN, density_to_template_value(densities::HYDROGEN), atomic_weight_to_template_value(atomic_weights::HYDROGEN), melting_point_to_template_value(melting_points::HYDROGEN), boiling_point_to_template_value(boiling_points::HYDROGEN), heat_capacity_to_template_value(heat_capacity::HYDROGEN), electronegativity_to_template_value(electronegativity::HYDROGEN)); // > hydrogen;
    constexpr _Element carbon(ans::CARBON, proton_counts::CARBON, electron_counts::CARBON, density_to_template_value(densities::CARBON), atomic_weight_to_template_value(atomic_weights::CARBON), melting_point_to_template_value(melting_points::CARBON), boiling_point_to_template_value(boiling_points::CARBON), heat_capacity_to_template_value(heat_capacity::HYDROGEN), electronegativity_to_template_value(electronegativity::HYDROGEN)); // > carbon;

    class Element
    {
      private:
        std::string name;
      public:
        Element(const std::string& name) : name(name) {}
    }; // class Element

  } // namespace elements
} // namespace chemicals

#endif
