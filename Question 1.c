// Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>

int main() {
    int a, b, sum;

    // Taking input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculating sum
    sum = a + b;

    // Displaying output
    printf("Sum = %d\n", sum);

    return 0;
}
