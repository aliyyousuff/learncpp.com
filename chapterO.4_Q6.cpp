/*
Write a program that asks the user to input a number between 0 and 255. Print this number as an 8-bit binary number (of the form #### ####). 
Don’t use any bitwise operators. Don’t use std::bitset.
*/

#include <cstdint>
#include <iostream>
#include <bitset>
#include <string>
#include <cmath>
using std::cout;
using std::endl;

std::string dec2bin(int inputNumber)
{
    
    
    std::string str{std::to_string(inputNumber % 2)};

    if (inputNumber == 0)
    
        return ""; 
    return dec2bin(inputNumber/2) + str;

}

int main()
{
    //std::string bin{};
    std::cout << "Enter an integer between 0 to 255: ";
    int inputNumber{};
    std::cin >> inputNumber;
    cout << dec2bin(inputNumber) << endl;
    
 
    return 0;
}