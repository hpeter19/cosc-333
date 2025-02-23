# Factorial code
#include <iostream>  // Include the input-output library

using namespace std;

// Function to compute factorial recursively
long long computeFactorial(int number) {
    if (number == 0 || number == 1) // Base case: factorial of 0 or 1 is 1
        return 1;
    return number * computeFactorial(number - 1); // Recursive calculation
}
#include <iostream>  

using namespace std;
int main() {
    int inputNumber;

    // Request user input
    cout << "Please enter a positive integer: ";

    while (true) {
        cin >> inputNumber; // Read user input

        // Validate the input
        if (cin.fail() || inputNumber < 0) {
            cin.clear(); // Reset error flag
            cout << "Invalid input. Please enter a valid positive integer: ";
        } else {
            break; // Valid input, exit loop
        }
    }

    // Compute and display the factorial
    cout << "The factorial of " << inputNumber << " is: " << computeFactorial(inputNumber) << endl;

    return 0; // End of program
}
# PROGRAM FOR FIBONUUCCI
#include <iostream>  

using namespace std;

// Function to generate Fibonacci sequence up to n terms
void generateFibonacci(int n) {
    long long first = 0, second = 1, next;

    cout << "Fibonacci sequence up to " << n << " terms: " << endl;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cout << first << " ";
        } else if (i == 1) {
            cout << second << " ";
        } else {
            next = first + second;
            first = second;
            second = next;
            cout << next << " ";
        }
    }
    cout << endl;
}

int main() {
    int terms;

    // Prompt the user to enter the number of terms
    cout << "Enter the number of terms in the Fibonacci sequence: ";
    cin >> terms;

    // Generate and display the Fibonacci sequence
    generateFibonacci(terms);

    return 0; // End of program
}
