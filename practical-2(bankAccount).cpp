#include <iostream>

// Declaring the class
class BankAccount
{
  char depositor;
  double accNo;
  double balance;

public:
  BankAccount(char x, double y, double z);
  void depositAmount(double bal);
  void withDraw(double bal);
  void showNameAndBal(void);
};

// Defining the constructor method for the class
BankAccount::BankAccount(char x, double y, double z = 0)
{
  depositor = x;
  accNo = y;
  balance = z;
}

// Defining the methods for the class
void BankAccount::depositAmount(double bal)
{
  std::cout << "Your previous balance was" << balance << std::endl;
  std::cout << "You deposited  " << bal << std::endl;
  balance = balance + bal;
  std::cout << "Your current balance " << balance << std::endl;
}

void BankAccount::withDraw(double bal)
{
  std::cout << "Your previous balance was" << balance << std::endl;
  std::cout << "You deposited  " << bal << std::endl;
  balance = balance - bal;
  std::cout << "Your current balance " << balance << std::endl;
}
void BankAccount::showNameAndBal(void)
{
  std::cout << "The name of depositor is " << depositor << ".";
  std::cout << "The balance of depositor is " << balance << ".";
}

int main()
{
  BankAccount sr('A', 39, 4000);
  sr.showNameAndBal();
  sr.depositAmount(5000);
  return 0;
}
