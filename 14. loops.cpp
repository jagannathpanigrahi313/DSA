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
