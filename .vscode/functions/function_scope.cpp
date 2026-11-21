#include <iostream>
using namespace std;

int globalVar = 100;

void display() {
    int localVar = 50;

    cout << "Local variable: " << localVar << endl;
    cout << "Global variable: " << globalVar << endl;
}

int main() {
    int mainVar = 10;

    cout << "Main variable: " << mainVar << endl;

    display();

    cout << "Global variable in main: " << globalVar << endl;

    return 0;
}