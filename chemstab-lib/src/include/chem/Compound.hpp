#ifndef CHEMICALS_COMPOUNDS_HPP_
#define CHEMICALS_COMPOUNDS_HPP_

#include "Chemical.hpp"

#include <vector>

namespace chemicals
{
  namespace compounds
  {

    class Compound
    {

      private:
        std::vector<chemicals::elements::_Element> elements { chemicals::elements::carbon };

    }; // class Compound
  } // namespace compounds
} // namespace chemicals

#endif
