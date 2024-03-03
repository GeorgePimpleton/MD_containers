#include <iostream>
#include <vector>
#include <numeric>  // for std::iota  https://en.cppreference.com/w/cpp/algorithm/iota

#include "vector_output.hpp"

int main( )
{
   std::vector vec_1d { 1, 2, 3, 4, 5 };
   std::cout << vec_1d << "\n\n";

   constexpr unsigned row_size { 3 };
   constexpr unsigned col_size { 4 };

   // create a 2 dimensional int vector with known dimensions (default zero-filled)
   std::vector<std::vector<int>> vec_2d( row_size, std::vector<int>( col_size ) );

   std::cout << vec_2d << '\n';

   // initialize the 2D vector with some values other than zero
   unsigned start  { 101 };
   unsigned offset { 100 };

   // step through each row and fill the row vector with some values
   for ( auto& itr : vec_2d )
   {
      std::iota( itr.begin( ), itr.end( ), start );
      start += offset;
   }

   // let's display the newly filled 2D vector
   std::cout << vec_2d << '\n';

   std::cout << "Adding a value to the end of the 2nd row.\n\n";
   vec_2d[1].push_back( 999 );

   // let's display the 2D vector again....
   std::cout << vec_2d << '\n';

   std::cout << "Removing an element from the 3rd row.\n\n";
   vec_2d[2].erase(vec_2d[2].begin() + 2);

   std::cout << vec_2d;
}
