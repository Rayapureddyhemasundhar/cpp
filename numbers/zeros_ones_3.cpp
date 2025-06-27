// zeroes and ones aside in a array.#(Dutch National Flag style).
// its basically 3 pointing method.
#include <iostream>
#include <vector>
using namespace std;

void sort012(vector<int> &nums)
{
    // One pass solution using 3 pointers
    int lo = 0;
    int mid = 0;
    int hi = nums.size() - 1;

    while (mid <= hi)
    {

        if (nums[mid] == 2)
        {
            int temp = nums[mid];
            nums[mid] = nums[hi];
            nums[hi] = temp;
            hi--;
        }
        else if (nums[mid] == 0)
        {
            int temp = nums[mid];
            nums[mid] = nums[lo];
            nums[lo] = temp;
            lo++;
            mid++;
        }
        else
        {
            mid++;
        }
    }
}

void inputVector(vector<int> &vec, int n)
{
    cout << "Enter " << n << " elements (0s, 1s, or 2s): ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
}

void display(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> nums;
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    inputVector(nums, n);

    cout << "Original vector: ";
    display(nums);

    sort012(nums);

    cout << "Sorted vector: ";
    display(nums);

    return 0;
}
