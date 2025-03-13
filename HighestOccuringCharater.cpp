#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// Function to find the highest occurring character
char highestOccurringCharacter(const string& str) {
    unordered_map<char, int> freq;

    // Count frequency of each character
    for (char ch : str) {
        if (ch != ' ') {
            freq[ch]++;
        }
    }

    // Find the character with the highest frequency
    char maxChar = str[0];
    int maxCount = 0;
    for (auto& pair : freq) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxChar = pair.first;
        }
    }

    return maxChar;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Highest occurring character: " << highestOccurringCharacter(str) << endl;

    return 0;
}
