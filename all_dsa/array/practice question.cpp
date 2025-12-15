#include <iostream>
#include <limits.h>
using namespace std;
int flag;
int main()
{
    int n;
    int target;

    cout << "enter the size of the array";
    cin >> n;

    cout << "enter the target element:_";
    cin >> target;

    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cout << "enter the inpuut element :_";
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if ((arr[i] + arr[j]) == target)
            {
                cout << "(" << arr[i] << "," << arr[j] << ")";
                int flag = 1;
            }
        }
    }
    if (flag != 1)
    {
        cout << "no such pair found";
    }

    return 0;
}