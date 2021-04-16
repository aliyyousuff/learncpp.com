/*
1) A function named sumTo() that takes an integer parameter and returns the sum
of all the numbers between 1 and the input number.

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

int sum_to(const int x)
{
    int sum{ 0 };
    for (int i{ 1 }; i <= x; ++i )
    {
        sum += i;
    }

    return sum;
}

int main()
{
    std::cout << sum_to(10) << '\n';
    return 0;
}