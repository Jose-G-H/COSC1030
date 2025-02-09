//
// Jose Garcia
// 02/09/2025
// Woody Furniture Company Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()

{

// Declare constants
const double american_Colonial_price = 85.00, modern_Price = 57.50, french_Classical_price = 127.75;

// Declare Variables
int    american_Colonial_sold,   modern_Sold,   french_Classical_sold;
double american_Colonial_income, modern_Income, french_Classical_income, all_Styles_income;

// Find out how many of each style of chairs were sold
cout << "How many American Colonial chairs were sold? ";
cin  >> american_Colonial_sold; 

cout << "How many Modern chairs were sold? ";
cin  >> modern_Sold; 

cout << "How many French Classical chairs were sold? ";
cin  >> french_Classical_sold;

// Calculate the dollar amount of sales of each style of chairs
american_Colonial_income = american_Colonial_sold * american_Colonial_price;
modern_Income            = modern_Sold            * modern_Price;
french_Classical_income  = french_Classical_sold  * french_Classical_price;

// Calculate the dollar amount of all styles of chairs
all_Styles_income = american_Colonial_income + modern_Income + french_Classical_income;

/* Display the total revenue from each style of chair and total revenue from all style chairs */
cout << fixed << setprecision(2); 
cout << "\nTotal revenue from American Colonial chairs: $" << american_Colonial_income << endl; 
cout << "Total revenue from Modern chairs:            $" << modern_Income << endl; 
cout << "Total revenue from French Classical chairs:  $" << french_Classical_income << endl; 
cout <<  "\nTotal revenue from all styles of chairs: $" << all_Styles_income << endl;
return 0;

}