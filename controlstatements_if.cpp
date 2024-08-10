#include <iostream>   // Include the standard input-output stream library

using namespace std;  // Allows us to use names from the standard library without the std:: prefix

int main() {          // The main function, where the execution of the program begins
    int a = 10;       // Declare an integer variable 'a' and initialize it with the value 10

    // Check if the value of 'a' is greater than 0
    if (a > 0) {
        // If the condition is true, print "positive number" to the console
        std::cout << "positive number" << std::endl;
    }
    else {
        // If the condition is false (i.e., 'a' is not greater than 0), print "negative number"
        std::cout << "negative number" << std::endl;
    }

    return 0;  // Return 0 to indicate successful completion of the program
}
