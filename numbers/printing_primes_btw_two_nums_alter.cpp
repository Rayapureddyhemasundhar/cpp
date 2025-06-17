// Printing prime numbers between given two numbers.
#include <iostream>
using namespace std;

int main()
{
    int st_num, end_num;
    cout << "Enter the starting number: ";
    cin >> st_num;
    cout << "Enter the ending number: ";
    cin >> end_num;

    for (int i = st_num; i <= end_num; i++)
    {
        if (i > 1)
        { // Only numbers greater than 1 can be prime
            bool isPrime = true;

            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime)
            {
                cout << i << " ";
            }
        }
    }

    return 0;
}
