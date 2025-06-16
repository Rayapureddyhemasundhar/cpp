/*To print the revers of the given number
small change in the code(to print the sum of the given number)
and the change is already commented in the same line of the code
*/
#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    int original = num;  

    while (num != 0) {
        digit = num % 10;             
        reverse = reverse * 10 + digit;//is the code changes a bit 
        num = num / 10;               
    }

    cout << "Reverse of " << original << " is: " << reverse << endl;

    return 0;
}