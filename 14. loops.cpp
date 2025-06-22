note: count = count +1 OR count + = 1 OR count++
      i =  i +2 OR i + = 2 
  
1 ) while loop

Q 1. print 1 to 10 
  
#include <iostream>    
using namespace std;     
                         
int main () {            
  int count = 1;         

  while (count <= 10){
    cout << count <<" ";
    count++;// if i not put this then output will infinite times 1
  }
  cout <<endl;//output : 1 2 3 4 5 6 7 8 9 10 
 return 0;
}

Q 2. print 1 to n 

#include <iostream>    |output :1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 
using namespace std;    
                        
int main () {           
  int n = 50;           
  int count = 1;

  while (count <= n){
    cout << count <<" ";
    count++;//if i not put this then output will infinite times 1
  }
  
  cout <<endl;
 return 0;
}
_______________________________________________________________________________________
2 ) for loop
#include <iostream>     
using namespace std;     
                         
int main () {            
  int n = 10;

  for (int i = 1; i <= n;i = i+2){
     cout << i <<" ";//output : 1 3 5 7 9
  }
      cout << endl;
return 0;
}

Q 1) print sum of numbers from 1 to n
      
#include <iostream>           
using namespace std;          
                        
int main () {
  int n = 50;
  int sum  = 0;
      
 for( int i= 1;i <= n; i++){
       sum += i;
 }
      
  cout<<"sum = "<< sum << endl;//output : sum = 1275
 return 0;
}



#include <iostream>           
using namespace std;          
                        
int main () {
  int n = 50;
  int sum  = 0;
      
 for( int i= 1;i <= n; i++){
       sum += i;
       if(i == 5){
           break;// this is a keyword which tkes out from loop 
       }
 }
      
  cout<<"sum = "<< sum << endl;//output : sum = 15
 return 0;
}

Q 2) sum of all odd numbers from 1 to n
#include <iostream>     
using namespace std;     
                         
int main () {            
  int n  = 50;
  int oddsum = 0;

  for (int i = 1 ; i <= n; i++){
      if (i%2 != 0){
          oddsum += i ;
          }
      }
      
  cout <<"odd sum = "<< oddsum <<endl;// output: oddsum = 625 
 return 0;
}
_____________________________________________________________________________________________
3) do-while loop
#include <iostream>           
using namespace std;          
                        
int main () {
 do {
       cout<< "hello world\n";
 }while (3 > 5);
       
 return 0;
}

Q 1) print 1 to n numbers
#include <iostream>           
using namespace std;          
                        
int main () {
    int n = 10;
    int i = 1; 
    
     do {
         cout<< i << " ";
         i++;  
     }while (i <= n );

      cout << endl;//1 2 3 4 5 6 7 8 9 10 
      return 0;
}

**Q 2) check if a number is prime or not
      

#include <iostream>           
using namespace std;          
                        
int main () {
    int n = 7;
    bool isprime = true;

    for (int i = 2;i <= n-1; i++){//loop is running from 2 to n-1 
        if(n % i == 0 ) {
           isprime = false ;
            break;
        }
    }

if(isprime == true){
   cout << "prime no\n";
} else {
    cout << "non prime no\n";
}

// isprime -> true -> prime
// isprime -> false -> non prime
return 0;
}


----------------------------------------------another method-----------------------------------------------------------------------
#include <iostream>           
using namespace std;          
                        
int main () {
    int n = 7;
    bool isprime = true;

    for (int i = 2; i * i <= n ; i++){//loop is runing from 2 to (underroot of n) Here maximum i value is underroot of n
        if(n % i == 0 ) {
           isprime = false ;
            break;
        }
    }

if(isprime == true){
   cout << "prime no\n";
} else {
    cout << "non prime no\n";
}

// isprime -> true -> prime
// isprime -> false -> non prime
return 0;
}
   
