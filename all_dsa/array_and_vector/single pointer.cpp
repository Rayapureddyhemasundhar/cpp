#include <iostream>
#include <vector>
using namespace std;
void rearrangeArray(vector<int> &arr)
{
    int n = arr.size();
    int j = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    rearrangeArray(arr);
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}