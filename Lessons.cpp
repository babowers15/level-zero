#include <iostream>\


int getNumber ()
{
  int num {};
  std::cout << "Enter an integer: \n";
  std::cin >> num;
  return num;
}
 void doubleNumber (int num)
{ 
  std::cout << "Your number doubled is: " << num * 2 << "\n";
}
int main() // Will display the numbers a user types multipliued by 2
{
 doubleNumber
 (getNumber());
 return 0;
}