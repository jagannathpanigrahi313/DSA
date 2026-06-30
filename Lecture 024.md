# Lecture 24- Sorting
It can be done in two types ascending and descending order

## 1)Bubble sort

<img width="959" height="481" alt="image" src="https://github.com/user-attachments/assets/9b984dd6-e188-44c3-a628-7b31fb53b64d" />

```cpp
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {//0(n^2)

    for(int i=0; i<n-1; i++) {
        bool isSwap = false;//assumed array is not sorted

        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {// asending coming if comparision--> arr[j] < arr[j+1] then descebding order it will come 
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){//array is already sorted 
            return;
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n-1; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int main() {
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}
//Output:1 2 3 4
```
## 2)Selection Sort
<img width="863" height="284" alt="image" src="https://github.com/user-attachments/assets/01f83269-b7fa-428a-811f-628fb1dd4d9d" />

```cpp
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {//0(n^2)

    for(int i=0; i<n-1; i++) {
        int smallestIdx = i; //unsorted part starting
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[smallestIdx]) {// asending coming if comparision--> arr[j] > arr[smallestIdx] then descebding order it will come 
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n-1; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int main() {
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    selectionSort(arr, n);
    printArray(arr, n);
    
    return 0;
}
//Output:1 2 3 4
```
## 3)Insertion sort
<img width="930" height="539" alt="image" src="https://github.com/user-attachments/assets/ab0a9fa4-4ef4-4b1f-9277-d2495babc2bd" />

```cpp
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){//0(n^2)

    for(int i=1; i<n; i++) {
        int curr = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev] > curr) {// asending coming if comparision--> arr[prev] < curr then descebding order it will come 
            arr [prev+1] = arr [prev];
            prev --;
        }

        arr[prev+1] = curr; //placing the curr el in its correct position
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n-1; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int main() {
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    insertionSort(arr, n);
    printArray(arr, n);
    
    return 0;
}
```
