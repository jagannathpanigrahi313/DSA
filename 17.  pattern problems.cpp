---------To print n lines (rows), the outer loop must run n times.
|||||||||To print n symbols (or words) in each line, the inner
          loop must run n times for each outer loop iteration.

Q 

#include <iostream>
using namespace std;

int main () {
   int n = 4;

   for(int i=1; i<=n; i++){//outer

       for(int j= 1; j<= n; j++){//inner
           cout << j <<" ";//<<" " this put space between numbers
       }
       cout << endl; 
   }
   return 0;
}


