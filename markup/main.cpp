//
// Jose Garcia
// 03/16/2025
// Markup Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;

// Prototype
double calculate_retail (double, double);

int main()

{
    // Variables
    double wholesale;      //wholesale cost 
    double markup_percent; //markup percentage
    double retail;         //retail price

    // get items wholesale cost
    cout << "Please enter the item's wholesale cost: ";
    cin  >> wholesale;

    // get items markup percentage
    cout << "Please enter the items markup percetage: ";
    cin  >> markup_percent;

    // calcualate items retail price
    retail = calculate_retail (wholesale, markup_percent);

    //display retail price 
    cout << "The retail price is $" << setprecision(2) << fixed << retail << endl;

    return 0;
}
    //define calculate_retail
    double calculate_retail (double wholesale, double markup_percent)
    {
        return wholesale * (1 + markup_percent / 100);
    }