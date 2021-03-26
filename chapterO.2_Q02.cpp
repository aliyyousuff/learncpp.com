/*
A bitwise rotation is like a bitwise shift, except that any bits shifted off one end are added back to the other end. 
For example 0b1001 << 1 would be 0b0010, but a left rotate by 1 would result in 0b0011 instead. Implement a function that does a left rotate on a 
std::bitset<4>. For this one, it's okay to use test() and set().
input:  0001
output: 0010
*/

#include <cstdint>
#include <iostream>
#include <bitset>

std::bitset<4> rotate_left(std::bitset<4> bits)
{
  const bool last_bit{ bits.test(3)};

  bits <<= 1;
  if (last_bit)
  {
    bits.set(0);
    return bits;
  }

  return bits;
}
 
int main()
{
  std::bitset<4> bits1{ 0b0001 };
  std::bitset<4> bits2{ 0b1001 };
  std::cout << rotate_left(bits1) << std::endl;
  std::cout << rotate_left(bits2) << std::endl;
  return 0;
}