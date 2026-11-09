// simple_atm.cpp
// Topic: switch, do-while loop, and a simple function
// A menu-driven ATM where you can check balance, deposit and withdraw money.

#include <iostream>
#include <iomanip>
using namespace std;

// A simple function that only prints the menu
void showMenu() {
    cout << "\n===== SIMPLE ATM =====" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
    double balance = 5000.0;   // starting balance
    double amount;
    int choice;

    cout << fixed << setprecision(2);   // show money with 2 decimal places

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your balance is: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: Rs. ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful. New balance: Rs. " << balance << endl;
                } else {
                    cout << "Invalid amount! Enter a positive number." << endl;
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: Rs. ";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Invalid amount! Enter a positive number." << endl;
                } else if (amount > balance) {
                    cout << "Insufficient balance!" << endl;
                } else {
                    balance -= amount;
                    cout << "Please collect your cash. New balance: Rs. " << balance << endl;
                }
                break;

            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please select 1 to 4." << endl;
        }
    } while (choice != 4);

    return 0;
}