# Lecture 28 - Strings Part 1

```cpp
#include <iostream>
#include <cstring>   // Required for strlen()
using namespace std;

int main() {
    char str[] = {'a','b','c','\0'};// \0 is null character but takes 1 byte

    cout << strlen(str) << endl;// constant pointers
    cout << str << endl;// while in int arr[] we can print through index 

    return 0;
}
//Output:
// 3
// abc
```

<img width="331" height="269" alt="image" src="https://github.com/user-attachments/assets/fd675f38-ba9e-4796-8178-281852b871da" />

```cpp
#include <iostream>
#include <cstring>   // Required for strlen()
using namespace std;

int main() {
   char str[] = "hello"; // string literals- literal mean whose value cannot be changed

   cout << strlen(str) << endl;// constant pointers
   cout << str[1] << endl;
   cout << str[5] << endl;//null
   cout << str[8] << endl;// garbage value

    return 0;
}
//Output:
// 5
// e

// @
```

<img width="453" height="281" alt="image" src="https://github.com/user-attachments/assets/8301bb46-a65c-4969-96bb-b611d78779cd" />

```cpp
#include <iostream>
#include <cstring>   // Required for strlen()
using namespace std;

int main() {
   char str[100];

   cout << "Enter char array: " << endl;
   cin.getline(str,100,'$');// 'delimeter' means after it no strings will be printed IF not putted then on spce i will break further not will be printed 

   cout << "Output: " << str << endl;

    return 0;
}
//Output:
// Enter char array: 
// jagannath pani$grahi
// Output: jagannath pani
```
## To Fond no. of lettes in sentence
```cpp
#include <iostream>
#include <cstring>   // Required for strlen()
using namespace std;

int main() {
   char str[12];

   cout << "Enter char array: " ;
   cin.getline(str,12);// 'delimeter' means after it no strings will be printed

    for(char ch : str){
        cout << ch << " ";
    }
    cout << endl;
    return 0;
}
//Output:
// Enter char array: Jagannath Panigrahi
// J a g a n n a t h   P
```

```cpp
#include <iostream>
#include <cstring>   // Required for strlen()
using namespace std;

int main() {
   char str[] = "Jagannath Panigrahi";
   int len = 0;

    for(int i = 0; str[i] != '\0'; i++){
        len++;
    }
    cout << "length of string array: " << len << endl;

    return 0;
}
//Output:
// length of string array: 19
```

```cpp
#include <iostream>
#include <cstring>   // Required for strlen()
using namespace std;

int main() {
    string str = "Jagannath Panigrahi";//string is a class & str is variable
    cout << str << endl;

    //contiguous in nature & dynamic => runtime resize
    str = "hello";// string can be modefied while charArr cannot 
    cout << str << endl;

    return 0;
}
//Output:
// Jagannath Panigrahi
// hello
```
```cpp
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str1 = "jagannath";
    string str2 = "Panigrahi";

    string str3 = str1 + str2;//jointing to steps is called  Concatenation 
    cout << str3 << endl;

    return 0;
}
// Output:
// jagannathPanigrahi
```
```cpp
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str1 = "jagannath";
    string str2 = "Panigrahi";
 
    cout << (str1 == str2) << endl;//0 means True 1 means false
    cout << (str1 < str2) << endl;//0,1 comes acc. to Lexicographical order (or "dictionary order")
    cout << str1.length() << endl;

    return 0;
}
// Output:
// 0
// 0
// 9
```

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    getline(cin,str);

    cout << "output: " << str << endl;
    return 0;
}
// Input:
// jagannath panigrahi
// output: jagannath panigrahi
```

## Loops on String 
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    getline(cin,str);

    // for(int i = 0 ; i<= str.length();i++){
    //     cout << str[i] << " ";
    // }
    // cout << endl;
                         //OR(both give same output)
    for(char ch: str){
        cout << ch << " ";
    }
    cout << endl;
    return 0;
}
// Input: jagannath panigrahi
// Output: jagannath panigrahi
```
## Reverse of a string - 344 on LEetcode

<img width="864" height="428" alt="image" src="https://github.com/user-attachments/assets/e8b7cb15-0b54-474e-9e82-d9d6df3a38fc" />

```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0, end = s.size()-1;

        while(st < end){
            swap(s[st++],s[end--]);
        } 
    }
};
```
OR (Solved by STL Strings)
```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
    reverse(s.begin(),s.end());
    }
};
```

```cpp
#include <iostream>
#include <string>
#include <algorithm>   // Required for reverse()
using namespace std;

int main() {
    string str = "jagannath panigrahi";

    reverse(str.begin(),str.end());
    cout << str << endl;
    return 0;
}
//Output:
// iharginap htannagaj
```

Q Find if a string is palindrome or not
```cpp

```
