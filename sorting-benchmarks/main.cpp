//
// Jose Garcia 
// 04/27/25
// Sorting Benchmarks Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

// Function prototypes 
void bubble_sort(int array[], int size, int &count);
void select_sort(int array[], int size, int &count);

int main()
{
    const int SIZE = 20;
    int array1 [SIZE] = {29, 10, 14, 37, 13, 5, 88, 6, 20, 33, 1, 60, 15, 8, 17, 55, 42, 3, 7, 12};
    int array2 [SIZE] = {29, 10, 14, 37, 13, 5, 88, 6, 20, 33, 1, 60, 15, 8, 17, 55, 42, 3, 7, 12};
    int bubble_count = 0, select_count = 0;

// sort array1 bubble sort 
bubble_sort(array1, SIZE, bubble_count);

// sort array2 selection sort
select_sort(array2, SIZE, select_count);

// display number of exchanges
cout << "Bubble Sort exchanges: " << bubble_count << endl;
cout << "Selection Sort exchanges: " << select_count << endl;

return 0;

}

// Bubble sort function 
void bubble_sort(int array[], int size, int &count)
{
    bool swapped;
    do
    {
        swapped = false;
        for (int i = 0; i < size - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = true;
                count++;
            }
        }
    } while (swapped);
}

// selection sort function
void select_sort(int array[], int size, int &count)
{
    int min_index, min_value;

    for (int start = 0; start < size - 1; start++)
    {
        min_index = start;
        min_value = array[start];
        for (int index = start + 1; index < size; index++)
        {
            if (array[index] < min_value)
            {
                min_value = array[index];
                min_index = index;
            }
        }
        // only swap if needs
        if (min_index != start)
        {
            int temp = array[start];
            array[start] = array[min_index];
            array[min_index] = temp;
            count++;
        }
    }
}