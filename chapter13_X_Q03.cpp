/*

Write your own integer array class named IntArray from scratch (do not use std::array or std::vector). 
Users should pass in the size of the array when it is created, and the array should be dynamically allocated. 
Use assert statements to guard against bad data. 

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

class IntArray
{
    private:
        int m_length{ };
        int* m_data{ };

    public:
        IntArray(int length) : m_length{ length}
        {
            assert(m_length >0 && "Lenght of the array must be greater than 0");
            m_data = new int[length];
        }
        //subscript operator[] overloading
        int& operator[] (int index);
        void deepcopy(const IntArray &source);

        // copy constructor
        IntArray(const IntArray &copy);

        // Assignment operator overloading
        IntArray& operator= (const IntArray &source);

        // Output operator<< overloading.
        friend std::ostream& operator<< (std::ostream &out, const IntArray& ar);

        // Destructor: to clean up the dynamically allocated memory.
        ~IntArray()
        {
            delete[] m_data;
        }

};

int& IntArray::operator[] (int index)
{
    assert(index >= 0 && index < IntArray::m_length);
    return m_data[index];
}

std::ostream& operator<< (std::ostream& out, const IntArray& ar)
{
    for (int i{ 0 }; i < ar.m_length; ++i)
    {
        out << ar.m_data[i] << " ";
    }
    return out;
}

void IntArray::deepcopy(const IntArray& source)
{   
    // clean up any exisiting data
    delete[] m_data;

    m_length = source.m_length;
    
    if (source.m_data)
    {
        // Allocate memory
        m_data = new int[m_length];

        // Copying the data into newly allocated memory
        for(int i{ 0 }; i < m_length; ++i)
        {
            m_data[i] = source.m_data[i];
        }
    }
    else
    {
        m_data  = nullptr;
    }
}

IntArray& IntArray::operator= (const IntArray &source)
{
    if (this != &source)
    {
        deepcopy(source);
    }
    return *this;
}

IntArray::IntArray(const IntArray& source )
{
    deepcopy(source);
}


IntArray fillArray()
{
	IntArray a(5);
 
	a[0] = 5;
	a[1] = 8;
	a[2] = 2;
	a[3] = 3;
	a[4] = 6;
 
	return a;
}

int main()
{
    IntArray a{ fillArray() };

    std::cout << a << '\n';

    auto &ref{ a };
    a = ref;

    IntArray b{ 1 };
    b = a;

    std::cout << b << '\n';

    return 0;
}