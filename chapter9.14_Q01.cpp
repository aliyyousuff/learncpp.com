/*
Question #1

Write a program that:
* Asks the user how many names they wish to enter.
* Dynamically allocates a std::string array.
* Asks the user to enter each name.
* Calls std::sort to sort the names.
* Prints the sorted list of names.

std::string supports comparing strings via the comparison operators < and >. You don’t need to implement string comparison by hand.

Your output should match this:

How many names would you like to enter? 5
Enter name #1: Jason
Enter name #2: Mark
Enter name #3: Alex
Enter name #4: Chris
Enter name #5: John

Here is your sorted list:
Name #1: Alex
Name #2: Chris
Name #3: Jason
Name #4: John
Name #5: Mark

*/

#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>
#include <numeric>
#include <iterator>


int main()
{
    std::cout << "How many names would you like to enter? ";
    int n_names{};
    std::cin >> n_names;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string* names{new std::string[n_names] };
    for (int index{0}; index < n_names; ++index)
    {
        std::cout << "Enter name #" << index <<": ";
        std::string temp_name{};
        std::getline(std::cin, temp_name);
        names[index] = temp_name;
    }

    std::sort(names, names+n_names);
    for (int index{ 0 }; index < n_names; ++index)
    {
        std::cout << names[index] << '\n';
    }

    delete[] names;

    return 0;
}