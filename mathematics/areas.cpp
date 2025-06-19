#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Enter a number between 1 and 5: \n";
    cout << "1 for Rectangle\n2 for Square\n3 for Circle\n4 for Triangle\n5 for Parallelogram\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
    { // Rectangle
        float length, width, area;
        cout << "Enter length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        area = length * width;
        cout << "Area is: " << area << " units" << endl;
        break;
    }

    case 2:
    { // Square
        float side, area;
        cout << "Enter side of the square: ";
        cin >> side;
        area = side * side;
        cout << "Area is: " << area << " units" << endl;
        break;
    }

    case 3:
    { // Circle
        float radius, area, pi = 3.14;
        cout << "Enter radius of the circle: ";
        cin >> radius;
        area = pi * radius * radius;
        cout << "Area is: " << area << " units" << endl;
        break;
    }

    case 4:
    { // Triangle
        float base, height, area;
        cout << "Enter the base of the triangle: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;
        area = 0.5 * base * height;
        cout << "Area is: " << area << " units" << endl;
        break;
    }

    case 5:
    { // Parallelogram
        float base, height, area;
        cout << "Enter the base of the parallelogram: ";
        cin >> base;
        cout << "Enter the height of the parallelogram: ";
        cin >> height;
        area = base * height;
        cout << "Area is: " << area << " units" << endl;
        break;
    }

    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}
