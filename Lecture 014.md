# Lecture 14 - Container with Most Water Problem

11) Container with Most Water Problem-Leetcode

## by Brute Approach

<img width="1920" height="1080" alt="Screenshot from 2025-07-14 18-29-32" src="https://github.com/user-attachments/assets/63e834e2-941f-460c-9bbf-269f08886ebc" />
<img width="537" height="338" alt="image" src="https://github.com/user-attachments/assets/d270818c-1f0f-4038-a56a-4a0794260a20" />

In this 2 pointer approach ---> we do operation on that pointer which is minimum    

```cpp
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;

        for(int i = 0;i<height.size();i++){
            for(int j = i+1;j<height.size();j++){
            int w = j-i;
            int ht = min(height[i], height[j]);
            int currWater = w * ht;
            
            maxWater = max(maxWater, currWater);
            }
        }
        return maxWater;
    }
};
```
<img width="1920" height="1080" alt="Screenshot from 2025-07-14 19-00-33" src="https://github.com/user-attachments/assets/a853ec51-8587-4457-be37-f06cb312afae" />

we need n <= 10^5 therefore this will come

## by two pointer approach
much faster solution which reduces the time complexity to O(n)

<img width="1920" height="1080" alt="Screenshot from 2025-07-16 13-00-57" src="https://github.com/user-attachments/assets/f2b76b05-eeb1-4036-8f8b-4d1a45ceeb82" />

```cpp
class Solution {
public:
    int maxArea(vector<int>& height) {//0(n)
        int maxWater = 0;
        int lp = 0,rp = height.size()-1;

        while(lp < rp){
              int w = rp-lp;
              int ht = min (height[lp],height[rp]);
              int currWater = w * ht; 
              maxWater = max(maxWater, currWater);

              height[lp] < height[rp]? lp++ : rp--; // if (height[lp] < height[rp])
                                                    // lp++;
                                                    // else
                                                    // rp--;
       }
        return maxWater;
    }
};
```
