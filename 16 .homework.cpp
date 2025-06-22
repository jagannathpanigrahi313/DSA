Q 1) sum of all numbers from 1 to N which are divisible by K
#include <iostream>
using namespace std;

int main() {
    int N, K;
    cout << "Enter N: ";
    cin >> N;
    cout << "Enter K (divisor): ";
    cin >> K;

    cout << "Numbers divisible by " << K << " from 1 to " << N << ":\n";

    for (int i = K; i <= N; i += K) {// WE icrement by k so it will increment by k only
        cout << i << " ";
    }

    cout << endl;
    return 0;
}

Q 2) print factorial of a single number N
#include <iostream>             // Include input-output library
using namespace std;            // So we can use cout, cin without std::

int main() {
    int N;                      // Variable to store user input
    cout << "Enter a number: "; // Ask user for a number
    cin >> N;                   // Take input from user

    long long factorial = 1;    // Initialize factorial to 1 (long long for large numbers)

    for (int i = 1; i <= N; i++) {
        factorial *= i;         // Multiply factorial with each i from 1 to N
    }

    cout << "Factorial of " << N << " is: " << factorial << endl;  // Output the result

    return 0;                   // End of program
}

Q 3)print Factorial from 1 to 6(increasing  order)
  
#include <iostream>             // Include input-output functions
using namespace std;            // Avoid typing std:: repeatedly

int main() {
    long long factorial = 1;    // Start with 1 for multiplication

    for (int i = 1; i <= 6; i++) {
        factorial *= i;         // Multiply with current i to get factorial
        cout << "Factorial of " << i << " is: " << factorial << endl;
                                // Print factorial of current i
    }

    return 0;                   // End of program
}
----------------------------------------------------------------------------------
Q 4) Print factorials from 6 to 1 (reverse order)
  
  #include <iostream>             // For input/output
using namespace std;            // Use standard namespace

int main() {
    long long factorial = 1;    // Declare and initialize factorial to 1

    // First calculate 6!
    for (int i = 1; i <= 6; i++) {
        factorial *= i;         // Multiply to get 6! = 720
    }

    // Now print factorials from 6 to 1 in reverse order
    for (int i = 6; i >= 1; i--) {
        cout << "Factorial of " << i << " is: " << factorial << endl;
                                // Print the current factorial
        factorial /= i;         // Divide by i to get (i-1)! for next loop
    }

    return 0;                   // End of program
}

