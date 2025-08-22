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
### Escape Sequence ---> see in Microsoft
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

# Lecture 6 - Statements
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
#include <iostream> 
#include <string>
using namespace std;

int main() {
     
    string response ;
    
    while(true) {
        cout << "Do you want more tea (type 'stop' to exit)?: " ;
         getline(cin, response);

         if (response == "stop") {
            // Exit the loop 
             cout << "Goodbye!" << endl;
             break;
         }
        
         cout << "Here is your another cup of tea." << endl;
    }
    cout << "No more tea will be served to you." << endl;
   return 0;
}
//OUTPUT:
// Do you want more tea (type 'stop' to exit)?: yes
// Here is your another cup of tea.
// Do you want more tea (type 'stop' to exit)?: l
// Here is your another cup of tea.
// Do you want more tea (type 'stop' to exit)?: 2
// Here is your another cup of tea.
g the tea
// Do you want more tea (type 'stop' to exit)?: stop
// Goodbye!
// No more tea will be served to you.
```
Q(continue Keyword) write a program that skips brewing green tea if the user dislikes it .use a continue  statement to skip over green tea but brew other types of tea in a list.
```cpp
#include <iostream> 
#include <string>
using namespace std;

int main() {
     
    string teaTypes[6] = {"Green Tea", "Black Tea", "Oolong Tea", "White Tea", "Herbal Tea","Orange Tea","Lemon Tea"};//in [] array you can put 7 but not 5

    for(int i = 0; i < 6; i++) {//if extend loop to 7 then one extra line in output will come like :  Brewing... 
      if (teaTypes[i] == "Green Tea"){
         cout << "skipping the " <<teaTypes[i] << endl;
         continue;
      }
        cout << "Brewing " << teaTypes[i] << "..." << endl;
    }
   return 0;
}
//OUTPUT:
// skipping the Green Tea
// Brewing Black Tea...
// Brewing Oolong Tea...
// Brewing White Tea...
// Brewing Herbal Tea...
// Brewing Orange Tea...
// Brewing Lemon Tea..
```
Q(Nested loop) write a program that brews multiple cups of different types of tea.For each type of tea, brew 3 cups using a nested loop
```cpp
#include <iostream> 
#include <string>
using namespace std;

int main() {
     
    string teaTypes[5] = {"Green Tea", "Black Tea", "Oolong Tea", "White Tea", "Herbal Tea"};

    for(int i = 0; i < 5; i++) {
       cout << "Brewing " << teaTypes[i] << "..." << endl;

      for(int j = 1; j <= 3; j++) {
        cout << "Brewing " << j << "cup of" << teaTypes[i] << endl;
      }
    }
   return 0;
}
//OUTPUT:
// Brewing Green Tea...
// Brewing 1cup ofGreen Tea
// Brewing 2cup ofGreen Tea
// Brewing 3cup ofGreen Tea
// Brewing Black Tea...
// Brewing 1cup ofBlack Tea
// Brewing 2cup ofBlack Tea
// Brewing 3cup ofBlack Tea
// Brewing Oolong Tea...
// Brewing 1cup ofOolong Tea
// Brewing 2cup ofOolong Tea
// Brewing 3cup ofOolong Tea
// Brewing White Tea...
// Brewing 1cup ofWhite Tea
// Brewing 2cup ofWhite Tea
// Brewing 3cup ofWhite Tea
// Brewing Herbal Tea...
// Brewing 1cup ofHerbal Tea
// Brewing 2cup ofHerbal Tea
// Brewing 3cup ofHerbal Tea
```
# Lecture - 8 - Functions
```
// returnType functionName (parameters) {
//    // body
// }
```
```cpp
#include <iostream>

int checkTemperature(int temperature) {
   return temperature;
}

int main () {
   int temp = checkTemperature(50);
   std::cout << temp << endl;
   return 0;
}
// Output: 50
```
## Declaretion & Defination of function 
```cpp
#include <iostream>
using namespace std;

// function declaration & definition
int checkTemperature(int temperature) {
   return temperature;
}

//declaration of the function
void serveChai(int cups);

void makeTea() {
   cout << "Boiling water ,adding tea leaves, straining..." << endl;
}

int main () {
   int temp = checkTemperature(50);
   cout << temp << endl;
   makeTea();
   serveChai(5);// calling the function & passing an argument i.e value
   return 0;
}

// defination of the function
void serveChai(int cups) {
   cout << "Serving " << cups << " cups of chai." << endl;
}
// Output: 
// 50
// Boiling water, adding tea leaves, straining...
// Serving 5 cups of chai.
```
```cpp
#include <iostream>
using namespace std;

// function declaration & definition
int checkTemperature(int temperature) {
   return temperature;
}

//declaration of the function
void serveChai(int cups);

void makeTea() {
   cout << "Boiling water ,adding tea leaves, straining..." << endl;
}

// default function is used when no argument is passed in that function
void serveChai(string teaType = "Masala Tea"){
int cups = 4; 
cout << "serving " << teaType << endl;
}

int main () {
   int temp = checkTemperature(50);
   // cout << temp << endl;
   // makeTea();
   // serveChai(5);// calling the function & passing an argument i.e value
   serveChai();
   return 0;
}


// defination of the function
void serveChai(int cups) {
   cout << "Serving " << cups << " cups of chai." << endl;
}

// Output: 
// 50
// Boiling water, adding tea leaves, straining...
// Serving 5 cups of chai.
```
## call by value
```cpp
#include <iostream>
using namespace std;

void pourChai(int cups) {
   cups = cups + 5;
   cout << "poured cups:" << cups << endl;
}

int main () {

   int cups = 10;
   pourChai(cups);
   cout << "Total cups are: " << cups << endl;
   return 0;
}
// Output: 
// poured cups:15
// Total cups are: 10
```
## Call by refrence
```cpp
#include <iostream>
using namespace std;

void pourChai(int & cups) {               //Here, instead of cups we can write other variable & output will remain same
   cups = cups + 5;                       //Here, instead of cups we can write other variable & output will remain same
   cout << "poured cups:" << cups << endl;//Here, instead of cups we can write other variable & output will remain same
}

int main () {

   int cups = 10;
   pourChai(cups);
   cout << "Total cups are: " << cups << endl;
   return 0;
}
// Output: 
// poured cups:15
// Total cups are: 15
```
{scope}
# function overloading--> the datatype kitna No. of parameter leta hai in same function 
```cpp

```
# lambda function
```cpp
#include <iostream>
using namespace std;

int helloWorld () {
   cout << "Hello, World!" << endl;
   return 0;
}
   

int main () {
    // []lambda function
    auto preparedchai = [](int cups){
         cout << "Preparing " << cups << " cups of chai." << endl;
    };
    
    preparedchai(2); // Calling the lambda function with 4 cups of chai
   
   return 0;
}
// Output: 
// Preparing 2 cups of chai.
```
# Lecture 9 - Object Oriented Programming(OOP)

<img width="1240" height="791" alt="Screenshot 2025-08-15 162902" src="https://github.com/user-attachments/assets/c11a04c2-c624-428d-919e-292109321504" />

## Access specifier/modifiers

In C++, there are three **access specifiers**:

- public - members are accessible from outside the class
- private - members cannot be accessed (or viewed) from outside the class
- protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.

```cpp
#include <iostream> 
#include <vector>
using namespace std;


 class Chai{
     public:
        // data members (attribute)
        string TeaName;// Name of the tea
        int servings;// Number of servings
        vector<string> ingredients;// list of ingredients for the tea

        //Member function

        void displayChaiDetails(){
            cout << "Tea Name: " << TeaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients: " ;
            for(string ingridient : ingredients ){
                cout << ingridient << " ";
            } 
            cout << endl;
        }
 };

 int main(){
    //original form 
    Chai chai;//capital letter word hai means class & small letter word means object

    chai.TeaName = "lemon tea";
    chai.servings = 2;
    chai.ingredients = {"water","sugar","tea","ginger"};

    chai.displayChaiDetails();
  
    // duplicate form 
    Chai chaidup;
    
    chaidup.TeaName = "Masala chai";
    chaidup.servings = 4;
    chaidup.ingredients = {"water","tea","ginger","Masala"};

    chaidup.displayChaiDetails();

    return 0;
 }
// OUTPUT:
// Tea Name: lemon tea
// Servings: 2
// Ingredients: water sugar tea ginger
// Tea Name: Masala chai
// Servings: 4
// Ingredients: water tea ginger Masala

```
# Lecture 10 - Array, dynamic memory and Pointers in Cpp
## Array
```cpp 
#include <iostream> 
using namespace std;

int main(){
    int chaiTemperature[5] = {85,88,90,92,95};
    
    cout <<"Chai Temperature: ";
    for(int i = 0; i < 5 ; i++){
        cout << chaiTemperature[i] << "degree C  \n";

    }
    return 0 ;
}
// OUTPUT:
// Chai Temperature: 88degree C
// 90degree C
// 92degree C
// 95degree C
```
```cpp 
#include <iostream> 
using namespace std;

int main(){
    int chaiServed[7] = {50,60,85,88,90,92,95};

        cout << "chai cups served on day one " << chaiServed[0];
        cout << "\nchai cups served on day two " << chaiServed[1];

    return 0 ;
}
// OUTPUT:
// chai cups served on day one 50
//  chai cups served on day two 60
```
## Pointer
*(astrick)---> used to declare Data type
&(Ampersand)---> used to give the refernce of memory
###  1D array
```cpp
#include <iostream> 
using namespace std;

int* PrepareChaiOrders(int cups){
   int* orders = new int[cups];//new ---> dynamic memory ke andar allocate karta hai
   for(int i = 0; i < cups; i++){
      orders[i] = (i + 1) * 10;
   }
   return orders;
}

int main(){
    int cups = 5;
    int* ChaiOrders = PrepareChaiOrders(cups);

    for(int i = 0; i < cups ; i++){
       cout << "cups: " << i + 1 << " has " << ChaiOrders[i] << "ml\n" ;
    }   

    return 0 ;
}
// OUTPUT:
// cups: 1 has 10ml
// cups: 2 has 20ml
// cups: 3 has 30ml
// cups: 4 has 40ml
// cups: 5 has 50ml
```
```cpp
#include <iostream> 
using namespace std;

int* PrepareChaiOrders(int cups){
   int* orders = new int[cups];//new ---> dynamic memory ke andar allocate karta hai
   for(int i = 0; i < cups; i++){
      orders[i] = (i + 1) * 10;
   }
   return orders;
}

int main(){
    int cups = 5;
    int* ChaiOrders = PrepareChaiOrders(cups);

    for(int i = 0; i < cups ; i++){
       cout << "cups: " << i + 1 << " has " << ChaiOrders[i] << "ml\n" ;
    }   

    //memory delete ---> clean up code
    delete[] ChaiOrders;// in long code you will see profit of it
    
    return 0 ;
}
// OUTPUT:
// cups: 1 has 10ml
// cups: 2 has 20ml
// cups: 3 has 30ml
// cups: 4 has 40ml
// cups: 5 has 50ml
```
### 2D Array
```cpp
#include <iostream> 
using namespace std;

int main(){
    int ChaiSales[3][7] = { // first[] is for row & second[] is for collumn
        {10,20,30,40,50,60,70}, // shop 1 sales for 7 days
        {15,22,33,44,55,66,77}, // shop 2 sales for 7 days
        {13,33,44,55,55,66,77}  // shop 3 sales for 7 days
    }; 

    for(int i = 0; i < 3 ;i++){
        cout << "i am in shop: " << i + 1 << "\n";
        for(int j = 0; j < 7l; j++){
            cout << ChaiSales[i][j] << " shop \t ";  
        }
    }
    return 0 ;
}
// OUTPUT:
// i am in shop: 1
// 10 shop          20 shop         30 shop         40 shop         50 shop         60 shop         70 shop      i am in shop: 2
// 15 shop          22 shop         33 shop         44 shop         55 shop         66 shop         77 shop      i am in shop: 3
// 13 shop          33 shop         44 shop         55 shop         55 shop         66 shop         77 shop      
```
# Lecture 11 - Constructor, destructor and Copy Constructor in C++
## Default Chai 
```cpp
#include <iostream> 
#include <vector>

using namespace std;//std::cout<<  << endl;  --->more preferable many times

class Chai{
public:
    string TeaName;
    int Servings;
    vector<string> ingredients;

    //Default constructor---> here class(){  } ---> NO datatype written
    Chai(){
          TeaName = "unknown tea" ;   //functionaliy of a funtion are set
          Servings = 1 ;             //functionaliy of a funtion 
          ingredients = {"Water","Tea Leaves"};  //functionaliy of a funtion 
          cout << "Constuctor Called: " << endl;
    }
    void displayChaiDetails(){
         cout << "Tea Name: " << TeaName << endl;
         cout << "Servings: " << Servings << endl;
         cout << "Ingridient: " ;
         for(string ingridient : ingredients ){
            cout << ingridient << " ";
         }
        cout << endl;
    }
};
int main(){
    //jab bhi object banta hai tabh hi costructor call hota hai
    Chai DefaultChai;//isse he point par costructor call hota haii.e constructor Runs

    DefaultChai.displayChaiDetails();// calling the function to display tea details

    return 0 ;
}
// OUTPUT:
// Constuctor Called: 
// Tea Name: unknown tea
// Servings: 1
// Ingridient: Water Tea Leaves 
```
in one code there can be 1 or more constructor
## Parameter constructor
```cpp
#include <iostream> 
#include <vector>

using namespace std;//std::cout<<  << endl;  --->more preferable many times

class Chai{
public:
    string TeaName;
    int Servings;
    vector<string> ingredients;

    //Parameter constructor
    Chai(string name,int serve,vector<string> ingr){
          TeaName = name ;       //functionaliy of a funtion are set
          Servings = serve;      //functionaliy of a funtion are set
          ingredients = ingr ;  //functionaliy of a funtion are set
          cout << "Param Constuctor called " << endl;
    }
    void displayChaiDetails(){
         cout << "Tea Name: " << TeaName << endl;
         cout << "Servings: " << Servings << endl;
         cout << "Ingridient: " ;
         for(string ingridient : ingredients ){
            cout << ingridient << " ";
         }
        cout << endl;
    }
};
int main(){
    
    Chai lemonTea("Lemon Tea",2,{"Water","lemon","Honey"});

    lemonTea.displayChaiDetails();

    return 0 ;
}
// OUTPUT:
// Param Constuctor called 
// Tea Name: Lemon Tea
// Servings: 2
// Ingridient: Water lemon Honey 
```
## copy constructor
```cpp
#include <iostream> 
#include <vector>

using namespace std;//std::cout<<  << endl;  --->more preferable many times

class Chai{
public:
    string TeaName;
    int Servings;
    vector<string> ingredients;

    //Parameter constructor
    Chai(string name,int serve,vector<string> ingr){
          TeaName = name ;       
          Servings = serve;      
          ingredients = ingr ;  
          cout << "Param Constuctor called " << endl;
    }
    void displayChaiDetails(){
         cout << "Tea Name: " << TeaName << endl;
         cout << "Servings: " << Servings << endl;
         cout << "Ingridient: " ;
         for(string ingridient : ingredients ){
            cout << ingridient << " ";
         }
        cout << endl;
    }
};
int main(){
    
    Chai lemonTea("Lemon Tea",2,{"Water","lemon","Honey"});
    lemonTea.displayChaiDetails();
    
    //copy the object
    Chai copiedChai = lemonTea;
    copiedChai.displayChaiDetails();

    lemonTea.TeaName = "Modified Lemon Tea";

    cout << "Lemon Tea" << endl;
    lemonTea.displayChaiDetails();
    cout << "copied tea" << endl;
    copiedChai.displayChaiDetails();

    return 0 ;
}
// OUTPUT:
// Param Constuctor called 
// Tea Name: Lemon Tea
// Servings: 2
// Ingridient: Water lemon Honey 
// Tea Name: Lemon Tea
// Servings: 2
// Ingridient: Water lemon Honey

// Lemon Tea
// Tea Name: Modified Lemon Tea
// Servings: 2
// Ingridient: Water lemon Honey

// copied tea
// Tea Name: Lemon Tea
// Servings: 2
// Ingridient: Water lemon Honey
```
Till her we dont used copy constuctor and copied BUT when pointers come then problem comes
```cpp
#include <iostream> 
#include <vector>

using namespace std;//std::cout<<  << endl;  --->more preferable many times

class Chai{
public:
    string* TeaName;
    int Servings;
    vector<string> ingredients;

    //Parameter constructor
    Chai(string name,int serve,vector<string> ingr){
          TeaName = new string (name) ;       
          Servings = serve;      
          ingredients = ingr ;  
          cout << "Param Constuctor called " << endl;
    }
    //to clear the memory --> Destructor made
    ~Chai(){
        delete TeaName;
        cout << "Destructor Called :" << endl;
    }

    void displayChaiDetails(){
         cout << "Tea Name: " << *TeaName << endl;
         cout << "Servings: " << Servings << endl;
         cout << "Ingridient: " ;
         for(string ingridient : ingredients ){
            cout << ingridient << " ";
         }
        cout << endl;
    }
};
int main(){
    
    Chai lemonTea("Lemon Tea",2,{"Water","lemon","Honey"});
    lemonTea.displayChaiDetails();
    
    //copy the object
    Chai copiedChai = lemonTea;//Destructor is called
    copiedChai.displayChaiDetails();

    // lemonTea.TeaName = "Modified Lemon Tea";

    // cout << "Lemon Tea" << endl;
    // lemonTea.displayChaiDetails();
    // cout << "copied tea" << endl;
    // copiedChai.displayChaiDetails();

    return 0 ;
}
// OUTPUT:
// Param Constuctor called 
// Tea Name: Lemon Tea
// Servings: 2
// Ingridient: Water lemon Honey 
// Tea Name: Lemon Tea
// Servings: 2
// Ingridient: Water lemon Honey
// Destructor Called :// here must error but i dont get error
// Destructor Called :
```
error corrected
```cpp
#include <iostream> 
#include <vector>

using namespace std;//std::cout<<  << endl;  --->more preferable many times

class Chai{
public:
    string* TeaName;
    int Servings;
    vector<string> ingredients;

    //Parameter constructor
    Chai(string name,int serve,vector<string> ingr){
          TeaName = new string (name) ;       
          Servings = serve;      
          ingredients = ingr ;  
          cout << "Param Constuctor called " << endl;
    }
    // copy constructor
    Chai(Chai& other){
        TeaName = new string(*other.TeaName);
        Servings = other.Servings;
        ingredients = other.ingredients;
        cout << "Copy Constuctor called " << endl;
    }


    //to clear the memory --> Destructor made
    ~Chai(){
        delete TeaName;
        cout << "Destructor Called :" << endl;
    }

    void displayChaiDetails(){
         cout << "Tea Name: " << *TeaName << endl;
         cout << "Servings: " << Servings << endl;
         cout << "Ingridient: " ;
         for(string ingridient : ingredients ){
            cout << ingridient << " ";
         }
        cout << endl;
    }
};
int main(){
    
    Chai lemonTea("Lemon Tea",2,{"Water","lemon","Honey"});
    lemonTea.displayChaiDetails();
    
    //copy the object
    Chai copiedChai = lemonTea;//Destructor is called
    copiedChai.displayChaiDetails();

    // lemonTea.TeaName = "Modified Lemon Tea";

    // cout << "Lemon Tea" << endl;
    // lemonTea.displayChaiDetails();
    // cout << "copied tea" << endl;
    // copiedChai.displayChaiDetails();

    return 0 ;
}
// OUTPUT:
// Param Constuctor called 
// Tea Name: Lemon Tea
// Servings: 2
// Ingridient: Water lemon Honey 
// Copy Constuctor called
// Tea Name: Lemon Tea
// Servings: 2
// Ingridient: Water lemon Honey
// Destructor Called :
// Destructor Called :
```
```cpp
#include <iostream> 
#include <vector>

using namespace std;//std::cout<<  << endl;  --->more preferable many times

class Chai{
public:
    string* TeaName;
    int Servings;
    vector<string> ingredients;

    //Parameter constructor
    Chai(string name,int serve,vector<string> ingr){
          TeaName = new string (name) ;       
          Servings = serve;      
          ingredients = ingr ;  
          cout << "Param Constuctor called " << endl;
    }
    // copy constructor
    Chai(Chai& other){
        TeaName = new string(*other.TeaName);
        Servings = other.Servings;
        ingredients = other.ingredients;
        cout << "Copy Constuctor called " << endl;
    }


    //to clear the memory --> Destructor made
    ~Chai(){
        delete TeaName;
        cout << "Destructor Called :" << endl;
    }

    void displayChaiDetails(){
         cout << "Tea Name: " << *TeaName << endl;
         cout << "Servings: " << Servings << endl;
         cout << "Ingridient: " ;
         for(string ingridient : ingredients ){
            cout << ingridient << " ";
         }
        cout << endl;
    }
};
int main(){
    
    Chai lemonTea("Lemon Tea",2,{"Water","lemon","Honey"});
    //lemonTea.displayChaiDetails();
    
    //copy the object
    Chai copiedChai = lemonTea;//Destructor is called
    //copiedChai.displayChaiDetails();

    *lemonTea.TeaName = "Modified Lemon Tea";

    cout << "Lemon Tea---------" << endl;
    lemonTea.displayChaiDetails();
    cout << "copied tea---------" << endl;
    copiedChai.displayChaiDetails();

    return 0 ;
}
// OUTPUT:
// Param Constuctor called 
// Copy Constuctor called 
// Lemon Tea---------
// Tea Name: Modified Lemon Tea
// Servings: 2
// Ingridient: Water lemon Honey
// copied tea---------
// Tea Name: Lemon Tea
// Servings: 2
// Ingridient: Water lemon Honey
// Destructor Called :
// Destructor Called :
```
# Lecture 
