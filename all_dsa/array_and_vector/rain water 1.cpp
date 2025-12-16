#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int x;
    vector<int> arr;

    cout << "enter the size od the vector :_";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "enter the input of " << i << " element:_";
        cin >> x;
        arr.push_back(x);
    }

    vector<int> prev(n);
    vector<int> next(n);

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        prev[i] = max;
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    max = arr[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        next[i] = max;
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    vector<int> mini(n);
    for (int i = 0; i < n; i++)
    {
        if (prev[i] < next[i])
        {
            mini[i] = prev[i];
        }
        else
        {
            mini[i] = next[i];
        }
    }

    int water = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini[i])
        {
            water = water + (mini[i] - arr[i]);
        }
    }

    cout << water;
    return 0;
}
