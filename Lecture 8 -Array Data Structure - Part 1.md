Data Structures are basic structures which are used to store data Where there are many types of data
Algorithm are steps/ process

To store 5 students marks we make 5 variable But for 1000 students we cant make therefore arrays camed
int marks1,marks2,marks3, marks4, marks5;
```
It stores same datatype
contiguous in memory + linear (linarly data are imagined)

_______________________________________
|        |       |      |       |      |---------->Array of only one variable
_______________________________________
    0         1     2       3      4----->index

To acess the arrays   cout << variable[index] << endl;
For array the valid index is from 0 to size-1

```
# Array syntax

datatype variable [items]; //Here only arrays are created i.e array is initialized

datatype variable [items] = {store data in items};//Here arrays are created & then values are stored i.e array  & data bothis initialized

//you can initialize only value and don't put items
```cpp
#include <iostream>
using namespace std;

int main() {
    int marks [5] = {99,100,54,36,88};


    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;
    
    //0 to size-1
    cout << marks[5] << endl;//error OR garbage value will come because it is a in valid index
    cout << marks[-1] << endl;//error OR garbage value will come because it is a in valid index
    return 0;
}
OUTPUT:
99
100
54
36
88
0//we got garbage value
21955//we got garbage value
```

here we printed 5 elements 5 cout statement BUT for 100 elements how can we do therefore we use  Loops on Arrays
# Loops on Arrays
```cpp
#include <iostream>
using namespace std;

int main() {
    int marks [5] = {99,100,54,36,88};
    int size = 5;//You set this manually; not mandatory if you calculate size dynamically

   
    cout << sizeof(marks)/sizeof(int) << endl;//gives number of elements in the array (here, 5)
    cout << sizeof(marks) << endl;// Total  size of array in bytes
    
   
    return 0;
}
//OUTPUT :
5
20
```

output kardenge all values in the form of loop
```cpp
#include <iostream>
using namespace std;

int main() {
    int marks [5] = {99,100,54,36,88};
    int size = 5;

   //loops : 0 to size - 1
   for(int i=0;i<size;i++){
    cout << marks[i] << endl;
   }
   
    return 0;
}
//OUTPUT :
99
100
54
36
88
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int marks [5];// int size = 5;
    int size = 5;//int marks [5];

    for(int i=0;i<size;i++){
        cin >> marks[i];
       }

   //loops : 0 to size - 1
   for(int i=0; i<size; i++){
    cout << marks[i] << endl;
   }
   
    return 0;
}
//input :1 2 3 4 5 6 7 8 9
//OUTPUT :
1
2
3
4
5
```
Q )Find smallest value in array
Method 1:
```cpp
#include <iostream>
#include <climits> // for INT_MAX
using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -15, -24};
    int size = 6;

    int smallest = INT_MAX;

    for(int i = 0; i < size; i++){
        smallest = min(nums[i], smallest); // only this is needed
    }

    cout << "Smallest = " << smallest << endl;
    return 0;
}
//OUTPUT: smallest =-24
```
Method 2 Using only if condition: not preferable
```cpp
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -15, -24};
    int size = 6;

    int smallest = INT_MAX;

    for(int i = 0; i < size; i++){
        if (nums[i] < smallest){
            smallest = nums[i];
        }
    }

    cout << "Smallest = " << smallest << endl;
    return 0;
}
//OUTPUT: smallest =-24
```
Q )Find smallest & largest value in array

```cpp
#include <iostream>
#include <climits>//This line is necessary if you are using INT_MAX or INT_MIN.
using namespace std;

int main() {
    int nums [] = {5 ,15 , 22,1,-15, -24};
    int size = 6;

    int smallest = INT_MAX;//+veinfininity in c++ INT_MAX
    int largest = INT_MIN;//-veinfininity in c++ INT_MIN

    for(int i=0; i<size ;i++){
       smallest = min(nums[i],smallest);
       largest = max(nums[i], largest);
       }
   cout << "smallest ="<< smallest << endl;
   cout << "largest ="<< largest << endl;
    return 0;
}
//OUTPUT : smallest =-24
//         largest =22
```
H.W ) Find in which index the smallest & largest value are stored in array
```cpp
#include <iostream>
#include <climits> // For INT_MAX and INT_MIN
using namespace std;

int main() {
    // Array of numbers
    int nums[] = {5, 15, 22, 1, -15, -24};

    // Automatically calculate array size
    int size = sizeof(nums) / sizeof(nums[0]);

    // Initialize smallest to a very large number
    // Initialize largest to a very small number
    int smallest = INT_MAX;
    int largest = INT_MIN;

    // To store the index of smallest and largest numbers
    int smallestIndex = -1;
    int largestIndex = -1;

    // Loop through the array
    for (int i = 0; i < size; i++) {
        // If current number is smaller than current smallest
        if (nums[i] < smallest) {
            smallest = nums[i];      // update smallest value
            smallestIndex = i;       // update its index
        }

        // If current number is larger than current largest
        if (nums[i] > largest) {
            largest = nums[i];       // update largest value
            largestIndex = i;        // update its index
        }
    }

    // Output the result
    cout << "Smallest value is " << smallest << " at index " << smallestIndex << endl;
    cout << "Largest value is " << largest << " at index " << largestIndex << endl;

    return 0;
}
//OUTPUT:
//Smallest value is -24 at index 5
//Largest value is 22 at index 2
```
# Pass by Refrence(address)----> we pass the address to a function

data structure is full used by primitive data type EX: array
```cpp
#include <iostream>
using namespace std;

void changeArr(int arr[],int size){
    cout << "in function\n";
    for(int i = 0;i < size;i++){
        arr[i] = 2 * arr[i];
    }
}
int main() {
    int arr[] = {1,2,3};

    changeArr(arr,3);//Function call

    cout << "in main\n";//therfore 2 4 6

    for(int i = 0;i<3;i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
//OUTPUT:
// in function
// in main
// 2 4 6 
```
