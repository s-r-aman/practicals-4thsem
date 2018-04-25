#include <iostream>

class A
{
  int a;

public:
  operator<<(int b)
  {
    std::cout << b;
  }
}

int
main()
{
  A << 9;
}
