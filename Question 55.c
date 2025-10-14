// Q55: Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (int i = 2; i <= n; i++) {
        int isPrime = 1; // assume number is prime

        // check divisibility
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
