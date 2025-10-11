// linear search in cpp
// You are given an array of integers and a target element x.
// Your task is to determine if the target element x is present in the given array.
// If the element is found, print "true", otherwise print "false"

#include <iostream>
using namespace std;

int main()
{
    cout << "enter the size of the array: ";
    int n; // this is the size of the array.
    cin >> n;

    cout << "enter the target element: ";
    int t; // this is the target element.
    cin >> t;

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
        if (arr[i] == t)
        {
            cout << "at index: " << i << " true" << endl;
            isthere = true; // fixed scoping issue
        }
    }

    if (isthere == false)
    {
        cout << "false";
    }

    return 0;
}
