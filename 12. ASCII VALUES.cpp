ASCII ( American Standard Code for Information Interchange) Value Ranges:
Uppercase A–Z: 65–90

Lowercase a–z: 97–122

Digits 0–9: 48–57

32	Space	' '

58–64	More punctuation	: ; < = > ? @

ASCII is grouped by type: control → symbols → digits → uppercase → more symbols → lowercase.

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
Ends with null character (\0)-----> MEANS \0 is called the null character.
                                          It has ASCII value = 0.
                                         🔍 Why is it needed?
C++ strings (especially old C-style strings) are stored as arrays of characters.
But how does the program know where the string ends?
👉 The null character (\0) is placed at the end to tell the computer:
"Stop here, string ends!"
                        EX:char ch = 'A';    // Only A (1 byte)--->"A" → is 2 bytes: 'A' + '\0'
                                char str[] = "A"; // A + '\0' (2 bytes)

📌 Use " "` when you need:

A word or sentence (e.g., string name = "Alice";)
Printing full text (e.g., cout << "Hello";)
Comparing text (e.g., if (name == "Admin"))
               + is operator


Q  find character lowercase or uppercase

#include <iostream> 
using namespace std;

int main () {
  char ch;
  cout <<"enter char:";
  cin >> ch ;

  if (ch >= 'a'&& ch <= 'z'){
    cout << "lowercase\n";
  }else{
    cout << "uppercase\n";
  }
 return 0;
}
_________________ANOTHER METHOD IS THAT __________________________________________________
#include <iostream> 
using namespace std;

int main () {
  char ch;
  cout <<"enter char:";
  cin >> ch ;

  if (ch >= 65 && ch <= 90){
    cout << "uppercase\n";
  }else{
    cout << "lowercase\n";
  }
 return 0;
}
