// Write a program in C++ to display the cube of the number upto a given integer (hint: the integer value will be inserted by the user, so introduce it as a variable).

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << "Cube of " << i << " is " << (i*i*i) << endl;
    }

    return 0;
}
