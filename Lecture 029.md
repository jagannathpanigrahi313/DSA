# 125. Valid Palindrome

<img width="939" height="539" alt="image" src="https://github.com/user-attachments/assets/0fd669ec-9299-4fa3-8a6c-0da3a2a22824" />

Q Find if a string is palindrome or not
```cpp
class Solution {
public:
    bool isAlphaNum(char ch){
        if((ch >= '0' && ch <= '9') ||
            (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
                return true;
            }
            return false;
    }
    bool isPalindrome(string s) {
        int st = 0,end = s.length()-1;

        while(st < end){
            if(!isAlphaNum(s[st])){
                st++;continue;
            }
            if(!isAlphaNum(s[end])){
                end--;continue;
            }
            if(tolower(s[st]) != tolower(s[end])){
                return false;
            }
            st++;end--;
        }
        return true;
    }
};
```
TC: O(n)
