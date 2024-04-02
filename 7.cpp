// Write a program in C++ to display the n terms of even natural number and their sum.

#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "\nThe first " << n << " even natural numbers are:\n";

    for(int i = 1; i <= n; i++) {
        int evenNumber = 2 * i;
        cout << evenNumber << " ";
        sum += evenNumber;
    }

    cout << "\n\nThe sum of the first " << n << " even natural numbers is: " << sum << endl;

    return 0;
}
