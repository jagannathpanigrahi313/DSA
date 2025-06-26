this operator needs only one operand

1. increment++
#include <iostream>
using namespace std ;   
    
int main() {
   int a = 10;

   int b = a++; //kaam : update -->post increment operator
   cout << "b = "<< b << endl;//10
  cout << "a = "<< a << endl; //11
  return 0;
}

#include <iostream>
using namespace std ;   
    
int main() {
   int a = 10;

   int b = ++a; //update : kaam --> pre increment operator
   cout << "b = "<< b << endl;//11
  cout << "a = "<< a << endl; //11
  return 0;
}

2. decrement--

  #include <iostream>
using namespace std ;   
    
int main() {
   int a = 10;

   int b = a--; //kaam : update -->post decrement operator
   cout << "b = "<< b << endl;//10
  cout << "a = "<< a << endl; //9
  return 0;
}

#include <iostream>
using namespace std ;   
    
int main() {
   int a = 10;

   int b = --a; //update : kaam --> pre decrement operator
   cout << "b = "<< b << endl;//9
  cout << "a = "<< a << endl; //9
  return 0;
}
