// The bending moment M at any point x along a beam can be expressed as: M(x)=x3-2x2-19x+20 You have to determine the position x where the bending moment is exactly zero. This point is critical for the stability and design of the structure. Create a C++ program to solve the equation M(x)=0 using either the Bisection method or the Regula Falsi method. Consider the beam length to be in the range [0, 4] meters, and precision up to 0.001 meters is acceptable. Your program should output the position x where the bending moment is zero.
#include <bits/stdc++.h>
using namespace std;

// given polynomial M(x)=x3-2x2-19x+20
double M(double x) {
    return x*x*x - 2*x*x - 19*x + 20;
}

// Bisection Method
double bisectionMethod(double a, double b, double tolerance) {
    if (M(a) * M(b) >= 0) {
        cout << "You have not assumed right a and b\n";
        return 0;
    }

    double c = a;
    while ((b-a) >= tolerance) {
        // Find middle point
        c = (a+b)/2;

        // Check if middle point is root
        if (M(c) == 0.0)
            break;

        // Decide the side to repeat the steps
        else if (M(c)*M(a) < 0)
            b = c;
        else
            a = c;
    }
    return c;
}

int main() {
    double a = 0, b = 4, tolerance = 0.001;
    cout << "The function used is M(x) = x^3 - 2x^2 - 19x + 20\n";
    cout << "A root found using bisection method is : " << bisectionMethod(a, b, tolerance) << endl;
    return 0;
}
