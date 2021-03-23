/*
Write a single-file program (named main.cpp) that reads two separate integers from the user, adds them together, 
and then outputs the answer. The program should use three functions:

A function named “readNumber” should be used to get (and return) a single integer from the user.
A function named “writeAnswer” should be used to output the answer. This function should take a single parameter and have no return value.
A main() function should be used to glue the above functions together.
#include <iostream>
*/
#include <iostream>

using std::cout;
using std::endl;

int readnumber()
{
    cout << "Enter an integer: ";
    int x{ };
    std::cin >> x;
    return x;
}

void writeAnswer(int y)
{
    cout << "Sum of the both numbers is " << y << '\n';
}

int main()
{
    int number1{ readnumber()};
    int number2{ readnumber()};
    writeAnswer(number1 + number2);

    return 0;
}
