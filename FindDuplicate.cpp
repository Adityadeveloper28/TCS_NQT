#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Finding duplicates
    bool hasDuplicate = false;
    cout << "Duplicate elements: ";
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                hasDuplicate = true;
                break; // Stop checking once a duplicate is found
            }
        }
    }

    if (!hasDuplicate) {
        cout << "None";
    }

    cout << endl;
    return 0;
}
