/*
Question #6

e) Write a function named printDeck() that takes the deck as a const reference parameter and prints the cards in the deck. Use a range-based for-loop. 
When you can printDeck with the deck you generated in the previous task,

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

std::string create_card(const Card &card)
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
    return (rank + suit);
}

std::array<std::string, 52> create_dec()
{
    std::array<std::string, 52> dec{ };
    std::size_t array_index{ 0 };
    Card card_struct{ };

    for (auto i{ 0 }; i < 13; ++i )
    {
        for ( auto ii{ 0 }; ii < 4; ++ii)
        {
            card_struct.rank = static_cast<Card_rank>(i);
            card_struct.suit = static_cast<Card_suit>(ii);

            dec[array_index] = create_card(card_struct);
            ++array_index;
        }
    }

    return dec;
}

void print_dec(const std::array<std::string, 52> &dec)
{
     for (auto card : dec )
    {
        std::cout << card << ' ';
    }
}

int main()
{

    std::array<std::string, 52> dec{ create_dec() };

    print_dec(dec);
    std::cout << '\n';

    return 0;
}