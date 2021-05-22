/*
1) Write a Fraction class that has a constructor that takes a numerator and a denominator. 
If the user passes in a denominator of 0, throw an exception of type std::runtime_error (included in the stdexcept header). 
In your main program, ask the user to enter two integers. If the Fraction is valid, print the fraction. If the Fraction is invalid, 
catch a std::exception, and tell the user that they entered an invalid fraction.

Here’s what one run of the program should output:

Enter the numerator: 5
Enter the denominator: 0
Invalid denominator


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
#include <cassert>
#include <cstdint>
#include <cstring>
#include <initializer_list>
#include <exception>

class Fraction
{
    private:
        int m_numerator;
        int m_denominator;

    public:
        Fraction(int n, int d)
        : m_numerator{ n }, m_denominator{ d }
        {
            if (d == 0)
            {
                throw std::runtime_error("Invalid denominator");
            }
        }

};

int main()
{
    std::cout << "Enter the numerator: ";
    int numerator;
    std::cin >> numerator;

    std::cout << "Enter denominator: ";
    int denominator;
    std::cin >> denominator;

    try
    {
        Fraction f1{numerator, denominator};
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}