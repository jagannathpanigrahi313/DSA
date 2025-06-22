 it means loop inside a loop

Q 1) to print 5 times  * in 5 line

#include <iostream>
using namespace std;

int main() {

    for (int i=1; i<= 5; i++){// this middle term will run then update this is known as iteration
        cout << "*****"<<endl;
    }
return 0;
}

Q 2) to print x times * in one line 

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    for (int i= 1 ; i<=x ;i++){
        cout <<"x";
    }
return 0;
}

Q 3) to print x times * in 5 line 

#include <iostream>
using namespace std;

int main() {
    for (int i= 1 ; i<=x ;i++) {
        int x = 10;
        for (int i= 1 ; i<=x ;i++){
             cout <<"x";
        }
        cout << endl;
     }
return o;
}
  c
