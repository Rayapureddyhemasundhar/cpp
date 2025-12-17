#include <iostream>
using namespace std;

void input2D(int n, int m, int arr[][100])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
}

int main()
{
    int n, m;
    cout << "enter the dimensions of the 2d array:_";
    cin >> n;
    cout << "enter the dimensions of the 2d array:_";
    cin >> m;

    int arr[100][100];
    input2D(n, m, arr);

    int max = arr[0][0]; // Declare and initialize max

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }

    cout << "Maximum element: " << max << endl;
    return 0;
}
