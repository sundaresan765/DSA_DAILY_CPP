#include <iostream>   // Include the standard input-output stream library

using namespace std;  // Allows us to use names from the standard library without the std:: prefix

int main() {          // The main function, where the execution of the program begins
    auto a = 67;      // 'a' is deduced as an int (67 is an integer literal)
    auto b = 6.7;     // 'b' is deduced as a double (6.7 is a floating-point literal)
    auto c = "fjfj";  // 'c' is deduced as a const char* (pointer to a constant character array)
    auto d = 's';     // 'd' is deduced as a char (single character literal 's')

    // Print the value of 'a' to the console
    std::cout << a << std::endl;  

    // Print the value of 'b' to the console
    std::cout << b << std::endl;  

    // Print the value of 'c' to the console
    std::cout << c << std::endl;  

    // Print the value of 'd' to the console
    std::cout << d << std::endl;  

    return 0;  // Return 0 to indicate successful completion of the program
}
/*

Interview Questions Related to auto Keyword:
What is the purpose of the auto keyword in C++?

The auto keyword allows the compiler to automatically deduce the type of a variable from its initializer.
How does auto handle different types of initializers?

auto deduces the type based on the value assigned to the variable. For example, auto a = 10; deduces a as int, while auto b = 10.5; deduces b as double.
Can you use auto without an initializer?

No, auto requires an initializer for the compiler to deduce the type. Using auto without an initializer will result in a compilation error.
How does auto handle pointers and references?

auto deduces the type as a pointer or reference if the initializer is a pointer or reference. For example, int x = 5; int* ptr = &x; auto p = ptr; will deduce p as int*.
What are the benefits of using auto in modern C++?

auto simplifies the code, especially when dealing with complex types, such as iterators or template-based types. It also reduces redundancy and potential errors when writing the type explicitly.
What are the potential downsides or considerations when using auto?

Overuse of auto can make the code less readable, especially if the deduced type is not immediately clear to someone reading the code. It’s important to use auto when it genuinely improves code clarity and maintainability.
Can auto be used with lambda expressions?

Yes, auto is often used with lambda expressions to deduce the type of the lambda itself, which can be complex to write out explicitly.
How does auto behave with const and volatile qualifiers?

auto respects const and volatile qualifiers. For example, const int x = 10; auto y = x; deduces y as int, dropping the const unless explicitly stated as const auto y = x;
*/