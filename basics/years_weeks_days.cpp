// days weeks and years
#include <iostream>
using namespace std;

int main()
{
    int total_days;
    cout << "Enter total number of days: ";
    cin >> total_days;

    int years = total_days / 365;
    int remaining_days = total_days % 365;

    int weeks = remaining_days / 7;
    int days = remaining_days % 7;

    cout << "Years: " << years << endl;
    cout << "Weeks: " << weeks << endl;
    cout << "Days: " << days << endl;

    return 0;
}
