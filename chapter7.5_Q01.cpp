/*
Question #1

Write a function called calculate() that takes two integers and a char representing one of the following mathematical operations: +, -, *, /, or % (modulus). 
Use a switch statement to perform the appropriate mathematical operation on the integers, and return the result. If an invalid operator is passed into the function,
 the function should print an error. For the division operator, do an integer division.
Hint: “operator” is a keyword, variables can’t be named “operator”.
*/
#include <iostream>
#include <string>

int calculate(int number1, int number2, char op)
{
    switch (op)
    {
        case '+':
            return number1 + number2;
            
        case '-':
            return  number1 - number2;
            
        case '*':
            return  number1 * number2;
            
        case '/':
            return number1 / number2;
            
        case '%':
            return  number1 % number2;
            
        default:
            std::cout <<  "Error: Invalid math operator\n";
            return 0;
    }
}


int main()
{
	std::cout << calculate(100, -90, '*');
 
	return 0;
}