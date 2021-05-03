/*

1) For the Cents example above, rewrite operators < and <= in terms of other overloaded operators.

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

class Cents
{
    private:
        int m_cents{ };
    public:
        Cents(int cents)
        : m_cents{ cents }
        {

        }
        friend bool operator> (const Cents &c1, const Cents &c2);
        friend bool operator>= (const Cents &c1, const Cents &c2);
        friend bool operator< (const Cents &c1, const Cents &c2);
        friend bool operator<= (const Cents &c1, const Cents &c2);
};

bool operator> (const Cents &c1, const Cents &c2)
{
    return c1.m_cents < c2.m_cents;
}

bool operator>= (const Cents &c1, const Cents &c2)
{
    return c1.m_cents >= c2.m_cents;
}

bool operator< (const Cents &c1, Cents &c2)
{
    return !(c1 >= c2);
}

bool operator<= (const Cents &c1, Cents &c2)
{
    return !(c1 > c2);
}


int main() 
{
    Cents dime{ 10 };
	Cents nickel{ 5 };
 
	if (nickel > dime)
		std::cout << "a nickel is greater than a dime.\n";
	if (nickel >= dime)
		std::cout << "a nickel is greater than or equal to a dime.\n";
	if (nickel < dime)
		std::cout << "a dime is greater than a nickel.\n";
	if (nickel <= dime)
		std::cout << "a dime is greater than or equal to a nickel.\n";

    return 0;
}