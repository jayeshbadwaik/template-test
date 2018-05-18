#ifndef A_HH
#define A_HH

#include <cstddef>
#include <string>

template<std::size_t dim>
class A {
  public:
    A() = default;
    int what() const;
    std::string why() const;
};

#endif // A_HH
