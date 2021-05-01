/*

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

class HelloWorld
{
private:
	char *m_data{};
 
public:
	HelloWorld()
	{
		m_data = new char[14];
		const char *init{ "Hello, World!" };
		for (int i = 0; i < 14; ++i)
			m_data[i] = init[i];
	}
 
	~HelloWorld()
	{
        delete[] m_data;
	}
 
	void print() const
	{
		std::cout << m_data << '\n';
	}
};


int main()
{
    HelloWorld hello{};
    hello.print();

    return 0;
}
