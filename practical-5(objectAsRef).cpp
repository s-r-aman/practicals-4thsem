#include <iostream>
class A;
class B;

class A
{
  int a;

public:
  A(int);
  void display(void);
  friend void swapData(A &, B &);
};

class B
{
  int b;

public:
  B(int);
  void display(void);
  friend void swapData(A &, B &);
};

A::A(int x)
{
  a = x;
  std::cout << "The value of class A has been set : " << x << std::endl;
}

B::B(int x)
{
  b = x;
  std::cout << "The value of class B has been set : " << x << std::endl;
}

void A::display(void)
{
  std::cout << "The value of member of class A is " << a << std::endl;
}

void B::display(void)
{
  std::cout << "The value of member of class B is " << b << std::endl;
}

void swapData(A &a, B &b)
{
  int c = a.a;
  a.a = b.b;
  b.b = c;
  std::cout << "The swapping has been done." << std::endl;
}

int main()
{
  A a(10);
  B b(20);
  swapData(a, b);
  a.display();
  b.display();
  return 0;
}