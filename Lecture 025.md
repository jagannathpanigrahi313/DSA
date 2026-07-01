<img width="482" height="275" alt="Screenshot 2026-07-01 123056" src="https://github.com/user-attachments/assets/f7d22469-71c3-4d30-bd27-f783a8ac3859" />

1)Brute force approach 

<img width="470" height="232" alt="Screenshot 2026-07-01 125254" src="https://github.com/user-attachments/assets/06df734d-099e-4879-875e-96f310580d95" />

2) Optimized approach 

<img width="459" height="229" alt="image" src="https://github.com/user-attachments/assets/ac68e041-e3a2-4a96-aaef-30938a6b934b" />

```cpp
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int count0 = 0, count1 = 0, count2 = 0;

        //O(n)-->first pass 
        for(int i=0; i<n; i++){
            if(nums[i] == 0) count0++;
            else if(nums[i] == 1) count1++;
            else count2++;
        }
        
        //O(n))-->second pass 
        int idx = 0;
        for(int i=0; i<count0; i++){
            nums[idx++] = 0;
        }
        for(int i=0; i<count1; i++){
            nums[idx++] = 1;
        }
        for(int i=0; i<count2; i++){
            nums[idx++] = 2;
        }
    }
};
```

3) Optimal approach

<img width="674" height="165" alt="image" src="https://github.com/user-attachments/assets/93dd5817-798e-4734-8734-aa3f277be9ad" />

<img width="830" height="452" alt="image" src="https://github.com/user-attachments/assets/c2b9f5d0-ddf1-471d-8386-ade8a35b70a5" />

<img width="932" height="445" alt="image" src="https://github.com/user-attachments/assets/cb015efa-9e12-4690-9c7f-7ebe77560798" />

Sorted part slowly increase an unsorted part slowly decrease

```cpp
class Solution {
public:
    void sortColors(vector<int>& nums) {//O(n)
        int n = nums.size();
        int low = 0, mid = 0, high = n-1;

        while(mid <= high) {//sing;e pass
            if(nums[mid] == 0){//case 10
                swap(nums[low],nums[mid]);
                mid++; low++;
            } else if(nums [mid] == 1){//case 2:1
                mid++;
            }else{//case3:2
               swap(nums[high], nums[mid]);
               high--;
            }
        }
    }
};
```
Tc: O(n)
SC: O(1)
