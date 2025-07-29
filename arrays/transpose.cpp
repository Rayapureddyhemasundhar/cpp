#include <iostream>
using namespace std;

int main()
{
    // Taking user input for matrix dimensions
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    int arr[m][n];

    // Input matrix elements
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Print original matrix
    cout << "Original Matrix:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Print transpose of the matrix
    cout << "Transpose of the Matrix:\n";
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
