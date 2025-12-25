#include <iostream>
#include <cmath>
using namespace std;

int countDigits(long long x) {
    int cnt = 0;
    while (x > 0) {
        cnt++;
        x /= 10;
    }
    return cnt;
}

bool isKaprekar(int n) {
    if (n == 1) return true;

    long long sq = (long long)n * n;
    int digits = countDigits(sq);

    for (int i = 1; i < digits; i++) {
        long long power = pow(10, i);

        long long right = sq % power;
        long long left = sq / power;

        if (right > 0 && left + right == n)
            return true;
    }
    return false;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isKaprekar(n))
        cout << n << " is a Kaprekar Number\n";
    else
        cout << n << " is NOT a Kaprekar Number\n";

    return 0;
}
