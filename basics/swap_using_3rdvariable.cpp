// swap using 3rd variable

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter valuse a,b";
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << a << endl
         << b;
    return 0;
}