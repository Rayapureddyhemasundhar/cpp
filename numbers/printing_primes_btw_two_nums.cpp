// printing all the proime numbers between the two numbers;
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    { // or use i <= sqrt(n)
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int start, end;

    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are:\n";

    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }

    cout << endl;
    return 0;
}