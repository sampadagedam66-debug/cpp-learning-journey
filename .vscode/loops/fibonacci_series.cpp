#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter how many terms to print: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
        return 0;
    }

    long long first = 0, second = 1, next;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++) {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
    return 0;
}