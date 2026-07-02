<img width="199" height="323" alt="image" src="https://github.com/user-attachments/assets/29ba1737-4fb9-4e6d-aed1-b1560cb0c294" />

1)Container 
i) Vector :A vector is a sequence container in the C++ STL that implements a dynamic array. It stores elements in contiguous memory and automatically resizes itself when elements are inserted or removed.

<img width="346" height="323" alt="image" src="https://github.com/user-attachments/assets/f51e653d-1680-422d-ac7f-3d3ce03d282e" />

operation on container

<img width="278" height="407" alt="image" src="https://github.com/user-attachments/assets/9dc09711-9315-43fc-90f3-6bfcefc706da" />

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;//vector container created--> Vector size can grow and shrink automatically

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
    for(int val:vec){//for (int val : vec2){ /* code */ }
        cout << val << " ";
    }
    cout<< endl;
    return 0;
}
//Output:
// 6
// 8
// val at index 2:3OR3
// front: 1
// back: 6
// 1 2 3 4 5 6
```
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec(10,-1);//(size,value)-->dynamic programming - tabulation DP[][] 

    // print Full array 
    for(int val:vec){
        cout << val << " ";
    }
    cout<< endl;
    return 0;
}
//Output:
//-1 -1 -1 -1 -1 -1 -1 -1 -1 -1 
```
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec1 = {1,2,3,4,5};

    vector<int> vec2(vec1);

    // print Full array 
    for(int val:vec2){
        cout << val << " ";
    }
    cout<< endl;
    return 0;
}
//Output:
//1 2 3 4 5
```
<img width="70" height="200" alt="image" src="https://github.com/user-attachments/assets/40d8627a-0912-4213-978e-a2e66fc61ce0" />

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};

    vec.erase(vec.begin());//after deletion index changed so acc. to that next will delete
    vec.erase(vec.begin()+1, vec.begin()+3);// erase function will changes only size but not capacity even n erase also (+3 mans it eletes 3rd index value)

    // print Full array 
    for(int val:vec){
        cout << val << " ";
    }
    cout<< endl;
    
    return 0;
}
//Output:
//2 5
```
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};

    vec.insert(vec.begin() + 2,100);//(pos,element)

    // print Full array 
    for(int val:vec){
        cout << val << " ";
    }
    cout<< endl;
    
    return 0;
}
//Output:
//1 2 100 3 4 5
```
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};

    vec.clear();

    // print Full array 
    for(int val:vec){
        cout << val << " ";
    }
    cout<< endl;

    cout << "size: " << vec.size() << endl; 
    cout << "cap: " << vec.capacity() << endl;
    cout << "empty: " << vec.empty() << endl; // if not empty:0
    
    return 0;
}
// Output:
//
// size: 0
// cap: 5
// empty: 1
```
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};

    cout << "vec.begin: " << *(vec.begin()) << endl;//value of start
    cout << "vec.end: " << *(vec.end()) << endl;//value of end + 1 i.e random value
    cout << "vec.rbegin: " << *(vec.rbegin()) << endl;//value of end
    cout << "vec.rend: " << *(vec.rend()) << endl;//value of start - 1 i.e random value
    return 0;
}
// Output:
// vec.begin: 1
// vec.end: 17367232
// vec.rbegin: 5
// vec.rend: 201360311
```
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};

    cout << "Forward:" ;
    vector<int> :: iterator it;
    for(it = vec.begin(); it != vec.end(); it++) {
        cout << *(it) << " " ;
    }

    cout << "\nBackward:" ;
    for(auto it = vec.rbegin(); it != vec.rend(); it++) {//vector<int> :: iterator-->auto 
        cout << *(it) << " ";
    }
}
// Output:
// Forward:1 2 3 4 5 
// Backward:5 4 3 2 1
```
ii)List Container-->it is a doubly linked list 

<img width="362" height="443" alt="image" src="https://github.com/user-attachments/assets/a672df95-1f1d-4cbb-9d4b-0f3e7ec6de35" />

same as vector all operation done here front ke operations are also available  
```cpp
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    list<int> l;

    l.emplace_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);

    l.pop_back();
    l.pop_front();

     // print Full array 
    for(int val:l){
        cout << val << " ";
    }
    cout<< endl;

    return 0;
}
// Output:
// 3 1
```
iii)Deque:Double Ended Queue 

<img width="404" height="416" alt="image" src="https://github.com/user-attachments/assets/4f4bb93b-dc56-4419-a5e1-9c0065382105" />

Here also same we can same all operations as vector and list

<img width="384" height="224" alt="image" src="https://github.com/user-attachments/assets/65d83c0e-f54c-4b0d-9a62-f8b7f3741d8d" />

```cpp
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d;

    d.emplace_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);

    d.pop_back();
    d.pop_front();

     // print Full array 
    for(int val:d){
        cout << val << " ";
    }
    cout<< endl;

    cout << d[2] << endl;//garbage value
    cout << d[1] << endl;

    return 0;
}
// Output:
// 3 1 
// 2
// 1
```

