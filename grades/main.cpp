//
// Jose Garcia
// 03/16/25
// Grades Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

//prototypes
void calculate_average (int sum, int count, double &average);
char determine_letter  (double average);

int main() 

{
    //variables
    int amt_grades;
    int sum = 0;
    int grade;
    double average;

    // get number amount of grades
    cout << "Please enter the amount of grades: ";
    cin  >> amt_grades;
    cout << "\n";

    //read the input of grades
    for (int i = 0; i < amt_grades; i++)
    {
        cout << "Please enter the grade for grade " << (i + 1) << ": ";
        cin  >> grade;
        sum += grade;
    }

    //calculate the average and pass by refernce
    calculate_average (sum, amt_grades, average);

    cout << "\nAverage grade: " << average << endl;
    cout << "Letter grade: " << determine_letter (average) << endl;

    return 0;
}

// calculate average function, pass by ref
void calculate_average (int sum, int count, double &average)
{
    average = static_cast < double > (sum) / count;
}

//determine letter grade fucntion 
char determine_letter  (double average)
{
    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}