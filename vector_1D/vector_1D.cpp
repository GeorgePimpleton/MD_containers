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
   std::cout << "Using a regular for loop....\n";
   for ( size_t i { }; i < vec_1d.size( ); ++i )
   {
      std::cout << vec_1d[i] << ' ' ;
   }
   std::cout << "\n\n";

   // let's display the vector using iterators
   std::cout << "Using iterators in a for loop....\n";
   for ( auto itr { vec_1d.cbegin( ) }; itr != vec_1d.cend( ); ++itr )
   {
      std::cout << *itr << ' ';
   }
   std::cout << "\n\n";

   // let's use a range-based for loop
   // this is used in the template function
   std::cout << "Using a range-based for loop....\n";
   for ( auto const& itr : vec_1d )
   {
      std::cout << itr << ' ';
   }
   std::cout << "\n\n";

   // let's use the template
   std::cout << "Using a templated function....\n";
   std::cout << vec_1d << '\n';
}
