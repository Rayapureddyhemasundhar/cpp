#include <iostream>
using namespace std;
// my 1st Pattern
int main()
{
    int n, mid;
    cout << "Enter your number: ";
    cin >> n;
    mid = n / 2 + 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == mid || j == mid)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
