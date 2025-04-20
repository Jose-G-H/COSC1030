//
// Jose Garcia
// 04/20/25
// Backward String Programming Project
// COSC 1030
//

#include <iostream>
#include <cstring> 

using namespace std;

// Dcelare backward fucntion 
void backward(char *str);

int main()
{
    // Define array to hold input 
    const int SIZE = 80;
    char input[SIZE];

    // Get string from user
    cout << "Enter a string you want to be displayed backwards:\n";
    cout << "\n";
    cin.getline(input, SIZE);
    

    // Retrunr string backwards
    backward(input);
    
    return 0;
}

void backward(char *str)
{
    // Get last charcter of string
    int last = strlen(str) - 1;

    // Move through string backwards
    // Show each letter last to first
    for (int index = last; index >= 0; index--)
        cout << str[index];
    

    cout << endl;
}