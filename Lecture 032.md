# Leetcode 443: String Compression 

<img width="548" height="397" alt="image" src="https://github.com/user-attachments/assets/18c439ca-b89f-4d8a-9f21-0ce381f82c1a" />

with string length : 6

<img width="940" height="317" alt="image" src="https://github.com/user-attachments/assets/c23da8e5-adb2-472c-a8cd-3046fcfffc68" />


<img width="945" height="509" alt="image" src="https://github.com/user-attachments/assets/8413216f-e5d3-451f-955f-e3d2aa435ef3" />

```cpp
class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;

        for(int i = 0; i<n; i++){
            char ch = chars[i];
            int count = 0;
            
            //To store similar character count 
            while(i < n && chars[i] == ch) {
                count++; i++;
            }

            if(count == 1) {
                chars[idx++] = ch;
            }else{
                chars[idx++] = ch;//stores character
                string str = to_string(count);//stores count no. in string 
                for(char dig : str){
                    chars[idx++] = dig;
                }
            }
            i--;
        }
        chars.resize(idx);
        return idx;
    }
};
```
