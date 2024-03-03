#include <iostream>
#include <vector>
#include <string>

template <typename T>
std::ostream& operator<<( std::ostream& os, const std::vector<T>& v )
{ for ( auto const& x : v ) { os << x << ' '; } return os; }

int main( )
{
   std::vector vec_1d_string { "Hello", "and", "good-bye", "world!" };

   std::cout << vec_1d_string << '\n';
}
