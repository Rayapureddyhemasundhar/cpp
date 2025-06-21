// to find the 2nd largest element in the given array.
#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int pro = 1;
    int max, smax;

    cout << "give inputs for array: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    max = arr[0];

    for (int j = 0; j < 10; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
    }

    smax = arr[0];
    for (int k = 0; k < 10; k++)
    {
        if (arr[k] != max && arr[k] > smax)
        {
            smax = arr[k];
        }
    }

    cout << "largest number is: " << max << endl;
    cout << "2nd largest number is: " << smax << endl;

    return 0;
}
