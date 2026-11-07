#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[100];

    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int j = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    cout << "Array without duplicates: ";
    for (int i = 0; i <= j; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}