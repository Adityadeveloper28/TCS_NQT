#include <iostream>
#include <string>
using namespace std;

// Function to remove all spaces
string removeAllSpaces(const string& str) {
    string result = "";
    for (char ch : str) {
        // if (isalpha(ch)) {
        //     result += ch;
        // }
        if (ch != ' ') {
            result += ch;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string trimmedStr = removeAllSpaces(str); // Remove all spaces
    cout << "String without spaces: '" << trimmedStr << "'" << endl;

    return 0;
}
