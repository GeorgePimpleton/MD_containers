#include <iostream>
#include <vector>

#include <fmt/ranges.h>

#include <print>
#include "format_ranges_workaround.hpp"

int main( )
{
   // let's create a 1D vector with known elements
   std::vector vec_1d { 1, 2, 3, 4, 5 };

   // the {fmt} library can print out 1D vectors
   fmt::print( "{}\n", vec_1d );

   // C++23 added that, but it isn't yet fully implemented
   std::print( "{}\n", vec_1d );
}
