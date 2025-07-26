```cpp
#include <iostream> 
using namespace std;

int main() {
    const int uid = 2323;
   //  uid = 123;

    int Balance = 34;
    Balance = 12;

    cout << uid << endl;
    cout << Balance << endl;

   return 0;
}
//OUTPUT:
// 2323
// 12
```
## Data Type Ranges---> see in microsoft 
<img width="1920" height="1080" alt="Screenshot from 2025-07-26 20-49-03" src="https://github.com/user-attachments/assets/baf0fcf1-76f6-4734-b807-59aeeb9aa8ab" />

```cpp
#include <iostream> 
using namespace std;

int main() {
   int TeaPack = 100;
   unsigned posTeaPack = 100;
   signed negTeaPack = -100;

   cout << TeaPack << endl;
   cout << posTeaPack << endl;
   cout << negTeaPack << endl;
//----------------------------------------------
   float Teastore = 100000000;
   long long llTeastore = 10000000;
   long lTeastore = 100000;

   short teasample = 25;
   cout << Teastore << endl;
   cout << llTeastore << endl;
   cout << lTeastore << endl;
   cout << teasample << endl;

   return 0;
}
//OUTPUT:
// 100
// 100
// -100

// 1e+08
// 10000000
// 100000
// 25
```

