/*

b) Add overloaded multiplication operators to handle multiplication between a Fraction and integer, and between two Fractions. Use the friend function method.

Hint: To multiply two fractions, first multiply the two numerators together, and then multiply the two denominators together. To multiply a fraction and an integer, 
multiply the numerator of the fraction by the integer and leave the denominator alone.

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

        friend Fraction operator*(const Fraction &f1, const Fraction &f2);
        friend Fraction operator*(const Fraction &f, const int number);
        friend Fraction operator*(const int number, const Fraction &f );
};

Fraction operator*(const Fraction &f1, const Fraction &f2)
{
    return Fraction{ f1.m_numerator * f2.m_numerator, f1.m_denominator * f2.m_denominator};
}

Fraction operator*(const Fraction &f, const int number)
{
    return Fraction{ f.m_numerator * number, f.m_denominator };
}

Fraction operator*(const int number, const Fraction &f)
{
    return Fraction{f.m_numerator * number, f.m_denominator };
}

int main() 
{
    Fraction f1{ 2, 5 };
    f1.print();

    Fraction f2{3, 8 };
    f2.print();

    Fraction f3{f1 * f2 };
    f3.print();

    Fraction f4{ f1 * 2 };
    f4.print();

    Fraction f5{ 2 * f2 };
    f5.print();

    Fraction f6{ Fraction{1, 2} * Fraction{2, 3} * Fraction{3, 4} };
    f6.print();

    return 0;
}