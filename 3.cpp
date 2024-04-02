// Write a code that will take 2 numbers. It will return true if the sum of the two numbers is greater than 100. Otherwise, it will return false.

#include <iostream>
using namespace std;

bool isSumGreaterThan100(int num1, int num2) {
    return (num1 + num2) > 100;
}

int main() {
    int number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    bool result = isSumGreaterThan100(number1, number2);

    if (result) {
        cout << "The sum of the two numbers is greater than 100." << endl;
    } else {
        cout << "The sum of the two numbers is not greater than 100." << endl;
    }

    return 0;
}
