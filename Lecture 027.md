<img width="199" height="323" alt="image" src="https://github.com/user-attachments/assets/29ba1737-4fb9-4e6d-aed1-b1560cb0c294" />

1)container - Vector

<img width="346" height="323" alt="image" src="https://github.com/user-attachments/assets/f51e653d-1680-422d-ac7f-3d3ce03d282e" />

operation on container

<img width="278" height="407" alt="image" src="https://github.com/user-attachments/assets/9dc09711-9315-43fc-90f3-6bfcefc706da" />

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;//vector container created 

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);// whenever you push capcity double as before 
    vec.push_back(6);// and size ony inc. by 1 
    vec.emplace_back(6);

    vec.pop_back();

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    cout << "val at index 2:" << vec[2] << "OR" << vec.at(2) << endl;
    cout << "front: " << vec.front() << endl;
    cout << "back: " << vec.back() << endl;

    // print Full array 
    for(int val:vec){
        cout << val << " ";
    }
    cout<< endl;
    return 0;
}
//Output:
6
8
val at index 2:3OR3
front: 1
back: 6
1 2 3 4 5 6
```

