#include <iostream>

int volume(int s)
{
  return s * s * s;
}

int volume(int r, int h)
{
  return 3.14 * r * r * h;
}

int volume(int h, int l, int b)
{
  return h * l * b;
}

int main()
{

  std::cout << volume(3) << " - Cube" << std::endl;
  std::cout << volume(3, 6) << " - Cylinder" << std::endl;
  std::cout << volume(3, 6, 9) << " - Cuboid" << std::endl;

  return 0;
}