// big among three
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;

    if (a > b && a > c)
    {
        cout << a << " is the biggest number";
    }
    else if (b > a && b > c)
    {
        cout << b << " is the biggest number";
    }
    else
    {
        cout << c << " is the biggest number";
    }

    return 0;
}