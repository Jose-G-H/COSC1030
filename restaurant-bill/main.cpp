//
// Jose 
// 1/30/25
// Restaurant Bill Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int main()

{

// Variable declarations
double sub_Total, Total, tip_Amount, sales_Tax;

// Constants for the tax rate and tip percentage
const double tax_Rate    = 0.0675;
const double tip_Percent = 0.20;

// Get the amount of the purchase.
sub_Total  = 88.67;

// Calculate the sales tax.
sales_Tax  = sub_Total * tax_Rate;

// Calculate the tip.
tip_Amount = sub_Total * tip_Percent;

// Calculate the total of the sale.
Total = tip_Amount + sales_Tax + sub_Total;

// Print information about the sale.
cout << "Meal: "  << sub_Total  << endl;
cout << "Tax: "   << sales_Tax  << endl;
cout << "Tip: "   << tip_Amount << endl;
cout << "Total: " << Total << endl;
return 0;

}