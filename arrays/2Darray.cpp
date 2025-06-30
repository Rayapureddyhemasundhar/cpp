// takeing inpts and printing all those elements.
#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    // Taking number of rows and columns from the user
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Declaring a 2D array
    int arr[100][100]; // Assumes max 100x100, change as needed

    // Taking input for the 2D array
    cout << "Enter elements of the array:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Printing the 2D array
    cout << "\nThe 2D array is:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
