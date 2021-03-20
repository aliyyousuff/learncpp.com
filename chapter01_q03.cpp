/*
Question #3

Write a program that asks the user to enter a number, and then enter a second number. The program should tell the user what the result of adding and 
subtracting the two numbers are.
The output of the program should match the following (assuming inputs of 6 and 4):

Enter an integer: 6
Enter another integer: 4
6 + 4 is 10.
6 - 4 is 2.

compiler version: 10.2.0(GCC)
*/

#include <iostream>
using std::cout;
using std::endl;


int main()
{
    int number1{ };
    cout << "Enter an integer: ";
    std::cin >> number1;

    int number2{ };
    cout << "Enter another integer: ";
    std::cin >> number2;

    cout << number1 <<" + " <<number2 << " is " << number1 + number2 << ".\n";
    cout << number1 <<" - " <<number2 << " is " << number1 - number2 << ".\n";


    return 0;
}