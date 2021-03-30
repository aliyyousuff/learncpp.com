#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>

bool isPrime(int x)
{
    if (x == 0)
    {
        return false;
    }
    else if (x == 1)
    {
        return true;
    }
    else
    {
        int divisible_number{ 0 };
        for (int number{ 1 }; number <= x; ++number)
        {
            if ( x % number == 0)
            {
                ++divisible_number;
            }
        }
    if (divisible_number == 2)
    {
        return true;
    }
    else
    {
        return false;
    }

    }
}

int main()
{
    //auto start = std::chrono::high_resolution_clock::now();

    std::cout << isPrime(2) << std::endl;

    //auto stop = std::chrono::high_resolution_clock::now();
    //auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    //std::cout << "Time taken by program: " << duration.count() << " microseconds" << std::endl;
 
	return 0;
}