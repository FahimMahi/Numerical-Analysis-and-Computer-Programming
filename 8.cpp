// Write a program that will find if a certain year is a leap year or not. (A leap year is exactly divisible by 4 except for century years (years ending with 00). The century year is a leap year only if it is perfectly divisible by 400).

#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (isLeapYear(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
