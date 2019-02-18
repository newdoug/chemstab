
#include "chem/Chemical.hpp"
#include "chem/Compound.hpp"
#include <iostream>

using namespace chemicals::elements;
int main()
{
  // Chemical<12, 6, 6> chem(names::CARBON_STR);
  // Chemical<12, 6, 6> chem2("carbon");
  // chem2.name = std::string("changed");

    // constexpr Chemical<ans::HYDROGEN, 1, 1, static_cast<INTERNAL_DENSITY_TYPE>(densities::HYDROGEN*DENSITY_MULTIPLIER)> carbon();
  std::cout << "carbon's name: " << carbon.getName() << '\n';
  std::cout << "carbon's atomic number: " << carbon.getAtomicNumber() << '\n';
  std::cout << "carbon's density: " << carbon.getDensity() << '\n';
  chemicals::compounds::Compound c;
  std::cout << c.toString() << '\n';
}
