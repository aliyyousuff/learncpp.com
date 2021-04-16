/*

1) In this quiz, we’re going to write a version of our basic calculator using 
function pointers.

1a) Create a short program asking the user for two integer inputs and a mathematical 
operation (‘+’, ‘-‘, ‘*’, ‘/’). Ensure the user enters a valid operation.

1b) Write functions named add(), subtract(), multiply(), and divide(). 
These should take two integer parameters and return an integer.

1c) Create a type alias named ArithmeticFunction for a pointer to a function 
that takes two integer parameters and returns an integer. Use std::function.

1d) Write a function named getArithmeticFunction() that takes an operator character and returns the 
appropriate function as a function pointer.

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


// Question 1a

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

// Question 1b

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

// Question 1c

using arithmatic_function = std::function<int(int, int)>;

// Question 1d

arithmatic_function get_arithmatic_function(char operat)
{
    switch (operat)
    {
        case '+':
            return &add;
        case '-':
            return &subtract;
        case '*':
            return &multiply;
        case '/' :
            return &divide;
        default:
            return &add;
    }
}

int main()
{

    return 0;
}