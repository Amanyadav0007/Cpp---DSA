// Write a program to determine whether a given year is a leap year or not using if-else statements.

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter the year: ";
    cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " is a leap year";
    } else {
        cout << year << " is not a leap year";
    }
    return 0;
}
