/*

A floating point number is a number with a decimal where the number of digits after the decimal can be variable. 
A fixed point number is a number with a fractional component where the number of digits in the fractional portion is fixed.

In this quiz, we’re going to write a class to implement a fixed point number with two fractional digits (e.g. 12.34, 3.00, 
or 1278.99). Assume that the range of the class should be -32768.99 to 32767.99, that the fractional component should hold any two digits, 
that we don’t want precision errors, and that we want to conserve space. 

4b) Write a class named FixedPoint2 that implements the recommended solution from the previous question. 
If either (or both) of the non-fractional and fractional part of the number are negative, the number should 
be treated as negative. 


4c) Now add a constructor that takes a double. 

4d) Overload operator==, operator >>, operator- (unary), and operator+ (binary).

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




class FixedPoint2
{
    private:
        std::int16_t m_nfrac{ };
        std::int8_t m_frac{ };
        

    public:
        FixedPoint2(std::int16_t nfrac = 0, std::int8_t frac = 0 ) 
        : m_nfrac{ nfrac}, m_frac{ frac}
        {
            if (nfrac < 0 && frac >=0)
            {
                m_frac = -frac;
            }
            else if (frac < 0 && nfrac >= 0)
            {
                m_nfrac = -nfrac;
            }
        }

        FixedPoint2(double number)

        {
           std::int16_t temp = static_cast<std::int16_t>(std::round(number * 100));

            m_nfrac = static_cast<std::int16_t>(temp)/100;
             
            m_frac = static_cast<std::int8_t>(temp % 100);
            
        }

        friend std::ostream& operator<<(std::ostream &out, const FixedPoint2 &f);
        friend std::istream& operator>> (std::istream &in, FixedPoint2 &f);
        friend FixedPoint2 operator+ (const FixedPoint2& f1, const FixedPoint2& f2);

        operator double() const { return m_nfrac + static_cast<double>(m_frac)/100.0 ;} 
        friend bool operator== (const FixedPoint2& f1, const FixedPoint2& f2); 
          
        FixedPoint2 operator-() const ;
        
};


std::ostream& operator<<(std::ostream &out, const FixedPoint2 &f)
{
    out << (f.m_nfrac + static_cast<double>(f.m_frac)/100.0);
    return out;
}

bool operator== (const FixedPoint2& f1, const FixedPoint2& f2)
{
    return (f1.m_nfrac == f2.m_nfrac && f1.m_frac == f2.m_frac);
}

FixedPoint2 operator+ (const FixedPoint2& f1, const FixedPoint2& f2)
{

    return FixedPoint2{static_cast<double>(f1) + static_cast<double>(f2)};
    
}

FixedPoint2 FixedPoint2::operator-() const
{
    return FixedPoint2( -static_cast<std::int16_t>(m_nfrac), -static_cast<std::int8_t>(m_frac) );
}

std::istream& operator>> (std::istream &in, FixedPoint2 &f)
{
    double number{ };
    in >> number;
    f = FixedPoint2(number);
    return in;
}

void testAddition()
{
	// h/t to reader Sharjeel Safdar for this function
	std::cout << std::boolalpha;
	std::cout << (FixedPoint2{ 0.75 } + FixedPoint2{ 1.23 } == FixedPoint2{ 1.98 }) << '\n'; // both positive, no decimal overflow
	std::cout << (FixedPoint2{ 0.75 } + FixedPoint2{ 1.50 } == FixedPoint2{ 2.25 }) << '\n'; // both positive, with decimal overflow
	std::cout << (FixedPoint2{ -0.75 } + FixedPoint2{ -1.23 } == FixedPoint2{ -1.98 }) << '\n'; // both negative, no decimal overflow
	std::cout << (FixedPoint2{ -0.75 } + FixedPoint2{ -1.50 } == FixedPoint2{ -2.25 }) << '\n'; // both negative, with decimal overflow
	std::cout << (FixedPoint2{ 0.75 } + FixedPoint2{ -1.23 } == FixedPoint2{ -0.48 }) << '\n'; // second negative, no decimal overflow
	std::cout << (FixedPoint2{ 0.75 } + FixedPoint2{ -1.50 } == FixedPoint2{ -0.75 }) << '\n'; // second negative, possible decimal overflow
	std::cout << (FixedPoint2{ -0.75 } + FixedPoint2{ 1.23 } == FixedPoint2{ 0.48 }) << '\n'; // first negative, no decimal overflow
	std::cout << (FixedPoint2{ -0.75 } + FixedPoint2{ 1.50 } == FixedPoint2{ 0.75 }) << '\n'; // first negative, possible decimal overflow
}


int main()
{
   
    testAddition();
    FixedPoint2 a{ -0.48 };
	std::cout << a << '\n';
 
	std::cout << -a << '\n';

    std::cout << "Enter a number: "; // enter 5.678
	std::cin >> a;
	
	std::cout << "You entered: " << a << '\n';


    return 0;
}