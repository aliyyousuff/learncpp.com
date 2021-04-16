/*

1) In this quiz, we’re going to write a version of our basic calculator using 
function pointers.

1a) Create a short program asking the user for two integer inputs and a mathematical 
operation (‘+’, ‘-‘, ‘*’, ‘/’). Ensure the user enters a valid operation.

1b) Write functions named add(), subtract(), multiply(), and divide(). 
These should take two integer parameters and return an integer.

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

void ignore_line()
{
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int get_integer()
{
    int integer{ };
    std::cout << "Enter an integer: ";
    std::cin >> integer;

    return integer;

}

char get_operator()
{
    char operat{ };

    do 
    {
        std::cout << "Enter one of the following: +, -, *, or / : ";
        std::cin >> operat;
    }
    while (operat != '+' && operat != '-' && operat != '*' && operat != '/');
    return operat;
}

int add(int x, int y)
{
    return (x + y);
}

int subtract(int x, int y)
{
    return (x - y);
}

int multiply(int x, int y)
{
    return (x * y);
}

int divide(int x, int y)
{
    return (x/y);
}

int main()
{
    std::cout << add(10, 10) << '\n';

    return 0;
}