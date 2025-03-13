#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string str) {
    string cleanedStr = "";

    // Remove non-alphabetic characters and convert to lowercase
    for (char ch : str) {
        if (isalnum(ch)) {
            cleanedStr += tolower(ch);
        }
    }

    // Check if cleaned string is a palindrome
    string reversedStr = cleanedStr;
    reverse(reversedStr.begin(), reversedStr.end());

    return cleanedStr == reversedStr;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if (isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is NOT a palindrome." << endl;
    }

    return 0;
}
