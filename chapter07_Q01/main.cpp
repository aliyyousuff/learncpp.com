#include "constants.h"

#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>

double calculate_height(double second, double distance)
{
    return distance - ((second * second) * constants::gravity / 2);
}
 
void printResult(double distance)
{
    double second{ 0 };

    while (true)
    {

        double height { calculate_height(second, distance)};
        if (height > 0.0 )
        {
            std::cout << "At " << second << " seconds, the ball is at height: " << height << " meters.\n";
            ++second;
        }
        else
        {
            std::cout << "At " << second << " seconds, the ball is on the ground.\n";
            break;
        }
    }
}

int main()
{
    //auto start = std::chrono::high_resolution_clock::now();

    printResult(100.00);

    //auto stop = std::chrono::high_resolution_clock::now();
    //auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    //std::cout << "Time taken by program: " << duration.count() << " microseconds" << std::endl;
 
    return 0;
}
