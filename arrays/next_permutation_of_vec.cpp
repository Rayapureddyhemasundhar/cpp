// next permulation of the user input vector.(leetcode question number 31.)
#include <iostream>
#include <vector>
using namespace std;

void vectorinput(vector<int> &vec, int n)
{
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter the number: ";
        cin >> x;
        vec.push_back(x);
    }
}

void displayVector(vector<int> &vec, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

void reverseVector(vector<int> &vec, int a, int b)
{
    b = b - 1; // because you were using size, but index is size-1
    while (a < b)
    {
        int temp = vec[a];
        vec[a] = vec[b];
        vec[b] = temp;
        a++;
        b--;
    }
}

void swapElements(vector<int> &vec, int index1, int index2)
{
    int temp = vec[index1];
    vec[index1] = vec[index2];
    vec[index2] = temp;
}

void nextpermutation(vector<int> &vec)
{
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
        reverseVector(vec, 0, vec.size());
        displayVector(vec, vec.size());
        return;
    }

    int j = -1;
    for (int i = n - 1; i > idx; i--)
    {
        if (vec[i] > vec[idx])
        {
            j = i;
            break;
        }
    }

    swapElements(vec, idx, j);
    reverseVector(vec, idx + 1, vec.size());
    displayVector(vec, vec.size());
}

int main()
{
    int n;
    vector<int> vec;
    cout << "Enter the size of array: ";
    cin >> n;

    vectorinput(vec, n);
    displayVector(vec, n);
    nextpermutation(vec);

    return 0;
}
