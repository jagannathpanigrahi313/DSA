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
```cpp
#include <iostream> 
using namespace std;

int main() {
     
   float teaPrice = 49.99;
   int roundedTeaPrice = (int) teaPrice;

   int teaQuantity = 2;
   double TotalPrice = teaPrice * teaQuantity;

   cout << roundedTeaPrice << endl;
   cout << TotalPrice << endl;

   return 0;
}
//OUTPUT:
// 49
// 99.98
```
## Strings 
Escape Sequence ---> Microsoft
```cpp
#include <iostream> 
#include <string>
using namespace std;

int main() {
     
   string favoriteTea = "Lemon Tea\n";
   string description = "Known as \"best\"Tea";

   // cout << favoriteTea << endl;
   // cout <<  description << endl;
   cout << favoriteTea << description << endl;

   return 0;
}
//OUTPUT:
// Lemon Tea
// Known as "best"Tea
```
# userinput 
```cpp
#include <iostream> 
#include <string>
using namespace std;

int main() {
     
   string userTea;
   int TeaQuantity;


   cout << "What would you like to order in tea ?\n" ;
   getline(cin, userTea);


   // ask for Quantity
   cout << "how many Cups of " << userTea << " would you like to have ? ";
   cin >> TeaQuantity;
   
   cout << TeaQuantity << endl;
   cout << userTea;

   return 0;
}
//OUTPUT:
// What would you like to order in tea ?
// lemon tea
// how many Cups of lemon tea would you like to have ? 2
// 2
// lemon tea
```
