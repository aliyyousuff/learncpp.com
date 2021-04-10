/*
Question #1


Print the following array to the screen using a loop:
1
constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };
Hint: You can use std::size (as of C++17) or the sizeof() trick (prior to C++17) to determine the array length.

*/

#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>



int main()
{
    constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    int array_length{ std::ssize(array) };

    for (int index{0}; index < array_length; ++index)
    {
        std::cout << array[index] << " ";
    }
    std::cout << '\n';

    return 0;
}
