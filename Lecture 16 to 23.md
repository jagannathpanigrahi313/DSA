# Lecture 16 - Pointers 
```
decimal - 10digits - (0 - 9)
binary - 2digits - (0/1)
hexadecimal - 16digits -(0 -9)  (a,b,c,d,e,f)
```

## Memory address
```
&(ampersand) ---> bitwise AND operator
&variable ---> Address of operator(used to give address of a variable)
& ---> used in alias

&& ---> Logical and operotor

* ---> used to mutiply

A pointer variable stores a memory address. But an address is not the actual value of the variable — it’s just a "location" in memory.
To actually access the real value stored at that location, we use the dereference operator (*).

          here, Dereference = follow the address inside a pointer to fetch the real value stored there.
```
  
```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    cout << &a << endl;
    return 0;
}
//OUTput :
0x7fff3a221e14
0x --> means address
further numbers are hexadecimal number
```

## Pointers
### 1) variable address is stored to pointer   
<img width="1920" height="1080" alt="Screenshot from 2025-07-18 14-35-36" src="https://github.com/user-attachments/assets/2cc3e044-2b41-4aa1-8d53-aea2d6331898" />

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;

    cout << ptr << endl;// ptr → address of a
    cout << &a << endl;// &a → same as above address

    cout << &ptr << endl;// &ptr → different, address of the pointer variable itself
    return 0;
}
// output:
// 0x7ffd66570dcc
// 0x7ffd66570dcc
// 0x7ffd66570dd0
```
```cpp
#include <iostream>
using namespace std;

int main() {
    float price = 100.25f;
    float* ptr = &price;

    cout << ptr << endl;
    cout << &price << endl;

    cout << &ptr << endl;
    return 0;
}
// output:
// 0x7ffeae12da4c
// 0x7ffeae12da4c
// 0x7ffeae12da50
```
### 2) pointer to pointer ---> pointer address is stored to another pointer
```cpp
#include <iostream>
using namespace std;

int main() {
   int a = 10;
   int* ptr = &a;
   
   int** parptr = &ptr;//level is gone up BUT more level will not go up 

    cout << &ptr << endl;
    cout << parptr << endl;

    
    return 0;
}
// output:
// 0x7fff0ea083d8
// 0x7fff0ea083d8
```
### 3) Derefrence operator ---> gives value of address

```cpp
#include <iostream>
using namespace std;

int main() {
   int a = 10;
   int* ptr = &a;
   
   int** parptr = &ptr;

   cout << *(&a) << endl;//10
   cout << *(ptr) << endl;//10
   cout << &ptr << endl;
   cout << parptr << endl;
   cout << *(parptr) << endl;//100
   cout << (ptr) << endl;//100
   cout << **(parptr) << endl;//10

    return 0;
}
// output:
// 10
// 10
// 0x7ffda27637d8
// 0x7ffda27637d8
// 0x7ffda27637d4
// 0x7ffda27637d4
// 10
```
### 4) NULL Pointer

```cpp
#include <iostream>
using namespace std;

int main() {

   int* ptr  ;//int** ptr;
              //int* ptr = NULL;
 
   cout << ptr << endl;
 
    return 0;
}
// output:0
```
```cpp
#include <iostream>
using namespace std;

int main() {

   int* ptr  ;//int** ptr;
              //int* ptr = NULL;
 
   cout << *ptr << endl;//output : Segmentation fault (core dumped)
 
    return 0;
}
```

<img width="1920" height="1080" alt="Screenshot from 2025-07-18 16-50-55" src="https://github.com/user-attachments/assets/f8a511d5-d1e8-4cbc-bff7-e383d3a0c529" />

## Pass by refernce 
whenever a function has any parameter it can be - pass by value / reference
```cpp
#include <iostream>
using namespace std;

void changeA(int a){//pass by val
    a = 20;
}

int main() {
    int a = 10;

    changeA(a);

   cout << "inside main fnx :" << a << endl;//20
    return 0;
}
// output:
// inside main fnx :10
```

<img width="1920" height="1080" alt="Screenshot from 2025-07-18 17-28-48" src="https://github.com/user-attachments/assets/b91a087e-3bc5-4ddb-b586-1be15201d720" />

```cpp
#include <iostream>
using namespace std;

void changeA(int* ptr){//pass by reference using pointers
    *ptr = 20;
}

int main() {
    int a = 10;
    changeA(&a);

 
   cout << "inside main fnx :" << a << endl;//20
 
    return 0;
}
// output:
// inside main fnx :20
```
alias (&)---> a ke liye hi ham dusra variable b use kar rahai hai BUT memory ke andar hum same location ka baat kar rahe hai 
```cpp
#include <iostream>
using namespace std;

void changeA(int& b){//pass by refrence using alias
    b = 20;
}

int main() {
    int a = 10;

    changeA(a);

   cout << "inside main fnx :" << a << endl;//20
    return 0;
}
// output:
// inside main fnx :20
```

<img width="1920" height="1080" alt="Screenshot from 2025-07-18 17-50-02" src="https://github.com/user-attachments/assets/3d12e234-88eb-4ddd-9965-d1735e5ae186" />

so pass by refrence in c++ is only done through pointers/alias

## Array Pointers 
<img width="1920" height="1080" alt="Screenshot from 2025-07-18 18-12-17" src="https://github.com/user-attachments/assets/100a9550-52cd-4ee2-b45c-c8cc354a619c" />

```cpp
#include <iostream>
using namespace std;


int main() {
   int arr[] = {1,2,3,4,5};

//    int a = 15, b = 15;
//    int* ptr = &a;
//    ptr = &b;   // ✅ Possible because ptr is a normal pointer, so it can be reassigned


//    int a = 15;
//    arr = &b;// ❌ Error: 'arr' is not modifiable, because the arr is a constant variable
               // It always points to the first element of the array and cannot be reassigned

   cout << arr << endl;//pointer
   cout << *arr << endl;//pointer => 1
    return 0;
}
// output:
// 0x7ffc6f674670
// 1
```
```cpp
#include <iostream>
using namespace std;


int main() {
   int arr[] = {1,2,3,4,5};

   cout << *arr << endl;//1
   cout << *(arr+1) << endl;//2
   cout << *(arr+2) << endl;//3
   cout << *(arr+3) << endl;//4
    return 0;
}
// output:
// 1
// 2
// 3
// 4
```
## Pointer Arithmtic
### 1) increment(++)/decrement(--)

```cpp
#include <iostream>
using namespace std;


int main() {
   int arr[] = {1,2,3,4,5};

   int a = 10;
   int* ptr = &a;

   cout << ptr << endl;
   ptr++;//increment of +1 BUT of int memory
   cout << ptr << endl;//+4 byte
   ptr--;
   cout << ptr << endl;//-4 byte
    return 0;
}
// output:
// 0x7fffad7a1064
// 0x7fffad7a1068
// 0x7fffad7a1064
```
### 2) Add/ Subtract number
```cpp
#include <iostream>
using namespace std;


int main() {
   int arr[] = {1,2,3,4,5};

   int a = 10;
   int* ptr = &a;

   cout << ptr << endl;
   ptr = ptr + 2;//2int => 8B
   cout << ptr << endl;//+8 byte
   ptr = ptr - 2;
   cout << ptr << endl;
    return 0;
}
// output:
// 0x7fffc5c2daa4
// 0x7fffc5c2daac
// 0x7fffc5c2daa4
```

we cannot add two pointer in c++ but subtract
### 3) Subtract pointer

<img width="1920" height="1080" alt="Screenshot from 2025-07-19 17-14-17" src="https://github.com/user-attachments/assets/f24952df-a3af-4146-bd06-31fbc167dea6" />

```cpp
#include <iostream>
using namespace std;

int main() {
   int arr[] = {1,2,3,4,5};

   int* ptr2;//100
   int* ptr1 = ptr2 + 2;//108

   cout << ptr1 - ptr2 << endl;//2
    return 0;
}
// output:
// 2
```

### 4)Compare the pointers

```cpp
#include <iostream>
using namespace std;

int main() {
   int arr[] = {1,2,3,4,5};

   int* ptr1;//uninitialized pointer
   int* ptr2;//uninitialized pointer

   cout << ptr1 << endl;//therfore print garbage value / error comes
   cout << ptr2 << endl;//therfore print garbage value / error comes

   cout << (ptr1 < ptr2) << endl;
   return 0;
}
// output:
// adress
// adress
// 1 or 0
```
```cpp
#include <iostream>
using namespace std;

int main() {
   int arr[] = {1,2,3,4,5};

   int* ptr1 = &arr[0];//
   int* ptr2 = &arr[2];//

   cout << ptr1 << endl;
   cout << ptr2 << endl;

   cout << (ptr1 < ptr2) << endl;
   return 0;
}
// output:
// 0x7ffecdccc650
// 0x7ffecdccc658
// 1
```
```cpp
#include <iostream>
using namespace std;

int main() {
   int arr[] = {1,2,3,4,5};

   int x = 10;
   int y = 20;
   int* ptr1 = &x;
   int* ptr2 = &y;

   cout << ptr1 << endl;
   cout << ptr2 << endl;

   cout << (ptr2 < ptr1) << endl;
   return 0;
}
// output:
// 0x7ffeb1c888d8
// 0x7ffeb1c888dc
// 0
```
```cpp
#include <iostream>
using namespace std;

int main() {
   int arr[] = {1,2,3,4,5};

   int x = 10;
   int y = 20;
   int* ptr1 = &x;
   int* ptr2 = ptr1;

   cout << ptr1 << endl;
   cout << ptr2 << endl;

   cout << (ptr2 == ptr1) << endl;
   return 0;
}
// output:
// 0x7fff59467228
// 0x7fff59467228
// 1
```
```cpp
#include <iostream>
using namespace std;

int main() {
   int arr[] = {1,2,3,4,5};

   int x = 10;
   int y = 20;
   int* ptr1 = &x;
   int* ptr2 = ptr1;

   cout << ptr1 << endl;
   cout << ptr2 << endl;

   cout << (ptr2 != ptr1) << endl;
   return 0;
}
// output:
// 0x7ffd546ecb48
// 0x7ffd546ecb48
// 0
```
Q )predict output
<img width="1920" height="1080" alt="Screenshot from 2025-07-19 17-55-31" src="https://github.com/user-attachments/assets/64d4b2a6-f914-4400-86bf-9adda8f420ba" />

```cpp
#include <iostream>
using namespace std;

int main() {
   int arr[] = {10,20,30,40};
   int* ptr = arr;

   cout << *(ptr+1) << endl;//20
   cout << *(ptr+3) << endl;//40
   ptr++;//
   cout << *ptr << endl;//20
   return 0;
}
```
# Lecture 17 - Binary search algorithm

<img width="1920" height="1080" alt="Screenshot from 2025-07-19 20-01-30" src="https://github.com/user-attachments/assets/c52d2ed4-4b05-4796-b51b-0510116b37e4" />


<img width="1920" height="1080" alt="Screenshot from 2025-07-19 20-49-43" src="https://github.com/user-attachments/assets/55631100-d282-4d24-8cdc-af5294a43afe" />

in linear search we have to use 10 steps 
BUT in binary search we have to use only 3 steps 

<img width="1920" height="1080" alt="Screenshot from 2025-07-19 20-53-23" src="https://github.com/user-attachments/assets/52e659ad-5277-40d4-8987-30518239fe35" />

```cpp
#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int> arr, int tar){//Iterative code
    int st=0, end=arr.size()-1;

    while(st <= end){
         int mid = (st + end) /2;//by this formula the limit of int will overflow

         if(tar > arr[mid]){
            st = mid+1;
         }else if(tar < arr[mid]) {
                 end = mid - 1;
         }else{
               return mid;
         }
    }
    return -1;
}
int main() {
    vector<int> arr1 = {-1,0,3,4,5,9,12};//odd
    int tar1 = 12;

    cout << binarysearch(arr1,tar1) << endl;

    vector<int> arr2 = {-1,0,3,4,5,9,12};//even
    int tar2 = 4;

    cout << binarysearch(arr2,tar2) << endl;

   return 0;
}
```
optimizaton of code

<img width="1920" height="1080" alt="Screenshot from 2025-07-19 21-29-03" src="https://github.com/user-attachments/assets/39b13723-9fe1-475d-a053-336474bfbbde" />

```cpp
#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int> arr, int tar){//Iterative code
    int st=0, end=arr.size()-1;

    while(st <= end){
         int mid = st + (end-st) /2;//by this formula the limit of int will not overflow optimization in code

         if(tar > arr[mid]){
            st = mid + 1;//2nd half
         }else if(tar < arr[mid]) {
                 end = mid - 1;//1st half
         }else{
               return mid;
         }
    }
    return -1;
}
int main() {
    vector<int> arr1 = {-1,0,3,4,5,9,12};//odd
    int tar1 = 12;

    cout << binarysearch(arr1,tar1) << endl;

    vector<int> arr2 = {-1,0,3,4,5,9,12};//even
    int tar2 = 4;

    cout << binarysearch(arr2,tar2) << endl;

   return 0;
}
```
### Binary search by time complexity
<img width="1920" height="1080" alt="Screenshot from 2025-07-19 21-42-38" src="https://github.com/user-attachments/assets/b0cacff5-9012-437d-8509-ecca14b578c3" />

<img width="1920" height="1080" alt="Screenshot from 2025-07-19 21-43-56" src="https://github.com/user-attachments/assets/0f5943f9-51c6-4804-96e4-1157a03775dd" />

logically the time complexity(TC) = kitne operations me --> n ka value 1 ke equal hota hai
<img width="1920" height="1080" alt="Screenshot from 2025-07-19 21-48-17" src="https://github.com/user-attachments/assets/88dd7379-901a-4720-9953-81ca7c1e123d" />

### Binary search with recursion 
