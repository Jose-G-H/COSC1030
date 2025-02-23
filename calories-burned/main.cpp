//
// Jose Garcia
// 02/23/25
// Calories Burned Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int main() 

{

// Name constants
const double calories_per_minute = 3.9;

//Name variables 
int minutes;
double total_calories;

// Calculate calories burned and display 
for (minutes = 10; minutes <= 30; minutes +=5)

{
total_calories = calories_per_minute * minutes;
cout << "You burned " << total_calories << " calories after " << minutes << " minutes\n\n" ;
}

return 0;

}