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
  A c;
  std::cout << "The value of a is " << c.a << std::endl;
}