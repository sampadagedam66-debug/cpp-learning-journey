#include <iostream>
#include <string>
using namespace std;

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int add(int a, int b) {
    return a + b;
}

int square(int n) {
    return n * n;
}

int main() {
    greet("Student");
    cout << "Sum: " << add(5, 3) << endl;
    cout << "Square of 6: " << square(6) << endl;
    return 0;
}