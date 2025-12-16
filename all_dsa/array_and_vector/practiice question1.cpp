#include <iostream>
#include <vector>
using namespace std;
void reversing(vector<int> &vec, int n, int k, int z)
{
    for (int i = z, j = k - 1; i < j; i++, j--)
    {
        int temp = vec[i];
        vec[i] = vec[j];
        vec[j] = temp;
    }
}

int main()
{
    vector<int> vec;
    int x, n;
    int temp;
    int k;
    cout << "enter the size of the vector _";
    cin >> n;

    // Input elements
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element " << i << ":_";
        cin >> x;
        vec.push_back(x);
    }
    cout << "enter the roation index :_";
    cin >> k;
    // Reverse using swapping
    reversing(vec, n, k, 0);
    reversing(vec, n, n, k);
    reversing(vec, n, n, 0);

    // Print vector
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }

    return 0;
}
