//
// Jose Garcia
// 04/13/25
// Monthly Sales Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

//function prototypes
double yearly_total(double* sales, int size);
double average(double* sales, int size);

int main()
{
    int months;

    cout << "Please enter the number of months: ";
    cin  >> months;

    //memory allocation 
    double* sales = new double[months];

    //Input sales
    for (int i = 0; i < months; i++)
    {
            cout << "\nPlease enter the sales for month " << (i +1) << ": ";
            cin >> sales[i];
    }

    //Calc and disaply yearly total
    double total = yearly_total(sales, months);
    cout << "\nTotal sales of the year: " << total << endl;

    //calc and display average
    double avg = average(sales, months);
    cout << "Average sales: " << avg << endl;

    //Deallocate memeory 
    delete[] sales;
    
    return 0;
}

// Function to calculate total of sales 
double yearly_total(double* sales, int size)
{
    double sum = 0.0;
    for (int i = 0; i < size; i++)
    {
        sum += sales[i];
    }
    return sum;
}

// Function to calculate average sales
double average(double* sales, int size)
{
    double sum = yearly_total(sales, size);
    return sum / size;
}