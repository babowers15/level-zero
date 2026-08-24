#include <iostream>

int main() // Will display the numbers a user types multipliued by 2
{
  int x {};
  int y {};
  std::cout << "Enter an integer:\n";
  std::cin >> x;
  std::cout << "Enter another integer\n";\
  std::cin >> y;
  std::cout << x << " + " << y << " = " << x + y << "\n";
  std::cout << x << " - " << y << " = " << x - y << "\n";
  return 0;
}