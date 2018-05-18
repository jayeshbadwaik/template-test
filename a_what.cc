#include "a.hh"
template<std::size_t dim>
auto A<dim>::what() const
{
  return dim;
}
