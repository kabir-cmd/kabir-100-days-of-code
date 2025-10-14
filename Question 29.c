// Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;  // Use long long for larger factorials

    // Input n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate factorial
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }

    // Display result
    printf("%lld\n", factorial);

    return 0;
}
