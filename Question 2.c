// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    int a, b;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Perform operations
    int sum = a + b;
    int diff = a - b;
    int product = a * b;
    int quotient = a / b;  // integer division

    // Display results
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);

    return 0;
}
