#include <iostream>
#include <vector>
using namespace std;

void reversing(vector<int> &vec, int n)
{
    for (int i = 0, j = n - 1; i < j;)
    {
        if (vec[i] < 0)
        {
            i++; // correct position
        }
        else if (vec[j] >= 0)
        {
            j--; // correct position
        }
        else
        {
            int temp = vec[i];
            vec[i] = vec[j];
            vec[j] = temp;
            i++;
            j--;
        }
    }
}

int main()
{
    vector<int> vec;
    int x, n;

    cout << "enter the size of the vector _";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "enter the element " << i << ":_";
        cin >> x;
        vec.push_back(x);
    }

    reversing(vec, n);

    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }

    return 0;
}
