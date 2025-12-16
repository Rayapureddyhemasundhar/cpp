#include <iostream>

#include <vector>

using namespace std;

void reverseArray(vector<int> &array)
{

    int start = 0;

    int end = array.size() - 1;

    while (start < end)
    {

        // Swap elements at start and end

        swap(array[start], array[end]);

        // Move pointers towards the center

        start++;

        end--;
    }
}

int main()
{

    int n;

    cin >> n;

    vector<int> array(n);

    for (int i = 0; i < n; i++)
    {

        cin >> array[i];
    }

    reverseArray(array);

    for (int i = 0; i < n; i++)
    {

        cout << array[i] << " ";
    }

    return 0;
}
