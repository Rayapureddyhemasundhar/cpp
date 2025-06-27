// merge two after sorting those arrays.
#include <iostream>
#include <vector>
using namespace std;

void mearg(vector<int> &v1, vector<int> &v2, vector<int> &v3)
{
    int i = 0, j = 0, k = 0;
    int n = v1.size();
    int m = v2.size();

    while (i < n && j < m)
    {
        if (v1[i] < v2[j])
        {
            v3[k] = v1[i];
            i++;
        }
        else
        {
            v3[k] = v2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements from v1
    while (i < n)
    {
        v3[k++] = v1[i++];
    }

    // Copy remaining elements from v2
    while (j < m)
    {
        v3[k++] = v2[j++];
    }
}

void sortVector(vector<int> &vec)
{
    int n = vec.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
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
    vector<int> v1;
    int v1n;
    cout << "Enter value of n for first array: ";
    cin >> v1n;

    inputVector(v1, v1n);
    cout << "Original vector: ";
    display(v1);
    sortVector(v1);
    cout << "Sorted vector: ";
    display(v1);
    int n = v1.size();

    vector<int> v2;
    int v2n;
    cout << "Enter value of n for second array: ";
    cin >> v2n;

    inputVector(v2, v2n);
    cout << "Original vector: ";
    display(v2);
    sortVector(v2);
    cout << "Sorted vector: ";
    display(v2);
    int m = v2.size();

    int x = n + m;
    vector<int> v3(x);
    mearg(v1, v2, v3);
    cout << "Final output or merged vector: ";
    display(v3);

    return 0;
}
