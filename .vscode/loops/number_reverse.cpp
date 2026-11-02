#include <iostream>
using namespace std;

int main() {
    int n, digit;
    long long reversed = 0;

    cout << "Enter a number: ";
    cin >> n;

    bool isNegative = (n < 0);

    if (isNegative) {
        n = -n;
    }

    while (n > 0) {
        digit = n % 10;                   // get last digit
        reversed = reversed * 10 + digit; // append it to reversed
        n /= 10;                          // remove last digit
    }

    if (isNegative) {
        reversed = -reversed;
    }

    cout << "Reversed number: " << reversed << endl;

    return 0;
}