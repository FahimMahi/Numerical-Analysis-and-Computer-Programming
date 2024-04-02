//Write a program that will take 3 sides of a triangle as an input and will return the maximum edge of the triangle.

#include <iostream>
using namespace std;

int main() {
    int side1, side2, side3;

    cout << "Enter the first side of the triangle: ";
    cin >> side1;
    cout << "Enter the second side of the triangle: ";
    cin >> side2;
    cout << "Enter the third side of the triangle: ";
    cin >> side3;

    int maxEdge = side1;

    if (side2 > maxEdge) {
        maxEdge = side2;
    }
    if (side3 > maxEdge) {
        maxEdge = side3;
    }

    cout << "The maximum edge of the triangle is: " << maxEdge << endl;

    return 0;
}
