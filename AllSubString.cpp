#include <iostream>
#include <string>
using namespace std;

// Function to print all substrings
void printAllSubstrings(const string& str) {
    cout << "All substrings are:" << endl;
    for (size_t i = 0; i < str.length(); ++i) {
        for (size_t j = 1; j <= str.length() - i; ++j) {
            cout << str.substr(i, j) << endl;
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    printAllSubstrings(str); // Print all substrings

    return 0;
}
