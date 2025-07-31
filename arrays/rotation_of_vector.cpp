#include <iostream>
#include <vector>
using namespace std;

void print2DVector(const vector<vector<int>> &matrix)
{
    for (const auto &row : matrix)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}

vector<vector<int>> input2DVector(int rows, int cols)
{
    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter elements (" << rows * cols << " values):\n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

int main()
{
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    if (rows != cols)
    {
        cout << "Rotation requires a square matrix!" << endl;
        return 1;
    }

    vector<vector<int>> myMatrix = input2DVector(rows, cols);

    cout << "Original Matrix:\n";
    print2DVector(myMatrix);

    // Transpose
    for (int i = 0; i < rows; i++)
    {
        for (int j = i + 1; j < cols; j++)
        {
            swap(myMatrix[i][j], myMatrix[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < rows; i++)
    {
        int left = 0, right = cols - 1;
        while (left < right)
        {
            swap(myMatrix[i][left], myMatrix[i][right]);
            left++;
            right--;
        }
    }

    cout << "Rotated Matrix (90 degrees clockwise):\n";
    print2DVector(myMatrix);

    return 0;
}
