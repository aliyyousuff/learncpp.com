/*

Question #1

Using the IntArray class above, implement an overloaded assignment operator that takes an initializer list.

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
#include <initializer_list>


class IntArray
{
private:
	int m_length{};
	int *m_data{};
 
public:
	IntArray() = default;
 
	IntArray(int length) :
		m_length{ length },
		m_data{ new int[length]{} }
	{
 
	}
 
	IntArray(std::initializer_list<int> list) : // allow IntArray to be initialized via list initialization
		IntArray(static_cast<int>(list.size())) // use delegating constructor to set up initial array
	{
		// Now initialize our array from the list
		int count{ 0 };
		for (auto element : list)
		{
			m_data[count] = element;
			++count;
		}
	}
 
	~IntArray()
	{
		delete[] m_data;
		// we don't need to set m_data to null or m_length to 0 here, since the object will be destroyed immediately after this function anyway
	}
 
	IntArray(const IntArray&) = delete; // to avoid shallow copies
	IntArray& operator=(const IntArray& list) = delete; // to avoid shallow copies
 
	int& operator[](int index)
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}
 
	int getLength() const { return m_length; }

    IntArray& operator=(std::initializer_list<int> list);
};

IntArray&  IntArray::operator= ( std::initializer_list<int> list)
{
    delete[] m_data;

    m_data = new int[list.size()];
    m_length = static_cast<int>(list.size());

    int count{ 0 };
    for (auto element : list )
    {
        m_data[count] = element;
        ++count;
    }
    return *this;
}
 
int main()
{
   IntArray array { 5, 4, 3, 2, 1 }; // initializer list
	for (int count{ 0 }; count < array.getLength(); ++count)
		std::cout << array[count] << ' ';
 
	std::cout << '\n';
 
	array = { 1, 3, 5, 7, 9, 11};
 
	for (int count{ 0 }; count < array.getLength(); ++count)
		std::cout << array[count] << ' ';
 
	std::cout << '\n';
 
	return 0;
}