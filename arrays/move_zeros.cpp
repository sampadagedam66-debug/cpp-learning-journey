
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    int arr[100];

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int position = 0;

    // Move all non-zero elements to the beginning
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[position] = arr[i];
            position++;
        }
    }

    // Fill the remaining positions with zeros
    while (position < n) {
        arr[position] = 0;
        position++;
    }

    cout << "Array after moving zeros: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
