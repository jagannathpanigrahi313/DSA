Function defination : it is used when we have to any same thing again & again after sometimes 
Function syntax : returntype printhello(){

                  cout <<"hello";

                  }
parameters---->means input
Function syntax means input
  
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
  

