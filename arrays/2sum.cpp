// finding doublets from the user input (vectors).2sum.
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int x;
    cout << "enter your target doublet element :";
    cin >> x;
    vector<int> v;
    int n;
    cout << "enter array size :";
    cin >> n;
    cout << "enter the elements :";
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }
    for (int i = 0; i < v.size() - 2; i++)
    {
        for (int j = i + 1; j <= v.size() - 1; j++)
        {
            if (v[i] + v[j] == x)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }

    return 0;
}