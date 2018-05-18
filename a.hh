#ifndef A_HH
#define A_HH

#include <cstddef>

template<std::size_t dim>
class A {
  public:
    A() = default;
    auto what() const;
    auto why() const;
};

#endif // A_HH
