#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int nst = 1;     // number of stars
    int nsp = n - 1; // number of spaces

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        // print spaces
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }

        // print stars
        for (int k = 1; k <= nst; k++)
        {
            cout << "*";
        }

        // move to next line
        cout << endl;

        // update nst and nsp
        if (i < n)
        {
            nst += 2;
            nsp--;
        }
        else
        {
            nst -= 2;
            nsp++;
        }
    }

    return 0;
}
