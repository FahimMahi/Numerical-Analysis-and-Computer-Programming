//Write a program that takes two integers and checks if they are equal. If they are equal, then the alert bell will ring. If they are not, then the code will display "The numbers are not equal". Note that, 'The numbers are not equal" will be shown including the quotation marks.

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 == num2) {
        cout << "\a";
    } else {
        cout << "\"The numbers are not equal\"";
    }

    return 0;
}
