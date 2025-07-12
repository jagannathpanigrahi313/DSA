# Lecture 8 -Array Data Structure - Part 1

**Data Structures(DS)** are basic structures which are used to store data Where there are many types of data
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

**datatype variable [items]**; //Here only arrays are created i.e array is initialized

**datatype variable [items] **= {store data in items};//Here arrays are created & then values are stored i.e array  & data bothis initialized

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
**Method 2:** Using only if condition: not preferable
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
![Screenshot from 2025-07-05 13-25-17](https://github.com/user-attachments/assets/d101cb66-f698-4c5b-a3fe-b8158aef33fb)
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
H.W 4)Write a function to print intersection of two arrays. i.e., elements that are common in both arrays:
```cpp
#include <iostream>
using namespace std;

// Function to print intersection of two arrays
void printIntersection(int arr1[], int size1, int arr2[], int size2) {
    cout << "Intersection: ";
    
    for (int i = 0; i < size1; i++) {
        // Check if arr1[i] is in arr2
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                
                // Check if already printed (to avoid duplicates)
                bool alreadyPrinted = false;
                for (int k = 0; k < i; k++) {
                    if (arr1[k] == arr1[i]) {
                        alreadyPrinted = true;
                        break;
                    }
                }

                if (!alreadyPrinted) {
                    cout << arr1[i] << " ";
                }

                break; // Move to next element in arr1
            }
        }
    }

    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 2};
    int arr2[] = {3, 4, 5, 6, 7, 3};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printIntersection(arr1, size1, arr2, size2);

    return 0;
}
//output:
//Intersection: 3 4 5

```
# Lecture 9 - vectors DS - part 2

Vectors are simailar to array like
   |-----> they are dynamic in nature i.e it doesn't have exact size like array

STL(Standard template library)
![Screenshot from 2025-07-05 17-18-34](https://github.com/user-attachments/assets/885e2eb7-8efe-458b-81a5-66d57b584563)

## vector syntax

1) ```
   vector <datatype> vector_name;
```cpp
#include <iostream>
#include <vector>//headerfile
using namespace std;

int main(){
    vector<int> vec; 
    cout<<vec[0] << endl;//0
    return 0;
}
```
2) ```
   vector<datatype> vector_name = { val1, val2, val3, ...};
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec ={1,2,3}; 
    cout<<vec[2]<<endl;//3
    return 0;
}
```

3) ```
   vector<datatype> vector_name(size, value);
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec (5,0);// (size of the vector, initial value for all elements)

    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
   
    return 0;
}
// OUTPUT:
// 0
// 0
// 0
```

For each loop
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec (3,0); //3 elements in total.Each initialized to 0
                           //so it's equivalent to vector<int> vec = {0, 0, 0};
    for(int i : vec){//For every integer i in the vector vec" i takes the value of each element in the vector one by one
        cout<< i <<endl;//0
    }
    return 0;
}
//OUTPUT:
// 0
// 0
// 0
```



```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector< char > vec {'a','b','c','d','e'}; 
    for(char i : vec){
        cout<< i <<endl;//0
    }
    return 0;
}
//OUTPUT:
// a
// b
// c
// d
// e
```

# Diffrence between colon(:) and semicolon(;)

✅ : (Colon) → Used in Range-Based for Loop

✅ Example:
```cpp
for (int i : vec) {
    cout << i << endl;
}
```
🔍 Meaning:
Reads as: “For each element i in the container vec”

Used to automatically iterate over containers like arrays, vectors, strings, etc.

Introduced in C++11

✅ Works only with containers (like vector, array, etc.)
✅ ; (Semicolon) → Used in Classic for Loop
✅ Example:
```cpp
for (int i = 0; i < 3; i++) {
    cout << vec[i] << endl;
}
```
🔍 Structure:
```cpp
for (initialization ; condition ; update)
```
; separates three parts:

Initialization → int i = 0

Condition → i < 3

Update → i++

 ✅ Used when you need more control (like skipping, indexing, etc.)
```
🔁 Visual Comparison
Feature	        : (Colon)	                           ; (Semicolon)
Loop Type	     Range-based	                         Classic
Use Case	        Looping through a container easily	 Full control over loop logic
Syntax Example	  for (int x : vec)	                   for (int i = 0; i < 3; i++)
Works With	     Containers like vector, array	       Any numeric range / logic
```

✅ When to use which?
Use : when you just want to access each element in a container

Use ; when you need indexes, custom logic, or want to skip elements
, (Comma) — Comma Operator-->Used to separate multiple expressions in a single line.

# Vector Function
![Screenshot from 2025-07-06 13-26-40](https://github.com/user-attachments/assets/237cb3b5-77d3-44f4-89f2-a5ec1440b155)
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec  ={1,2,3}; 
    cout << "size = " << vec.size() <<endl;//tells vector size
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    cout << "after push back size = "<< vec.size ()<< endl;

    for(int val:vec){
        cout << val << endl;
    }
    return 0;
}
//output:
size = 3
after push back size = 6
1
2
3
25
35
45
```
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec ; 
    cout << "size = " << vec.size() <<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    cout << "after push back size = "<< vec.size ()<< endl;

    for(int val:vec){
        cout << val << endl;
    }
    return 0;
}
//OUTPUT :
size = 0
after push back size = 3
25
35
45
```
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec ; 
    cout << "size = " << vec.size() <<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    cout << "after push back size = "<< vec.size ()<< endl;

    vec.pop_back();

    for(int val:vec){
        cout << val << endl;
    }
    return 0;
}
// OUTPUT:
// size = 0
// after push back size = 3
// 25
// 35
```
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec ; 
    cout << "size = " << vec.size() <<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(31);//number added
    cout << "after push back size = "<< vec.size ()<< endl;

    vec.pop_back();//last number removed

    cout << vec.front() << endl; // first number prints
    cout << vec.back() << endl; // last number prints
    cout << vec.at(1) << endl;//vec[i] same vec.at(i)

    return 0;
}
// OUTPUT:
// size = 0
// after push back size = 4
// 25
// 45
// 35
```
# Static VS Dynamic Allocation
1) it stores memory during compile time  it stores memory during run time
2) it happens inside stack memory        it happens inside heap memory
3) EX:  int arr[5]; --->fixed size        vector<int>---------> resize able i.e no fixed size

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec ; 
    
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);

    cout << "size = "<< vec.size ()<< endl;
    cout << "capacity = "<< vec.capacity() << endl;
    
    return 0;
}
// OUTPUT:
// size = 3
// capacity = 4
```
136. single number (in leetcode)

H.W 1) Write a code of Linear search for vectors

H.W 2) Write a reverse code on vectors in function write 

# Lecture 10 - Kadane's Algorithm | Maximum Subarray Sum

## Basics of subarray concept 

subarray is a single part of continuos array
![Screenshot from 2025-07-08 20-42-53](https://github.com/user-attachments/assets/6ab558e4-3531-4ab3-888d-283b4e0fc45e)
![Screenshot from 2025-07-08 20-44-51](https://github.com/user-attachments/assets/91e99c08-5085-429d-aaf0-c5a171c21ff4)
![Screenshot from 2025-07-08 20-45-11](https://github.com/user-attachments/assets/61adeb55-7cd6-4cf0-880b-e7ec662ce075)
![Screenshot from 2025-07-08 20-47-55](https://github.com/user-attachments/assets/4a2ccfde-7130-414f-83ac-268269c35cd1)
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n= 5;
    int arr[5] = {1,2,3,4,5};

    for(int st=0; st<n ;st++){
        for(int end=st; end<n ;end++){
           for(int i=st;i<=end;i++){
            cout << arr[i];
           }
            cout<< " ";
        }
        cout << endl;
    }
    return 0;
}
// OUTPUT :
// 1 12 123 1234 12345 
// 2 23 234 2345 
// 3 34 345 
// 4 45 
// 5 
```
## Maximum Subarray sum 
The maximum subarray does not have to include all elements.
Sometimes excluding negative values gives a higher sum!

 ### By Brute Force Approach (O(n²))
```cpp
#include <iostream>     // For standard input/output
#include <climits>      // For INT_MIN constant

using namespace std;

int main() {
    // Initialize array with 4 elements
    int arr[4] = {-1, 7, 4, 5};
    // Store the size of the array
    int n = 4;

    // Initialize maxsum with the smallest possible integer
    // Ensures any subarray sum will be larger than this initially
    int maxsum = INT_MIN;

    // Outer loop: iterate through each possible starting index of subarray
    for (int st = 0; st < n; st++) {
        int cursum = 0;  // Reset current sum for this subarray start

        // Inner loop: iterate through each possible ending index from 'st'
        for (int end = st; end < n; end++) {
            cursum += arr[end];  // Add current element to current sum

            // Update maxsum if a higher subarray sum is found
            maxsum = max(cursum, maxsum);
        }
    }

    // Print the maximum subarray sum found
    cout << "max subarray sum = " << maxsum << endl;

    return 0;
}
// OUTPUT :
//max subarray sum = 16
```
```cpp
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[7] = {3,-4,5,4,-1, 7,-8};
    int n= 7;

    int maxsum = INT_MIN;

    for(int st=0; st<n ; st++){
        int cursum =0;
        for(int end=st;end<n;end++){
            cursum += arr[end];
            maxsum =max(cursum,maxsum);
        }
    }
    cout << "max subarray sum = " << maxsum << endl;

    return 0;
}
// OUTPUT :
//max subarray sum = 15
```
### using Kadane's Algorithm
<img width="1920" height="1080" alt="Screenshot from 2025-07-10 17-31-57" src="https://github.com/user-attachments/assets/282302c6-9bc4-4165-bb25-dea789b1df36" />

<img width="1920" height="1080" alt="Screenshot from 2025-07-10 17-48-33" src="https://github.com/user-attachments/assets/f3c05afc-c20d-4843-a4be-53022b494507" />

53. Maximum Subarray(Leetcode)
 ```
  | Part          | Meaning                                                               |
| ------------- | --------------------------------------------------------------------- |
| `vector<int>` | A **dynamic array of integers**, like `[1, 2, 3, -4]`                 |
| `&`           | **Pass-by-reference**, meaning it doesn’t make a copy of the array    |
| `nums`        | The **name** of the input variable (you can use any name, like `arr`) |

int maxSubArray(vector<int>& nums)
this line means
🗣️ “This function is called maxSubArray, takes one input which is a reference to a vector of integers named nums, and it returns an integer.”
```

# Lecture 11 - Majority Element 

## Pair sum
### by brute's Force approach O(n^2)
<img width="1920" height="1080" alt="Screenshot from 2025-07-11 14-47-50" src="https://github.com/user-attachments/assets/ff63d509-118a-47f0-821e-01dfa97d08bb" />

<img width="1920" height="1080" alt="Screenshot from 2025-07-11 14-24-02" src="https://github.com/user-attachments/assets/03d8ae29-fef9-4cfa-a322-b487a34503ea" />

```cpp
#include <iostream>  // for input/output operations
#include <vector>    // to use the vector container
using namespace std;

// Function to find indices of two elements whose sum equals target
vector<int> pairsum(vector<int> nums, int target) {
    vector<int> ans;       // To store the answer indices
    int n = nums.size();   // Get the size of the input vector

    // Traverse all pairs using nested loops
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            // Check if the sum of nums[i] and nums[j] is equal to target
            if (nums[i] + nums[j] == target) {
                ans.push_back(i); // Store the index of the first number//Print ans[0], then print a comma, then print ans[1], then go to a new line.
                ans.push_back(j); // Store the index of the second number
                return ans;       // Return early as pair is found
            }
        }
    }

    // If no pair is found, return empty vector
    return ans;
}

int main() {
    // Input vector and target value
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    // Call the function to get the pair indices
    vector<int> ans = pairsum(nums, target);

    // Check if a pair was found before printing
    if (ans.size() >= 2) {
        cout << ans[0] << "," << ans[1] << endl;  // Print the indices
   // } else {
   //     cout << "No valid pair found." << endl;   // If not found
  //  }

    return 0;  // End of main function
}
// OUTPUT :
// 0, 1
```
### by optimization/optimal approach
<img width="1920" height="1080" alt="Screenshot from 2025-07-11 15-48-05" src="https://github.com/user-attachments/assets/6d596f2b-9b6d-4c05-98c1-54af96b3f96c" />
```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n - 1;

    while (i < j) {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target) {
            j--;
        } else if (pairSum < target) {
            i++
;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;  // return immediately
        }
    }

    return ans; // empty vector if not found
}

int main() {
    vector<int> nums = {2, 7, 11, 15};  // ✅ MUST be sorted!
    int target = 13;

    vector<int> ans = pairSum(nums, target);
    
    if (!ans.empty()) { //This line means:ans is empty or not before accessing ans[0] and ans[1].
        cout << ans[0] << ", " << ans[1] << endl;
    } else {
        cout << "No valid pair found" << endl;
    }

    return 0;
}
//OUTPUT:
//0, 2
```
sorted array means first small numbers stored then big numbers

## Majority Element 
### By brute force approach O(n^2)
    it checks how's frequency is more in array where ,M.E  > n/2 times n means no. of boxes in array
```cpp  
    class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size(); // Get the total number of elements in the array

        // Loop through each element in the array
        for (int val : nums) {
            int freq = 0; // Initialize frequency counter for current element

            // Count how many times 'val' appears in the array
            for (int el : nums) {
                if (el == val) {
                    freq++; // Increment frequency if match is found
                }
            }

            // If frequency is greater than half of the array size, return the element
            if (freq > n / 2) {
                return val; // Majority element found
            }
        }

        // In case no majority element exists (though problem says one always exists)
        return -1;
    }
};
```
### by optimization approach O(nlogn)
    here we sort the array
```cpp
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size(); // Get the total number of elements in the array

        // Step 1: Sort the array
        // Majority element will always be in the middle after sorting
        sort(nums.begin(), nums.end());

        // Step 2: Count frequencies
        int freq = 1;             // Count of current element
        int ans = nums[0];        // Initialize answer with first element

        for (int i = 1; i < n; i++) {
            // If current element is same as previous, increment frequency
            if (nums[i] == nums[i - 1]) {
                freq++;
            } else {
                // If not same, reset frequency count to 1
                freq = 1;
                ans = nums[i];
            }

            // If frequency crosses n/2, return the element
            if (freq > n / 2) {
                return ans;
            }
        }

        // For LeetCode, majority is always guaranteed, so return ans
        return ans;
    }
};
```
### by Moore's voting algorithm 
```cpp
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int freq = 0, ans = 0;

    for(int i=0;i< nums.size();i++) {
        if (freq == 0){
            ans = nums[i];
        }
        if (ans == nums [i]){
            freq++;
        }else{
             freq--;
        }
    }
here you have to put when we dont know ans i.e majority element will exist or not
 int count = 0;
    for(int val : nums){
        if(val == ans){
            count++;
        }
    }

    if(count > n/2) => ans
    else => -1 
    return ans;
//--------------
    }
};
```
# Lecture 12 - Time & Space Complexity

# Time Complexity
Not the actual time taken but amount of time taken as function of input size (n)

To run a same code ---> in windows , mac , linux it will take different different time
                |-----> in codeforces , codecheif , leetcode it will take different different time
                |-----> so actual execution time of a code depends upon machine Or server 
                |----->  Time Complexity does not change of a code

_Time Complexity_ is baiscally the amount of **time taken/operations** as function of **input size (n)**

![Screenshot from 2025-07-07 21-28-13](https://github.com/user-attachments/assets/7f32a61d-e47f-4b4b-bff2-7a56add00709)

![Screenshot from 2025-07-07 21-29-29](https://github.com/user-attachments/assets/06adc708-15d8-4fbb-b868-6ece544be9f1)

worst case **scenaries / complexity** --> input size(n) ^^^

operation VS input size(n)
![Screenshot from 2025-07-07 21-32-30](https://github.com/user-attachments/assets/86fb01ec-3ae2-40d3-af41-e1c8fb5d3d5c)
# O Notation : 
![Screenshot from 2025-07-08 12-00-16](https://github.com/user-attachments/assets/2f055cde-b7d5-45f9-ae84-43c4b62dba1c)

![Screenshot from 2025-07-08 12-01-40](https://github.com/user-attachments/assets/fc907821-0152-447e-9e97-7ddf109b75aa)

![Screenshot from 2025-07-08 15-35-49](https://github.com/user-attachments/assets/25b168de-4a47-4a25-81c6-70341309afb0)

![Screenshot from 2025-07-08 15-36-05](https://github.com/user-attachments/assets/5d49c448-7715-4d75-be94-71a7ac7a6ac4)

![Screenshot from 2025-07-08 15-36-18](https://github.com/user-attachments/assets/596fe5ac-9254-4d44-ad1c-0b88e3772548)
# Space Complexity:

code ouccupies space in two types:
![Screenshot from 2025-07-08 15-54-16](https://github.com/user-attachments/assets/0588ce11-2849-4ee9-91e1-c144b8e4a7f9)

EX 1 : we have imput : array[] and then we have to bring in ouutput : squareArray[]


![Screenshot from 2025-07-08 16-03-12](https://github.com/user-attachments/assets/3db77165-34f8-4e5c-ac92-79cf33bf39e0)

![Screenshot from 2025-07-08 16-25-06](https://github.com/user-attachments/assets/4306bdf9-fa9a-4319-a6ad-49af98bc995f)

![Screenshot from 2025-07-08 16-17-34](https://github.com/user-attachments/assets/441460f4-a744-43bf-a81f-ed50f355eb27)

![Screenshot from 2025-07-08 16-35-27](https://github.com/user-attachments/assets/7d2c1233-337a-4d47-9ae8-374e36d04346)
# Common Time complexities
## 1) O(1)---> used when no loop / no recursion we want

![Screenshot from 2025-07-08 16-42-23](https://github.com/user-attachments/assets/4ac105bc-3ecd-49da-b6c8-93ada97ad923)

Fist case
SEcond case

O(1)--->read as bego of 1 time
![Screenshot from 2025-07-08 16-42-44](https://github.com/user-attachments/assets/5dddea86-e644-4c08-80fd-aedfedd8bd5d)

## 2) O(n) ---> linear time complexity 

 By running the loop & adding the sum of two numbers 
 By Moore's voting algorithm 
 
![Screenshot from 2025-07-08 17-11-56](https://github.com/user-attachments/assets/e5eadce8-e6ae-49e5-9456-5e2ea73bda8a)

![Screenshot from 2025-07-08 17-12-19](https://github.com/user-attachments/assets/9e8be6da-6f1f-4d86-a124-672e4a20ebc9)

![Screenshot from 2025-07-08 17-12-44](https://github.com/user-attachments/assets/b457b82a-891d-4cec-b7d7-dc31a2855d5e)

## 3) O(n^2)
EX: Sorting Algorihm
                    selection sort,insertion sort, bubble sort
![Screenshot from 2025-07-08 17-25-02](https://github.com/user-attachments/assets/29661a9f-287b-4eba-b7dc-99050a008f6f)
![Screenshot from 2025-07-08 17-35-18](https://github.com/user-attachments/assets/e7d16842-59f0-4c75-9043-e99ef08d38ea)

## 4) O(n^3)
![Screenshot from 2025-07-08 17-37-18](https://github.com/user-attachments/assets/1a7d7232-4f79-498f-9a9b-1f87d5aa0125)

## 5) O(logn) - in any algorithm if you see any value is decreasing then it takes O(logn)time
<img width="1920" height="1080" alt="Screenshot from 2025-07-11 18-16-17" src="https://github.com/user-attachments/assets/5f38b627-b3b4-4ca2-919c-f7e76e62f6b9" />

<img width="1920" height="1080" alt="Screenshot from 2025-07-11 18-15-26" src="https://github.com/user-attachments/assets/e56f1dc6-7832-489f-8195-3287bfb4a1c4" />

## 6) O(nlogn)

<img width="1920" height="1080" alt="Screenshot from 2025-07-11 18-26-52" src="https://github.com/user-attachments/assets/ca55a9ca-ea4d-47f8-866d-61788d1f95a7" />

## 7) Exponential time complexity (2^n),(3^n),(4^n),(5^n),....
     it is a worst time 
<img width="1920" height="1080" alt="Screenshot from 2025-07-11 18-26-40" src="https://github.com/user-attachments/assets/e0abf65d-3485-4eb4-a789-0e93b8bde0d1" />

## 8) O(n!) - it is more worst then (7)
<img width="1920" height="1080" alt="Screenshot from 2025-07-11 18-36-46" src="https://github.com/user-attachments/assets/883218bc-9168-4759-bbe3-92520940feba" />

note : Recursion means a function calls itself, directly or indirectly.

## solving 
1)
<img width="1920" height="1080" alt="Screenshot from 2025-07-11 19-02-06" src="https://github.com/user-attachments/assets/6effc5be-eac6-4898-aff1-aee0fce4abde" />
<img width="1920" height="1080" alt="Screenshot from 2025-07-12 11-59-39" src="https://github.com/user-attachments/assets/a1943c99-f8c3-4ad2-b656-275f2b7ea256" />

2)
<img width="1920" height="1080" alt="Screenshot from 2025-07-12 11-55-45" src="https://github.com/user-attachments/assets/f3405ee2-6162-4d69-985a-fd0afe5e5c3d" />
