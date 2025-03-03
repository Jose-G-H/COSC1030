//
// Jose Garcia 
// 3/2/25
// Change for a Dollar Game Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int main()

{

// variables 
int quarters, dimes, nickles, pennies;
double total;

// constants
const double quarter_worth = 0.25;
const double dime_worth    = 0.10;
const double nickle_worth  = 0.05;
const double penny_worth   = 0.01;
const double one_dollar_worth = 1.00;

// Ask user for input
cout << "Enter the number of pennies: ";
cin  >> pennies;

cout << "\nEnter the number of nickles: ";
cin  >> nickles;

cout << "\nEnter the number of dimes: ";
cin  >> dimes;

cout << "\nEnter the number of quarters: ";
cin  >> quarters;

// Calculate user input
total = (quarters * quarter_worth) + (dimes * dime_worth) 
        + (nickles * nickle_worth) + (pennies * penny_worth);

// figure out if the total is a dollar

if (total == one_dollar_worth) 
{
    cout << "\nCongratulations! You entered exactly 1 dollar, You win!";
} 
else if (total < one_dollar_worth)
{
    cout << "\nThe amount you entered was less than 1 dollar.";
}
else 
{
    cout << "\nThe amount you entered was more than 1 dollar.";
}
}

