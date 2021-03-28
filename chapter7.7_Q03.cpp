/*
Question #3


Invert the nested loops example so it prints the following:
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
*/
#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>


int main()
{
    //auto start = std::chrono::high_resolution_clock::now();

    int outer{10};
    int inner{10};

    while (outer >= 1)
    {
        while (inner >= 1 )
        {
            std::cout << inner <<" ";
            --inner;
        }
        std::cout << '\n';
        --outer;
        inner = outer;
    }


    //auto stop = std::chrono::high_resolution_clock::now();
    //auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    //std::cout << "Time taken by program: " << duration.count() << " microseconds" << std::endl;
 
	return 0;
}
