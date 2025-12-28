#include <bits/stdc++.h>
using namespace std;

bool isStrong(string s) {
    bool upper = false, lower = false, digit = false, special = false;

    for (char c : s) {
        if (isupper(c)) upper = true;
        else if (islower(c)) lower = true;
        else if (isdigit(c)) digit = true;
        else special = true;
    }

    return s.length() >= 8 && upper && lower && digit && special;
}

int main() {
    srand(time(0));

    string chars =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789"
        "!@#$%^&*()_+-=";

    int length;
    cout << "Enter password length: ";
    cin >> length;

    string password = "";
    for (int i = 0; i < length; i++) {
        password += chars[rand() % chars.length()];
    }

    cout << "\nGenerated Password: " << password << endl;

    if (isStrong(password))
        cout << "Strength: STRONG 💪" << endl;
    else
        cout << "Strength: WEAK ⚠️" << endl;

    return 0;
}
