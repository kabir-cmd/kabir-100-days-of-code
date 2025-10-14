// Q30: Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int num, reversed = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    // Display result
    printf("%d\n", reversed);

    return 0;
}
