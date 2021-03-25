#include <cstdint>
#include <iostream>
 
int main()
{
  std::cout << "How old are you?\nPlease enter age in integer form:  ";
 
  int age{};
  std::cin >> age;
 
  if (age >= 16)
    std::cout << "Allowed to drive a car in Texas\n";
  else
    std::cout << "Not allowed to drive a car in Texas\n";
 
  return 0;
}