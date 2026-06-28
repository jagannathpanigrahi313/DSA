
# Lecture 18 - Search in Rotated Sorted array 

here array was initially sorted but now rotated --> to search an element we will do generally linear search O(n) But will low TC we will use Binary search O(log n)

In Rotated Sorted array left/ right side of mid will always sorted --> the side which will be sorted on that side only we will apply binary search  

 <img width="1917" height="1079" alt="Screenshot 2025-10-01 183944" src="https://github.com/user-attachments/assets/3cecb465-5f16-4c7d-82eb-2e21095a5d1e" />
 
leetcode - 33.Search in Rotated Sorted array --> not submitted
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
