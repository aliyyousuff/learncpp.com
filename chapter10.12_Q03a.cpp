/*

3a) This one is slightly trickier. Write a program that asks the user to enter a positive integer, and then uses a recursive function to print out the binary 
representation for that number. Use method 1 from lesson O.4 -- Converting between binary and decimal.

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

void ignore_line()
{
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


std::string dec2bin(int inputNumber)
{
    
    
    std::string str{std::to_string(inputNumber % 2)};

    if (inputNumber == 0)
    
        return ""; 
    return dec2bin(inputNumber/2) + str;

}


int main()
{
    std::cout << dec2bin(90) << '\n';

    return 0;
}