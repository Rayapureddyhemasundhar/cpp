#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int mat[m][n];

    // Input matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    cout << "Before transpose operation:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "After transpose of the matrix:" << endl;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
