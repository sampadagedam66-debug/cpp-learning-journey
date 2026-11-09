// temperature_converter.cpp
// Topic: switch menu, do-while loop, and arithmetic with decimals
// Converts temperature between Celsius, Fahrenheit and Kelvin.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    double temp, result;

    cout << fixed << setprecision(2);   // show 2 decimal places

    do {
        cout << "\n===== TEMPERATURE CONVERTER =====" << endl;
        cout << "1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "3. Celsius to Kelvin" << endl;
        cout << "4. Kelvin to Celsius" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter temperature in Celsius: ";
                cin >> temp;
                result = (temp * 9.0 / 5.0) + 32;
                cout << temp << " C = " << result << " F" << endl;
                break;

            case 2:
                cout << "Enter temperature in Fahrenheit: ";
                cin >> temp;
                result = (temp - 32) * 5.0 / 9.0;
                cout << temp << " F = " << result << " C" << endl;
                break;

            case 3:
                cout << "Enter temperature in Celsius: ";
                cin >> temp;
                result = temp + 273.15;
                cout << temp << " C = " << result << " K" << endl;
                break;

            case 4:
                cout << "Enter temperature in Kelvin: ";
                cin >> temp;
                if (temp < 0) {
                    cout << "Kelvin cannot be negative!" << endl;
                } else {
                    result = temp - 273.15;
                    cout << temp << " K = " << result << " C" << endl;
                }
                break;

            case 5:
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please select 1 to 5." << endl;
        }
    } while (choice != 5);

    return 0;
}