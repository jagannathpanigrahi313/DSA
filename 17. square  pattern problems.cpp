---------To print n lines (rows), the outer loop must run n times.
|||||||||To print n symbols (or words) in each line, the inner
          loop must run n times for each outer loop iteration.

generaly we start the algorithm loops from i=0 to j=0 
        EX: if a loop is starting from i=1 to n (to print n no. numbers of line)-------
                                       i=0 to n-1 (to print n no. numbers of line)----| this both are same

1) square pattern
  i) in the form of numbers

#include <iostream>
using namespace std;

int main () {
   int n = 4;

   for(int i=1; i<=n; i++){//outer

       for(int j= 1; j<= n; j++){//inner
           cout << j <<" ";//<<" " this is to put space between numbers in each line (ALWAYS REMEMBER)
       }
       cout << endl; 
   }
   return 0;
}
----------------------------------------------------------------------------------------------------------
ii) in the form of stars

#include <iostream>
using namespace std;

int main () {
   int n = 4;

   for(int i=0; i<n; i++){//OR PUT(int i=0 ; i<=n-1 ; i++ )
       for(int j= 1; j<= n; j++){
           cout << " * ";// in this case to put space between stars in eaach line we can put her only 
       }
       cout << endl;
   }
   return 0;
}
------------------------------------------------------------------------------------------------       
iii) in the form of characters
          
#include <iostream>
using namespace std;

int main () {
   int n = 4;
   //char ch = 'A'; 
   for(int i=0; i<n; i++){
       char ch = 'A';
       for(int j= 0; j< n; j++){
           cout << ch <<" ";
           ch = ch + 1;
       }
       cout << endl;
   }
   return 0;
}
-----------------------------------------------------------------------------------------------------
                              continous square pattern 
i) in form of numbers

#include <iostream>
using namespace std;

int main () {
   int n = 4;
   
   int num = 1;

   for(int i=0; i<n; i++){
       for(int j= 0; j< n; j++){
           cout << num <<" ";
           num++;
       }
       cout << endl;
   }
   
   cout << "after pattern : "<< num << endl;//this is to verify your dry run thinking is correct or not

   return 0;
}
__________________________________________________________________________________________________________
ii) in form of characters

#include <iostream>
using namespace std;

int main () {
   int n = 4;
   
   char ch = 'a';

   for(int i=0; i<n; i++){
       for(int j= 0; j< n; j++){
           cout << ch <<" ";
           ch++;
       }
       cout << endl;
   }
   
   cout << "after pattern : "<< ch << endl;//this is to verify your dry run thinking is correct or not

   return 0;
}
