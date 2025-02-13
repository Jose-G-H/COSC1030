//
// Jose Garcia
// 02/13/25
// Time Calculator Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
// Declare variables 
int Seconds;

// Declare constants
const double Seconds_in_minute = 60.0;
const double Seconds_in_hour = 3600.0;
const double Seconds_in_day = 86400.0;

// Get number of seconds from user 
cout << "Enter a number of seconds: ";
cin >> Seconds;

// If else statements to determine minutes, hours, or days

if (Seconds >= Seconds_in_minute)
{
double Minutes = Seconds / Seconds_in_minute;
cout << "There is " << Minutes << " minutes in " << Seconds << " seconds." << endl; 
}

if (Seconds >= Seconds_in_hour)
{
double Hours = Seconds / Seconds_in_hour;
cout << "There is " << Hours << " hours in " << Seconds << " seconds." << endl;
}

if (Seconds >= Seconds_in_day)
{
double Days = Seconds / Seconds_in_day;
cout << "There is " << Days << " days in " << Seconds << " seconds." << endl;
}

return 0;

}
