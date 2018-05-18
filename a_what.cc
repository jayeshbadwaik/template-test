#include "a.hh"
template<std::size_t dim>
int A<dim>::what() const
{
  return dim;
}
