/*
Question #1

Write a for loop that prints every even number from 0 to 20.

*/
#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>


int main()
{
    //auto start = std::chrono::high_resolution_clock::now();

    for (int counter{ 0 }; counter <21; ++counter)
    {
        if ( counter % 2 == 0)
        {
            std::cout << counter << " ";
        }
    }
 
    return 0;
}
