#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n < 2)
    {
        return 1;
    }
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int max = INT_MIN;
    int secondMax = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] < max)
        {
            secondMax = arr[i];
        }
    }
    cout << max << endl;
    if (secondMax == INT_MIN)
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << secondMax << endl;
    }
    return 0;
}