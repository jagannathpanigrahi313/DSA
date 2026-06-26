# Lecture - 15
## 238) Product of Array Except Self-leetcode
### by Brute force approach 

by using division operotor --> To Find product array jiss index ka value nikalna hai uss index ka value divide by product of full array 

<img width="1920" height="1080" alt="Screenshot from 2025-07-16 13-59-17" src="https://github.com/user-attachments/assets/9db8b88a-fadc-48d0-bc0b-fc15f1aeaf1d" />

without using division operator

```cpp
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);

        for(int i = 0; i<n ; i++){
            for(int j = 0; j<n ; j++){
                if(i != j){
                    ans[i] *= nums[j];
                }
            }
        }
        return ans;
    }
};
```
above is reffered or by this method also can be done

```cpp
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);

        for(int i = 0; i<n ; i++){
           int prod = 1;
            for(int j = 0; j<n ; j++){
                if(i != j){
                    prod *= nums[j];
                }
            }
            ans[i] = prod;
        }
        return ans;
    }
};
```


| Pattern                        | Time Complexity |
| ------------------------------ | --------------- |
| One loop                 →     | O(n)            |
| Nested loop (2 levels)   →     | O(n²)           |
| Loop inside loop inside loop → | O(n³)           |

TC: O(n^2)
But cnstraint is 10^5 there fore this we have optimize it 
### by using optimal approach for O(n)time complexity & O(1)space complexity

<img width="1920" height="1080" alt="Screenshot from 2025-07-17 21-41-30" src="https://github.com/user-attachments/assets/18947f52-defd-47a2-8ee9-f4c4fb748a93" />

here no space commplexity putted 
we here store data then multiply
```cpp
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        vector<int> prefix(n,1);
        vector<int> suffix(n,1);

        //prefix
        for(int i=1; i<n; i++){
            prefix[i] = prefix[i-1] * nums[i-1];
        }

        //suffix
        for(int i=n-2; i>=0; i--){
            suffix[i] = suffix[i+1] * nums[i+1];
        }

        for(int i=0; i<n; i++){
            ans[i] = prefix[i] * suffix[i];
        }
        
        return ans;
    }
};
```
therefore to bring space compextiy 

so we here first multiply then we will not make any variable i.e extra space complexity will not be used 
```cpp
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);

        //prefix => ans
        for(int i=1; i<n; i++){
            ans[i] = ans[i-1] * nums[i-1];
        }

        int suffix = 1;
        //suffix
        for(int i=n-2; i>=0; i--){
            suffix *= nums[i+1];//ith suffix
            ans[i] *= suffix;
        }

        return ans;
    }
};
```
