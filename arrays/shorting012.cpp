#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    int no0 = 0, no1 = 0, no2 = 0;

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == 0)
        {
            no0++;
        }
        else if (vec[i] == 1)
        {
            no1++;
        }
        else
        {
            no2++;
        }
    }

    cout << "no of 0's: " << no0 << endl;
    cout << "no of 1's: " << no1 << endl;
    cout << "no of 2's: " << no2 << endl;

    no1 = no0 + no1;
    no2 = no1 + no2;

    vector<int> ans;
    ans.reserve(vec.size()); // reserve space to avoid reallocation

    for (int i = 0; i < vec.size(); i++)
    {
        if (i < no0)
        {
            ans.push_back(0);
        }
        else if (i < no1)
        {
            ans.push_back(1);
        }
        else
        {
            ans.push_back(2);
        }
    }

    cout << "sorted array is: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
