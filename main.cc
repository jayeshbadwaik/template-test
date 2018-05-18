#include "a.hh"
#include <iostream>

int main()
{
  auto a = A<2>();
  std::cout<<a.why() << "gives " <<a.what()<<std::endl;
  return 0;
}
