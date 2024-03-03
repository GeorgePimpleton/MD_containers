#ifndef VECTOR_OUTPUT_HPP
#define VECTOR_OUTPUT_HPP

template <typename T>
std::ostream& operator<<( std::ostream& os, const std::vector<T>& v )
{ for ( auto const& x : v ) { os << x << ' '; } return os; }

template <typename T>
std::ostream& operator<<( std::ostream& os, const std::vector<std::vector<T>>& v )
{ for ( auto const& x : v ) { os << x << '\n'; } return os; }

#endif // !VECTOR_OUTPUT_HPP
