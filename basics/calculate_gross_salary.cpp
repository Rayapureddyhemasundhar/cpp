/*calculating gross salary from given basic pay
gross is adding all the expenditures of the part of the salary
*/
#include <iostream>
using namespace std;

int main()
{
    float basicPay, hra, da, grossSalary;

    cout << "Enter Basic Pay: ";
    cin >> basicPay;

    hra = 0.20 * basicPay; // 20% of basic pay
    da = 0.80 * basicPay;  // 80% of basic pay

    grossSalary = basicPay + hra + da;

    cout << "HRA: ₹" << hra << endl;
    cout << "DA: ₹" << da << endl;
    cout << "Gross Salary: ₹" << grossSalary << endl;

    return 0;
}
