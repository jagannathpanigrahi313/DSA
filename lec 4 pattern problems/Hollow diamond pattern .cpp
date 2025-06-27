#include <iostream>
using namespace std;

int main () {
    int n = 4;
    // top
    for (int i=0;i<n;i++){
        // spaces : n-i-1
        for (int j=0; j<n-i-1;j++){
            cout << " ";
        }
    
         cout << "*";

         if(i!= 0){
            //spaces
            for(int j = 0;j<2*i-1;j++){
                cout << " ";
            }
            cout << "*";
         }
         cout<< endl;
    } 


    // bottom
    for(int i =0; i< n-1;i++){
        //spaces
        for (int j = 0; j< i+1;j++){
            cout << " ";
        }

        cout<<"*";

        if (i != n-2){//one correction done 
            //spaces
            for (int j=0;j< 2*(n-i)-5;j++){     // 2*(n-2-i)-1 = 2n-4-2i-1 = 2(n-i)-5
                cout<<" ";
            }
            cout <<"*";
        }
        cout<< endl;
    }
       
    return 0;
}
//OUTPUT : 
//   *
//  * *
// *   *
//*     *
// *   *
//  * *
//   *
