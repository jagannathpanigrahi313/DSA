Q1)

#include <iostream>
using namespace std;

int main () {
    int n = 4;

    int num = 1;
    for(int i = 0; i < n; i++) { 
        //spaces 
        for(int j = 0; j < i; j++) {
            cout << " ";
        }

        //nums
        for( int j = 0;j< n-i;j++){
            cout << i+1 ;//if you will put <<" "; this then we will get pyramid structure
            
                         //output:1111
                          //       222
                          //        33
                          //         4
        }
        cout << endl;              // Move to next line
    }

    return 0;
}
--------------------------------------------------------------------
Q2)
#include <iostream>
using namespace std;

int main () {
    char ch = 'A'; // starting character

    for (int i = 0; i < 3; i++) { // 3 lines
        // Print spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Print characters (3 - i times)
        for (int j = 0; j < 3 - i; j++) {
            cout << char(ch + i);//if you will put <<" "; this then we will get pyramid structure
                                 //OUTPUT :
                                 //         BBB
        }                       //           CC
                                //            D
        cout << endl;
    }

    return 0;
}
-------------------------------------------------------------------------------
Q3)
#include <iostream>
using namespace std;

int main () {
    char ch = 'A'; // starting character

    for (int i = 0; i < 4; i++) { // 4 lines
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Print characters (4 - i times)
        for (int j = 0; j < 4 - i; j++) {
            cout << ch;//OUTPUT:AAAA
                      //         BBB
                      //          CC
                      //           D

        }

        ch++; // move to next character
        cout << endl;
    }

    return 0;
}
    
