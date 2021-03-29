/*
What's wrong with the following for loop:

// Print all numbers from 9 to 0

for (unsigned int count{ 9 }; count >= 0; --count)
    std::cout << count << ' ';

*/
#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>

int main()
{
    //auto start = std::chrono::high_resolution_clock::now();

    for (int count{ 9 }; count >= 0; --count )
    {
        std::cout << count << ' ';
    }

    //auto stop = std::chrono::high_resolution_clock::now();
    //auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    //std::cout << "Time taken by program: " << duration.count() << " microseconds" << std::endl;
 
	return 0;
}