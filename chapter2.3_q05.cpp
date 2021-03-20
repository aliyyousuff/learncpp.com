/*
Question #4

Write a function called doubleNumber() that takes one integer parameter. 
The function should return double the value of the parameter.

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
    cout << doubleNumber(100) << '\n';
    return 0;
}