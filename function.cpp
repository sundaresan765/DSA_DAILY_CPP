#include <iostream> // Include the iostream library for input and output operations

// Function declarations
int sun(int b, int c); // Declare the sun function that takes two integers and returns an integer
void suns(int b, int c); // Declare the suns function that takes two integers and returns void

int main() { // Start of the main function
    int b, c; // Declare two integer variables, b and c
    
    std::cin >> b; // Read an integer value from the user and store it in b
    std::cin >> c; // Read another integer value from the user and store it in c
    
    int a = sun(b, c); // Call the sun function with b and c as arguments, and store the result in a
    
    std::cout << a << std::endl; // Print the value of a to the console followed by a newline
    
    suns(b, c); // Call the suns function with b and c as arguments
    
    return 0; // Return 0 to indicate successful completion of the program
} // End of the main function

// Function definitions
int sun(int b, int c) { // Define the sun function
    return c + b; // Return the sum of b and c
}

void suns(int b, int c) { // Define the suns function
    std::cout << b * c << std::endl; // Print the product of b and c to the console followed by a newline
}
