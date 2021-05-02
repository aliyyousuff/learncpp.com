/*

e) Extra credit: the fraction 2/4 is the same as 1/2, but 2/4 is not reduced to the lowest terms. We can reduce any given fraction to 
lowest terms by finding the greatest common divisor (GCD) between the numerator and denominator, and then dividing both the numerator 
and denominator by the GCD.

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
        int gcd(int a, int b)
            {
                return (b == 0) ? ( a > 0 ? a : -a) : gcd(b, a % b);
            }

        Fraction(int m = 0, int d = 1) : m_numerator{ m }, m_denominator{ d }
        {
           int dd { gcd(m_numerator, m_denominator)};
           m_numerator = m_numerator / dd;
           m_denominator = m_denominator / dd;
        }

        void print()
        {
            std::cout << m_numerator << "/" << m_denominator << '\n';
        }

        friend Fraction operator*(const Fraction &f1, const Fraction &f2);
        friend Fraction operator*(const Fraction &f, const int number);
        friend Fraction operator*(const int number, const Fraction &f );
        friend std::ostream& operator<<(std::ostream &out, const Fraction &f);
        friend std::istream& operator>>(std::istream &in, Fraction &f);
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

std::ostream& operator<<(std::ostream &out, const Fraction &f)
{
    out << f.m_numerator << "/" << f.m_denominator ;
    return out;
}

std::istream& operator>>(std::istream &in, Fraction &f)
{
    in >> f.m_numerator; 
    in.ignore(std::numeric_limits<std::streamsize>::max(), '/');
    in >> f.m_denominator;
    return in;
}

int main() 
{
    Fraction f1{  };
    std::cout << "Enter fraction 1: ";
    std::cin >> f1;

    Fraction f2{ };
    std::cout << "Enter fraction 2: ";
    std::cin >> f2;


    std::cout << f1 << " * " << f2 << " is " << f1 * f2 << '\n';
    return 0;
}
