# DSA Notes Shraddha Mam

# Introduction

To run a c++ file through terminal in linux
<pre>g++ filename.cpp -o filename && ./filename</pre>
press ctrl + / to put comment in more line one time

;(semicolumn)  it is a statement terminalator like a Fullstop (.) in sentence

0 OR 1 is a binary number

any one binary number is of 1 bit
        8 bits = 1 byte

variables are containersto store data 
          it can be letter/word But word must not stand from any digit

*  diffrence between float and double
| You write           | Works? | Good Practice? | Why?                                                                       |
| ------------------- | ------ | -------------- | -------------------------------------------------------------------------- |
| `float a = 3.14;`   | ✅      | ❌              | 3.14 is a `double`, not exact match                                        |
| `float a = 3.14f;`  | ✅      | ✅              | `f` matches float exactly                                                  |
| `double b = 3.14;`  | ✅      | ✅              | `3.14` is already `double`                                                 |
| `double b = 3.14f;` | ✅      | ❌              | You’re giving a float to a double (less precise → more precise, not ideal) |


Q  diffrence between \n and << end l

#include <iostream>             | OUTPUT: hello world 
using namespace std;            |         jaga 
                                |
int main() {                    | if not put \n then output is 
                                |                              hello worldjaga
    cout << "hello world\n";    |
    cout << "jaga"<<endl;       | NOTE: \n we put only between this "  " only
                                |
 return 0;                      |
}                               |


syntax --> means Rules of c++

An operand is a value or variable on which an operator works.
EX: a + b here a and b are operand
--------------------------------------------------------------------------
1. Single Quotes ' '
Used for: Single characters
Data type: char
Size: 1 byte

Example: 'A', 'z', '1', '#'

ASCII: Yes, 'A' = 65, 'a' = 97, etc.

📌 Use ' ' when you need:
A single letter (e.g., char ch = 'A';)

ASCII value calculations
Character comparisons (like if (ch >= 'A' && ch <= 'Z'))

2. Double Quotes " "`
Used for: Strings of characters
Data type: const char* (or string)
Size: More than 1 byte (depends on string length)

Example: "A", "apple", "123", " " (even one letter is a string)
Ends with null character (\0)

📌 Use " "` when you need:

A word or sentence (e.g., string name = "Alice";)
Printing full text (e.g., cout << "Hello";)
Comparing text (e.g., if (name == "Admin"))
               + is operator
____________________________________________________________________________
345 % 10 = 5 → last digit  
345 / 10 = 34  
34 % 10 = 4 → next digit  
34 / 10 = 3  
3 % 10 = 3 → next digit  
