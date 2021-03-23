/*
Question #2

Modify the program you wrote in exercise #1 so that readNumber() and writeAnswer() live in a separate file called “io.cpp”. 
Use a forward declaration to access them from main().

If you’re having problems, make sure “io.cpp” is properly added to your project so it gets compiled.
*/
#include <iostream>

using std::cout;
using std::endl;

int readnumber();

void writeAnswer(int y);

int main()
{
    int number1{ readnumber()};
    int number2{ readnumber()};
    writeAnswer(number1 + number2);

    return 0;
}
