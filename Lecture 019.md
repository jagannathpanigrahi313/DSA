

# Lecture 19
leetcode 852. Peak Index in a Mountain Array

<img width="929" height="212" alt="image" src="https://github.com/user-attachments/assets/898f95cf-c2ea-4972-aade-cd3857ce382b" />


<img width="1919" height="1079" alt="Screenshot 2025-10-04 154801" src="https://github.com/user-attachments/assets/8d1099ed-840d-42e4-87a7-1b70f0a1b1f7" />

<img width="1919" height="1075" alt="Screenshot 2025-10-04 161105" src="https://github.com/user-attachments/assets/143e341a-6d87-4317-a157-9c074f374224" />

```cpp
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int st = 1, end = A.size()- 2;

        while(st <= end) {
            int mid = st + (end - st) / 2;

            if(A[mid-1] < A[mid] && A[mid] > A[mid + 1]) {
                return mid;
            } else if(A[mid-1] <A[mid]) { //right
               st = mid + 1;
            } else {//left
                end = mid - 1;
            } 
        }
        return -1; 
    }
};
```
TC: O(log n) because every time our search space is becoming half 
