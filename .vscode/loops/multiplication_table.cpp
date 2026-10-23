
#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "=== Multiplication Table Generator ===\n";
    cout << "Enter a positive integer: ";

    if (!(cin >> number) || number <= 0) {
        cout << "Invalid input. Please enter a positive integer.\n";
        return 1;
    }

    cout << "\nMultiplication table of " << number << ":\n";

    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i
             << " = " << number * i << '\n';
    }

    return 0;
}
