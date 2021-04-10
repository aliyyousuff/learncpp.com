/*
Question #2

Write a function named find that takes a pointer to the beginning and a pointer to the end (1 element past the last) of an array, as well as a value. 
The function should search for the given value and return a pointer to the first element with that value, or the end pointer if no element was found. 
The following program should run:

*/

#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>
#include <numeric>

int* find(int* first, int* last, int value)
{
    long int length{ last - first};

    for (int* ind{ first}; ind < ind + length; ++ind)
    {
        if (*ind == value)
        {
            return ind;
        }   
    }
    return last;
}
int main()
{
    int arr[]{1, 2, 3, 4};

    std::cout << find(std::begin(arr), std::end(arr), 4) << '\n';
    std::cout << &arr[3] << '\n';
    return 0;
}