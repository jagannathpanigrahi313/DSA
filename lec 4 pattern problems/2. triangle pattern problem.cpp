Outer loop	Controls the rows
Inner loop	Prints character multiple times per row

HERE, outerloop (no. lines)---> 0 to n-1
      inner loop(no. words) ----> 1 to i+1
                                  0 to i

                                           1st type( Same Character Repeated Per Row)
1) in the from of  numbers

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
2) in the from of  numbers 

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
3) in the from of characters 

#include <iostream>
using namespace std;

int main () {
    char ch = 'a';  // start with 'a'

    for(int i = 1; i <= 5; i++) {  // total 5 rows (change as needed)
        for(int j = 1; j <= i; j++) {
            cout << ch << " ";
        }
        ch++;  // move to next character for next row
        cout << endl;  //OUTPUT: a
                     //          b b 
                    //           c c c 
                   //            d d d d 
                  //             e e e e e 
    }
    return 0;
}
----------------------------------------------------------------------------------------------
                                        2nd type (Character Increment Pattern)
#include <iostream>
using namespace std;

int main () {
   char ch = 'a';

   for(int i = 0; i < 5; i++) {  // limit number of rows (say 5 rows)
       for(int j = 0; j <= i; j++) {
           cout << ch++ << " ";//OUTPUT: a 
                              //         b c 
                              //         d e f 
                              //         g h i j 
                              //         k l m n o 
       }
       cout << endl;
   }

   return 0;
}
------------------------------------------------------------------------------------------------------
                         3rd type ( Left-Aligned Number Triangle)      
#include <iostream>
using namespace std;

int main () {
    int n = 5 ;

    for(int i = 1; i <= n; i++) { 
        for(int j = 1; j <= i; j++) {
            cout << j << " ";//OUTPUT:1 
                             //       1 2 
                             //       1 2 3 
                             //       1 2 3 4 
                             //       1 2 3 4 5 
        }
        cout << endl;
    }

    return 0;
}
----------------------------------------------------------------------------------------------------
      NOTE : THE cout line where output comes due that all types made till here
----------------------------------------------------------------------------------------------------------
                                            REVERSE triangle pattern
I ) in the form of numbers

#include <iostream>
using namespace std;

int main () {
    int n = 4;

    for(int i = 0; i < n; i++) { 
        for(int j = i+1; j > 0; j--) {// bacward loop
            cout << j << " ";
        }
        cout << endl;// OUTPUT : 1 
                    //           2 1 
                    //           3 2 1 
                    //           4 3 2 1 
    }

    return 0;
}

ii) in the form of characters

#include <iostream>
using namespace std;

int main () {
    int n = 4;

    for(int i = 0; i < n; i++) { 
        char ch = 'A' + i;         // Start letter for this row

        for(int j = 0; j <= i; j++) {
            cout << char(ch - j) << " ";  // Print letters in reverse    // OUTPUT : A
        }                                                                //          B A
                                                                         //          C B A
        cout << endl;              // Move to next line                  //          D C B A
    }

    return 0;
}

