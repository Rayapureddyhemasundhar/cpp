#include <iostream>
using namespace std;

int main()
{
    float P, R, T, SI;

    cout << "Enter Principal (P): ";
    cin >> P;
    cout << "Enter Rate of Interest (R): ";
    cin >> R;
    cout << "Enter Time in years (T): ";
    cin >> T;

    SI = (P * R * T) / 100;

    cout << "Simple Interest = " << SI << endl;

    return 0;
}
