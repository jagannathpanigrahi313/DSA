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
#include <climits> // mandatory for INT_MAX 
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
#include <climits>//mandotry for INT_MAX 
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
#include <climits> //Mandotary For INT_MAX and INT_MIN
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
# Linear search
```cpp
#include <iostream>
#include <climits>//optional
using namespace std;

int linearsearch(int arr[],int sz,int target){
    for(int i =0;i<sz;i++){
        if(arr[i] == target){//Found
        return i;
        }
    }
    return -1;//Not found
}

int main() {
    int arr[] = {4,2,7,8,1,2,5};
    int sz = 7;
    int target = 5;

    cout << linearsearch(arr,sz,target) << endl;

    return 0;
}
//OUTPUT:
//6 
```
# Reverse an array
```cpp
#include <iostream>
#include <climits>//optional
using namespace std;

void reverseArray(int arr[],int sz){
    int start = 0,end = sz-1;

    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
   

int main() {
    int arr[] = {1,2,3,4,5};
    int sz = 5;

    reverseArray(arr, sz);

    for (int i= 0;i< sz;i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
    return 0;
}
//OUTPUT:
// 5 4 3 2 1
```
H.W 1) Write a function to calculate sum and product of all numbers in an array.
```cpp
#include <iostream>
using namespace std;

// Function to calculate sum and product of array elements
void sumAndProduct(int arr[], int size) {
    int sum = 0;
    int product = 1;

    for (int i = 0; i < size; i++) {
        sum += arr[i];          // add each element to sum
        product *= arr[i];      // multiply each element to product
    }

    // Display result
    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;
}

int main() {
    int arr[] = {2, 4, 6};
    int size = 3;

    sumAndProduct(arr, size);

    return 0;
}
//OUTPUT:
//Sum = 12
//Product = 48
```
H.W 2) Write a function to swap max & min number of an array.
```cpp
#include <iostream>
using namespace std;

// Function to swap the maximum and minimum elements in the array
void swapMaxMin(int arr[], int size) {
    // If array has 0 or 1 element, swapping is not needed
    if (size <= 1) return;

    int maxIndex = 0;  // Assume the first element is the maximum
    int minIndex = 0;  // Assume the first element is the minimum

    // Loop to find actual max and min index
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;  // Found a bigger value, update maxIndex
        }
        if (arr[i] < arr[minIndex]) {
            minIndex = i;  // Found a smaller value, update minIndex
        }
    }

    // Now swap the values at maxIndex and minIndex
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

// Main function to test the swapMaxMin
int main() {
    int arr[] = {10, 20, 5, 30, 2, 40, 15};  // Sample array
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate number of elements

    // Print the original array
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the function to swap max and min
    swapMaxMin(arr, size);
    // Print the array after swapping
    cout << "After swapping max and min: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
//OUTPUT:
//Original array: 10 20 5 30 2 40 15 
//After swapping max and min: 10 20 5 30 40 2 
```
H.W 3)Write a function to print all unique values in an array.
```cpp
#include <iostream>
using namespace std;

// Function to print all unique values (only once in array)
void printUnique(int arr[], int size) {
    bool isUnique;

    // Loop through each element in the array
    for (int i = 0; i < size; i++) {
        isUnique = true; // Assume current element is unique

        // Check if arr[i] appears again in array (excluding itself)
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false; // Found a duplicate
                break;
            }
        }

        // If no duplicate found, print the unique element
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[] = {4, 5, 6, 7, 4, 5, 9, 10};  // Sample array
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Unique elements in the array are: ";
    printUnique(arr, size);
    cout << endl;

    return 0;
}

//4 5 ---> apears twice

//OUTPUT:
//6 7 9 10----> appear once

```
H.W 4)Write a function to print intersection of two arrays.
```cpp

```
