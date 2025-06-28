Function defination : it is used when we have to any same thing again & again after sometimes 
Function syntax : returntype printhello(){

                  cout <<"hello";

                  }
Not to bring returndency we use this means same code again and again
-----------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

//function defination 
void printhello (){
     cout << "hello\n";
}

int main() {
    //function call / invoke 
    printhello();
    printhello();
    //like this many times in code 
    return 0;
}
OUTPUT :hello
        hello
------------------------------------------------------------------------
#include <iostream>
using namespace std;

//function defination 
int printhello (){
     cout << "hello\n";
     return 3;
}

int main() {
    //function call / invoke 
    int val = printhello();
    cout <<"val = " << val <<endl;
    
    return 0;
}
OUTPUT:hello
       val = 3
-----------------------------------------------------------------------------------
parameters---->means input---> i.e are nothing but the copy of arguments
arguments are the actual values passed through a function--> they are literals means values that cannot change
Function syntax means input
  
#include <iostream>
using namespace std;

//sum of two numbers
int sum (int a, int b ){
    int s = a + b ;
    return s ;
}
int main() {
    cout << sum (10 , 5);

    return 0;
}
OUTPUT : 15
  -----------------------------------------------------------------------------------
#include <iostream>
using namespace std;

//sum of two numbers
double sum (double a, double b ){
    double s = a + b ;
    return s ;
}
int main() {
    cout << sum (10.5 , 5.4);

    return 0;
}
OUTPUT : 15.9
  -----------------------------------------------------------------------------
  #include <iostream>
using namespace std;

//min of two numbers
int minoftwo (int a, int b ){// parameters are nothing but the copy of arguments 
    if (a < b){
        return a;
    } else {
    return b;
    }
}

int main() {
    cout << "min = "<< minoftwo(5,3) << endl;//arguments are the actual values passed through a function

    return 0;
}
OUTPUT : min = 3
__________________________________________________________________________________________________
Q 1) calculate sum of numbers from 1 to N
#include <iostream>
using namespace std;

int sumN (int n){
    int sum = 0;

    for (int i = 1; i <= n; i++){
        sum += i;
    }
    return sum ;
}
int main (){
    cout << sumN(5) << endl;
    cout << sumN(10) << endl;
    return 0;
}
