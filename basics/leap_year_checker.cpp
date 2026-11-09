// leap_year_checker.cpp
// Topic: logical operators (&&, ||) and if/else
// Checks whether a given year is a leap year.
//
// Rule:
//   A year is a leap year if it is divisible by 4,
//   EXCEPT century years (divisible by 100), which must also be divisible by 400.
//   Examples: 2024 -> leap, 1900 -> not leap, 2000 -> leap

#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year <= 0) {
        cout << "Please enter a valid positive year." << endl;
        return 0;
    }

    // (divisible by 4 AND not by 100) OR (divisible by 400)
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}