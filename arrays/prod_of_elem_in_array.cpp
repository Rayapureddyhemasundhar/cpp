// calculate the product of all the elements in the given array.
#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int pro = 1;

    cout << "give inputs for array: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < 10; j++)
    {
        pro = pro * arr[j];
    }

    cout << "Product of all elements: " << pro << endl;

    return 0;
}
