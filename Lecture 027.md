<img width="199" height="323" alt="image" src="https://github.com/user-attachments/assets/29ba1737-4fb9-4e6d-aed1-b1560cb0c294" />

1)Container 
a) Sequence container - A container which stores sequentially data in continous manner

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
Note: in DSA there are two 2 Deque Vs dequeue Both are different 
      Deque: Double Ended Queue
      Dequeue: POP in queue
      
## Pair
```cpp
#include <iostream>
#include <deque>
using namespace std;

int main() {
    pair <int,pair< char,int >>p = {1,{'a',3}};

    cout << p.first << endl;
    cout << p.second.first << endl;
    cout << p.second.second << endl;

    return 0;
}
// Output:
// 1
// a
// 3
```
```cpp
#include <iostream>
#include <deque>
using namespace std;

int main() {
    pair < int,int > p = {1,3};//you can different data type pair also

    cout << p.first << endl;
    cout << p.second << endl;


    return 0;
}
// Output:
// 1
// 3
```
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<int,int>> vec = {{1,2},{2,3},{3,4}};

    vec.push_back({4,5});
    vec.emplace_back(4,5);// in place object creats 
    // vec.push_back(4,5); give error because it only inserts

    for(auto p : vec){
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}
// Output:
// 1 2
// 2 3
// 3 4
// 4 5
// 4 5
```
b)Non continuous container

i) Stack - Follows LIFO

<img width="233" height="464" alt="image" src="https://github.com/user-attachments/assets/3021ec9b-cfea-4866-9d02-e0c88552d8c0" />
<img width="198" height="299" alt="image" src="https://github.com/user-attachments/assets/77772caa-0025-4bef-91be-c0f75bdc29af" />

```cpp
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    cout << "top = " << s.top() << endl;
    return 0;
}
//Output:top = 3
```
```cpp
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.empty()){
        cout << s.top() << " ";//print top
        s.pop(); //delete top
    }
    cout << endl;
    return 0;
}
//Output:
// 3 2 1 
```
```cpp
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    stack<int> s2;

    s2.swap(s);

    cout << "s.size: " << s.size() << endl;
    cout << "s2.size: " << s2.size() << endl;

    return 0;
}
//Output:
// s.size: 0
// s2.size: 3
```
ii)Queue - follows FIFO Principle

<img width="216" height="481" alt="image" src="https://github.com/user-attachments/assets/8b11de2d-888f-4042-abe8-a55d12a415bd" />

<img width="485" height="173" alt="image" src="https://github.com/user-attachments/assets/1e713830-3f99-4bb1-a65a-ebb1a172fed3" />

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout<< endl;

    return 0;
}
//Output:1 2 3
```
similarly size swap eempty all will work as stack only

iii) Priority queue-A priority queue is an abstract data type where each element has an assigned priority. A priority queue always processes the highest-priority elements first (Generally by default)

<img width="466" height="451" alt="image" src="https://github.com/user-attachments/assets/27b3043e-469d-4c66-b2be-c6b7e62a000a" />

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    cout<< endl;

    return 0;
}
//Output:3 2 1 
```
Reverse of priority queue
```cpp
#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>> q ;

    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    cout<< endl;

    return 0;
}
//Output:1 2 3 
```
Similarly other operation will work same as above 2 type 

<img width="413" height="241" alt="Screenshot 2026-07-03 161326" src="https://github.com/user-attachments/assets/92da79ee-cdf3-4199-ab3c-21a841c94f6d" />

Time Complexicty in Priority Queue

<img width="323" height="167" alt="image" src="https://github.com/user-attachments/assets/f87b87e9-ea92-465e-8065-38824bb823b2" />

Time Compexicity in Queue

<img width="271" height="146" alt="image" src="https://github.com/user-attachments/assets/51ab703c-45ea-4518-b5ed-ee64cec8eb81" />

Time Complxicty in Stack 

<img width="310" height="154" alt="image" src="https://github.com/user-attachments/assets/ff756d7a-c65f-49d8-b29b-5f084c3f2e23" />

iv) Map 

<img width="890" height="509" alt="image" src="https://github.com/user-attachments/assets/67655f50-09a0-420f-8ee8-2ce9b0aa6259" />

Here every key is unique while value can be same/repeated
And all kay are sorted at asending order(smallest ASCII value comes first then bigger)
weKnow Uppercase letter A-Z:65-90, Lowercase letter a-z: 97-122

```cpp
#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string,int> m;//<datatype_key, datatype_value>

    m["tv"] = 100;//Here Key are products & value are quantity of product
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    for(auto p:m){
        cout << p.first << " " << p.second<< endl;
    }
    return 0;
}
//Output:
// headphones 50
// laptop 100
// tablet 120
// tv 100
// watch 50
```
```cpp
#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string,int> m;//<datatype_key, datatype_value>

    m["tv"] = 100;//Here Key are products & value are quantity of product
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    m.insert({"camera",13});
    m.emplace("jagan",13);
    m.erase("tv");

    for(auto p:m){
        cout << p.first << " " << p.second<< endl;
    }

    cout<< " count = " << m.count("laptop")<<endl;// no. of Key_laptop 
    cout<< " count = " << m["laptop"]<<endl;// no. of Value_laptop 

    if (m.find("TV")!=m.end()) {
        cout << "Found\n";
    }else{
        cout << "Not found\n";
    }
    
    return 0;
}
//Output:
// laptop 100
// tablet 120
// watch 50
//  count = 1
//  count = 100
// Not found
```

Multi Map

<img width="630" height="208" alt="image" src="https://github.com/user-attachments/assets/2e92f5f6-147d-4427-9bab-33aeeb2a264d" />

```cpp
#include <iostream>
#include <map>
using namespace std;

int main(){
    multimap<string,int> m;//<datatype_key, datatype_value>

    m.emplace("tv",100);//Here we we cannot insert by using this[]
    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("tv",100);

    // m.erase("tv");all will deleted
    m.erase(m.find("tv")); //only one tv will be deleted

    for (auto p:m){
        cout << p.first << " " << p.second << endl;
    }
    
    return 0;
}
//Output:
// tv 100
// tv 100
// tv 100
```
Unordered Map- stored randomly 
```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;//<datatype_key, datatype_value>

    m.emplace("tv",100);//Here we can insert by using this[] also
    m["laptop"] = 100;
    m.emplace("tablet",100);
    m.emplace("induction",100);

    for (auto p:m){
        cout << p.first << " " << p.second << endl;
    }
    
    return 0;
}
//Output:
// induction 100
// tablet 100
// laptop 100
// tv 100
```

## Diffrence between unordered map and map
<img width="488" height="280" alt="image" src="https://github.com/user-attachments/assets/11473778-b98c-4e09-89a8-da157c219c28" />

if collision occurs then only TC of unordered map becomes O(n)

v) Set container

<img width="880" height="485" alt="image" src="https://github.com/user-attachments/assets/2b790078-6e06-41ed-85f3-965ec28f70fe" />

```cpp
#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;//<datatype_key, datatype_value>

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);

    //duplicate elements will not print or take size
    s.insert(4);
    s.insert(5);
    s.insert(6);
    
    cout<< s.size() << endl;
    for (auto p:s){
        cout << p << " ";
    }
    cout << endl;
    
    return 0;
}
//Output:
// 6
// 1 2 3 4 5 6
```
Other operation are same as Map

# Lower bound(key)- it should not be less than key
Upper bound(key)- greater than key

```cpp
#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;//<datatype_key, datatype_value>

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(6);

    cout<< "lower bound = " << *(s.lower_bound(4)) << endl;
    cout<< "lower bound = " << *(s.lower_bound(5)) << endl;//if not there then print next bigger i.e s.end(value)

    cout<< "upper bound = " << *(s.upper_bound(4)) << endl;
    
    cout<< s.size() << endl;
    for (auto p:s){
        cout << p << " ";
    }
    cout << endl;
    
    return 0;
}
//Output:
// lower bound = 4
// lower bound = 6
// upper bound = 6
// 5
// 1 2 3 4 6 
```
Multiset- here duplicate elements will also be printed
```cpp
#include <iostream>
#include <set>
using namespace std;

int main(){
    multiset<int> s;//<datatype_key, datatype_value>

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(6);

    s.insert(4);
    s.insert(6);

    cout<< s.size() << endl;
    for (auto p:s){
        cout << p << " ";
    }
    cout << endl;
    
    return 0;
}
//Output:
// 7
// 1 2 3 4 4 6 6 
```
lower bound & upper bound concept will work in only sorted data 
Therefore it is not valid in Unordered set

Unordered set - stores data randomly 
TC: O(1) 
if recurssion then TC:O(n)

```cpp
#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;//<datatype_key, datatype_value>

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(6);

    cout<< s.size() << endl;
    for (auto p:s){
        cout << p << " ";
    }
    cout << endl;
    
    return 0;
}
//Output: 
// 5
// 6 1 2 3 4
#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;//<datatype_key, datatype_value>

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(6);

    cout<< s.size() << endl;
    for (auto p:s){
        cout << p << " ";
    }
    cout << endl;
    
    return 0;
}
//Output: 
// 5
// 6 1 2 3 4
```

# Types of STL Algorithm 

<img width="709" height="293" alt="image" src="https://github.com/user-attachments/assets/248411c1-2393-4135-b7f7-1f05fb829f1e" />

1)
```cpp
#include <iostream>
#include <unordered_set>
#include <algorithm>//sort is declared here
using namespace std;

int main(){
    int arr[4] = {3,5,1,2};

    sort(arr,arr + 5);//by default in ascending order

    cout<< sizeof(arr) << endl;
    for (int  val : arr){
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
//Output: 
// 16
// 1 2 3 5
```

for vector

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> vec = {3,5,1,8,2};

    sort(vec.begin(),vec.end());

    cout<< sizeof(vec) << endl;//in bytes it comes 
    for (int  val : vec){
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
//Output: 
// 12
// 1 2 3 5 8
```
2)  
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> vec = {3,5,1,8,2};

    sort(vec.begin(),vec.end(),greater<int>());//descending order done

    cout<< sizeof(vec) << endl;//in bytes it comes 
    for (int  val : vec){
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
//Output: 
// 12
// 8 5 3 2 1
```
## we wil sort pairs on basis of frist value
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<pair<int,int>> vec = {{3,1},{2,1},{7,1},{5,2}};

    sort(vec.begin(),vec.end());

    cout<< sizeof(vec) << endl;//in bytes it comes 
    for (auto p : vec){
        cout << p.first << " "<<p.second << endl;
    }
    cout << endl;
    
    return 0;
}
//Output: 
// 12
// 2 1
// 3 1
// 5 2
// 7 1
```
## Know we will sorted pairs on basis of second value

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(pair<int,int>p1,pair<int,int>p2){
    if (p1.second < p2.second) return true;
    else return false;
}

int main(){
    vector<pair<int,int>> vec = {{3,1},{2,1},{7,1},{5,2}};

    sort(vec.begin(),vec.end(),comparator);

    cout<< sizeof(vec) << endl;//in bytes it comes 
    for (auto p : vec){
        cout << p.first << " "<<p.second << endl;
    }
    cout << endl;
    
    return 0;
}
//Output: 
// 12
// 3 1
// 2 1
// 7 1
// 5 2
```
## Know we will sort the pairs on basis of second value but if same two or more comes than put in order of 1st value
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(pair<int,int>p1,pair<int,int>p2){
    if (p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;
    else return false;
}

int main(){
    vector<pair<int,int>> vec = {{3,1},{2,1},{7,1},{5,2}};

    sort(vec.begin(),vec.end(),comparator);

    cout<< sizeof(vec) << endl;//in bytes it comes 
    for (auto p : vec){
        cout << p.first << " "<<p.second << endl;
    }
    cout << endl;
    
    return 0;
}
//Output: 
// 12
// 2 1
// 3 1
// 7 1
// 5 2
```

<img width="370" height="409" alt="image" src="https://github.com/user-attachments/assets/498683c5-3277-4911-b6eb-00be1d6149b2" />

1)
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(pair<int,int>p1,pair<int,int>p2){
    if (p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;
    else return false;
}

int main(){
    vector<int> vec = {1,2,3,4,5};

    reverse(vec.begin(),vec.end());

    cout<< sizeof(vec) << endl;//in bytes it comes 
    for (auto p : vec){
        cout << p << " ";
    }
    cout << endl;
    
    return 0;
}
//Output: 
// 12
// 5 4 3 2 1
```

Rverse in specific position
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};

    reverse(vec.begin() +1,vec.begin()+3);

    cout<< sizeof(vec) << endl;//in bytes it comes 
    for (auto p : vec){
        cout << p << " ";
    }
    cout << endl;
    
    return 0;
}
//Output: 
// 12
// 1 3 2 4 5
```

<img width="324" height="319" alt="image" src="https://github.com/user-attachments/assets/3cc1d37e-d05c-4ee3-9c6f-c62b5acdd245" />

2)
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s = "abc";
    string s2 = "abc";

    next_permutation(s.begin(),s.end());
    prev_permutation(s2.begin(),s2.end());

    cout<<"next_permutation: "<< s << endl;
    cout<<"prev_permutation: "<< s2 << endl;
    
    return 0;
}
// Output: 
// next_permutation: acb
// prev_permutation: cba
```

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int a = 5,b = 10;
    swap(a,b);
    
    cout<< "a= " << a << endl;
    cout<< "b= " << b << endl;

    cout<<"max: "<< max(4,5) << "\nmin:" << min(6,10)<<endl;
    
    return 0;
}
// Output: 
// a= 10
// b= 5
// max: 5
// min:6
```

<img width="381" height="497" alt="image" src="https://github.com/user-attachments/assets/9cb79b4c-07dc-4005-8819-e02c5e597bbe" />

1)
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};

    cout << *min_element(vec.begin(), vec.end()) << endl;
    cout << *max_element(vec.begin(), vec.end()) << endl;

    return 0;
}
//Output:
// 1
// 5
```

2)
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};

    cout << binary_search(vec.begin(), vec.end(),10) << endl;//0 because doesn't exist
    cout << binary_search(vec.begin(), vec.end(),4) << endl;//1 because it exist

    return 0;
}
//Output:
// 0
// 1
```
3) Cout set bits- cont no. of 1's in no. But it is not efficient therefore it is not used even in company
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
   int n1 = 15;
   long int n2 = 15;
   long long int n3 = 15;

   cout << __builtin_popcount(n1) << endl;
   cout << __builtin_popcountl(n2) << endl;
   cout << __builtin_popcountll(n3) << endl;

    return 0;
}
//Output:
// 4
// 4
// 4
```
