#include <iostream>
using namespace std;

float calculateSI(float P, float R, float T)
{
    return (P * R * T) / 100;
}

int main()
{
    float P, R, T;
    cout << "Enter Principal: ";
    cin >> P;
    cout << "Enter Rate: ";
    cin >> R;
    cout << "Enter Time: ";
    cin >> T;

    float SI = calculateSI(P, R, T);
    cout << "Simple Interest = " << SI << endl;

    return 0;
}
