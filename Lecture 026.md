Merge sort : TC:O(n log n) 

<img width="506" height="200" alt="image" src="https://github.com/user-attachments/assets/5b7323f3-4c2d-4504-a13c-58ba0ef33970" />

TC: O(m + n)

Leetcode 88:Merge Sorted Array
<img width="948" height="434" alt="image" src="https://github.com/user-attachments/assets/7e34adf0-e292-4af4-8a73-d3e666dad8c0" />

```cpp
class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {//SC:O(1) TC:O(m+n)
        int idx = m+n -1 , i = m-1, j = n-1; 

        while(i >= 0 && j >= 0) {
            if(A[i] >= B[j]) {
                A[idx--] = A[i--];
            } else {
                A[idx--] = B[j--];
            }
        }  

        while(j >= 0) {
            A[idx--] = B[j--];
        } 
    }
};
```
Leetcode 31:Next Permutation--> next largest possible value 

<img width="868" height="488" alt="image" src="https://github.com/user-attachments/assets/fe461c32-cbb3-4394-84ab-9a4472f70070" />

by Brute force approach we will do in Recurssion 

<img width="920" height="500" alt="image" src="https://github.com/user-attachments/assets/7462ebc0-ecdc-40fe-976a-9999a123b226" />
