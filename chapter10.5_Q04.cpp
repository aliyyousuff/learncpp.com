/*

4) A function named getIndexOfLargestValue() that takes an integer array 
(as a std::vector), and returns the index of the largest element in the array.

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

int get_index_of_largest_value(const std::vector<int> &vec)
{
    int max_index{ 0 };

    auto max_elem{ std::max_element(vec.begin(), vec.end())};

    for(size_t index{ 0 }; index < vec.size(); ++index)
    {
        if (*max_elem == vec[index])
        {
            max_index = static_cast< int>(index);
            break;
        }
    }
    return max_index;
}

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6};
    std::cout << get_index_of_largest_value(vec) << '\n';
    return 0;
}