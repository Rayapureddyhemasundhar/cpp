// multiplication using addition
#include <iostream>
using namespace std;

int main()
{
    int a, b, result = 0;
    cout << "Enter two numbers (a and b): ";
    cin >> a >> b;

    for (int i = 1; i <= b; i++)
    {
        result += a; // add a, b times
    }

    cout << "Multiplication of " << a << " and " << b << " is: " << result << endl;

    return 0;
}