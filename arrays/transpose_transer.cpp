#include <iostream>
// #include <vector> // Potentially if using std::vector<std::vector<int>>

int main()
{
    int m; // For matrix dimension (assuming square matrix)

    std::cout << "Enter the dimension of the square matrix (m): ";
    std::cin >> m;

    // Declare a 2D array (you could also use std::vector<std::vector<int>>)
    int arr[m][m]; // This is C99 feature (Variable Length Arrays) and not standard C++
                   // For standard C++, use dynamic allocation or std::vector.
                   // For simplicity here, assuming it compiles with VLA support.

    // Input elements of the matrix
    std::cout << "Enter the elements of the matrix (" << m << "x" << m << "):\n";
    for (int i = 0; i < m; i++)
    { // rows
        for (int j = 0; j < m; j++)
        { // columns
            std::cin >> arr[i][j];
        }
    }

    std::cout << "\nOriginal Matrix:\n";
    // Print Original Matrix (This part was partially visible/implied)
    for (int i = 0; i < m; i++)
    { // rows
        for (int j = 0; j < m; j++)
        { // columns
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\nTransposing the matrix...\n";

    // Transpose in the same matrix (in-place transpose)
    // The loop bounds in the image were `m-1`. If `m` is the size, then
    // 0 to `m-1` is correct. The image showed `j<m-1` and `i<m-1`.
    // It should be `i < m` and `j < m` for `m` sized array (0 to m-1 indices).
    // Let's correct it for proper 0-indexed array of size m.
    // The inner loop for j should start from i+1 to avoid redundant swaps and
    // to correctly transpose only the upper/lower triangle.
    for (int i = 0; i < m; i++)
    { // rows
        for (int j = i + 1; j < m; j++)
        { // columns (starts from i+1 for in-place transpose)
            // Swapping arr[i][j] and arr[j][i]
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    std::cout << "\nTransposed Matrix:\n";
    // Print Transposed Matrix
    // The loop bounds in the image were `m-1`. It should be `m` for a 0-indexed array of size `m`.
    for (int i = 0; i < m; i++)
    { // rows
        for (int j = 0; j < m; j++)
        { // columns
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}