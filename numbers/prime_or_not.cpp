/*prime number detection
im useing the point that "Except for 2, all prime numbers are odd and not divisible by 2."*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number :";
    cin >> n;
    bool isPrime = true;
    if (n <= 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    cout << isPrime << "=>" << "it mean";
    if (isPrime >> 0)
    {
        cout << " the enterd numner is a prime number";
    }
    else
    {
        cout << "the enterd number is not a prime number";
    }
    return 0;
}