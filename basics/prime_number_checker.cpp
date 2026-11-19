
#include <iostream>
using namespace std;

int main() {
    int number;
    bool isPrime = true;

    cout << "===== PRIME NUMBER CHECKER =====" << endl;

    cout << "Enter a positive number: ";
    cin >> number;

    if (number <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }

    if (number == 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= number / i; i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << number << " is a Prime Number." << endl;
    }
    else {
        cout << number << " is not a Prime Number." << endl;
    }

    cout << "\nName: Sampada Gedam" << endl;
    cout << "Roll No: 40" << endl;

    return 0;
}
