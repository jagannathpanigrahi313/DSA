```cpp
#include <iostream> 
using namespace std;

int main() {
    const int uid = 2323;//const putted therfore cant change
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
Escape Sequence ---> see in Microsoft
```cpp
#include <iostream> 
#include <string>
using namespace std;

int main() {
     
   string favoriteTea = "Lemon Tea\n";
   string description = "Known as \"best\" Tea";

   // cout << favoriteTea << endl;
   // cout <<  description << endl;
   cout << favoriteTea << description << endl;

   return 0;
}
//OUTPUT:
// Lemon Tea
// Known as "best" Tea
```
# user input 
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

# Lecture 6
Q (if satement) write a program that checks if the user wants to order Green Tea. if the user types "Green Tea," the program should confirm their order.
```cpp
#include <iostream>
#include <string> 
using namespace std;

int main() {
  string Teaorder;

    cout << "Enter your tea order"; 
    getline(cin, Teaorder);

    if(Teaorder == "Green Tea") {
      cout << "You have ordered Green Tea" << endl;
    } else {
      cout << "order not recognized" << endl;
    }
    return 0;
}
// OUTPUT:
// Enter your tea orderGreen Tea
// You have ordered Green Tea

// Enter your tea orderle
// order not recognized
```
Q(if-Else statement) write a program that checks if a tea shop is open .if the current hour (input by the user ) is between 8 AM and 6 PM , the shop is open;otherwise, it's closed .
```cpp
#include <iostream>
using namespace std;

int main() {
   int hour;

    cout << "Enter the hour of the day (0-23): ";
    cin >> hour; 
    
    if(hour >= 8 && hour <= 18){
        cout << "The Tea shop is open." << endl;
    } else {
        cout << "The Tea shop is closed." << endl;
    }
    return 0;
}
// OUTPUT:
// Enter the hour of the day (0-23): 5
// The Tea shop is closed.

// Enter the hour of the day (0-23): 9
// The Tea shop is open.
```

Q(Nested if-else ) A tea shop offers discounts based on the number of tea cups ordered. write a program that checks the number of cups ordered and applies a discount :*More than 20 cups: 20% discount 

. Between 10 & 20 cups : 10% discount

. Less than 10 cups :No discount
```cpp
#include <iostream>
using namespace std;

int main() {
   int cups;

   double pricePerCup = 2.5,totalPrice,discount;

    cout << "Enter the number of tea cups: ";
    cin >> cups;

    totalPrice = pricePerCup * cups ;

    if(cups > 20){
        discount = 0.20;
    }else if(cups >= 10 && cups <= 20){
        discount = 0.10;
    }else{
        discount = 0.0;
    }

    totalPrice -= (totalPrice * discount);

    cout << "Total price after discount is : " << totalPrice << endl;
    return 0;
}
// OUTPUT:
// Enter the number of tea cups: 2
// Total price after discount is : 5

// Enter the number of tea cups: 20
// Total price after discount is : 45
```
Q(Switch case) Write a program that lets the user select a tea type from a menu. use a switch statement to display the price based on the selected tea: Green Tea : $2
. Black Tea : $3
. Oolong Tea : $4
```cpp
#include <iostream>
using namespace std;

int main() {
   int choise;
   double price;

   cout << "select your tea\n";
   cout <<"1. Green Tea\n";
   cout <<"2. Lemon Tea\n";
   cout <<"3. Oolong Tea\n";
   cout <<"Enter your choice in number: ";

   cin >> choise;

   switch(choise) {
      case 1:
         price = 2.50;
         cout << "You selected Green Tea. Price: $" << price << endl;
         break;
      case 2:
         price = 3.00;
         cout << "You selected Lemon Tea. Price: $" << price << endl;
         break;
      case 3:
         price = 4.00;
         cout << "You selected Oolong Tea. Price: $" << price << endl;
         break;
      default:
         cout << "Invalid choice! Please select a valid tea option." << endl;
         break;
   }
    return 0;
}
// OUTPUT:
// select your tea
// 1. Green Tea
// 2. Lemon Tea
// 3. Oolong Tea
// Enter your choice in number: 2 
// You selected Lemon Tea. Price: $3
```
# Lecture 7 - Loops
Q(while loop) write a program that keeps track of tea orders.Each time acup of tea is made, decrease the number of cups remaining the loop must run until all cups are surved
```cpp
#include <iostream>
using namespace std;

int main() {
   int teacups;

   cout << "Enter the number of tea cups to server: ";
   cin >> teacups;

   //while loop
    while (teacups > 0) {
        teacups--;
        cout << "Serving tea cup number: \n" << teacups << "remaining" << endl;
    }
    cout << "All tea cups served. " << endl;
    return 0;
}
// OUTPUT:
// Enter the number of tea cups to server: 5
// Serving tea cup number: 
// 4remaining
// Serving tea cup number: 
// 3remaining
// Serving tea cup number: 
// 2remaining
// Serving tea cup number: 
// 1remaining
// Serving tea cup number: 
// 0remaining
// All tea cups served. 

//and person ranned out from tea cups
```
Q(do-while loop)Create a program that ask the if they want more tea. Keep asking them until they type "no" (case-insensetive), using a do - while loop.
```cpp
#include <iostream> 
#include <string>
using namespace std;

int main() {
     
   string response;

   do{
      cout << "Do you want more tea(yes/no): " ;
      getline(cin, response);
   }while(response == "no" || response == "No");
   return 0;
}
//OUTPUT:
// Do you want more tea(yes/no): no
// Do you want more tea(yes/no): No
// Do you want more tea(yes/no): yes
```
Q(For loop) write a program that prints the brewing instructions for making 5 cups of tea.The brewng process should be printed once for each cup using a for loop.
```cpp
#include <iostream> 
#include <string>
using namespace std;

int main() {
     
   int teacups = 5;
   int i = 100; // This variable is declared but not used in the loop

   for(int i = 0; i < teacups; i++) {
      cout << "Brewing cup " << i << " of tea" << endl;
   }
// loop() ke parenthisis me jho variable dalte hai uska scope sirf us ke loop me hi hota hai uske bahar vho variable is not idendifiable

   cout << i << endl; // This will print the value of i declared outside the loop, Not inside the loop
   cout << "Outside of the loop" ;   
   return 0;
}
//OUTPUT:
// Brewing cup 0 of tea
// Brewing cup 1 of tea
// Brewing cup 2 of tea
// Brewing cup 3 of tea
// Brewing cup 4 of tea
// 100
// Outside of the loop

```
Q(Break Keyword) Write a program that keeps serving tea until the user says they've had enough (input 'stop'). use a break statement to ext the loop when the user types 'stop'.
```cpp

```
