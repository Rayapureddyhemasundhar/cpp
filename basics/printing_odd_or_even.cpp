// odd or even

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter ypur number :";
    cin >> n;
    if (n / 2 == 0)
    {
        cout << "even";
    }
    else
        cout << "odd";
    return 0;
}