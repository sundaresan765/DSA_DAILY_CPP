#include <iostream>   // Include the standard input-output stream library

using namespace std;  // Allows us to use names from the standard library without the std:: prefix

int main() {          // The main function, where the execution of the program begins
    int a = 10;       // Declare an integer variable 'a' and initialize it with the value 10

    // Start of the for-loop, which iterates from 1 to the value of 'a'
    for (int i = 1; i <= a; i++) {
        // Print the current value of 'i' to the console followed by a new line
        std::cout << i << std::endl;
    }

    return 0;  // Return 0 to indicate successful completion of the program
}
