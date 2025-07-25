// zeroes and ones aside in a array.#Counting Method
#include <iostream>
#include <vector>
using namespace std;

int count0 = 0; // Global variable to share between functions

void countzsos(vector<int> &vec)
{
    count0 = 0; // Reset count
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == 0)
        {
            count0++;
        }
    }
}

void filler(vector<int> &vec)
{
    for (int i = 0; i < count0; i++)
    {
        vec[i] = 0;
    }
    for (int j = count0; j < vec.size(); j++)
    {
        vec[j] = 1;
    }
}

void inputVector(vector<int> &vec, int n)
{
    cout << "Enter " << n << " elements (0s or 1s): ";
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
    vector<int> vec;
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    inputVector(vec, n);

    cout << "Original vector: ";
    display(vec);

    countzsos(vec);
    filler(vec);

    cout << "Sorted vector (0s then 1s): ";
    display(vec);

    return 0;
}
