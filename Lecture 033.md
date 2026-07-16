# Math for DSA oneshot

<img width="476" height="402" alt="image" src="https://github.com/user-attachments/assets/0bf64e00-5ff5-4d3d-bab4-501881decb02" />

```cpp
#include <iostream>
using namespace std;

    string isPrime(int n) {
        for(int i=2; i*i <= n; i++) {
            if(n %i == 0) {
                return "Non prime";
            }
        }

        return "Prime";
}

int main() {
    int n = 47;

    cout << isPrime(n) << endl;
    return 0;
}
//Outpt:Prime
```
# Sieve of Eratosthenes: Provides an optimized algorithm for counting prime numbers within a range, significantly reducing time complexity compared to brute force.

<img width="1765" height="781" alt="Screenshot 2026-07-15 222104" src="https://github.com/user-attachments/assets/9b5fc7c2-a75e-4201-a721-272a4dc432b5" />

```cpp
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrime(n+1, true);
        int count = 0;

        for(int i=2; i < n; i++){
            if(isPrime[i]) {
                count++;

                for(int j = i*2; j < n; j = j + i) {
                    isPrime[j] = false;
                }
            }
        }
        return count;
    }
};
```
