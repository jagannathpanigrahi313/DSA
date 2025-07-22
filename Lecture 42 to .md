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
    if(n == 1){          //base case
        cout << "1\n";   //base case
        return ;         //base case
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

### Math of Recursion

![Screenshot from 2025-07-20 18-14-58](https://github.com/user-attachments/assets/a1b76bef-c99b-4035-a242-8e5de72d0e38)

### Recurrence Relation 

<img width="1920" height="1080" alt="Screenshot from 2025-07-20 18-27-00" src="https://github.com/user-attachments/assets/6a68739d-a68b-42f9-9ebe-55ae2eb167c4" />

Recursion always stops Base case ---> where we already know the ans i.e hamare n / parameter ki lowest value which  we already know the ans

## Q1)
<img width="1920" height="1080" alt="Screenshot from 2025-07-20 18-42-33" src="https://github.com/user-attachments/assets/3713c306-f300-4329-9327-8ec15fcc42ac" />

```cpp
#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0){     //base case
        return 1;   //base case
    }               //base case
    
    return n * factorial(n-1); 
}

int main() {
    cout << factorial(5) << endl;
    return 0;
}
// OUTPUT:
// 120
```
## Time complexity in Recursion
we can find TC in Recursion by two methods
1) Recurrence Relation
2) TC = total no.of recursion calls * work done in each call(preferable method)
---
by 1) Recurrence Relation

<img width="1920" height="1080" alt="Screenshot from 2025-07-20 19-08-50" src="https://github.com/user-attachments/assets/a6b7b419-4a2a-4e7e-9dde-349a70de8322" />

---
by 2) method

<img width="1920" height="1080" alt="Screenshot from 2025-07-20 19-32-26" src="https://github.com/user-attachments/assets/e7fba092-4312-411b-a2fc-8fc14be74aac" />

<img width="1920" height="1080" alt="Screenshot from 2025-07-20 19-32-43" src="https://github.com/user-attachments/assets/1f07adc4-6d94-455d-af90-202c9067ed13" />

## Space complexity in Recursion

<img width="1920" height="1080" alt="Screenshot from 2025-07-20 20-25-41" src="https://github.com/user-attachments/assets/165bc306-db4a-478e-9f94-c0208cfad120" />

<img width="1920" height="1080" alt="Screenshot from 2025-07-20 20-25-56" src="https://github.com/user-attachments/assets/14c61ad8-04c2-470f-a829-b8a1da9667f3" />

<img width="1920" height="1080" alt="Screenshot from 2025-07-20 20-26-10" src="https://github.com/user-attachments/assets/c838ff7e-da59-49e4-b78c-88244c99f814" />

## sum of N numbers (Recursive)

<img width="1920" height="1080" alt="Screenshot from 2025-07-21 21-46-25" src="https://github.com/user-attachments/assets/8330aba3-a9c4-4a97-9adb-15e666fde792" />

```cpp
#include <iostream>
using namespace std;

int sum(int n){
    if(n == 1){
        return 1;
    }
    
    return n + sum(n-1); 
}

int main() {
    cout << sum(5) << endl;
    return 0;
}
// OUTPUT:
// 15
```
# Lecture 43 - Recursion ---> Part 2
## Fibonacci series

to find nth term formula : t(base n) = t(base n-1) + t(base n+2)  

<img width="1920" height="1080" alt="Screenshot from 2025-07-22 20-50-57" src="https://github.com/user-attachments/assets/39cf3351-3056-43cb-8b43-5486dc674d98" />

recursion stops in base case -->when ![Screenshot from 2025-07-22 20-53-49](https://github.com/user-attachments/assets/a66ba11d-c346-4ca0-88f5-d246aa2bb20e)

509)Fibonacci number - Leetcode
```cpp
class Solution {
public:
    int fib(int n) {
        if(n == 0 || n == 1){
            return n;
        }

        return fib(n-1) + fib(n-2);
    }
};
```

## Recursive fibonacci - Time & space complexity

TC = total no. of calls * workdone in each call

<img width="1920" height="1080" alt="Screenshot from 2025-07-22 21-22-56" src="https://github.com/user-attachments/assets/687856c5-db95-4625-8462-b1c39618cec3" />

<img width="1920" height="1080" alt="Screenshot from 2025-07-22 21-23-43" src="https://github.com/user-attachments/assets/cd07a46f-61ad-49ef-993f-e397bb79fdec" />

SC = depth of recursive tree  * memory/space in each call 
     OR
     height of callstack
   = n * 1 = O(n)

     
