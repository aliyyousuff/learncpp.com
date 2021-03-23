#include <iostream>

int readnumber()
{
    std::cout << "Enter an integer: ";
    int x{ };
    std::cin >> x;
    return x;
}

void writeAnswer(int y)
{
    std::cout << "Sum of the both numbers is " << y << '\n';
}