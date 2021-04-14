/*
Question #6


Let’s pretend we’re writing a card game.
a) A deck of cards has 52 unique cards (13 card ranks of 4 suits). 
Create enumerations for the card ranks (2, 3, 4, 5, 6, 7, 8, 9, 10, 
Jack, Queen, King, Ace) and suits (clubs, diamonds, hearts, spades). 
Those enumerators will not be used to index arrays.

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

int main()
{
  double d{ 5.5 };
  double* ptr{ &d };
  std::cout << ptr << '\n';
 
  return 0;
}