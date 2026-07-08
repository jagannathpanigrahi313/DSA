<img width="460" height="399" alt="image" src="https://github.com/user-attachments/assets/aa105ff6-6e09-42e5-a274-a392e7f5c7ae" />

```cpp
class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";

        reverse(s.begin(), s.end());

        for (int i = 0; i < n; i++) {
            string word = "";

            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            reverse(word.begin(), word.end());

            if (word.length() > 0) {
                ans += " " + word;
            }
        }

        return ans.substr(1);
    }
};
```
