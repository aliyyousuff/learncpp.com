/*
Write your own function to swap the value of two integer 
variables. Write a main() function to test it.
*/

#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <array>
#include <vector>

void swap(int x, int y)
{
    int temp{ };
    std::cout << "Before swapping: x is " << x << " y is "<<y <<'\n';

    temp = y;
    y= x;
    x = temp;

    std::cout << "After swapping: x is " << x << " y is "<<y <<'\n';
}

int main()
{
    swap(100, 90);
    
    return 0;
}