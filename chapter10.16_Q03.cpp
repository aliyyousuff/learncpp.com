/*

Question #3


We’re going to write a little game with square numbers (numbers which can be created by multiplying an integer with itself (1, 4, 9, 16, 25, …)).
Ask the user to input 2 numbers, the first is the square root of the number to start at, the second is the amount of numbers to generate. Generate a 
random integer from 2 to 4, and square numbers in the range that was chosen by the user. Multiply each square number by the random number. You can assume 
that the user enters valid numbers.

The user has to calculate which numbers have been generated. The program checks if the user guessed correctly and removes the guessed number from the list. 
If the user guessed wrong, the game is over and the program prints the number that was closest to the user’s final guess, but only if the final guess was not 
off by more than 4.

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

namespace constant
{
    constexpr int random_min_range{ 2 };
    constexpr int random_max_range{ 4 };
    constexpr int off_range{ 4 };

}

// code credit: https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
int random_number_gen(const int min, const int max)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(min, max);

    return distrib(gen);
}

std::vector<int> square_generator(int start, int how_many)
{
    int random_number{ random_number_gen(constant::random_min_range, constant::random_max_range)};
    std::vector<int> square_cont{ };

    for (int counter{ 0 }; counter < how_many; ++counter)
    {
        square_cont.push_back( (start * start) * random_number ); 
        ++start;
    }
    return square_cont;
}

int guess_number_gen()
{
    int number{ };
    std::cout << "> ";
    std::cin >> number;

    return number;
}

void play_game()
{
    std::cout << "Start where? ";
    int start{ };
    std::cin >> start;

    ignore_line();

     std::cout << "How many? ";
    int how_many{ };
    std::cin >> how_many;

    ignore_line();


    std::vector<int> sq_con{ square_generator(start, how_many)};


    while(true )
    {
        int guess_number{ guess_number_gen() };

        auto found{ std::find(sq_con.begin(), sq_con.end(), guess_number)};

        auto close_number{ std::min_element(sq_con.begin(), sq_con.end(),

        [=](int a, int b){return (std::abs(a - guess_number) < std::abs(b - guess_number))  ;})};

        
    

        if ((found != std::end(sq_con)) && (sq_con.size() > 1))
        {
            std::cout << "Nice ";
            sq_con.erase(found);
            std::cout << sq_con.size() << " number(s) left.\n";
        }
        else if ((found != std::end(sq_con)) && (sq_con.size() == 1))
        {
            std::cout << "Nice! You found all numbers, good job!\n";
            break;
        }
        else 
        {
            std::cout << guess_number << " is wrong!";

            if( (close_number != std::end(sq_con)) && (std::abs(*close_number - guess_number ) <= constant::off_range))
            {
                std::cout << " Try " << *close_number << " next time.\n";
                break;
            }
            break;
        }
    }

}

int main()
{
   
    play_game();


    return 0;
}