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

        operator double() const { return m_nfrac + static_cast<double>(m_frac)/100.0 ;}    
        
};


std::ostream& operator<<(std::ostream &out, const FixedPoint2 &f)
{
    out << (f.m_nfrac + static_cast<double>(f.m_frac)/100.0);
    return out;
}


int main()
{
    	FixedPoint2 a{ 0.01 };
	std::cout << a << '\n';
 
	FixedPoint2 b{ -0.01 };
	std::cout << b << '\n';
 

	FixedPoint2 c{ 5.01 }; 
	std::cout << c << '\n';
 
	FixedPoint2 d{ -5.01 }; 
	std::cout << d << '\n';
 
	FixedPoint2 e{ 106.9978 }; 
	std::cout << e << '\n';


    	return 0;
}
