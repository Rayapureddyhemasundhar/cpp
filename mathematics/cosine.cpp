// cosine valuuse
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double angle_degrees;

    // Define pi manually
    const double PI = 3.141592653589793;

    // Input
    cout << "Enter angle in degrees: ";
    cin >> angle_degrees;

    // Convert to radians
    double radians = angle_degrees * PI / 180.0;

    // Calculate cosine value
    double cosine_value = cos(radians);

    // Output
    cout << "cos(" << angle_degrees << "°) = " << cosine_value << endl;

    return 0;
}
