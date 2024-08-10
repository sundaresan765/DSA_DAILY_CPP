#include <iostream>   // Include the standard input-output stream library

using namespace std;  // Allows us to use names from the standard library without the std:: prefix

int main() {          // The main function, where the execution of the program begins
    int a = 10;       // Declare an integer variable 'a' and initialize it with the value 10
    int i = 1;        // Declare an integer variable 'i' and initialize it with the value 1

    // Start of the do-while loop
    do {
        // Print the current value of 'i' to the console followed by a new line
        std::cout << i << std::endl;
        
        // Increment the value of 'i' by 1 on each iteration
        i++;
    } while (i <= a);  // The loop will continue as long as 'i' is less than or equal to 'a'

    return 0;  // Return 0 to indicate successful completion of the program
}
