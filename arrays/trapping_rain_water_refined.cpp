// best code to slove trapping rain water.
#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int> &height)
{
    int n = height.size();

    // prev greatest element array.
    vector<int> prev(n, 0);
    prev[0] = height[0];
    int max = height[0];
    for (int i = 1; i < n; i++)
    {
        prev[i] = max;
        if (max < height[i])
        {
            max = height[i];
        }
    }

    // next greatest element -> prev as next element array.
    vector<int> next(n, 0);
    next[n - 1] = height[n - 1];
    max = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        next[i] = max;
        if (max < height[i])
        {
            max = height[i];
        }
    }

    // Calculating volume of trapped water
    int water = 0;
    for (int i = 0; i < n; i++)
    {
        int minVal = min(prev[i], next[i]);
        if (height[i] < minVal)
        {
            water += (minVal - height[i]);
        }
    }

    return water;
}

int main()
{
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "Trapped water: " << trap(height) << endl;
    return 0;
}
