
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
