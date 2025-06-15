// swap without using 3rd variable

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter valuse a,b" << endl;
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;

    cout << a << endl
         << b;
    return 0;
}
