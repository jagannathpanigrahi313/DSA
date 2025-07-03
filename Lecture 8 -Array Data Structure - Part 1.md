Data Structures are basic structures which are used to store data Where there are many types of data
Algorithm are steps/ process

To store 5 students marks we make 5 variable But for 1000 students we cant make therefore arrays camed
int marks1,marks2,marks3, marks4, marks5;

It stores same datatype
contiguous in memory + linar (linarly data are imagined)

_____________________________
|     |     |    |     |     |---------->Array of one variable
______________________________

Array syntax
datatype variable [items]; //Here only arrays are created i.e array is initialized
datatype variable [items] = {store data in items};//Here arrays are created & then values are stored i.e array  & data bothis initialized
//you can initialize only value and don't put items
```cpp
#include <iostream>
using namespace std;

int main() {
    int marks [5] = {99,100,54,36,88};


    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;
    
    //0 to size-1
    cout << marks[5] << endl;//error
    cout << marks[-1] << endl;//error
    return 0;
}
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int marks [5] = {99,100,54,36,88};


    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;
    
    //0 to size-1
    cout << marks[5] << endl;//error
    cout << marks[-1] << endl;//error
    return 0;
}
OUTPUT:
99
100
54
36
88
0//error
21955//error
```

## Loops on Arrays
