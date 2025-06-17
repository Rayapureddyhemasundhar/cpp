/*sum of the digits all the digits(which are divisible by 2) between two given numbers*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, sum;
    cout << "enter the number a:";
    cin >> a;
    cout << "enter the number b:";
    cin >> b;
    sum = 0;
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }

    cout << sum;

    return 0;
}
