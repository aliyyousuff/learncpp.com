/*

binary search implementation (iterative version): version 01

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

void ignore_line()
{
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

class IntPair
{
    public:
        int m_int1{ };
        int m_int2{ };

        void set(int n1, int n2)
        {
            m_int1 = n1;
            m_int2 = n2;
        }

        void print()
        {
            std::cout << "Pair(" << m_int2 <<", " << m_int2 << ")" << '\n';
        }
};

int main()
{

    IntPair p1{};

    p1.set(1, 1);
    IntPair p2{ 2, 2 };
 
	p1.print();
	p2.print();
    return 0;
}