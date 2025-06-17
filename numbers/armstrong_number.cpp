// checking the given number is an armstrong  number or not.
#include <iostream>
using namespace std;

int main()
{
    int num, originalNum, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num; // Store the original number

    while (num > 0)
    {
        digit = num % 10;                    // Get last digit
        sum = sum + (digit * digit * digit); // Add cube of digit
        num = num / 10;                      // Remove last digit
    }

    // Check if the sum of cubes equals the original number
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
