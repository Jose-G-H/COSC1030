//
// Jose Garcia
// 02/09/2025
// Stadium Seating Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()

{

//Constats
const double class_A_price = 15.00, class_B_price = 12.00, class_c_price = 9.00;
//Declare variables
int   class_A_seats,  class_B_seats,  class_C_seats;
double seats_A_income, seats_B_income, seats_C_income, income_Generated;

//How many of each seats were sold
cout << "How many class A seats were sold? ";
cin  >> class_A_seats;

cout << "How many class B seats were sold? ";
cin  >> class_B_seats;

cout << "How many class C seats were sold? ";
cin  >> class_C_seats;

//Calculate the price of the seats
seats_A_income = class_A_seats * class_A_price;

seats_B_income = class_B_seats * class_B_price;

seats_C_income = class_C_seats * class_c_price;

income_Generated = seats_A_income + seats_B_income + seats_C_income;

//Display the income generated from ticket sales
cout << fixed << setprecision(2) << "Income generated from ticket sales: $" << income_Generated << endl;
return 0;

}