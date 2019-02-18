#include "chem/Compound.hpp"
namespace chemicals
{
namespace compounds
{
Compound::Compound() {}
const std::string& Compound::toString() const {
    if (this->elements.size() == 0) {
        return std::move(std::string(""));
    }
    std::string return_val;
    size_t counter = 1;
    const size_t num_elements = this->elements.size();
    for (size_t i = 1; i < num_elements; ++i) {
        if (this->elements.at(i-1).getSymbol() == this->elements.at(i).getSymbol()) {
            counter++;
        } else {
            return_val += elements.at(i-1).getSymbol();
            if (counter > 1 || print_ones) {
                return_val += std::to_string(counter);
            }
            counter = 1;
        }
    }

    return_val += elements.at(num_elements-1).getSymbol();
    if (counter > 1 || print_ones) {
        return_val += std::to_string(counter);
    }

    return std::move(return_val);
}
} // namespace compounds
} // namespace chemicals
