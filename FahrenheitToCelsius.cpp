#include <iostream>
using namespace std;

int main() {
    float fahrenheit, celsius;
    int choice;
    
    cout << "Temperature Conversion Program" << endl;
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;
    
    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;

        // Conversion formula: F to C
        celsius = (fahrenheit - 32) * 5.0 / 9.0;

        cout << "Temperature in Celsius: " << celsius << "°C" << endl;
    }
    else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        
        // Conversion formula: C to F
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        
        cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}