/*
What’s wrong with each of these snippets, and how would you fix it?

int main()
{
  int array[]{ 0, 1, 2, 3 };
 
  for (std::size_t count{ 0 }; count <= std::size(array); ++count)
  {
    std::cout << array[count] << ' ';
  }
 
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

int main()
{
  int array[]{ 0, 1, 2, 3 };
 
  for (std::size_t count{ 0 }; count < std::size(array); ++count)
  {
    std::cout << array[count] << ' ';
  }
  std::cout << '\n';
 
  return 0;
}