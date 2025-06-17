#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num, originalNum, digit, sum = 0;
    vector<int> cubeArray; // To store cubes of digits

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num; // Save original number

    // Step 1: Separate digits and store cubes
    while (num > 0)
    {
        digit = num % 10;                 // Get last digit
        int cube = digit * digit * digit; // Cube it
        cubeArray.push_back(cube);        // Store in array
        sum += cube;                      // Add to sum
        num /= 10;                        // Remove last digit
    }

    // Step 2: Print the cubes
    cout << "Cubes of digits: ";
    for (int c : cubeArray)
    {
        cout << c << " ";
    }
    cout << endl;

    // Step 3: Compare with original number
    if (sum == originalNum)
    {
        cout << originalNum << " is equal to the sum of cubes of its digits." << endl;
    }
    else
    {
        cout << originalNum << " is NOT equal to the sum of cubes of its digits." << endl;
    }

    return 0;
}
