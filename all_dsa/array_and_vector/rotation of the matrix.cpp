#include <iostream>
using namespace std;

int m, n;

// Function to input the matrix
void input(int mat[][100])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
}

// Function to print transpose (used for rotation)
void transpose(int mat[][100])
{
    for (int j = 0; j < n; j++)
    { // iterate over columns
        for (int i = m - 1; i >= 0; i--)
        {                             // iterate over rows from bottom to top
            cout << mat[i][j] << " "; // print element
        }
        cout << endl;
    }
}

int main()
{
    cin >> m >> n;
    int mat[100][100]; // fixed size

    // Input matrix
    input(mat);

    cout << "Before rotation of the matrix:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "After rotation of the matrix:" << endl;
    transpose(mat); // print rotated matrix

    return 0;
}
