#include <iostream>

using namespace std;

int main()
{
    //cout.setf(ios::fixed);
    //cout.setf(ios::showpoint);
    //cout.precision(2);

    double price = 80 * 10/100;

    cout << "The price minus the descont without format is: " << price << endl;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "The price minus the descont with format is: " << price << endl;
}