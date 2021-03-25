/*
Write a short program to simulate a ball being dropped off of a tower. To start, the user should be asked for the height of the tower in meters. 
Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start). Have the program output the height of 
the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go underneath the ground (height 0).

Your program should include a header file named constants.h that contains a symbolic constant to hold the value of gravity (9.8).

Use a function to calculate the height of the ball after x seconds. The function can calculate how far the ball has fallen after x seconds using the 
following formula: distance fallen = gravity_constant * x_seconds2 / 2

Sample output:

Enter the height of the tower in meters: 100
At 0 seconds, the ball is at height: 100 meters
At 1 seconds, the ball is at height: 95.1 meters
At 2 seconds, the ball is at height: 80.4 meters
At 3 seconds, the ball is at height: 55.9 meters
At 4 seconds, the ball is at height: 21.6 meters
At 5 seconds, the ball is on the ground.
*/

#include <string>
#include <iostream>
#include <limits>

constexpr double gravity{ 9.8 }; 

double calculate_height(double second, double distance)
{
    return distance - ((second * second) * gravity / 2);
}

void printResult(double second, double distance)
{
    double height { calculate_height(second, distance)};
    if (height > 0.0 )
    {
        std::cout << "At " << second << " seconds, the ball is at height: " << height << " meters\n";
    }
    else
    {
     std::cout << "At " << second << " seconds, the ball is on the ground.\n";
    }
}

int main()
{
    double distance{ };
    std::cout << "Enter distance in double: ";
    std::cin >> distance;
    printResult(0, distance);
    printResult(1, distance);
    printResult(2, distance);
    printResult(3, distance);
    printResult(4, distance);
    printResult(5, distance);
    printResult(6, distance);

    return 0;	
}