#include <iostream>
#include <vector>

#include "vector_output.hpp"

int main( )
{
   constexpr unsigned depth    { 2 };   // or height, etc.
   constexpr unsigned row_size { 3 };
   constexpr unsigned col_size { 4 };

   using std::vector;   // m'ok, I cheat one time with a using statement

   // create a 3 dimensional int vector with known dimensions
   vector<vector<vector<int>>> vec_3d( depth, vector<vector<int>>( row_size, vector<int>( col_size ) ) );

   // let's display the initial 3D vector
   std::cout << vec_3d << '\n';

   // initialize the vector with some values
   for ( int depth_loop = 0; depth_loop < depth; depth_loop++ )
   {
      for ( int row_loop = 0; row_loop < row_size; row_loop++ )
      {
         for ( int col_loop = 0; col_loop < col_size; col_loop++ )
         {
            vec_3d[depth_loop][row_loop][col_loop] = ( ( ( depth_loop + 1 ) * 100 )
                                                        + ( ( row_loop + 1 ) * 10 )
                                                        + col_loop + 1 );
         }
      }
   }

   // let's display the filled 3D vector
   std::cout << vec_3d;
}
