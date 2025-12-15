#include <iostream>
#include <cstring>
using namespace std;

class A {
public:
    char str1[50];
    A(const char* s) { strcpy(str1, s); }
};

class B {
public:
    char str2[50];
    B(const char* s) { strcpy(str2, s); }
};

class C : public A, public B {
public:
    char result[100];
    C(const char* s1, const char* s2) : A(s1), B(s2) {}
    void concat() {
        strcpy(result, str1);
        strcat(result, str2);
    }
    void display() {
        cout << "Concatenated string: " << result << endl;
    }
};

int main() {
    C obj("Hello", "World");
    obj.concat();
    obj.display();
    return 0;
}
