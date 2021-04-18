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

struct Season
{
    std::string_view name{ };
    double average_temperature{ };
};

int main()
{

    std::array<Season, 4> seasons{
        {   {"Spring", 285.0 },
            {"Summer", 296.0 },
            {"Fall", 288.0 },
            {"Winter", 263.0}

        }
    };
    
    std::sort(seasons.begin(), seasons.end(), [](auto &a, auto &b){return a.average_temperature < b.average_temperature;});

    for (auto const &a : seasons)
    {
        std::cout << a.name << '\n';
    }

    return 0;
}