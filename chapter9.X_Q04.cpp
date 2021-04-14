/*
Write your own function to swap the value of two integer 
variables. Write a main() function to test it.
*/

#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <array>
#include <vector>

void print_string(char *name)
{
    while (*name != '\0')
    {
            std::cout << *name ;
            ++name;
    }
}

int main()
{
    char name[] {"Catharine Elizabeth Krebs"};
    print_string(name);
    std::cout << '\n';
    
    return 0;
}