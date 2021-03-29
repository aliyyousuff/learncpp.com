/*
Write a function named sumTo() that takes an integer parameter named value, and returns the sum of all the numbers from 1 to value.

For example, sumTo(5) should return 15, which is 1 + 2 + 3 + 4 + 5.

Hint: Use a non-loop variable to accumulate the sum as you iterate from 1 to the input value, much like the pow() example above uses 
the total variable to accumulate the return value each iteration.

*/
#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>

int sumTo(int value)
{
    int total{ 0 };
    for( int counter{ 0 }; counter <= value; ++counter )
    {
        total += counter;
    }
    return total;
}


int main()
{
    //auto start = std::chrono::high_resolution_clock::now();

    std::cout << sumTo(10) << '\n';

    //std::cout << space_counter << std::endl;

    //auto stop = std::chrono::high_resolution_clock::now();
    //auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    //std::cout << "Time taken by program: " << duration.count() << " microseconds" << std::endl;
 
    return 0;
}
