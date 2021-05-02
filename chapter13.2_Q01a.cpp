/*

a) Write a class named Fraction that has a integer numerator and denominator member. 
Write a print() function that prints out the fraction.

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

class Fraction
{
    private:
        int m_numerator{ };
        int m_denominator{ };
    public:
        Fraction(int m, int d) : m_numerator{ m }, m_denominator{ d }
        {

        }

        void print()
        {
            std::cout << m_numerator << "/" << m_denominator << '\n';
        }
};

int main() 
{
    Fraction f1{ 1, 4 };
    f1.print();

    Fraction f2{1, 2 };
    f2.print();

    return 0;
}