<img width="659" height="310" alt="image" src="https://github.com/user-attachments/assets/68641197-5e25-4736-966e-25bc1f3ab96d" />

<img width="470" height="384" alt="image" src="https://github.com/user-attachments/assets/dbb29b0d-b575-424e-b4ff-ee44cbea2fc1" />

minimum time taken to paint board will be 60 minutes the 1st case

<img width="893" height="422" alt="image" src="https://github.com/user-attachments/assets/d6737b43-2c13-40c7-bf18-70bc62e518ca" />

so we had find range in which minimum time taken by painter we will get 
this min and max is not valid in our answer because this was hypothetical similar as book preiouscase

To check our mid is possible(valid) or not -->psuedocode is 2nd part of image
<img width="745" height="269" alt="image" src="https://github.com/user-attachments/assets/d336dcfb-0db7-4cbe-b059-bc4cf54a722b" />

Psuedocode:
<img width="558" height="506" alt="image" src="https://github.com/user-attachments/assets/c7f8cc66-359e-4562-b943-71df25af4249" />

<img width="662" height="532" alt="image" src="https://github.com/user-attachments/assets/0a1cffe9-a9fd-46e5-8c04-cb32e9721a68" />

```cpp
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// O(n)
bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime) {//O(n)
    int painters = 1, time = 0;

    for (int i = 0; i < n; i++) {
        if (time + arr[i] <= maxAllowedTime) {
            time += arr[i];
        } else {
            painters++;
            time = arr[i];
        }
    }
    return painters <= m;
}

int minTimeToPaint(vector<int> &arr, int n, int m) {
    int sum = 0, maxVal = INT_MIN;

    // O(n)
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int st = maxVal , end = sum , ans = -1;//intead of this you can write brlow 3 lines
    // int st = maxVal;
    // int end = sum;
    // int ans = -1;

    // O(log(sum) * n)
    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (isPossible(arr, n, m, mid)) { // left
            ans = mid;
            end = mid - 1;
        } else { // right
            st = mid + 1;
        }
    }

    return ans;
}

int main() {

    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;

    cout << minTimeToPaint(arr, n, m) << endl;

    return 0;
}
//Output:60
```
