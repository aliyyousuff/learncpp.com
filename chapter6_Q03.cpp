#include "constants.h"

#include <iostream>
#include <string>

bool passOrFail()
{
    static int times_function_called{ 0 };

    if (times_function_called < 3 )
    {
        times_function_called += 1;
        return true;
    }
    else
    {
        times_function_called += 1;
        return false;
    }
}

int main()
{
	std::cout << "User #1: " << (passOrFail() ? "Pass" : "Fail") << '\n';
	std::cout << "User #2: " << (passOrFail() ? "Pass" : "Fail") << '\n';
	std::cout << "User #3: " << (passOrFail() ? "Pass" : "Fail") << '\n';
	std::cout << "User #4: " << (passOrFail() ? "Pass" : "Fail") << '\n';
	std::cout << "User #5: " << (passOrFail() ? "Pass" : "Fail") << '\n';
    std::cout << "User #6: " << (passOrFail() ? "Pass" : "Fail") << '\n';
 
	return 0;
}