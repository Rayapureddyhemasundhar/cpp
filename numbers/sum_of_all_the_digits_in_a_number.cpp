// sum of all the digits in a number
#include <iostream>
using namespace std;

int main()
{
    int num, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> num;
    int original = num;

    while (num != 0)
    {
        digit = num % 10;
        sum += digit;
        // in 16th line it reduce the number each time by one diigt
        num = num / 10;
    }

    cout << "Sum of digits of " << original << " is: " << sum << endl;

    return 0;
}
