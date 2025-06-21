general
#include <istream>
using namespace std;

int main(){

if (condition ){
    cout <<"________\n";//true then 
   
} else if (  ){
      cout <<"________\n";//(  )true then
   
}
  else if(  ){
    cout <<"________\n";//(  )true then
  }//you can continue but end must wit else
  else{
     cout <<"________\n";//false then
  }
return 0;
}
___________________________________________________________________________________

Q 1. to check a student grade through marks
#include <istream>
using namespace std;

int main(){
    int marks;
    cout  << "enter marks : ";
    cin >> marks ;
  
if (marks >= 90 ){
    cout <<"A\n"; 
   
} else if (marks >= 80 && marks < 90){
      cout <<"B\n";
}
  else{
     cout <<"C\n";
  }
return 0;
}

