#include <iostream>
#include <vector>

template <typename T>
std::ostream& operator<<( std::ostream& os, const std::vector<T>& v )
{ for ( auto const& x : v ) { os << x << ' '; } return os; }

int main( )
{
   // let's create a 1D vector with known elements
   std::vector vec_1d { 1, 2, 3, 4, 5 };

   // let's print out the vector, the "old school" way
   for ( size_t i { }; i < vec_1d.size( ); ++i )
   {
      std::cout << vec_1d[i] << ' ' ;
   }
   std::cout << "\n\n";

   // let's display the vector using iterators
   for ( auto itr { vec_1d.cbegin( ) }; itr != vec_1d.cend( ); ++itr )
   {
      std::cout << *itr << ' ';
   }
   std::cout << "\n\n";

   // let's use the template
   std::cout << vec_1d << '\n';
}
