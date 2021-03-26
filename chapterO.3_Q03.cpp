/*
c) Write a line of code to clear the article as a favorite.
Expected output (Assuming you did quiz (a)):

00000001
*/

#include <cstdint>
#include <iostream>
#include <bitset>
#include <string>

int main()
{
    constexpr std::uint_fast8_t option_viewed{ 0x01 };
    constexpr std::uint_fast8_t option_edited{ 0x02 };
    constexpr std::uint_fast8_t option_favorited{ 0x04 };
    constexpr std::uint_fast8_t option_shared{ 0x08 };
    constexpr std::uint_fast8_t option_deleted{ 0x10 };
 
    std::uint_fast8_t myArticleFlags{ option_favorited };
    myArticleFlags |= option_viewed ;
    myArticleFlags ^= option_favorited;
 
    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    //std::cout <<  option_favorited << '\n';
 
    return 0;
}