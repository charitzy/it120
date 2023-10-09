#include <stdio.h>

int main()
{
    double a, b; // Using double to handle floating-point numbers
    double sum, product, quotient, difference;
    int remainder;

    // Taking input for the two numbers
    printf("Enter the first number: ");
    scanf("%lf", &a);
    printf("Enter the second number: ");
    scanf("%lf", &b);

    // Calculating the results
    sum = a + b;
    product = a * b;
    difference = a - b;

    // Before computing quotient and remainder, ensure that b is not zero
    if (b == 0.0)
    {
        printf("Division by zero is not allowed.\n");
        return 1; // exit with an error code
    }

    quotient = a / b;
    remainder = (int)a % (int)b;

    // Displaying the results
    printf("Sum: %lf\n", sum);
    printf("Product: %lf\n", product);
    printf("Difference: %lf\n", difference);
    printf("Quotient: %lf\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
