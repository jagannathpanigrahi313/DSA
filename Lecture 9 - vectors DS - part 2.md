Vectors are simailar to array like
   |-----> they are dynamic in nature i.e it doesn't have exact size like array

STL(Standard template library)
![Screenshot from 2025-07-05 17-18-34](https://github.com/user-attachments/assets/885e2eb7-8efe-458b-81a5-66d57b584563)

#vector syntax

1) ```
   vector <datatype> vector_name;
```cpp
#include <iostream>
#include <vector>//headerfile
using namespace std;

int main(){
    vector<int> vec; 
    cout<<vec[0] << endl;//0
    return 0;
}
```
2) ```
   vector<datatype> vector_name = { val1, val2, val3, ...};
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec ={1,2,3}; 
    cout<<vec[2]<<endl;//3
    return 0;
}
```

3) ```
   vector<datatype> vector_name(size, value);
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec (5,0);// (size of the vector, initial value for all elements)

    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
   
    return 0;
}
// OUTPUT:
// 0
// 0
// 0
```

For each loop
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec (3,0); //3 elements in total.Each initialized to 0
                           //so it's equivalent to vector<int> vec = {0, 0, 0};
    for(int i : vec){//For every integer i in the vector vec" i takes the value of each element in the vector one by one
        cout<< i <<endl;//0
    }
    return 0;
}
//OUTPUT:
// 0
// 0
// 0
```



```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector< char > vec {'a','b','c','d','e'}; 
    for(char i : vec){
        cout<< i <<endl;//0
    }
    return 0;
}
//OUTPUT:
// a
// b
// c
// d
// e
```

# Diffrence between colon(:) and semicolon

✅ : (Colon) → Used in Range-Based for Loop

✅ Example:
```cpp
for (int i : vec) {
    cout << i << endl;
}
```
🔍 Meaning:
Reads as: “For each element i in the container vec”

Used to automatically iterate over containers like arrays, vectors, strings, etc.

Introduced in C++11

✅ Works only with containers (like vector, array, etc.)
✅ ; (Semicolon) → Used in Classic for Loop
✅ Example:
```cpp
for (int i = 0; i < 3; i++) {
    cout << vec[i] << endl;
}
```
🔍 Structure:
```cpp
for (initialization ; condition ; update)
```
; separates three parts:

Initialization → int i = 0

Condition → i < 3

Update → i++

 ✅ Used when you need more control (like skipping, indexing, etc.)

🔁 Visual Comparison
Feature	      : (Colon)	                        ; (Semicolon)
Loop Type	    Range-based	                     Classic
Use Case	       Looping through a container easily	Full control over loop logic
Syntax Example	 for (int x : vec)	               for (int i = 0; i < 3; i++)
Works With	    Containers like vector, array	   Any numeric range / logic


✅ When to use which?
Use : when you just want to access each element in a container

Use ; when you need indexes, custom logic, or want to skip elements
, (Comma) — Comma Operator-->Used to separate multiple expressions in a single line.

# Vector Function
![Screenshot from 2025-07-06 13-26-40](https://github.com/user-attachments/assets/237cb3b5-77d3-44f4-89f2-a5ec1440b155)
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec  ={1,2,3}; 
    cout << "size = " << vec.size() <<endl;//tells vector size
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    cout << "after push back size = "<< vec.size ()<< endl;

    for(int val:vec){
        cout << val << endl;
    }
    return 0;
}
//output:
size = 3
after push back size = 6
1
2
3
25
35
45
```
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec ; 
    cout << "size = " << vec.size() <<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    cout << "after push back size = "<< vec.size ()<< endl;

    for(int val:vec){
        cout << val << endl;
    }
    return 0;
}
//OUTPUT :
size = 0
after push back size = 3
25
35
45
```
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec ; 
    cout << "size = " << vec.size() <<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    cout << "after push back size = "<< vec.size ()<< endl;

    vec.pop_back();

    for(int val:vec){
        cout << val << endl;
    }
    return 0;
}
// OUTPUT:
// size = 0
// after push back size = 3
// 25
// 35
```
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec ; 
    cout << "size = " << vec.size() <<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(31);//number added
    cout << "after push back size = "<< vec.size ()<< endl;

    vec.pop_back();//last number removed

    cout << vec.front() << endl; // first number prints
    cout << vec.back() << endl; // last number prints
    cout << vec.at(1) << endl;//vec[i] same vec.at(i)

    return 0;
}
// OUTPUT:
// size = 0
// after push back size = 4
// 25
// 45
// 35
```
# Static VS Dynamic Allocation
1) it stores memory during compile time  it stores memory during run time
2) it happens inside stack memory        it happens inside heap memory
3) EX:  int arr[5]; --->fixed size        vector<int>---------> resize able i.e no fixed size

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec ; 
    
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);

    cout << "size = "<< vec.size ()<< endl;
    cout << "capacity = "<< vec.capacity() << endl;
    
    return 0;
}
// OUTPUT:
// size = 3
// capacity = 4
```
136. single number (in leetcode)
