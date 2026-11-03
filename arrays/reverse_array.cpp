#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many elements? ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int left = 0, right = n - 1; left < right; left++, right--) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
    }

    cout << "Reversed: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}