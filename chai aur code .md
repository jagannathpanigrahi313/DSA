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
<img width="1920" height="1080" alt="Screenshot from 2025-07-27 14-34-08" src="https://github.com/user-attachments/assets/9fbf5a85-60d6-42ee-8640-fbc89d5f60cf" />

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
H.W )
![Screenshot from 2025-07-27 13-34-36](https://github.com/user-attachments/assets/be4422fd-5900-4576-8efb-d31f88d99d6b)

challenge 1:
```cpp
#include <iostream>
using namespace std;

int main() {
    string teaType = "Green Tea";
    float pricePerKg = 450.75;
    char rating = 'A';

    cout << "Tea Information:\n";
    cout << "Type: \"" << teaType << "\"\n";
    cout << "Price per kg: ₹" << pricePerKg << "\n";
    cout << "Rating: " << rating << endl;

    return 0;
}
//OUTPUT :
// Tea Information:
// Type: "Green Tea"
// Price per kg: ₹450.75
// Rating: A
```
challenge 2:
```cpp

#include <iostream>
using namespace std;

int main() {
    float basePrice;
    cout << "Enter base price of tea (in ₹): ";
    cin >> basePrice;

    float increasedPrice = basePrice * 1.10f; // 10% increase
    int roundedPrice = static_cast<int>(increasedPrice); // explicit casting

    cout << "Rounded new price after 10% increase: ₹" << roundedPrice << endl;

    return 0;
}
//OUTPUT:
// Enter base price of tea (in ₹): 100
// Rounded new price after 10% increase: ₹110
```
challenge 3:
```cpp

#include <iostream>
#include <limits> // for std::numeric_limits
using namespace std;

int main() {
    // Step 1: Ask the user to enter the tea name using getline
    string favoriteTea;
    int cups;

    // Step 2: Ask how many cups
    cout << "Enter your favorite tea: ";
    getline(cin, favoriteTea); // ✅ First input — no leftover newline here

    cout << "How many cups do you want? ";
    cin >> cups;

    // Step 3: Clear leftover '\n' (newline) from buffer after cin
    // ✅ Flush buffer after reading number
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

      // Step 4: Print the final message, using correct "cup" or "cups"
    cout << "You ordered " << cups << " cup" << (cups == 1 ? "" : "s")
         << " of \"" << favoriteTea << "\" tea. Enjoy!" << endl;

    return 0;
}

// output:
// Enter your favorite tea: lemon tea
// How many cups do you want? 2
// You ordered 2 cups of "lemon tea" tea. Enjoy!
```
Note:
✅ You can remember it like this:
Whenever you write:
```cpp
cin >> number;
getline(cin, text); // and this misbehaves i.e buffer comes then 
```
👉 Just put this in between:
```cpp
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
```
# Lecture 5
a + b , here a,b are operand & + is operator
score = 4 , here it is assignment operator
