// Q1. Calculate the product of all the elements in the given array.
#include <iostream>
using namespace std;

int main()
{
    cout << "enter the size of the array: ";
    int n; // this is the size of the array.
    cin >> n;

    int arr[n];
    int x; // for input.
    int product = 1;

    for (int i = 0; i < n; i++)
    {
        cout << "enter the element: ";
        cin >> x;
        arr[i] = x;
    }

    for (int i = 0; i < n; i++)
    {
        product = product * arr[i];
    }

    cout << "Product of all elements = " << product << endl;

    return 0;
}
