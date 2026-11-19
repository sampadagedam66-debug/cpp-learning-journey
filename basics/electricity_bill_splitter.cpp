
#include <iostream>
using namespace std;

int main() {
    int units;
    double bill = 0;

    cout << "===== ELECTRICITY BILL CALCULATOR =====" << endl;

    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units < 0) {
        cout << "Invalid units! Please enter a positive value." << endl;
        return 0;
    }

    if (units <= 100) {
        bill = units * 1.50;
    }
    else if (units <= 200) {
        bill = (100 * 1.50) + (units - 100) * 2.50;
    }
    else if (units <= 300) {
        bill = (100 * 1.50) + (100 * 2.50)
               + (units - 200) * 3.50;
    }
    else {
        bill = (100 * 1.50) + (100 * 2.50)
               + (100 * 3.50) + (units - 300) * 5.00;
    }

    cout << "\nTotal Units: " << units << endl;
    cout << "Electricity Bill: Rs. " << bill << endl;

    cout << "\nName: Sampada Gedam" << endl;
    cout << "Roll No: 40" << endl;

    return 0;
}
