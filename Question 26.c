// Q26: Write a program to print numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;

    // Input n
    printf("Enter n: ");
    scanf("%d", &n);

    // Print numbers from 1 to n
    for(int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
