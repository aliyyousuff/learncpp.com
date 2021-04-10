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
    constexpr int scores[]{ 84, 92, 76, 81, 56, 100 };
 
    int maxIndex{ 0 }; // keep track of our largest score
 
    // now look for a larger score
    for (int student{ 0 }; student < std::ssize(scores); ++student)
    {
        if (scores[student] > scores[maxIndex])
        {
            maxIndex = student;
        }
    }
 
    std::cout << "The best score was " << maxIndex << '\n';
 
    return 0;
}