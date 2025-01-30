//
// Jose Garcia 
// 1/30/25
// Ocean Levels Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int main()

{
    
// Declare variables 

double Years_5, Years_7, Years_10;

// Declare constant sea rise

const double Ocean_rise = 1.5;

// calculate the sea level after x years

Years_5  = Ocean_rise * 5;
Years_7  = Ocean_rise * 7;
Years_10 = Ocean_rise * 10;

// Display the different ocean levels 

cout << "In 5 years the ocean sea level will rise " <<  Years_5 <<  " mm more than its current level." << endl;
cout << "In 7 years the ocean sea level will rise " <<  Years_7 <<  " mm more than its current level." << endl;
cout << "In 10 years the ocean sea level will rise " << Years_10 << " mm more than its current level." << endl;

return 0;

}

