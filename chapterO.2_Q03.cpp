/*
Extra credit: Redo quiz #2 but don't use the test and set functions.
*/

#include <cstdint>
#include <iostream>
#include <bitset>

std::string rotate_left2(std::bitset<4> bits)
{
  std::string bit_string2{ bits.to_string()};
  const std::string last_bit{bit_string2.at(0)};

  bits <<= 1;

  std::string bit_string2_1{ bits.to_string()};

  if (last_bit == "1")
  {
    bit_string2_1.replace(3,1,last_bit);
  }
  return bit_string2_1;
}
 
int main()
{
  std::bitset<4> bits1{ 0b0001 };
  std::bitset<4> bits2{ 0b1001 };
  
  std::cout << rotate_left2(bits1) << std::endl;
  std::cout << rotate_left2(bits2) << std::endl;

  return 0;
}