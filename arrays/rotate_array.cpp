#include <iostream>
#include <algorithm>
using namespace std;

void reverseRange(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotateLeft(int arr[], int n, int k) {
    k = k % n;
    if (k == 0) return;

    reverseRange(arr, 0, k - 1);
    reverseRange(arr, k, n - 1);
    reverseRange(arr, 0, n - 1);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be positive." << endl;
        return 0;
    }

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter number of positions to rotate left: ";
    cin >> k;

    rotateLeft(arr, n, k);

    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}