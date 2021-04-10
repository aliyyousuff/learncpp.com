/*

Question #3
Unoptimized bubble sort performs the following steps to sort an array from smallest to largest:
A) Compare array element 0 with array element 1. If element 0 is larger, swap it with element 1.
B) Now do the same for elements 1 and 2, and every subsequent pair of elements until you hit the end of the array. 
At this point, the last element in the array will be sorted.
C) Repeat the first two steps again until the array is sorted.

*/

#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>
#include <numeric>
int main()
{
    
    
    int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };

    //int first_element{ 0 };
    //int adjacent_element{ 1 };
    std::size_t length{std::ssize(array)-1};

    std::size_t looping{std::ssize(array)};

    int iteration{0};

    while (looping > 0)
    {
        int swap{ 0 };

        for (std::size_t index{ 0 }; index < length; ++index)
        {
            if (array[index] > array[index+1])
            {
                std::swap(array[index], array[index+1]);
                ++swap;
            }
        }
        --length;
        --looping;
        ++iteration;
        if (swap == 0 && iteration != std::ssize(array))
        {
            std::cout << "Early termination on iteration " << iteration << '\n';
            break;
            
        }
    }

    std::size_t l{std::ssize(array)};

    for (size_t index{0}; index < l; ++index)
    {
        std::cout << array[index] << " ";
    }
    std::cout << '\n';

    return 0;
}