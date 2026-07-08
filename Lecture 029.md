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

# 1910. Remove All Occurrences of a Substring

<img width="915" height="263" alt="image" src="https://github.com/user-attachments/assets/8dbb7e12-dcc5-42d5-81e7-f02e86042658" />

This how erase function will work

<img width="708" height="290" alt="image" src="https://github.com/user-attachments/assets/08d73809-d90b-4940-865c-3f6ccccd0c36" />

<img width="946" height="517" alt="image" src="https://github.com/user-attachments/assets/ebd556a3-b426-4027-bb22-3459f9b122c6" />

```cpp
class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length() > 0 && s.find(part) < s.length()){
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};
```
