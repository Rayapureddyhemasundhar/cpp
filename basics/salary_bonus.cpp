// comp bonus based on gender.
#include <iostream>
using namespace std;

int main()
{
    float salary, bonus = 0;
    char gender;

    // Input salary and gender
    cout << "Enter salary: ";
    cin >> salary;

    cout << "Enter gender (M for male, F for female): ";
    cin >> gender;

    // Base bonus based on gender
    if (gender == 'M' || gender == 'm')
    {
        bonus = 0.05 * salary;
    }
    else if (gender == 'F' || gender == 'f')
    {
        bonus = 0.10 * salary;
    }
    else
    {
        cout << "Invalid gender input." << endl;
        return 1;
    }

    // Extra bonus if salary < 10000
    if (salary < 10000)
    {
        bonus += 0.02 * salary;
    }

    float totalSalary = salary + bonus;

    // Output
    cout << "Bonus given: ₹" << bonus << endl;
    cout << "Total salary after bonus: ₹" << totalSalary << endl;

    return 0;
}