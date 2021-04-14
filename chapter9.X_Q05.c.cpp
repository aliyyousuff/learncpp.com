/*
What’s wrong with each of these snippets, and how would you fix it?

void printArray(int array[])
{
  for (int element : array)
  {
    std::cout << element << ' ';
  }
}
 
int main()
{
  int array[]{ 9, 7, 5, 3, 1 };
 
  printArray(array);
 
  std::cout << '\n';
 
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

void printArray(const std::array<int,5> &array)
{
  for (int element : array)
  {
    std::cout << element << ' ';
  }
}
 
int main()
{
  std::array<int,5> array{ 9, 7, 5, 3, 1 };
 
  printArray(array);
 
  std::cout << '\n';
 
  return 0;
}