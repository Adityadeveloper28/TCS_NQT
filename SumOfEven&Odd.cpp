#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int evenSum = 0, oddSum = 0;

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) { //how to check if a number is even or odd in C++ using the modulo operator (%) and the equality operator (==).
                // If the number is divisible by 2, it is even else it is odd.
            evenSum += i;
        } else {
            oddSum += i;
        }
    }

    cout << "Sum of even numbers up to " << n << " is: " << evenSum << endl;
    cout << "Sum of odd numbers up to " << n << " is: " << oddSum << endl;

    return 0;
}
