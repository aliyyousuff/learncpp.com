/*
Write a program that asks the user to enter their full name and their age. As output, tell the user how many years they’ve 
lived for each letter in their name (for simplicity, count spaces as a letter).
Sample output:

Enter your full name: John Doe
Enter your age: 46
You've lived 5.75 years for each letter in your name.
*/

#include <string>
#include <iostream>
#include <limits>

int main()
{
    std::string name{ };
    std::cout << "Enter your full name: ";
    std::getline(std::cin, name);
    
    int length{ static_cast<int>(name.length())};

    double age{ };
    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "You've lived " << age/length <<" years for each letter in your name.\n";
    return 0;	
}