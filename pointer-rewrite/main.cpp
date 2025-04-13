//
// Jose Garcia
// 04/13/25
// Pointer Rewrite Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

//function prototype
int doSomething(int *, int *);

int main()
{
    int x = 10, y = 2;

    cout << "Before calling the function:\n"
         << "x = " << x << endl
         << "y = " << y << endl << endl;

    cout << "The function returns "
         << doSomething(&x, &y) << endl;

    cout << "\nAfter calling the function:\n"
         << "x = " << x << endl
         << "y = " << y << endl;
    
    return 0;
}

int doSomething(int *x, int *y)
{
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}