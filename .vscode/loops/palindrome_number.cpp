#include <iostream>
using namespace std;

int main() {
    int n, original, digit, reversed = 0;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Negative numbers are not palindromes." << endl;
        return 0;
    }

    original = n;

    while (n > 0) {
        digit = n % 10;                 // get last digit
        reversed = reversed * 10 + digit; // build reversed number
        n /= 10;                        // remove last digit
    }

    if (original == reversed) {
        cout << original << " is a palindrome." << endl;
    } else {
        cout << original << " is not a palindrome." << endl;
    }

    return 0;
}