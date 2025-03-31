//
// Jose Garcia
// 03/20/2025
// Temperatures
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;

//define type def for array of temps
typedef int temperature_array[50];

// fucntion prototypes
void get_temperatures(temperature_array temps, int size);
double get_average(temperature_array temps, int size);
int get_highest(temperature_array temps, int size);
int get_lowest(temperature_array temps, int size);

int main()
{
    //variable

    int num_of_temps;
    
    // Get number of temperatures from user
    do

    {
        cout << "Enter the number of Temperatures (MAX 50): ";
        cin >> num_of_temps;
    }
        while (num_of_temps < 1 || num_of_temps > 50);
    
        temperature_array temperatures; 

        // Get temperatures from user
        get_temperatures(temperatures, num_of_temps);

        // Calculate and display
        double avg_temp = get_average(temperatures, num_of_temps);
        int highest_temp = get_highest(temperatures, num_of_temps);
        int lowest_temp = get_lowest(temperatures, num_of_temps);

        cout << fixed << setprecision(2);
        cout << "\n  Temperature Report\n";
        cout << "______________________\n";
        cout << "\nAverage Temperature: " << avg_temp << "\n";
        cout << "Highest Temperature: " << highest_temp << "\n";
        cout << "Lowest Temperature: " << lowest_temp << "\n";

        return 0;
}

// func to input temps
void get_temperatures(temperature_array temps, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter temperature " << (i + 1) << ": ";
        cin >> temps[i];
    }
}

//func to calculate avg temp
double get_average(temperature_array temps, int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
        total += temps[i];
    return static_cast<double>(total) / size;
} 

//func to find highest temp
int get_highest(temperature_array temps, int size)
{
    int highest_temp = temps[0];
    for (int i = 1; i < size; i++)
    {
        if (temps[i] > highest_temp)
            highest_temp = temps[i];
    }
    return highest_temp;
}
// func to find lowest temp
int get_lowest(temperature_array temps, int size)
{
    int lowest_temp = temps[0];
    for (int i = 1; i < size; i++)
    {
        if (temps[i] < lowest_temp)
            lowest_temp = temps[i];
    }
    return lowest_temp; 
}
