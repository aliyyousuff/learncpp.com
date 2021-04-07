/*
Question #2
2) Set up an enum with the names of the following animals: chicken, dog, cat, elephant, duck, and snake. Put the enum in a namespace. 
Define an array with an element for each of these animals, and use an initializer list to initialize each element to hold the number of legs that animal has.

Write a main function that prints the number of legs an elephant has, using the enumerator.

*/

#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>

namespace animal
{
    enum Animals
    {
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake
    };
}

int leg[5] {2,4,4,4,0};

int main()
{


    std::cout << leg[animal::Animals::elephant] << '\n';
	return 0;
}