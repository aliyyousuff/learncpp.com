/*
Question #2


Given the array in question 1:
Ask the user for a number between 1 and 9. If the user does not enter a number between 1 and 9, repeatedly ask for an integer value until they do. 
Once they have entered a number between 1 and 9, print the array. Then search the array for the value that the user entered and print the index of that element.

*/

#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>
#include <numeric>



int main()
{
    constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };

    int user_input{ };

    do
    {
        std::cout << "Please enter an integer between 1 and 9: ";
        std::cin >> user_input;
        if (std::cin.fail())
        {   
            std::cin.clear(); // reset any error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer
        }
    }
    while (user_input < 1 || user_input > 9);

    int array_length{ std::ssize(array) };
    int user_input_index{ };

    for (int index{0}; index < array_length; ++index)
    {
        std::cout << array[index] << " ";

        if (array[index] == user_input)
            user_input_index = index;
    }
    std::cout << '\n';

    std::cout << "Index of user input is at: " << user_input_index << '\n';

	return 0;
}