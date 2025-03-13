#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPangram(string str) {
    bool letters[26] = {false};

    for (char ch : str) {
        if (isalpha(ch)) {
            ch = tolower(ch);  // Convert to lowercase
            letters[ch - 'a'] = true;
        }
    }

    for (bool present : letters) {
        if (!present) return false;
    }

    return true;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    if (isPangram(str)) {
        cout << "The sentence is a pangram." << endl;
    } else {
        cout << "The sentence is NOT a pangram." << endl;
    }

    return 0;
}
