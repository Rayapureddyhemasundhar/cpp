#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 3, 5, 7};
    vector<int> vec2 = {2, 4, 6, 8};
    vector<int> ans;
    ans.reserve(vec.size() + vec2.size());
    int i = 0, j = 0, k = 0;
    while (i < vec.size() && j < vec2.size())
    {
        if (vec[i] < vec2[j])
        {
            ans.push_back(vec[i]);
            i++;
        }
        else
        {
            ans.push_back(vec2[j]);
            j++;
        }
        k++;
        if (i == vec.size())
        {
            while (j < vec2.size())
            {
                ans.push_back(vec2[j]);
                j++;
                k++;
            }
        }
        if (j == vec2.size())
        {
            while (i < vec.size())
            {
                ans.push_back(vec[i]);
                i++;
                k++;
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
