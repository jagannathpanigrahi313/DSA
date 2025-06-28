
1) in the from of  numbers

#include <iostream>
using namespace std;

int main () {
   int n = 4;

  int num = 1; 
  
   for(int i=0; i<n; i++){
       for(int j= 0; j< i+1; j++){
           cout << num ;//OUTPUT: 1
           num++;       //        23
                        //        456
                        //        78910
       }
       cout << endl;
   }
   return 0;
}
--------------------------------------------------------------------------------
2) in the from of  characters

#include <iostream>
using namespace std;

int main () {
   int n = 4;

char ch = 'A'; 
  
   for(int i=0; i< n ; i++){
       for(int j= 0; j< i+1; j++){
           cout << ch << " ";
           ch++;
       }
       cout << endl;
   }
   return 0;
}
// OUTPUT : A 
//          B C 
//          D E F 
//          G H I J
