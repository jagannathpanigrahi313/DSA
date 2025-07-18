# Lecture 16 - Pointers 

decimal - 10digits - (0 - 9)
binary - 2digits - (0/1)
hexadecimal - 16digits -(0 -9)  (a,b,c,d,e,f)

## Memoey address

&(ampersand) ---> bitwise AND operator
&variable ---> Address of operator(used to give address of a variable)
&& ---> Logical and operotor

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
### variable address is stored to pointer   
<img width="1920" height="1080" alt="Screenshot from 2025-07-18 14-35-36" src="https://github.com/user-attachments/assets/2cc3e044-2b41-4aa1-8d53-aea2d6331898" />

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;

    cout << ptr << endl;
    cout << &a << endl;

    cout << &ptr << endl;
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
### pointer to pointer ---> pointer address is stored to another pointer
```cpp
#include <iostream>
using namespace std;

int main() {
   int a = 10;
   int* ptr = &a;
   
   int** parptr = &ptr;//level is gone up BUT mor elevel will not go up 

    cout << &ptr << endl;
    cout << parptr << endl;

    
    return 0;
}
// output:
// 0x7fff0ea083d8
// 0x7fff0ea083d8
```
### Derefrence operator ---> gives value of address

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
### NULL Pointer

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
alias (&)---> a ke liye hi ham dusra variable b use kar rahai hai but memory ke andar hum same location ka baat kar rahe hai 
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

so pass by refrence in c++ is onlu done through pointers/alias

