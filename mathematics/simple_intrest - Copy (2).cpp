#include <iostream>
using namespace std;

int main()
{
    float P, R, T, SI, Amount;

    cout << "Enter Principal: ";
    cin >> P;
    cout << "Enter Rate of Interest: ";
    cin >> R;
    cout << "Enter Time (in years): ";
    cin >> T;

    SI = (P * R * T) / 100;
    Amount = P + SI;

    cout << "Simple Interest = " << SI << endl;
    cout << "Total Amount to Pay = " << Amount << endl;

    return 0;
}
