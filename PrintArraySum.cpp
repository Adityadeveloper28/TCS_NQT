#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    int n, value;
    
    // Ask for the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;
    
    // Input elements into the vector
    cout << "Enter " << n << " integers: ";
    for(int i = 0; i < n; i++) {
        cin >> value;
        arr.push_back(value);  // Add each input to the vector
    }
    
    // Calculate sum (existing code)
    int sum = 0;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
    }
    
    cout << "Sum of the array is: " << sum << endl;
    return 0;
}