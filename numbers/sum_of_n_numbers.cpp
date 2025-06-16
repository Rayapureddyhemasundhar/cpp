// sum of n numbers

#include <iostream>
using namespace std;

int main()
{
    int n, sum;
    cout << "enter you number";
    cin >> n;
    sum = (n * (n + 1)) / 2;
    cout << "total sum is" << sum;

    return 0;
}