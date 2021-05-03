/*

A map is a class that stores elements as a key-value pair. The key must be unique, and is used to access the associated pair. 
In this quiz, we’re going to write an application that lets us assign grades to students by name, using a simple map class. 
The student’s name will be the key, and the grade (as a char) will be the value.
a) First, write a struct named StudentGrade that contains the student’s name (as a std::string) and grade (as a char).

b) Add a class named GradeMap that contains a std::vector of StudentGrade named m_map.

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


struct StudentGrade
{
    std::string student_name{ };
    char grade{ };
};

class GradeMap
{
    private:
        std::vector<StudentGrade> m_map{ };
    
};

int main()
{

 
  return 0;
}