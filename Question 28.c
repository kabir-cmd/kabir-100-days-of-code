// Q28: Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;
    long long product = 1;  // Use long long for larger results

    // Input n
    printf("Enter n: ");
    scanf("%d", &n);

    // Multiply even numbers from 1 to n
    for(int i = 2; i <= n; i += 2) {
        product *= i;
    }

    // Display result
    printf("%lld\n", product);

    return 0;
}
