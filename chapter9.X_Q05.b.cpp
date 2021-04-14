/*
What’s wrong with each of these snippets, and how would you fix it?

int main()
{
  int x{ 5 };
  int y{ 7 };
 
  const int* ptr{ &x };
  std::cout << *ptr << '\n';
  *ptr = 6;
  std::cout << *ptr << '\n';
  ptr = &y;
  std::cout << *ptr << '\n';
 
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
  int x{ 5 };
  int y{ 7 };
 
  const int* ptr{ &x };
  std::cout << *ptr << '\n';

  std::cout << *ptr << '\n';
  ptr = &y;
  std::cout << *ptr << '\n';
 
  return 0;
}