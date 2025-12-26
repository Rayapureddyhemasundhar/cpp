#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n) {
    int cnt = 0;
    while (n > 0) {
        cnt++;
        n /= 10;
    }
    return cnt;
}

bool isDisarium(int n) {
    int temp = n;
    int digits = countDigits(n);
    int sum = 0;

    while (temp > 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        digits--;
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isDisarium(n))
        cout << n << " is a Disarium Number\n";
    else
        cout << n << " is NOT a Disarium Number\n";

    return 0;
}
