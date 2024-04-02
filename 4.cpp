// Create a code that takes two arguments. Both arguments are integers, a and b. Return true if one of them is 10 or if their sum is 10. Otherwise, return false.
#include <iostream>
using namespace std;

bool isTenOrSumTen(int a, int b) {
    if (a == 10 || b == 10 || (a + b) == 10) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    if (isTenOrSumTen(a, b)) {
        cout << "True: One of the numbers is 10 or their sum is 10." << endl;
    } else {
        cout << "False: Neither of the conditions is met." << endl;
    }

    return 0;
}
