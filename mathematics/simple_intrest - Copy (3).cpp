#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of people: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        float P, R, T, SI;
        cout << "\nPerson " << i << ":" << endl;
        cout << "Enter Principal: ";
        cin >> P;
        cout << "Enter Rate: ";
        cin >> R;
        cout << "Enter Time: ";
        cin >> T;

        SI = (P * R * T) / 100;
        cout << "Simple Interest = " << SI << endl;
    }

    return 0;
}
