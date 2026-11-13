
#include <iostream>
using namespace std;

int main() {
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    cout << "Enter size of second array: ";
    cin >> m;

    if (n <= 0 || m <= 0 || n + m > 100) {
        cout << "Invalid array sizes!" << endl;
        return 0;
    }

    int arr1[100], arr2[100], merged[100];

    cout << "Enter elements of first sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of second sorted array: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    int i = 0, j = 0, k = 0;

    // Compare and merge elements
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of first array
    while (i < n) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while (j < m) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    cout << "Merged sorted array: ";

    for (int x = 0; x < n + m; x++) {
        cout << merged[x] << " ";
    }

    cout << endl;

    return 0;
}
