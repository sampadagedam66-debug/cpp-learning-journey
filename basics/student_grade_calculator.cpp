
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int marks[5];
    int total = 0;
    float percentage;

    cout << "===== Student Grade Calculator =====\n";

    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for subject "
             << i + 1 << " (out of 100): ";
        cin >> marks[i];

        if (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks! Enter 0 to 100.\n";
            return 1;
        }

        total += marks[i];
    }

    percentage = total / 5.0;

    cout << "\n===== Result =====\n";
    cout << "Total Marks: " << total << "/500\n";
    cout << fixed << setprecision(2);
    cout << "Percentage: " << percentage << "%\n";

    if (percentage >= 90) {
        cout << "Grade: A+";
    } else if (percentage >= 80) {
        cout << "Grade: A";
    } else if (percentage >= 70) {
        cout << "Grade: B";
    } else if (percentage >= 60) {
        cout << "Grade: C";
    } else if (percentage >= 40) {
        cout << "Grade: D";
    } else {
        cout << "Grade: F";
    }

    cout << "\n";
    return 0;
}
