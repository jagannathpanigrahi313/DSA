HERE, outerloop (no. lines)---> 0 to n-1
      inner loop(no. words) ----> 1 to i+1
                                  0 to i
1) from numbers

#include <iostream>
using namespace std;

int main () {
   int n = 4;
   
   for(int i=0; i<n; i++){
       for(int j= 0; j< i+1; j++){
           cout <<" *";//OUTPUT: *
                        //       * *
                        //       * * *
                      //         * * * *
       }
       cout << endl;
   }
   return 0;
}
-----------------------------------------------------------------------
2) from numbers 

#include <iostream>
using namespace std;

int main () {
   int n = 4;
   
   for(int i=0; i<n; i++){
       for(int j= 0; j< i+1; j++){
           cout <<(i+1)<<" ";
       }
       cout << endl;// OUTPUT:1 
//                            2 2 
//                            3 3 3 
//                            4 4 4 4
   }
   
   return 0;
}
---------------------------------------------------------------
3) From 
