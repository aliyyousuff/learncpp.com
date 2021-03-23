/*
Question #3

Modify the program you wrote in #2 so that it uses a header file (named io.h) to access the functions instead of using forward 
declarations directly in your code (.cpp) files. Make sure your header file uses header guards.

compiler: GCC 10.2.0
*/
#include "io.h"
#include <iostream>

using std::cout;
using std::endl;


int main()
{
    int number1{ readnumber()};
    int number2{ readnumber()};
    writeAnswer(number1 + number2);

    return 0;
}
