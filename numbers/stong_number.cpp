#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; ++i)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num, digit, addition = 0;

    cout << "Enter the number: ";
    cin >> num;

    int original = num; // Store the original number

    while (num > 0)
    { // Fix: Use > instead of <=
        digit = num % 10;
        addition += factorial(digit);
        num /= 10;
    }

    cout << "Sum of factorials of digits: " << addition << endl;

    if (addition == original)
        cout << original << " is a Strong Number." << endl;
    else
        cout << original << " is NOT a Strong Number." << endl;

    return 0;
}
