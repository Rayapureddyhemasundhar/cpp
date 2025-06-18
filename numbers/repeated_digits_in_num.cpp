// repeated digits in a number.
#include <iostream>
using namespace std;

void findRepeatedDigits(int num)
{
    int freq[10] = {0};

    if (num < 0)
        num = -num;

    while (num > 0)
    {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    bool found = false;
    cout << "Repeated digits: ";
    for (int i = 0; i < 10; ++i)
    {
        if (freq[i] > 1)
        {
            cout << i << " ";
            found = true;
        }
    }

    if (!found)
        cout << "None (all digits are unique)";

    cout << endl;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    findRepeatedDigits(number);

    return 0;
}
