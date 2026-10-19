// Hello World + variables + user input + sum, with formatted output
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name;
    int age, a, b;
    double height;
    char grade;

    cout << "Hello, World!\n\n";

    cout << "Enter your full name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height (in feet): ";
    cin >> height;
    cout << "Enter your grade (A-F): ";
    cin >> grade;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\n" << string(26, '=') << endl;
    cout << "       PROFILE CARD" << endl;
    cout << string(26, '=') << endl;

    cout << left << setw(12) << "Name"   << ": " << name << endl;
    cout << left << setw(12) << "Age"    << ": " << age << " years" << endl;
    cout << left << setw(12) << "Height" << ": " << fixed << setprecision(1) << height << " ft" << endl;
    cout << left << setw(12) << "Grade"  << ": " << grade << endl;

    cout << string(26, '-') << endl;

    cout << left << setw(12) << "Number 1" << ": " << right << setw(10) << a << endl;
    cout << left << setw(12) << "Number 2" << ": " << right << setw(10) << b << endl;
    cout << left << setw(12) << "Sum"      << ": " << right << setw(10) << a + b << endl;
    cout << left << setw(12) << "Product"  << ": " << right << setw(10) << a * b << endl;
    cout << left << setw(12) << "Average"  << ": " << right << setw(10) << setprecision(2) << (a + b) / 2.0 << endl;

    cout << string(26, '=') << endl;
    return 0;
}

















































