general 

#include <istream>
using namespace std;

int main(){

if (condition ){
    cout <<"________\n";//true then 
   
} else {
      cout << "________\n";//false then
   
}
return 0;
}

Q 1) to check a number is positive or negative

#include <istream>
using namespace std;

int main(){
   int n = -5;

if (n >= 0){
    cout <<"n is positive\n";
} else {
      cout << "n is negative\n";
}
return 0;
}

Q 2) to check a person can vote or not through its age
#include <istream>
using namespace std;

int main(){
  int age;
  cout << "enter the age:";
  cin >> age;

  if (age >= 18){
     cout << "you can vote\n";
  } else {
    cout <<"you can't vote\n";
  }

return 0;
}

Q 3) to check a number is odd or even 
#include <istream>
using namespace std;

int main(){
  int n;
  cout << "enter the number:";
  cin >> n;

  if (n%2 == 0){
 cout << "even\n";
 cout << "bye \n";//you can put maby outputs 
     
  } else {
    cout <<"odd\n";
  }

return 0;
)
