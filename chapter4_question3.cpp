/*
Write the following program: The user is asked to enter 2 floating point numbers (use doubles). The user is then asked to enter one of 
the following mathematical symbols: +, -, *, or /. The program computes the answer on the two numbers the user entered and prints the results. 
If the user enters an invalid symbol, the program should print nothing.

Example of program:

Enter a double value: 6.2
Enter a double value: 5
Enter one of the following: +, -, *, or /: *
6.2 * 5 is 31
*/

#include <string>
#include <iostream>
#include <limits>

char mathOperator()
{
    std::cout << "Enter one of +, -, *, or /: ";
    char ope{};
    std::cin >> ope;
    return ope;
}

double inputNumber()
{
    std::cout << "Enter a double value: ";
    double number{ };
    std::cin >> number;

    return number;
}


int main()
{
    double number1{ inputNumber()};
    double number2{ inputNumber() };

    char math_op{ mathOperator()};

    if (math_op == '+')
    {
        std::cout << number1 << " " << math_op << " "<< number2 << " is "<< number1 + number2 << '\n';
    }
    else if (math_op == '-')
    {
        std::cout << number1 << " " << math_op << " "<< number2 << " is "<< number1 - number2 << '\n';    
    }
     else if (math_op == '*')
    {
        std::cout << number1 << " " << math_op << " "<< number2 << " is "<< number1 * number2 << '\n';    
    }
     else if (math_op == '/')
    {
        std::cout << number1 << " " << math_op << " "<< number2 << " is "<< number1 / number2 << '\n';    
    }
    else
    {
        std::cout << "Please check your input.\n";
    }
    return 0;	
}