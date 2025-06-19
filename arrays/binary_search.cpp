// taking input and performing binary search
#include <iostream>
#include <algorithm> // for sort()
using namespace std;

int main()
{
    int n, key;

    // Step 1: Input array size
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Step 2: Input array elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Step 3: Sort the array (Binary Search requires sorted array)
    sort(arr, arr + n);

    // Step 4: Input key to search
    cout << "Enter the element to search: ";
    cin >> key;

    // Step 5: Binary Search
    int low = 0, high = n - 1;
    bool found = false;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            cout << "Element found at index (0-based): " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (!found)
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
