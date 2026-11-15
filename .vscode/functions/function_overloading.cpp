
#include <iostream>
using namespace std;

// Function with two integer parameters
int add(int a, int b) {
    return a + b;
}

// Function with three integer parameters
int add(int a, int b, int c) {
    return a + b + c;
}

// Function with two double parameters
double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "===== FUNCTION OVERLOADING =====" << endl;

    cout << "Addition of two integers: "
         << add(10, 20) << endl;

    cout << "Addition of three integers: "
         << add(10, 20, 30) << endl;

    cout << "Addition of two decimal numbers: "
         << add(5.5, 4.5) << endl;

    cout << "\nName: Sampada Gedam" << endl;
    cout << "Roll No: 40" << endl;

    return 0;
}
