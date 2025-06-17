// fibonacci series.

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number :";
    cin >> num;
    int a, b = 1;
    int next_term;
    for (int i = 1; i <= num; i++)
    {
        cout << a << " ";
        next_term = b + a;
        a = b;
        b = next_term;
    }
    return 0;
}
