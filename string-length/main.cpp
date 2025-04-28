//
// Jose Garcia
// 04/27/25
// String Length Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

// Function prototype 
int count_charac(const char *str);

int main()
{
    const int SIZE = 100;
    char input[SIZE];

    cout << "Enter a string: ";
    cin.getline(input, SIZE);

    int length = count_charac(input);

    cout << "\nThe string has " << length << " characters." << endl;

    return 0;
}

// Function to count characters in c string 
int count_charac(const char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}