#include <iostream>

class Time
{
  float hour, minute;

public:
  void getTime(float, float);
  void displayTime(void);
  void sum(Time);
};

void Time::getTime(float x, float y)
{
  hour = x;
  minute = y;
}

void Time::displayTime(void)
{
  std::cout << "The time is " << hour << " hours & " << minute << " minutes." << std::endl;
}

void Time::sum(Time temp)
{
  hour = hour + temp.hour;
  minute = minute + temp.minute;
}

int main()
{
  Time t1, t2;
  t1.getTime(1, 30);
  t2.getTime(1, 00);
  t1.displayTime();
  t1.sum(t2);
  t1.displayTime();
}