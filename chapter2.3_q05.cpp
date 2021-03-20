/*
Question #5

5) Write a complete program that reads an integer from the user, doubles it using the doubleNumber() 
function you wrote in the previous quiz, and then prints the doubled value out to the console.

compiler version: 10.2.0(GCC)
*/

#include <iostream>
using std::cout;
using std::endl;

int doubleNumber(int number)
{
    return number * 2;
}

int main()
{
    int number_user{ };
    cout << "Enter an integer: ";
    std::cin >> number_user;

    cout << doubleNumber(number_user) << '\n';
    return 0;
}