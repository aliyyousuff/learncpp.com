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


int binary_search2(std::vector<int> arr, int target)
{
    int min{ 0 };
    int max{ static_cast<int>(arr.size()) - 1 };

    while(true)
    {
        int mid_point{ ((max + min)/ 2)  };

        if (max < min)
        {
            //std::cout << "Target is not found\n";
            return -1;
            break;
        }
        else if ( target > arr[static_cast<unsigned long>(mid_point)])
        {
            min = mid_point + 1;
        }
        else if ( target < arr[static_cast<unsigned long>(mid_point)])
        {
            max = mid_point-1;
        }
        else if ( target == arr[static_cast<unsigned long>(mid_point)])
        {
            //std::cout << "Target is found " << mid_point << '\n';
            return mid_point;
            break;
        }
    }
}

int binary_search_r(std::vector<int> arr, int target, int max, int min)
{

    int sol{ };

    if ( max < min)
    {
        return -1;
    }
    else
    {
        int middle { (max + min)/2 };

        if (target == arr[static_cast<unsigned int>(middle)])
        {
            sol = middle ;
        }
        else if (target < arr[static_cast<unsigned int>(middle)] )
        {
            sol = binary_search_r(arr,target, middle -1, min);
        }
        else
        {
            sol = binary_search_r(arr,target, max, middle + 1);
        }
    }
    return sol;
}



int main()
{
   
    std::vector<int> array{ 3, 6, 8, 12, 14, 17, 20, 21, 26, 32, 36, 37, 42, 44, 48 };
 
    // We're going to test a bunch of values to see if they produce the expected results
    constexpr int numTestValues{ 9 };
    // Here are the test values
    std::vector<int> testValues{ 0, 3, 12, 13, 22, 26, 43, 44, 49 };
    // And here are the expected results for each value
    std::vector<int> expectedValues{ -1, 0, 3, -1, -1, 8, -1, 13, -1 };
 
    // Loop through all of the test values
    for (int count{ 0 }; count < numTestValues; ++count)
    {
        // See if our test value is in the array
        int index{ binary_search_r(array, testValues[static_cast<unsigned long>(count)], (static_cast<int>(array.size())), 0) };
        // If it matches our expected value, then great!
        if (index == expectedValues[static_cast<unsigned long>(count)])
             std::cout << "test value\t" << testValues[static_cast<unsigned long>(count)] << " \t passed!\n";
        else // otherwise, our binarySearch() function must be broken
             std::cout << "test value " << testValues[static_cast<unsigned long>(count)] << " failed.  There's something wrong with your code!\n";
    }

   

    return 0;
}