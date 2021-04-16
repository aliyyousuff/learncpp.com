/*

5) A function named getElement() that takes an array of std::string (as a std::vector) 
and an index and returns the array element at that index (not a copy). Assume the index is 
valid, and the return value is const.

*/

#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <array>
#include <vector>
#include <string_view>

const std::string& get_element(const std::vector<std::string> &vec, const std::size_t index)
{
    return vec[index];
}

int main()
{
    std::vector<std::string> vec{"Catharine", "Elizabeth", "Krebs"};

    std::cout << get_element(vec, 2) << '\n';
    return 0;
}