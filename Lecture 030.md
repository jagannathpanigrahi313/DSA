# 567. Permutation in String

No. of character + frequency of character are same 

EX 1:
<img width="938" height="387" alt="image" src="https://github.com/user-attachments/assets/8ef42838-5e8d-4d9c-9c2b-c98f895126a5" />
REturn true

<img width="534" height="290" alt="image" src="https://github.com/user-attachments/assets/5922a2d6-6c96-4a5e-a176-d2e36ec80aa2" />

Ex 2:
<img width="626" height="224" alt="Screenshot 2026-07-08 152603" src="https://github.com/user-attachments/assets/ebba9fbb-a8be-4622-8c97-98af927fb3ff" />

```cpp
class Solution {
public:
    bool isFreqSame(int freq1[], int freq2[]){
        for(int i = 0;i<26;i++){
            if (freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};

        for(int i = 0; i < s1.length();i++){//Store s1 ka frequency
            int idx = s1[i] - 'a';
            freq[idx]++;
        }

        int windSize = s1.length();

        for(int i = 0 ;i < s2.length(); i++){//This moves the starting position of the window.
            int windIdx = 0, idx = i;//idx points into s2.windIdx counts how many characters have been added to the current window.
            int windFreq[26] = {0};

            while(windIdx < windSize && idx < s2.length()) {
                windFreq[s2[idx]-'a']++;
                windIdx++;idx++;
            }

            if(isFreqSame(freq, windFreq)){
                return true;
            }
        }
        return false;
    }
};
```
