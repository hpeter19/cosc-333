
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
