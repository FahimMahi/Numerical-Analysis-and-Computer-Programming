// Write a program in C++ to calculate the series (1+2+3+4+.............+n).
#include <iostream>
using namespace std;

int main() {
    int n, sum;
    cout << "Enter the value of n: ";
    cin >> n;
    sum = n * (n + 1) / 2;
    cout << "The sum of the series (1+2+3+...+n) is: " << sum << endl;
    return 0;
}
