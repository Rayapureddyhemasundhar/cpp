/* code to find that the enterd number is a magic number or not.
and A magic number is a number that eventually reduces to 1 when you repeatedly sum the digits of the number until a single digit is obtained, and that single digit is 1.*/
#include <iostream>
using namespace std;

int digit, n, sum = 0; // Global variables

void digisum(int num)
{
    digit = num % 10;
    sum = sum + digit;
    n = num / 10; // update n to continue loop
}

int main()
{
    cout << "Enter the number: ";
    cin >> n;

    while (n >= 10)
    {            // repeat until we get a single-digit
        sum = 0; // reset sum each time
        while (n > 0)
        {
            digisum(n); // uses global n updated in function
        }
        n = sum; // now update n to be sum for next round
    }

    cout << "Sum of digits: " << sum << endl;

    if (sum == 1)
        cout << "It is a Magic Number!" << endl;
    else
        cout << "It is NOT a Magic Number." << endl;

    return 0;
}
