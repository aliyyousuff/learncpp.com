/*
You are running a website, and you are trying to keep track of how much money you make per day from advertising. Declare an advertising struct 
that keeps track of how many ads you’ve shown to readers, what percentage of ads were clicked on by users, and how much you earned on average from 
each ad that was clicked. Read in values for each of these fields from the user. Pass the advertising struct to a function that prints each of the values, 
and then calculates how much you made for that day (multiply all 3 fields together).
*/

#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>

struct Advdata
{
    int number_of_ad_shown{ };
    double percent_clicked_by_user{ };
    double earn_from_each_ad{ };
};

void PrintResult(Advdata adata)
{
    std::cout << "Number of advs shown to users: " << adata.number_of_ad_shown << '\n';
    std::cout << "Percentage of ads clicked by users: " << adata.percent_clicked_by_user << '\n';
    std::cout << "Earning from from each adv that was clicked: " << adata.earn_from_each_ad << '\n';

    double total_earning{ ((adata.percent_clicked_by_user)/100.00) * adata.number_of_ad_shown *  adata.earn_from_each_ad };
    std::cout << "Total earning from of that day: " << total_earning << '\n'; 
}

int main()
{
    Advdata data{ };
    std::cout << "Please enter the following data\n";

    std::cout << " Number of advs shown to users: ";
    std::cin >> data.number_of_ad_shown;

    std::cout << "Percentage of ads clicked by users: ";
    std::cin >> data.percent_clicked_by_user;

    std::cout << "Earning from from each adv that was clicked: ";
    std::cin >> data.earn_from_each_ad;

    PrintResult(data);
 
	return 0;
}