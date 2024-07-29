#include <iostream> // Include the iostream library for input and output operations

using namespace std; // Use the standard namespace to avoid prefixing std:: to standard library components

int b = 20; // Define and initialize a global variable b with the value 20
int a = 77; // Define and initialize a global variable a with the value 77
const int c = 78; // Define and initialize a global constant variable c with the value 78

int main() { // Start of the main function
    const int a = 10; // Define and initialize a local constant variable a with the value 10
    int c = 0; // Define and initialize a local variable c with the value 0
    int m = 22; // Define and initialize a local variable m with the value 22
    
    std::cout << a << std::endl; // Print the value of the local variable a (10) to the console followed by a newline
    std::cout << c << std::endl; // Print the value of the local variable c (0) to the console followed by a newline
    std::cout << b << std::endl; // Print the value of the global variable b (20) to the console followed by a newline
    std::cout << m << std::endl; // Print the value of the local variable m (22) to the console followed by a newline

    return 0; // End of the main function, returning 0 to indicate successful execution
}
/*output:
10
0
20
22
*/