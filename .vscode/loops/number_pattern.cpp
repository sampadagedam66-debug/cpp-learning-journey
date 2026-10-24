
#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "=== Number Pattern Generator ===\n";
    cout << "Enter the number of rows (1-20): ";

    if (!(cin >> rows) || rows < 1 || rows > 20) {
        cout << "Invalid input. Enter a number from 1 to 20.\n";
        return 1;
    }

    cout << "\n";

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << '\n';
    }

    return 0;
}
