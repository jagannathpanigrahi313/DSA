# Lecture 21 - Book Allocation or Allocate Books Problem

<img width="648" height="397" alt="image" src="https://github.com/user-attachments/assets/3c66c0a2-49bf-43e5-898a-59765ef1fee7" />

<img width="526" height="539" alt="Screenshot 2026-06-30 131449" src="https://github.com/user-attachments/assets/8df6e4d1-4cc7-487d-bc23-e37732081ce1" />

```cpp
#include <iostream>
#include <vector>
using namespace std;

//O(n)
bool isValid(vector<int> &arr, int n, int m,int maxAllowedpages) { // maxAllowedpages --> means md value only
    int students = 1, pages = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > maxAllowedpages){
            return false;
        }

        if(pages + arr[i] <= maxAllowedpages){
            pages += arr[i];
        }else{
            students++;
            pages = arr[i];
        }
    }
    return students > m ? false : true;
}

int allocateBooks(vector<int> &arr, int n, int m) {//therefore overall TC:O(log N * n)
    if(m > n ){
        return -1;
    }

    int sum = 0;
    for(int i = 0; i < n; i++){ //O(n) ka loop
        sum += arr[i];
    }
    int ans = -1; 
    int st = 0 , end = sum ;//range of possible ans 

    //binary search
    while(st <= end){//O(log N) therefore O(log N * n)
        int mid = st +(end- st)/2;

        if(isValid(arr,n,m,mid)){//left-valid-->O(n)
            ans = mid;
            end = mid - 1;
        }else{//right-invalid 

            st = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;

    cout << allocateBooks(arr, n, m) << endl;
    return 0;
}
//Output:6
```
