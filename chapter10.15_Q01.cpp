/*

3a) This one is slightly trickier. Write a program that asks the user to enter a positive integer, and then uses a recursive function to print out the binary 
representation for that number. Use method 1 from lesson O.4 -- Converting between binary and decimal.

*/

#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <array>
#include <vector>
#include <string_view>
#include <functional>
#include <cmath>

void ignore_line()
{
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

struct Student
{
    std::string name{ };
    int point{ };
};

int main()
{
   std::array<Student, 8> arr{
  { { "Albert", 3 },
    { "Ben", 5 },
    { "Christine", 2 },
    { "Dan", 8 }, 
    { "Enchilada", 4 },
    { "Francis", 1 },
    { "Greg", 3 },
    { "Hagrid", 5 } }
    };
    
    const auto best{ std::max_element(arr.begin(), arr.end(), [](const auto &a, const auto &b){return a.point < b.point;}) };

    std::cout << best->name << " is the best student.\n";

    return 0;
}