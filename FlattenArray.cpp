#include <iostream>
#include <vector>
using namespace std;

vector<int> flattenArray(const vector<vector<int>> &nums) {
    vector<int> result;  // Create a result array
    for (const auto &subarray : nums) {  // Loop through each subarray
        for (int num : subarray) {       // Loop through elements in each subarray
            result.push_back(num);       // Append to result
        }
    }
    return result;
}

int main() {
    vector<vector<int>> nums = {
        {1, 2, 3},
        {4, 5},
        {6, 7, 8, 9}
    };

    vector<int> result = flattenArray(nums);

    // Print the flattened array
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
