#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter the size of the first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter " << n1 << " elements: ";
    for (int i = 0; i < n1; ++i) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter " << n2 << " elements: ";
    for (int i = 0; i < n2; ++i) {
        cin >> arr2[i];
    }

    // Finding Intersection
    cout << "Intersection elements: ";
    for (int i = 0; i < n1; ++i) {
        for (int j = 0; j < n2; ++j) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                arr2[j] = INT_MIN; // Correctly mark visited elements
                break;
            }
        }
    }

    cout << endl;
    return 0;
}
