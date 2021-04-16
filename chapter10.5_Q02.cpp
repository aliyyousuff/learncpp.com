/*
2) A function named printEmployeeName() that takes an Employee struct as input.

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

struct Employee
{
    std::string first_name{ };
    std::string last_name{ };
};

std::string print_employee_name(const Employee &employee)
{
   return  employee.first_name + " " + employee.last_name;
}

int main()
{
    Employee yousuf{ };
    yousuf.first_name = "MD YOUSUF";
    yousuf.last_name = "ALI";

    std::cout << print_employee_name(yousuf) << '\n';
    return 0;
}