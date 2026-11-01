#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    if (rows <= 0) {
        cout << "Please enter a positive number." << endl;
        return 0;
    }

    for (int i = 1; i <= rows; i++) {

        // print leading spaces
        for (int space = 1; space <= rows - i; space++) {
            cout << " ";
        }

        // print stars
        for (int star = 1; star <= 2 * i - 1; star++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}