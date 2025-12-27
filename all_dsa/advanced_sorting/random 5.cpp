#include <iostream>
using namespace std;

bool isPowerOfFour(int n) {
    if (n <= 0)
        return false;

    // Check power of 2
    if ((n & (n - 1)) != 0)
        return false;

    // Mask to check even bit position
    return (n & 0x55555555);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPowerOfFour(n))
        cout << n << " is a power of 4\n";
    else
        cout << n << " is NOT a power of 4\n";

    return 0;
}
