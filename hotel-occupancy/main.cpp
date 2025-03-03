//
// Jose Garcia
// 3/2/2025
// Hotel Occupancy Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int main () 

{

// Variables 
int floors, rooms, occupied_rooms;
int total_rooms = 0;
int total_occupied = 0;
int unoccupied_rooms = 0;
double occupancy_percentage = 0;

// Ask user for the number of floors
cout << "Please enter the amount of floors in the hotel: ";
cin  >> floors;

// make sure the nymber of floors is 1
while (floors < 1)
{
    cout << "\nThe number of floors must be at least 1";
    cin  >> floors;
}

// skip the 13th floor 
for (int floor = 1; floor <= floors; floor++) 
{
    if (floor == 13)
    {
        continue;
    }


 // ask user for the number of rooms on the floor
 cout << "\nPlease enter the number of rooms on floor " << floor << ": ";
 cin  >> rooms;

 // make sure the number of rooms is at least 10
    while (rooms < 10)
    {
        cout << "\nThe number of rooms must be at least 10\n";
        cout << "\nPlease enter the number of rooms on floor " << floor << ": ";
        cin  >> rooms;
    }

 // ask user for the number of occupied rooms
 cout << "\nPlease enter the number of occupied rooms on floor " << floor << ": ";
 cin  >> occupied_rooms;

 // make sure the number of rooms is not less or more than the total rooms 
    while (occupied_rooms < 0 || occupied_rooms > rooms)
    {
        cout << "\nThe number of occupied rooms cannot be 0 or more than total rooms. \n";
        cout << "\nPlease enter the number of occupied rooms on floor " << floor << ": ";
        cin  >> occupied_rooms;
    }
 
    // total count of rooms and occupied rooms
 total_rooms += rooms;
 total_occupied += occupied_rooms;
}

// calculate unnocupied rooms and occupency percentage
unoccupied_rooms     = total_rooms - total_occupied;
occupancy_percentage = (static_cast <double> (total_occupied) / total_rooms) * 100;

//display results
cout << "\n\nHotel Report\n";
cout << "\n-------------\n";
cout << "\nTotal rooms: " << total_rooms << endl;
cout << "\nOccupied rooms: " << total_occupied << endl;
cout << "\nUnoccupied rooms: " << unoccupied_rooms << endl;
cout << "\nOccupancy Percentage: " << occupancy_percentage << "%\n";

return 0;
}