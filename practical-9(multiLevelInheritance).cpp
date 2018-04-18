#include <iostream>

class A
{
public:
  int a = 4;
};

class B : public A
{
};

class C : public B
{
};

int main()
{
  C a;
  std::cout << "The value of a is " << a.a << std::endl;
}