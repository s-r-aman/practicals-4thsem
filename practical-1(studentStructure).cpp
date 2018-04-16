#include <iostream>

// Declaring the class
class Student
{
  char name;
  double rollNo;
  int marks1, marks2, marks3, marks4, marks5;
  int percentage;
  char grade;

public:
  Student(char x, double y);
  void displayData(void);
  void addMarks(int m1, int m2, int m3, int m4, int m5);
  void showPercAndGrade(void);
};

// Defining the constructor method for the class
Student::Student(char x, double y)
{
  name = x;
  rollNo = y;
}

// Defining the methods for the class

void Student::displayData(void)
{
  std::cout << "The details of the student are :-" << std::endl;
  std::cout << "Name: " << name << std::endl;
  std::cout << "Roll Number " << rollNo << std::endl;
}

void Student::addMarks(int m1, int m2, int m3, int m4, int m5)
{
  marks1 = m1;
  marks2 = m2;
  marks3 = m3;
  marks4 = m4;
  marks5 = m5;
  percentage = (m1 + m2 + m3 + m4 + m5) / 5;
  switch (percentage / 10)
  {
  case 9:
    grade = 'A';
    break;
  case 8:
    grade = 'B';
    break;
  case 7:
    grade = 'C';
    break;
  case 6:
    grade = 'D';
    break;
  case 5:
    grade = 'E';
    break;
  case 4:
    grade = 'F';
    break;
  }
  if (percentage == 100)
  {
    grade = 'A';
  }
  if (percentage < 40)
  {
    grade = 'F';
  }
  std::cout
      << "The marks has been set and percentage and grade are calculated!"
      << std::endl;
}

void Student::showPercAndGrade(void)
{
  std::cout << "The total percentage is " << percentage << "%.";
  std::cout << "The grade is " << grade << ".";
}

int main()
{
  Student sr('A', 39);
  sr.displayData();
  sr.addMarks(50, 50, 50, 50, 50);
  sr.showPercAndGrade();
  return 0;
}
