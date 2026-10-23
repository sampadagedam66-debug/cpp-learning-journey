
#include <iostream>
using namespace std;

int main() {
    int number;
    unsigned long long factorial = 1;

    cout << "=== Factorial Calculator ===\n";
    cout << "Enter a number (0-20): ";

    if (!(cin >> number) || number < 0 || number > 20) {
        cout << "Invalid input. Enter an integer from 0 to 20.\n";
        return 1;
    }

    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    cout << number << "! = " << factorial << '\n';

    return 0;
}
