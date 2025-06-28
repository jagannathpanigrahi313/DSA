
#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // ----------- Upper Half -----------
    for (int i = 1; i <= n; i++) {
        // Print left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Print spaces (2 * (n - i))
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
OUTPUT:
*      *         // 1 star, 6 spaces, 1 star
**    **         // 2 stars, 4 spaces, 2 stars
***  ***         // 3 stars, 2 spaces, 3 stars
********         // 4 stars, 0 spaces, 4 stars
********         // Lower half starts
***  ***
**    **
*      *

        // Print right stars (same as left)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Move to next line
        cout << endl;
    }

    // ----------- Lower Half -----------
    for (int i = n; i >= 1; i--) {
        // Print left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Print spaces (2 * (n - i))
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        // Print right stars (same as left)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}


