/*
Let’s write a class that implements a simple stack from scratch.

The class should be named Stack, and should contain:
* A private fixed array of integers of length 10.
* A private integer to keep track of the size of the stack.
* A public member function named reset() that sets the size to 0.
* A public member function named push() that pushes a value on the stack. push() should return false if the array is already full, and true otherwise.
* A public member function named pop() that pops a value off the stack and returns it. If there are no values on the stack, the code should exit via an assert.
* A public member function named print() that prints all the values in the stack.

Make sure the following program executes correctly:

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

void ignore_line()
{
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

class Stack
{
    int m_array[10];
    long int m_length{ std::ssize(m_array)};

    public:
        void reset()
        {
            m_length = 0;
            //m_array[0];
        }

        bool push(int element)
        {
            if (m_length < std::ssize(m_array) )
            {
                m_array[m_length] = element;
                m_length += 1;
                return true;
            }
            else
            {
                return false;
            }
        }

        void pop()
        {
            assert(m_length > 0 && "Whoops! there are no elements in the stack\n");
            m_length = m_length -1;
            for (int i{ 0 }; i < (m_length - 1); ++i)
            {
                m_array[i] = m_array[i];
            }

        }

        void print()
        {
            std::cout << "( ";
            for( int i = 0; i < m_length; ++i)
            {
                std::cout << " " << m_array[i]  ;
            }
            std::cout << " )";
            std::cout << "\n";
        }
};


int main()
{
    Stack stack;
    stack.reset();
    stack.print();


    stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();

    stack.pop();
	stack.print();
 
	stack.pop();
	stack.pop();
 
	stack.print();

    
    return 0;
}