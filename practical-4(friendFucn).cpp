#include <iostream>

class A;
class B;

class A
{
  int a;

public:
  A(int);
  friend void compareAB(A, B);
};

class B
{
  int b;

public:
  B(int);
  void friend compareAB(A, B);
};

B::B(int x)
{
  b = x;
  std::cout << "The value of integer has been set of class B : " << x << std::endl;
}

A::A(int x)
{
  a = x;
  std::cout << "The value of integer has been set of class A : " << x << std::endl;
}

void compareAB(A a, B b)
{
  if (a.a > b.b)
  {
    std::cout << "Class A has max Value" << std::endl;
  }
  else
  {
    std::cout << "Class B has max Value" << std::endl;
  }
}

int main()
{
  A a(5);
  B b(2);
  compareAB(a, b);
  return 0;
}