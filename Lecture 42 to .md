# Lecture 42 - Recursion ->Part 1

## what is Recursion 

Recursion means in our there is a function which calls itself

<img width="1920" height="1080" alt="Screenshot from 2025-07-20 14-30-22" src="https://github.com/user-attachments/assets/b0658742-b39c-40ec-81d8-87c2ae6f40c0" />
 base case ----> worst case ---> 1
 
this is what our recursion is
```cpp
#include <iostream>
using namespace std;

void abc(){

    abc();
}

int main() {

    return 0;
}
```

jitne bhi kaam loop se kar sakte hai vho saare kaam hum recursion se kar sakte hai &viceversa

<img width="1920" height="1080" alt="Screenshot from 2025-07-20 14-42-59" src="https://github.com/user-attachments/assets/de2b2e04-787e-46fd-8eaa-499c5e4d5477" />

![Screenshot from 2025-07-20 15-05-53](https://github.com/user-attachments/assets/cac4b96c-26b0-4cc1-9fbb-bf883584f82a)
```cpp
#include <iostream>
using namespace std;

void printNums(int n){

    if(n == 1){
        cout << "1\n";
        return ;
    }
    cout << n << " ";//n,n-1,n-2,n-3,....to 1
    printNums(n-1);
}

int main() {
    printNums(4);
   return 0;
}
// OUTPUT:
// 4 3 2 1
```
<img width="1920" height="1080" alt="Screenshot from 2025-07-20 16-39-50" src="https://github.com/user-attachments/assets/b2798c6c-e7df-49c4-bf6b-4c045e01a1ea" />

<img width="1920" height="1080" alt="Screenshot from 2025-07-20 16-40-08" src="https://github.com/user-attachments/assets/7aa816dd-d952-4185-bc0a-76e114fa5aa2" />

<img width="1920" height="1080" alt="Screenshot from 2025-07-20 16-42-13" src="https://github.com/user-attachments/assets/47879336-43d1-473b-8847-1b5b739b8a5a" />

<img width="1920" height="1080" alt="Screenshot from 2025-07-20 16-42-58" src="https://github.com/user-attachments/assets/b8622202-c075-400a-9c2c-05fc96c117d3" />

