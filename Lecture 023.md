<img width="778" height="407" alt="image" src="https://github.com/user-attachments/assets/1c35aca3-71a1-44a9-a9a7-eb8db24609a3" />

<img width="879" height="463" alt="image" src="https://github.com/user-attachments/assets/97917b52-ddcc-404d-9bdd-7c5db9ddfad7" />

Here, binary search algoothm chsnges from brfore 

<img width="959" height="539" alt="image" src="https://github.com/user-attachments/assets/8b2ed7bb-e39a-4c63-8a41-99d0a692ba2a" />

Pseudocode for binary search 
<img width="869" height="512" alt="image" src="https://github.com/user-attachments/assets/ae22ca9b-40f0-464b-b220-bf53988d12f4" />

<img width="827" height="379" alt="image" src="https://github.com/user-attachments/assets/ac9d9817-6727-4087-92a6-dd1fadf5d26e" />

WE Cannot put all 3 cows therefore mid = 4 not a possible answer
![Uploading image.png…]()

Pseudocode:
<img width="880" height="525" alt="image" src="https://github.com/user-attachments/assets/4c3f4c16-cdc9-4c94-8e1f-f597c3bdaf75" />

<img width="647" height="470" alt="image" src="https://github.com/user-attachments/assets/9139aacd-8c8b-41da-b1d2-adf05d4aaad6" />

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int N, int C,int minAllowedDist){//O(N)
    int cows = 1, lastStallPos = arr[0];

    for (int i = 1; i < N; i++){
        if (arr[i]-lastStallPos >= minAllowedDist){
            cows++;
            lastStallPos = arr[i];
        }
        
        if (cows == C){
            return true;
        }   
    }
    return false;
}

int getDistance(vector<int> &arr, int N, int C) {
    sort(arr.begin(),arr.end());//O(Nlog N)
    //st = 1, end = maxVal-minVal;

    int st = 1, end = arr[N-1] - arr[0], ans = -1;//maxVal - minVal--> array sorted therefore no neeed to put this 

    while (st <= end){//O(log(range))
        int mid = st +(end - st) / 2;

        if(isPossible(arr ,N,C ,mid)){//right
            ans = mid;
            st = mid +1;
        }else{//left
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int N = 5, C = 3;
    vector<int> arr = {1, 2, 8, 4, 9};

    cout << getDistance(arr, N, C) << endl;
    return 0;
}

//Output:3
```

whenevever min max Q will do like this solve

<img width="335" height="218" alt="Screenshot 2026-06-30 182603" src="https://github.com/user-attachments/assets/e6d9d608-3701-4c2a-a31c-0519898aace8" />

<img width="593" height="203" alt="Screenshot 2026-06-30 182645" src="https://github.com/user-attachments/assets/7d4316e1-5050-42cb-8796-9480d899629e" />
