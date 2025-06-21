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

  cout << (a / b) << endl ;
  return 0;
}



BY type casting method

#include <iostream> 
using namespace std ;

int main() {
  
  cout << (5 / (double)2) << endl ;
  return 0;
}


#include <iostream>
using namespace std ;   
    
int main() {

  int ans = (5/(double)2);
  cout <<ans<<endl;
  return 0;
}
