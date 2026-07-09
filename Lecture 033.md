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
