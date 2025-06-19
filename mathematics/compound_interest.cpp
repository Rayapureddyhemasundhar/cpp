// just using formula
#include <iostream>
#include <cmath> // for pow()
using namespace std;

int main()
{
    double P, R, T, CI, Amount;

    cout << "Enter Principal (P): ";
    cin >> P;
    cout << "Enter Rate of Interest (R%): ";
    cin >> R;
    cout << "Enter Time in years (T): ";
    cin >> T;

    Amount = P * pow((1 + R / 100), T);
    CI = Amount - P;

    cout << "Compound Interest = " << CI << endl;
    cout << "Total Amount = " << Amount << endl;

    return 0;
}
