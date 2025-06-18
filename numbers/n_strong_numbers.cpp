// finding n strong numbers and n as user input
#include <iostream>
using namespace std;

// Function to calculate factorial of a digit
int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; ++i)
    {
        fact *= i;
    }
    return fact;
}

// Function to check if a number is Strong
bool isStrong(int number)
{
    int sum = 0;
    int original = number;

    while (number > 0)
    {
        int digit = number % 10;
        sum += factorial(digit);
        number /= 10;
    }

    return sum == original;
}

int main()
{
    int n, count = 0, current = 1;

    cout << "Enter how many Strong numbers you want: ";
    cin >> n;

    cout << "First " << n << " Strong numbers are:\n";

    while (count < n)
    {
        if (isStrong(current))
        {
            cout << current << " ";
            count++;
        }
        current++;
    }

    cout << endl;
    return 0;
}
