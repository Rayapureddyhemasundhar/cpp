// Q4. Given an array, predict if the array contains duplicates or not.

#include <iostream>
using namespace std;

int main()
{
    cout << "enter the size of the array: ";
    int n; // this is the size of the array.
    cin >> n;
    int arr[n];
    int x;                // for input.
    bool isthere = false; // corrected initialization (was -1)

    for (int i = 0; i < n; i++) // changed <= n to < n (to avoid out of bounds)
    {
        cout << "enter the element: ";
        cin >> x;
        arr[i] = x;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                cout << "at index: " << i << " true" << endl;
                isthere = true; //
            }
        }
    }

    if (isthere == false)
    {
        cout << "false";
    }

    return 0;
}
