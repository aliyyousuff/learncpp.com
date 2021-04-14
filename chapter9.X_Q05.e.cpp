/*
What’s wrong with each of these snippets, and how would you fix it?

int main()
{
  double d{ 5.5 };
  int* ptr{ &d };
  std::cout << ptr << '\n';
 
  return 0;
}

*/

#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <array>
#include <vector>

int main()
{
  double d{ 5.5 };
  double* ptr{ &d };
  std::cout << ptr << '\n';
 
  return 0;
}