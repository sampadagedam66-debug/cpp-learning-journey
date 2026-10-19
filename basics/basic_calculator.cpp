// Basic calculator: switch + input validation
#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter expression (e.g. 5 + 3): ";
    cin >> a >> op >> b;

    switch (op) {
        case '+': cout << a + b << endl; break;
        case '-': cout << a - b << endl; break;
        case '*': cout << a * b << endl; break;
        case '/':
            if (b == 0) cout << "Error: division by zero\n";
            else cout << a / b << endl;
            break;
        default: cout << "Unknown operator\n";
    }
    return 0;
}