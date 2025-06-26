this operator needs two operand

ARITMETIC OPERATOR

#include <iostream>
using namespace std ;   
    
int main() {
  int a = 11, b = 5;

  cout << "sum = "<< (a + b) << endl;
  cout << "difference = "<< (a - b) << endl;
  cout << "product = "<< (a * b) << endl;
  cout << "division = "<< (a / b) << endl; // we do not consider number after decimal in c++
  cout << "modulo = " << (a % b) << endl;
  return 0; 
}
 ---------------------------------------------------------------------------------------------------------  
#include <iostream> 
using namespace std ;

int main() {
  int a = 5;
  double b = 2;

  cout << (a / b) << endl ;//2.5
  return 0;
}



BY type casting method

#include <iostream> 
using namespace std ;

int main() {
  
  cout << (5 / (double)2) << endl;//2.5
  return 0;
}


#include <iostream>
using namespace std ;   
    
int main() {

  int ans = (5/(double)2);
  cout <<ans<<endl;// 2
  return 0;
}

RELATIONAL OPERATOR  --> give boolean value

#include <iostream>
using namespace std ;   
    
int main() {

  cout << (3 < 5) << endl;//true -> 1
  cout << (3 > 5) << endl;//false -> 0
  cout << (3 <= 5) << endl;//true -> 1
  cout << (3 >= 5) << endl;//false -> 0
  cout << (3 == 3) << endl;//true -> 1
  cout << (3 != 5) << endl; //true -> 1
  return 0;
}

LOGICAL OPERAIOR -->(1) OR (||)pipe perator 
                      |----> any one true then true
                      |---->cout << (  ) || (  ) << endl;

              (2) AND (&&)ampersand
                   |---->any one false then false
                   |----> cout << (  ) || (  ) << endl;

              (3) NOT (!)
                  |---->reverse the boolean value
                  |---->cout << !( ) << endl ;
