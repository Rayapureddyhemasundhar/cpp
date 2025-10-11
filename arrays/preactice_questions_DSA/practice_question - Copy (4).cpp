// Q3. Find the minimum value out of all elements in the array.
#include <iostream>
using namespace std;

int main()
{
    cout << "enter the size of the array: ";
    int n; // this is the size of the array.
    cin >> n;

    int arr[n];
    int x; // for input.

    for (int i = 0; i < n; i++)
    {
        cout << "enter the element: ";
        cin >> x;
        arr[i] = x;
    }

    int currentnum = arr[0];
    int smallestnum = arr[0]; // start with first element as smallest

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < currentnum) // change > to < to find minimum
        {
            smallestnum = arr[i];
            currentnum = smallestnum;
        }
    }

    cout << "Smallest element: " << smallestnum << endl;

    return 0;
}
