#include <iostream>
using namespace std;
int main()
{
    cout << "enter the size of the array: ";
    int n; // this is the size of the array.
    cin >> n;
    cout << "enter the target element:";
    int t; // this is the target element.
    cin >> t;
    int arr[n];
    int x; // for input.
    for (int i = 0; i <= n; i++)
    {
        cout << "enter the elemnet";
        cin >> x;
        arr[i] = x;
    }
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == t)
        {
            cout << i << "true";
        }
        else
        {
            cout << "false";
        }
    }

    return 0;
}