#include <iostream>

int main()
{
    double a, b; // Using double to handle floating-point numbers
    double sum, product, quotient, difference;
    int remainder;

    // Taking input for the two numbers
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;

    // Calculating the results
    sum = a + b;
    product = a * b;
    difference = a - b;

    // Before computing quotient and remainder, ensure that b is not zero
    if (b == 0.0)
    {
        std::cout << "Division by zero is not allowed." << std::endl;
        return 1; // exit with an error code
    }

    quotient = a / b;
    remainder = static_cast<int>(a) % static_cast<int>(b); // Explicitly casting the values to int for remainder operation

    // Displaying the results
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;

    return 0;
}
