#include<iostream>       // Includes the standard input-output stream library
using namespace std;     // Allows using standard library names without the std:: prefix

int main()              // Main function where the program execution begins
{
    int a;              // Declare an integer variable 'a'; range: -2,147,483,648 to 2,147,483,647
    float b;            // Declare a float variable 'b'; range: 1.2E-38 to 3.4E+38 (single precision)
    double c;           // Declare a double variable 'c'; range: 2.3E-308 to 1.7E+308 (double precision)
    string d;           // Declare a string variable 'd'; no fixed range, depends on memory
    char e;             // Declare a character variable 'e'; range: -128 to 127 or 0 to 255 (typically 1 byte)
    bool f ;            // Declare a boolean variable 'f'; range: true (1) or false (0)

    std::cin >> a;      // Take input for the integer variable 'a'
    std::cin >> b;      // Take input for the float variable 'b'
    std::cin >> c;      // Take input for the double variable 'c'
    std::cin >> d;      // Take input for the string variable 'd'
    std::cin >> e;      // Take input for the character variable 'e'
    std::cin >> f;      // Take input for the boolean variable 'f'

    std::cout << a << std::endl;    // Output the value of 'a' followed by a new line
    std::cout << b << std::endl;    // Output the value of 'b' followed by a new line
    std::cout << c << std::endl;    // Output the value of 'c' followed by a new line
    std::cout << d << std::endl;    // Output the value of 'd' followed by a new line
    std::cout << e << std::endl;    // Output the value of 'e' followed by a new line
    std::cout << f << std::endl;    // Output the value of 'f' followed by a new line

    return 0;           // Return 0 to indicate successful program termination
}
