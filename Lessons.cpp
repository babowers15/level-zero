#include <iostream>

int main() // Will Generate the numbers a user types
{
  int x{}, y{}, z{};
  std::cout << "Enter three numbers with spaces in between:\n";
  std::cin >> x >> y >> z;
  std::cout << "The numbers are: " << x << ", " << y << ", and " << z << ".\n";
  return 0;
}