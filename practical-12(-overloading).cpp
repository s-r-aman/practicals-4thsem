#include <iostream>

class Demo
{
  int a, b;

public:
  Demo(int, int);
  Demo operator-(Demo);
};

Demo ::Demo(int x, int y)
{
  a = x;
  b = y;
  std::cout << "Demo object has been created with values: " << x << " & " << y << "." << std::endl;
}

Demo Demo::operator-(Demo temp)
{
  int x = temp.a - a;
  int y = temp.b - b;
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