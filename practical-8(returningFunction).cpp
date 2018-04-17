#include <iostream>

class Complex
{
  int real, imaginary;

public:
  Complex(int, int);
  void display(void);
  friend Complex add(Complex, Complex);
};

Complex::Complex(int a, int b)
{
  real = a;
  imaginary = b;
}

void Complex::display(void)
{
  std::cout << "The real of object is " << real << " and imaginary part is " << imaginary << "." << std::endl;
}

Complex add(Complex A, Complex B)
{
  int a = A.real + B.real;
  int b = A.imaginary + B.imaginary;
  Complex c(a, b);
  return c;
}

int main()
{
  Complex c1(2, 3);
  Complex c2(5, 7);
  c1.display();
  c2.display();
  Complex c3 = add(c1, c2);
  c3.display();
}