/*
Question #6

b) Each card will be represented by a struct named Card that contains a rank 
and a suit. Create the struct.

c) Create a printCard() function that takes a const Card reference as a 
parameter and prints the card rank and suit as a 2-letter code (e.g. the 
jack of spades would print as JS).

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

void print_card(const Card &card)
{
    std::string rank{ };
    std::string suit{ };

    switch (card.rank)
    {
        case Card_rank::TWO:
            rank = "2";
            break;

        case Card_rank::THREE:
            rank = "3";
            break;

        case Card_rank::FOUR:
            rank = "4";
            break;

        case Card_rank::FIVE:
            rank = "5";
            break;

        case Card_rank::SIX:
            rank = "6";
            break;

        case Card_rank::SEVEN:
            rank = "7";
            break;

        case Card_rank::EIGHT:
            rank = "8";
            break;

        case Card_rank::NINE:
            rank = "9";
            break;

        case Card_rank::TEN:
            rank = "T";
            break;

        case Card_rank::JACK:
            rank = "J";
            break;

        case Card_rank::QUEEN:
            rank = "Q";
            break;
        
        case Card_rank::KING:
            rank = "K";
            break;

        case Card_rank::ACE:
            rank = "A";
            break;
        
        default:
            rank = "?";
            break;    
    }

    switch (card.suit)
    {
        case Card_suit::CLUB:
            suit = "C";
            break;
        
        case Card_suit::DIAMOND:
            suit = "D";
            break;
        
        case Card_suit::HEART:
            suit = "H";
            break;
        
        case Card_suit::SPADE:
            suit = "S";
            break;
        
        default:
            suit  = "?";
            break; 
    }
    std::cout << rank + suit;
}

int main()
{
    Card c1 {};
    c1.rank = Card_rank::JACK;
    c1.suit = Card_suit::SPADE;

    print_card(c1);
    std::cout << '\n';
    return 0;
}