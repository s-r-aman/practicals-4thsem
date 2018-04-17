#include <iostream>

class Demo
{
  int a, b;

public:
  Demo(int, int);
  friend Demo operator-(Demo, Demo);
};

Demo ::Demo(int x, int y)
{
  a = x;
  b = y;
  std::cout << "Demo object has been created with values: " << x << " & " << y << "." << std::endl;
}

Demo operator-(Demo temp1, Demo temp2)
{
  int x = temp1.a - temp2.a;
  int y = temp1.b - temp2.b;
  Demo c(x, y);
  std::cout << "Subraction has been done." << std::endl;
  return c;
}

int main()
{
  Demo a(2, 3);
  Demo b(8, 7);
  Demo c = a - b;
}