// Q27: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input n
    printf("Enter n: ");
    scanf("%d", &n);

    // Sum of first n odd numbers
    for(int i = 1; i <= 2*n; i += 2) {
        sum += i;
    }

    // Display result
    printf("%d\n", sum);

    return 0;
}
