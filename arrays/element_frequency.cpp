
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Invalid array size.";
        return 0;
    }

    int arr[100];
    bool visited[100] = {false};

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nElement frequencies:\n";

    for (int i = 0; i < n; i++) {

        if (visited[i]) {
            continue;
        }

        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = true;
            }
        }

        cout << arr[i] << " appears " << count
             << " time(s)." << endl;
    }

    return 0;
}
