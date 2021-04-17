/*

1) A factorial of an integer N (written N!) is defined as the product (multiplication)
of all the numbers between 1 and N (0! = 1). Write a recursive function called 
factorial that returns the factorial of the input. Test it with the first 7 
factorials.

Hint: Remember that (x * y) = (y * x), so the product of all the numbers between 1 
and N is the same as the product of all the numbers between N and 1.

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

void ignore_line()
{
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int factorial(int number)
{
    if ((number == 0) || (number == 1))
    {
        return 1;
    }

    else 
    {
        return factorial(number - 1) * number;
    }
}


int main()
{

    std::cout << factorial(10) << '\n';

    return 0;
}