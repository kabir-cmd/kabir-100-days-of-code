// Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num, original, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Calculate sum of factorial of digits
    while(num != 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    // Check strong number
    if(sum == original)
        printf("Strong number\n");
    else
        printf("Not strong number\n");

    return 0;
}
