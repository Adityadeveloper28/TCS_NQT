# TCS_NQT
Programming question solving

## Contents

This repository contains solutions to common programming problems that appear in the TCS National Qualifier Test (NQT).

### Basic Programs

#### 1. Different Data Types (Different_datatype.cpp)
- Demonstrates various data types in C++
- Shows the size and limits of each data type
- Includes int, float, double, char, bool, long, short, and unsigned int

### Number Operations

#### 1. Fibonacci Sequence (Fibonacci.cpp) 
- Generates the Fibonacci sequence up to n terms
- Displays the complete sequence starting from 0 and 1
- Uses iterative approach for efficiency

#### 2. Sum of Even Numbers (SumofEvenNumbertillN.cpp)
- Calculates the sum of all even numbers up to n
- Takes user input for the limit
- Uses a loop with step size of 2

#### 3. Sum of Even & Odd Numbers (SumOfEven&Odd.cpp)
- Calculates the sum of even numbers and the sum of odd numbers separately
- Uses modulo operator to determine if a number is even or odd
- Displays both sums to the user

#### 4. Reverse a Number (ReverseAnNumber.cpp)
- Reverses the digits of a given integer
- Uses modulo and division operations to extract and rearrange digits
- Includes detailed comments explaining the algorithm

### Array Operations

#### 1. Linear Search (LinearSearch.cpp)
- Implements linear search algorithm to find an element in an array
- Takes user input for array size, elements, and target value
- Reports the index if found or "not found" message

#### 2. Print Array Sum (PrintArraySum.cpp)
- Calculates the sum of all elements in an array
- Uses a vector to store the elements
- Demonstrates iterating through a vector

#### 3. Find Duplicates (FindDuplicate.cpp)
- Identifies and displays duplicate elements in an array
- Uses nested loops to compare elements
- Reports if no duplicates are found

#### 4. Array Intersection (ArrayIntersection.cpp)
- Finds common elements between two arrays
- Takes input for two arrays of different sizes
- Handles duplicate intersections correctly

### String Operations

#### 1. Trim Spaces (TrimSpaces.cpp)
- Removes all spaces from a given string
- Takes user input via getline
- Demonstrates character-by-character string processing

#### 2. String Palindrome (StringPalindrome.cpp)
- Checks if a string is a palindrome
- Ignores non-alphanumeric characters and case
- Uses string reversal to determine palindrome status

#### 3. Pangram Checker (Pangram.cpp)
- Determines if a sentence is a pangram (contains all letters of the alphabet)
- Uses a boolean array to track letter occurrences
- Handles both uppercase and lowercase letters

#### 4. Highest Occurring Character (HighestOccuringCharater.cpp)
- Finds the character with the highest frequency in a string
- Uses unordered_map to count occurrences
- Ignores spaces in the count

#### 5. All Substrings (AllSubString.cpp)
- Generates and prints all possible substrings of a given string
- Uses nested loops to generate substrings
- Demonstrates the substr() function

### Pattern Printing

#### 1. Triangle Star Pattern (TraingeStarPattern.cpp)
- Prints a right-angled triangle pattern using asterisks
- Takes user input for the height of the triangle
- Demonstrates nested loops for pattern printing

#### 2. Square Pattern (SquarePattern.cpp)
- Prints a square pattern using asterisks
- Takes user input for the size of the square
- Shows how to use nested loops for 2D pattern printing

### Conversion Programs

#### 1. Temperature Conversion (FahrenheitToCelsius.cpp)
- Converts temperatures between Fahrenheit and Celsius
- Features a menu-driven interface
- Implements standard temperature conversion formulas

### How to Run

1. Compile with a C++ compiler:
   ```
   g++ -o program_name program_name.cpp
   ```

2. Execute the compiled program:
   ```
   ./program_name
   ```

### Notes
- All programs are written in standard C++ and should work with any C++ compiler
- Programs include user input validation where appropriate
- Code includes comments for better understanding of the implementations