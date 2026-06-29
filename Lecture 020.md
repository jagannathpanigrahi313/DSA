# Lecture 020- Single Element in sorted array 

whenever we have to solve in O(log n) TC we use binary search 

<img width="959" height="539" alt="image" src="https://github.com/user-attachments/assets/9b6b80ba-6c27-41c3-a140-8984e0b36e0c" />

<img width="959" height="539" alt="image" src="https://github.com/user-attachments/assets/a50c538e-5e79-41e2-b347-3db2cedb615c" />

<img width="959" height="539" alt="image" src="https://github.com/user-attachments/assets/846f2eae-8008-4717-ac05-3dcc77c427fd" />

```cpp
class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n = A.size();

        if(n == 1) return A[0];

        int st = 0, end = n-1;
        while(st <= end) {
            int mid = st + (end-st) / 2;

            // handling edge cases i.e if single element found at start or end 
            if(mid == 0 && A[0] != A[1]) return A[mid];//found at start then
            if(mid == n-1 && A[n-1] != A[n-2]) return A[mid];//found at end then

            if(A[mid-1] != A[mid] && A[mid] != A[mid+1]) return A[mid];//we had checked mid is dingle elemen or not 

            if(mid % 2 == 0) {//even
                if(A[mid-1] == A[mid]) { //left 
                    end = mid - 1;
                } else { //right
                    st = mid + 1;
                }
            } else {//odd
                if(A[mid-1] == A[mid]) { //right 
                    st = mid + 1;
                } else { //left
                    end = mid - 1;
                }                
            }
        }
        return -1;
    }
};
```
TC:O(log n)   
SC:O(1)
<img width="386" height="213" alt="image" src="https://github.com/user-attachments/assets/0e654297-db62-4d08-aa01-d77044976d63" />
