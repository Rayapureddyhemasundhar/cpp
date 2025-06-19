// sine valuse mathematically
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double angle_degrees;
    cout << "Enter angle in degrees: ";
    cin >> angle_degrees;
    double radians = angle_degrees * M_PI / 180.0;
    // here M_PI is pie value in cpp.
    double sine_value = sin(radians);
    cout << "sin(" << angle_degrees << "°) = " << sine_value << endl;
    return 0;
}
