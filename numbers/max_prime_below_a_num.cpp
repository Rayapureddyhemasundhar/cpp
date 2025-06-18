#include <iostream>
using namespace std;

/*Function to check if a number is prime.
i * i <= num is mathematically equivalent to i <= √num*/

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = -1;
    for (int i = n - 1; i >= 2; --i)
    {
        if (isPrime(i))
        {
            result = i;
            break;
        }
    }

    if (result != -1)
        cout << "Greatest prime number less than " << n << " is: " << result << endl;
    else
        cout << "No prime number less than " << n << endl;

    return 0;
}
