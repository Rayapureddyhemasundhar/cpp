#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int m = n - 1; // number of new lines
    int nsp = 1;   // number of spaces

    for (int i = 1; i <= m; i++)
    {
        // numbers before spaces
        int a = 1;
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << a;
            a++;
        }

        // spaces in the middle
        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
            a++;
        }

        // numbers after spaces
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << a;
            a++;
        }

        nsp += 2; // increase spaces by 2 after each row
        cout << endl;
    }

    return 0;
}