/*

2) Write a recursive function that takes an integer as input and returns the sum of each individual digit in the integer 
(e.g. 357 = 3 + 5 + 7 = 15). Print the answer for input 93427 (which is 25). Assume the input values are positive.

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

int sum_digit(int number)
{

    if ( number <= 0)
    {
        return 0;
    }
    else
    {
        int digit = (number % 10);
        return sum_digit(number/10) + digit;
    }
}


int main()
{
    
    std::cout << sum_digit(93427) << '\n';

    return 0;
}