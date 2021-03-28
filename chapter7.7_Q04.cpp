/*
Question #4
Now make the numbers print like this:
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
*/
#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>


int main()
{
    
    const int c_outer{ 10 };

    int outer{10};
    int space_counter{outer-1};
    int difference { outer - space_counter};

    while (outer > 0 )
    {

        while (space_counter > 0)
        {
            std::cout << "  ";
            --space_counter;
        }

        while ( difference > 0)
        {
            std::cout << " " << difference;
            --difference;
        }
    
        --outer;
        space_counter = outer -1;
        difference = c_outer - space_counter;

    std::cout << '\n';

    }

 
 return 0;
}
