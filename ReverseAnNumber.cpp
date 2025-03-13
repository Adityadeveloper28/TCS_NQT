#include <iostream>
using namespace std;

int main() {
    int n, reversedNumber = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    while (n != 0) {
        int digit = n % 10; ///The % operator computes the remainder after dividing the value of the variable on the left by the value of the variable on the right.
        reversedNumber = reversedNumber * 10 + digit; ///The * operator multiplies the value of the variable on the left by the value of the variable on the right.
        n /= 10; ///The /= operator divides the value of the variable on the left by the value of the variable on the right and assigns the result to the variable on the left.
    }

    cout << "Reversed number is: " << reversedNumber << endl;

    return 0;
}
// Output
// Enter a positive integer: 12345
// Reversed number is: 54321
// In this program, the user is asked to enter a positive integer which is stored in the variable n. The while loop is used to iterate over the digits of the number until n becomes 0.
//  