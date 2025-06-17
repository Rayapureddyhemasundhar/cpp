#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is Armstrong
bool isArmstrong(int num)
{
    int original = num;
    int digits = 0;
    int temp = num;

    // Count number of digits
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    int sum = 0;
    temp = num;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

// Function to print Armstrong numbers in a range
void findArmstrongNumbers(int start, int end)
{
    cout << "Armstrong numbers between " << start << " and " << end << " are:\n";
    for (int i = start; i <= end; i++)
    {
        if (isArmstrong(i))
        {
            cout << i << endl;
        }
    }
}

// Main function
int main()
{
    int start, end;
    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;

    findArmstrongNumbers(start, end);

    return 0;
}
