// this code is to find that the given number is a palindrome or not
//  This code is to find whether the given number is a palindrome or not
#include <iostream>
using namespace std;

int main()
{
    int num, original, digit, reverse = 0;

    cout << "Enter the number to check: ";
    cin >> num;

    original = num;

    while (num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (original == reverse)
    {
        cout << "Yes, the entered number is a palindrome." << endl;
    }
    else
    {
        cout << "No, the entered number is not a palindrome." << endl;
    }

    return 0;
}
