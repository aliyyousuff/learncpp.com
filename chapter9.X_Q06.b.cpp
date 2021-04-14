/*
Question #6

b) Each card will be represented by a struct named Card that contains a rank 
and a suit. Create the struct.

*/

#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <array>
#include <vector>

enum class Card_rank
{
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE 
};

enum class Card_suit
{
    CLUB,
    DIAMOND,
    HEART,
    SPADE 
};

struct Card
{
    Card_rank rank{ };
    Card_suit suit{ };
};

int main()
{
  double d{ 5.5 };
  double* ptr{ &d };
  std::cout << ptr << '\n';
 
  return 0;
}