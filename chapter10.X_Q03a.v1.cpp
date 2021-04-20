/*

binary search implementation (iterative version): version 01

*/

#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <array>
#include <vector>
#include <string_view>
#include <functional>
#include <cmath>
#include <random>

void ignore_line()
{
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int binary_search(const int *arr, int target, int min, int max)
{
     while(true)
    {
        int mid_point{ min + (max - min)/2 };

        if ( max < min )
        {
            return -1;
        }
        else if ( arr[static_cast<unsigned long>(mid_point)] < target)
        {
            min = mid_point + 1;
        }
        else if (arr[static_cast<unsigned long>(mid_point)] > target)
        {
            max = mid_point - 1;
        }
        else if (arr[static_cast<unsigned long>(mid_point)] == target)
        {
            return mid_point;
        }
    }
}



int main()
{
    constexpr int array[]{ 3, 6, 8, 12, 14, 17, 20, 21, 26, 32, 36, 37, 42, 44, 48 };
 
    // We're going to test a bunch of values to see if they produce the expected results
    constexpr int numTestValues{ 9 };
    // Here are the test values
    constexpr int testValues[numTestValues]{ 0, 3, 12, 13, 22, 26, 43, 44, 49 };
    // And here are the expected results for each value
    int expectedValues[numTestValues]{ -1, 0, 3, -1, -1, 8, -1, 13, -1 };
 
    // Loop through all of the test values
    for (int count{ 0 }; count < numTestValues; ++count)
    {
        // See if our test value is in the array
        int index{ binary_search(array, testValues[count], 0, static_cast<int>(std::size(array)) - 1) };
        // If it matches our expected value, then great!
        if (index == expectedValues[count])
             std::cout << "test value " << testValues[count] << " passed!\n";
        else // otherwise, our binarySearch() function must be broken
             std::cout << "test value " << testValues[count] << " failed.  There's something wrong with your code!\n";
    }
    return 0;
}