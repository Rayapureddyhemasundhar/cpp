#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3};
    int n = vec.size();
    int idx = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (vec[i] < vec[i + 1])
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        reverse(vec.begin(), vec.end());
    }
    else
    {
        for (int i = n - 1; i > idx; i--)
        {
            if (vec[i] > vec[idx])
            {
                swap(vec[i], vec[idx]);
                break;
            }
        }
        reverse(vec.begin() + idx + 1, vec.end());
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}
