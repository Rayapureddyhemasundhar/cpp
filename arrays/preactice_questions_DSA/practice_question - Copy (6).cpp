#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];
    }

    int missing = 1; // smallest positive number to look for

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == missing)
        {
            missing++; // found current number, move to next expected
        }
        else if (arr[i] > missing)
        {
            // first gap found
            break;
        }
    }

    cout << "The smallest missing positive number is: " << missing << endl;

    return 0;
}
