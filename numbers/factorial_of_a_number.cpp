// factorial of a number

#include <iostream>
using namespace std;
int main()
{
    int num, fact;
    cout << "enter the number :";
    cin >> num;
    fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << fact;

    return 0;
}