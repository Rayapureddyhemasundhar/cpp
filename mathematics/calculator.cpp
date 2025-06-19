#include <iostream>
using namespace std;

int main()
{
    char op;
    double num1, num2, result;

    cout << "Simple Calculator" << endl;
    cout << "------------------" << endl;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << "Result: " << result << endl;
        break;

    case '-':
        result = num1 - num2;
        cout << "Result: " << result << endl;
        break;

    case '*':
        result = num1 * num2;
        cout << "Result: " << result << endl;
        break;

    case '/':
        if (num2 == 0)
        {
            cout << "Error: Division by zero!" << endl;
        }
        else
        {
            result = num1 / num2;
            cout << "Result: " << result << endl;
        }
        break;

    default:
        cout << "Invalid operator!" << endl;
    }

    return 0;
}
