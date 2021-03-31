/*
Create a struct to hold a fraction. The struct should have an integer numerator and an integer denominator member. Declare 2 fraction variables 
and read them in from the user. Write a function called multiply that takes both fractions, multiplies them together, and returns the result as 
a decimal number. You do not need to reduce the fraction to its lowest terms. Print the result of the multiplication of the 2 fraction variables.
*/

#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>

struct Fraction
{
    int numerator{ };
    int denominator{ };
};

Fraction getFraction()
{
    Fraction fraction;
    std::cout << "Please enter numerator of a fraction(in integer form): ";
    std::cin >> fraction.numerator;

    std::cout << "Please enter denominator of a fraction(in integer form, excluding zero(0)): " ;
    std::cin >> fraction.denominator;

    return fraction;
}

double multiplication(Fraction fraction1, Fraction fraction2)
{
    return (static_cast<double>(fraction1.numerator * fraction2.numerator) / (fraction1.denominator * fraction2.denominator));
}

int main()
{
    Fraction fraction1{getFraction()};
    Fraction fraction2(getFraction());

    std::cout << multiplication(fraction1, fraction2);
 
	return 0;
}