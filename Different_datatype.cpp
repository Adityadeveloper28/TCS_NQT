#include <iostream>
#include <limits> // For data type limits
using namespace std;

int main() {
    // Fundamental Data Types
    int a = 10;             // Integer
    float b = 3.14f;        // Floating-point number
    double c = 3.14159;     // Double precision floating-point
    char d = 'A';           // Character
    bool e = true;          // Boolean (true/false)

    // Additional Data Types
    long f = 100000L;       // Long integer
    short g = 300;          // Short integer
    unsigned int h = 400;   // Unsigned integer (non-negative)

    // Display Values and Sizes
    cout << "int: " << a << " | Size: " << sizeof(a) << " bytes\n";
    cout << "float: " << b << " | Size: " << sizeof(b) << " bytes\n";
    cout << "double: " << c << " | Size: " << sizeof(c) << " bytes\n";
    cout << "char: " << d << " | Size: " << sizeof(d) << " bytes\n";
    cout << "bool: " << e << " | Size: " << sizeof(e) << " bytes\n";
    cout << "long: " << f << " | Size: " << sizeof(f) << " bytes\n";
    cout << "short: " << g << " | Size: " << sizeof(g) << " bytes\n";
    cout << "unsigned int: " << h << " | Size: " << sizeof(h) << " bytes\n";

    // Limits for Data Types
    cout << "\nINT MAX: " << numeric_limits<int>::max() << "\n";
    cout << "INT MIN: " << numeric_limits<int>::min() << "\n";
    cout << "FLOAT MAX: " << numeric_limits<float>::max() << "\n";

    return 0;
}
