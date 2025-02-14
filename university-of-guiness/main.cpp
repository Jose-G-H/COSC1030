//
// Jose Garcia
// 02/14/25
// University of Guiness Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
// Variables
string Residency;
double Tuition;
double Total_cost;
char Room_board;

// Declare constant variables
const int In_state_tuition_cost = 3000;
const int Out_state_tuition_cost = 4500;
const int In_state_room_cost = 2500;
const int Out_state_room_cost = 3500;

// User input for in or out of state tuition
while (true) 
{
cout << "\nPlease Answer the following questions" << endl;
cout << "\nWhat is your residential status?" << endl;
cout << "Using lowercase enter 'in state' or 'out state': ";
getline(cin, Residency);

// Determine if user input out of state or in state 
if (Residency == "in state" || Residency == "instate")
    {
        Tuition = In_state_tuition_cost;
        break;
    } 

else if (Residency == "out state" || Residency == "outstate")
    {
        Tuition = Out_state_tuition_cost;
        break;
    }

else 
    {
    cout << "\nInvalid residency status entered. Using lowercase please enter 'in state' or 'out state'.\n";
    }
}


// User input for room and board
while (true)
{
cout << "\nDo you need room and board?" << endl;
cout << "Please enter Y for yes or N for no: ";
cin  >> Room_board;

// Determine if user needs board and room. 
if (Room_board == 'y' || Room_board == 'Y')

{
if (Residency == "in state" || Residency == "instate") 
    {
        Total_cost = Tuition + In_state_room_cost;
    }     
else
    {
        Total_cost = Tuition + Out_state_room_cost;
    }
     break;
}

else if (Room_board == 'n' || Room_board == 'N')
    {
        Total_cost = Tuition;
        break;
    } 
    
else 
    {
        cout << "\nInvalid input entered. Please enter Y for yes or N for no.\n";
    }
}

//Display total cost of tuition
cout << fixed << setprecision(2); 
cout << "\nYour total tuition cost for the semester: $" << Total_cost << endl;
}