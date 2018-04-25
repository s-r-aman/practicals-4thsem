#include <iostream>

class A
{
public:
  virtual void member(void)
  {
    std::cout << "This is called from class A" << std::endl;
  }
};

class B : public A
{
public:
  void member(void)
  {
    std::cout << "This is called from class B" << std::endl;
  }
};

int main()
{
  A *a;
  B b;
  a = &b;
  a->member();
}
