/*
A prime number is a whole number greater than 1 that can only be divided evenly by 1 and itself. Write a program that asks the user to enter 
a single digit integer. If the user enters a single digit that is prime (2, 3, 5, or 7), print “The digit is prime”. Otherwise, print “The digit is not prime”.
*/

#include <iostream>
 
bool isSingleDigit(int x)
{
    
    if (x < 11)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isPrime(int x)
{
    if (x == 2)
    { 
        return true;
    }
    else if (x == 3)
    {
        return true;
    }
    else if (x == 5)
    {
        return true;
    }
    else if (x == 7)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
	std::cout << "Enter an single digit integer: ";
    int x{ };
    std::cin >> x;

    if (isSingleDigit(x))
    {
        if(isPrime(x))
        {
            std::cout << "The digit is prime\n";
        }
        else
        {
            std::cout << "The digit is not prime.\n";
        }
    }
    else 
    {
        std::cout << "Entered number is not single digit integer.\n";
    }
	return 0;
}