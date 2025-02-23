//
// Jose Garcia
// 02/23/25
// Beverages Survey Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() 

{
// Declare variables

int bev_choice;
int coffee_choice = 0, tea_choice = 0, coke_choice = 0, orange_juice_choice = 0;

//Display the choices

cout << "Select your favorite beverage from the choices below:\n\n";
cout << "1. Coffee\n";
cout << "2. Tea\n";
cout << "3. Coke\n";
cout << "4. Orange Juice\n";
cout << "\nEnter -1 to end the survey.\n";

//Loop for termination and beverage choice

while (true)
{
    cout << "\nEnter your choice: ";
    cin  >> bev_choice;

        if (bev_choice == -1)
        {
        break; 
        } 

//Process Bev choice 

    switch (bev_choice) 
    {
        case 1:
            coffee_choice++;
            break;

        case 2:
            tea_choice++;
            break;

        case 3:
            coke_choice++;
            break;
        
        case 4:
            orange_juice_choice++;
            break;

      default: 
        cout<< "Invalid choice entered. Select a number between 1 and 4.\n";
    }
}

// Display the results 

cout << "\nSurvey Results.\n";
cout << "\nCoffee: "   << coffee_choice << " votes\n";
cout << "Tea: "        << tea_choice    << " votes\n";
cout << "Coke: "       << coke_choice   << " votes\n";
cout << "Orange Juice: " << orange_juice_choice << " votes\n";

return 0;
}