/*
Write a program that prints out the letters a through z along with their ASCII codes. 
Hint: to print characters as integers, you have to use a static_cast.
*/
#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>


int main()
{
    auto start = std::chrono::high_resolution_clock::now();


    std::string letter{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    int length{static_cast<int>(letter.length())};

    for(int l=0; l<length; ++l)
    {
        std::cout << letter[static_cast<uint>(l)] <<" " << static_cast<int>(letter[static_cast<uint>(l)]) << '\n';
    }


    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    std::cout << "Time taken by program: " << duration.count() << " microseconds" << std::endl;
 
	return 0;
}