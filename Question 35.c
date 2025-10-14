// Q35: Write a program to print all factors of a given number.

#include <stdio.h>

int main() {
    int num;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print factors
    printf("Factors: ");
    for(int i = 1; i <= num; i++) {
        if(num % i == 0)
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
