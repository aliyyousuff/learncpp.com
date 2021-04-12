/*
Pretend you’re writing a game where the player can hold 3 types of items: health potions, torches, 
and arrows. Create an enum to identify the different types of items, and an std::array to store the 
number of each item the player is carrying (The enumerators are used as indexes of the array). 
The player should start with 2 health potions, 5 torches, and 10 arrows. Write a function called countTotalItems() 
that returns how many items the player has in total. Have your main() function print the output of countTotalItems() 
as well as the number of torches.
*/

#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <array>

enum class Item
{
    HEALTH,
    TORCH,
    ARROW,
    MAX_ITEM
};

std::array<int,static_cast<int>(Item::MAX_ITEM)>  player{ };

void count_total_items(std::array<int, 3> &array)
{
    auto total_health{ std::reduce(array.begin(), array.end())};
    std::cout << "The player has total items " << total_health << '\n';

}


int main()
{
    
    player[static_cast<int>(Item::HEALTH)] = 2;
    player[static_cast<int>(Item::TORCH)] = 5;
    player[static_cast<int>(Item::ARROW)] = 10;

    count_total_items(player);

    std::cout << "Total number of torches " << player[static_cast<int>(Item::TORCH)] << '\n';


    return 0;
}
