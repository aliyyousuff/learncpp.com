/*

2) Write a class named Average that will keep track of the average of all integers passed to it. Use two members: 
The first one should be type std::int_least32_t, and used to keep track of the sum of all the numbers you’ve seen so far. 
The second should be of type std::int_least8_t, and used to keep track of how many numbers you’ve seen so far. You can divide 
them to find your average.

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
#include <functional>
#include <cmath>
#include <random>
#include <cassert>
#include <cstdint>
#include <cstring>

class Average
{
    private:
        std::int_least32_t m_sum{ };
        std::int_least8_t m_num{ };

    public:
        Average(std::int_least32_t sum = 0, std::int_least8_t num = 0)
        : m_sum{ sum }, m_num{ num }
        {

        }

        Average& operator+=(int num)
        {
            m_sum += num;
            ++m_num;
            return *this;
        }

        double get_average()
        {
            return (m_sum / static_cast<double>(m_num));
        }

        friend std::ostream& operator<<(std::ostream &out, Average& avg);
};

std::ostream& operator<<(std::ostream &out, Average& avg)
{
    out << avg.get_average();
    return out;
}


int main()
{
    Average avg{};
	
	avg += 4;
	std::cout << avg << '\n'; // 4 / 1 = 4
	
	avg += 8;
	std::cout << avg << '\n'; // (4 + 8) / 2 = 6

    avg += 24;
	std::cout << avg << '\n'; // (4 + 8 + 24) / 3 = 12
 
	avg += -10;
	std::cout << avg << '\n'; // (4 + 8 + 24 - 10) / 4 = 6.5
 
	(avg += 6) += 10; // 2 calls chained together
	std::cout << avg << '\n'; // (4 + 8 + 24 - 10 + 6 + 10) / 6 = 7
 
	Average copy{ avg };
	std::cout << copy << '\n';

    return 0;
}
