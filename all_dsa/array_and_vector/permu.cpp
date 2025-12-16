#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = n - 2;

    // Step 1: find first decreasing element from right
    while (i >= 0 && arr[i] >= arr[i + 1])
    {
        i--;
    }

    // Step 2: if such element exists
    if (i >= 0)
    {
        int j = n - 1;

        // find element just larger than arr[i]
        while (arr[j] <= arr[i])
        {
            j--;
        }

        // swap them
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Step 3: reverse elements after index i
    int left = i + 1, right = n - 1;
    while (left < right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }

    // Print result
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

