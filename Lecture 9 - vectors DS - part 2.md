Vectors are simailar to array like
   |-----> they are dynamic in nature i.e it doesn't have exact size like array

STL(Standard template library)
![Screenshot from 2025-07-05 17-18-34](https://github.com/user-attachments/assets/885e2eb7-8efe-458b-81a5-66d57b584563)

#vector syntax

1) vector<datatype> vector_name;
   
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
2) vector<datatype> vector_name = { val1, val2, val3, ...};
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

3) vector<datatype> vector_name(size, value);


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
Introduced in 	 C++11	                           Available in all versions of C++

✅ When to use which?
Use : when you just want to access each element in a container
Use ; when you need indexes, custom logic, or want to skip elements

