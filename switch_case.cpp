#include <iostream>   // Include the standard input-output stream library

using namespace std;  // Allows us to use names from the standard library without the std:: prefix

int main() {          // The main function, where the execution of the program begins
    int k = 10;       // Declare an integer variable 'k' and initialize it with the value 10

    // Start of the switch statement, which evaluates the value of 'k'
    switch (k) {
        case 1:  // Case when 'k' is equal to 1
            std::cout << "monday" << std::endl;  // Print "monday" to the console
            break;  // Exit the switch block

        case 2:  // Case when 'k' is equal to 2
            std::cout << "Tuesday" << std::endl;  // Print "Tuesday" to the console
            break;  // Exit the switch block

        case 3:  // Case when 'k' is equal to 3
            std::cout << "wednesday" << std::endl;  // Print "wednesday" to the console
            break;  // Exit the switch block

        case 4:  // Case when 'k' is equal to 4
            std::cout << "thursday" << std::endl;  // Print "thursday" to the console
            break;  // Exit the switch block

        case 5:  // Case when 'k' is equal to 5
            std::cout << "friday" << std::endl;  // Print "friday" to the console
            break;  // Exit the switch block

        case 6:  // Case when 'k' is equal to 6
            std::cout << "saturday" << std::endl;  // Print "saturday" to the console
            break;  // Exit the switch block

        case 7:  // Case when 'k' is equal to 7
            std::cout << "sunday" << std::endl;  // Print "sunday" to the console
            break;  // Exit the switch block

        default:  // Default case when none of the above cases match
            std::cout << "none of these" << std::endl;  // Print "none of these" to the console
            break;  // Exit the switch block
    }

    return 0;  // Return 0 to indicate successful completion of the program
}
