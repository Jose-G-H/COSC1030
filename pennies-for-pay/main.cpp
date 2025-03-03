//
// Jose Garcia
// 3/2/2025
// Pennies for Pay Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() 

{

// Variables
int days_worked;
double total_pay = 0.0;

// Constants 
double salary = 0.01;

// Ask for input
cout << "Please enter the number of days worked: ";
cin  >> days_worked;

//make sure the number of days is at least 1
while (days_worked < 1)
{
    cout << "The number of days worked nust be at least 1.\n\nEnter the number of days again: ";
    cin  >> days_worked;
}

// Display table for salary of each day
cout << "\nDay\tSalary ($)\n";
cout << "-----------------\n";

//calculate daily salary and total pay
for (int day = 1; day <= days_worked; day++)
{
    cout << day << "\t" << fixed << setprecision(2) << salary << endl;

    total_pay += salary;
   
    salary    *= 2;
}

// Display the total pay 
cout << "\nTotal pay after " << days_worked << " days: $" 
     << fixed << setprecision(2) << total_pay << endl;

return 0;

}
