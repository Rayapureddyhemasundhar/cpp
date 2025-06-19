// finding roots of a quadratic equation.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    double discriminant = b * b - 4 * a * c;
    double root1, root2;
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two real and distinct roots: " << root1 << " and " << root2 << endl;
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        cout << "One real and repeated root: " << root1 << endl;
    }
    else
    {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Complex roots: " << realPart << " + " << imagPart << "i and "
             << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}
