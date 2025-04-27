//
// Jose Garcia
// 04/27/25
// Dental Bill Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

// Function Prototypes
double calc_bill(double service_charge, double test_fee);
double calc_bill(double service_charge, double test_fee, double med_fee);

int main()
{
    char member;
    double service_charge, test_fee, med_fee, bill_total;

    cout << "Is the patient a member of the dental plan? (Y/N): ";
    cin  >> member;

    cout << "\nEnter the service charge: $";
    cin  >> service_charge;

    cout << "Enter the test fee: $";
    cin  >> test_fee;

    if (member == 'Y' || member == 'y')
    {
        bill_total = calc_bill(service_charge, test_fee);
    }
    else
    {
        cout << "Enter the medicine fee: $";
        cin  >> med_fee;
        bill_total = calc_bill(service_charge, test_fee, med_fee);   
    }

    cout << "\nBill Total: $" << bill_total << endl;

    return 0;
}

// members overloaded function
double calc_bill(double service_charge, double test_fee)
{
    return service_charge + test_fee;
}

// non-members overloaded fucntion
 double calc_bill(double service_charge, double test_fee, double med_fee)
 {
    return service_charge + test_fee + med_fee;
 }