#include <iostream>

class Rectangle
{
  int length, breadth, area;

public:
  Rectangle(void);
  Rectangle(int, int);
  void display(void);
};

Rectangle::Rectangle(void)
{
}

Rectangle::Rectangle(int l, int b)
{
  length = l;
  breadth = b;
  area = l * b;
  std::cout << "Succesfully created the object and calculated area."
            << std::endl;
}

void Rectangle::display(void)
{
  std::cout << "The Length of the Rectangle is " << length << std::endl;
  std::cout << "The Breadth of the Rectangle is " << breadth << std::endl;
  std::cout << "The Area of the Rectangle is " << area << std::endl;
}

int main()
{
  Rectangle r1();
  Rectangle r2(2, 3);
  r2.display();
}