#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // print decreasing spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // print n stars per row (you can change this to i for a triangle)
        for (int k = 1; k <= n; k++)
        {
            cout << "*";
        }

        // move to next line after printing each row
        cout << endl;
    }

    return 0;
}
