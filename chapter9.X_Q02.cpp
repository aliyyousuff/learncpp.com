/*
Question #2

Write the following program: Create a struct that holds a student’s first name and grade (on a scale of 0-100). 
Ask the user how many students they want to enter. Create a std::vector to hold all of the students. Then prompt 
the user for each name and grade. Once the user has entered all the names and grade pairs, sort the list by grade 
(highest first). Then print all the names and grades in sorted order.
For the following input:

Joe
82
Terry
73
Ralph
4
Alex
94
Mark
88

The output should look like this:

Alex got a grade of 94
Mark got a grade of 88
Joe got a grade of 82
Terry got a grade of 73
Ralph got a grade of 4
*/

#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <array>
#include <vector>

struct Student_s
{
    std::string first_name{ };
    int grade{ };
};

void clear_cin()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

std::vector<Student_s> input_student_data()
{
    int number_students{ };
    std::cout << "Enter the number of students ";
    std::cin >> number_students;
    clear_cin();

    std::vector<Student_s> students{};
    std::string student_name{ };
    int student_grade{ };

    for (std::size_t counter{ 0 }; counter < static_cast<unsigned int>(number_students); ++counter)
    {
        std::cout << "Enter the first name of the student: ";
        std::cin >> student_name;
        clear_cin();

        std::cout << "Enter the student grade: ";
        std::cin >> student_grade;
        clear_cin();

        students.push_back({student_name, student_grade});
    }
    return students;
}

bool compare_struct(const Student_s &student1, const Student_s &student2 )
{
    return student1.grade > student2.grade;
}

void sort_print(std::vector<Student_s> &student_data)
{
    std::sort(student_data.begin(), student_data.end(), compare_struct);

    for(auto student : student_data )
    {
        std::cout << student.first_name << " got a grade of " << student.grade << '\n';
    }
}


int main()
{
    std::vector<Student_s> s_data{ input_student_data() };

    sort_print(s_data);
    return 0;
}