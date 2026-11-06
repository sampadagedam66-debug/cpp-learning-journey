#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << "Need at least 2 elements." << endl;
        return 0;
    }

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        cout << "No second largest (all elements are equal)." << endl;
    } else {
        cout << "Largest: " << largest << endl;
        cout << "Second largest: " << second << endl;
    }

    return 0;
}