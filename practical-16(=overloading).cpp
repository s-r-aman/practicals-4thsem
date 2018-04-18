#include <iostream>

class A
{
  int a;

public:
  A(int);
  void operator=(A &x)
  {
    x.a = a + 10;
    std::cout << "Object has been added: " << x.a << std::endl;
  }
};

A ::A(int i)
{
  a = i;
  std::cout << "Object has been created of class A: " << a << std::endl;
}

int main()
{
  A b(5), c(6);
  b = c;
}