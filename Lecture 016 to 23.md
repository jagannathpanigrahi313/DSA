
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
<img width="1261" height="820" alt="Screenshot 2025-09-30 195620" src="https://github.com/user-attachments/assets/8f37a5cc-d0a3-498f-941b-2d97b544ecb2" />

it is cery optimized as compared to linear search 
<img width="1380" height="1078" alt="Screenshot 2025-09-30 201159" src="https://github.com/user-attachments/assets/001085cc-3ea3-4908-82b3-22f601cfa037" />

logically the time complexity(TC) = kitne operations me --> n ka value 1 ke equal hota hai
<img width="1920" height="1080" alt="Screenshot from 2025-07-19 21-48-17" src="https://github.com/user-attachments/assets/88dd7379-901a-4720-9953-81ca7c1e123d" />

### Binary search with recursion 

<img width="1911" height="1079" alt="Screenshot 2025-10-01 122507" src="https://github.com/user-attachments/assets/061d758c-d71c-4820-8b52-4ef38e269b9d" />

```cpp
#include <iostream>
#include <vector>
using namespace std;

int recBinarySearch(vector<int> arr, int tar, int st, int end) {
    if (st <= end) {
        int mid = st + (end - st) / 2;

        if (tar > arr[mid]) { // 2nd Half
            return recBinarySearch(arr, tar, mid + 1, end);
        } else if (tar < arr[mid]) { // 1st Half
            return recBinarySearch(arr, tar, st, mid - 1);
        } else { // mid == tar → answer found
            return mid;
        }
    }
    return -1; // not found
}

int binarysearch(vector<int> arr, int tar) {
    return recBinarySearch(arr, tar, 0, arr.size() - 1);
}

int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // odd size
    int tar1 = 40;// return -1 because it doesnt exist in arr
    cout << binarysearch(arr1, tar1) << endl;  

    vector<int> arr2 = {-1, 0, 3, 4, 5, 9, 12}; // even size
    int tar2 = 0;
    cout << binarysearch(arr2, tar2) << endl;  // return 1 because it exist in arr

    return 0;
}
// OUTPUT:
// -1
// 1
```

Binary Search works by repeatedly halving the search space in a sorted array.

code implementation (iterative & recursive) in C++ with dry run

```cpp
include <iostream>
#include <vector>
using namespace std;

int iterativeBinarySearch(vector<int> arr, int target) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;  // target found
        }
        else if (arr[mid] < target) {
            low = mid + 1; // search right half
        }
        else {
            high = mid - 1; // search left half
        }
    }
    return -1; // target not found
}

int main() {
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 45};
    int target = 23;

    int result = iterativeBinarySearch(arr, target);
    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";
}
// OUTPUT:
// Element found at index 5
```

```cpp
#include <iostream>
#include <vector>
using namespace std;

int recursiveBinarySearch(vector<int> arr, int target, int low, int high) {
    if (low > high)
        return -1; // base case, not found

    int mid = low + (high - low) / 2;

    if (arr[mid] == target)
        return mid; // found
    else if (arr[mid] < target)
        return recursiveBinarySearch(arr, target, mid + 1, high); // right half
    else
        return recursiveBinarySearch(arr, target, low, mid - 1);  // left half
}

int main() {
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 45};
    int target = 23;

    int result = recursiveBinarySearch(arr, target, 0, arr.size() - 1);
    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";
}

// OUTPUT:
// Element found at index 5
```
# Lecture 18 

 <img width="1917" height="1079" alt="Screenshot 2025-10-01 183944" src="https://github.com/user-attachments/assets/3cecb465-5f16-4c7d-82eb-2e21095a5d1e" />
 
leetcode - 3 not submitted
```cpp
class Solution {
public:
    int search(vector<int>& A, int tar) {
        int st = 0, end = A.size()-1;

        while(st <= end){
            int mid = st + (end - st)/2;
            if(A[mid] == tar){
               return mid;
            }
            if(A[st] <= A[mid]){//left sorted
                if(A[st] <= tar && tar <= A[mid]){
                    end = mid - 1;
                }else{
                    st = mid + 1;
                }
            }else{//right sorted
                if(A[mid] <= tar && tar <= A[mid]){
                    end = mid + 1;
                }else{
                    st = mid - 1;
                }
            }
        }

        return -1;
    }
};
```
this is submitted by gpt in leetcode
```cpp
class Solution {
public:
    int search(vector<int>& A, int tar) {
        int st = 0, end = A.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;
            
            if (A[mid] == tar) {
                return mid;
            }

            // Check if left half is sorted
            if (A[st] <= A[mid]) {
                if (A[st] <= tar && tar < A[mid]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } 
            // Otherwise, right half is sorted
            else {
                if (A[mid] < tar && tar <= A[end]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};
```
# Lecture 19
leetcode 852. Peak Index in a Mountain Array

<img width="1919" height="1079" alt="Screenshot 2025-10-04 154801" src="https://github.com/user-attachments/assets/8d1099ed-840d-42e4-87a7-1b70f0a1b1f7" />

<img width="1919" height="1075" alt="Screenshot 2025-10-04 161105" src="https://github.com/user-attachments/assets/143e341a-6d87-4317-a157-9c074f374224" />

# Lecture 20
