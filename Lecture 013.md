# Lecture 13 - Buy and Sell Stock Problem and Pow(X,N) Power exponential Problem - Leetcode 

<img width="1920" height="1080" alt="edffbc1d-19ab-4691-a05b-0d63ce7de6b6" src="https://github.com/user-attachments/assets/c34073f2-1b9e-456f-a264-dd1645663c0c" />

```
we had studied in time complexity lesson that any code will succesfully submited ony when ther 10^8 operation will be done 

If n becomes very large, like 2^31 (a common upper limit for a 32-bit signed integer), this method becomes too slow.
You can only do about 10^8 operations in 1 second (typical competitive programming limit).
So, O(n) time will take too long and lead to TLE (Time Limit Exceeded).
----------------------------------------------------------------------------------------
✅ Better Way: Binary Exponentiation :-->it does not uses loop for i = 0 to n
it Uses:
x *= x → squares the base
n /= 2 → halves the exponent
if (n % 2 == 1) → multiplies result when needed
Time: O(log n)
Fast for large powers (like x^1000000000)
---------------------------------------------------------------------------------------------
It reduces time complexity from O(n) to O(log n).
Works fast even when n is very large like 2^31
---------------------------------------------------------------------------------------
pow(x, n)--->Function call to compute power
xⁿ or "compute x to the power n"--->Mathematical description
------------------------------------------------------------------------------------------

```
<img width="1920" height="1080" alt="Screenshot from 2025-07-13 17-53-20" src="https://github.com/user-attachments/assets/57c02653-e5c2-4c0b-a3ef-c8eefdcdd36a" />

<img width="1920" height="1080" alt="Screenshot from 2025-07-13 17-54-05" src="https://github.com/user-attachments/assets/462848d1-f4fd-4bc1-b212-8f3f6968dc04" />
<img width="1920" height="1080" alt="Screenshot from 2025-07-13 18-02-21" src="https://github.com/user-attachments/assets/2c41c051-2fc1-48a7-9cee-5e2ad0132877" />

50.Pow(x,n) - leetcode 
by Binary Exponentiation method

```cpp
class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1.0;//corner cases(if conditional)**optional**
        if(x == 0) return 0.0;
        if (x == 1) return 1.0;
        if (x = -1 && n%2 == 0) return 1.0;
        if (x = -1 && n%2 != 0) return -1.0;


        long binform = n;
        double ans = 1;

        // handle negative exponent
        if(binform < 0){
            x = 1 / x;
            binform = -binform; // convert to positive
        }
         //handle positve exponent
        while(binform > 0){
            if(binform % 2 == 1){
                ans *= x;
            }
            x *= x;//squares of base
            binform /= 2;//halves the exponeint 
        }

        return ans;
    }
};
```

<img width="1920" height="1080" alt="Screenshot from 2025-07-14 15-03-30" src="https://github.com/user-attachments/assets/38464545-0f0e-4feb-b715-2ab54770d96f" />

121. Best Time to Buy and Sell Stock-leetcode
     
```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, bestBuy = prices[0];
 
        for (int i = 1;i< prices.size();i++){
            if(prices[i] > bestBuy){
                maxProfit = max(maxProfit ,prices[i] - bestBuy);
            }
            bestBuy = min (bestBuy, prices [i]); 
        }
        return maxProfit;
    }
};

```
