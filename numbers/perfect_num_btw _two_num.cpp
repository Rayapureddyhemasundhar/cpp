// perfect number between two numbers
#include <iostream>
using namespace std;

// Function to check if a number is perfect
/*Any proper divisor of a number (except the number itself) is always less than or equal to half of that number.*/
bool isPerfect(int num)
{
    int sum = 0;

    for (int i = 1; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    return sum == num;
}

int main()
{
    int start, end;

    // Input range from user
    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;

    cout << "Perfect numbers between " << start << " and " << end << " are:\n";

    for (int i = start; i <= end; ++i)
    {
        if (isPerfect(i))
        {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
