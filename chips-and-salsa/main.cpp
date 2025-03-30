//
// Jose Garcia
// 03/20/25
// Chips and Salsa Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;


// fucntion protoypes
void get_sales (string names[], int sales[], int size);
int get_total(int array[], int size);
int largest_element(int array[], int size);
int smallest_element(int array[], int size);

int main()
{
    // Constant salsa types
    const int salsa_types = 5;

    // Array of salsa types
    string names [salsa_types] = {"mild", "medium", "sweet", "hot", "zesty"};

    // Array of sales of each salsa type
    int sales[salsa_types];

    // Number of jars sold
    int total_jars_sold;

    // Subscript of most sold salsa
    int most_sold;

    // Subscript of least sold salsa
    int least_sold;

    // Get number of jars sold of each type salsa
    get_sales(names, sales, salsa_types);

    // Get total sales & high/low selling products
    total_jars_sold = get_total(sales, salsa_types);
    most_sold = largest_element(sales, salsa_types);
    least_sold = smallest_element(sales, salsa_types);

    // Display sales report
    cout << endl << endl;
    cout << "     Salsa Sales Report \n\n";
    cout << "Name              Jars Sold \n";
    cout << "____________________________\n";
    
    // Display total sales, most sold, least sold
    cout << "\nTotal Sales:" << setw(15) << total_jars_sold << endl;
    cout << "High Seller: "  << names[most_sold] << endl;
    cout << "least Seller: "   << names[least_sold] << endl;

    return 0;

}

    /* 

    get_sales: Gets number of jars of each salsa type sold from user. 
    The names of array parameter holds the names of the slasas, 
    the sales array parmeter will hold the number sold of each correspoding 
    type of salsa.
   
    */
    void get_sales(string names[], int sales[], int size)
    {
        for (int type = 0; type < size; type++)
        {
            // Get number of jars sold
            cout << "How many jars of " << names[type]
                 << " salsa did we sell last month? ";
            cin  >> sales[type];

            // validate the input
            while (sales[type] < 0)
            {
                cout << "Jars sold must be 0 or more. please re-enter";
                cin  >> sales[type];
            }
        }
    }
    /*

    get_total: calculates and returns the total of the values 
    stored in the array passed to the function.

    */
    int get_total(int array[], int size)
    {
        int total = 0;

        for (int pos = 0; pos < size; pos++)
            total += array[pos];

        return total;
    }

    /*
    
    largest_element: Finds and returns the subscript of the
    array position holding the largest value in the array passed
    to the function

    */
   int largest_element(int array[], int size)
   {
        int index_of_largest = 0;

        for (int pos = 1; pos < size; pos++)
        {
            if (array[pos] > array[index_of_largest])
                index_of_largest = pos;
        }
        return index_of_largest;
   }
   
   /*
   
   smallest_element: Finds and returns the subscript of the array
   position holding the smallest value in the array passed
   to the function

   */
   int smallest_element(int array[], int size)
   {
        int index_of_smallest = 0;

        for (int pos = 1; pos < size; pos++)
        {
            if (array[pos] < array[index_of_smallest])
                index_of_smallest = pos;
        }
        return index_of_smallest; 
   }