#include <iostream>

int main() // Will display the numbers a user types multipliued by 2
{
  std::cout << "Type a number: \n"; 
  int num { };
  std::cin >> num; // Recieves user input  
  std::cout << "Double is:" << num * 2<< "\n"; 
  std::cout << "Triple is: " << num * 3 << "\n";
  return 0;
}