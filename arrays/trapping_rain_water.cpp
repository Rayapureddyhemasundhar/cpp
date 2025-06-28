#include <iostream>
using namespace std;

// Function to input array
void arrayinput(int height[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter the number: ";
        cin >> x;
        height[i] = x;
    }
}

// Function to display array
void display(int height[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << height[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int height[n]; // declaring height array
    arrayinput(height, n);
    display(height, n);

    // Previous greatest element array
    int prev[n];
    prev[0] = -1;
    int maxVal = height[0];

    for (int i = 1; i < n; i++)
    {
        prev[i] = maxVal;
        if (maxVal < height[i])
        {
            maxVal = height[i];
        }
    }

    // Next greatest element array
    int next[n];
    next[n - 1] = -1;
    maxVal = height[n - 1]; // reinitialize max for right side

    for (int i = n - 2; i >= 0; i--)
    {
        next[i] = maxVal;
        if (maxVal < height[i])
        {
            maxVal = height[i];
        }
    }

    // Minimum of previous and next greater
    int minVal[n];
    for (int i = 0; i < n; i++)
    {
        // take minimum of prev[i] and next[i]
        minVal[i] = (prev[i] < next[i]) ? prev[i] : next[i];
    }

    // Calculating volume of trapped water
    int water = 0;
    for (int i = 0; i < n; i++)
    {
        if (height[i] < minVal[i])
        {
            water += (minVal[i] - height[i]);
        }
    }

    cout << "Total trapped water: " << water << endl;

    return 0;
}
