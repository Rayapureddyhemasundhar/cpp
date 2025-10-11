// Q2. Find the second largest element in the given Array in one pass.
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

    // initialize largest and second largest
    int largestnum = arr[0];
    int secondlargest = -1e9; // very small number to start

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largestnum)
        {
            secondlargest = largestnum;
            largestnum = arr[i];
        }
        else if (arr[i] > secondlargest && arr[i] != largestnum)
        {
            secondlargest = arr[i];
        }
    }

    cout << "Second largest element: " << secondlargest << endl;

    return 0;
}
