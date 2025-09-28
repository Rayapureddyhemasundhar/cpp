#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int low = 0, mid = 0, high = 8;
    vector<int> vec = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    while (mid <= high)
    {
        if (vec[mid] == 0)
        {
            swap(vec[low], vec[mid]);
            low++;
            mid++;
        }
        else if (vec[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(vec[mid], vec[high]);
            high--;
        }
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}
