
# DSA Lecture Videos Notes of Shraddha Mam

# Lecture 2

## Boiler Plate of CPP
```cpp
#include <iostream> // known as preprocessor directive
using namespace std;

// This is the starting point of execution

int main() {
   return 0;
}
```

## Input and output

```cpp                 
#include <iostream>      
using namespace std;       
                           
int main() {               
   int age;                          
   cout << "Enter the age";
   cin >> age;

   cout <<"your age is:"<< age << endl; 
   return 0;               
}
INPUT:                                         OUTPUT: 
         Enter the age ______                           your age is _______
```

## Primitive Data Types

```cpp
(general)

#include <iostream>
using namespace std;

int main() {
  
  int (variable) = 25;
  cout << sizeof(variable)<< endl;//To see the size data tyoe in byte
  cout << variable << emdl;
  
  return 0; 
}
```
### (1) int ----> it stores interger number
```cpp
#include <iostream>
using namespace std;

int main() {
  
  int (age) = 25;
  cout << age << emdl;
  
  return 0; 
}
```
### (2) char 
```cpp
#include <iostream>
using namespace std;

int main() {
  
  char (grade) = 'A'; //to put small char----> "a" (like this you can put)
  cout << grade << emdl;
  
  return 0; 
}
```
### (3) float------->it stores decimal no.
```cpp
#include <iostream>
using namespace std;

int main() {

  float PI = 3.14f;
  cout << PI << endl;

 return 0;
}
```
### (4) bool---> it gives only boolean value i.e true (1) or false(0)
 ```cpp 
#include <iostream>
using namespace std;

int main() {

  bool issafe = true;
  cout << issafe << endl;

 return 0;
}
```
### (5) double----> it stores decimal no.
```cpp
#include <iostream>
using namespace std;

int main() {

  double price = 100.9;
  cout << price << endl;

 return 0;
}
```

## Type Conversion and Type Casting


                        *converting data type from from one type to another*

### (1) type casting 
       (implicit)  this compiler does
       Small byte to big byte 

EX 1: char to int
```cpp
#include <iostream>
using namespace std;

int main() {
  
  char (grade) = 'a';
  int value = grade;// here char data type changed to int data type
  cout << value  << emdl;
  
  return 0; 
}
```
### (2) type casting 
       (Explicit) this Programmer does 
       Big byte to small byte

Ex 1 :double to int
```cpp
#include <iostream>
using namespace std;

int main() {
  
  double (price) = 100.99;
  int newprice = (imt)price;// here double data type changed to int data type
  cout << newprice  << emdl;
  
  return 0; 
}
```

## Binary Operators

this operator needs two operand

### i) ARITMETIC OPERATOR
```cpp
#include <iostream>
using namespace std ;   
    
int main() {
  int a = 11, b = 5;

  cout << "sum = "<< (a + b) << endl;
  cout << "difference = "<< (a - b) << endl;
  cout << "product = "<< (a * b) << endl;
  cout << "division = "<< (a / b) << endl; // we do not consider number after decimal in c++
  cout << "modulo = " << (a % b) << endl;
  return 0; 
}
```
 ---------------------------------------------------------------------------------------------------------  
```cpp
#include <iostream> 
using namespace std ;

int main() {
  int a = 5;
  double b = 2;

  cout << (a / b) << endl ;//2.5
  return 0;
}
```


BY type casting method
```cpp
#include <iostream> 
using namespace std ;

int main() {
  
  cout << (5 / (double)2) << endl;//2.5
  return 0;
}
```

```cpp
#include <iostream>
using namespace std ;   
    
int main() {

  int ans = (5/(double)2);
  cout <<ans<<endl;// 2
  return 0;
}
```
### ii) RELATIONAL OPERATOR  --> give boolean value
```cpp
#include <iostream>
using namespace std ;   
    
int main() {

  cout << (3 < 5) << endl;//true -> 1
  cout << (3 > 5) << endl;//false -> 0
  cout << (3 <= 5) << endl;//true -> 1
  cout << (3 >= 5) << endl;//false -> 0
  cout << (3 == 3) << endl;//true -> 1
  cout << (3 != 5) << endl; //true -> 1
  return 0;
}
```
### iii) LOGICAL OPERAIOR -->(1) OR (||)pipe perator 
                      |----> any one true then true
                      |---->cout << (  ) || (  ) << endl;

              (2) AND (&&)ampersand
                   |---->any one false then false
                   |----> cout << (  ) || (  ) << endl;

              (3) NOT (!)
                  |---->reverse the boolean value
                  |---->cout << !( ) << endl ;


## Sum of Two Numbers

psuedo code 

1 input a & b 
2 sum = a + b
3 print sum

```cpp
#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "enter a:";
    cin >> a;

    cout << " enter b:";
    cin >> b;

    int sum a + b ;
    cout << "sum = "<< sum <<endl;
    return 0;
}
```

## Unary Operators


this operator needs only one operand

### 1. increment++
```cpp
#include <iostream>
using namespace std ;   
   
int main() {
   int a = 10;

   int b = a++; //kaam : update -->post increment operator
   cout << "b = "<< b << endl;//10
  cout << "a = "<< a << endl; //11
  return 0;
}
```
```cpp
#include <iostream>
using namespace std ;   
    
int main() {
   int a = 10;

   int b = ++a; //update : kaam --> pre increment operator
   cout << "b = "<< b << endl;//11
  cout << "a = "<< a << endl; //11
  return 0;
}
```
### 2. decrement--
```cpp
  #include <iostream>
using namespace std ;   
    
int main() {
   int a = 10;

   int b = a--; //kaam : update -->post decrement operator
   cout << "b = "<< b << endl;//10
  cout << "a = "<< a << endl; //9
  return 0;
}
```
```cpp
#include <iostream>
using namespace std ;   
    
int main() {
   int a = 10;

   int b = --a; //update : kaam --> pre decrement operator
   cout << "b = "<< b << endl;//9
  cout << "a = "<< a << endl; //9
  return 0;
}
```
## conditional statement(if-else)

```cpp
general 

#include <iostream>
using namespace std;

int main(){

if (condition ){
    cout <<"________\n";//true then 
   
} else {
      cout << "________\n";//false then
   
}
return 0;
}
```
______________________________________________________________________________
Q 1) to check a number is positive or negative
```cpp
#include <iostream>
using namespace std;

int main(){
   int n = -5;

if (n >= 0){
    cout <<"n is positive\n";
} else {
      cout << "n is negative\n";
}
return 0;
}
```
Q 2) to check a person can vote or not through its age
```cpp
#include <iostream>
using namespace std;

int main(){
  int age;
  cout << "enter the age:";
  cin >> age;

  if (age >= 18){
     cout << "you can vote\n";
  } else {
    cout <<"you can't vote\n";
  }

return 0;
}
```
Q 3) to check a number is odd or even 
```cpp
#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "enter the number:";
  cin >> n;

  if (n%2 == 0){
 cout << "even\n";
 cout << "bye \n";//you can put maby outputs 
     
  } else {
    cout <<"odd\n";
  }

return 0;
)
```

## Conditional Statement - if else if else
```cpp
general
#include <iostream>
using namespace std;

int main(){

if (condition ){
    cout <<"________\n";//true then 
   
} else if (  ){
      cout <<"________\n";//(  )true then
   
}
  else if(  ){
    cout <<"________\n";//(  )true then
  }//you can continue but end must wit else
  else{
     cout <<"________\n";//false then
  }

    
return 0;
}
```
___________________________________________________________________________________

Q 1. to check a student grade through marks
```cpp
#include <iostream>
using namespace std;

int main(){
    int marks;
    cout  << "enter marks : ";
    cin >> marks ;
  
if (marks >= 90 ){
    cout <<"A\n"; 
   
} else if (marks >= 80 && marks < 90){
      cout <<"B\n";
}
  else{
     cout <<"C\n";
  }
return 0;
}
```

## ASCII Values

```cpp
general
#include <iostream>
using namespace std;

int main(){

if (condition ){
    cout <<"________\n";//true then 
   
} else if (  ){
      cout <<"________\n";//(  )true then
   
}
  else if(  ){
    cout <<"________\n";//(  )true then
  }//you can continue but end must wit else
  else{
     cout <<"________\n";//false then
  }

    
return 0;
}
```
___________________________________________________________________________________

Q 1. to check a student grade through marks
```cpp
#include <iostream>
using namespace std;

int main(){
    int marks;
    cout  << "enter marks : ";
    cin >> marks ;
  
if (marks >= 90 ){
    cout <<"A\n"; 
   
} else if (marks >= 80 && marks < 90){
      cout <<"B\n";
}
  else{
     cout <<"C\n";
  }
return 0;
}
```

## Ternary Statement

this are statement which can be written instead of if -else statement

condition? statement 1: statement 2;

```cpp
#include <iostream> 
using namespace std;

int main () {
  int n= -45;

  cout << (n >= 0?"postive":"negative")<<endl;
 return 0;
}
```

## Loops

note: count = count +1 OR count + = 1 OR count++
      i =  i +2 OR i + = 2 
  
### 1 ) while loop

Q 1. print 1 to 10 
```cpp  
#include <iostream>    
using namespace std;     
                         
int main () {            
  int count = 1;         

  while (count <= 10){
    cout << count <<" ";
    count++;// if i not put this then output will infinite times 1
  }
  cout <<endl;//output : 1 2 3 4 5 6 7 8 9 10 
 return 0;
}
```
Q 2. print 1 to n 
```cpp
#include <iostream>    |output :1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 
using namespace std;    
                        
int main () {           
  int n = 50;           
  int count = 1;

  while (count <= n){
    cout << count <<" ";
    count++;//if i not put this then output will infinite times 1
  }
  
  cout <<endl;
 return 0;
}
```
_______________________________________________________________________________________
### 2 ) for loop
```cpp
#include <iostream>     
using namespace std;     
                         
int main () {            
  int n = 10;

  for (int i = 1; i <= n;i = i+2){// this middle term will run then update this is known as iteration
     cout << i <<" ";//output : 1 3 5 7 9
  }
      cout << endl;
return 0;
}
```
Q 1) print sum of numbers from 1 to n
 ```cpp     
#include <iostream>           
using namespace std;          
                        
int main () {
  int n = 50;
  int sum  = 0;
      
 for( int i= 1;i <= n; i++){
       sum += i;
 }
      
  cout<<"sum = "<< sum << endl;//output : sum = 1275
 return 0;
}
```

```cpp
#include <iostream>           
using namespace std;          
                        
int main () {
  int n = 50;
  int sum  = 0;
      
 for( int i= 1;i <= n; i++){
       sum += i;
       if(i == 5){
           break;// this is a keyword which tkes out from loop 
       }
 }
      
  cout<<"sum = "<< sum << endl;//output : sum = 15
 return 0;
}
```
Q 2) sum of all odd numbers from 1 to n
```cpp
#include <iostream>     
using namespace std;     
                         
int main () {            
  int n  = 50;
  int oddsum = 0;

  for (int i = 1 ; i <= n; i++){
      if (i%2 != 0){
          oddsum += i ;
          }
      }
      
  cout <<"odd sum = "<< oddsum <<endl;// output: oddsum = 625 
 return 0;
}
```
_____________________________________________________________________________________________
### 3) do-while loop
```cpp
#include <iostream>           
using namespace std;          
                        
int main () {
 do {
       cout<< "hello world\n";
 }while (3 > 5);
       
 return 0;
}
```
Q 1) print 1 to n numbers
```cpp
#include <iostream>           
using namespace std;          
                        
int main () {
    int n = 10;
    int i = 1; 
    
     do {
         cout<< i << " ";
         i++;  
     }while (i <= n );

      cout << endl;//1 2 3 4 5 6 7 8 9 10 
      return 0;
}
```
**Q 2) check if a number is prime or not
      
```cpp
#include <iostream>           
using namespace std;          
                        
int main () {
    int n = 7;
    bool isprime = true;

    for (int i = 2;i <= n-1; i++){//loop is running from 2 to n-1 
        if(n % i == 0 ) {
           isprime = false ;
            break;
        }
    }

if(isprime == true){
   cout << "prime no\n";
} else {
    cout << "non prime no\n";
}

// isprime -> true -> prime
// isprime -> false -> non prime
return 0;
}

```
----------------------------------------------another method-----------------------------------------------------------------
```cpp
#include <iostream>           
using namespace std;          
                        
int main () {
    int n = 7;
    bool isprime = true;

    for (int i = 2; i * i <= n ; i++){//loop is runing from 2 to (underroot of n) Here maximum i value is underroot of n
        if(n % i == 0 ) {
           isprime = false ;
            break;
        }
    }

if(isprime == true){
   cout << "prime no\n";
} else {
    cout << "non prime no\n";
}

// isprime -> true -> prime
// isprime -> false -> non prime
return 0;
}
```

## Nested Loop

 it means loop inside a loop

Q 1) to print 5 times  * in 5 line
```cpp
#include <iostream>
using namespace std;

int main() {

    for (int i=1; i<= 5; i++){// this middle term will run then update this is known as iteration
        cout << "*****"<<endl;
    }
return 0;
}
```
Q 2) to print x times * in one line 
```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    for (int i= 1 ; i<=x ;i++){
        cout <<"x";
    }
return 0;
}
```
Q 3) to print x times * in 5 line 
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i= 1 ; i<=5 ;i++) {
        int x = 10;
        for (int i= 1 ; i<=x ;i++){
             cout <<"x";
        }
        cout << endl;
     }
return 0;
}
```
Q 4) to print x times * in n line
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i= 1 ; i <= n ;i++) {//outerloop
        int x = 10;
        for (int j= 1 ; j<=x ;j++){//inner loop
             cout <<"x";
        }
        cout << endl;
     }
return 0;
}
```

## Homework

Q 1) sum of all numbers from 1 to N which are divisible by K
```cpp
#include <iostream>
using namespace std;

int main() {
    int N, K;
    cout << "Enter N: ";
    cin >> N;
    cout << "Enter K (divisor): ";
    cin >> K;

    cout << "Numbers divisible by " << K << " from 1 to " << N << ":\n";

    for (int i = K; i <= N; i += K) {// WE icrement by k so it will increment by k only
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
```
Q 2) print factorial of a single number N
```cpp
#include <iostream>             // Include input-output library
using namespace std;            // So we can use cout, cin without std::

int main() {
    int N;                      // Variable to store user input
    cout << "Enter a number: "; // Ask user for a number
    cin >> N;                   // Take input from user

    long long factorial = 1;    // Initialize factorial to 1 (long long for large numbers)

    for (int i = 1; i <= N; i++) {
        factorial *= i;         // Multiply factorial with each i from 1 to N
    }

    cout << "Factorial of " << N << " is: " << factorial << endl;  // Output the result

    return 0;                   // End of program
}
```
Q 3)print Factorial from 1 to 6(increasing  order)
 ```cpp 
#include <iostream>             // Include input-output functions
using namespace std;            // Avoid typing std:: repeatedly

int main() {
    long long factorial = 1;    // Start with 1 for multiplication

    for (int i = 1; i <= 6; i++) {
        factorial *= i;         // Multiply with current i to get factorial
        cout << "Factorial of " << i << " is: " << factorial << endl;
                                // Print factorial of current i
    }

    return 0;                   // End of program
}
```
----------------------------------------------------------------------------------
Q 4) Print factorials from 6 to 1 (reverse order)
 ```cpp 
#include <iostream>             // For input/output
using namespace std;            // Use standard namespace

int main() {
    long long factorial = 1;    // Declare and initialize factorial to 1

    // First calculate 6!
    for (int i = 1; i <= 6; i++) {
        factorial *= i;         // Multiply to get 6! = 720
    }

    // Now print factorials from 6 to 1 in reverse order
    for (int i = 6; i >= 1; i--) {
        cout << "Factorial of " << i << " is: " << factorial << endl;
                                // Print the current factorial
        factorial /= i;         // Divide by i to get (i-1)! for next loop
    }

    return 0;                   // End of program
}
```

# Lecture 4 -----> Patern Problems


---------To print n lines (rows), the outer loop must run n times.
|||||||||To print n symbols (or words) in each line, the inner
          loop must run n times for each outer loop iteration.

generaly we start the algorithm loops from i=0 to j=0 
        EX: if a loop is starting from i=1 to n (to print n no. numbers of line)-------
                                       i=0 to n-1 (to print n no. numbers of line)----| this both are same

## 1) square pattern 
                   HERE, outerloop (no. lines)---> n times
                         inner loop(no. words) ----> n no's in each line ntimes
          
                              1st type                    
### i) in the form of stars
```cpp
#include <iostream>
using namespace std;

int main () {
   int n = 4;

   for(int i=0; i<n; i++){//OR PUT(int i=0 ; i<=n-1 ; i++ )
       for(int j= 1; j<= n; j++){
           cout << " * ";// in this case to put space between stars in eaach line we can put her only 
       }
       cout << endl;
   }
   return 0;
}
//OUTPUT:
// *  *  *  * 
//*  *  *  * 
// *  *  *  * 
// *  *  *  *
```
----------------------------------------------------------------------------------------------------------
                                2nd type
### i) in the form of numbers
![Image](https://github.com/user-attachments/assets/0f4d4b5b-3875-4612-aaaa-80d9dd592291)

```cpp
#include <iostream>
using namespace std;

int main () {
   int n = 4;

   for(int i=1; i<=n; i++){//outer

       for(int j= 1; j<= n; j++){//inner
           cout << j <<" ";//<<" " this is to put space between numbers in each line (ALWAYS REMEMBER)
       }
       cout << endl; 
   }
   return 0;
}
// OUTPUT:
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4
```
------------------------------------------------------------------------------------------------       
### iii) in the form of characters
```cpp          
#include <iostream>
using namespace std;

int main () {
   int n = 4;
   //char ch = 'A'; 
   for(int i=0; i<n; i++){
       char ch = 'A';
       for(int j= 0; j< n; j++){
           cout << ch <<" ";
           ch = ch + 1;//IF YOU DONT PUT THIS THEN OUUPUT IS:A A A A 
                                                         //  A A A A 
                                                         //  A A A A 
                                                         //  A A A A 
       }
       cout << endl;
   }
   return 0;
}
// OUTPUT:
// A B C D 
// A B C D 
// A B C D 
// A B C D
```
-----------------------------------------------------------------------------------------------------
                           3rd type continous square pattern 
                           (Here we make a variable & update that)
### i) in form of numbers
```cpp
#include <iostream>
using namespace std;

int main () {
   int n = 4;
   
   int num = 1;

   for(int i=0; i<n; i++){
       for(int j= 0; j< n; j++){
           cout << num <<" ";
           num++;
       }
       cout << endl;
   }
   
   cout << "after pattern : "<< num << endl;//this is to verify your dry run thinking is correct or not

   return 0;
}
// OUTPUT:
// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 
// 13 14 15 16 
// after pattern : 17
```
__________________________________________________________________________________________________________
### ii) in form of characters
```cpp
#include <iostream>
using namespace std;

int main () {
   int n = 4;
   
   char ch = 'a';

   for(int i=0; i<n; i++){
       for(int j= 0; j< n; j++){
           cout << ch <<" ";
           ch++;
       }
       cout << endl;
   }
   
   cout << "after pattern : "<< ch << endl;//this is to verify your dry run thinking is correct or not

   return 0;
}
// OUTPUT:
// a b c d 
// e f g h 
// i j k l 
// m n o p 
// after pattern : q
```

## Triangle Pattern Problems

Outer loop	Controls the rows
Inner loop	Prints character multiple times per row

HERE, outerloop (no. lines)---> 0 to n-1
      inner loop(no. words) ----> 1 to i+1
                                  0 to i

                                           1st type( Same Character Repeated Per Row)
### 1) in the from of  numbers
```cpp
#include <iostream>
using namespace std;

int main () {
   int n = 4;
   
   for(int i=0; i<n; i++){
       for(int j= 0; j< i+1; j++){
           cout <<" *";//OUTPUT: *
                        //       * *
                        //       * * *
                      //         * * * *
       }
       cout << endl;
   }
   return 0;
}
```
-----------------------------------------------------------------------
### 2) in the from of  numbers 
```cpp
#include <iostream>
using namespace std;

int main () {
   int n = 4;
   
   for(int i=0; i<n; i++){
       for(int j= 0; j< i+1; j++){
           cout <<(i+1)<<" ";
       }
       cout << endl;// OUTPUT:1 
//                            2 2 
//                            3 3 3 
//                            4 4 4 4
   }
   
   return 0;
}
```
---------------------------------------------------------------
### 3) in the from of characters 
```cpp
#include <iostream>
using namespace std;

int main () {
    char ch = 'a';  // start with 'a'

    for(int i = 1; i <= 5; i++) {  // total 5 rows (change as needed)
        for(int j = 1; j <= i; j++) {
            cout << ch << " ";
        }
        ch++;  // move to next character for next row
        cout << endl;  //OUTPUT: a
                     //          b b 
                    //           c c c 
                   //            d d d d 
                  //             e e e e e 
    }
    return 0;
}
```
----------------------------------------------------------------------------------------------
                                        2nd type (Character Increment Pattern)
```cpp
#include <iostream>
using namespace std;

int main () {
   char ch = 'a';

   for(int i = 0; i < 5; i++) {  // limit number of rows (say 5 rows)
       for(int j = 0; j <= i; j++) {
           cout << ch++ << " ";//OUTPUT: a 
                              //         b c 
                              //         d e f 
                              //         g h i j 
                              //         k l m n o 
       }
       cout << endl;
   }

   return 0;
}
```
------------------------------------------------------------------------------------------------------
                         3rd type ( Left-Aligned Number Triangle)      
```cpp
#include <iostream>
using namespace std;

int main () {
    int n = 5 ;

    for(int i = 1; i <= n; i++) { 
        for(int j = 1; j <= i; j++) {
            cout << j << " ";//OUTPUT:1 
                             //       1 2 
                             //       1 2 3 
                             //       1 2 3 4 
                             //       1 2 3 4 5 
        }
        cout << endl;
    }

    return 0;
}
```
----------------------------------------------------------------------------------------------------
   NOTE : THE cout line where output comes due that all types made till here
----------------------------------------------------------------------------------------------------------
                                   REVERSE triangle pattern
I ) in the form of numbers
```cpp
#include <iostream>
using namespace std;

int main () {
    int n = 4;

    for(int i = 0; i < n; i++) { 
        for(int j = i+1; j > 0; j--) {// bacward loop
            cout << j << " ";
        }
        cout << endl;// OUTPUT : 1 
                    //           2 1 
                    //           3 2 1 
                    //           4 3 2 1 
    }

    return 0;
}
```
ii) in the form of characters
```cpp
#include <iostream>
using namespace std;

int main () {
    int n = 4;

    for(int i = 0; i < n; i++) { 
        char ch = 'A' + i;         // Start letter for this row

        for(int j = 0; j <= i; j++) {
            cout << char(ch - j) << " ";  // Print letters in reverse    // OUTPUT : A
        }                                                                //          B A
                                                                         //          C B A
        cout << endl;              // Move to next line                  //          D C B A
    }

    return 0;
}
```

## Floyd's Triangle Pattern


1) in the from of  numbers
```cpp
#include <iostream>
using namespace std;

int main () {
   int n = 4;

  int num = 1; 
  
   for(int i=0; i<n; i++){
       for(int j= 0; j< i+1; j++){
           cout << num ;//OUTPUT: 1
           num++;       //        23
                        //        456
                        //        78910
       }
       cout << endl;
   }
   return 0;
}
```
--------------------------------------------------------------------------------
2) in the from of  characters
```cpp
#include <iostream>
using namespace std;

int main () {
   int n = 4;

char ch = 'A'; 
  
   for(int i=0; i< n ; i++){
       for(int j= 0; j< i+1; j++){
           cout << ch << " ";
           ch++;
       }
       cout << endl;
   }
   return 0;
}
// OUTPUT : A 
//          B C 
//          D E F 
//          G H I J
```

## Inverted Triangle Pattern
![Image](https://github.com/user-attachments/assets/4190d8a3-fe38-4b46-bc97-72c2c648a66a)


Q1)
```cpp
#include <iostream>
using namespace std;

int main () {
    int n = 4;

    int num = 1;
    for(int i = 0; i < n; i++) { 
        //spaces 
        for(int j = 0; j < i; j++) {
            cout << " ";
        }

        //nums
        for( int j = 0;j< n-i;j++){
            cout << i+1 ;//if you will put <<" "; this then we will get pyramid structure
            
                         //output:1111
                          //       222
                          //        33
                          //         4
        }
        cout << endl;              // Move to next line
    }

    return 0;
}
```
--------------------------------------------------------------------
Q2)
```cpp
#include <iostream>
using namespace std;

int main () {
    char ch = 'B'; // starting character

    for (int i = 0; i < 3; i++) { // 3 lines
        // Print spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Print characters (3 - i times)
        for (int j = 0; j < 3 - i; j++) {
            cout << char(ch + i);//if you will put <<" "; this then we will get pyramid structure
                                 //OUTPUT :
                                 //         BBB
        }                       //           CC
                                //            D
        cout << endl;
    }

    return 0;
}
```
-------------------------------------------------------------------------------
Q3)
```cpp
#include <iostream>
using namespace std;

int main () {
    char ch = 'A'; // starting character

    for (int i = 0; i < 4; i++) { // 4 lines
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Print characters (4 - i times)
        for (int j = 0; j < 4 - i; j++) {
            cout << ch;//OUTPUT:AAAA
                      //         BBB
                      //          CC
                      //           D

        }

        ch++; // move to next character
        cout << endl;
    }

    return 0;
}
```

## Pyramid Pattern
![Image](https://github.com/user-attachments/assets/d1a45d2a-5ec8-4da8-8300-1b3e15bdd267)
```cpp
#include <iostream>
using namespace std;

int main () {
    int n = 4;

    for (int i=0;i<n;i++){
        // spaces : n-i-1
        for (int j=0; j<n-i-1;j++){
            cout << " ";
        }
    
         //nums1 : i+1
         for(int j=1;j<=i+1; j++){
            cout<< j;
         }
            
         //nums2
         for (int j=i; j>0;j--){
            cout<< j;
         }
         cout<< endl;
    }     
    return 0;
}
//OUTPUT :
//   1
//  121
// 12321
//1234321
```
-------------------------------------------------------------------
```cpp 
#include <iostream>
using namespace std;

int main () {
    int n = 8;

    for (int i=0;i<n;i++){
        // spaces : n-i-1
        for (int j=0; j<n-i-1;j++){
            cout << " ";
        }
    
         //nums1 : i+1
         for(int j=1;j<=i+1; j++){
            cout<< j;
         }
            
         //nums2
         for (int j=i; j>0;j--){
            cout<< j;
         }
         cout<< endl;
    }     
    return 0;
}
//OUTPUT :
//       1
//      121
//     12321
//    1234321
//   123454321
//  12345654321
// 1234567654321
//123456787654321
```

## Hollow Diamond pattern
![Image](https://github.com/user-attachments/assets/0b8b13b2-ddbd-4253-994e-c4e37a591965)

![Image](https://github.com/user-attachments/assets/81f4c567-8214-4078-8f13-d9945c7e011d)
```cpp
#include <iostream>
using namespace std;

int main () {
    int n = 4;
    // top
    for (int i=0;i<n;i++){
        // spaces : n-i-1
        for (int j=0; j<n-i-1;j++){
            cout << " ";
        }
    
         cout << "*";

         if(i!= 0){
            //spaces
            for(int j = 0;j<2*i-1;j++){
                cout << " ";
            }
            cout << "*";
         }
         cout<< endl;
    } 


    // bottom
    for(int i =0; i< n-1;i++){
        //spaces
        for (int j = 0; j< i+1;j++){
            cout << " ";
        }

        cout<<"*";

        if (i != n-2){//one correction done 
            //spaces
            for (int j=0;j< 2*(n-i)-5;j++){     // 2*(n-2-i)-1 = 2n-4-2i-1 = 2(n-i)-5
                cout<<" ";
            }
            cout <<"*";
        }
        cout<< endl;
    }
       
    return 0;
}
//OUTPUT : 
//   *
//  * *
// *   *
//*     *
// *   *
//  * *
//   *
```



## Butterfly Pattern
![Image](https://github.com/user-attachments/assets/060db60f-a4b6-46eb-8478-a5779e68a37e)
```cpp

#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // ----------- Upper Half -----------
    for (int i = 1; i <= n; i++) {
        // Print left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Print spaces (2 * (n - i))
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
OUTPUT:
*      *         // 1 star, 6 spaces, 1 star
**    **         // 2 stars, 4 spaces, 2 stars
***  ***         // 3 stars, 2 spaces, 3 stars
********         // 4 stars, 0 spaces, 4 stars
********         // Lower half starts
***  ***
**    **
*      *

        // Print right stars (same as left)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Move to next line
        cout << endl;
    }

    // ----------- Lower Half -----------
    for (int i = n; i >= 1; i--) {
        // Print left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Print spaces (2 * (n - i))
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        // Print right stars (same as left)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}
```

# Lecture 5 - Functions

## What are Functions

Function defination : it is used when we have to any same thing again & again after sometimes 

Function syntax : 

```cpp
returntype printhello(){

cout <<"hello";

}
```

Not to bring returndency we use this means same code again and again

-----------------------------------------------------------------------------------------
```cpp
#include <iostream>
using namespace std;

//function defination 
void printhello (){
     cout << "hello\n";
}

int main() {
    //function call / invoke 
    printhello();
    printhello();
    //like this many times in code 
    return 0;
}
//OUTPUT :hello
//        hello
```
------------------------------------------------------------------------
```cpp
#include <iostream>
using namespace std;

//function defination 
int printhello (){
     cout << "hello\n";
     return 3;
}

int main() {
    //function call / invoke 
    int val = printhello();
    cout <<"val = " << val <<endl;
    
    return 0;
}
//OUTPUT:hello
//       val = 3
```
-----------------------------------------------------------------------------------
parameters---->means input---> i.e are nothing but the copy of arguments

arguments are the actual values passed through a function--> they are literals means values that cannot change

Function syntax means input

```cpp  
#include <iostream>
using namespace std;

//sum of two numbers
int sum (int a, int b ){
    int s = a + b ;
    return s ;
}
int main() {
    cout << sum (10 , 5);

    return 0;
}
//OUTPUT : 15
```
-----------------------------------------------------------------------------------
```cpp
#include <iostream>
using namespace std;

//sum of two numbers
double sum (double a, double b ){
    double s = a + b ;
    return s ;
}
int main() {
    cout << sum (10.5 , 5.4);

    return 0;
}
//OUTPUT : 15.9
```
  -----------------------------------------------------------------------------
```cpp
#include <iostream>
using namespace std;

//min of two numbers
int minoftwo (int a, int b ){// parameters are nothing but the copy of arguments 
    if (a < b){
        return a;
    } else {
    return b;
    }
}

int main() {
    cout << "min = "<< minoftwo(5,3) << endl;//arguments are the actual values passed through a function

    return 0;
}
//OUTPUT : min = 3
```
__________________________________________________________________________________________________
Q 1) calculate sum of numbers from 1 to N
```cpp
#include <iostream>
using namespace std;

int sumN (int n){
    int sum = 0;

    for (int i = 1; i <= n; i++){
        sum += i;
    }
    return sum ;
}
int main (){
    cout << sumN(5) << endl;
    cout << sumN(10) << endl;
    return 0;
}
```
_______________________________________________________________________________________________________
Q 2) calculate N factorial?
```cpp
#include <iostream>
using namespace std;

int factorialN (int n){
    int fact = 1;

    for (int i = 1; i <= n; i++){
        fact*= i;//fact = fact * i
    }
    return fact;
}
int main (){
    cout << factorialN(4) << endl;
    cout << factorialN(5) << endl;
    return 0;
}
//OUTPUT :
//24
//120
```

## Function Memory

![Image](https://github.com/user-attachments/assets/fbf169a5-bbd6-4b5e-8432-098c427c9ae9)
![Image](https://github.com/user-attachments/assets/fe4f6d5a-9e91-4679-93e0-fc477ffad96a)


1) Every function is stored in this stack memory in the form of stack frames
   
2) function ke jitne bhi related variables hote he vho uni ke sath Function kepure logic kesath stack frame me store hote hai
3) jis bhi  function me hum abhi hai i.e hamara contrpl hai vho call stack ke sabse upar rahenge & jaise hi ham return kardenge hum us function se bahar ho jayenge
   
![Image](https://github.com/user-attachments/assets/472abf8a-1418-479b-b83c-ea765008de6e)

4) in any function return statement is last statement after that if you will cout anything then it will not  come
5) we can write return;---> it means no value return
   this you can write between any statement in void function


## Pass by value

![Image](https://github.com/user-attachments/assets/36f0c539-5655-43e7-8def-cc1bed9e1619)

```cpp
#include <iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}
int main (){
    int x= 5, y= 4;
    cout << sum(x,y) << endl;
    return 0;
}
//OUTPUT : 9
```
```cpp
#include <iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}
int main (){
    int a = 5, b= 4;
    cout << sum(a,b) << endl;
    return 0;
}
//OUTPUT : 9
```
```cpp
#include <iostream>
using namespace std;

int sum(int a, int b){
    a = a + 10;//15
    b = b + 10;//14
    return a + b;//29
}
int main (){
    int a= 5, b= 4;
    cout << sum(a,b) << endl;

    cout << a << endl;//5
    cout << b << endl;//4
    return 0;
}
//output :
29
5
4
```
```cpp
#include <iostream>
using namespace std;

void changex(int x){
   x = 2 * x;
   cout << "x = "<< x << endl;
}
int main (){
    int x = 10;
    changex(x);

    cout<<"x = "<< x << endl;
    return 0;
}
//OUTPUT:
//x = 10
//x = 5
```
Q 1) calculate sum of digits of a number
![Image](https://github.com/user-attachments/assets/f78bcf02-9fed-4151-90c8-dbade2c2d5c5)
```cpp
#include <iostream>
using namespace std;

int sumofdigits(int num){
    int digsum = 0;

    while(num > 0){
        int lastdig = num % 10;
        num /= 10;

        digsum += lastdig;
    }
    return digsum;
}
int main (){
   cout << "sum = " << sumofdigits(2356) <<endl; 
    return 0;
}
//OUTPUT: sum = 16
```
Q 2) calculate nCr Binomial coefficient for n & r
    nCr = n! / r! (n-r)!
    
```cpp
#include <iostream>
using namespace std;

int factorial(int n){
    int fact =  1;

    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}

int ncr (int n,int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);
  
    return fact_n / (fact_r * fact_nmr);
}

int main (){
    int n= 8 ,r =2;
    cout << ncr(n,r) << endl;

    return 0;
}
//OUTPUT: 28
```

## HOMEWORK

Q 1) Write a function to check if a number is prime or not
```cpp
#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;       // Numbers <= 1 are not prime
    if (n == 2) return true;        // 2 is the only even prime number

    // Check from 2 to square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false; // If divisible, not prime
    }
    return true; // No divisors found => prime
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}

//OUTPUT :
//Enter a number: 11
//11 is a prime number.

//Enter a number: 12
//12 is not a prime number.
```
Q 2)write a function to print all prime numbers from 2 to N
```cpp
#include <iostream>
using namespace std;

// Function to check if a number is prime or not
bool isPrime(int num) {
    // Prime numbers are greater than 1
    if (num <= 1) return false;

    // 2 is the only even prime number
    if (num == 2) return true;

    // Check for divisibility from 2 to √num
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            // If divisible by i, then num is not prime
            return false;
        }
    }
    // No divisors found => it's a prime number
    return true;
}

// Function to print all prime numbers from 2 to N
void printPrimes(int N) {
    cout << "Prime numbers from 2 to " << N << " are: ";

    // Loop from 2 to N and check each number
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            // If i is prime, print it
            cout << i << " ";
        }
    }
    cout << endl; // New line after printing all primes
}

int main() {
    int N;

    // Ask user to enter the value of N
    cout << "Enter the value of N: ";
    cin >> N;

    // Call the function to print prime numbers
    printPrimes(N);

    return 0;
}
OUTPUT:
Enter the value of N: 10
Prime numbers from 2 to 10 are: 2 3 5 7 
```
Q 3) write a function to print nth Fibonacci

Fibonacci series ---> The Fibonacci series is a sequence of numbers where:                                  
                      Each number is the sum of the two preceding ones, starting from 0 and 1.
```cpp
#include <iostream>
using namespace std;

// Function to return the nth Fibonacci number
int fibonacci(int n) {
    // First two Fibonacci numbers are 0 and 1
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0; // F(0)
    int b = 1; // F(1)
    int fib = 0;

    // Loop from 2 to n to calculate nth Fibonacci
    for (int i = 2; i <= n; i++) {
        fib = a + b; // Current Fibonacci number
        a = b;       // Update a to previous b
        b = fib;     // Update b to current fib
    }

    return fib; // Return the nth Fibonacci number
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Call the function and print result
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;

    return 0;
}
//OUTPUT :
//Enter the value of n: 20
//The 20th Fibonacci number is: 6765
```


## Switch function
***not imp

🔷 What is a switch statement?
The switch statement is used when you want to check one variable against many possible values (called cases). It's like using multiple if-else statements, but easier and cleaner when you're checking one variable.

Switch Syntax 
```cpp
switch (expression) {
    case value1:
        // code to run if expression == value1
        break;
    case value2:
        // code to run if expression == value2
        break;
    ...
    default:
        // code to run if no case matches
}
```
🔹 Example: Check day of the week
```cpp
#include <iostream> // for input/output
using namespace std;

int main() {
    int day; // variable to store user input

    cout << "Enter a number (1 to 7): "; // asking user to enter a number
    cin >> day; // taking input from user and storing in 'day'

    // switch statement checks value of 'day'
    switch(day) {
        case 1: // if day is 1
            cout << "Monday" << endl; // print Monday
            break; // exit switch after matching case

        case 2: // if day is 2
            cout << "Tuesday" << endl; // print Tuesday
            break;

        case 3: // if day is 3
            cout << "Wednesday" << endl;
            break;

        case 4: // if day is 4
            cout << "Thursday" << endl;
            break;

        case 5: // if day is 5
            cout << "Friday" << endl;
            break;

        case 6: // if day is 6
            cout << "Saturday" << endl;
            break;

        case 7: // if day is 7
            cout << "Sunday" << endl;
            break;

        default: // if none of the above cases match
            cout << "Invalid input! Enter number between 1 and 7." << endl;
    }

    return 0; // end of program
}

//OUTPUT:
//Enter a number (1 to 7): 4
//Thursday
```
# Lecture 6 -Binary number system 

## Decimal to Binary conversion ----> base is 10,2 of decimal no. & binary no. respectively

Short trick : ....32,16,8,4,2,1 [2 raisedto power]----> like this binary numbercomes from decimal no. 
note : For odd numbers the last binary number is 1 (always)    

 ```cpp  
EX 1 : 
Divisor | quotient   remainder
2       | 42         0  /\
2       | 21         1  |
2       | 10         0  |
2       | 5          1  |
2       | 2          0  |
2       | 1          1  | 
        | 0
Answer : (42) base10 = (101010) base2
```
```cpp
EX 2 :
Divisor | quotient   remainder
2       | 50         0  /\
2       | 25         1  |
2       | 12         0  |
2       | 6          0  |
2       | 3          1  |
2       | 1          1  | 
        | 0
Answer : (50) base10 = (110010) base2

#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int ans = 0, pow = 1;
    
    while(decNum > 0){
        int rem = decNum % 2; // gives the last binary digit
        decNum /= 2; //moves to the next byte(right shift)       // decNum = decNum + 1
        
        ans += rem * pow;  //pow is used to place each bit at the correct decimal place.
        pow *= 10; //pow = pow * 10
    }
    
    return ans;
}

int main() {
    int decNum = 50;
    cout << decToBinary(decNum) << endl;
    return 0;
}

```
![Screenshot from 2025-07-01 19-07-04](https://github.com/user-attachments/assets/20ce21dc-979c-4059-82d1-10df5c67b5bb)
```cpp
EX 3:
Divisor | quotient   remainder
2       | 5          1  /\
2       | 2          0  |
2       | 1          1  |
        | 0
Answer : (5) base10 = (101) base2
```
Q  ) To print Binary numbers from 1 to 10
```cpp
#include <iostream> // for input/output
using namespace std;

int decToBinary(int decNum){
     int ans = 0, pow = 1;
     
     while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10 ; 
     }

     return ans;//binary form
}

int main() {
   int decNum = 42;

//we know Now only this much will run  
   for(int i = 1; i <= 10; i++){
   cout << decToBinary(i) <<endl;
   }
    return 0; // end of program
}
//OUTPUT :
//1
//10
//11
//100
//101
//110
//111
//1000
//1001
//1010
```
## Binary to Decimal conversion

![Screenshot from 2025-07-01 21-56-58](https://github.com/user-attachments/assets/9f6f699a-e305-4474-9885-702cb6afb1d1)
![Screenshot from 2025-07-02 19-56-01](https://github.com/user-attachments/assets/82b7bca6-239c-459d-95b5-d441ef243e9a)
```cpp
#include <iostream> // for input/output
using namespace std;

int binToDecimal(int binNum){
     int ans = 0, pow = 1;
     
     while(binNum > 0){
        int rem = binNum % 10;
        ans += (rem * pow);

        binNum /= 10;
        pow *= 2 ; 
     }

     return ans;//binary form
}

int main() {
   
   cout << binToDecimal(1010) <<endl;
   
    return 0; // end of program
}
```
## Addition of binary numbers
```cpp
0   |  0  | 1  | 1  
+
0   |  1  | 0  | 1
____________________
0   |  1  | 1  | 10

1(carry)
11
+
01
___
100
```
## Two's Complement
### Decimal to Binary
![Screenshot from 2025-07-02 22-20-35](https://github.com/user-attachments/assets/5bbabfc8-693f-4958-91cb-1140d3c603c0)

if zero then +ve & if one then -ve 

![Screenshot from 2025-07-02 22-15-14](https://github.com/user-attachments/assets/f5e21778-eabc-42b7-b9bf-70a6a9d1008d)

### Binary to Decimal

if we know 10110 binary number is -ve then 
![Screenshot from 2025-07-02 22-35-53](https://github.com/user-attachments/assets/d00fc548-d137-4387-9220-408976ec115a)

Q 1) ![Screenshot from 2025-07-02 22-44-11](https://github.com/user-attachments/assets/04df1d12-f22e-4e36-a074-a86e8f130005)

H.W ) convert -12 to  Binary & reverse

(1) 1100

(2) 01100

(3) 10011(1's complement)
(4)    +1
    10100

 (10100)base2 = (-12)base10

2's complement 
 10100 binary number reverse is    ---> & we know this is -ve 
 01011(1's complement)
+    1
________
 01100  
     
 # Lecture 6 - Bitwise operator

 ## 1) bitwise AND &---> similar to logical AND &&
       Any one false(0) then false
```cpp
#include <iostream> // for input/output
using namespace std;

int main() {
   int a = 6 , b = 10;

   cout << (a & b) <<endl;
  
    return 0; // end of program
}
//OUTPUT : 10
```
  ## 2) Biwise OR | ----> similar to logical OR ||
        any one true(1) then true
```cpp
#include <iostream> // for input/output
using namespace std;

int main() {
   int a = 6 , b = 10;

   cout << (a | b) <<endl;
  
    return 0; // end of program
}

```
  ## 3) bitwise  ^ ----> XOR (exclusive OR)
         same bit then 0
```cpp
#include <iostream> // for input/output
using namespace std;

int main() {
   int a = 6 , b = 10;

   cout << (a ^ b) <<endl;
  
    return 0; // end of program
}
//OUTPUT : 12
```
 ![Screenshot from 2025-07-03 12-30-41](https://github.com/user-attachments/assets/ef20a2eb-068f-4b60-b829-c4b136f2c7c3)

![Screenshot from 2025-07-03 12-37-39](https://github.com/user-attachments/assets/e45d253d-722d-4f45-a0c5-0cfbfff29ff3)
```cpp
#include <iostream> // for input/output
using namespace std;

int main() {
   int a = 10 , b = 1;

   cout << (10 << 2) <<endl;//left shift operator
   cout << (a >> b) << endl;//right shift operator
   
    return 0; // end of program
}
//OUTPUT : 40
//         5
```
## Operaor Precedence
1) unary operator
2) Arithmetic operator
3) bitwise operator
4) logical operator
5) asignment operator
![Screenshot from 2025-07-03 13-05-14](https://github.com/user-attachments/assets/7b967cfa-5e1c-415a-bf17-7418563ba9df)


## scope
1) local scope---> if-else loop OR for loop OR one function OR Block of Code{ } ke variables are local variables which cannot be used out

2) Global scope ----> written outside everthing in first & this variable can be used many times in loop
                     are global variables
```cpp
#include <iostream> // for input/output
using namespace std;

int x =10;

int fun(){
   cout << x << endl;
}
int main() {
   fun();
   cout << x << endl;

    return 0; // end of program
}
//OutOut 10
         10
```


int x;//4bytes---> 32bits ---> -2^31 to +2^31-1 till here numbers can store BUT t store at 2^32 then we extend cpacity 

## Data type Modifiers ----> change meaning of datatypes ---> increase OR decrese the size of data types

1) long  datatype
2) short
3) long long
4) signed
5) unsigned 

          
