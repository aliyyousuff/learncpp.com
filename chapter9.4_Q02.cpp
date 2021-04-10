/*

Question #3

*/

#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>
#include <numeric>
int main()
{
    int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    constexpr std::size_t length{ std::size(array) };
 
    // Step through each element of the array
    // (except the last one, which will already be sorted by the time we get there)
    for (std::size_t startIndex{ 0 }; startIndex < length - 1; ++startIndex)
    {
        // smallestIndex is the index of the smallest element we’ve encountered this iteration
        // Start by assuming the smallest element is the first element of this iteration
        std::size_t smallestIndex{ startIndex };
 
        // Then look for a smaller element in the rest of the array
        for (std::size_t currentIndex{ startIndex + 1 }; currentIndex < length; ++currentIndex)
        {
        // If we've found an element that is smaller than our previously found smallest
        if (array[currentIndex] > array[smallestIndex])
        {
            // then keep track of it
            smallestIndex = currentIndex;
        }
    }
 
        // smallestIndex is now the smallest element in the remaining array
        // swap our start element with our smallest element (this sorts it into the correct place)
        std::swap(array[startIndex], array[smallestIndex]);
  }
 
    // Now that the whole array is sorted, print our sorted array as proof it works
    for (std::size_t index{ 0 }; index < length; ++index)
        std::cout << array[index] << ' ';
 
    std::cout << '\n';
 
    return 0;
}